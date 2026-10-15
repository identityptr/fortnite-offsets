/**
 * decamp dumper generated SDK
 * Package: /Script/GeometryCollectionNodes
 */
#pragma once
#include "Basic.h"

// /Script/GeometryCollectionNodes.AbsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAbsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAbsDataflowNode, float_) == 224, "Offset mismatch for FAbsDataflowNode::float_");
static_assert(offsetof(FAbsDataflowNode, ReturnValue) == 228, "Offset mismatch for FAbsDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.AddCustomCollectionAttributeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAddCustomCollectionAttributeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t GroupName; // 0x0110 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    FString CustomGroupName; // 0x0118 (Size: 0x10, Type: StrProperty)
    FString AttrName; // 0x0128 (Size: 0x10, Type: StrProperty)
    std::uint8_t CustomAttributeType; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0139
    std::int32_t NumElements; // 0x013C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, Collection) == 224, "Offset mismatch for FAddCustomCollectionAttributeDataflowNode::Collection");
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, GroupName) == 272, "Offset mismatch for FAddCustomCollectionAttributeDataflowNode::GroupName");
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, CustomGroupName) == 280, "Offset mismatch for FAddCustomCollectionAttributeDataflowNode::CustomGroupName");
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, AttrName) == 296, "Offset mismatch for FAddCustomCollectionAttributeDataflowNode::AttrName");
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, CustomAttributeType) == 312, "Offset mismatch for FAddCustomCollectionAttributeDataflowNode::CustomAttributeType");
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, NumElements) == 316, "Offset mismatch for FAddCustomCollectionAttributeDataflowNode::NumElements");

// /Script/GeometryCollectionNodes.AddDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAddDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float FloatA; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAddDataflowNode, FloatA) == 224, "Offset mismatch for FAddDataflowNode::FloatA");
static_assert(offsetof(FAddDataflowNode, FloatB) == 228, "Offset mismatch for FAddDataflowNode::FloatB");
static_assert(offsetof(FAddDataflowNode, ReturnValue) == 232, "Offset mismatch for FAddDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.AddMaterialToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAddMaterialToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FaceSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    TArray<void*> Materials; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    void* OutsideMaterial; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    void* InsideMaterial; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAssignOutsideMaterial; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAssignInsideMaterial; // 0x0159 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAddMaterialToCollectionDataflowNode, Collection) == 224, "Offset mismatch for FAddMaterialToCollectionDataflowNode::Collection");
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, FaceSelection) == 272, "Offset mismatch for FAddMaterialToCollectionDataflowNode::FaceSelection");
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, Materials) == 312, "Offset mismatch for FAddMaterialToCollectionDataflowNode::Materials");
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, OutsideMaterial) == 328, "Offset mismatch for FAddMaterialToCollectionDataflowNode::OutsideMaterial");
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, InsideMaterial) == 336, "Offset mismatch for FAddMaterialToCollectionDataflowNode::InsideMaterial");
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, bAssignOutsideMaterial) == 344, "Offset mismatch for FAddMaterialToCollectionDataflowNode::bAssignOutsideMaterial");
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, bAssignInsideMaterial) == 345, "Offset mismatch for FAddMaterialToCollectionDataflowNode::bAssignInsideMaterial");

// /Script/GeometryCollectionNodes.AddRootProxyMeshToArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAddRootProxyMeshToArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> RootProxyMeshes; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RootProxyMesh[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAddRootProxyMeshToArrayDataflowNode, RootProxyMeshes) == 224, "Offset mismatch for FAddRootProxyMeshToArrayDataflowNode::RootProxyMeshes");
static_assert(offsetof(FAddRootProxyMeshToArrayDataflowNode, RootProxyMesh) == 240, "Offset mismatch for FAddRootProxyMeshToArrayDataflowNode::RootProxyMesh");

// /Script/GeometryCollectionNodes.AddToMaterialInterfaceArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAddToMaterialInterfaceArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> MaterialArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialsToAdd; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAddToMaterialInterfaceArrayDataflowNode, MaterialArray) == 224, "Offset mismatch for FAddToMaterialInterfaceArrayDataflowNode::MaterialArray");
static_assert(offsetof(FAddToMaterialInterfaceArrayDataflowNode, MaterialsToAdd) == 240, "Offset mismatch for FAddToMaterialInterfaceArrayDataflowNode::MaterialsToAdd");

// /Script/GeometryCollectionNodes.AddUVChannelDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAddUVChannelDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::int32_t UVChannel; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::uint8_t DefaultValue[0x1]; // 0x0114 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAddUVChannelDataflowNode, Collection) == 224, "Offset mismatch for FAddUVChannelDataflowNode::Collection");
static_assert(offsetof(FAddUVChannelDataflowNode, UVChannel) == 272, "Offset mismatch for FAddUVChannelDataflowNode::UVChannel");
static_assert(offsetof(FAddUVChannelDataflowNode, DefaultValue) == 276, "Offset mismatch for FAddUVChannelDataflowNode::DefaultValue");

// /Script/GeometryCollectionNodes.AppendCollectionAssetsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAppendCollectionAssetsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection1[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Collection2[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    TArray<void*> GeometryGroupGuidsOut1; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GeometryGroupGuidsOut2; // 0x0150 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAppendCollectionAssetsDataflowNode, Collection1) == 224, "Offset mismatch for FAppendCollectionAssetsDataflowNode::Collection1");
static_assert(offsetof(FAppendCollectionAssetsDataflowNode, Collection2) == 272, "Offset mismatch for FAppendCollectionAssetsDataflowNode::Collection2");
static_assert(offsetof(FAppendCollectionAssetsDataflowNode, GeometryGroupGuidsOut1) == 320, "Offset mismatch for FAppendCollectionAssetsDataflowNode::GeometryGroupGuidsOut1");
static_assert(offsetof(FAppendCollectionAssetsDataflowNode, GeometryGroupGuidsOut2) == 336, "Offset mismatch for FAppendCollectionAssetsDataflowNode::GeometryGroupGuidsOut2");

// /Script/GeometryCollectionNodes.AppendMeshesToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAppendMeshesToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t AddedSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    TArray<void*> Meshes; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ParentIndex; // 0x0148 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAppendMeshesToCollectionDataflowNode, Collection) == 224, "Offset mismatch for FAppendMeshesToCollectionDataflowNode::Collection");
static_assert(offsetof(FAppendMeshesToCollectionDataflowNode, AddedSelection) == 272, "Offset mismatch for FAppendMeshesToCollectionDataflowNode::AddedSelection");
static_assert(offsetof(FAppendMeshesToCollectionDataflowNode, Meshes) == 312, "Offset mismatch for FAppendMeshesToCollectionDataflowNode::Meshes");
static_assert(offsetof(FAppendMeshesToCollectionDataflowNode, ParentIndex) == 328, "Offset mismatch for FAppendMeshesToCollectionDataflowNode::ParentIndex");

// /Script/GeometryCollectionNodes.AppendPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAppendPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> PointsA; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PointsB; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Points; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAppendPointsDataflowNode, PointsA) == 224, "Offset mismatch for FAppendPointsDataflowNode::PointsA");
static_assert(offsetof(FAppendPointsDataflowNode, PointsB) == 240, "Offset mismatch for FAppendPointsDataflowNode::PointsB");
static_assert(offsetof(FAppendPointsDataflowNode, Points) == 256, "Offset mismatch for FAppendPointsDataflowNode::Points");

// /Script/GeometryCollectionNodes.ApplyMeshProcessorToGeometryCollectionDataflowNode
// Kind: ScriptStruct; super: MeshProcessorDataflowNodeBase
struct FApplyMeshProcessorToGeometryCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x0168 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t bWeldVertices; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreserveIsolatedVertices; // 0x01C1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FApplyMeshProcessorToGeometryCollectionDataflowNode, Collection) == 360, "Offset mismatch for FApplyMeshProcessorToGeometryCollectionDataflowNode::Collection");
static_assert(offsetof(FApplyMeshProcessorToGeometryCollectionDataflowNode, TransformSelection) == 408, "Offset mismatch for FApplyMeshProcessorToGeometryCollectionDataflowNode::TransformSelection");
static_assert(offsetof(FApplyMeshProcessorToGeometryCollectionDataflowNode, bWeldVertices) == 448, "Offset mismatch for FApplyMeshProcessorToGeometryCollectionDataflowNode::bWeldVertices");
static_assert(offsetof(FApplyMeshProcessorToGeometryCollectionDataflowNode, bPreserveIsolatedVertices) == 449, "Offset mismatch for FApplyMeshProcessorToGeometryCollectionDataflowNode::bPreserveIsolatedVertices");

// /Script/GeometryCollectionNodes.ApplyMeshProcessorToMeshDataflowNode
// Kind: ScriptStruct; super: MeshProcessorDataflowNodeBase
struct FApplyMeshProcessorToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    void* Mesh; // 0x0168 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FApplyMeshProcessorToMeshDataflowNode, Mesh) == 360, "Offset mismatch for FApplyMeshProcessorToMeshDataflowNode::Mesh");

// /Script/GeometryCollectionNodes.ArcCosDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FArcCosDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FArcCosDataflowNode, float_) == 224, "Offset mismatch for FArcCosDataflowNode::float_");
static_assert(offsetof(FArcCosDataflowNode, ReturnValue) == 228, "Offset mismatch for FArcCosDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.ArcSinDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FArcSinDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FArcSinDataflowNode, float_) == 224, "Offset mismatch for FArcSinDataflowNode::float_");
static_assert(offsetof(FArcSinDataflowNode, ReturnValue) == 228, "Offset mismatch for FArcSinDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.ArcTan2DataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FArcTan2DataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Y; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float X; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FArcTan2DataflowNode, Y) == 224, "Offset mismatch for FArcTan2DataflowNode::Y");
static_assert(offsetof(FArcTan2DataflowNode, X) == 228, "Offset mismatch for FArcTan2DataflowNode::X");
static_assert(offsetof(FArcTan2DataflowNode, ReturnValue) == 232, "Offset mismatch for FArcTan2DataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.ArcTanDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FArcTanDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FArcTanDataflowNode, float_) == 224, "Offset mismatch for FArcTanDataflowNode::float_");
static_assert(offsetof(FArcTanDataflowNode, ReturnValue) == 228, "Offset mismatch for FArcTanDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.AssetRandomSeedDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAssetRandomSeedDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Seed; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t RandomSeed; // 0x00E4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAssetRandomSeedDataflowNode, Seed) == 224, "Offset mismatch for FAssetRandomSeedDataflowNode::Seed");
static_assert(offsetof(FAssetRandomSeedDataflowNode, RandomSeed) == 228, "Offset mismatch for FAssetRandomSeedDataflowNode::RandomSeed");

// /Script/GeometryCollectionNodes.AssignMaterialInterfaceToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAssignMaterialInterfaceToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FaceSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    TArray<void*> MaterialArray; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    void* Material; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaterialIndex; // 0x0150 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMergeDuplicateMaterials; // 0x0154 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAssignMaterialInterfaceToCollectionDataflowNode, Collection) == 224, "Offset mismatch for FAssignMaterialInterfaceToCollectionDataflowNode::Collection");
static_assert(offsetof(FAssignMaterialInterfaceToCollectionDataflowNode, FaceSelection) == 272, "Offset mismatch for FAssignMaterialInterfaceToCollectionDataflowNode::FaceSelection");
static_assert(offsetof(FAssignMaterialInterfaceToCollectionDataflowNode, MaterialArray) == 312, "Offset mismatch for FAssignMaterialInterfaceToCollectionDataflowNode::MaterialArray");
static_assert(offsetof(FAssignMaterialInterfaceToCollectionDataflowNode, Material) == 328, "Offset mismatch for FAssignMaterialInterfaceToCollectionDataflowNode::Material");
static_assert(offsetof(FAssignMaterialInterfaceToCollectionDataflowNode, MaterialIndex) == 336, "Offset mismatch for FAssignMaterialInterfaceToCollectionDataflowNode::MaterialIndex");
static_assert(offsetof(FAssignMaterialInterfaceToCollectionDataflowNode, bMergeDuplicateMaterials) == 340, "Offset mismatch for FAssignMaterialInterfaceToCollectionDataflowNode::bMergeDuplicateMaterials");

// /Script/GeometryCollectionNodes.AutoClusterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAutoClusterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t ClusterSizeMethod; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    std::int32_t ClusterSites; // 0x00E4 (Size: 0x4, Type: IntProperty)
    float ClusterFraction; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float SiteSize; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::int32_t ClusterGridWidth; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t ClusterGridDepth; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::int32_t ClusterGridHeight; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::int32_t DriftIterations; // 0x00FC (Size: 0x4, Type: IntProperty)
    float MinimumSize; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreferConvexity; // 0x0104 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0105
    float ConcavityTolerance; // 0x0108 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AutoCluster; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnforceSiteParameters; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t AvoidIsolated; // 0x010E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x010F
    std::uint8_t Collection[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAutoClusterDataflowNode, ClusterSizeMethod) == 224, "Offset mismatch for FAutoClusterDataflowNode::ClusterSizeMethod");
static_assert(offsetof(FAutoClusterDataflowNode, ClusterSites) == 228, "Offset mismatch for FAutoClusterDataflowNode::ClusterSites");
static_assert(offsetof(FAutoClusterDataflowNode, ClusterFraction) == 232, "Offset mismatch for FAutoClusterDataflowNode::ClusterFraction");
static_assert(offsetof(FAutoClusterDataflowNode, SiteSize) == 236, "Offset mismatch for FAutoClusterDataflowNode::SiteSize");
static_assert(offsetof(FAutoClusterDataflowNode, ClusterGridWidth) == 240, "Offset mismatch for FAutoClusterDataflowNode::ClusterGridWidth");
static_assert(offsetof(FAutoClusterDataflowNode, ClusterGridDepth) == 244, "Offset mismatch for FAutoClusterDataflowNode::ClusterGridDepth");
static_assert(offsetof(FAutoClusterDataflowNode, ClusterGridHeight) == 248, "Offset mismatch for FAutoClusterDataflowNode::ClusterGridHeight");
static_assert(offsetof(FAutoClusterDataflowNode, DriftIterations) == 252, "Offset mismatch for FAutoClusterDataflowNode::DriftIterations");
static_assert(offsetof(FAutoClusterDataflowNode, MinimumSize) == 256, "Offset mismatch for FAutoClusterDataflowNode::MinimumSize");
static_assert(offsetof(FAutoClusterDataflowNode, bPreferConvexity) == 260, "Offset mismatch for FAutoClusterDataflowNode::bPreferConvexity");
static_assert(offsetof(FAutoClusterDataflowNode, ConcavityTolerance) == 264, "Offset mismatch for FAutoClusterDataflowNode::ConcavityTolerance");
static_assert(offsetof(FAutoClusterDataflowNode, AutoCluster) == 268, "Offset mismatch for FAutoClusterDataflowNode::AutoCluster");
static_assert(offsetof(FAutoClusterDataflowNode, EnforceSiteParameters) == 269, "Offset mismatch for FAutoClusterDataflowNode::EnforceSiteParameters");
static_assert(offsetof(FAutoClusterDataflowNode, AvoidIsolated) == 270, "Offset mismatch for FAutoClusterDataflowNode::AvoidIsolated");
static_assert(offsetof(FAutoClusterDataflowNode, Collection) == 272, "Offset mismatch for FAutoClusterDataflowNode::Collection");
static_assert(offsetof(FAutoClusterDataflowNode, TransformSelection) == 320, "Offset mismatch for FAutoClusterDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.AutoUnwrapUVDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FAutoUnwrapUVDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FaceSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::int32_t UVChannel; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::int32_t GutterSize; // 0x013C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAutoUnwrapUVDataflowNode, Collection) == 224, "Offset mismatch for FAutoUnwrapUVDataflowNode::Collection");
static_assert(offsetof(FAutoUnwrapUVDataflowNode, FaceSelection) == 272, "Offset mismatch for FAutoUnwrapUVDataflowNode::FaceSelection");
static_assert(offsetof(FAutoUnwrapUVDataflowNode, UVChannel) == 312, "Offset mismatch for FAutoUnwrapUVDataflowNode::UVChannel");
static_assert(offsetof(FAutoUnwrapUVDataflowNode, GutterSize) == 316, "Offset mismatch for FAutoUnwrapUVDataflowNode::GutterSize");

// /Script/GeometryCollectionNodes.BakeTextureFromCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBakeTextureFromCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Image[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t FaceSelection[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t Resolution; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0161
    std::uint8_t bFullyPadGutter; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0165
    std::int32_t GutterSize; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t bClearGutterAlpha; // 0x016C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x016D
    std::int32_t UVChannel; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::uint8_t RedChannel; // 0x0174 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0175
    std::uint8_t GreenChannel; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0179
    std::uint8_t BlueChannel; // 0x017C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x017D
    std::uint8_t AlphaChannel; // 0x0180 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0181
    float MaxDistance; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::int32_t OcclusionRays; // 0x0188 (Size: 0x4, Type: IntProperty)
    float OcclusionBlurRadius; // 0x018C (Size: 0x4, Type: FloatProperty)
    float CurvatureBlurRadius; // 0x0190 (Size: 0x4, Type: FloatProperty)
    std::int32_t VoxelResolution; // 0x0194 (Size: 0x4, Type: IntProperty)
    std::int32_t SmoothingIterations; // 0x0198 (Size: 0x4, Type: IntProperty)
    float ThicknessFactor; // 0x019C (Size: 0x4, Type: FloatProperty)
    float MaxCurvature; // 0x01A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, Collection) == 224, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::Collection");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, Image) == 272, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::Image");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, FaceSelection) == 312, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::FaceSelection");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, Resolution) == 352, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::Resolution");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, bFullyPadGutter) == 356, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::bFullyPadGutter");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, GutterSize) == 360, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::GutterSize");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, bClearGutterAlpha) == 364, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::bClearGutterAlpha");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, UVChannel) == 368, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::UVChannel");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, RedChannel) == 372, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::RedChannel");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, GreenChannel) == 376, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::GreenChannel");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, BlueChannel) == 380, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::BlueChannel");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, AlphaChannel) == 384, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::AlphaChannel");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, MaxDistance) == 388, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::MaxDistance");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, OcclusionRays) == 392, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::OcclusionRays");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, OcclusionBlurRadius) == 396, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::OcclusionBlurRadius");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, CurvatureBlurRadius) == 400, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::CurvatureBlurRadius");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, VoxelResolution) == 404, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::VoxelResolution");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, SmoothingIterations) == 408, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::SmoothingIterations");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, ThicknessFactor) == 412, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::ThicknessFactor");
static_assert(offsetof(FBakeTextureFromCollectionDataflowNode, MaxCurvature) == 416, "Offset mismatch for FBakeTextureFromCollectionDataflowNode::MaxCurvature");

// /Script/GeometryCollectionNodes.BakeTransformsInCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBakeTransformsInCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBakeTransformsInCollectionDataflowNode, Collection) == 224, "Offset mismatch for FBakeTransformsInCollectionDataflowNode::Collection");

// /Script/GeometryCollectionNodes.BindSkeletonToMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBindSkeletonToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t skeleton[0x98]; // 0x00E8 (Size: 0x98, Type: StructProperty)
    std::uint8_t BindMethod; // 0x0180 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0181
    float Stiffness; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxInfluences; // 0x0188 (Size: 0x4, Type: IntProperty)
    std::int32_t VoxelResolution; // 0x018C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBindSkeletonToMeshDataflowNode, Mesh) == 224, "Offset mismatch for FBindSkeletonToMeshDataflowNode::Mesh");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode, skeleton) == 232, "Offset mismatch for FBindSkeletonToMeshDataflowNode::skeleton");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode, BindMethod) == 384, "Offset mismatch for FBindSkeletonToMeshDataflowNode::BindMethod");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode, Stiffness) == 388, "Offset mismatch for FBindSkeletonToMeshDataflowNode::Stiffness");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode, MaxInfluences) == 392, "Offset mismatch for FBindSkeletonToMeshDataflowNode::MaxInfluences");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode, VoxelResolution) == 396, "Offset mismatch for FBindSkeletonToMeshDataflowNode::VoxelResolution");

// /Script/GeometryCollectionNodes.BindSkeletonToMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FBindSkeletonToMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t skeleton[0x98]; // 0x00E8 (Size: 0x98, Type: StructProperty)
    std::uint8_t BindMethod; // 0x0180 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0181
    float Stiffness; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxInfluences; // 0x0188 (Size: 0x4, Type: IntProperty)
    std::int32_t VoxelResolution; // 0x018C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBindSkeletonToMeshDataflowNode_v2, Mesh) == 224, "Offset mismatch for FBindSkeletonToMeshDataflowNode_v2::Mesh");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode_v2, skeleton) == 232, "Offset mismatch for FBindSkeletonToMeshDataflowNode_v2::skeleton");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode_v2, BindMethod) == 384, "Offset mismatch for FBindSkeletonToMeshDataflowNode_v2::BindMethod");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode_v2, Stiffness) == 388, "Offset mismatch for FBindSkeletonToMeshDataflowNode_v2::Stiffness");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode_v2, MaxInfluences) == 392, "Offset mismatch for FBindSkeletonToMeshDataflowNode_v2::MaxInfluences");
static_assert(offsetof(FBindSkeletonToMeshDataflowNode_v2, VoxelResolution) == 396, "Offset mismatch for FBindSkeletonToMeshDataflowNode_v2::VoxelResolution");

// /Script/GeometryCollectionNodes.BlueprintToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBlueprintToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Blueprint; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSplitComponents; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t Collection[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialInstances; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBlueprintToCollectionDataflowNode, Blueprint) == 224, "Offset mismatch for FBlueprintToCollectionDataflowNode::Blueprint");
static_assert(offsetof(FBlueprintToCollectionDataflowNode, bSplitComponents) == 232, "Offset mismatch for FBlueprintToCollectionDataflowNode::bSplitComponents");
static_assert(offsetof(FBlueprintToCollectionDataflowNode, Collection) == 240, "Offset mismatch for FBlueprintToCollectionDataflowNode::Collection");
static_assert(offsetof(FBlueprintToCollectionDataflowNode, Materials) == 288, "Offset mismatch for FBlueprintToCollectionDataflowNode::Materials");
static_assert(offsetof(FBlueprintToCollectionDataflowNode, MaterialInstances) == 304, "Offset mismatch for FBlueprintToCollectionDataflowNode::MaterialInstances");
static_assert(offsetof(FBlueprintToCollectionDataflowNode, InstancedMeshes) == 320, "Offset mismatch for FBlueprintToCollectionDataflowNode::InstancedMeshes");

// /Script/GeometryCollectionNodes.BlueprintToCollectionDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FBlueprintToCollectionDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Blueprint; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSplitComponents; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t Collection[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RootProxyMeshes; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBlueprintToCollectionDataflowNode_v2, Blueprint) == 224, "Offset mismatch for FBlueprintToCollectionDataflowNode_v2::Blueprint");
static_assert(offsetof(FBlueprintToCollectionDataflowNode_v2, bSplitComponents) == 232, "Offset mismatch for FBlueprintToCollectionDataflowNode_v2::bSplitComponents");
static_assert(offsetof(FBlueprintToCollectionDataflowNode_v2, Collection) == 240, "Offset mismatch for FBlueprintToCollectionDataflowNode_v2::Collection");
static_assert(offsetof(FBlueprintToCollectionDataflowNode_v2, Materials) == 288, "Offset mismatch for FBlueprintToCollectionDataflowNode_v2::Materials");
static_assert(offsetof(FBlueprintToCollectionDataflowNode_v2, InstancedMeshes) == 304, "Offset mismatch for FBlueprintToCollectionDataflowNode_v2::InstancedMeshes");
static_assert(offsetof(FBlueprintToCollectionDataflowNode_v2, RootProxyMeshes) == 320, "Offset mismatch for FBlueprintToCollectionDataflowNode_v2::RootProxyMeshes");

// /Script/GeometryCollectionNodes.BoolArrayToFaceSelectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoolArrayToFaceSelectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> BoolAttributeData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FaceSelection[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBoolArrayToFaceSelectionDataflowNode, BoolAttributeData) == 224, "Offset mismatch for FBoolArrayToFaceSelectionDataflowNode::BoolAttributeData");
static_assert(offsetof(FBoolArrayToFaceSelectionDataflowNode, FaceSelection) == 240, "Offset mismatch for FBoolArrayToFaceSelectionDataflowNode::FaceSelection");

// /Script/GeometryCollectionNodes.BoolToIntDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoolToIntDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bool_; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    std::int32_t Int; // 0x00E4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBoolToIntDataflowNode, bool_) == 224, "Offset mismatch for FBoolToIntDataflowNode::bool_");
static_assert(offsetof(FBoolToIntDataflowNode, Int) == 228, "Offset mismatch for FBoolToIntDataflowNode::Int");

// /Script/GeometryCollectionNodes.BoolToStringDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoolToStringDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bool_; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    FString String; // 0x00E8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FBoolToStringDataflowNode, bool_) == 224, "Offset mismatch for FBoolToStringDataflowNode::bool_");
static_assert(offsetof(FBoolToStringDataflowNode, String) == 232, "Offset mismatch for FBoolToStringDataflowNode::String");

// /Script/GeometryCollectionNodes.BooleanOperationDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBooleanOperationDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Operation; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bBoolA; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoolB; // 0x00E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResult; // 0x00E3 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBooleanOperationDataflowNode, Operation) == 224, "Offset mismatch for FBooleanOperationDataflowNode::Operation");
static_assert(offsetof(FBooleanOperationDataflowNode, bBoolA) == 225, "Offset mismatch for FBooleanOperationDataflowNode::bBoolA");
static_assert(offsetof(FBooleanOperationDataflowNode, bBoolB) == 226, "Offset mismatch for FBooleanOperationDataflowNode::bBoolB");
static_assert(offsetof(FBooleanOperationDataflowNode, bResult) == 227, "Offset mismatch for FBooleanOperationDataflowNode::bResult");

// /Script/GeometryCollectionNodes.BoundingBoxAverageExtentsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoundingBoxAverageExtentsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t BoundingBox[0x38]; // 0x00E0 (Size: 0x38, Type: StructProperty)
    float AverageExtents; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float AverageHalfExtents; // 0x011C (Size: 0x4, Type: FloatProperty)
    float MinLength; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float MaxLength; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float LengthRatio; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBoundingBoxAverageExtentsDataflowNode, BoundingBox) == 224, "Offset mismatch for FBoundingBoxAverageExtentsDataflowNode::BoundingBox");
static_assert(offsetof(FBoundingBoxAverageExtentsDataflowNode, AverageExtents) == 280, "Offset mismatch for FBoundingBoxAverageExtentsDataflowNode::AverageExtents");
static_assert(offsetof(FBoundingBoxAverageExtentsDataflowNode, AverageHalfExtents) == 284, "Offset mismatch for FBoundingBoxAverageExtentsDataflowNode::AverageHalfExtents");
static_assert(offsetof(FBoundingBoxAverageExtentsDataflowNode, MinLength) == 288, "Offset mismatch for FBoundingBoxAverageExtentsDataflowNode::MinLength");
static_assert(offsetof(FBoundingBoxAverageExtentsDataflowNode, MaxLength) == 292, "Offset mismatch for FBoundingBoxAverageExtentsDataflowNode::MaxLength");
static_assert(offsetof(FBoundingBoxAverageExtentsDataflowNode, LengthRatio) == 296, "Offset mismatch for FBoundingBoxAverageExtentsDataflowNode::LengthRatio");

// /Script/GeometryCollectionNodes.BoundingBoxDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoundingBoxDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t BoundingBox[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t Dimensions[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBoundingBoxDataflowNode, Collection) == 224, "Offset mismatch for FBoundingBoxDataflowNode::Collection");
static_assert(offsetof(FBoundingBoxDataflowNode, BoundingBox) == 272, "Offset mismatch for FBoundingBoxDataflowNode::BoundingBox");
static_assert(offsetof(FBoundingBoxDataflowNode, Center) == 328, "Offset mismatch for FBoundingBoxDataflowNode::Center");
static_assert(offsetof(FBoundingBoxDataflowNode, Dimensions) == 352, "Offset mismatch for FBoundingBoxDataflowNode::Dimensions");

// /Script/GeometryCollectionNodes.BoundingBoxRatioDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoundingBoxRatioDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    float ReferenceBoxSize; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0114
    std::uint8_t BoundingBox[0x38]; // 0x0118 (Size: 0x38, Type: StructProperty)
    std::uint8_t Dimensions[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    float BoxRatio; // 0x0168 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBoundingBoxRatioDataflowNode, Collection) == 224, "Offset mismatch for FBoundingBoxRatioDataflowNode::Collection");
static_assert(offsetof(FBoundingBoxRatioDataflowNode, ReferenceBoxSize) == 272, "Offset mismatch for FBoundingBoxRatioDataflowNode::ReferenceBoxSize");
static_assert(offsetof(FBoundingBoxRatioDataflowNode, BoundingBox) == 280, "Offset mismatch for FBoundingBoxRatioDataflowNode::BoundingBox");
static_assert(offsetof(FBoundingBoxRatioDataflowNode, Dimensions) == 336, "Offset mismatch for FBoundingBoxRatioDataflowNode::Dimensions");
static_assert(offsetof(FBoundingBoxRatioDataflowNode, BoxRatio) == 360, "Offset mismatch for FBoundingBoxRatioDataflowNode::BoxRatio");

// /Script/GeometryCollectionNodes.BoundingSphereDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoundingSphereDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t BoundingSphere[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBoundingSphereDataflowNode, Collection) == 224, "Offset mismatch for FBoundingSphereDataflowNode::Collection");
static_assert(offsetof(FBoundingSphereDataflowNode, BoundingSphere) == 272, "Offset mismatch for FBoundingSphereDataflowNode::BoundingSphere");

// /Script/GeometryCollectionNodes.BoxFalloffFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoxFalloffFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Box[0x38]; // 0x0118 (Size: 0x38, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0150 (Size: 0x60, Type: StructProperty)
    float Magnitude; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    float MinRange; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    float Default; // 0x01BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t FalloffType; // 0x01C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01C1
    TArray<void*> FieldFloatResult; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FieldSelectionMask[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::int32_t NumSamplePositions; // 0x0210 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBoxFalloffFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FBoxFalloffFieldDataflowNode::SamplePositions");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FBoxFalloffFieldDataflowNode::SampleIndices");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, Box) == 280, "Offset mismatch for FBoxFalloffFieldDataflowNode::Box");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, Transform) == 336, "Offset mismatch for FBoxFalloffFieldDataflowNode::Transform");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, Magnitude) == 432, "Offset mismatch for FBoxFalloffFieldDataflowNode::Magnitude");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, MinRange) == 436, "Offset mismatch for FBoxFalloffFieldDataflowNode::MinRange");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, MaxRange) == 440, "Offset mismatch for FBoxFalloffFieldDataflowNode::MaxRange");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, Default) == 444, "Offset mismatch for FBoxFalloffFieldDataflowNode::Default");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, FalloffType) == 448, "Offset mismatch for FBoxFalloffFieldDataflowNode::FalloffType");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, FieldFloatResult) == 456, "Offset mismatch for FBoxFalloffFieldDataflowNode::FieldFloatResult");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, FieldRemap) == 472, "Offset mismatch for FBoxFalloffFieldDataflowNode::FieldRemap");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, FieldSelectionMask) == 488, "Offset mismatch for FBoxFalloffFieldDataflowNode::FieldSelectionMask");
static_assert(offsetof(FBoxFalloffFieldDataflowNode, NumSamplePositions) == 528, "Offset mismatch for FBoxFalloffFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.BoxProjectUVDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoxProjectUVDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::int32_t UVChannel; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::int32_t GutterSize; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::uint8_t ProjectionScale[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t UVOffset[0x8]; // 0x0130 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAutoFitToBounds; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCenterBoxAtPivot; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUniformProjectionScale; // 0x013A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBoxProjectUVDataflowNode, Collection) == 224, "Offset mismatch for FBoxProjectUVDataflowNode::Collection");
static_assert(offsetof(FBoxProjectUVDataflowNode, UVChannel) == 272, "Offset mismatch for FBoxProjectUVDataflowNode::UVChannel");
static_assert(offsetof(FBoxProjectUVDataflowNode, GutterSize) == 276, "Offset mismatch for FBoxProjectUVDataflowNode::GutterSize");
static_assert(offsetof(FBoxProjectUVDataflowNode, ProjectionScale) == 280, "Offset mismatch for FBoxProjectUVDataflowNode::ProjectionScale");
static_assert(offsetof(FBoxProjectUVDataflowNode, UVOffset) == 304, "Offset mismatch for FBoxProjectUVDataflowNode::UVOffset");
static_assert(offsetof(FBoxProjectUVDataflowNode, bAutoFitToBounds) == 312, "Offset mismatch for FBoxProjectUVDataflowNode::bAutoFitToBounds");
static_assert(offsetof(FBoxProjectUVDataflowNode, bCenterBoxAtPivot) == 313, "Offset mismatch for FBoxProjectUVDataflowNode::bCenterBoxAtPivot");
static_assert(offsetof(FBoxProjectUVDataflowNode, bUniformProjectionScale) == 314, "Offset mismatch for FBoxProjectUVDataflowNode::bUniformProjectionScale");

// /Script/GeometryCollectionNodes.BoxToMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBoxToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Box[0x38]; // 0x00E0 (Size: 0x38, Type: StructProperty)
    void* Mesh; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TriangleCount; // 0x0120 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBoxToMeshDataflowNode, Box) == 224, "Offset mismatch for FBoxToMeshDataflowNode::Box");
static_assert(offsetof(FBoxToMeshDataflowNode, Mesh) == 280, "Offset mismatch for FBoxToMeshDataflowNode::Mesh");
static_assert(offsetof(FBoxToMeshDataflowNode, TriangleCount) == 288, "Offset mismatch for FBoxToMeshDataflowNode::TriangleCount");

// /Script/GeometryCollectionNodes.BranchCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBranchCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TrueCollection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FalseCollection[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t bCondition; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0141
    std::uint8_t ChosenCollection[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBranchCollectionDataflowNode, TrueCollection) == 224, "Offset mismatch for FBranchCollectionDataflowNode::TrueCollection");
static_assert(offsetof(FBranchCollectionDataflowNode, FalseCollection) == 272, "Offset mismatch for FBranchCollectionDataflowNode::FalseCollection");
static_assert(offsetof(FBranchCollectionDataflowNode, bCondition) == 320, "Offset mismatch for FBranchCollectionDataflowNode::bCondition");
static_assert(offsetof(FBranchCollectionDataflowNode, ChosenCollection) == 328, "Offset mismatch for FBranchCollectionDataflowNode::ChosenCollection");

// /Script/GeometryCollectionNodes.BranchFloatDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBranchFloatDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float A; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float B; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCondition; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E9
    float ReturnValue; // 0x00EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBranchFloatDataflowNode, A) == 224, "Offset mismatch for FBranchFloatDataflowNode::A");
static_assert(offsetof(FBranchFloatDataflowNode, B) == 228, "Offset mismatch for FBranchFloatDataflowNode::B");
static_assert(offsetof(FBranchFloatDataflowNode, bCondition) == 232, "Offset mismatch for FBranchFloatDataflowNode::bCondition");
static_assert(offsetof(FBranchFloatDataflowNode, ReturnValue) == 236, "Offset mismatch for FBranchFloatDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.BranchIntDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBranchIntDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t A; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t B; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCondition; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E9
    std::int32_t ReturnValue; // 0x00EC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBranchIntDataflowNode, A) == 224, "Offset mismatch for FBranchIntDataflowNode::A");
static_assert(offsetof(FBranchIntDataflowNode, B) == 228, "Offset mismatch for FBranchIntDataflowNode::B");
static_assert(offsetof(FBranchIntDataflowNode, bCondition) == 232, "Offset mismatch for FBranchIntDataflowNode::bCondition");
static_assert(offsetof(FBranchIntDataflowNode, ReturnValue) == 236, "Offset mismatch for FBranchIntDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.BranchMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBranchMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* MeshA; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* MeshB; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCondition; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* Mesh; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBranchMeshDataflowNode, MeshA) == 224, "Offset mismatch for FBranchMeshDataflowNode::MeshA");
static_assert(offsetof(FBranchMeshDataflowNode, MeshB) == 232, "Offset mismatch for FBranchMeshDataflowNode::MeshB");
static_assert(offsetof(FBranchMeshDataflowNode, bCondition) == 240, "Offset mismatch for FBranchMeshDataflowNode::bCondition");
static_assert(offsetof(FBranchMeshDataflowNode, Mesh) == 248, "Offset mismatch for FBranchMeshDataflowNode::Mesh");

// /Script/GeometryCollectionNodes.BreakTransformDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBreakTransformDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Translation[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotator[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t Quat[0x20]; // 0x0190 (Size: 0x20, Type: StructProperty)
    std::uint8_t Scale[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBreakTransformDataflowNode, Transform) == 224, "Offset mismatch for FBreakTransformDataflowNode::Transform");
static_assert(offsetof(FBreakTransformDataflowNode, Translation) == 320, "Offset mismatch for FBreakTransformDataflowNode::Translation");
static_assert(offsetof(FBreakTransformDataflowNode, Rotation) == 352, "Offset mismatch for FBreakTransformDataflowNode::Rotation");
static_assert(offsetof(FBreakTransformDataflowNode, Rotator) == 376, "Offset mismatch for FBreakTransformDataflowNode::Rotator");
static_assert(offsetof(FBreakTransformDataflowNode, Quat) == 400, "Offset mismatch for FBreakTransformDataflowNode::Quat");
static_assert(offsetof(FBreakTransformDataflowNode, Scale) == 432, "Offset mismatch for FBreakTransformDataflowNode::Scale");

// /Script/GeometryCollectionNodes.BrickCutterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBrickCutterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t BoundingBox[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0170 (Size: 0x60, Type: StructProperty)
    std::uint8_t Bond; // 0x01D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01D1
    float BrickLength; // 0x01D4 (Size: 0x4, Type: FloatProperty)
    float BrickHeight; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    float BrickDepth; // 0x01DC (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x01E0 (Size: 0x4, Type: IntProperty)
    float ChanceToFracture; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SplitIslands; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01E9
    float CloseVertexDistance; // 0x01EC (Size: 0x4, Type: FloatProperty)
    float VertexToSurfaceBridgeDistance; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float Grout; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    float Amplitude; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x01FC (Size: 0x4, Type: FloatProperty)
    float Persistence; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float Lacunarity; // 0x0204 (Size: 0x4, Type: FloatProperty)
    std::int32_t OctaveNumber; // 0x0208 (Size: 0x4, Type: IntProperty)
    float PointSpacing; // 0x020C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AddSamplesForCollision; // 0x0210 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0211
    float CollisionSampleSpacing; // 0x0214 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NewGeometryTransformSelection[0x1]; // 0x0218 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBrickCutterDataflowNode, Collection) == 224, "Offset mismatch for FBrickCutterDataflowNode::Collection");
static_assert(offsetof(FBrickCutterDataflowNode, BoundingBox) == 272, "Offset mismatch for FBrickCutterDataflowNode::BoundingBox");
static_assert(offsetof(FBrickCutterDataflowNode, TransformSelection) == 328, "Offset mismatch for FBrickCutterDataflowNode::TransformSelection");
static_assert(offsetof(FBrickCutterDataflowNode, Transform) == 368, "Offset mismatch for FBrickCutterDataflowNode::Transform");
static_assert(offsetof(FBrickCutterDataflowNode, Bond) == 464, "Offset mismatch for FBrickCutterDataflowNode::Bond");
static_assert(offsetof(FBrickCutterDataflowNode, BrickLength) == 468, "Offset mismatch for FBrickCutterDataflowNode::BrickLength");
static_assert(offsetof(FBrickCutterDataflowNode, BrickHeight) == 472, "Offset mismatch for FBrickCutterDataflowNode::BrickHeight");
static_assert(offsetof(FBrickCutterDataflowNode, BrickDepth) == 476, "Offset mismatch for FBrickCutterDataflowNode::BrickDepth");
static_assert(offsetof(FBrickCutterDataflowNode, RandomSeed) == 480, "Offset mismatch for FBrickCutterDataflowNode::RandomSeed");
static_assert(offsetof(FBrickCutterDataflowNode, ChanceToFracture) == 484, "Offset mismatch for FBrickCutterDataflowNode::ChanceToFracture");
static_assert(offsetof(FBrickCutterDataflowNode, SplitIslands) == 488, "Offset mismatch for FBrickCutterDataflowNode::SplitIslands");
static_assert(offsetof(FBrickCutterDataflowNode, CloseVertexDistance) == 492, "Offset mismatch for FBrickCutterDataflowNode::CloseVertexDistance");
static_assert(offsetof(FBrickCutterDataflowNode, VertexToSurfaceBridgeDistance) == 496, "Offset mismatch for FBrickCutterDataflowNode::VertexToSurfaceBridgeDistance");
static_assert(offsetof(FBrickCutterDataflowNode, Grout) == 500, "Offset mismatch for FBrickCutterDataflowNode::Grout");
static_assert(offsetof(FBrickCutterDataflowNode, Amplitude) == 504, "Offset mismatch for FBrickCutterDataflowNode::Amplitude");
static_assert(offsetof(FBrickCutterDataflowNode, Frequency) == 508, "Offset mismatch for FBrickCutterDataflowNode::Frequency");
static_assert(offsetof(FBrickCutterDataflowNode, Persistence) == 512, "Offset mismatch for FBrickCutterDataflowNode::Persistence");
static_assert(offsetof(FBrickCutterDataflowNode, Lacunarity) == 516, "Offset mismatch for FBrickCutterDataflowNode::Lacunarity");
static_assert(offsetof(FBrickCutterDataflowNode, OctaveNumber) == 520, "Offset mismatch for FBrickCutterDataflowNode::OctaveNumber");
static_assert(offsetof(FBrickCutterDataflowNode, PointSpacing) == 524, "Offset mismatch for FBrickCutterDataflowNode::PointSpacing");
static_assert(offsetof(FBrickCutterDataflowNode, AddSamplesForCollision) == 528, "Offset mismatch for FBrickCutterDataflowNode::AddSamplesForCollision");
static_assert(offsetof(FBrickCutterDataflowNode, CollisionSampleSpacing) == 532, "Offset mismatch for FBrickCutterDataflowNode::CollisionSampleSpacing");
static_assert(offsetof(FBrickCutterDataflowNode, NewGeometryTransformSelection) == 536, "Offset mismatch for FBrickCutterDataflowNode::NewGeometryTransformSelection");

// /Script/GeometryCollectionNodes.CeilDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCeilDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCeilDataflowNode, float_) == 224, "Offset mismatch for FCeilDataflowNode::float_");
static_assert(offsetof(FCeilDataflowNode, ReturnValue) == 228, "Offset mismatch for FCeilDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.ClampDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClampDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float min; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float max; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClampDataflowNode, float_) == 224, "Offset mismatch for FClampDataflowNode::float_");
static_assert(offsetof(FClampDataflowNode, min) == 228, "Offset mismatch for FClampDataflowNode::min");
static_assert(offsetof(FClampDataflowNode, max) == 232, "Offset mismatch for FClampDataflowNode::max");
static_assert(offsetof(FClampDataflowNode, ReturnValue) == 236, "Offset mismatch for FClampDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.ClearConvexHullsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClearConvexHullsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClearConvexHullsDataflowNode, Collection) == 224, "Offset mismatch for FClearConvexHullsDataflowNode::Collection");
static_assert(offsetof(FClearConvexHullsDataflowNode, TransformSelection) == 272, "Offset mismatch for FClearConvexHullsDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCloseGeometryOnCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCloseGeometryOnCollectionDataflowNode, Collection) == 224, "Offset mismatch for FCloseGeometryOnCollectionDataflowNode::Collection");

// /Script/GeometryCollectionNodes.ClusterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClusterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClusterDataflowNode, Collection) == 224, "Offset mismatch for FClusterDataflowNode::Collection");
static_assert(offsetof(FClusterDataflowNode, TransformSelection) == 272, "Offset mismatch for FClusterDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.ClusterFlattenDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClusterFlattenDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t OptionalTransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClusterFlattenDataflowNode, Collection) == 224, "Offset mismatch for FClusterFlattenDataflowNode::Collection");
static_assert(offsetof(FClusterFlattenDataflowNode, OptionalTransformSelection) == 272, "Offset mismatch for FClusterFlattenDataflowNode::OptionalTransformSelection");

// /Script/GeometryCollectionNodes.ClusterIsolatedRootsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClusterIsolatedRootsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClusterIsolatedRootsDataflowNode, Collection) == 224, "Offset mismatch for FClusterIsolatedRootsDataflowNode::Collection");

// /Script/GeometryCollectionNodes.ClusterMagnetDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClusterMagnetDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::int32_t Iterations; // 0x0138 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FClusterMagnetDataflowNode, Collection) == 224, "Offset mismatch for FClusterMagnetDataflowNode::Collection");
static_assert(offsetof(FClusterMagnetDataflowNode, TransformSelection) == 272, "Offset mismatch for FClusterMagnetDataflowNode::TransformSelection");
static_assert(offsetof(FClusterMagnetDataflowNode, Iterations) == 312, "Offset mismatch for FClusterMagnetDataflowNode::Iterations");

// /Script/GeometryCollectionNodes.ClusterMergeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClusterMergeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClusterMergeDataflowNode, Collection) == 224, "Offset mismatch for FClusterMergeDataflowNode::Collection");
static_assert(offsetof(FClusterMergeDataflowNode, TransformSelection) == 272, "Offset mismatch for FClusterMergeDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.ClusterMergeToNeighborsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClusterMergeToNeighborsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t NeighborSelectionMethod; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0139
    float MinVolumeCubeRoot; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOnlyToConnected; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlySameParent; // 0x0141 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FClusterMergeToNeighborsDataflowNode, Collection) == 224, "Offset mismatch for FClusterMergeToNeighborsDataflowNode::Collection");
static_assert(offsetof(FClusterMergeToNeighborsDataflowNode, TransformSelection) == 272, "Offset mismatch for FClusterMergeToNeighborsDataflowNode::TransformSelection");
static_assert(offsetof(FClusterMergeToNeighborsDataflowNode, NeighborSelectionMethod) == 312, "Offset mismatch for FClusterMergeToNeighborsDataflowNode::NeighborSelectionMethod");
static_assert(offsetof(FClusterMergeToNeighborsDataflowNode, MinVolumeCubeRoot) == 316, "Offset mismatch for FClusterMergeToNeighborsDataflowNode::MinVolumeCubeRoot");
static_assert(offsetof(FClusterMergeToNeighborsDataflowNode, bOnlyToConnected) == 320, "Offset mismatch for FClusterMergeToNeighborsDataflowNode::bOnlyToConnected");
static_assert(offsetof(FClusterMergeToNeighborsDataflowNode, bOnlySameParent) == 321, "Offset mismatch for FClusterMergeToNeighborsDataflowNode::bOnlySameParent");

// /Script/GeometryCollectionNodes.ClusterScatterPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClusterScatterPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t NumberClustersMin; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberClustersMax; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::int32_t PointsPerClusterMin; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t PointsPerClusterMax; // 0x00EC (Size: 0x4, Type: IntProperty)
    float ClusterRadiusFractionMin; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float ClusterRadiusFractionMax; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float ClusterRadiusOffset; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x00FC (Size: 0x4, Type: IntProperty)
    std::uint8_t BoundingBox[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    TArray<void*> Points; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FClusterScatterPointsDataflowNode, NumberClustersMin) == 224, "Offset mismatch for FClusterScatterPointsDataflowNode::NumberClustersMin");
static_assert(offsetof(FClusterScatterPointsDataflowNode, NumberClustersMax) == 228, "Offset mismatch for FClusterScatterPointsDataflowNode::NumberClustersMax");
static_assert(offsetof(FClusterScatterPointsDataflowNode, PointsPerClusterMin) == 232, "Offset mismatch for FClusterScatterPointsDataflowNode::PointsPerClusterMin");
static_assert(offsetof(FClusterScatterPointsDataflowNode, PointsPerClusterMax) == 236, "Offset mismatch for FClusterScatterPointsDataflowNode::PointsPerClusterMax");
static_assert(offsetof(FClusterScatterPointsDataflowNode, ClusterRadiusFractionMin) == 240, "Offset mismatch for FClusterScatterPointsDataflowNode::ClusterRadiusFractionMin");
static_assert(offsetof(FClusterScatterPointsDataflowNode, ClusterRadiusFractionMax) == 244, "Offset mismatch for FClusterScatterPointsDataflowNode::ClusterRadiusFractionMax");
static_assert(offsetof(FClusterScatterPointsDataflowNode, ClusterRadiusOffset) == 248, "Offset mismatch for FClusterScatterPointsDataflowNode::ClusterRadiusOffset");
static_assert(offsetof(FClusterScatterPointsDataflowNode, RandomSeed) == 252, "Offset mismatch for FClusterScatterPointsDataflowNode::RandomSeed");
static_assert(offsetof(FClusterScatterPointsDataflowNode, BoundingBox) == 256, "Offset mismatch for FClusterScatterPointsDataflowNode::BoundingBox");
static_assert(offsetof(FClusterScatterPointsDataflowNode, Points) == 312, "Offset mismatch for FClusterScatterPointsDataflowNode::Points");

// /Script/GeometryCollectionNodes.ClusterUnclusterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FClusterUnclusterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClusterUnclusterDataflowNode, Collection) == 224, "Offset mismatch for FClusterUnclusterDataflowNode::Collection");
static_assert(offsetof(FClusterUnclusterDataflowNode, TransformSelection) == 272, "Offset mismatch for FClusterUnclusterDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionFaceSelectionCustomDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionFaceSelectionCustomDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString FaceIndicies; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t FaceSelection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionFaceSelectionCustomDataflowNode, Collection) == 224, "Offset mismatch for FCollectionFaceSelectionCustomDataflowNode::Collection");
static_assert(offsetof(FCollectionFaceSelectionCustomDataflowNode, FaceIndicies) == 272, "Offset mismatch for FCollectionFaceSelectionCustomDataflowNode::FaceIndicies");
static_assert(offsetof(FCollectionFaceSelectionCustomDataflowNode, FaceSelection) == 288, "Offset mismatch for FCollectionFaceSelectionCustomDataflowNode::FaceSelection");

// /Script/GeometryCollectionNodes.CollectionFaceSelectionInvertDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionFaceSelectionInvertDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t FaceSelection[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionFaceSelectionInvertDataflowNode, FaceSelection) == 224, "Offset mismatch for FCollectionFaceSelectionInvertDataflowNode::FaceSelection");

// /Script/GeometryCollectionNodes.CollectionInfoDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionInfoDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::int32_t MaxLevel; // 0x0110 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCollectionInfoDataflowNode, Collection) == 224, "Offset mismatch for FCollectionInfoDataflowNode::Collection");
static_assert(offsetof(FCollectionInfoDataflowNode, MaxLevel) == 272, "Offset mismatch for FCollectionInfoDataflowNode::MaxLevel");

// /Script/GeometryCollectionNodes.CollectionSelectInternalFacesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectInternalFacesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t FaceSelection[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectInternalFacesDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectInternalFacesDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectInternalFacesDataflowNode, TransformSelection) == 272, "Offset mismatch for FCollectionSelectInternalFacesDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionSelectInternalFacesDataflowNode, FaceSelection) == 312, "Offset mismatch for FCollectionSelectInternalFacesDataflowNode::FaceSelection");

// /Script/GeometryCollectionNodes.CollectionSelectTransformStringDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectTransformStringDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString Attribute; // 0x0110 (Size: 0x10, Type: StrProperty)
    FString SearchText; // 0x0120 (Size: 0x10, Type: StrProperty)
    std::uint8_t Method; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0131
    std::uint8_t TransformSelection[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectTransformStringDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectTransformStringDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectTransformStringDataflowNode, Attribute) == 272, "Offset mismatch for FCollectionSelectTransformStringDataflowNode::Attribute");
static_assert(offsetof(FCollectionSelectTransformStringDataflowNode, SearchText) == 288, "Offset mismatch for FCollectionSelectTransformStringDataflowNode::SearchText");
static_assert(offsetof(FCollectionSelectTransformStringDataflowNode, Method) == 304, "Offset mismatch for FCollectionSelectTransformStringDataflowNode::Method");
static_assert(offsetof(FCollectionSelectTransformStringDataflowNode, TransformSelection) == 312, "Offset mismatch for FCollectionSelectTransformStringDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionSelectionAllDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionAllDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Selection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionAllDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionAllDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionAllDataflowNode, Selection) == 272, "Offset mismatch for FCollectionSelectionAllDataflowNode::Selection");

// /Script/GeometryCollectionNodes.CollectionSelectionByAttrDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionByAttrDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t AttributeKey[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t Group; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0131
    FString Attribute; // 0x0138 (Size: 0x10, Type: StrProperty)
    std::uint8_t Operation; // 0x0148 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0149
    FString Value; // 0x0150 (Size: 0x10, Type: StrProperty)
    std::uint8_t VertexSelection[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t FaceSelection[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t GeometrySelection[0x28]; // 0x01D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaterialSelection[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurveSelection[0x1]; // 0x0228 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, AttributeKey) == 272, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::AttributeKey");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, Group) == 304, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::Group");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, Attribute) == 312, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::Attribute");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, Operation) == 328, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::Operation");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, Value) == 336, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::Value");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, VertexSelection) == 352, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::VertexSelection");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, FaceSelection) == 392, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::FaceSelection");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, TransformSelection) == 432, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, GeometrySelection) == 472, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::GeometrySelection");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, MaterialSelection) == 512, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::MaterialSelection");
static_assert(offsetof(FCollectionSelectionByAttrDataflowNode, CurveSelection) == 552, "Offset mismatch for FCollectionSelectionByAttrDataflowNode::CurveSelection");

// /Script/GeometryCollectionNodes.CollectionSelectionByAttributeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionByAttributeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString Attribute; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t Operation; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    FString Value; // 0x0128 (Size: 0x10, Type: StrProperty)
    std::uint8_t Selection[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionByAttributeDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionByAttributeDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionByAttributeDataflowNode, Attribute) == 272, "Offset mismatch for FCollectionSelectionByAttributeDataflowNode::Attribute");
static_assert(offsetof(FCollectionSelectionByAttributeDataflowNode, Operation) == 288, "Offset mismatch for FCollectionSelectionByAttributeDataflowNode::Operation");
static_assert(offsetof(FCollectionSelectionByAttributeDataflowNode, Value) == 296, "Offset mismatch for FCollectionSelectionByAttributeDataflowNode::Value");
static_assert(offsetof(FCollectionSelectionByAttributeDataflowNode, Selection) == 312, "Offset mismatch for FCollectionSelectionByAttributeDataflowNode::Selection");

// /Script/GeometryCollectionNodes.CollectionSelectionByMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionByMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    void* Mesh; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FilterMethod; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bKeepInside; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x011A
    float WindingThreshold; // 0x011C (Size: 0x4, Type: FloatProperty)
    float MinDistance; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x0124 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSignedDistance; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllElementsMustBeSelected; // 0x0129 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x012A
    std::uint8_t Selection[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, Mesh) == 272, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::Mesh");
static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, FilterMethod) == 280, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::FilterMethod");
static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, bKeepInside) == 281, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::bKeepInside");
static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, WindingThreshold) == 284, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::WindingThreshold");
static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, MinDistance) == 288, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::MinDistance");
static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, MaxDistance) == 292, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::MaxDistance");
static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, bUseSignedDistance) == 296, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::bUseSignedDistance");
static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, bAllElementsMustBeSelected) == 297, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::bAllElementsMustBeSelected");
static_assert(offsetof(FCollectionSelectionByMeshDataflowNode, Selection) == 304, "Offset mismatch for FCollectionSelectionByMeshDataflowNode::Selection");

// /Script/GeometryCollectionNodes.CollectionSelectionByPercentageDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionByPercentageDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Selection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::int32_t Percentage; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDeterministic; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x010D
    std::int32_t RandomSeed; // 0x0110 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCollectionSelectionByPercentageDataflowNode, Selection) == 224, "Offset mismatch for FCollectionSelectionByPercentageDataflowNode::Selection");
static_assert(offsetof(FCollectionSelectionByPercentageDataflowNode, Percentage) == 264, "Offset mismatch for FCollectionSelectionByPercentageDataflowNode::Percentage");
static_assert(offsetof(FCollectionSelectionByPercentageDataflowNode, bDeterministic) == 268, "Offset mismatch for FCollectionSelectionByPercentageDataflowNode::bDeterministic");
static_assert(offsetof(FCollectionSelectionByPercentageDataflowNode, RandomSeed) == 272, "Offset mismatch for FCollectionSelectionByPercentageDataflowNode::RandomSeed");

// /Script/GeometryCollectionNodes.CollectionSelectionByPrimitiveDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionByPrimitiveDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Primitive[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0150 (Size: 0x60, Type: StructProperty)
    std::uint8_t bAllElementsMustBeSelected; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPositiveSide; // 0x01B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01B2
    float PlaneSize; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    std::int32_t VertexPerEdge; // 0x01B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01BC
    std::uint8_t Selection[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionByPrimitiveDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionByPrimitiveDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionByPrimitiveDataflowNode, Primitive) == 272, "Offset mismatch for FCollectionSelectionByPrimitiveDataflowNode::Primitive");
static_assert(offsetof(FCollectionSelectionByPrimitiveDataflowNode, Transform) == 336, "Offset mismatch for FCollectionSelectionByPrimitiveDataflowNode::Transform");
static_assert(offsetof(FCollectionSelectionByPrimitiveDataflowNode, bAllElementsMustBeSelected) == 432, "Offset mismatch for FCollectionSelectionByPrimitiveDataflowNode::bAllElementsMustBeSelected");
static_assert(offsetof(FCollectionSelectionByPrimitiveDataflowNode, bPositiveSide) == 433, "Offset mismatch for FCollectionSelectionByPrimitiveDataflowNode::bPositiveSide");
static_assert(offsetof(FCollectionSelectionByPrimitiveDataflowNode, PlaneSize) == 436, "Offset mismatch for FCollectionSelectionByPrimitiveDataflowNode::PlaneSize");
static_assert(offsetof(FCollectionSelectionByPrimitiveDataflowNode, VertexPerEdge) == 440, "Offset mismatch for FCollectionSelectionByPrimitiveDataflowNode::VertexPerEdge");
static_assert(offsetof(FCollectionSelectionByPrimitiveDataflowNode, Selection) == 448, "Offset mismatch for FCollectionSelectionByPrimitiveDataflowNode::Selection");

// /Script/GeometryCollectionNodes.CollectionSelectionConvertDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionConvertDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t FaceSelection[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t VertexSelection[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllElementsMustBeSelected; // 0x0188 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCollectionSelectionConvertDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionConvertDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionConvertDataflowNode, TransformSelection) == 272, "Offset mismatch for FCollectionSelectionConvertDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionSelectionConvertDataflowNode, FaceSelection) == 312, "Offset mismatch for FCollectionSelectionConvertDataflowNode::FaceSelection");
static_assert(offsetof(FCollectionSelectionConvertDataflowNode, VertexSelection) == 352, "Offset mismatch for FCollectionSelectionConvertDataflowNode::VertexSelection");
static_assert(offsetof(FCollectionSelectionConvertDataflowNode, bAllElementsMustBeSelected) == 392, "Offset mismatch for FCollectionSelectionConvertDataflowNode::bAllElementsMustBeSelected");

// /Script/GeometryCollectionNodes.CollectionSelectionConvertDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionConvertDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Selection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllElementsMustBeSelected; // 0x0138 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCollectionSelectionConvertDataflowNode_v2, Collection) == 224, "Offset mismatch for FCollectionSelectionConvertDataflowNode_v2::Collection");
static_assert(offsetof(FCollectionSelectionConvertDataflowNode_v2, Selection) == 272, "Offset mismatch for FCollectionSelectionConvertDataflowNode_v2::Selection");
static_assert(offsetof(FCollectionSelectionConvertDataflowNode_v2, bAllElementsMustBeSelected) == 312, "Offset mismatch for FCollectionSelectionConvertDataflowNode_v2::bAllElementsMustBeSelected");

// /Script/GeometryCollectionNodes.CollectionSelectionCustomDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionCustomDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString Indices; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t Selection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionCustomDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionCustomDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionCustomDataflowNode, Indices) == 272, "Offset mismatch for FCollectionSelectionCustomDataflowNode::Indices");
static_assert(offsetof(FCollectionSelectionCustomDataflowNode, Selection) == 288, "Offset mismatch for FCollectionSelectionCustomDataflowNode::Selection");

// /Script/GeometryCollectionNodes.CollectionSelectionInvertDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionInvertDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Selection[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionInvertDataflowNode, Selection) == 224, "Offset mismatch for FCollectionSelectionInvertDataflowNode::Selection");

// /Script/GeometryCollectionNodes.CollectionSelectionNoneDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionNoneDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Selection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionNoneDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionNoneDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionNoneDataflowNode, Selection) == 272, "Offset mismatch for FCollectionSelectionNoneDataflowNode::Selection");

// /Script/GeometryCollectionNodes.CollectionSelectionRandomDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionRandomDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bDeterministic; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0111
    std::int32_t RandomSeed; // 0x0114 (Size: 0x4, Type: IntProperty)
    float RandomThreshold; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x011C
    std::uint8_t Selection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionRandomDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionRandomDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionRandomDataflowNode, bDeterministic) == 272, "Offset mismatch for FCollectionSelectionRandomDataflowNode::bDeterministic");
static_assert(offsetof(FCollectionSelectionRandomDataflowNode, RandomSeed) == 276, "Offset mismatch for FCollectionSelectionRandomDataflowNode::RandomSeed");
static_assert(offsetof(FCollectionSelectionRandomDataflowNode, RandomThreshold) == 280, "Offset mismatch for FCollectionSelectionRandomDataflowNode::RandomThreshold");
static_assert(offsetof(FCollectionSelectionRandomDataflowNode, Selection) == 288, "Offset mismatch for FCollectionSelectionRandomDataflowNode::Selection");

// /Script/GeometryCollectionNodes.CollectionSelectionSetOperationDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionSetOperationDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Operation; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t SelectionA[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SelectionB[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Selection[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSelectionSetOperationDataflowNode, Operation) == 224, "Offset mismatch for FCollectionSelectionSetOperationDataflowNode::Operation");
static_assert(offsetof(FCollectionSelectionSetOperationDataflowNode, SelectionA) == 232, "Offset mismatch for FCollectionSelectionSetOperationDataflowNode::SelectionA");
static_assert(offsetof(FCollectionSelectionSetOperationDataflowNode, SelectionB) == 272, "Offset mismatch for FCollectionSelectionSetOperationDataflowNode::SelectionB");
static_assert(offsetof(FCollectionSelectionSetOperationDataflowNode, Selection) == 312, "Offset mismatch for FCollectionSelectionSetOperationDataflowNode::Selection");

// /Script/GeometryCollectionNodes.CollectionSelectionToAttributeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionToAttributeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Selection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t AttributeType; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0139
    FString Attribute; // 0x0140 (Size: 0x10, Type: StrProperty)
    FString DefaultValue; // 0x0150 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0160 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCollectionSelectionToAttributeDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionToAttributeDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionToAttributeDataflowNode, Selection) == 272, "Offset mismatch for FCollectionSelectionToAttributeDataflowNode::Selection");
static_assert(offsetof(FCollectionSelectionToAttributeDataflowNode, AttributeType) == 312, "Offset mismatch for FCollectionSelectionToAttributeDataflowNode::AttributeType");
static_assert(offsetof(FCollectionSelectionToAttributeDataflowNode, Attribute) == 320, "Offset mismatch for FCollectionSelectionToAttributeDataflowNode::Attribute");
static_assert(offsetof(FCollectionSelectionToAttributeDataflowNode, DefaultValue) == 336, "Offset mismatch for FCollectionSelectionToAttributeDataflowNode::DefaultValue");
static_assert(offsetof(FCollectionSelectionToAttributeDataflowNode, Value) == 352, "Offset mismatch for FCollectionSelectionToAttributeDataflowNode::Value");

// /Script/GeometryCollectionNodes.CollectionSelectionToMeshesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSelectionToMeshesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t bConvertSelectionToLeaves; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWeldVertices; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreserveIsolatedVertices; // 0x013A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x013B
    TArray<void*> Meshes; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCollectionSelectionToMeshesDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSelectionToMeshesDataflowNode::Collection");
static_assert(offsetof(FCollectionSelectionToMeshesDataflowNode, TransformSelection) == 272, "Offset mismatch for FCollectionSelectionToMeshesDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionSelectionToMeshesDataflowNode, bConvertSelectionToLeaves) == 312, "Offset mismatch for FCollectionSelectionToMeshesDataflowNode::bConvertSelectionToLeaves");
static_assert(offsetof(FCollectionSelectionToMeshesDataflowNode, bWeldVertices) == 313, "Offset mismatch for FCollectionSelectionToMeshesDataflowNode::bWeldVertices");
static_assert(offsetof(FCollectionSelectionToMeshesDataflowNode, bPreserveIsolatedVertices) == 314, "Offset mismatch for FCollectionSelectionToMeshesDataflowNode::bPreserveIsolatedVertices");
static_assert(offsetof(FCollectionSelectionToMeshesDataflowNode, Meshes) == 320, "Offset mismatch for FCollectionSelectionToMeshesDataflowNode::Meshes");

// /Script/GeometryCollectionNodes.CollectionSetPivotDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSetPivotDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionSetPivotDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSetPivotDataflowNode::Collection");
static_assert(offsetof(FCollectionSetPivotDataflowNode, Transform) == 272, "Offset mismatch for FCollectionSetPivotDataflowNode::Transform");

// /Script/GeometryCollectionNodes.CollectionSetTransformStringValueDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionSetTransformStringValueDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    FString Attribute; // 0x0138 (Size: 0x10, Type: StrProperty)
    FString TextToSet; // 0x0148 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCollectionSetTransformStringValueDataflowNode, Collection) == 224, "Offset mismatch for FCollectionSetTransformStringValueDataflowNode::Collection");
static_assert(offsetof(FCollectionSetTransformStringValueDataflowNode, TransformSelection) == 272, "Offset mismatch for FCollectionSetTransformStringValueDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionSetTransformStringValueDataflowNode, Attribute) == 312, "Offset mismatch for FCollectionSetTransformStringValueDataflowNode::Attribute");
static_assert(offsetof(FCollectionSetTransformStringValueDataflowNode, TextToSet) == 328, "Offset mismatch for FCollectionSetTransformStringValueDataflowNode::TextToSet");

// /Script/GeometryCollectionNodes.CollectionToMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bCenterPivot; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    void* Mesh; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t bWeldVertices; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreserveIsolatedVertices; // 0x0149 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCollectionToMeshDataflowNode, Collection) == 224, "Offset mismatch for FCollectionToMeshDataflowNode::Collection");
static_assert(offsetof(FCollectionToMeshDataflowNode, bCenterPivot) == 272, "Offset mismatch for FCollectionToMeshDataflowNode::bCenterPivot");
static_assert(offsetof(FCollectionToMeshDataflowNode, Mesh) == 280, "Offset mismatch for FCollectionToMeshDataflowNode::Mesh");
static_assert(offsetof(FCollectionToMeshDataflowNode, TransformSelection) == 288, "Offset mismatch for FCollectionToMeshDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionToMeshDataflowNode, bWeldVertices) == 328, "Offset mismatch for FCollectionToMeshDataflowNode::bWeldVertices");
static_assert(offsetof(FCollectionToMeshDataflowNode, bPreserveIsolatedVertices) == 329, "Offset mismatch for FCollectionToMeshDataflowNode::bPreserveIsolatedVertices");

// /Script/GeometryCollectionNodes.CollectionToMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionToMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCenterPivot; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    std::uint8_t TransformSelection[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t bWeldVertices; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreserveIsolatedVertices; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0152
    void* Mesh; // 0x0158 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCollectionToMeshDataflowNode_v2, Collection) == 224, "Offset mismatch for FCollectionToMeshDataflowNode_v2::Collection");
static_assert(offsetof(FCollectionToMeshDataflowNode_v2, Materials) == 272, "Offset mismatch for FCollectionToMeshDataflowNode_v2::Materials");
static_assert(offsetof(FCollectionToMeshDataflowNode_v2, bCenterPivot) == 288, "Offset mismatch for FCollectionToMeshDataflowNode_v2::bCenterPivot");
static_assert(offsetof(FCollectionToMeshDataflowNode_v2, TransformSelection) == 296, "Offset mismatch for FCollectionToMeshDataflowNode_v2::TransformSelection");
static_assert(offsetof(FCollectionToMeshDataflowNode_v2, bWeldVertices) == 336, "Offset mismatch for FCollectionToMeshDataflowNode_v2::bWeldVertices");
static_assert(offsetof(FCollectionToMeshDataflowNode_v2, bPreserveIsolatedVertices) == 337, "Offset mismatch for FCollectionToMeshDataflowNode_v2::bPreserveIsolatedVertices");
static_assert(offsetof(FCollectionToMeshDataflowNode_v2, Mesh) == 344, "Offset mismatch for FCollectionToMeshDataflowNode_v2::Mesh");

// /Script/GeometryCollectionNodes.CollectionToPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionToPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Points; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCollectionToPointsDataflowNode, Collection) == 224, "Offset mismatch for FCollectionToPointsDataflowNode::Collection");
static_assert(offsetof(FCollectionToPointsDataflowNode, Points) == 272, "Offset mismatch for FCollectionToPointsDataflowNode::Points");

// /Script/GeometryCollectionNodes.CollectionToSkeletalMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionToSkeletalMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    void* SkeletalMesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* skeleton; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCollectionToSkeletalMeshDataflowNode, Collection) == 224, "Offset mismatch for FCollectionToSkeletalMeshDataflowNode::Collection");
static_assert(offsetof(FCollectionToSkeletalMeshDataflowNode, Materials) == 272, "Offset mismatch for FCollectionToSkeletalMeshDataflowNode::Materials");
static_assert(offsetof(FCollectionToSkeletalMeshDataflowNode, SkeletalMesh) == 288, "Offset mismatch for FCollectionToSkeletalMeshDataflowNode::SkeletalMesh");
static_assert(offsetof(FCollectionToSkeletalMeshDataflowNode, skeleton) == 296, "Offset mismatch for FCollectionToSkeletalMeshDataflowNode::skeleton");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionAllDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionAllDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionAllDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionAllDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionAllDataflowNode, TransformSelection) == 272, "Offset mismatch for FCollectionTransformSelectionAllDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionByFloatAttrDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionByFloatAttrDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString GroupName; // 0x0110 (Size: 0x10, Type: StrProperty)
    FString AttrName; // 0x0120 (Size: 0x10, Type: StrProperty)
    float min; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float max; // 0x0134 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RangeSetting; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInclusive; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x013A
    std::uint8_t TransformSelection[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionByFloatAttrDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, GroupName) == 272, "Offset mismatch for FCollectionTransformSelectionByFloatAttrDataflowNode::GroupName");
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, AttrName) == 288, "Offset mismatch for FCollectionTransformSelectionByFloatAttrDataflowNode::AttrName");
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, min) == 304, "Offset mismatch for FCollectionTransformSelectionByFloatAttrDataflowNode::min");
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, max) == 308, "Offset mismatch for FCollectionTransformSelectionByFloatAttrDataflowNode::max");
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, RangeSetting) == 312, "Offset mismatch for FCollectionTransformSelectionByFloatAttrDataflowNode::RangeSetting");
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, bInclusive) == 313, "Offset mismatch for FCollectionTransformSelectionByFloatAttrDataflowNode::bInclusive");
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, TransformSelection) == 320, "Offset mismatch for FCollectionTransformSelectionByFloatAttrDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionByIntAttrDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionByIntAttrDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString GroupName; // 0x0110 (Size: 0x10, Type: StrProperty)
    FString AttrName; // 0x0120 (Size: 0x10, Type: StrProperty)
    std::int32_t min; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::int32_t max; // 0x0134 (Size: 0x4, Type: IntProperty)
    std::uint8_t RangeSetting; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInclusive; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x013A
    std::uint8_t TransformSelection[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionByIntAttrDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, GroupName) == 272, "Offset mismatch for FCollectionTransformSelectionByIntAttrDataflowNode::GroupName");
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, AttrName) == 288, "Offset mismatch for FCollectionTransformSelectionByIntAttrDataflowNode::AttrName");
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, min) == 304, "Offset mismatch for FCollectionTransformSelectionByIntAttrDataflowNode::min");
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, max) == 308, "Offset mismatch for FCollectionTransformSelectionByIntAttrDataflowNode::max");
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, RangeSetting) == 312, "Offset mismatch for FCollectionTransformSelectionByIntAttrDataflowNode::RangeSetting");
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, bInclusive) == 313, "Offset mismatch for FCollectionTransformSelectionByIntAttrDataflowNode::bInclusive");
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, TransformSelection) == 320, "Offset mismatch for FCollectionTransformSelectionByIntAttrDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionByPercentageDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionByPercentageDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TransformSelection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::int32_t Percentage; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDeterministic; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x010D
    float RandomSeed; // 0x0110 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCollectionTransformSelectionByPercentageDataflowNode, TransformSelection) == 224, "Offset mismatch for FCollectionTransformSelectionByPercentageDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionTransformSelectionByPercentageDataflowNode, Percentage) == 264, "Offset mismatch for FCollectionTransformSelectionByPercentageDataflowNode::Percentage");
static_assert(offsetof(FCollectionTransformSelectionByPercentageDataflowNode, bDeterministic) == 268, "Offset mismatch for FCollectionTransformSelectionByPercentageDataflowNode::bDeterministic");
static_assert(offsetof(FCollectionTransformSelectionByPercentageDataflowNode, RandomSeed) == 272, "Offset mismatch for FCollectionTransformSelectionByPercentageDataflowNode::RandomSeed");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionBySizeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionBySizeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    float SizeMin; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float SizeMax; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RangeSetting; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInclusive; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRelativeSize; // 0x011A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x011B
    std::uint8_t TransformSelection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionBySizeDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, SizeMin) == 272, "Offset mismatch for FCollectionTransformSelectionBySizeDataflowNode::SizeMin");
static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, SizeMax) == 276, "Offset mismatch for FCollectionTransformSelectionBySizeDataflowNode::SizeMax");
static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, RangeSetting) == 280, "Offset mismatch for FCollectionTransformSelectionBySizeDataflowNode::RangeSetting");
static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, bInclusive) == 281, "Offset mismatch for FCollectionTransformSelectionBySizeDataflowNode::bInclusive");
static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, bUseRelativeSize) == 282, "Offset mismatch for FCollectionTransformSelectionBySizeDataflowNode::bUseRelativeSize");
static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, TransformSelection) == 288, "Offset mismatch for FCollectionTransformSelectionBySizeDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionByVolumeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionByVolumeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    float VolumeMin; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float VolumeMax; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RangeSetting; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInclusive; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x011A
    std::uint8_t TransformSelection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionByVolumeDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionByVolumeDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionByVolumeDataflowNode, VolumeMin) == 272, "Offset mismatch for FCollectionTransformSelectionByVolumeDataflowNode::VolumeMin");
static_assert(offsetof(FCollectionTransformSelectionByVolumeDataflowNode, VolumeMax) == 276, "Offset mismatch for FCollectionTransformSelectionByVolumeDataflowNode::VolumeMax");
static_assert(offsetof(FCollectionTransformSelectionByVolumeDataflowNode, RangeSetting) == 280, "Offset mismatch for FCollectionTransformSelectionByVolumeDataflowNode::RangeSetting");
static_assert(offsetof(FCollectionTransformSelectionByVolumeDataflowNode, bInclusive) == 281, "Offset mismatch for FCollectionTransformSelectionByVolumeDataflowNode::bInclusive");
static_assert(offsetof(FCollectionTransformSelectionByVolumeDataflowNode, TransformSelection) == 288, "Offset mismatch for FCollectionTransformSelectionByVolumeDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionChildrenDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionChildrenDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TransformSelection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Collection[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionChildrenDataflowNode, TransformSelection) == 224, "Offset mismatch for FCollectionTransformSelectionChildrenDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionTransformSelectionChildrenDataflowNode, Collection) == 264, "Offset mismatch for FCollectionTransformSelectionChildrenDataflowNode::Collection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionClusterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionClusterDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionClusterDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionClusterDataflowNode, TransformSelection) == 272, "Offset mismatch for FCollectionTransformSelectionClusterDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionClusterDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionClusterDataflowNode_v2, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionClusterDataflowNode_v2::Collection");
static_assert(offsetof(FCollectionTransformSelectionClusterDataflowNode_v2, TransformSelection) == 272, "Offset mismatch for FCollectionTransformSelectionClusterDataflowNode_v2::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionContactDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionContactDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TransformSelection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Collection[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAllowContactInParentLevels; // 0x0138 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCollectionTransformSelectionContactDataflowNode, TransformSelection) == 224, "Offset mismatch for FCollectionTransformSelectionContactDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionTransformSelectionContactDataflowNode, Collection) == 264, "Offset mismatch for FCollectionTransformSelectionContactDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionContactDataflowNode, bAllowContactInParentLevels) == 312, "Offset mismatch for FCollectionTransformSelectionContactDataflowNode::bAllowContactInParentLevels");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionCustomDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString BoneIndicies; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionCustomDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionCustomDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionCustomDataflowNode, BoneIndicies) == 272, "Offset mismatch for FCollectionTransformSelectionCustomDataflowNode::BoneIndicies");
static_assert(offsetof(FCollectionTransformSelectionCustomDataflowNode, TransformSelection) == 288, "Offset mismatch for FCollectionTransformSelectionCustomDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionCustomDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString BoneIndices; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionCustomDataflowNode_v2, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionCustomDataflowNode_v2::Collection");
static_assert(offsetof(FCollectionTransformSelectionCustomDataflowNode_v2, BoneIndices) == 272, "Offset mismatch for FCollectionTransformSelectionCustomDataflowNode_v2::BoneIndices");
static_assert(offsetof(FCollectionTransformSelectionCustomDataflowNode_v2, TransformSelection) == 288, "Offset mismatch for FCollectionTransformSelectionCustomDataflowNode_v2::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionFromIndexArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionFromIndexArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> BoneIndices; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionFromIndexArrayDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionFromIndexArrayDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionFromIndexArrayDataflowNode, BoneIndices) == 272, "Offset mismatch for FCollectionTransformSelectionFromIndexArrayDataflowNode::BoneIndices");
static_assert(offsetof(FCollectionTransformSelectionFromIndexArrayDataflowNode, TransformSelection) == 288, "Offset mismatch for FCollectionTransformSelectionFromIndexArrayDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionInBoxDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionInBoxDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Box[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0150 (Size: 0x60, Type: StructProperty)
    std::uint8_t Type; // 0x01B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllVerticesMustContainedInBox; // 0x01B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x01B2
    std::uint8_t TransformSelection[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionInBoxDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, Box) == 272, "Offset mismatch for FCollectionTransformSelectionInBoxDataflowNode::Box");
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, Transform) == 336, "Offset mismatch for FCollectionTransformSelectionInBoxDataflowNode::Transform");
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, Type) == 432, "Offset mismatch for FCollectionTransformSelectionInBoxDataflowNode::Type");
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, bAllVerticesMustContainedInBox) == 433, "Offset mismatch for FCollectionTransformSelectionInBoxDataflowNode::bAllVerticesMustContainedInBox");
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, TransformSelection) == 440, "Offset mismatch for FCollectionTransformSelectionInBoxDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionInSphereDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionInSphereDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Sphere[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0130 (Size: 0x60, Type: StructProperty)
    std::uint8_t Type; // 0x0190 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllVerticesMustContainedInSphere; // 0x0191 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0192
    std::uint8_t TransformSelection[0x1]; // 0x0198 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionInSphereDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, Sphere) == 272, "Offset mismatch for FCollectionTransformSelectionInSphereDataflowNode::Sphere");
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, Transform) == 304, "Offset mismatch for FCollectionTransformSelectionInSphereDataflowNode::Transform");
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, Type) == 400, "Offset mismatch for FCollectionTransformSelectionInSphereDataflowNode::Type");
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, bAllVerticesMustContainedInSphere) == 401, "Offset mismatch for FCollectionTransformSelectionInSphereDataflowNode::bAllVerticesMustContainedInSphere");
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, TransformSelection) == 408, "Offset mismatch for FCollectionTransformSelectionInSphereDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionInfoDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionInfoDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TransformSelection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Collection[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    FString String; // 0x0138 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCollectionTransformSelectionInfoDataflowNode, TransformSelection) == 224, "Offset mismatch for FCollectionTransformSelectionInfoDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionTransformSelectionInfoDataflowNode, Collection) == 264, "Offset mismatch for FCollectionTransformSelectionInfoDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionInfoDataflowNode, String) == 312, "Offset mismatch for FCollectionTransformSelectionInfoDataflowNode::String");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionInvertDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionInvertDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TransformSelection[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionInvertDataflowNode, TransformSelection) == 224, "Offset mismatch for FCollectionTransformSelectionInvertDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionLeafDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionLeafDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionLeafDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionLeafDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionLeafDataflowNode, TransformSelection) == 272, "Offset mismatch for FCollectionTransformSelectionLeafDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionLevelDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionLevelDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TransformSelection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Collection[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionLevelDataflowNode, TransformSelection) == 224, "Offset mismatch for FCollectionTransformSelectionLevelDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionTransformSelectionLevelDataflowNode, Collection) == 264, "Offset mismatch for FCollectionTransformSelectionLevelDataflowNode::Collection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionNoneDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionNoneDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionNoneDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionNoneDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionNoneDataflowNode, TransformSelection) == 272, "Offset mismatch for FCollectionTransformSelectionNoneDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionParentDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionParentDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TransformSelection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Collection[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionParentDataflowNode, TransformSelection) == 224, "Offset mismatch for FCollectionTransformSelectionParentDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionTransformSelectionParentDataflowNode, Collection) == 264, "Offset mismatch for FCollectionTransformSelectionParentDataflowNode::Collection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionRandomDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionRandomDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bDeterministic; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float RandomSeed; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float RandomThreshold; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00EC
    std::uint8_t Collection[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionRandomDataflowNode, bDeterministic) == 224, "Offset mismatch for FCollectionTransformSelectionRandomDataflowNode::bDeterministic");
static_assert(offsetof(FCollectionTransformSelectionRandomDataflowNode, RandomSeed) == 228, "Offset mismatch for FCollectionTransformSelectionRandomDataflowNode::RandomSeed");
static_assert(offsetof(FCollectionTransformSelectionRandomDataflowNode, RandomThreshold) == 232, "Offset mismatch for FCollectionTransformSelectionRandomDataflowNode::RandomThreshold");
static_assert(offsetof(FCollectionTransformSelectionRandomDataflowNode, Collection) == 240, "Offset mismatch for FCollectionTransformSelectionRandomDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionRandomDataflowNode, TransformSelection) == 288, "Offset mismatch for FCollectionTransformSelectionRandomDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionRootDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionRootDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionRootDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionRootDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionRootDataflowNode, TransformSelection) == 272, "Offset mismatch for FCollectionTransformSelectionRootDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionSetOperationDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionSetOperationDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Operation; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t TransformSelectionA[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TransformSelectionB[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionSetOperationDataflowNode, Operation) == 224, "Offset mismatch for FCollectionTransformSelectionSetOperationDataflowNode::Operation");
static_assert(offsetof(FCollectionTransformSelectionSetOperationDataflowNode, TransformSelectionA) == 232, "Offset mismatch for FCollectionTransformSelectionSetOperationDataflowNode::TransformSelectionA");
static_assert(offsetof(FCollectionTransformSelectionSetOperationDataflowNode, TransformSelectionB) == 272, "Offset mismatch for FCollectionTransformSelectionSetOperationDataflowNode::TransformSelectionB");
static_assert(offsetof(FCollectionTransformSelectionSetOperationDataflowNode, TransformSelection) == 312, "Offset mismatch for FCollectionTransformSelectionSetOperationDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionSiblingsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionSiblingsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TransformSelection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Collection[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionSiblingsDataflowNode, TransformSelection) == 224, "Offset mismatch for FCollectionTransformSelectionSiblingsDataflowNode::TransformSelection");
static_assert(offsetof(FCollectionTransformSelectionSiblingsDataflowNode, Collection) == 264, "Offset mismatch for FCollectionTransformSelectionSiblingsDataflowNode::Collection");

// /Script/GeometryCollectionNodes.CollectionTransformSelectionTargetLevelDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionTransformSelectionTargetLevelDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::int32_t TargetLevel; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSkipEmbedded; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0115
    std::uint8_t TransformSelection[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionTransformSelectionTargetLevelDataflowNode, Collection) == 224, "Offset mismatch for FCollectionTransformSelectionTargetLevelDataflowNode::Collection");
static_assert(offsetof(FCollectionTransformSelectionTargetLevelDataflowNode, TargetLevel) == 272, "Offset mismatch for FCollectionTransformSelectionTargetLevelDataflowNode::TargetLevel");
static_assert(offsetof(FCollectionTransformSelectionTargetLevelDataflowNode, bSkipEmbedded) == 276, "Offset mismatch for FCollectionTransformSelectionTargetLevelDataflowNode::bSkipEmbedded");
static_assert(offsetof(FCollectionTransformSelectionTargetLevelDataflowNode, TransformSelection) == 280, "Offset mismatch for FCollectionTransformSelectionTargetLevelDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.CollectionVertexSelectionByBoxDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionVertexSelectionByBoxDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Box[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t BoxTransform[0x60]; // 0x0150 (Size: 0x60, Type: StructProperty)
    std::uint8_t VertexSelection[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionVertexSelectionByBoxDataflowNode, Collection) == 224, "Offset mismatch for FCollectionVertexSelectionByBoxDataflowNode::Collection");
static_assert(offsetof(FCollectionVertexSelectionByBoxDataflowNode, Box) == 272, "Offset mismatch for FCollectionVertexSelectionByBoxDataflowNode::Box");
static_assert(offsetof(FCollectionVertexSelectionByBoxDataflowNode, BoxTransform) == 336, "Offset mismatch for FCollectionVertexSelectionByBoxDataflowNode::BoxTransform");
static_assert(offsetof(FCollectionVertexSelectionByBoxDataflowNode, VertexSelection) == 432, "Offset mismatch for FCollectionVertexSelectionByBoxDataflowNode::VertexSelection");

// /Script/GeometryCollectionNodes.CollectionVertexSelectionByPercentageDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionVertexSelectionByPercentageDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t VertexSelection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::int32_t Percentage; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDeterministic; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x010D
    float RandomSeed; // 0x0110 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCollectionVertexSelectionByPercentageDataflowNode, VertexSelection) == 224, "Offset mismatch for FCollectionVertexSelectionByPercentageDataflowNode::VertexSelection");
static_assert(offsetof(FCollectionVertexSelectionByPercentageDataflowNode, Percentage) == 264, "Offset mismatch for FCollectionVertexSelectionByPercentageDataflowNode::Percentage");
static_assert(offsetof(FCollectionVertexSelectionByPercentageDataflowNode, bDeterministic) == 268, "Offset mismatch for FCollectionVertexSelectionByPercentageDataflowNode::bDeterministic");
static_assert(offsetof(FCollectionVertexSelectionByPercentageDataflowNode, RandomSeed) == 272, "Offset mismatch for FCollectionVertexSelectionByPercentageDataflowNode::RandomSeed");

// /Script/GeometryCollectionNodes.CollectionVertexSelectionByPlaneDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionVertexSelectionByPlaneDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlaneTransform[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    std::uint8_t bPositiveSide; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0171
    std::uint8_t VertexSelection[0x28]; // 0x0178 (Size: 0x28, Type: StructProperty)
    float PlaneSize; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    std::int32_t PlaneResolution; // 0x01A4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCollectionVertexSelectionByPlaneDataflowNode, Collection) == 224, "Offset mismatch for FCollectionVertexSelectionByPlaneDataflowNode::Collection");
static_assert(offsetof(FCollectionVertexSelectionByPlaneDataflowNode, PlaneTransform) == 272, "Offset mismatch for FCollectionVertexSelectionByPlaneDataflowNode::PlaneTransform");
static_assert(offsetof(FCollectionVertexSelectionByPlaneDataflowNode, bPositiveSide) == 368, "Offset mismatch for FCollectionVertexSelectionByPlaneDataflowNode::bPositiveSide");
static_assert(offsetof(FCollectionVertexSelectionByPlaneDataflowNode, VertexSelection) == 376, "Offset mismatch for FCollectionVertexSelectionByPlaneDataflowNode::VertexSelection");
static_assert(offsetof(FCollectionVertexSelectionByPlaneDataflowNode, PlaneSize) == 416, "Offset mismatch for FCollectionVertexSelectionByPlaneDataflowNode::PlaneSize");
static_assert(offsetof(FCollectionVertexSelectionByPlaneDataflowNode, PlaneResolution) == 420, "Offset mismatch for FCollectionVertexSelectionByPlaneDataflowNode::PlaneResolution");

// /Script/GeometryCollectionNodes.CollectionVertexSelectionBySphereDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionVertexSelectionBySphereDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Sphere[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t VertexSelection[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionVertexSelectionBySphereDataflowNode, Collection) == 224, "Offset mismatch for FCollectionVertexSelectionBySphereDataflowNode::Collection");
static_assert(offsetof(FCollectionVertexSelectionBySphereDataflowNode, Sphere) == 272, "Offset mismatch for FCollectionVertexSelectionBySphereDataflowNode::Sphere");
static_assert(offsetof(FCollectionVertexSelectionBySphereDataflowNode, VertexSelection) == 304, "Offset mismatch for FCollectionVertexSelectionBySphereDataflowNode::VertexSelection");

// /Script/GeometryCollectionNodes.CollectionVertexSelectionCustomDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionVertexSelectionCustomDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString VertexIndicies; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t VertexSelection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionVertexSelectionCustomDataflowNode, Collection) == 224, "Offset mismatch for FCollectionVertexSelectionCustomDataflowNode::Collection");
static_assert(offsetof(FCollectionVertexSelectionCustomDataflowNode, VertexIndicies) == 272, "Offset mismatch for FCollectionVertexSelectionCustomDataflowNode::VertexIndicies");
static_assert(offsetof(FCollectionVertexSelectionCustomDataflowNode, VertexSelection) == 288, "Offset mismatch for FCollectionVertexSelectionCustomDataflowNode::VertexSelection");

// /Script/GeometryCollectionNodes.CollectionVertexSelectionSetOperationDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCollectionVertexSelectionSetOperationDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Operation; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t VertexSelectionA[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t VertexSelectionB[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t VertexSelection[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCollectionVertexSelectionSetOperationDataflowNode, Operation) == 224, "Offset mismatch for FCollectionVertexSelectionSetOperationDataflowNode::Operation");
static_assert(offsetof(FCollectionVertexSelectionSetOperationDataflowNode, VertexSelectionA) == 232, "Offset mismatch for FCollectionVertexSelectionSetOperationDataflowNode::VertexSelectionA");
static_assert(offsetof(FCollectionVertexSelectionSetOperationDataflowNode, VertexSelectionB) == 272, "Offset mismatch for FCollectionVertexSelectionSetOperationDataflowNode::VertexSelectionB");
static_assert(offsetof(FCollectionVertexSelectionSetOperationDataflowNode, VertexSelection) == 312, "Offset mismatch for FCollectionVertexSelectionSetOperationDataflowNode::VertexSelection");

// /Script/GeometryCollectionNodes.CompareFloatDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCompareFloatDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Operation; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float FloatA; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Result; // 0x00EC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCompareFloatDataflowNode, Operation) == 224, "Offset mismatch for FCompareFloatDataflowNode::Operation");
static_assert(offsetof(FCompareFloatDataflowNode, FloatA) == 228, "Offset mismatch for FCompareFloatDataflowNode::FloatA");
static_assert(offsetof(FCompareFloatDataflowNode, FloatB) == 232, "Offset mismatch for FCompareFloatDataflowNode::FloatB");
static_assert(offsetof(FCompareFloatDataflowNode, Result) == 236, "Offset mismatch for FCompareFloatDataflowNode::Result");

// /Script/GeometryCollectionNodes.CompareIntDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCompareIntDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Operation; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    std::int32_t IntA; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::int32_t IntB; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Result; // 0x00EC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCompareIntDataflowNode, Operation) == 224, "Offset mismatch for FCompareIntDataflowNode::Operation");
static_assert(offsetof(FCompareIntDataflowNode, IntA) == 228, "Offset mismatch for FCompareIntDataflowNode::IntA");
static_assert(offsetof(FCompareIntDataflowNode, IntB) == 232, "Offset mismatch for FCompareIntDataflowNode::IntB");
static_assert(offsetof(FCompareIntDataflowNode, Result) == 236, "Offset mismatch for FCompareIntDataflowNode::Result");

// /Script/GeometryCollectionNodes.ComputeVolumeStatsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FComputeVolumeStatsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::int32_t TransformIndex; // 0x0110 (Size: 0x4, Type: IntProperty)
    float GeometryVolume; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float ConvexVolume; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float VolumeRatio; // 0x011C (Size: 0x4, Type: FloatProperty)
    float VolumePercentage; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float EmptySpaceCubeSize; // 0x0124 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FComputeVolumeStatsDataflowNode, Collection) == 224, "Offset mismatch for FComputeVolumeStatsDataflowNode::Collection");
static_assert(offsetof(FComputeVolumeStatsDataflowNode, TransformIndex) == 272, "Offset mismatch for FComputeVolumeStatsDataflowNode::TransformIndex");
static_assert(offsetof(FComputeVolumeStatsDataflowNode, GeometryVolume) == 276, "Offset mismatch for FComputeVolumeStatsDataflowNode::GeometryVolume");
static_assert(offsetof(FComputeVolumeStatsDataflowNode, ConvexVolume) == 280, "Offset mismatch for FComputeVolumeStatsDataflowNode::ConvexVolume");
static_assert(offsetof(FComputeVolumeStatsDataflowNode, VolumeRatio) == 284, "Offset mismatch for FComputeVolumeStatsDataflowNode::VolumeRatio");
static_assert(offsetof(FComputeVolumeStatsDataflowNode, VolumePercentage) == 288, "Offset mismatch for FComputeVolumeStatsDataflowNode::VolumePercentage");
static_assert(offsetof(FComputeVolumeStatsDataflowNode, EmptySpaceCubeSize) == 292, "Offset mismatch for FComputeVolumeStatsDataflowNode::EmptySpaceCubeSize");

// /Script/GeometryCollectionNodes.ConvertMedialSkeletonToAnimationSkeletonDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertMedialSkeletonToAnimationSkeletonDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MedialSkeleton[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    void* AvoidIntersectingMesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t skeleton[0x98]; // 0x0128 (Size: 0x98, Type: StructProperty)
    std::uint8_t EdgeWeightMethod; // 0x01C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MergeDisconnectedMethod; // 0x01C1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SelectRootMethod; // 0x01C2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x01C3
    std::uint8_t RootSelectionPoint[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RootSelectionDirection[0x18]; // 0x01E0 (Size: 0x18, Type: StructProperty)
    std::int32_t RootClusterIndex; // 0x01F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAddCustomAnimationRoot; // 0x01FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01FD
    std::uint8_t CustomAnimationRootPosition[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, MedialSkeleton) == 224, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::MedialSkeleton");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, AvoidIntersectingMesh) == 288, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::AvoidIntersectingMesh");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, skeleton) == 296, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::skeleton");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, EdgeWeightMethod) == 448, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::EdgeWeightMethod");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, MergeDisconnectedMethod) == 449, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::MergeDisconnectedMethod");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, SelectRootMethod) == 450, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::SelectRootMethod");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, RootSelectionPoint) == 456, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::RootSelectionPoint");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, RootSelectionDirection) == 480, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::RootSelectionDirection");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, RootClusterIndex) == 504, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::RootClusterIndex");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, bAddCustomAnimationRoot) == 508, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::bAddCustomAnimationRoot");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode, CustomAnimationRootPosition) == 512, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode::CustomAnimationRootPosition");

// /Script/GeometryCollectionNodes.ConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MedialSkeleton[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    void* AvoidIntersectingMesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t skeleton[0x98]; // 0x0128 (Size: 0x98, Type: StructProperty)
    std::uint8_t EdgeWeightMethod; // 0x01C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MergeDisconnectedMethod; // 0x01C1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SelectRootMethod; // 0x01C2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x01C3
    std::uint8_t RootSelectionPoint[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RootSelectionDirection[0x18]; // 0x01E0 (Size: 0x18, Type: StructProperty)
    std::int32_t RootClusterIndex; // 0x01F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAddCustomAnimationRoot; // 0x01FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01FD
    std::uint8_t CustomAnimationRootPosition[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, MedialSkeleton) == 224, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::MedialSkeleton");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, AvoidIntersectingMesh) == 288, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::AvoidIntersectingMesh");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, skeleton) == 296, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::skeleton");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, EdgeWeightMethod) == 448, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::EdgeWeightMethod");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, MergeDisconnectedMethod) == 449, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::MergeDisconnectedMethod");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, SelectRootMethod) == 450, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::SelectRootMethod");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, RootSelectionPoint) == 456, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::RootSelectionPoint");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, RootSelectionDirection) == 480, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::RootSelectionDirection");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, RootClusterIndex) == 504, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::RootClusterIndex");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, bAddCustomAnimationRoot) == 508, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::bAddCustomAnimationRoot");
static_assert(offsetof(FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2, CustomAnimationRootPosition) == 512, "Offset mismatch for FConvertMedialSkeletonToAnimationSkeletonDataflowNode_v2::CustomAnimationRootPosition");

// /Script/GeometryCollectionNodes.ConvexHullToMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvexHullToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t OptionalSelectionFilter[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseRobustHulls; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0139
    void* Mesh; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Meshes; // 0x0148 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConvexHullToMeshDataflowNode, Collection) == 224, "Offset mismatch for FConvexHullToMeshDataflowNode::Collection");
static_assert(offsetof(FConvexHullToMeshDataflowNode, OptionalSelectionFilter) == 272, "Offset mismatch for FConvexHullToMeshDataflowNode::OptionalSelectionFilter");
static_assert(offsetof(FConvexHullToMeshDataflowNode, bUseRobustHulls) == 312, "Offset mismatch for FConvexHullToMeshDataflowNode::bUseRobustHulls");
static_assert(offsetof(FConvexHullToMeshDataflowNode, Mesh) == 320, "Offset mismatch for FConvexHullToMeshDataflowNode::Mesh");
static_assert(offsetof(FConvexHullToMeshDataflowNode, Meshes) == 328, "Offset mismatch for FConvexHullToMeshDataflowNode::Meshes");

// /Script/GeometryCollectionNodes.CopyConvexHullsFromRootDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCopyConvexHullsFromRootDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FromCollection[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSkipIfEmpty; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0141
    std::uint8_t DebugDrawRenderSettings[0x18]; // 0x0144 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRandomizeColor; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x015D
    std::int32_t ColorRandomSeed; // 0x0160 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCopyConvexHullsFromRootDataflowNode, Collection) == 224, "Offset mismatch for FCopyConvexHullsFromRootDataflowNode::Collection");
static_assert(offsetof(FCopyConvexHullsFromRootDataflowNode, FromCollection) == 272, "Offset mismatch for FCopyConvexHullsFromRootDataflowNode::FromCollection");
static_assert(offsetof(FCopyConvexHullsFromRootDataflowNode, bSkipIfEmpty) == 320, "Offset mismatch for FCopyConvexHullsFromRootDataflowNode::bSkipIfEmpty");
static_assert(offsetof(FCopyConvexHullsFromRootDataflowNode, DebugDrawRenderSettings) == 324, "Offset mismatch for FCopyConvexHullsFromRootDataflowNode::DebugDrawRenderSettings");
static_assert(offsetof(FCopyConvexHullsFromRootDataflowNode, bRandomizeColor) == 348, "Offset mismatch for FCopyConvexHullsFromRootDataflowNode::bRandomizeColor");
static_assert(offsetof(FCopyConvexHullsFromRootDataflowNode, ColorRandomSeed) == 352, "Offset mismatch for FCopyConvexHullsFromRootDataflowNode::ColorRandomSeed");

// /Script/GeometryCollectionNodes.CosDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCosDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCosDataflowNode, float_) == 224, "Offset mismatch for FCosDataflowNode::float_");
static_assert(offsetof(FCosDataflowNode, ReturnValue) == 228, "Offset mismatch for FCosDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.CreateColorArrayFromFloatArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCreateColorArrayFromFloatArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> FloatArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorArray; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bNormalizeInput; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0101
    std::uint8_t Color[0x1]; // 0x0104 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCreateColorArrayFromFloatArrayDataflowNode, FloatArray) == 224, "Offset mismatch for FCreateColorArrayFromFloatArrayDataflowNode::FloatArray");
static_assert(offsetof(FCreateColorArrayFromFloatArrayDataflowNode, ColorArray) == 240, "Offset mismatch for FCreateColorArrayFromFloatArrayDataflowNode::ColorArray");
static_assert(offsetof(FCreateColorArrayFromFloatArrayDataflowNode, bNormalizeInput) == 256, "Offset mismatch for FCreateColorArrayFromFloatArrayDataflowNode::bNormalizeInput");
static_assert(offsetof(FCreateColorArrayFromFloatArrayDataflowNode, Color) == 260, "Offset mismatch for FCreateColorArrayFromFloatArrayDataflowNode::Color");

// /Script/GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCreateGeometryCollectionFromSourcesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Sources; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Collection[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialInstances; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode, Sources) == 224, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode::Sources");
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode, Collection) == 240, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode::Collection");
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode, Materials) == 288, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode::Materials");
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode, MaterialInstances) == 304, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode::MaterialInstances");
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode, InstancedMeshes) == 320, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode::InstancedMeshes");

// /Script/GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FCreateGeometryCollectionFromSourcesDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Sources; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Collection[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RootProxyMeshes; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode_v2, Sources) == 224, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode_v2::Sources");
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode_v2, Collection) == 240, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode_v2::Collection");
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode_v2, Materials) == 288, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode_v2::Materials");
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode_v2, InstancedMeshes) == 304, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode_v2::InstancedMeshes");
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode_v2, RootProxyMeshes) == 320, "Offset mismatch for FCreateGeometryCollectionFromSourcesDataflowNode_v2::RootProxyMeshes");

// /Script/GeometryCollectionNodes.CreateLeafConvexHullsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCreateLeafConvexHullsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SphereCovering[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t OptionalSelectionFilter[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t GenerateMethod; // 0x0158 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0159
    float IntersectIfComputedIsSmallerByFactor; // 0x015C (Size: 0x4, Type: FloatProperty)
    float MinExternalVolumeToIntersect; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bComputeIntersectionsBeforeHull; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0165
    float SimplificationDistanceThreshold; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ConvexDecompositionSettings[0x24]; // 0x016C (Size: 0x24, Type: StructProperty)
    std::uint8_t RequireNegativeSpaceCovering[0x20]; // 0x0190 (Size: 0x20, Type: StructProperty)
    std::uint8_t DebugDrawRenderSettings[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRandomizeColor; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x01C9
    std::int32_t ColorRandomSeed; // 0x01CC (Size: 0x4, Type: IntProperty)
    std::uint8_t SphereCoveringDebugDrawRenderSettings[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, Collection) == 224, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::Collection");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, SphereCovering) == 272, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::SphereCovering");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, OptionalSelectionFilter) == 304, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::OptionalSelectionFilter");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, GenerateMethod) == 344, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::GenerateMethod");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, IntersectIfComputedIsSmallerByFactor) == 348, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::IntersectIfComputedIsSmallerByFactor");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, MinExternalVolumeToIntersect) == 352, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::MinExternalVolumeToIntersect");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, bComputeIntersectionsBeforeHull) == 356, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::bComputeIntersectionsBeforeHull");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, SimplificationDistanceThreshold) == 360, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::SimplificationDistanceThreshold");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, ConvexDecompositionSettings) == 364, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::ConvexDecompositionSettings");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, RequireNegativeSpaceCovering) == 400, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::RequireNegativeSpaceCovering");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, DebugDrawRenderSettings) == 432, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::DebugDrawRenderSettings");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, bRandomizeColor) == 456, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::bRandomizeColor");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, ColorRandomSeed) == 460, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::ColorRandomSeed");
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, SphereCoveringDebugDrawRenderSettings) == 464, "Offset mismatch for FCreateLeafConvexHullsDataflowNode::SphereCoveringDebugDrawRenderSettings");

// /Script/GeometryCollectionNodes.CreateNegativeSpaceSphereCovering
// Kind: ScriptStruct; super: DataflowNode
struct FCreateNegativeSpaceSphereCovering
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SphereCovering[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t OptionalSelectionFilter[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t SampleMethod; // 0x0158 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRequireSearchSampleCoverage; // 0x0159 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyConnectedToHull; // 0x015A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x015B
    std::int32_t TargetNumSamples; // 0x015C (Size: 0x4, Type: IntProperty)
    double MinSampleSpacing; // 0x0160 (Size: 0x8, Type: DoubleProperty)
    double NegativeSpaceTolerance; // 0x0168 (Size: 0x8, Type: DoubleProperty)
    double MinRadius; // 0x0170 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t SphereCoveringDebugDrawRenderSettings[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCreateNegativeSpaceSphereCovering, Collection) == 224, "Offset mismatch for FCreateNegativeSpaceSphereCovering::Collection");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, SphereCovering) == 272, "Offset mismatch for FCreateNegativeSpaceSphereCovering::SphereCovering");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, OptionalSelectionFilter) == 304, "Offset mismatch for FCreateNegativeSpaceSphereCovering::OptionalSelectionFilter");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, SampleMethod) == 344, "Offset mismatch for FCreateNegativeSpaceSphereCovering::SampleMethod");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, bRequireSearchSampleCoverage) == 345, "Offset mismatch for FCreateNegativeSpaceSphereCovering::bRequireSearchSampleCoverage");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, bOnlyConnectedToHull) == 346, "Offset mismatch for FCreateNegativeSpaceSphereCovering::bOnlyConnectedToHull");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, TargetNumSamples) == 348, "Offset mismatch for FCreateNegativeSpaceSphereCovering::TargetNumSamples");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, MinSampleSpacing) == 352, "Offset mismatch for FCreateNegativeSpaceSphereCovering::MinSampleSpacing");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, NegativeSpaceTolerance) == 360, "Offset mismatch for FCreateNegativeSpaceSphereCovering::NegativeSpaceTolerance");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, MinRadius) == 368, "Offset mismatch for FCreateNegativeSpaceSphereCovering::MinRadius");
static_assert(offsetof(FCreateNegativeSpaceSphereCovering, SphereCoveringDebugDrawRenderSettings) == 376, "Offset mismatch for FCreateNegativeSpaceSphereCovering::SphereCoveringDebugDrawRenderSettings");

// /Script/GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCreateNonOverlappingConvexHullsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    float CanExceedFraction; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float SimplificationDistanceThreshold; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OverlapRemovalMethod; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0119
    float OverlapRemovalShrinkPercent; // 0x011C (Size: 0x4, Type: FloatProperty)
    float CanRemoveFraction; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DebugDrawRenderSettings[0x18]; // 0x0124 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRandomizeColor; // 0x013C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x013D
    std::int32_t ColorRandomSeed; // 0x0140 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, Collection) == 224, "Offset mismatch for FCreateNonOverlappingConvexHullsDataflowNode::Collection");
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, CanExceedFraction) == 272, "Offset mismatch for FCreateNonOverlappingConvexHullsDataflowNode::CanExceedFraction");
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, SimplificationDistanceThreshold) == 276, "Offset mismatch for FCreateNonOverlappingConvexHullsDataflowNode::SimplificationDistanceThreshold");
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, OverlapRemovalMethod) == 280, "Offset mismatch for FCreateNonOverlappingConvexHullsDataflowNode::OverlapRemovalMethod");
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, OverlapRemovalShrinkPercent) == 284, "Offset mismatch for FCreateNonOverlappingConvexHullsDataflowNode::OverlapRemovalShrinkPercent");
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, CanRemoveFraction) == 288, "Offset mismatch for FCreateNonOverlappingConvexHullsDataflowNode::CanRemoveFraction");
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, DebugDrawRenderSettings) == 292, "Offset mismatch for FCreateNonOverlappingConvexHullsDataflowNode::DebugDrawRenderSettings");
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, bRandomizeColor) == 316, "Offset mismatch for FCreateNonOverlappingConvexHullsDataflowNode::bRandomizeColor");
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, ColorRandomSeed) == 320, "Offset mismatch for FCreateNonOverlappingConvexHullsDataflowNode::ColorRandomSeed");

// /Script/GeometryCollectionNodes.CrossProductDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCrossProductDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t VectorA[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t VectorB[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReturnValue[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCrossProductDataflowNode, VectorA) == 224, "Offset mismatch for FCrossProductDataflowNode::VectorA");
static_assert(offsetof(FCrossProductDataflowNode, VectorB) == 248, "Offset mismatch for FCrossProductDataflowNode::VectorB");
static_assert(offsetof(FCrossProductDataflowNode, ReturnValue) == 272, "Offset mismatch for FCrossProductDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.CubeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FCubeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCubeDataflowNode, float_) == 224, "Offset mismatch for FCubeDataflowNode::float_");
static_assert(offsetof(FCubeDataflowNode, ReturnValue) == 228, "Offset mismatch for FCubeDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.DataflowConvertToArrayNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowConvertToArrayNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Array[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
    std::uint8_t Element[0x1]; // 0x00E1 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowConvertToArrayNode, Array) == 224, "Offset mismatch for FDataflowConvertToArrayNode::Array");
static_assert(offsetof(FDataflowConvertToArrayNode, Element) == 225, "Offset mismatch for FDataflowConvertToArrayNode::Element");

// /Script/GeometryCollectionNodes.DataflowConvexDecompositionSettings
// Kind: ScriptStruct; super: none
struct FDataflowConvexDecompositionSettings
{
public:
    float MinSizeToDecompose; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxGeoToHullVolumeRatioToDecompose; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ErrorTolerance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxHullsPerGeometry; // 0x000C (Size: 0x4, Type: IntProperty)
    float MinThicknessTolerance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumAdditionalSplits; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t bProtectNegativeSpace; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyConnectedToHull; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x001A
    float NegativeSpaceTolerance; // 0x001C (Size: 0x4, Type: FloatProperty)
    float NegativeSpaceMinRadius; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowConvexDecompositionSettings, MinSizeToDecompose) == 0, "Offset mismatch for FDataflowConvexDecompositionSettings::MinSizeToDecompose");
static_assert(offsetof(FDataflowConvexDecompositionSettings, MaxGeoToHullVolumeRatioToDecompose) == 4, "Offset mismatch for FDataflowConvexDecompositionSettings::MaxGeoToHullVolumeRatioToDecompose");
static_assert(offsetof(FDataflowConvexDecompositionSettings, ErrorTolerance) == 8, "Offset mismatch for FDataflowConvexDecompositionSettings::ErrorTolerance");
static_assert(offsetof(FDataflowConvexDecompositionSettings, MaxHullsPerGeometry) == 12, "Offset mismatch for FDataflowConvexDecompositionSettings::MaxHullsPerGeometry");
static_assert(offsetof(FDataflowConvexDecompositionSettings, MinThicknessTolerance) == 16, "Offset mismatch for FDataflowConvexDecompositionSettings::MinThicknessTolerance");
static_assert(offsetof(FDataflowConvexDecompositionSettings, NumAdditionalSplits) == 20, "Offset mismatch for FDataflowConvexDecompositionSettings::NumAdditionalSplits");
static_assert(offsetof(FDataflowConvexDecompositionSettings, bProtectNegativeSpace) == 24, "Offset mismatch for FDataflowConvexDecompositionSettings::bProtectNegativeSpace");
static_assert(offsetof(FDataflowConvexDecompositionSettings, bOnlyConnectedToHull) == 25, "Offset mismatch for FDataflowConvexDecompositionSettings::bOnlyConnectedToHull");
static_assert(offsetof(FDataflowConvexDecompositionSettings, NegativeSpaceTolerance) == 28, "Offset mismatch for FDataflowConvexDecompositionSettings::NegativeSpaceTolerance");
static_assert(offsetof(FDataflowConvexDecompositionSettings, NegativeSpaceMinRadius) == 32, "Offset mismatch for FDataflowConvexDecompositionSettings::NegativeSpaceMinRadius");

// /Script/GeometryCollectionNodes.DataflowGetArrayElementNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowGetArrayElementNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Array[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::int32_t Index; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Element[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowGetArrayElementNode, Array) == 224, "Offset mismatch for FDataflowGetArrayElementNode::Array");
static_assert(offsetof(FDataflowGetArrayElementNode, Index) == 228, "Offset mismatch for FDataflowGetArrayElementNode::Index");
static_assert(offsetof(FDataflowGetArrayElementNode, Element) == 232, "Offset mismatch for FDataflowGetArrayElementNode::Element");

// /Script/GeometryCollectionNodes.DataflowGetArraySizeNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowGetArraySizeNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Array[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::int32_t Size; // 0x00E4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDataflowGetArraySizeNode, Array) == 224, "Offset mismatch for FDataflowGetArraySizeNode::Array");
static_assert(offsetof(FDataflowGetArraySizeNode, Size) == 228, "Offset mismatch for FDataflowGetArraySizeNode::Size");

// /Script/GeometryCollectionNodes.DataflowMakeArrayNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMakeArrayNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Array[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    TArray<void*> Elements; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowMakeArrayNode, Array) == 224, "Offset mismatch for FDataflowMakeArrayNode::Array");
static_assert(offsetof(FDataflowMakeArrayNode, Elements) == 232, "Offset mismatch for FDataflowMakeArrayNode::Elements");

// /Script/GeometryCollectionNodes.DataflowMakeManagedArrayCollectionArrayNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMakeManagedArrayCollectionArrayNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Array; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Element[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMakeManagedArrayCollectionArrayNode, Array) == 224, "Offset mismatch for FDataflowMakeManagedArrayCollectionArrayNode::Array");
static_assert(offsetof(FDataflowMakeManagedArrayCollectionArrayNode, Element) == 240, "Offset mismatch for FDataflowMakeManagedArrayCollectionArrayNode::Element");

// /Script/GeometryCollectionNodes.DataflowMaterialFloatParameter
// Kind: ScriptStruct; super: none
struct FDataflowMaterialFloatParameter
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowMaterialFloatParameter, Name) == 0, "Offset mismatch for FDataflowMaterialFloatParameter::Name");
static_assert(offsetof(FDataflowMaterialFloatParameter, Value) == 4, "Offset mismatch for FDataflowMaterialFloatParameter::Value");

// /Script/GeometryCollectionNodes.DataflowMaterialParameters
// Kind: ScriptStruct; super: none
struct FDataflowMaterialParameters
{
public:
    TArray<void*> FloatParameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VectorParameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TextureParameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowMaterialParameters, FloatParameters) == 0, "Offset mismatch for FDataflowMaterialParameters::FloatParameters");
static_assert(offsetof(FDataflowMaterialParameters, VectorParameters) == 16, "Offset mismatch for FDataflowMaterialParameters::VectorParameters");
static_assert(offsetof(FDataflowMaterialParameters, TextureParameters) == 32, "Offset mismatch for FDataflowMaterialParameters::TextureParameters");

// /Script/GeometryCollectionNodes.DataflowMaterialTextureParameter
// Kind: ScriptStruct; super: none
struct FDataflowMaterialTextureParameter
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowMaterialTextureParameter, Name) == 0, "Offset mismatch for FDataflowMaterialTextureParameter::Name");
static_assert(offsetof(FDataflowMaterialTextureParameter, Value) == 8, "Offset mismatch for FDataflowMaterialTextureParameter::Value");

// /Script/GeometryCollectionNodes.DataflowMaterialVectorParameter
// Kind: ScriptStruct; super: none
struct FDataflowMaterialVectorParameter
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Value[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMaterialVectorParameter, Name) == 0, "Offset mismatch for FDataflowMaterialVectorParameter::Name");
static_assert(offsetof(FDataflowMaterialVectorParameter, Value) == 16, "Offset mismatch for FDataflowMaterialVectorParameter::Value");

// /Script/GeometryCollectionNodes.DataflowMeshAppendDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMeshAppendDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* AppendMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowMeshAppendDataflowNode, Mesh) == 224, "Offset mismatch for FDataflowMeshAppendDataflowNode::Mesh");
static_assert(offsetof(FDataflowMeshAppendDataflowNode, AppendMesh) == 232, "Offset mismatch for FDataflowMeshAppendDataflowNode::AppendMesh");

// /Script/GeometryCollectionNodes.DataflowRootProxyMesh
// Kind: ScriptStruct; super: none
struct FDataflowRootProxyMesh
{
public:
    void* Mesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    TArray<void*> OverrideMaterials; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowRootProxyMesh, Mesh) == 0, "Offset mismatch for FDataflowRootProxyMesh::Mesh");
static_assert(offsetof(FDataflowRootProxyMesh, Transform) == 16, "Offset mismatch for FDataflowRootProxyMesh::Transform");
static_assert(offsetof(FDataflowRootProxyMesh, OverrideMaterials) == 112, "Offset mismatch for FDataflowRootProxyMesh::OverrideMaterials");

// /Script/GeometryCollectionNodes.DataflowSphereCovering
// Kind: ScriptStruct; super: none
struct FDataflowSphereCovering
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCollectionNodes.DegreesToRadiansDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FDegreesToRadiansDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Degrees; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Radians; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDegreesToRadiansDataflowNode, Degrees) == 224, "Offset mismatch for FDegreesToRadiansDataflowNode::Degrees");
static_assert(offsetof(FDegreesToRadiansDataflowNode, Radians) == 228, "Offset mismatch for FDegreesToRadiansDataflowNode::Radians");

// /Script/GeometryCollectionNodes.DistanceDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FDistanceDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t PointA[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PointB[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    float ReturnValue; // 0x0110 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDistanceDataflowNode, PointA) == 224, "Offset mismatch for FDistanceDataflowNode::PointA");
static_assert(offsetof(FDistanceDataflowNode, PointB) == 248, "Offset mismatch for FDistanceDataflowNode::PointB");
static_assert(offsetof(FDistanceDataflowNode, ReturnValue) == 272, "Offset mismatch for FDistanceDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.DivideDataflowNode
// Kind: ScriptStruct; super: SafeDivideDataflowNode
struct FDivideDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float FloatA; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDivideDataflowNode, FloatA) == 224, "Offset mismatch for FDivideDataflowNode::FloatA");
static_assert(offsetof(FDivideDataflowNode, FloatB) == 228, "Offset mismatch for FDivideDataflowNode::FloatB");
static_assert(offsetof(FDivideDataflowNode, ReturnValue) == 232, "Offset mismatch for FDivideDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.DivisionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FDivisionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Dividend; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Divisor; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float Remainder; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t ReturnValue; // 0x00EC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDivisionDataflowNode, Dividend) == 224, "Offset mismatch for FDivisionDataflowNode::Dividend");
static_assert(offsetof(FDivisionDataflowNode, Divisor) == 228, "Offset mismatch for FDivisionDataflowNode::Divisor");
static_assert(offsetof(FDivisionDataflowNode, Remainder) == 232, "Offset mismatch for FDivisionDataflowNode::Remainder");
static_assert(offsetof(FDivisionDataflowNode, ReturnValue) == 236, "Offset mismatch for FDivisionDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.DotProductDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FDotProductDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t VectorA[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t VectorB[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    float ReturnValue; // 0x0110 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDotProductDataflowNode, VectorA) == 224, "Offset mismatch for FDotProductDataflowNode::VectorA");
static_assert(offsetof(FDotProductDataflowNode, VectorB) == 248, "Offset mismatch for FDotProductDataflowNode::VectorB");
static_assert(offsetof(FDotProductDataflowNode, ReturnValue) == 272, "Offset mismatch for FDotProductDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.DuplicateMeshUVChannelNode
// Kind: ScriptStruct; super: DataflowNode
struct FDuplicateMeshUVChannelNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SourceUVChannel; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t NewUVChannel; // 0x00EC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDuplicateMeshUVChannelNode, Mesh) == 224, "Offset mismatch for FDuplicateMeshUVChannelNode::Mesh");
static_assert(offsetof(FDuplicateMeshUVChannelNode, SourceUVChannel) == 232, "Offset mismatch for FDuplicateMeshUVChannelNode::SourceUVChannel");
static_assert(offsetof(FDuplicateMeshUVChannelNode, NewUVChannel) == 236, "Offset mismatch for FDuplicateMeshUVChannelNode::NewUVChannel");

// /Script/GeometryCollectionNodes.EFitDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FEFitDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float OldMin; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float OldMax; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float NewMin; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float NewMax; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00F4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEFitDataflowNode, float_) == 224, "Offset mismatch for FEFitDataflowNode::float_");
static_assert(offsetof(FEFitDataflowNode, OldMin) == 228, "Offset mismatch for FEFitDataflowNode::OldMin");
static_assert(offsetof(FEFitDataflowNode, OldMax) == 232, "Offset mismatch for FEFitDataflowNode::OldMax");
static_assert(offsetof(FEFitDataflowNode, NewMin) == 236, "Offset mismatch for FEFitDataflowNode::NewMin");
static_assert(offsetof(FEFitDataflowNode, NewMax) == 240, "Offset mismatch for FEFitDataflowNode::NewMax");
static_assert(offsetof(FEFitDataflowNode, ReturnValue) == 244, "Offset mismatch for FEFitDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.ExpDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FExpDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FExpDataflowNode, float_) == 224, "Offset mismatch for FExpDataflowNode::float_");
static_assert(offsetof(FExpDataflowNode, ReturnValue) == 228, "Offset mismatch for FExpDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FExpandBoundingBoxDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t BoundingBox[0x38]; // 0x00E0 (Size: 0x38, Type: StructProperty)
    std::uint8_t min[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t max[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t HalfExtents[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t Dimensions[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    float Volume; // 0x0190 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FExpandBoundingBoxDataflowNode, BoundingBox) == 224, "Offset mismatch for FExpandBoundingBoxDataflowNode::BoundingBox");
static_assert(offsetof(FExpandBoundingBoxDataflowNode, min) == 280, "Offset mismatch for FExpandBoundingBoxDataflowNode::min");
static_assert(offsetof(FExpandBoundingBoxDataflowNode, max) == 304, "Offset mismatch for FExpandBoundingBoxDataflowNode::max");
static_assert(offsetof(FExpandBoundingBoxDataflowNode, Center) == 328, "Offset mismatch for FExpandBoundingBoxDataflowNode::Center");
static_assert(offsetof(FExpandBoundingBoxDataflowNode, HalfExtents) == 352, "Offset mismatch for FExpandBoundingBoxDataflowNode::HalfExtents");
static_assert(offsetof(FExpandBoundingBoxDataflowNode, Dimensions) == 376, "Offset mismatch for FExpandBoundingBoxDataflowNode::Dimensions");
static_assert(offsetof(FExpandBoundingBoxDataflowNode, Volume) == 400, "Offset mismatch for FExpandBoundingBoxDataflowNode::Volume");

// /Script/GeometryCollectionNodes.ExpandBoundingSphereDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FExpandBoundingSphereDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t BoundingSphere[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float Volume; // 0x011C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FExpandBoundingSphereDataflowNode, BoundingSphere) == 224, "Offset mismatch for FExpandBoundingSphereDataflowNode::BoundingSphere");
static_assert(offsetof(FExpandBoundingSphereDataflowNode, Center) == 256, "Offset mismatch for FExpandBoundingSphereDataflowNode::Center");
static_assert(offsetof(FExpandBoundingSphereDataflowNode, Radius) == 280, "Offset mismatch for FExpandBoundingSphereDataflowNode::Radius");
static_assert(offsetof(FExpandBoundingSphereDataflowNode, Volume) == 284, "Offset mismatch for FExpandBoundingSphereDataflowNode::Volume");

// /Script/GeometryCollectionNodes.ExpandVectorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FExpandVectorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Vector[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    float X; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float Z; // 0x0100 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FExpandVectorDataflowNode, Vector) == 224, "Offset mismatch for FExpandVectorDataflowNode::Vector");
static_assert(offsetof(FExpandVectorDataflowNode, X) == 248, "Offset mismatch for FExpandVectorDataflowNode::X");
static_assert(offsetof(FExpandVectorDataflowNode, Y) == 252, "Offset mismatch for FExpandVectorDataflowNode::Y");
static_assert(offsetof(FExpandVectorDataflowNode, Z) == 256, "Offset mismatch for FExpandVectorDataflowNode::Z");

// /Script/GeometryCollectionNodes.ExplodedViewDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FExplodedViewDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    float UniformScale; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0114
    std::uint8_t Scale[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t Offset[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FExplodedViewDataflowNode, Collection) == 224, "Offset mismatch for FExplodedViewDataflowNode::Collection");
static_assert(offsetof(FExplodedViewDataflowNode, UniformScale) == 272, "Offset mismatch for FExplodedViewDataflowNode::UniformScale");
static_assert(offsetof(FExplodedViewDataflowNode, Scale) == 280, "Offset mismatch for FExplodedViewDataflowNode::Scale");
static_assert(offsetof(FExplodedViewDataflowNode, Offset) == 304, "Offset mismatch for FExplodedViewDataflowNode::Offset");

// /Script/GeometryCollectionNodes.FieldMakeDenseFloatArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFieldMakeDenseFloatArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> FieldFloatInput; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePositions; // 0x0100 (Size: 0x4, Type: IntProperty)
    float Default; // 0x0104 (Size: 0x4, Type: FloatProperty)
    TArray<void*> FieldFloatResult; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFieldMakeDenseFloatArrayDataflowNode, FieldFloatInput) == 224, "Offset mismatch for FFieldMakeDenseFloatArrayDataflowNode::FieldFloatInput");
static_assert(offsetof(FFieldMakeDenseFloatArrayDataflowNode, FieldRemap) == 240, "Offset mismatch for FFieldMakeDenseFloatArrayDataflowNode::FieldRemap");
static_assert(offsetof(FFieldMakeDenseFloatArrayDataflowNode, NumSamplePositions) == 256, "Offset mismatch for FFieldMakeDenseFloatArrayDataflowNode::NumSamplePositions");
static_assert(offsetof(FFieldMakeDenseFloatArrayDataflowNode, Default) == 260, "Offset mismatch for FFieldMakeDenseFloatArrayDataflowNode::Default");
static_assert(offsetof(FFieldMakeDenseFloatArrayDataflowNode, FieldFloatResult) == 264, "Offset mismatch for FFieldMakeDenseFloatArrayDataflowNode::FieldFloatResult");

// /Script/GeometryCollectionNodes.FilterPointSetWithMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFilterPointSetWithMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FilterMethod; // 0x00E8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bKeepInside; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00EA
    float WindingThreshold; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float MinDistance; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSignedDistance; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00F9
    TArray<void*> SamplePoints; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFilterPointSetWithMeshDataflowNode, TargetMesh) == 224, "Offset mismatch for FFilterPointSetWithMeshDataflowNode::TargetMesh");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode, FilterMethod) == 232, "Offset mismatch for FFilterPointSetWithMeshDataflowNode::FilterMethod");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode, bKeepInside) == 233, "Offset mismatch for FFilterPointSetWithMeshDataflowNode::bKeepInside");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode, WindingThreshold) == 236, "Offset mismatch for FFilterPointSetWithMeshDataflowNode::WindingThreshold");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode, MinDistance) == 240, "Offset mismatch for FFilterPointSetWithMeshDataflowNode::MinDistance");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode, MaxDistance) == 244, "Offset mismatch for FFilterPointSetWithMeshDataflowNode::MaxDistance");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode, bUseSignedDistance) == 248, "Offset mismatch for FFilterPointSetWithMeshDataflowNode::bUseSignedDistance");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode, SamplePoints) == 256, "Offset mismatch for FFilterPointSetWithMeshDataflowNode::SamplePoints");

// /Script/GeometryCollectionNodes.FilterPointSetWithMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FFilterPointSetWithMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FilterMethod; // 0x00E8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bKeepInside; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00EA
    float WindingThreshold; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float MinDistance; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSignedDistance; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00F9
    std::uint8_t SamplePoints[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFilterPointSetWithMeshDataflowNode_v2, TargetMesh) == 224, "Offset mismatch for FFilterPointSetWithMeshDataflowNode_v2::TargetMesh");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode_v2, FilterMethod) == 232, "Offset mismatch for FFilterPointSetWithMeshDataflowNode_v2::FilterMethod");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode_v2, bKeepInside) == 233, "Offset mismatch for FFilterPointSetWithMeshDataflowNode_v2::bKeepInside");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode_v2, WindingThreshold) == 236, "Offset mismatch for FFilterPointSetWithMeshDataflowNode_v2::WindingThreshold");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode_v2, MinDistance) == 240, "Offset mismatch for FFilterPointSetWithMeshDataflowNode_v2::MinDistance");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode_v2, MaxDistance) == 244, "Offset mismatch for FFilterPointSetWithMeshDataflowNode_v2::MaxDistance");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode_v2, bUseSignedDistance) == 248, "Offset mismatch for FFilterPointSetWithMeshDataflowNode_v2::bUseSignedDistance");
static_assert(offsetof(FFilterPointSetWithMeshDataflowNode_v2, SamplePoints) == 256, "Offset mismatch for FFilterPointSetWithMeshDataflowNode_v2::SamplePoints");

// /Script/GeometryCollectionNodes.FindMeshSymmetryPlaneDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFindMeshSymmetryPlaneDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SymmetryPlane[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bFoundSymmetry; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0119
    float Confidence; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSignificantPoints; // 0x0120 (Size: 0x4, Type: IntProperty)
    float CurvatureRatioMin; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float MirrorMatchDistanceRel; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AxisMode; // 0x012C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRefinePlane; // 0x012D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x012E
    float MinConfidence; // 0x0130 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, Mesh) == 224, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::Mesh");
static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, SymmetryPlane) == 232, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::SymmetryPlane");
static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, bFoundSymmetry) == 280, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::bFoundSymmetry");
static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, Confidence) == 284, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::Confidence");
static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, NumSignificantPoints) == 288, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::NumSignificantPoints");
static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, CurvatureRatioMin) == 292, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::CurvatureRatioMin");
static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, MirrorMatchDistanceRel) == 296, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::MirrorMatchDistanceRel");
static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, AxisMode) == 300, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::AxisMode");
static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, bRefinePlane) == 301, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::bRefinePlane");
static_assert(offsetof(FFindMeshSymmetryPlaneDataflowNode, MinConfidence) == 304, "Offset mismatch for FFindMeshSymmetryPlaneDataflowNode::MinConfidence");

// /Script/GeometryCollectionNodes.FitDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFitDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float OldMin; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float OldMax; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float NewMin; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float NewMax; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00F4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFitDataflowNode, float_) == 224, "Offset mismatch for FFitDataflowNode::float_");
static_assert(offsetof(FFitDataflowNode, OldMin) == 228, "Offset mismatch for FFitDataflowNode::OldMin");
static_assert(offsetof(FFitDataflowNode, OldMax) == 232, "Offset mismatch for FFitDataflowNode::OldMax");
static_assert(offsetof(FFitDataflowNode, NewMin) == 236, "Offset mismatch for FFitDataflowNode::NewMin");
static_assert(offsetof(FFitDataflowNode, NewMax) == 240, "Offset mismatch for FFitDataflowNode::NewMax");
static_assert(offsetof(FFitDataflowNode, ReturnValue) == 244, "Offset mismatch for FFitDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.FixTinyGeoDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFixTinyGeoDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t MergeType; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnFractureLevel; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyClusters; // 0x013A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlySameParent; // 0x013B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGeometryOnlySameParent; // 0x013C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFractureLevelIsAll; // 0x013D (Size: 0x1, Type: BoolProperty)
    std::uint8_t NeighborSelection; // 0x013E (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyToConnected; // 0x013F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCollectionProximityForConnections; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UseBoneSelection; // 0x0141 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SelectionMethod; // 0x0142 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0143
    float MinVolumeCubeRoot; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float RelativeVolume; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AddSamplesForCollision; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x014D
    float CollisionSampleSpacing; // 0x0150 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFixTinyGeoDataflowNode, Collection) == 224, "Offset mismatch for FFixTinyGeoDataflowNode::Collection");
static_assert(offsetof(FFixTinyGeoDataflowNode, TransformSelection) == 272, "Offset mismatch for FFixTinyGeoDataflowNode::TransformSelection");
static_assert(offsetof(FFixTinyGeoDataflowNode, MergeType) == 312, "Offset mismatch for FFixTinyGeoDataflowNode::MergeType");
static_assert(offsetof(FFixTinyGeoDataflowNode, bOnFractureLevel) == 313, "Offset mismatch for FFixTinyGeoDataflowNode::bOnFractureLevel");
static_assert(offsetof(FFixTinyGeoDataflowNode, bOnlyClusters) == 314, "Offset mismatch for FFixTinyGeoDataflowNode::bOnlyClusters");
static_assert(offsetof(FFixTinyGeoDataflowNode, bOnlySameParent) == 315, "Offset mismatch for FFixTinyGeoDataflowNode::bOnlySameParent");
static_assert(offsetof(FFixTinyGeoDataflowNode, bGeometryOnlySameParent) == 316, "Offset mismatch for FFixTinyGeoDataflowNode::bGeometryOnlySameParent");
static_assert(offsetof(FFixTinyGeoDataflowNode, bFractureLevelIsAll) == 317, "Offset mismatch for FFixTinyGeoDataflowNode::bFractureLevelIsAll");
static_assert(offsetof(FFixTinyGeoDataflowNode, NeighborSelection) == 318, "Offset mismatch for FFixTinyGeoDataflowNode::NeighborSelection");
static_assert(offsetof(FFixTinyGeoDataflowNode, bOnlyToConnected) == 319, "Offset mismatch for FFixTinyGeoDataflowNode::bOnlyToConnected");
static_assert(offsetof(FFixTinyGeoDataflowNode, bUseCollectionProximityForConnections) == 320, "Offset mismatch for FFixTinyGeoDataflowNode::bUseCollectionProximityForConnections");
static_assert(offsetof(FFixTinyGeoDataflowNode, UseBoneSelection) == 321, "Offset mismatch for FFixTinyGeoDataflowNode::UseBoneSelection");
static_assert(offsetof(FFixTinyGeoDataflowNode, SelectionMethod) == 322, "Offset mismatch for FFixTinyGeoDataflowNode::SelectionMethod");
static_assert(offsetof(FFixTinyGeoDataflowNode, MinVolumeCubeRoot) == 324, "Offset mismatch for FFixTinyGeoDataflowNode::MinVolumeCubeRoot");
static_assert(offsetof(FFixTinyGeoDataflowNode, RelativeVolume) == 328, "Offset mismatch for FFixTinyGeoDataflowNode::RelativeVolume");
static_assert(offsetof(FFixTinyGeoDataflowNode, AddSamplesForCollision) == 332, "Offset mismatch for FFixTinyGeoDataflowNode::AddSamplesForCollision");
static_assert(offsetof(FFixTinyGeoDataflowNode, CollisionSampleSpacing) == 336, "Offset mismatch for FFixTinyGeoDataflowNode::CollisionSampleSpacing");

// /Script/GeometryCollectionNodes.FloatArrayComputeStatisticsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloatArrayComputeStatisticsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> FloatArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TransformSelection[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t OperationName; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0119
    float Value; // 0x011C (Size: 0x4, Type: FloatProperty)
    TArray<void*> Indices; // 0x0120 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFloatArrayComputeStatisticsDataflowNode, FloatArray) == 224, "Offset mismatch for FFloatArrayComputeStatisticsDataflowNode::FloatArray");
static_assert(offsetof(FFloatArrayComputeStatisticsDataflowNode, TransformSelection) == 240, "Offset mismatch for FFloatArrayComputeStatisticsDataflowNode::TransformSelection");
static_assert(offsetof(FFloatArrayComputeStatisticsDataflowNode, OperationName) == 280, "Offset mismatch for FFloatArrayComputeStatisticsDataflowNode::OperationName");
static_assert(offsetof(FFloatArrayComputeStatisticsDataflowNode, Value) == 284, "Offset mismatch for FFloatArrayComputeStatisticsDataflowNode::Value");
static_assert(offsetof(FFloatArrayComputeStatisticsDataflowNode, Indices) == 288, "Offset mismatch for FFloatArrayComputeStatisticsDataflowNode::Indices");

// /Script/GeometryCollectionNodes.FloatArrayNormalizeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloatArrayNormalizeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> InFloatArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Selection[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    float MinRange; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x011C (Size: 0x4, Type: FloatProperty)
    TArray<void*> OutFloatArray; // 0x0120 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFloatArrayNormalizeDataflowNode, InFloatArray) == 224, "Offset mismatch for FFloatArrayNormalizeDataflowNode::InFloatArray");
static_assert(offsetof(FFloatArrayNormalizeDataflowNode, Selection) == 240, "Offset mismatch for FFloatArrayNormalizeDataflowNode::Selection");
static_assert(offsetof(FFloatArrayNormalizeDataflowNode, MinRange) == 280, "Offset mismatch for FFloatArrayNormalizeDataflowNode::MinRange");
static_assert(offsetof(FFloatArrayNormalizeDataflowNode, MaxRange) == 284, "Offset mismatch for FFloatArrayNormalizeDataflowNode::MaxRange");
static_assert(offsetof(FFloatArrayNormalizeDataflowNode, OutFloatArray) == 288, "Offset mismatch for FFloatArrayNormalizeDataflowNode::OutFloatArray");

// /Script/GeometryCollectionNodes.FloatArrayToIntArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloatArrayToIntArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Function; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    TArray<void*> FloatArray; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IntArray; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFloatArrayToIntArrayDataflowNode, Function) == 224, "Offset mismatch for FFloatArrayToIntArrayDataflowNode::Function");
static_assert(offsetof(FFloatArrayToIntArrayDataflowNode, FloatArray) == 232, "Offset mismatch for FFloatArrayToIntArrayDataflowNode::FloatArray");
static_assert(offsetof(FFloatArrayToIntArrayDataflowNode, IntArray) == 248, "Offset mismatch for FFloatArrayToIntArrayDataflowNode::IntArray");

// /Script/GeometryCollectionNodes.FloatArrayToVertexSelectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloatArrayToVertexSelectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> FloatArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Operation; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F1
    float Threshold; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VertexSelection[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFloatArrayToVertexSelectionDataflowNode, FloatArray) == 224, "Offset mismatch for FFloatArrayToVertexSelectionDataflowNode::FloatArray");
static_assert(offsetof(FFloatArrayToVertexSelectionDataflowNode, Operation) == 240, "Offset mismatch for FFloatArrayToVertexSelectionDataflowNode::Operation");
static_assert(offsetof(FFloatArrayToVertexSelectionDataflowNode, Threshold) == 244, "Offset mismatch for FFloatArrayToVertexSelectionDataflowNode::Threshold");
static_assert(offsetof(FFloatArrayToVertexSelectionDataflowNode, VertexSelection) == 248, "Offset mismatch for FFloatArrayToVertexSelectionDataflowNode::VertexSelection");

// /Script/GeometryCollectionNodes.FloatMathExpressionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloatMathExpressionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float A; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float B; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float C; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float D; // 0x00EC (Size: 0x4, Type: FloatProperty)
    FString Expression; // 0x00F0 (Size: 0x10, Type: StrProperty)
    float ReturnValue; // 0x0100 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFloatMathExpressionDataflowNode, A) == 224, "Offset mismatch for FFloatMathExpressionDataflowNode::A");
static_assert(offsetof(FFloatMathExpressionDataflowNode, B) == 228, "Offset mismatch for FFloatMathExpressionDataflowNode::B");
static_assert(offsetof(FFloatMathExpressionDataflowNode, C) == 232, "Offset mismatch for FFloatMathExpressionDataflowNode::C");
static_assert(offsetof(FFloatMathExpressionDataflowNode, D) == 236, "Offset mismatch for FFloatMathExpressionDataflowNode::D");
static_assert(offsetof(FFloatMathExpressionDataflowNode, Expression) == 240, "Offset mismatch for FFloatMathExpressionDataflowNode::Expression");
static_assert(offsetof(FFloatMathExpressionDataflowNode, ReturnValue) == 256, "Offset mismatch for FFloatMathExpressionDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.FloatToDoubleDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloatToDoubleDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    double Double; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFloatToDoubleDataflowNode, float_) == 224, "Offset mismatch for FFloatToDoubleDataflowNode::float_");
static_assert(offsetof(FFloatToDoubleDataflowNode, Double) == 232, "Offset mismatch for FFloatToDoubleDataflowNode::Double");

// /Script/GeometryCollectionNodes.FloatToIntDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloatToIntDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Function; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float float_; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::int32_t Int; // 0x00E8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFloatToIntDataflowNode, Function) == 224, "Offset mismatch for FFloatToIntDataflowNode::Function");
static_assert(offsetof(FFloatToIntDataflowNode, float_) == 228, "Offset mismatch for FFloatToIntDataflowNode::float_");
static_assert(offsetof(FFloatToIntDataflowNode, Int) == 232, "Offset mismatch for FFloatToIntDataflowNode::Int");

// /Script/GeometryCollectionNodes.FloatToStringDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloatToStringDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    FString String; // 0x00E8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFloatToStringDataflowNode, float_) == 224, "Offset mismatch for FFloatToStringDataflowNode::float_");
static_assert(offsetof(FFloatToStringDataflowNode, String) == 232, "Offset mismatch for FFloatToStringDataflowNode::String");

// /Script/GeometryCollectionNodes.FloorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFloorDataflowNode, float_) == 224, "Offset mismatch for FFloorDataflowNode::float_");
static_assert(offsetof(FFloorDataflowNode, ReturnValue) == 228, "Offset mismatch for FFloorDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.FracDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFracDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFracDataflowNode, float_) == 224, "Offset mismatch for FFracDataflowNode::float_");
static_assert(offsetof(FFracDataflowNode, ReturnValue) == 228, "Offset mismatch for FFracDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.GenerateClusterConvexHullsFromChildrenHullsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SphereCovering[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::int32_t ConvexCount; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0134
    double ErrorTolerance; // 0x0138 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bPreferExternalCollisionShapes; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0141
    std::uint8_t OptionalSelectionFilter[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t MergeProximityFilter; // 0x0170 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0171
    float MergeProximityDistanceThreshold; // 0x0174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowMergingLeafHulls; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0179
    std::uint8_t RequireNegativeSpaceCovering[0x20]; // 0x0180 (Size: 0x20, Type: StructProperty)
    std::uint8_t bProtectNegativeSpace; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SampleMethod; // 0x01A1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRequireSearchSampleCoverage; // 0x01A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyConnectedToHull; // 0x01A3 (Size: 0x1, Type: BoolProperty)
    std::int32_t TargetNumSamples; // 0x01A4 (Size: 0x4, Type: IntProperty)
    double MinSampleSpacing; // 0x01A8 (Size: 0x8, Type: DoubleProperty)
    double NegativeSpaceTolerance; // 0x01B0 (Size: 0x8, Type: DoubleProperty)
    double MinRadius; // 0x01B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DebugDrawRenderSettings[0x18]; // 0x01C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRandomizeColor; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x01D9
    std::int32_t ColorRandomSeed; // 0x01DC (Size: 0x4, Type: IntProperty)
    std::uint8_t SphereCoveringDebugDrawRenderSettings[0x1]; // 0x01E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, Collection) == 224, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::Collection");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, SphereCovering) == 272, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::SphereCovering");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, ConvexCount) == 304, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::ConvexCount");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, ErrorTolerance) == 312, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::ErrorTolerance");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, bPreferExternalCollisionShapes) == 320, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::bPreferExternalCollisionShapes");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, OptionalSelectionFilter) == 328, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::OptionalSelectionFilter");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, MergeProximityFilter) == 368, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::MergeProximityFilter");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, MergeProximityDistanceThreshold) == 372, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::MergeProximityDistanceThreshold");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, bAllowMergingLeafHulls) == 376, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::bAllowMergingLeafHulls");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, RequireNegativeSpaceCovering) == 384, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::RequireNegativeSpaceCovering");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, bProtectNegativeSpace) == 416, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::bProtectNegativeSpace");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, SampleMethod) == 417, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::SampleMethod");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, bRequireSearchSampleCoverage) == 418, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::bRequireSearchSampleCoverage");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, bOnlyConnectedToHull) == 419, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::bOnlyConnectedToHull");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, TargetNumSamples) == 420, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::TargetNumSamples");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, MinSampleSpacing) == 424, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::MinSampleSpacing");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, NegativeSpaceTolerance) == 432, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::NegativeSpaceTolerance");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, MinRadius) == 440, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::MinRadius");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, DebugDrawRenderSettings) == 448, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::DebugDrawRenderSettings");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, bRandomizeColor) == 472, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::bRandomizeColor");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, ColorRandomSeed) == 476, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::ColorRandomSeed");
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, SphereCoveringDebugDrawRenderSettings) == 480, "Offset mismatch for FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::SphereCoveringDebugDrawRenderSettings");

// /Script/GeometryCollectionNodes.GenerateClusterConvexHullsFromLeafHullsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGenerateClusterConvexHullsFromLeafHullsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SphereCovering[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::int32_t ConvexCount; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0134
    double ErrorTolerance; // 0x0138 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bPreferExternalCollisionShapes; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowMerges; // 0x0141 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MergeProximityFilter; // 0x0142 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0143
    float MergeProximityDistanceThreshold; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OptionalSelectionFilter[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllowMergingLeafHulls; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0171
    std::uint8_t RequireNegativeSpaceCovering[0x20]; // 0x0178 (Size: 0x20, Type: StructProperty)
    std::uint8_t bProtectNegativeSpace; // 0x0198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SampleMethod; // 0x0199 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRequireSearchSampleCoverage; // 0x019A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyConnectedToHull; // 0x019B (Size: 0x1, Type: BoolProperty)
    std::int32_t TargetNumSamples; // 0x019C (Size: 0x4, Type: IntProperty)
    double MinSampleSpacing; // 0x01A0 (Size: 0x8, Type: DoubleProperty)
    double NegativeSpaceTolerance; // 0x01A8 (Size: 0x8, Type: DoubleProperty)
    double MinRadius; // 0x01B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DebugDrawRenderSettings[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRandomizeColor; // 0x01D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x01D1
    std::int32_t ColorRandomSeed; // 0x01D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t SphereCoveringDebugDrawRenderSettings[0x1]; // 0x01D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, Collection) == 224, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::Collection");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, SphereCovering) == 272, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::SphereCovering");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, ConvexCount) == 304, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::ConvexCount");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, ErrorTolerance) == 312, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::ErrorTolerance");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, bPreferExternalCollisionShapes) == 320, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::bPreferExternalCollisionShapes");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, AllowMerges) == 321, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::AllowMerges");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, MergeProximityFilter) == 322, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::MergeProximityFilter");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, MergeProximityDistanceThreshold) == 324, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::MergeProximityDistanceThreshold");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, OptionalSelectionFilter) == 328, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::OptionalSelectionFilter");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, bAllowMergingLeafHulls) == 368, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::bAllowMergingLeafHulls");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, RequireNegativeSpaceCovering) == 376, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::RequireNegativeSpaceCovering");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, bProtectNegativeSpace) == 408, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::bProtectNegativeSpace");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, SampleMethod) == 409, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::SampleMethod");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, bRequireSearchSampleCoverage) == 410, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::bRequireSearchSampleCoverage");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, bOnlyConnectedToHull) == 411, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::bOnlyConnectedToHull");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, TargetNumSamples) == 412, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::TargetNumSamples");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, MinSampleSpacing) == 416, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::MinSampleSpacing");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, NegativeSpaceTolerance) == 424, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::NegativeSpaceTolerance");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, MinRadius) == 432, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::MinRadius");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, DebugDrawRenderSettings) == 440, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::DebugDrawRenderSettings");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, bRandomizeColor) == 464, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::bRandomizeColor");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, ColorRandomSeed) == 468, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::ColorRandomSeed");
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, SphereCoveringDebugDrawRenderSettings) == 472, "Offset mismatch for FGenerateClusterConvexHullsFromLeafHullsDataflowNode::SphereCoveringDebugDrawRenderSettings");

// /Script/GeometryCollectionNodes.GeometryCollectionSetKinematicVertexSelectionNode
// Kind: ScriptStruct; super: DataflowNode
struct FGeometryCollectionSetKinematicVertexSelectionNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t VertexSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t KinematicValue; // 0x0138 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryCollectionSetKinematicVertexSelectionNode, Collection) == 224, "Offset mismatch for FGeometryCollectionSetKinematicVertexSelectionNode::Collection");
static_assert(offsetof(FGeometryCollectionSetKinematicVertexSelectionNode, VertexSelection) == 272, "Offset mismatch for FGeometryCollectionSetKinematicVertexSelectionNode::VertexSelection");
static_assert(offsetof(FGeometryCollectionSetKinematicVertexSelectionNode, KinematicValue) == 312, "Offset mismatch for FGeometryCollectionSetKinematicVertexSelectionNode::KinematicValue");

// /Script/GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FGeometryCollectionTerminalDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialInstances; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryCollectionTerminalDataflowNode, Collection) == 224, "Offset mismatch for FGeometryCollectionTerminalDataflowNode::Collection");
static_assert(offsetof(FGeometryCollectionTerminalDataflowNode, Materials) == 272, "Offset mismatch for FGeometryCollectionTerminalDataflowNode::Materials");
static_assert(offsetof(FGeometryCollectionTerminalDataflowNode, MaterialInstances) == 288, "Offset mismatch for FGeometryCollectionTerminalDataflowNode::MaterialInstances");
static_assert(offsetof(FGeometryCollectionTerminalDataflowNode, InstancedMeshes) == 304, "Offset mismatch for FGeometryCollectionTerminalDataflowNode::InstancedMeshes");

// /Script/GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode_v2
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FGeometryCollectionTerminalDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RootProxyMeshes; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryCollectionTerminalDataflowNode_v2, Collection) == 224, "Offset mismatch for FGeometryCollectionTerminalDataflowNode_v2::Collection");
static_assert(offsetof(FGeometryCollectionTerminalDataflowNode_v2, Materials) == 272, "Offset mismatch for FGeometryCollectionTerminalDataflowNode_v2::Materials");
static_assert(offsetof(FGeometryCollectionTerminalDataflowNode_v2, InstancedMeshes) == 288, "Offset mismatch for FGeometryCollectionTerminalDataflowNode_v2::InstancedMeshes");
static_assert(offsetof(FGeometryCollectionTerminalDataflowNode_v2, RootProxyMeshes) == 304, "Offset mismatch for FGeometryCollectionTerminalDataflowNode_v2::RootProxyMeshes");

// /Script/GeometryCollectionNodes.GeometryCollectionToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGeometryCollectionToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* GeometryCollection; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Collection[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialInstances; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode, GeometryCollection) == 224, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode::GeometryCollection");
static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode, Collection) == 232, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode::Collection");
static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode, Materials) == 280, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode::Materials");
static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode, MaterialInstances) == 296, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode::MaterialInstances");
static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode, InstancedMeshes) == 312, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode::InstancedMeshes");

// /Script/GeometryCollectionNodes.GeometryCollectionToCollectionDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FGeometryCollectionToCollectionDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* GeometryCollection; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Collection[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RootProxyMeshes; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode_v2, GeometryCollection) == 224, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode_v2::GeometryCollection");
static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode_v2, Collection) == 232, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode_v2::Collection");
static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode_v2, Materials) == 280, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode_v2::Materials");
static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode_v2, InstancedMeshes) == 296, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode_v2::InstancedMeshes");
static_assert(offsetof(FGeometryCollectionToCollectionDataflowNode_v2, RootProxyMeshes) == 312, "Offset mismatch for FGeometryCollectionToCollectionDataflowNode_v2::RootProxyMeshes");

// /Script/GeometryCollectionNodes.GeometryCollectionTransferVertexAttributeNode
// Kind: ScriptStruct; super: DataflowNode
struct FGeometryCollectionTransferVertexAttributeNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FromCollection[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t AttributeKey[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    std::uint8_t TransferMethod; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BoundingVolumeType; // 0x0161 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SourceScale; // 0x0162 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Falloff; // 0x0163 (Size: 0x1, Type: EnumProperty)
    float FalloffThreshold; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float EdgeMultiplier; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float BoundMultiplier; // 0x016C (Size: 0x4, Type: FloatProperty)
    FString TransformNameSuffix; // 0x0170 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, Collection) == 224, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::Collection");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, FromCollection) == 272, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::FromCollection");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, AttributeKey) == 320, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::AttributeKey");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, TransferMethod) == 352, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::TransferMethod");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, BoundingVolumeType) == 353, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::BoundingVolumeType");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, SourceScale) == 354, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::SourceScale");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, Falloff) == 355, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::Falloff");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, FalloffThreshold) == 356, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::FalloffThreshold");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, EdgeMultiplier) == 360, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::EdgeMultiplier");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, BoundMultiplier) == 364, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::BoundMultiplier");
static_assert(offsetof(FGeometryCollectionTransferVertexAttributeNode, TransformNameSuffix) == 368, "Offset mismatch for FGeometryCollectionTransferVertexAttributeNode::TransformNameSuffix");

// /Script/GeometryCollectionNodes.GeometryCollectionTransferVertexSkinWeightsNode
// Kind: ScriptStruct; super: DataflowNode
struct FGeometryCollectionTransferVertexSkinWeightsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FromCollection[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransferMethod; // 0x0140 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BoundingVolumeType; // 0x0141 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SourceScale; // 0x0142 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Falloff; // 0x0143 (Size: 0x1, Type: EnumProperty)
    float FalloffThreshold; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float EdgeMultiplier; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float BoundMultiplier; // 0x014C (Size: 0x4, Type: FloatProperty)
    FString TransformNameSuffix; // 0x0150 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, Collection) == 224, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::Collection");
static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, FromCollection) == 272, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::FromCollection");
static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, TransferMethod) == 320, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::TransferMethod");
static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, BoundingVolumeType) == 321, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::BoundingVolumeType");
static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, SourceScale) == 322, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::SourceScale");
static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, Falloff) == 323, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::Falloff");
static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, FalloffThreshold) == 324, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::FalloffThreshold");
static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, EdgeMultiplier) == 328, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::EdgeMultiplier");
static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, BoundMultiplier) == 332, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::BoundMultiplier");
static_assert(offsetof(FGeometryCollectionTransferVertexSkinWeightsNode, TransformNameSuffix) == 336, "Offset mismatch for FGeometryCollectionTransferVertexSkinWeightsNode::TransformNameSuffix");

// /Script/GeometryCollectionNodes.GeometryCollectionVertexScalarToVertexIndicesNode
// Kind: ScriptStruct; super: DataflowNode
struct FGeometryCollectionVertexScalarToVertexIndicesNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t AttributeKey[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    float SelectionThreshold; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0134
    TArray<void*> VertexIndices; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryCollectionVertexScalarToVertexIndicesNode, Collection) == 224, "Offset mismatch for FGeometryCollectionVertexScalarToVertexIndicesNode::Collection");
static_assert(offsetof(FGeometryCollectionVertexScalarToVertexIndicesNode, AttributeKey) == 272, "Offset mismatch for FGeometryCollectionVertexScalarToVertexIndicesNode::AttributeKey");
static_assert(offsetof(FGeometryCollectionVertexScalarToVertexIndicesNode, SelectionThreshold) == 304, "Offset mismatch for FGeometryCollectionVertexScalarToVertexIndicesNode::SelectionThreshold");
static_assert(offsetof(FGeometryCollectionVertexScalarToVertexIndicesNode, VertexIndices) == 312, "Offset mismatch for FGeometryCollectionVertexScalarToVertexIndicesNode::VertexIndices");

// /Script/GeometryCollectionNodes.GeometrySelectionToVertexSelectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGeometrySelectionToVertexSelectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString GeometryIndices; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t GeometrySelection[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t VertexSelection[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometrySelectionToVertexSelectionDataflowNode, Collection) == 224, "Offset mismatch for FGeometrySelectionToVertexSelectionDataflowNode::Collection");
static_assert(offsetof(FGeometrySelectionToVertexSelectionDataflowNode, GeometryIndices) == 272, "Offset mismatch for FGeometrySelectionToVertexSelectionDataflowNode::GeometryIndices");
static_assert(offsetof(FGeometrySelectionToVertexSelectionDataflowNode, GeometrySelection) == 288, "Offset mismatch for FGeometrySelectionToVertexSelectionDataflowNode::GeometrySelection");
static_assert(offsetof(FGeometrySelectionToVertexSelectionDataflowNode, VertexSelection) == 328, "Offset mismatch for FGeometrySelectionToVertexSelectionDataflowNode::VertexSelection");

// /Script/GeometryCollectionNodes.GetArrayElementDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetArrayElementDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Index; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    TArray<void*> Points; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Point[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetArrayElementDataflowNode, Index) == 224, "Offset mismatch for FGetArrayElementDataflowNode::Index");
static_assert(offsetof(FGetArrayElementDataflowNode, Points) == 232, "Offset mismatch for FGetArrayElementDataflowNode::Points");
static_assert(offsetof(FGetArrayElementDataflowNode, Point) == 248, "Offset mismatch for FGetArrayElementDataflowNode::Point");

// /Script/GeometryCollectionNodes.GetBoolOverrideFromAssetDataflowNode
// Kind: ScriptStruct; super: DataflowOverrideNode
struct FGetBoolOverrideFromAssetDataflowNode
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t bool_; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BoolDefault; // 0x0101 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGetBoolOverrideFromAssetDataflowNode, bool_) == 256, "Offset mismatch for FGetBoolOverrideFromAssetDataflowNode::bool_");
static_assert(offsetof(FGetBoolOverrideFromAssetDataflowNode, BoolDefault) == 257, "Offset mismatch for FGetBoolOverrideFromAssetDataflowNode::BoolDefault");

// /Script/GeometryCollectionNodes.GetBoundingBoxesFromCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetBoundingBoxesFromCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    TArray<void*> BoundingBoxes; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGetBoundingBoxesFromCollectionDataflowNode, Collection) == 224, "Offset mismatch for FGetBoundingBoxesFromCollectionDataflowNode::Collection");
static_assert(offsetof(FGetBoundingBoxesFromCollectionDataflowNode, TransformSelection) == 272, "Offset mismatch for FGetBoundingBoxesFromCollectionDataflowNode::TransformSelection");
static_assert(offsetof(FGetBoundingBoxesFromCollectionDataflowNode, BoundingBoxes) == 312, "Offset mismatch for FGetBoundingBoxesFromCollectionDataflowNode::BoundingBoxes");

// /Script/GeometryCollectionNodes.GetBoxLengthsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetBoxLengthsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Boxes; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Lengths; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MeasurementMethod; // 0x0100 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGetBoxLengthsDataflowNode, Boxes) == 224, "Offset mismatch for FGetBoxLengthsDataflowNode::Boxes");
static_assert(offsetof(FGetBoxLengthsDataflowNode, Lengths) == 240, "Offset mismatch for FGetBoxLengthsDataflowNode::Lengths");
static_assert(offsetof(FGetBoxLengthsDataflowNode, MeasurementMethod) == 256, "Offset mismatch for FGetBoxLengthsDataflowNode::MeasurementMethod");

// /Script/GeometryCollectionNodes.GetCentroidsFromCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetCentroidsFromCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t bColorByLevel; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0139
    std::uint8_t Color[0x10]; // 0x013C (Size: 0x10, Type: StructProperty)
    std::uint8_t bSizeByLevel; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x014D
    float Size; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0154
    std::uint8_t PointSize[0x48]; // 0x0158 (Size: 0x48, Type: StructProperty)
    TArray<void*> Centroids; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Levels; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, Collection) == 224, "Offset mismatch for FGetCentroidsFromCollectionDataflowNode::Collection");
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, TransformSelection) == 272, "Offset mismatch for FGetCentroidsFromCollectionDataflowNode::TransformSelection");
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, bColorByLevel) == 312, "Offset mismatch for FGetCentroidsFromCollectionDataflowNode::bColorByLevel");
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, Color) == 316, "Offset mismatch for FGetCentroidsFromCollectionDataflowNode::Color");
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, bSizeByLevel) == 332, "Offset mismatch for FGetCentroidsFromCollectionDataflowNode::bSizeByLevel");
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, Size) == 336, "Offset mismatch for FGetCentroidsFromCollectionDataflowNode::Size");
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, PointSize) == 344, "Offset mismatch for FGetCentroidsFromCollectionDataflowNode::PointSize");
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, Centroids) == 416, "Offset mismatch for FGetCentroidsFromCollectionDataflowNode::Centroids");
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, Levels) == 432, "Offset mismatch for FGetCentroidsFromCollectionDataflowNode::Levels");

// /Script/GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetCollectionAttributeDataTypedDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t AttributeKey[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t GroupName; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0131
    FString CustomGroupName; // 0x0138 (Size: 0x10, Type: StrProperty)
    FString AttrName; // 0x0148 (Size: 0x10, Type: StrProperty)
    TArray<void*> BoolAttributeData; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FloatAttributeData; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DoubleAttributeData; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Int32AttributeData; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StringAttributeData; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector3fAttributeData; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector3dAttributeData; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LinearColorAttributeData; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, Collection) == 224, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::Collection");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, AttributeKey) == 272, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::AttributeKey");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, GroupName) == 304, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::GroupName");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, CustomGroupName) == 312, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::CustomGroupName");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, AttrName) == 328, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::AttrName");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, BoolAttributeData) == 344, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::BoolAttributeData");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, FloatAttributeData) == 360, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::FloatAttributeData");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, DoubleAttributeData) == 376, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::DoubleAttributeData");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, Int32AttributeData) == 392, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::Int32AttributeData");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, StringAttributeData) == 408, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::StringAttributeData");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, Vector3fAttributeData) == 424, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::Vector3fAttributeData");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, Vector3dAttributeData) == 440, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::Vector3dAttributeData");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, LinearColorAttributeData) == 456, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode::LinearColorAttributeData");

// /Script/GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FGetCollectionAttributeDataTypedDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t AttributeKey[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t GroupName; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0131
    FString CustomGroupName; // 0x0138 (Size: 0x10, Type: StrProperty)
    FString AttrName; // 0x0148 (Size: 0x10, Type: StrProperty)
    TArray<void*> BoolAttributeData; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NumericArray[0x10]; // 0x0168 (Size: 0x10, Type: StructProperty)
    std::uint8_t VectorArray[0x10]; // 0x0178 (Size: 0x10, Type: StructProperty)
    std::uint8_t StringArray[0x1]; // 0x0188 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode_v2, Collection) == 224, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode_v2::Collection");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode_v2, AttributeKey) == 272, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode_v2::AttributeKey");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode_v2, GroupName) == 304, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode_v2::GroupName");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode_v2, CustomGroupName) == 312, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode_v2::CustomGroupName");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode_v2, AttrName) == 328, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode_v2::AttrName");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode_v2, BoolAttributeData) == 344, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode_v2::BoolAttributeData");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode_v2, NumericArray) == 360, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode_v2::NumericArray");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode_v2, VectorArray) == 376, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode_v2::VectorArray");
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode_v2, StringArray) == 392, "Offset mismatch for FGetCollectionAttributeDataTypedDataflowNode_v2::StringArray");

// /Script/GeometryCollectionNodes.GetCollectionFromAssetDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetCollectionFromAssetDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* CollectionAsset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Collection[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetCollectionFromAssetDataflowNode, CollectionAsset) == 224, "Offset mismatch for FGetCollectionFromAssetDataflowNode::CollectionAsset");
static_assert(offsetof(FGetCollectionFromAssetDataflowNode, Collection) == 232, "Offset mismatch for FGetCollectionFromAssetDataflowNode::Collection");

// /Script/GeometryCollectionNodes.GetConvexHullVolumeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetConvexHullVolumeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    float Volume; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSumChildrenForClustersWithoutHulls; // 0x013C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVolumeOfUnion; // 0x013D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x013E
    std::uint8_t DebugDrawRenderSettings[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRandomizeColor; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0159
    std::int32_t ColorRandomSeed; // 0x015C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetConvexHullVolumeDataflowNode, Collection) == 224, "Offset mismatch for FGetConvexHullVolumeDataflowNode::Collection");
static_assert(offsetof(FGetConvexHullVolumeDataflowNode, TransformSelection) == 272, "Offset mismatch for FGetConvexHullVolumeDataflowNode::TransformSelection");
static_assert(offsetof(FGetConvexHullVolumeDataflowNode, Volume) == 312, "Offset mismatch for FGetConvexHullVolumeDataflowNode::Volume");
static_assert(offsetof(FGetConvexHullVolumeDataflowNode, bSumChildrenForClustersWithoutHulls) == 316, "Offset mismatch for FGetConvexHullVolumeDataflowNode::bSumChildrenForClustersWithoutHulls");
static_assert(offsetof(FGetConvexHullVolumeDataflowNode, bVolumeOfUnion) == 317, "Offset mismatch for FGetConvexHullVolumeDataflowNode::bVolumeOfUnion");
static_assert(offsetof(FGetConvexHullVolumeDataflowNode, DebugDrawRenderSettings) == 320, "Offset mismatch for FGetConvexHullVolumeDataflowNode::DebugDrawRenderSettings");
static_assert(offsetof(FGetConvexHullVolumeDataflowNode, bRandomizeColor) == 344, "Offset mismatch for FGetConvexHullVolumeDataflowNode::bRandomizeColor");
static_assert(offsetof(FGetConvexHullVolumeDataflowNode, ColorRandomSeed) == 348, "Offset mismatch for FGetConvexHullVolumeDataflowNode::ColorRandomSeed");

// /Script/GeometryCollectionNodes.GetFloatArrayElementDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetFloatArrayElementDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Index; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    TArray<void*> FloatArray; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    float FloatValue; // 0x00F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGetFloatArrayElementDataflowNode, Index) == 224, "Offset mismatch for FGetFloatArrayElementDataflowNode::Index");
static_assert(offsetof(FGetFloatArrayElementDataflowNode, FloatArray) == 232, "Offset mismatch for FGetFloatArrayElementDataflowNode::FloatArray");
static_assert(offsetof(FGetFloatArrayElementDataflowNode, FloatValue) == 248, "Offset mismatch for FGetFloatArrayElementDataflowNode::FloatValue");

// /Script/GeometryCollectionNodes.GetFloatOverrideFromAssetDataflowNode
// Kind: ScriptStruct; super: DataflowOverrideNode
struct FGetFloatOverrideFromAssetDataflowNode
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    float float_; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float FloatDefault; // 0x0104 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGetFloatOverrideFromAssetDataflowNode, float_) == 256, "Offset mismatch for FGetFloatOverrideFromAssetDataflowNode::float_");
static_assert(offsetof(FGetFloatOverrideFromAssetDataflowNode, FloatDefault) == 260, "Offset mismatch for FGetFloatOverrideFromAssetDataflowNode::FloatDefault");

// /Script/GeometryCollectionNodes.GetFromMaterialInterfaceArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetFromMaterialInterfaceArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> MaterialArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* Material; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Index; // 0x00F8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetFromMaterialInterfaceArrayDataflowNode, MaterialArray) == 224, "Offset mismatch for FGetFromMaterialInterfaceArrayDataflowNode::MaterialArray");
static_assert(offsetof(FGetFromMaterialInterfaceArrayDataflowNode, Material) == 240, "Offset mismatch for FGetFromMaterialInterfaceArrayDataflowNode::Material");
static_assert(offsetof(FGetFromMaterialInterfaceArrayDataflowNode, Index) == 248, "Offset mismatch for FGetFromMaterialInterfaceArrayDataflowNode::Index");

// /Script/GeometryCollectionNodes.GetGeometryCollectionAssetDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetGeometryCollectionAssetDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Asset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetGeometryCollectionAssetDataflowNode, Asset) == 224, "Offset mismatch for FGetGeometryCollectionAssetDataflowNode::Asset");

// /Script/GeometryCollectionNodes.GetGeometryCollectionSourcesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetGeometryCollectionSourcesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Asset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Sources; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGetGeometryCollectionSourcesDataflowNode, Asset) == 224, "Offset mismatch for FGetGeometryCollectionSourcesDataflowNode::Asset");
static_assert(offsetof(FGetGeometryCollectionSourcesDataflowNode, Sources) == 232, "Offset mismatch for FGetGeometryCollectionSourcesDataflowNode::Sources");

// /Script/GeometryCollectionNodes.GetIntOverrideFromAssetDataflowNode
// Kind: ScriptStruct; super: DataflowOverrideNode
struct FGetIntOverrideFromAssetDataflowNode
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::int32_t Int; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t IntDefault; // 0x0104 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetIntOverrideFromAssetDataflowNode, Int) == 256, "Offset mismatch for FGetIntOverrideFromAssetDataflowNode::Int");
static_assert(offsetof(FGetIntOverrideFromAssetDataflowNode, IntDefault) == 260, "Offset mismatch for FGetIntOverrideFromAssetDataflowNode::IntDefault");

// /Script/GeometryCollectionNodes.GetMaterialFromMaterialsArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetMaterialFromMaterialsArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Materials; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* Material; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaterialIdx; // 0x00F8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetMaterialFromMaterialsArrayDataflowNode, Materials) == 224, "Offset mismatch for FGetMaterialFromMaterialsArrayDataflowNode::Materials");
static_assert(offsetof(FGetMaterialFromMaterialsArrayDataflowNode, Material) == 240, "Offset mismatch for FGetMaterialFromMaterialsArrayDataflowNode::Material");
static_assert(offsetof(FGetMaterialFromMaterialsArrayDataflowNode, MaterialIdx) == 248, "Offset mismatch for FGetMaterialFromMaterialsArrayDataflowNode::MaterialIdx");

// /Script/GeometryCollectionNodes.GetMaterialInterfaceArraySizeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetMaterialInterfaceArraySizeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> MaterialArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Size; // 0x00F0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetMaterialInterfaceArraySizeDataflowNode, MaterialArray) == 224, "Offset mismatch for FGetMaterialInterfaceArraySizeDataflowNode::MaterialArray");
static_assert(offsetof(FGetMaterialInterfaceArraySizeDataflowNode, Size) == 240, "Offset mismatch for FGetMaterialInterfaceArraySizeDataflowNode::Size");

// /Script/GeometryCollectionNodes.GetMaterialInterfaceAssetDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetMaterialInterfaceAssetDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Material; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetMaterialInterfaceAssetDataflowNode, Material) == 224, "Offset mismatch for FGetMaterialInterfaceAssetDataflowNode::Material");

// /Script/GeometryCollectionNodes.GetMeshBoundingBoxDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetMeshBoundingBoxDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoundingBox[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t Dimensions[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetMeshBoundingBoxDataflowNode, Mesh) == 224, "Offset mismatch for FGetMeshBoundingBoxDataflowNode::Mesh");
static_assert(offsetof(FGetMeshBoundingBoxDataflowNode, BoundingBox) == 232, "Offset mismatch for FGetMeshBoundingBoxDataflowNode::BoundingBox");
static_assert(offsetof(FGetMeshBoundingBoxDataflowNode, Center) == 288, "Offset mismatch for FGetMeshBoundingBoxDataflowNode::Center");
static_assert(offsetof(FGetMeshBoundingBoxDataflowNode, Dimensions) == 312, "Offset mismatch for FGetMeshBoundingBoxDataflowNode::Dimensions");

// /Script/GeometryCollectionNodes.GetMeshBoundingBoxDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FGetMeshBoundingBoxDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoundingBox[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t Dimensions[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetMeshBoundingBoxDataflowNode_v2, Mesh) == 224, "Offset mismatch for FGetMeshBoundingBoxDataflowNode_v2::Mesh");
static_assert(offsetof(FGetMeshBoundingBoxDataflowNode_v2, BoundingBox) == 232, "Offset mismatch for FGetMeshBoundingBoxDataflowNode_v2::BoundingBox");
static_assert(offsetof(FGetMeshBoundingBoxDataflowNode_v2, Center) == 288, "Offset mismatch for FGetMeshBoundingBoxDataflowNode_v2::Center");
static_assert(offsetof(FGetMeshBoundingBoxDataflowNode_v2, Dimensions) == 312, "Offset mismatch for FGetMeshBoundingBoxDataflowNode_v2::Dimensions");

// /Script/GeometryCollectionNodes.GetMeshBoundingSphereDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetMeshBoundingSphereDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoundingSphere[0x20]; // 0x00E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0120 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGetMeshBoundingSphereDataflowNode, Mesh) == 224, "Offset mismatch for FGetMeshBoundingSphereDataflowNode::Mesh");
static_assert(offsetof(FGetMeshBoundingSphereDataflowNode, BoundingSphere) == 232, "Offset mismatch for FGetMeshBoundingSphereDataflowNode::BoundingSphere");
static_assert(offsetof(FGetMeshBoundingSphereDataflowNode, Center) == 264, "Offset mismatch for FGetMeshBoundingSphereDataflowNode::Center");
static_assert(offsetof(FGetMeshBoundingSphereDataflowNode, Radius) == 288, "Offset mismatch for FGetMeshBoundingSphereDataflowNode::Radius");

// /Script/GeometryCollectionNodes.GetMeshDataDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetMeshDataDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t VertexCount; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t EdgeCount; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t TriangleCount; // 0x00F0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetMeshDataDataflowNode, Mesh) == 224, "Offset mismatch for FGetMeshDataDataflowNode::Mesh");
static_assert(offsetof(FGetMeshDataDataflowNode, VertexCount) == 232, "Offset mismatch for FGetMeshDataDataflowNode::VertexCount");
static_assert(offsetof(FGetMeshDataDataflowNode, EdgeCount) == 236, "Offset mismatch for FGetMeshDataDataflowNode::EdgeCount");
static_assert(offsetof(FGetMeshDataDataflowNode, TriangleCount) == 240, "Offset mismatch for FGetMeshDataDataflowNode::TriangleCount");

// /Script/GeometryCollectionNodes.GetNumArrayElementsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetNumArrayElementsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> FloatArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IntArray; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Points; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector3fArray; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumElements; // 0x0120 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetNumArrayElementsDataflowNode, FloatArray) == 224, "Offset mismatch for FGetNumArrayElementsDataflowNode::FloatArray");
static_assert(offsetof(FGetNumArrayElementsDataflowNode, IntArray) == 240, "Offset mismatch for FGetNumArrayElementsDataflowNode::IntArray");
static_assert(offsetof(FGetNumArrayElementsDataflowNode, Points) == 256, "Offset mismatch for FGetNumArrayElementsDataflowNode::Points");
static_assert(offsetof(FGetNumArrayElementsDataflowNode, Vector3fArray) == 272, "Offset mismatch for FGetNumArrayElementsDataflowNode::Vector3fArray");
static_assert(offsetof(FGetNumArrayElementsDataflowNode, NumElements) == 288, "Offset mismatch for FGetNumArrayElementsDataflowNode::NumElements");

// /Script/GeometryCollectionNodes.GetNumElementsInCollectionGroupDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetNumElementsInCollectionGroupDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t GroupName; // 0x0110 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    FString CustomGroupName; // 0x0118 (Size: 0x10, Type: StrProperty)
    std::int32_t NumElements; // 0x0128 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetNumElementsInCollectionGroupDataflowNode, Collection) == 224, "Offset mismatch for FGetNumElementsInCollectionGroupDataflowNode::Collection");
static_assert(offsetof(FGetNumElementsInCollectionGroupDataflowNode, GroupName) == 272, "Offset mismatch for FGetNumElementsInCollectionGroupDataflowNode::GroupName");
static_assert(offsetof(FGetNumElementsInCollectionGroupDataflowNode, CustomGroupName) == 280, "Offset mismatch for FGetNumElementsInCollectionGroupDataflowNode::CustomGroupName");
static_assert(offsetof(FGetNumElementsInCollectionGroupDataflowNode, NumElements) == 296, "Offset mismatch for FGetNumElementsInCollectionGroupDataflowNode::NumElements");

// /Script/GeometryCollectionNodes.GetNumElementsInSelectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetNumElementsInSelectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Selection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::int32_t NumElements; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::int32_t NumSelectedElements; // 0x010C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetNumElementsInSelectionDataflowNode, Selection) == 224, "Offset mismatch for FGetNumElementsInSelectionDataflowNode::Selection");
static_assert(offsetof(FGetNumElementsInSelectionDataflowNode, NumElements) == 264, "Offset mismatch for FGetNumElementsInSelectionDataflowNode::NumElements");
static_assert(offsetof(FGetNumElementsInSelectionDataflowNode, NumSelectedElements) == 268, "Offset mismatch for FGetNumElementsInSelectionDataflowNode::NumSelectedElements");

// /Script/GeometryCollectionNodes.GetRootIndexFromCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetRootIndexFromCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::int32_t RootIndex; // 0x0110 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGetRootIndexFromCollectionDataflowNode, Collection) == 224, "Offset mismatch for FGetRootIndexFromCollectionDataflowNode::Collection");
static_assert(offsetof(FGetRootIndexFromCollectionDataflowNode, RootIndex) == 272, "Offset mismatch for FGetRootIndexFromCollectionDataflowNode::RootIndex");

// /Script/GeometryCollectionNodes.GetSchemaDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetSchemaDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString String; // 0x0110 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGetSchemaDataflowNode, Collection) == 224, "Offset mismatch for FGetSchemaDataflowNode::Collection");
static_assert(offsetof(FGetSchemaDataflowNode, String) == 272, "Offset mismatch for FGetSchemaDataflowNode::String");

// /Script/GeometryCollectionNodes.GetStringOverrideFromAssetDataflowNode
// Kind: ScriptStruct; super: DataflowOverrideNode
struct FGetStringOverrideFromAssetDataflowNode
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    FString String; // 0x0100 (Size: 0x10, Type: StrProperty)
    FString StringDefault; // 0x0110 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGetStringOverrideFromAssetDataflowNode, String) == 256, "Offset mismatch for FGetStringOverrideFromAssetDataflowNode::String");
static_assert(offsetof(FGetStringOverrideFromAssetDataflowNode, StringDefault) == 272, "Offset mismatch for FGetStringOverrideFromAssetDataflowNode::StringDefault");

// /Script/GeometryCollectionNodes.GridScatterPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGridScatterPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t NumberOfPointsInX; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfPointsInY; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfPointsInZ; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t RandomSeed; // 0x00EC (Size: 0x4, Type: IntProperty)
    float MaxRandomDisplacementX; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float MaxRandomDisplacementY; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float MaxRandomDisplacementZ; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00FC
    std::uint8_t BoundingBox[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    TArray<void*> Points; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGridScatterPointsDataflowNode, NumberOfPointsInX) == 224, "Offset mismatch for FGridScatterPointsDataflowNode::NumberOfPointsInX");
static_assert(offsetof(FGridScatterPointsDataflowNode, NumberOfPointsInY) == 228, "Offset mismatch for FGridScatterPointsDataflowNode::NumberOfPointsInY");
static_assert(offsetof(FGridScatterPointsDataflowNode, NumberOfPointsInZ) == 232, "Offset mismatch for FGridScatterPointsDataflowNode::NumberOfPointsInZ");
static_assert(offsetof(FGridScatterPointsDataflowNode, RandomSeed) == 236, "Offset mismatch for FGridScatterPointsDataflowNode::RandomSeed");
static_assert(offsetof(FGridScatterPointsDataflowNode, MaxRandomDisplacementX) == 240, "Offset mismatch for FGridScatterPointsDataflowNode::MaxRandomDisplacementX");
static_assert(offsetof(FGridScatterPointsDataflowNode, MaxRandomDisplacementY) == 244, "Offset mismatch for FGridScatterPointsDataflowNode::MaxRandomDisplacementY");
static_assert(offsetof(FGridScatterPointsDataflowNode, MaxRandomDisplacementZ) == 248, "Offset mismatch for FGridScatterPointsDataflowNode::MaxRandomDisplacementZ");
static_assert(offsetof(FGridScatterPointsDataflowNode, BoundingBox) == 256, "Offset mismatch for FGridScatterPointsDataflowNode::BoundingBox");
static_assert(offsetof(FGridScatterPointsDataflowNode, Points) == 312, "Offset mismatch for FGridScatterPointsDataflowNode::Points");

// /Script/GeometryCollectionNodes.HashStringDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FHashStringDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString String; // 0x00E0 (Size: 0x10, Type: StrProperty)
    std::int32_t Hash; // 0x00F0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHashStringDataflowNode, String) == 224, "Offset mismatch for FHashStringDataflowNode::String");
static_assert(offsetof(FHashStringDataflowNode, Hash) == 240, "Offset mismatch for FHashStringDataflowNode::Hash");

// /Script/GeometryCollectionNodes.HashVectorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FHashVectorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Vector[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::int32_t Hash; // 0x00F8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHashVectorDataflowNode, Vector) == 224, "Offset mismatch for FHashVectorDataflowNode::Vector");
static_assert(offsetof(FHashVectorDataflowNode, Hash) == 248, "Offset mismatch for FHashVectorDataflowNode::Hash");

// /Script/GeometryCollectionNodes.IntToBoolDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FIntToBoolDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Int; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bool_; // 0x00E4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIntToBoolDataflowNode, Int) == 224, "Offset mismatch for FIntToBoolDataflowNode::Int");
static_assert(offsetof(FIntToBoolDataflowNode, bool_) == 228, "Offset mismatch for FIntToBoolDataflowNode::bool_");

// /Script/GeometryCollectionNodes.IntToDoubleDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FIntToDoubleDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Int; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    double Double; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIntToDoubleDataflowNode, Int) == 224, "Offset mismatch for FIntToDoubleDataflowNode::Int");
static_assert(offsetof(FIntToDoubleDataflowNode, Double) == 232, "Offset mismatch for FIntToDoubleDataflowNode::Double");

// /Script/GeometryCollectionNodes.IntToFloatDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FIntToFloatDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Int; // 0x00E0 (Size: 0x4, Type: IntProperty)
    float float_; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FIntToFloatDataflowNode, Int) == 224, "Offset mismatch for FIntToFloatDataflowNode::Int");
static_assert(offsetof(FIntToFloatDataflowNode, float_) == 228, "Offset mismatch for FIntToFloatDataflowNode::float_");

// /Script/GeometryCollectionNodes.IntToStringDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FIntToStringDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Int; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    FString String; // 0x00E8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FIntToStringDataflowNode, Int) == 224, "Offset mismatch for FIntToStringDataflowNode::Int");
static_assert(offsetof(FIntToStringDataflowNode, String) == 232, "Offset mismatch for FIntToStringDataflowNode::String");

// /Script/GeometryCollectionNodes.InverseSqrtDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FInverseSqrtDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInverseSqrtDataflowNode, float_) == 224, "Offset mismatch for FInverseSqrtDataflowNode::float_");
static_assert(offsetof(FInverseSqrtDataflowNode, ReturnValue) == 228, "Offset mismatch for FInverseSqrtDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.InvertTransformDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FInvertTransformDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t InTransform[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t OutTransform[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInvertTransformDataflowNode, InTransform) == 224, "Offset mismatch for FInvertTransformDataflowNode::InTransform");
static_assert(offsetof(FInvertTransformDataflowNode, OutTransform) == 320, "Offset mismatch for FInvertTransformDataflowNode::OutTransform");

// /Script/GeometryCollectionNodes.IsNearlyZeroDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FIsNearlyZeroDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ReturnValue; // 0x00E4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIsNearlyZeroDataflowNode, float_) == 224, "Offset mismatch for FIsNearlyZeroDataflowNode::float_");
static_assert(offsetof(FIsNearlyZeroDataflowNode, ReturnValue) == 228, "Offset mismatch for FIsNearlyZeroDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.LengthDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FLengthDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Vector[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    float ReturnValue; // 0x00F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLengthDataflowNode, Vector) == 224, "Offset mismatch for FLengthDataflowNode::Vector");
static_assert(offsetof(FLengthDataflowNode, ReturnValue) == 248, "Offset mismatch for FLengthDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.LerpDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FLerpDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float A; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float B; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float Alpha; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLerpDataflowNode, A) == 224, "Offset mismatch for FLerpDataflowNode::A");
static_assert(offsetof(FLerpDataflowNode, B) == 228, "Offset mismatch for FLerpDataflowNode::B");
static_assert(offsetof(FLerpDataflowNode, Alpha) == 232, "Offset mismatch for FLerpDataflowNode::Alpha");
static_assert(offsetof(FLerpDataflowNode, ReturnValue) == 236, "Offset mismatch for FLerpDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.LogDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FLogDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float base; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float A; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLogDataflowNode, base) == 224, "Offset mismatch for FLogDataflowNode::base");
static_assert(offsetof(FLogDataflowNode, A) == 228, "Offset mismatch for FLogDataflowNode::A");
static_assert(offsetof(FLogDataflowNode, ReturnValue) == 232, "Offset mismatch for FLogDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.LogStringDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FLogStringDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bPrintToLog; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    FString String; // 0x00E8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLogStringDataflowNode, bPrintToLog) == 224, "Offset mismatch for FLogStringDataflowNode::bPrintToLog");
static_assert(offsetof(FLogStringDataflowNode, String) == 232, "Offset mismatch for FLogStringDataflowNode::String");

// /Script/GeometryCollectionNodes.LogeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FLogeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float A; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLogeDataflowNode, A) == 224, "Offset mismatch for FLogeDataflowNode::A");
static_assert(offsetof(FLogeDataflowNode, ReturnValue) == 228, "Offset mismatch for FLogeDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.MakeBoxDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeBoxDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t DataType; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t min[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t max[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t Size[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t Box[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeBoxDataflowNode, DataType) == 224, "Offset mismatch for FMakeBoxDataflowNode::DataType");
static_assert(offsetof(FMakeBoxDataflowNode, min) == 232, "Offset mismatch for FMakeBoxDataflowNode::min");
static_assert(offsetof(FMakeBoxDataflowNode, max) == 256, "Offset mismatch for FMakeBoxDataflowNode::max");
static_assert(offsetof(FMakeBoxDataflowNode, Center) == 280, "Offset mismatch for FMakeBoxDataflowNode::Center");
static_assert(offsetof(FMakeBoxDataflowNode, Size) == 304, "Offset mismatch for FMakeBoxDataflowNode::Size");
static_assert(offsetof(FMakeBoxDataflowNode, Box) == 328, "Offset mismatch for FMakeBoxDataflowNode::Box");

// /Script/GeometryCollectionNodes.MakeCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAddRootTransform; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMakeCollectionDataflowNode, Collection) == 224, "Offset mismatch for FMakeCollectionDataflowNode::Collection");
static_assert(offsetof(FMakeCollectionDataflowNode, bAddRootTransform) == 272, "Offset mismatch for FMakeCollectionDataflowNode::bAddRootTransform");

// /Script/GeometryCollectionNodes.MakeDataflowConvexDecompositionSettingsNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeDataflowConvexDecompositionSettingsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float MinSizeToDecompose; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float MaxGeoToHullVolumeRatioToDecompose; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ErrorTolerance; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxHullsPerGeometry; // 0x00EC (Size: 0x4, Type: IntProperty)
    float MinThicknessTolerance; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumAdditionalSplits; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bProtectNegativeSpace; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyConnectedToHull; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00FA
    float NegativeSpaceTolerance; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float NegativeSpaceMinRadius; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DecompositionSettings[0x1]; // 0x0104 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, MinSizeToDecompose) == 224, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::MinSizeToDecompose");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, MaxGeoToHullVolumeRatioToDecompose) == 228, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::MaxGeoToHullVolumeRatioToDecompose");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, ErrorTolerance) == 232, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::ErrorTolerance");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, MaxHullsPerGeometry) == 236, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::MaxHullsPerGeometry");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, MinThicknessTolerance) == 240, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::MinThicknessTolerance");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, NumAdditionalSplits) == 244, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::NumAdditionalSplits");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, bProtectNegativeSpace) == 248, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::bProtectNegativeSpace");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, bOnlyConnectedToHull) == 249, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::bOnlyConnectedToHull");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, NegativeSpaceTolerance) == 252, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::NegativeSpaceTolerance");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, NegativeSpaceMinRadius) == 256, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::NegativeSpaceMinRadius");
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, DecompositionSettings) == 260, "Offset mismatch for FMakeDataflowConvexDecompositionSettingsNode::DecompositionSettings");

// /Script/GeometryCollectionNodes.MakeDataflowMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeDataflowMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* InMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> InMaterials; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* Mesh; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeDataflowMeshDataflowNode, InMesh) == 224, "Offset mismatch for FMakeDataflowMeshDataflowNode::InMesh");
static_assert(offsetof(FMakeDataflowMeshDataflowNode, InMaterials) == 232, "Offset mismatch for FMakeDataflowMeshDataflowNode::InMaterials");
static_assert(offsetof(FMakeDataflowMeshDataflowNode, Mesh) == 248, "Offset mismatch for FMakeDataflowMeshDataflowNode::Mesh");

// /Script/GeometryCollectionNodes.MakeFloatArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeFloatArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t NumElements; // 0x00E0 (Size: 0x4, Type: IntProperty)
    float Value; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    TArray<void*> FloatArray; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeFloatArrayDataflowNode, NumElements) == 224, "Offset mismatch for FMakeFloatArrayDataflowNode::NumElements");
static_assert(offsetof(FMakeFloatArrayDataflowNode, Value) == 228, "Offset mismatch for FMakeFloatArrayDataflowNode::Value");
static_assert(offsetof(FMakeFloatArrayDataflowNode, FloatArray) == 232, "Offset mismatch for FMakeFloatArrayDataflowNode::FloatArray");

// /Script/GeometryCollectionNodes.MakeIntArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeIntArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Start; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t Count; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bReverseOrder; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    TArray<void*> IntArray; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeIntArrayDataflowNode, Start) == 224, "Offset mismatch for FMakeIntArrayDataflowNode::Start");
static_assert(offsetof(FMakeIntArrayDataflowNode, Count) == 228, "Offset mismatch for FMakeIntArrayDataflowNode::Count");
static_assert(offsetof(FMakeIntArrayDataflowNode, bReverseOrder) == 232, "Offset mismatch for FMakeIntArrayDataflowNode::bReverseOrder");
static_assert(offsetof(FMakeIntArrayDataflowNode, IntArray) == 240, "Offset mismatch for FMakeIntArrayDataflowNode::IntArray");

// /Script/GeometryCollectionNodes.MakeIntArrayFromListDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeIntArrayFromListDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString List; // 0x00E0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bReverseOrder; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    TArray<void*> IntArray; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeIntArrayFromListDataflowNode, List) == 224, "Offset mismatch for FMakeIntArrayFromListDataflowNode::List");
static_assert(offsetof(FMakeIntArrayFromListDataflowNode, bReverseOrder) == 240, "Offset mismatch for FMakeIntArrayFromListDataflowNode::bReverseOrder");
static_assert(offsetof(FMakeIntArrayFromListDataflowNode, IntArray) == 248, "Offset mismatch for FMakeIntArrayFromListDataflowNode::IntArray");

// /Script/GeometryCollectionNodes.MakeLiteralBoolDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralBoolDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Value; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bool_; // 0x00E1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMakeLiteralBoolDataflowNode, Value) == 224, "Offset mismatch for FMakeLiteralBoolDataflowNode::Value");
static_assert(offsetof(FMakeLiteralBoolDataflowNode, bool_) == 225, "Offset mismatch for FMakeLiteralBoolDataflowNode::bool_");

// /Script/GeometryCollectionNodes.MakeLiteralBoolDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralBoolDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bool_; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMakeLiteralBoolDataflowNode_v2, bool_) == 224, "Offset mismatch for FMakeLiteralBoolDataflowNode_v2::bool_");

// /Script/GeometryCollectionNodes.MakeLiteralDoubleDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralDoubleDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    double Double; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FMakeLiteralDoubleDataflowNode, Double) == 224, "Offset mismatch for FMakeLiteralDoubleDataflowNode::Double");

// /Script/GeometryCollectionNodes.MakeLiteralFloatDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralFloatDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Value; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float float_; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMakeLiteralFloatDataflowNode, Value) == 224, "Offset mismatch for FMakeLiteralFloatDataflowNode::Value");
static_assert(offsetof(FMakeLiteralFloatDataflowNode, float_) == 228, "Offset mismatch for FMakeLiteralFloatDataflowNode::float_");

// /Script/GeometryCollectionNodes.MakeLiteralFloatDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralFloatDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMakeLiteralFloatDataflowNode_v2, float_) == 224, "Offset mismatch for FMakeLiteralFloatDataflowNode_v2::float_");

// /Script/GeometryCollectionNodes.MakeLiteralIntDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralIntDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Value; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t Int; // 0x00E4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMakeLiteralIntDataflowNode, Value) == 224, "Offset mismatch for FMakeLiteralIntDataflowNode::Value");
static_assert(offsetof(FMakeLiteralIntDataflowNode, Int) == 228, "Offset mismatch for FMakeLiteralIntDataflowNode::Int");

// /Script/GeometryCollectionNodes.MakeLiteralIntDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralIntDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Int; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMakeLiteralIntDataflowNode_v2, Int) == 224, "Offset mismatch for FMakeLiteralIntDataflowNode_v2::Int");

// /Script/GeometryCollectionNodes.MakeLiteralStringDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralStringDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString Value; // 0x00E0 (Size: 0x10, Type: StrProperty)
    FString String; // 0x00F0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMakeLiteralStringDataflowNode, Value) == 224, "Offset mismatch for FMakeLiteralStringDataflowNode::Value");
static_assert(offsetof(FMakeLiteralStringDataflowNode, String) == 240, "Offset mismatch for FMakeLiteralStringDataflowNode::String");

// /Script/GeometryCollectionNodes.MakeLiteralStringDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralStringDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString String; // 0x00E0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMakeLiteralStringDataflowNode_v2, String) == 224, "Offset mismatch for FMakeLiteralStringDataflowNode_v2::String");

// /Script/GeometryCollectionNodes.MakeLiteralVectorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralVectorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float X; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float Z; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    std::uint8_t Vector[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeLiteralVectorDataflowNode, X) == 224, "Offset mismatch for FMakeLiteralVectorDataflowNode::X");
static_assert(offsetof(FMakeLiteralVectorDataflowNode, Y) == 228, "Offset mismatch for FMakeLiteralVectorDataflowNode::Y");
static_assert(offsetof(FMakeLiteralVectorDataflowNode, Z) == 232, "Offset mismatch for FMakeLiteralVectorDataflowNode::Z");
static_assert(offsetof(FMakeLiteralVectorDataflowNode, Vector) == 240, "Offset mismatch for FMakeLiteralVectorDataflowNode::Vector");

// /Script/GeometryCollectionNodes.MakeMaterialDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeMaterialDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* InMaterial; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Material; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeMaterialDataflowNode, InMaterial) == 224, "Offset mismatch for FMakeMaterialDataflowNode::InMaterial");
static_assert(offsetof(FMakeMaterialDataflowNode, Material) == 232, "Offset mismatch for FMakeMaterialDataflowNode::Material");

// /Script/GeometryCollectionNodes.MakeMaterialInterfaceArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeMaterialInterfaceArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> MaterialArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeMaterialInterfaceArrayDataflowNode, MaterialArray) == 224, "Offset mismatch for FMakeMaterialInterfaceArrayDataflowNode::MaterialArray");

// /Script/GeometryCollectionNodes.MakeMaterialsArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeMaterialsArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Materials; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeMaterialsArrayDataflowNode, Materials) == 224, "Offset mismatch for FMakeMaterialsArrayDataflowNode::Materials");

// /Script/GeometryCollectionNodes.MakeNumericArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeNumericArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t NumElements; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    std::uint8_t DefaultValue[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Generator[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Array[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeNumericArrayDataflowNode, NumElements) == 224, "Offset mismatch for FMakeNumericArrayDataflowNode::NumElements");
static_assert(offsetof(FMakeNumericArrayDataflowNode, DefaultValue) == 232, "Offset mismatch for FMakeNumericArrayDataflowNode::DefaultValue");
static_assert(offsetof(FMakeNumericArrayDataflowNode, Generator) == 240, "Offset mismatch for FMakeNumericArrayDataflowNode::Generator");
static_assert(offsetof(FMakeNumericArrayDataflowNode, Array) == 256, "Offset mismatch for FMakeNumericArrayDataflowNode::Array");

// /Script/GeometryCollectionNodes.MakePlaneDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakePlaneDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t BasePoint[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DebugDrawRenderSettings[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    float PlaneSizeMultiplier; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x012C
    std::uint8_t Plane[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakePlaneDataflowNode, BasePoint) == 224, "Offset mismatch for FMakePlaneDataflowNode::BasePoint");
static_assert(offsetof(FMakePlaneDataflowNode, Normal) == 248, "Offset mismatch for FMakePlaneDataflowNode::Normal");
static_assert(offsetof(FMakePlaneDataflowNode, DebugDrawRenderSettings) == 272, "Offset mismatch for FMakePlaneDataflowNode::DebugDrawRenderSettings");
static_assert(offsetof(FMakePlaneDataflowNode, PlaneSizeMultiplier) == 296, "Offset mismatch for FMakePlaneDataflowNode::PlaneSizeMultiplier");
static_assert(offsetof(FMakePlaneDataflowNode, Plane) == 304, "Offset mismatch for FMakePlaneDataflowNode::Plane");

// /Script/GeometryCollectionNodes.MakePlaneDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakePlaneDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t BasePoint[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Plane[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakePlaneDataflowNode_v2, BasePoint) == 224, "Offset mismatch for FMakePlaneDataflowNode_v2::BasePoint");
static_assert(offsetof(FMakePlaneDataflowNode_v2, Normal) == 248, "Offset mismatch for FMakePlaneDataflowNode_v2::Normal");
static_assert(offsetof(FMakePlaneDataflowNode_v2, Plane) == 272, "Offset mismatch for FMakePlaneDataflowNode_v2::Plane");

// /Script/GeometryCollectionNodes.MakePointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakePointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Point; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Points; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakePointsDataflowNode, Point) == 224, "Offset mismatch for FMakePointsDataflowNode::Point");
static_assert(offsetof(FMakePointsDataflowNode, Points) == 240, "Offset mismatch for FMakePointsDataflowNode::Points");

// /Script/GeometryCollectionNodes.MakePointsDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakePointsDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Point; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Points[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakePointsDataflowNode_v2, Point) == 224, "Offset mismatch for FMakePointsDataflowNode_v2::Point");
static_assert(offsetof(FMakePointsDataflowNode_v2, Points) == 240, "Offset mismatch for FMakePointsDataflowNode_v2::Points");

// /Script/GeometryCollectionNodes.MakeQuaternionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeQuaternionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float X; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float Z; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float W; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Quaternion[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeQuaternionDataflowNode, X) == 224, "Offset mismatch for FMakeQuaternionDataflowNode::X");
static_assert(offsetof(FMakeQuaternionDataflowNode, Y) == 228, "Offset mismatch for FMakeQuaternionDataflowNode::Y");
static_assert(offsetof(FMakeQuaternionDataflowNode, Z) == 232, "Offset mismatch for FMakeQuaternionDataflowNode::Z");
static_assert(offsetof(FMakeQuaternionDataflowNode, W) == 236, "Offset mismatch for FMakeQuaternionDataflowNode::W");
static_assert(offsetof(FMakeQuaternionDataflowNode, Quaternion) == 240, "Offset mismatch for FMakeQuaternionDataflowNode::Quaternion");

// /Script/GeometryCollectionNodes.MakeRootProxyMeshArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeRootProxyMeshArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> RootProxyMeshes; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeRootProxyMeshArrayDataflowNode, RootProxyMeshes) == 224, "Offset mismatch for FMakeRootProxyMeshArrayDataflowNode::RootProxyMeshes");

// /Script/GeometryCollectionNodes.MakeRootProxyMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeRootProxyMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E8
    std::uint8_t Transform[0x60]; // 0x00F0 (Size: 0x60, Type: StructProperty)
    TArray<void*> OverrideMaterials; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RootProxyMesh[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeRootProxyMeshDataflowNode, Mesh) == 224, "Offset mismatch for FMakeRootProxyMeshDataflowNode::Mesh");
static_assert(offsetof(FMakeRootProxyMeshDataflowNode, Transform) == 240, "Offset mismatch for FMakeRootProxyMeshDataflowNode::Transform");
static_assert(offsetof(FMakeRootProxyMeshDataflowNode, OverrideMaterials) == 336, "Offset mismatch for FMakeRootProxyMeshDataflowNode::OverrideMaterials");
static_assert(offsetof(FMakeRootProxyMeshDataflowNode, RootProxyMesh) == 352, "Offset mismatch for FMakeRootProxyMeshDataflowNode::RootProxyMesh");

// /Script/GeometryCollectionNodes.MakeRotatorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeRotatorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Pitch; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Yaw; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float Roll; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    std::uint8_t Rotator[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeRotatorDataflowNode, Pitch) == 224, "Offset mismatch for FMakeRotatorDataflowNode::Pitch");
static_assert(offsetof(FMakeRotatorDataflowNode, Yaw) == 228, "Offset mismatch for FMakeRotatorDataflowNode::Yaw");
static_assert(offsetof(FMakeRotatorDataflowNode, Roll) == 232, "Offset mismatch for FMakeRotatorDataflowNode::Roll");
static_assert(offsetof(FMakeRotatorDataflowNode, Rotator) == 240, "Offset mismatch for FMakeRotatorDataflowNode::Rotator");

// /Script/GeometryCollectionNodes.MakeSphereDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeSphereDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Center[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00FC
    std::uint8_t Sphere[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeSphereDataflowNode, Center) == 224, "Offset mismatch for FMakeSphereDataflowNode::Center");
static_assert(offsetof(FMakeSphereDataflowNode, Radius) == 248, "Offset mismatch for FMakeSphereDataflowNode::Radius");
static_assert(offsetof(FMakeSphereDataflowNode, Sphere) == 256, "Offset mismatch for FMakeSphereDataflowNode::Sphere");

// /Script/GeometryCollectionNodes.MakeTransformDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeTransformDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t InTranslation[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t InRotation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t InScale[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t OutTransform[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeTransformDataflowNode, InTranslation) == 224, "Offset mismatch for FMakeTransformDataflowNode::InTranslation");
static_assert(offsetof(FMakeTransformDataflowNode, InRotation) == 248, "Offset mismatch for FMakeTransformDataflowNode::InRotation");
static_assert(offsetof(FMakeTransformDataflowNode, InScale) == 272, "Offset mismatch for FMakeTransformDataflowNode::InScale");
static_assert(offsetof(FMakeTransformDataflowNode, OutTransform) == 304, "Offset mismatch for FMakeTransformDataflowNode::OutTransform");

// /Script/GeometryCollectionNodes.MakeTransformDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeTransformDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Translation[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotator[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t Quat[0x20]; // 0x0130 (Size: 0x20, Type: StructProperty)
    std::uint8_t Scale[0x20]; // 0x0150 (Size: 0x20, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeTransformDataflowNode_v2, Translation) == 224, "Offset mismatch for FMakeTransformDataflowNode_v2::Translation");
static_assert(offsetof(FMakeTransformDataflowNode_v2, Rotation) == 248, "Offset mismatch for FMakeTransformDataflowNode_v2::Rotation");
static_assert(offsetof(FMakeTransformDataflowNode_v2, Rotator) == 272, "Offset mismatch for FMakeTransformDataflowNode_v2::Rotator");
static_assert(offsetof(FMakeTransformDataflowNode_v2, Quat) == 304, "Offset mismatch for FMakeTransformDataflowNode_v2::Quat");
static_assert(offsetof(FMakeTransformDataflowNode_v2, Scale) == 336, "Offset mismatch for FMakeTransformDataflowNode_v2::Scale");
static_assert(offsetof(FMakeTransformDataflowNode_v2, Transform) == 368, "Offset mismatch for FMakeTransformDataflowNode_v2::Transform");

// /Script/GeometryCollectionNodes.MaterialInterfaceSetFloatParameterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMaterialInterfaceSetFloatParameterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MaterialParameters[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ParameterName[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParameterValue[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMaterialInterfaceSetFloatParameterDataflowNode, MaterialParameters) == 224, "Offset mismatch for FMaterialInterfaceSetFloatParameterDataflowNode::MaterialParameters");
static_assert(offsetof(FMaterialInterfaceSetFloatParameterDataflowNode, ParameterName) == 272, "Offset mismatch for FMaterialInterfaceSetFloatParameterDataflowNode::ParameterName");
static_assert(offsetof(FMaterialInterfaceSetFloatParameterDataflowNode, ParameterValue) == 288, "Offset mismatch for FMaterialInterfaceSetFloatParameterDataflowNode::ParameterValue");

// /Script/GeometryCollectionNodes.MaterialInterfaceSetTexture2DParameterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMaterialInterfaceSetTexture2DParameterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MaterialParameters[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ParameterName[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    void* ParameterValue; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMaterialInterfaceSetTexture2DParameterDataflowNode, MaterialParameters) == 224, "Offset mismatch for FMaterialInterfaceSetTexture2DParameterDataflowNode::MaterialParameters");
static_assert(offsetof(FMaterialInterfaceSetTexture2DParameterDataflowNode, ParameterName) == 272, "Offset mismatch for FMaterialInterfaceSetTexture2DParameterDataflowNode::ParameterName");
static_assert(offsetof(FMaterialInterfaceSetTexture2DParameterDataflowNode, ParameterValue) == 288, "Offset mismatch for FMaterialInterfaceSetTexture2DParameterDataflowNode::ParameterValue");

// /Script/GeometryCollectionNodes.MaterialInterfaceSetVectorParameterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMaterialInterfaceSetVectorParameterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MaterialParameters[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ParameterName[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParameterValue[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMaterialInterfaceSetVectorParameterDataflowNode, MaterialParameters) == 224, "Offset mismatch for FMaterialInterfaceSetVectorParameterDataflowNode::MaterialParameters");
static_assert(offsetof(FMaterialInterfaceSetVectorParameterDataflowNode, ParameterName) == 272, "Offset mismatch for FMaterialInterfaceSetVectorParameterDataflowNode::ParameterName");
static_assert(offsetof(FMaterialInterfaceSetVectorParameterDataflowNode, ParameterValue) == 288, "Offset mismatch for FMaterialInterfaceSetVectorParameterDataflowNode::ParameterValue");

// /Script/GeometryCollectionNodes.MaterialInterfaceTerminalDataflowNode
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FMaterialInterfaceTerminalDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Material; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    FString AssetPath; // 0x00E8 (Size: 0x10, Type: StrProperty)
    std::uint8_t MaterialParameters[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMaterialInterfaceTerminalDataflowNode, Material) == 224, "Offset mismatch for FMaterialInterfaceTerminalDataflowNode::Material");
static_assert(offsetof(FMaterialInterfaceTerminalDataflowNode, AssetPath) == 232, "Offset mismatch for FMaterialInterfaceTerminalDataflowNode::AssetPath");
static_assert(offsetof(FMaterialInterfaceTerminalDataflowNode, MaterialParameters) == 248, "Offset mismatch for FMaterialInterfaceTerminalDataflowNode::MaterialParameters");

// /Script/GeometryCollectionNodes.MaterialInterfaceTextureOverrideDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMaterialInterfaceTextureOverrideDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Material; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* TargetTexture; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* OverrideTexture; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMaterialInterfaceTextureOverrideDataflowNode, Material) == 224, "Offset mismatch for FMaterialInterfaceTextureOverrideDataflowNode::Material");
static_assert(offsetof(FMaterialInterfaceTextureOverrideDataflowNode, TargetTexture) == 232, "Offset mismatch for FMaterialInterfaceTextureOverrideDataflowNode::TargetTexture");
static_assert(offsetof(FMaterialInterfaceTextureOverrideDataflowNode, OverrideTexture) == 240, "Offset mismatch for FMaterialInterfaceTextureOverrideDataflowNode::OverrideTexture");

// /Script/GeometryCollectionNodes.MaterialsInfoDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMaterialsInfoDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Materials; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    FString String; // 0x00F0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMaterialsInfoDataflowNode, Materials) == 224, "Offset mismatch for FMaterialsInfoDataflowNode::Materials");
static_assert(offsetof(FMaterialsInfoDataflowNode, String) == 240, "Offset mismatch for FMaterialsInfoDataflowNode::String");

// /Script/GeometryCollectionNodes.MathConstantsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMathConstantsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Constant; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMathConstantsDataflowNode, Constant) == 224, "Offset mismatch for FMathConstantsDataflowNode::Constant");
static_assert(offsetof(FMathConstantsDataflowNode, ReturnValue) == 228, "Offset mismatch for FMathConstantsDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.MathExpressionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMathExpressionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t C[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t D[0x8]; // 0x00F8 (Size: 0x8, Type: StructProperty)
    FString Expression; // 0x0100 (Size: 0x10, Type: StrProperty)
    std::uint8_t ReturnValue[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMathExpressionDataflowNode, A) == 224, "Offset mismatch for FMathExpressionDataflowNode::A");
static_assert(offsetof(FMathExpressionDataflowNode, B) == 232, "Offset mismatch for FMathExpressionDataflowNode::B");
static_assert(offsetof(FMathExpressionDataflowNode, C) == 240, "Offset mismatch for FMathExpressionDataflowNode::C");
static_assert(offsetof(FMathExpressionDataflowNode, D) == 248, "Offset mismatch for FMathExpressionDataflowNode::D");
static_assert(offsetof(FMathExpressionDataflowNode, Expression) == 256, "Offset mismatch for FMathExpressionDataflowNode::Expression");
static_assert(offsetof(FMathExpressionDataflowNode, ReturnValue) == 272, "Offset mismatch for FMathExpressionDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.Max3DataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMax3DataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float FloatA; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float FloatC; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMax3DataflowNode, FloatA) == 224, "Offset mismatch for FMax3DataflowNode::FloatA");
static_assert(offsetof(FMax3DataflowNode, FloatB) == 228, "Offset mismatch for FMax3DataflowNode::FloatB");
static_assert(offsetof(FMax3DataflowNode, FloatC) == 232, "Offset mismatch for FMax3DataflowNode::FloatC");
static_assert(offsetof(FMax3DataflowNode, ReturnValue) == 236, "Offset mismatch for FMax3DataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.MaxDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMaxDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float FloatA; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMaxDataflowNode, FloatA) == 224, "Offset mismatch for FMaxDataflowNode::FloatA");
static_assert(offsetof(FMaxDataflowNode, FloatB) == 228, "Offset mismatch for FMaxDataflowNode::FloatB");
static_assert(offsetof(FMaxDataflowNode, ReturnValue) == 232, "Offset mismatch for FMaxDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.MaxSettings
// Kind: ScriptStruct; super: none
struct FMaxSettings
{
public:
    float MaxAttrValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxColor[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMaxSettings, MaxAttrValue) == 0, "Offset mismatch for FMaxSettings::MaxAttrValue");
static_assert(offsetof(FMaxSettings, MaxColor) == 4, "Offset mismatch for FMaxSettings::MaxColor");

// /Script/GeometryCollectionNodes.MergeConvexHullsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMergeConvexHullsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SphereCovering[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::int32_t MaxConvexCount; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0134
    double ErrorTolerance; // 0x0138 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t OptionalSelectionFilter[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t MergeProximityFilter; // 0x0168 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0169
    float MergeProximityDistanceThreshold; // 0x016C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RequireNegativeSpaceCovering[0x20]; // 0x0170 (Size: 0x20, Type: StructProperty)
    std::uint8_t bProtectNegativeSpace; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComputeNegativeSpacePerBone; // 0x0191 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SampleMethod; // 0x0192 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRequireSearchSampleCoverage; // 0x0193 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyConnectedToHull; // 0x0194 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0195
    std::int32_t TargetNumSamples; // 0x0198 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x019C
    double MinSampleSpacing; // 0x01A0 (Size: 0x8, Type: DoubleProperty)
    double NegativeSpaceTolerance; // 0x01A8 (Size: 0x8, Type: DoubleProperty)
    double MinRadius; // 0x01B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DebugDrawRenderSettings[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRandomizeColor; // 0x01D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x01D1
    std::int32_t ColorRandomSeed; // 0x01D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t SphereCoveringDebugDrawRenderSettings[0x1]; // 0x01D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMergeConvexHullsDataflowNode, Collection) == 224, "Offset mismatch for FMergeConvexHullsDataflowNode::Collection");
static_assert(offsetof(FMergeConvexHullsDataflowNode, SphereCovering) == 272, "Offset mismatch for FMergeConvexHullsDataflowNode::SphereCovering");
static_assert(offsetof(FMergeConvexHullsDataflowNode, MaxConvexCount) == 304, "Offset mismatch for FMergeConvexHullsDataflowNode::MaxConvexCount");
static_assert(offsetof(FMergeConvexHullsDataflowNode, ErrorTolerance) == 312, "Offset mismatch for FMergeConvexHullsDataflowNode::ErrorTolerance");
static_assert(offsetof(FMergeConvexHullsDataflowNode, OptionalSelectionFilter) == 320, "Offset mismatch for FMergeConvexHullsDataflowNode::OptionalSelectionFilter");
static_assert(offsetof(FMergeConvexHullsDataflowNode, MergeProximityFilter) == 360, "Offset mismatch for FMergeConvexHullsDataflowNode::MergeProximityFilter");
static_assert(offsetof(FMergeConvexHullsDataflowNode, MergeProximityDistanceThreshold) == 364, "Offset mismatch for FMergeConvexHullsDataflowNode::MergeProximityDistanceThreshold");
static_assert(offsetof(FMergeConvexHullsDataflowNode, RequireNegativeSpaceCovering) == 368, "Offset mismatch for FMergeConvexHullsDataflowNode::RequireNegativeSpaceCovering");
static_assert(offsetof(FMergeConvexHullsDataflowNode, bProtectNegativeSpace) == 400, "Offset mismatch for FMergeConvexHullsDataflowNode::bProtectNegativeSpace");
static_assert(offsetof(FMergeConvexHullsDataflowNode, bComputeNegativeSpacePerBone) == 401, "Offset mismatch for FMergeConvexHullsDataflowNode::bComputeNegativeSpacePerBone");
static_assert(offsetof(FMergeConvexHullsDataflowNode, SampleMethod) == 402, "Offset mismatch for FMergeConvexHullsDataflowNode::SampleMethod");
static_assert(offsetof(FMergeConvexHullsDataflowNode, bRequireSearchSampleCoverage) == 403, "Offset mismatch for FMergeConvexHullsDataflowNode::bRequireSearchSampleCoverage");
static_assert(offsetof(FMergeConvexHullsDataflowNode, bOnlyConnectedToHull) == 404, "Offset mismatch for FMergeConvexHullsDataflowNode::bOnlyConnectedToHull");
static_assert(offsetof(FMergeConvexHullsDataflowNode, TargetNumSamples) == 408, "Offset mismatch for FMergeConvexHullsDataflowNode::TargetNumSamples");
static_assert(offsetof(FMergeConvexHullsDataflowNode, MinSampleSpacing) == 416, "Offset mismatch for FMergeConvexHullsDataflowNode::MinSampleSpacing");
static_assert(offsetof(FMergeConvexHullsDataflowNode, NegativeSpaceTolerance) == 424, "Offset mismatch for FMergeConvexHullsDataflowNode::NegativeSpaceTolerance");
static_assert(offsetof(FMergeConvexHullsDataflowNode, MinRadius) == 432, "Offset mismatch for FMergeConvexHullsDataflowNode::MinRadius");
static_assert(offsetof(FMergeConvexHullsDataflowNode, DebugDrawRenderSettings) == 440, "Offset mismatch for FMergeConvexHullsDataflowNode::DebugDrawRenderSettings");
static_assert(offsetof(FMergeConvexHullsDataflowNode, bRandomizeColor) == 464, "Offset mismatch for FMergeConvexHullsDataflowNode::bRandomizeColor");
static_assert(offsetof(FMergeConvexHullsDataflowNode, ColorRandomSeed) == 468, "Offset mismatch for FMergeConvexHullsDataflowNode::ColorRandomSeed");
static_assert(offsetof(FMergeConvexHullsDataflowNode, SphereCoveringDebugDrawRenderSettings) == 472, "Offset mismatch for FMergeConvexHullsDataflowNode::SphereCoveringDebugDrawRenderSettings");

// /Script/GeometryCollectionNodes.MergeInCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMergeInCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMergeInCollectionDataflowNode, Collection) == 224, "Offset mismatch for FMergeInCollectionDataflowNode::Collection");
static_assert(offsetof(FMergeInCollectionDataflowNode, TransformSelection) == 272, "Offset mismatch for FMergeInCollectionDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.MergeUVIslandsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMergeUVIslandsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FaceSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::int32_t UVChannel; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x013C
    double AreaDistortionThreshold; // 0x0140 (Size: 0x8, Type: DoubleProperty)
    double MaxNormalDeviationDeg; // 0x0148 (Size: 0x8, Type: DoubleProperty)
    std::int32_t NormalSmoothingRounds; // 0x0150 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0154
    double NormalSmoothingAlpha; // 0x0158 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FMergeUVIslandsDataflowNode, Collection) == 224, "Offset mismatch for FMergeUVIslandsDataflowNode::Collection");
static_assert(offsetof(FMergeUVIslandsDataflowNode, FaceSelection) == 272, "Offset mismatch for FMergeUVIslandsDataflowNode::FaceSelection");
static_assert(offsetof(FMergeUVIslandsDataflowNode, UVChannel) == 312, "Offset mismatch for FMergeUVIslandsDataflowNode::UVChannel");
static_assert(offsetof(FMergeUVIslandsDataflowNode, AreaDistortionThreshold) == 320, "Offset mismatch for FMergeUVIslandsDataflowNode::AreaDistortionThreshold");
static_assert(offsetof(FMergeUVIslandsDataflowNode, MaxNormalDeviationDeg) == 328, "Offset mismatch for FMergeUVIslandsDataflowNode::MaxNormalDeviationDeg");
static_assert(offsetof(FMergeUVIslandsDataflowNode, NormalSmoothingRounds) == 336, "Offset mismatch for FMergeUVIslandsDataflowNode::NormalSmoothingRounds");
static_assert(offsetof(FMergeUVIslandsDataflowNode, NormalSmoothingAlpha) == 344, "Offset mismatch for FMergeUVIslandsDataflowNode::NormalSmoothingAlpha");

// /Script/GeometryCollectionNodes.MeshAppendDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMeshAppendDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh1; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Mesh2; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Mesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMeshAppendDataflowNode, Mesh1) == 224, "Offset mismatch for FMeshAppendDataflowNode::Mesh1");
static_assert(offsetof(FMeshAppendDataflowNode, Mesh2) == 232, "Offset mismatch for FMeshAppendDataflowNode::Mesh2");
static_assert(offsetof(FMeshAppendDataflowNode, Mesh) == 240, "Offset mismatch for FMeshAppendDataflowNode::Mesh");

// /Script/GeometryCollectionNodes.MeshCopyToPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMeshCopyToPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Points; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* MeshToCopy; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    float Scale; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00FC
    void* Mesh; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Meshes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMeshCopyToPointsDataflowNode, Points) == 224, "Offset mismatch for FMeshCopyToPointsDataflowNode::Points");
static_assert(offsetof(FMeshCopyToPointsDataflowNode, MeshToCopy) == 240, "Offset mismatch for FMeshCopyToPointsDataflowNode::MeshToCopy");
static_assert(offsetof(FMeshCopyToPointsDataflowNode, Scale) == 248, "Offset mismatch for FMeshCopyToPointsDataflowNode::Scale");
static_assert(offsetof(FMeshCopyToPointsDataflowNode, Mesh) == 256, "Offset mismatch for FMeshCopyToPointsDataflowNode::Mesh");
static_assert(offsetof(FMeshCopyToPointsDataflowNode, Meshes) == 264, "Offset mismatch for FMeshCopyToPointsDataflowNode::Meshes");

// /Script/GeometryCollectionNodes.MeshCutterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMeshCutterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t BoundingBox[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0170 (Size: 0x60, Type: StructProperty)
    TArray<void*> CuttingDynamicMeshes; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    void* CuttingStaticMesh; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseHiRes; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01E9
    std::int32_t LODLevel; // 0x01EC (Size: 0x4, Type: IntProperty)
    std::uint8_t CutDistribution; // 0x01F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PerCutMeshSelection; // 0x01F1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x01F2
    std::int32_t NumberToScatter; // 0x01F4 (Size: 0x4, Type: IntProperty)
    std::int32_t GridX; // 0x01F8 (Size: 0x4, Type: IntProperty)
    std::int32_t GridY; // 0x01FC (Size: 0x4, Type: IntProperty)
    std::int32_t GridZ; // 0x0200 (Size: 0x4, Type: IntProperty)
    float Variability; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float MinScaleFactor; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float MaxScaleFactor; // 0x020C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRandomOrientation; // 0x0210 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0211
    float RollRange; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float PitchRange; // 0x0218 (Size: 0x4, Type: FloatProperty)
    float YawRange; // 0x021C (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x0220 (Size: 0x4, Type: IntProperty)
    float ChanceToFracture; // 0x0224 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SplitIslands; // 0x0228 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0229
    float CloseVertexDistance; // 0x022C (Size: 0x4, Type: FloatProperty)
    float VertexToSurfaceBridgeDistance; // 0x0230 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AddSamplesForCollision; // 0x0234 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0235
    float CollisionSampleSpacing; // 0x0238 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x023C
    std::uint8_t NewGeometryTransformSelection[0x1]; // 0x0240 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMeshCutterDataflowNode, Collection) == 224, "Offset mismatch for FMeshCutterDataflowNode::Collection");
static_assert(offsetof(FMeshCutterDataflowNode, BoundingBox) == 272, "Offset mismatch for FMeshCutterDataflowNode::BoundingBox");
static_assert(offsetof(FMeshCutterDataflowNode, TransformSelection) == 328, "Offset mismatch for FMeshCutterDataflowNode::TransformSelection");
static_assert(offsetof(FMeshCutterDataflowNode, Transform) == 368, "Offset mismatch for FMeshCutterDataflowNode::Transform");
static_assert(offsetof(FMeshCutterDataflowNode, CuttingDynamicMeshes) == 464, "Offset mismatch for FMeshCutterDataflowNode::CuttingDynamicMeshes");
static_assert(offsetof(FMeshCutterDataflowNode, CuttingStaticMesh) == 480, "Offset mismatch for FMeshCutterDataflowNode::CuttingStaticMesh");
static_assert(offsetof(FMeshCutterDataflowNode, bUseHiRes) == 488, "Offset mismatch for FMeshCutterDataflowNode::bUseHiRes");
static_assert(offsetof(FMeshCutterDataflowNode, LODLevel) == 492, "Offset mismatch for FMeshCutterDataflowNode::LODLevel");
static_assert(offsetof(FMeshCutterDataflowNode, CutDistribution) == 496, "Offset mismatch for FMeshCutterDataflowNode::CutDistribution");
static_assert(offsetof(FMeshCutterDataflowNode, PerCutMeshSelection) == 497, "Offset mismatch for FMeshCutterDataflowNode::PerCutMeshSelection");
static_assert(offsetof(FMeshCutterDataflowNode, NumberToScatter) == 500, "Offset mismatch for FMeshCutterDataflowNode::NumberToScatter");
static_assert(offsetof(FMeshCutterDataflowNode, GridX) == 504, "Offset mismatch for FMeshCutterDataflowNode::GridX");
static_assert(offsetof(FMeshCutterDataflowNode, GridY) == 508, "Offset mismatch for FMeshCutterDataflowNode::GridY");
static_assert(offsetof(FMeshCutterDataflowNode, GridZ) == 512, "Offset mismatch for FMeshCutterDataflowNode::GridZ");
static_assert(offsetof(FMeshCutterDataflowNode, Variability) == 516, "Offset mismatch for FMeshCutterDataflowNode::Variability");
static_assert(offsetof(FMeshCutterDataflowNode, MinScaleFactor) == 520, "Offset mismatch for FMeshCutterDataflowNode::MinScaleFactor");
static_assert(offsetof(FMeshCutterDataflowNode, MaxScaleFactor) == 524, "Offset mismatch for FMeshCutterDataflowNode::MaxScaleFactor");
static_assert(offsetof(FMeshCutterDataflowNode, bRandomOrientation) == 528, "Offset mismatch for FMeshCutterDataflowNode::bRandomOrientation");
static_assert(offsetof(FMeshCutterDataflowNode, RollRange) == 532, "Offset mismatch for FMeshCutterDataflowNode::RollRange");
static_assert(offsetof(FMeshCutterDataflowNode, PitchRange) == 536, "Offset mismatch for FMeshCutterDataflowNode::PitchRange");
static_assert(offsetof(FMeshCutterDataflowNode, YawRange) == 540, "Offset mismatch for FMeshCutterDataflowNode::YawRange");
static_assert(offsetof(FMeshCutterDataflowNode, RandomSeed) == 544, "Offset mismatch for FMeshCutterDataflowNode::RandomSeed");
static_assert(offsetof(FMeshCutterDataflowNode, ChanceToFracture) == 548, "Offset mismatch for FMeshCutterDataflowNode::ChanceToFracture");
static_assert(offsetof(FMeshCutterDataflowNode, SplitIslands) == 552, "Offset mismatch for FMeshCutterDataflowNode::SplitIslands");
static_assert(offsetof(FMeshCutterDataflowNode, CloseVertexDistance) == 556, "Offset mismatch for FMeshCutterDataflowNode::CloseVertexDistance");
static_assert(offsetof(FMeshCutterDataflowNode, VertexToSurfaceBridgeDistance) == 560, "Offset mismatch for FMeshCutterDataflowNode::VertexToSurfaceBridgeDistance");
static_assert(offsetof(FMeshCutterDataflowNode, AddSamplesForCollision) == 564, "Offset mismatch for FMeshCutterDataflowNode::AddSamplesForCollision");
static_assert(offsetof(FMeshCutterDataflowNode, CollisionSampleSpacing) == 568, "Offset mismatch for FMeshCutterDataflowNode::CollisionSampleSpacing");
static_assert(offsetof(FMeshCutterDataflowNode, NewGeometryTransformSelection) == 576, "Offset mismatch for FMeshCutterDataflowNode::NewGeometryTransformSelection");

// /Script/GeometryCollectionNodes.MeshInfoDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMeshInfoDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    FString InfoString; // 0x00E8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMeshInfoDataflowNode, Mesh) == 224, "Offset mismatch for FMeshInfoDataflowNode::Mesh");
static_assert(offsetof(FMeshInfoDataflowNode, InfoString) == 232, "Offset mismatch for FMeshInfoDataflowNode::InfoString");

// /Script/GeometryCollectionNodes.MeshMedialSkeletonSamplingDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMeshMedialSkeletonSamplingDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MedialSkeleton[0x40]; // 0x00E8 (Size: 0x40, Type: StructProperty)
    TArray<void*> MedialSpheres; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxSpheres; // 0x0138 (Size: 0x4, Type: IntProperty)
    float MinClusterErrorToSplit; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::int32_t MinClusterSizeToKeep; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSplitClustersIfEdgesIntersectSurface; // 0x0144 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0145
    float ErrorScaleNearEdgeSurfaceIntersection; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float PosErrorWt; // 0x014C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode, TargetMesh) == 224, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode::TargetMesh");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode, MedialSkeleton) == 232, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode::MedialSkeleton");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode, MedialSpheres) == 296, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode::MedialSpheres");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode, MaxSpheres) == 312, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode::MaxSpheres");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode, MinClusterErrorToSplit) == 316, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode::MinClusterErrorToSplit");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode, MinClusterSizeToKeep) == 320, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode::MinClusterSizeToKeep");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode, bSplitClustersIfEdgesIntersectSurface) == 324, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode::bSplitClustersIfEdgesIntersectSurface");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode, ErrorScaleNearEdgeSurfaceIntersection) == 328, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode::ErrorScaleNearEdgeSurfaceIntersection");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode, PosErrorWt) == 332, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode::PosErrorWt");

// /Script/GeometryCollectionNodes.MeshMedialSkeletonSamplingDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMeshMedialSkeletonSamplingDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MedialSkeleton[0x40]; // 0x00E8 (Size: 0x40, Type: StructProperty)
    TArray<void*> MedialSpheres; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxSpheres; // 0x0138 (Size: 0x4, Type: IntProperty)
    float MinClusterErrorToSplit; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::int32_t MinClusterSizeToKeep; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSplitClustersIfEdgesIntersectSurface; // 0x0144 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0145
    float ErrorScaleNearEdgeSurfaceIntersection; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float PosErrorWt; // 0x014C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode_v2, TargetMesh) == 224, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode_v2::TargetMesh");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode_v2, MedialSkeleton) == 232, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode_v2::MedialSkeleton");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode_v2, MedialSpheres) == 296, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode_v2::MedialSpheres");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode_v2, MaxSpheres) == 312, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode_v2::MaxSpheres");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode_v2, MinClusterErrorToSplit) == 316, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode_v2::MinClusterErrorToSplit");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode_v2, MinClusterSizeToKeep) == 320, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode_v2::MinClusterSizeToKeep");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode_v2, bSplitClustersIfEdgesIntersectSurface) == 324, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode_v2::bSplitClustersIfEdgesIntersectSurface");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode_v2, ErrorScaleNearEdgeSurfaceIntersection) == 328, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode_v2::ErrorScaleNearEdgeSurfaceIntersection");
static_assert(offsetof(FMeshMedialSkeletonSamplingDataflowNode_v2, PosErrorWt) == 332, "Offset mismatch for FMeshMedialSkeletonSamplingDataflowNode_v2::PosErrorWt");

// /Script/GeometryCollectionNodes.MeshProcessorDataflowNodeBase
// Kind: ScriptStruct; super: DataflowNode
struct FMeshProcessorDataflowNodeBase
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    void* MeshProcessor; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    void* MeshProcessorInstance; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00F8
    void* OwningObject; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DynamicConnections[0x40]; // 0x0108 (Size: 0x40, Type: StructProperty)
    std::uint8_t PropertyBag[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMeshProcessorDataflowNodeBase, MeshProcessor) == 232, "Offset mismatch for FMeshProcessorDataflowNodeBase::MeshProcessor");
static_assert(offsetof(FMeshProcessorDataflowNodeBase, MeshProcessorInstance) == 240, "Offset mismatch for FMeshProcessorDataflowNodeBase::MeshProcessorInstance");
static_assert(offsetof(FMeshProcessorDataflowNodeBase, OwningObject) == 256, "Offset mismatch for FMeshProcessorDataflowNodeBase::OwningObject");
static_assert(offsetof(FMeshProcessorDataflowNodeBase, DynamicConnections) == 264, "Offset mismatch for FMeshProcessorDataflowNodeBase::DynamicConnections");
static_assert(offsetof(FMeshProcessorDataflowNodeBase, PropertyBag) == 328, "Offset mismatch for FMeshProcessorDataflowNodeBase::PropertyBag");

// /Script/GeometryCollectionNodes.MeshToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMeshToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Collection[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSplitIslands; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConnectIslandsByVertexOverlap; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x011A
    float ConnectVerticesThreshold; // 0x011C (Size: 0x4, Type: FloatProperty)
    float VertexToSurfaceBridgeDistance; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAddClusterRootForSingleMesh; // 0x0124 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMeshToCollectionDataflowNode, Mesh) == 224, "Offset mismatch for FMeshToCollectionDataflowNode::Mesh");
static_assert(offsetof(FMeshToCollectionDataflowNode, Collection) == 232, "Offset mismatch for FMeshToCollectionDataflowNode::Collection");
static_assert(offsetof(FMeshToCollectionDataflowNode, bSplitIslands) == 280, "Offset mismatch for FMeshToCollectionDataflowNode::bSplitIslands");
static_assert(offsetof(FMeshToCollectionDataflowNode, bConnectIslandsByVertexOverlap) == 281, "Offset mismatch for FMeshToCollectionDataflowNode::bConnectIslandsByVertexOverlap");
static_assert(offsetof(FMeshToCollectionDataflowNode, ConnectVerticesThreshold) == 284, "Offset mismatch for FMeshToCollectionDataflowNode::ConnectVerticesThreshold");
static_assert(offsetof(FMeshToCollectionDataflowNode, VertexToSurfaceBridgeDistance) == 288, "Offset mismatch for FMeshToCollectionDataflowNode::VertexToSurfaceBridgeDistance");
static_assert(offsetof(FMeshToCollectionDataflowNode, bAddClusterRootForSingleMesh) == 292, "Offset mismatch for FMeshToCollectionDataflowNode::bAddClusterRootForSingleMesh");

// /Script/GeometryCollectionNodes.MeshToCollectionDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMeshToCollectionDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Collection[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSplitIslands; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConnectIslandsByVertexOverlap; // 0x0129 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x012A
    float ConnectVerticesThreshold; // 0x012C (Size: 0x4, Type: FloatProperty)
    float VertexToSurfaceBridgeDistance; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAddClusterRootForSingleMesh; // 0x0134 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMeshToCollectionDataflowNode_v2, Mesh) == 224, "Offset mismatch for FMeshToCollectionDataflowNode_v2::Mesh");
static_assert(offsetof(FMeshToCollectionDataflowNode_v2, Collection) == 232, "Offset mismatch for FMeshToCollectionDataflowNode_v2::Collection");
static_assert(offsetof(FMeshToCollectionDataflowNode_v2, Materials) == 280, "Offset mismatch for FMeshToCollectionDataflowNode_v2::Materials");
static_assert(offsetof(FMeshToCollectionDataflowNode_v2, bSplitIslands) == 296, "Offset mismatch for FMeshToCollectionDataflowNode_v2::bSplitIslands");
static_assert(offsetof(FMeshToCollectionDataflowNode_v2, bConnectIslandsByVertexOverlap) == 297, "Offset mismatch for FMeshToCollectionDataflowNode_v2::bConnectIslandsByVertexOverlap");
static_assert(offsetof(FMeshToCollectionDataflowNode_v2, ConnectVerticesThreshold) == 300, "Offset mismatch for FMeshToCollectionDataflowNode_v2::ConnectVerticesThreshold");
static_assert(offsetof(FMeshToCollectionDataflowNode_v2, VertexToSurfaceBridgeDistance) == 304, "Offset mismatch for FMeshToCollectionDataflowNode_v2::VertexToSurfaceBridgeDistance");
static_assert(offsetof(FMeshToCollectionDataflowNode_v2, bAddClusterRootForSingleMesh) == 308, "Offset mismatch for FMeshToCollectionDataflowNode_v2::bAddClusterRootForSingleMesh");

// /Script/GeometryCollectionNodes.MeshToOBJStringDebugDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMeshToOBJStringDebugDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInvertFaces; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    FString StringOBJ; // 0x00F0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMeshToOBJStringDebugDataflowNode, Mesh) == 224, "Offset mismatch for FMeshToOBJStringDebugDataflowNode::Mesh");
static_assert(offsetof(FMeshToOBJStringDebugDataflowNode, bInvertFaces) == 232, "Offset mismatch for FMeshToOBJStringDebugDataflowNode::bInvertFaces");
static_assert(offsetof(FMeshToOBJStringDebugDataflowNode, StringOBJ) == 240, "Offset mismatch for FMeshToOBJStringDebugDataflowNode::StringOBJ");

// /Script/GeometryCollectionNodes.MeshToSkeletalMeshTerminalNode
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FMeshToSkeletalMeshTerminalNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Materials; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    FString SkeletalMeshAssetPath; // 0x00F8 (Size: 0x10, Type: StrProperty)
    FString SkeletonAssetPath; // 0x0108 (Size: 0x10, Type: StrProperty)
    void* SkeletalMeshAsset; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* SkeletonAsset; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMeshToSkeletalMeshTerminalNode, Mesh) == 224, "Offset mismatch for FMeshToSkeletalMeshTerminalNode::Mesh");
static_assert(offsetof(FMeshToSkeletalMeshTerminalNode, Materials) == 232, "Offset mismatch for FMeshToSkeletalMeshTerminalNode::Materials");
static_assert(offsetof(FMeshToSkeletalMeshTerminalNode, SkeletalMeshAssetPath) == 248, "Offset mismatch for FMeshToSkeletalMeshTerminalNode::SkeletalMeshAssetPath");
static_assert(offsetof(FMeshToSkeletalMeshTerminalNode, SkeletonAssetPath) == 264, "Offset mismatch for FMeshToSkeletalMeshTerminalNode::SkeletonAssetPath");
static_assert(offsetof(FMeshToSkeletalMeshTerminalNode, SkeletalMeshAsset) == 280, "Offset mismatch for FMeshToSkeletalMeshTerminalNode::SkeletalMeshAsset");
static_assert(offsetof(FMeshToSkeletalMeshTerminalNode, SkeletonAsset) == 288, "Offset mismatch for FMeshToSkeletalMeshTerminalNode::SkeletonAsset");

// /Script/GeometryCollectionNodes.MeshToSkeletalMeshTerminalNode_v2
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FMeshToSkeletalMeshTerminalNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    FString SkeletalMeshAssetPath; // 0x00E8 (Size: 0x10, Type: StrProperty)
    FString SkeletonAssetPath; // 0x00F8 (Size: 0x10, Type: StrProperty)
    void* SkeletalMeshAsset; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* SkeletonAsset; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMeshToSkeletalMeshTerminalNode_v2, Mesh) == 224, "Offset mismatch for FMeshToSkeletalMeshTerminalNode_v2::Mesh");
static_assert(offsetof(FMeshToSkeletalMeshTerminalNode_v2, SkeletalMeshAssetPath) == 232, "Offset mismatch for FMeshToSkeletalMeshTerminalNode_v2::SkeletalMeshAssetPath");
static_assert(offsetof(FMeshToSkeletalMeshTerminalNode_v2, SkeletonAssetPath) == 248, "Offset mismatch for FMeshToSkeletalMeshTerminalNode_v2::SkeletonAssetPath");
static_assert(offsetof(FMeshToSkeletalMeshTerminalNode_v2, SkeletalMeshAsset) == 264, "Offset mismatch for FMeshToSkeletalMeshTerminalNode_v2::SkeletalMeshAsset");
static_assert(offsetof(FMeshToSkeletalMeshTerminalNode_v2, SkeletonAsset) == 272, "Offset mismatch for FMeshToSkeletalMeshTerminalNode_v2::SkeletonAsset");

// /Script/GeometryCollectionNodes.Min3DataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMin3DataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float FloatA; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float FloatC; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMin3DataflowNode, FloatA) == 224, "Offset mismatch for FMin3DataflowNode::FloatA");
static_assert(offsetof(FMin3DataflowNode, FloatB) == 228, "Offset mismatch for FMin3DataflowNode::FloatB");
static_assert(offsetof(FMin3DataflowNode, FloatC) == 232, "Offset mismatch for FMin3DataflowNode::FloatC");
static_assert(offsetof(FMin3DataflowNode, ReturnValue) == 236, "Offset mismatch for FMin3DataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.MinDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMinDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float FloatA; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMinDataflowNode, FloatA) == 224, "Offset mismatch for FMinDataflowNode::FloatA");
static_assert(offsetof(FMinDataflowNode, FloatB) == 228, "Offset mismatch for FMinDataflowNode::FloatB");
static_assert(offsetof(FMinDataflowNode, ReturnValue) == 232, "Offset mismatch for FMinDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.MinSettings
// Kind: ScriptStruct; super: none
struct FMinSettings
{
public:
    float MinAttrValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MinColor[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMinSettings, MinAttrValue) == 0, "Offset mismatch for FMinSettings::MinAttrValue");
static_assert(offsetof(FMinSettings, MinColor) == 4, "Offset mismatch for FMinSettings::MinColor");

// /Script/GeometryCollectionNodes.MultiplyDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMultiplyDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float FloatA; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMultiplyDataflowNode, FloatA) == 224, "Offset mismatch for FMultiplyDataflowNode::FloatA");
static_assert(offsetof(FMultiplyDataflowNode, FloatB) == 228, "Offset mismatch for FMultiplyDataflowNode::FloatB");
static_assert(offsetof(FMultiplyDataflowNode, ReturnValue) == 232, "Offset mismatch for FMultiplyDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.MultiplyTransformDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMultiplyTransformDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t InLeftTransform[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t InRightTransform[0x60]; // 0x0140 (Size: 0x60, Type: StructProperty)
    std::uint8_t OutTransform[0x1]; // 0x01A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMultiplyTransformDataflowNode, InLeftTransform) == 224, "Offset mismatch for FMultiplyTransformDataflowNode::InLeftTransform");
static_assert(offsetof(FMultiplyTransformDataflowNode, InRightTransform) == 320, "Offset mismatch for FMultiplyTransformDataflowNode::InRightTransform");
static_assert(offsetof(FMultiplyTransformDataflowNode, OutTransform) == 416, "Offset mismatch for FMultiplyTransformDataflowNode::OutTransform");

// /Script/GeometryCollectionNodes.NegateDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FNegateDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNegateDataflowNode, float_) == 224, "Offset mismatch for FNegateDataflowNode::float_");
static_assert(offsetof(FNegateDataflowNode, ReturnValue) == 228, "Offset mismatch for FNegateDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.NoiseFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FNoiseFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    float MinRange; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Transform[0x60]; // 0x0120 (Size: 0x60, Type: StructProperty)
    TArray<void*> FieldFloatResult; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePositions; // 0x01A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNoiseFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FNoiseFieldDataflowNode::SamplePositions");
static_assert(offsetof(FNoiseFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FNoiseFieldDataflowNode::SampleIndices");
static_assert(offsetof(FNoiseFieldDataflowNode, MinRange) == 280, "Offset mismatch for FNoiseFieldDataflowNode::MinRange");
static_assert(offsetof(FNoiseFieldDataflowNode, MaxRange) == 284, "Offset mismatch for FNoiseFieldDataflowNode::MaxRange");
static_assert(offsetof(FNoiseFieldDataflowNode, Transform) == 288, "Offset mismatch for FNoiseFieldDataflowNode::Transform");
static_assert(offsetof(FNoiseFieldDataflowNode, FieldFloatResult) == 384, "Offset mismatch for FNoiseFieldDataflowNode::FieldFloatResult");
static_assert(offsetof(FNoiseFieldDataflowNode, FieldRemap) == 400, "Offset mismatch for FNoiseFieldDataflowNode::FieldRemap");
static_assert(offsetof(FNoiseFieldDataflowNode, NumSamplePositions) == 416, "Offset mismatch for FNoiseFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.NonUniformPointSamplingDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FNonUniformPointSamplingDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    float SamplingRadius; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumSamples; // 0x00EC (Size: 0x4, Type: IntProperty)
    float SubSampleDensity; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x00F4 (Size: 0x4, Type: IntProperty)
    float MaxSamplingRadius; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SizeDistribution; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00FD
    float SizeDistributionPower; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0104
    TArray<void*> SamplePoints; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleRadii; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleTriangleIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleBarycentricCoords; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePoints; // 0x0148 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNonUniformPointSamplingDataflowNode, TargetMesh) == 224, "Offset mismatch for FNonUniformPointSamplingDataflowNode::TargetMesh");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, SamplingRadius) == 232, "Offset mismatch for FNonUniformPointSamplingDataflowNode::SamplingRadius");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, MaxNumSamples) == 236, "Offset mismatch for FNonUniformPointSamplingDataflowNode::MaxNumSamples");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, SubSampleDensity) == 240, "Offset mismatch for FNonUniformPointSamplingDataflowNode::SubSampleDensity");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, RandomSeed) == 244, "Offset mismatch for FNonUniformPointSamplingDataflowNode::RandomSeed");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, MaxSamplingRadius) == 248, "Offset mismatch for FNonUniformPointSamplingDataflowNode::MaxSamplingRadius");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, SizeDistribution) == 252, "Offset mismatch for FNonUniformPointSamplingDataflowNode::SizeDistribution");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, SizeDistributionPower) == 256, "Offset mismatch for FNonUniformPointSamplingDataflowNode::SizeDistributionPower");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, SamplePoints) == 264, "Offset mismatch for FNonUniformPointSamplingDataflowNode::SamplePoints");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, SampleRadii) == 280, "Offset mismatch for FNonUniformPointSamplingDataflowNode::SampleRadii");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, SampleTriangleIDs) == 296, "Offset mismatch for FNonUniformPointSamplingDataflowNode::SampleTriangleIDs");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, SampleBarycentricCoords) == 312, "Offset mismatch for FNonUniformPointSamplingDataflowNode::SampleBarycentricCoords");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode, NumSamplePoints) == 328, "Offset mismatch for FNonUniformPointSamplingDataflowNode::NumSamplePoints");

// /Script/GeometryCollectionNodes.NonUniformPointSamplingDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FNonUniformPointSamplingDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    float SamplingRadius; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumSamples; // 0x00EC (Size: 0x4, Type: IntProperty)
    float SubSampleDensity; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x00F4 (Size: 0x4, Type: IntProperty)
    float MaxSamplingRadius; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SizeDistribution; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00FD
    float SizeDistributionPower; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0104
    std::uint8_t SamplePoints[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    TArray<void*> SampleRadii; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleTriangleIDs; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleBarycentricCoords; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePoints; // 0x0168 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, TargetMesh) == 224, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::TargetMesh");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, SamplingRadius) == 232, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::SamplingRadius");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, MaxNumSamples) == 236, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::MaxNumSamples");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, SubSampleDensity) == 240, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::SubSampleDensity");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, RandomSeed) == 244, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::RandomSeed");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, MaxSamplingRadius) == 248, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::MaxSamplingRadius");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, SizeDistribution) == 252, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::SizeDistribution");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, SizeDistributionPower) == 256, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::SizeDistributionPower");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, SamplePoints) == 264, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::SamplePoints");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, SampleRadii) == 312, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::SampleRadii");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, SampleTriangleIDs) == 328, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::SampleTriangleIDs");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, SampleBarycentricCoords) == 344, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::SampleBarycentricCoords");
static_assert(offsetof(FNonUniformPointSamplingDataflowNode_v2, NumSamplePoints) == 360, "Offset mismatch for FNonUniformPointSamplingDataflowNode_v2::NumSamplePoints");

// /Script/GeometryCollectionNodes.NormalizeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FNormalizeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t VectorA[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    float Tolerance; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00FC
    std::uint8_t ReturnValue[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNormalizeDataflowNode, VectorA) == 224, "Offset mismatch for FNormalizeDataflowNode::VectorA");
static_assert(offsetof(FNormalizeDataflowNode, Tolerance) == 248, "Offset mismatch for FNormalizeDataflowNode::Tolerance");
static_assert(offsetof(FNormalizeDataflowNode, ReturnValue) == 256, "Offset mismatch for FNormalizeDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.NormalizeToRangeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FNormalizeToRangeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float RangeMin; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float RangeMax; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNormalizeToRangeDataflowNode, float_) == 224, "Offset mismatch for FNormalizeToRangeDataflowNode::float_");
static_assert(offsetof(FNormalizeToRangeDataflowNode, RangeMin) == 228, "Offset mismatch for FNormalizeToRangeDataflowNode::RangeMin");
static_assert(offsetof(FNormalizeToRangeDataflowNode, RangeMax) == 232, "Offset mismatch for FNormalizeToRangeDataflowNode::RangeMax");
static_assert(offsetof(FNormalizeToRangeDataflowNode, ReturnValue) == 236, "Offset mismatch for FNormalizeToRangeDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.OneMinusDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FOneMinusDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float A; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FOneMinusDataflowNode, A) == 224, "Offset mismatch for FOneMinusDataflowNode::A");
static_assert(offsetof(FOneMinusDataflowNode, ReturnValue) == 228, "Offset mismatch for FOneMinusDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.PlaneCutterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FPlaneCutterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t BoundingBox[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::int32_t NumPlanes; // 0x0170 (Size: 0x4, Type: IntProperty)
    float RandomSeed; // 0x0174 (Size: 0x4, Type: FloatProperty)
    float Grout; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float Amplitude; // 0x017C (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float Persistence; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float Lacunarity; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::int32_t OctaveNumber; // 0x018C (Size: 0x4, Type: IntProperty)
    float PointSpacing; // 0x0190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AddSamplesForCollision; // 0x0194 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0195
    float CollisionSampleSpacing; // 0x0198 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPlaneCutterDataflowNode, Collection) == 224, "Offset mismatch for FPlaneCutterDataflowNode::Collection");
static_assert(offsetof(FPlaneCutterDataflowNode, BoundingBox) == 272, "Offset mismatch for FPlaneCutterDataflowNode::BoundingBox");
static_assert(offsetof(FPlaneCutterDataflowNode, TransformSelection) == 328, "Offset mismatch for FPlaneCutterDataflowNode::TransformSelection");
static_assert(offsetof(FPlaneCutterDataflowNode, NumPlanes) == 368, "Offset mismatch for FPlaneCutterDataflowNode::NumPlanes");
static_assert(offsetof(FPlaneCutterDataflowNode, RandomSeed) == 372, "Offset mismatch for FPlaneCutterDataflowNode::RandomSeed");
static_assert(offsetof(FPlaneCutterDataflowNode, Grout) == 376, "Offset mismatch for FPlaneCutterDataflowNode::Grout");
static_assert(offsetof(FPlaneCutterDataflowNode, Amplitude) == 380, "Offset mismatch for FPlaneCutterDataflowNode::Amplitude");
static_assert(offsetof(FPlaneCutterDataflowNode, Frequency) == 384, "Offset mismatch for FPlaneCutterDataflowNode::Frequency");
static_assert(offsetof(FPlaneCutterDataflowNode, Persistence) == 388, "Offset mismatch for FPlaneCutterDataflowNode::Persistence");
static_assert(offsetof(FPlaneCutterDataflowNode, Lacunarity) == 392, "Offset mismatch for FPlaneCutterDataflowNode::Lacunarity");
static_assert(offsetof(FPlaneCutterDataflowNode, OctaveNumber) == 396, "Offset mismatch for FPlaneCutterDataflowNode::OctaveNumber");
static_assert(offsetof(FPlaneCutterDataflowNode, PointSpacing) == 400, "Offset mismatch for FPlaneCutterDataflowNode::PointSpacing");
static_assert(offsetof(FPlaneCutterDataflowNode, AddSamplesForCollision) == 404, "Offset mismatch for FPlaneCutterDataflowNode::AddSamplesForCollision");
static_assert(offsetof(FPlaneCutterDataflowNode, CollisionSampleSpacing) == 408, "Offset mismatch for FPlaneCutterDataflowNode::CollisionSampleSpacing");

// /Script/GeometryCollectionNodes.PlaneCutterDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FPlaneCutterDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t BoundingBox[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0170 (Size: 0x60, Type: StructProperty)
    TArray<void*> CutPlanes; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumPlanes; // 0x01E0 (Size: 0x4, Type: IntProperty)
    std::int32_t RandomSeed; // 0x01E4 (Size: 0x4, Type: IntProperty)
    float ChanceToFracture; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SplitIslands; // 0x01EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01ED
    float CloseVertexDistance; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float VertexToSurfaceBridgeDistance; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    float Grout; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float Amplitude; // 0x01FC (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float Persistence; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float Lacunarity; // 0x0208 (Size: 0x4, Type: FloatProperty)
    std::int32_t OctaveNumber; // 0x020C (Size: 0x4, Type: IntProperty)
    float PointSpacing; // 0x0210 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AddSamplesForCollision; // 0x0214 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0215
    float CollisionSampleSpacing; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RenderType; // 0x021C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x021D
    float PlaneSizeMultiplier; // 0x0220 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTranslucent; // 0x0224 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRandomizeColors; // 0x0225 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0226
    std::int32_t ColorRandomSeed; // 0x0228 (Size: 0x4, Type: IntProperty)
    float LineWidthMultiplier; // 0x022C (Size: 0x4, Type: FloatProperty)
    std::uint8_t NewGeometryTransformSelection[0x1]; // 0x0230 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlaneCutterDataflowNode_v2, Collection) == 224, "Offset mismatch for FPlaneCutterDataflowNode_v2::Collection");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, BoundingBox) == 272, "Offset mismatch for FPlaneCutterDataflowNode_v2::BoundingBox");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, TransformSelection) == 328, "Offset mismatch for FPlaneCutterDataflowNode_v2::TransformSelection");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, Transform) == 368, "Offset mismatch for FPlaneCutterDataflowNode_v2::Transform");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, CutPlanes) == 464, "Offset mismatch for FPlaneCutterDataflowNode_v2::CutPlanes");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, NumPlanes) == 480, "Offset mismatch for FPlaneCutterDataflowNode_v2::NumPlanes");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, RandomSeed) == 484, "Offset mismatch for FPlaneCutterDataflowNode_v2::RandomSeed");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, ChanceToFracture) == 488, "Offset mismatch for FPlaneCutterDataflowNode_v2::ChanceToFracture");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, SplitIslands) == 492, "Offset mismatch for FPlaneCutterDataflowNode_v2::SplitIslands");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, CloseVertexDistance) == 496, "Offset mismatch for FPlaneCutterDataflowNode_v2::CloseVertexDistance");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, VertexToSurfaceBridgeDistance) == 500, "Offset mismatch for FPlaneCutterDataflowNode_v2::VertexToSurfaceBridgeDistance");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, Grout) == 504, "Offset mismatch for FPlaneCutterDataflowNode_v2::Grout");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, Amplitude) == 508, "Offset mismatch for FPlaneCutterDataflowNode_v2::Amplitude");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, Frequency) == 512, "Offset mismatch for FPlaneCutterDataflowNode_v2::Frequency");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, Persistence) == 516, "Offset mismatch for FPlaneCutterDataflowNode_v2::Persistence");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, Lacunarity) == 520, "Offset mismatch for FPlaneCutterDataflowNode_v2::Lacunarity");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, OctaveNumber) == 524, "Offset mismatch for FPlaneCutterDataflowNode_v2::OctaveNumber");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, PointSpacing) == 528, "Offset mismatch for FPlaneCutterDataflowNode_v2::PointSpacing");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, AddSamplesForCollision) == 532, "Offset mismatch for FPlaneCutterDataflowNode_v2::AddSamplesForCollision");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, CollisionSampleSpacing) == 536, "Offset mismatch for FPlaneCutterDataflowNode_v2::CollisionSampleSpacing");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, RenderType) == 540, "Offset mismatch for FPlaneCutterDataflowNode_v2::RenderType");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, PlaneSizeMultiplier) == 544, "Offset mismatch for FPlaneCutterDataflowNode_v2::PlaneSizeMultiplier");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, bTranslucent) == 548, "Offset mismatch for FPlaneCutterDataflowNode_v2::bTranslucent");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, bRandomizeColors) == 549, "Offset mismatch for FPlaneCutterDataflowNode_v2::bRandomizeColors");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, ColorRandomSeed) == 552, "Offset mismatch for FPlaneCutterDataflowNode_v2::ColorRandomSeed");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, LineWidthMultiplier) == 556, "Offset mismatch for FPlaneCutterDataflowNode_v2::LineWidthMultiplier");
static_assert(offsetof(FPlaneCutterDataflowNode_v2, NewGeometryTransformSelection) == 560, "Offset mismatch for FPlaneCutterDataflowNode_v2::NewGeometryTransformSelection");

// /Script/GeometryCollectionNodes.PlaneFalloffFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FPlaneFalloffFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    float Distance; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x014C
    std::uint8_t Translation[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    float Magnitude; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float MinRange; // 0x016C (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x0170 (Size: 0x4, Type: FloatProperty)
    float Default; // 0x0174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FalloffType; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0179
    TArray<void*> FieldFloatResult; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FieldSelectionMask[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    std::int32_t NumSamplePositions; // 0x01C8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPlaneFalloffFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FPlaneFalloffFieldDataflowNode::SamplePositions");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FPlaneFalloffFieldDataflowNode::SampleIndices");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, Position) == 280, "Offset mismatch for FPlaneFalloffFieldDataflowNode::Position");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, Normal) == 304, "Offset mismatch for FPlaneFalloffFieldDataflowNode::Normal");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, Distance) == 328, "Offset mismatch for FPlaneFalloffFieldDataflowNode::Distance");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, Translation) == 336, "Offset mismatch for FPlaneFalloffFieldDataflowNode::Translation");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, Magnitude) == 360, "Offset mismatch for FPlaneFalloffFieldDataflowNode::Magnitude");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, MinRange) == 364, "Offset mismatch for FPlaneFalloffFieldDataflowNode::MinRange");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, MaxRange) == 368, "Offset mismatch for FPlaneFalloffFieldDataflowNode::MaxRange");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, Default) == 372, "Offset mismatch for FPlaneFalloffFieldDataflowNode::Default");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, FalloffType) == 376, "Offset mismatch for FPlaneFalloffFieldDataflowNode::FalloffType");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, FieldFloatResult) == 384, "Offset mismatch for FPlaneFalloffFieldDataflowNode::FieldFloatResult");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, FieldRemap) == 400, "Offset mismatch for FPlaneFalloffFieldDataflowNode::FieldRemap");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, FieldSelectionMask) == 416, "Offset mismatch for FPlaneFalloffFieldDataflowNode::FieldSelectionMask");
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, NumSamplePositions) == 456, "Offset mismatch for FPlaneFalloffFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.PointsToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FPointsToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Points; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPointsToCollectionDataflowNode, Collection) == 224, "Offset mismatch for FPointsToCollectionDataflowNode::Collection");
static_assert(offsetof(FPointsToCollectionDataflowNode, Points) == 272, "Offset mismatch for FPointsToCollectionDataflowNode::Points");

// /Script/GeometryCollectionNodes.PointsToMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FPointsToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Points; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* Mesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TriangleCount; // 0x00F8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPointsToMeshDataflowNode, Points) == 224, "Offset mismatch for FPointsToMeshDataflowNode::Points");
static_assert(offsetof(FPointsToMeshDataflowNode, Mesh) == 240, "Offset mismatch for FPointsToMeshDataflowNode::Mesh");
static_assert(offsetof(FPointsToMeshDataflowNode, TriangleCount) == 248, "Offset mismatch for FPointsToMeshDataflowNode::TriangleCount");

// /Script/GeometryCollectionNodes.PowDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FPowDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float base; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float exp; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPowDataflowNode, base) == 224, "Offset mismatch for FPowDataflowNode::base");
static_assert(offsetof(FPowDataflowNode, exp) == 228, "Offset mismatch for FPowDataflowNode::exp");
static_assert(offsetof(FPowDataflowNode, ReturnValue) == 232, "Offset mismatch for FPowDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.PrintStringDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FPrintStringDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bPrintToScreen; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintToLog; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00E2
    std::uint8_t Color[0x4]; // 0x00E4 (Size: 0x4, Type: StructProperty)
    float duration; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00EC
    FString String; // 0x00F0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPrintStringDataflowNode, bPrintToScreen) == 224, "Offset mismatch for FPrintStringDataflowNode::bPrintToScreen");
static_assert(offsetof(FPrintStringDataflowNode, bPrintToLog) == 225, "Offset mismatch for FPrintStringDataflowNode::bPrintToLog");
static_assert(offsetof(FPrintStringDataflowNode, Color) == 228, "Offset mismatch for FPrintStringDataflowNode::Color");
static_assert(offsetof(FPrintStringDataflowNode, duration) == 232, "Offset mismatch for FPrintStringDataflowNode::duration");
static_assert(offsetof(FPrintStringDataflowNode, String) == 240, "Offset mismatch for FPrintStringDataflowNode::String");

// /Script/GeometryCollectionNodes.ProximityDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FProximityDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t ProximityMethod; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float DistanceThreshold; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ContactThreshold; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FilterContactMethod; // 0x00EC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseAsConnectionGraph; // 0x00ED (Size: 0x1, Type: BoolProperty)
    std::uint8_t ContactAreaMethod; // 0x00EE (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRecomputeConvexHulls; // 0x00EF (Size: 0x1, Type: BoolProperty)
    std::uint8_t Collection[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProximityDataflowNode, ProximityMethod) == 224, "Offset mismatch for FProximityDataflowNode::ProximityMethod");
static_assert(offsetof(FProximityDataflowNode, DistanceThreshold) == 228, "Offset mismatch for FProximityDataflowNode::DistanceThreshold");
static_assert(offsetof(FProximityDataflowNode, ContactThreshold) == 232, "Offset mismatch for FProximityDataflowNode::ContactThreshold");
static_assert(offsetof(FProximityDataflowNode, FilterContactMethod) == 236, "Offset mismatch for FProximityDataflowNode::FilterContactMethod");
static_assert(offsetof(FProximityDataflowNode, bUseAsConnectionGraph) == 237, "Offset mismatch for FProximityDataflowNode::bUseAsConnectionGraph");
static_assert(offsetof(FProximityDataflowNode, ContactAreaMethod) == 238, "Offset mismatch for FProximityDataflowNode::ContactAreaMethod");
static_assert(offsetof(FProximityDataflowNode, bRecomputeConvexHulls) == 239, "Offset mismatch for FProximityDataflowNode::bRecomputeConvexHulls");
static_assert(offsetof(FProximityDataflowNode, Collection) == 240, "Offset mismatch for FProximityDataflowNode::Collection");

// /Script/GeometryCollectionNodes.PruneInCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FPruneInCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPruneInCollectionDataflowNode, Collection) == 224, "Offset mismatch for FPruneInCollectionDataflowNode::Collection");
static_assert(offsetof(FPruneInCollectionDataflowNode, TransformSelection) == 272, "Offset mismatch for FPruneInCollectionDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.RadialFalloffFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRadialFalloffFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Sphere[0x20]; // 0x0118 (Size: 0x20, Type: StructProperty)
    std::uint8_t Translation[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    float Magnitude; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float MinRange; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float Default; // 0x015C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FalloffType; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0161
    TArray<void*> FieldFloatResult; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FieldSelectionMask[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::int32_t NumSamplePositions; // 0x01B0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRadialFalloffFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FRadialFalloffFieldDataflowNode::SamplePositions");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FRadialFalloffFieldDataflowNode::SampleIndices");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, Sphere) == 280, "Offset mismatch for FRadialFalloffFieldDataflowNode::Sphere");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, Translation) == 312, "Offset mismatch for FRadialFalloffFieldDataflowNode::Translation");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, Magnitude) == 336, "Offset mismatch for FRadialFalloffFieldDataflowNode::Magnitude");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, MinRange) == 340, "Offset mismatch for FRadialFalloffFieldDataflowNode::MinRange");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, MaxRange) == 344, "Offset mismatch for FRadialFalloffFieldDataflowNode::MaxRange");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, Default) == 348, "Offset mismatch for FRadialFalloffFieldDataflowNode::Default");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, FalloffType) == 352, "Offset mismatch for FRadialFalloffFieldDataflowNode::FalloffType");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, FieldFloatResult) == 360, "Offset mismatch for FRadialFalloffFieldDataflowNode::FieldFloatResult");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, FieldRemap) == 376, "Offset mismatch for FRadialFalloffFieldDataflowNode::FieldRemap");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, FieldSelectionMask) == 392, "Offset mismatch for FRadialFalloffFieldDataflowNode::FieldSelectionMask");
static_assert(offsetof(FRadialFalloffFieldDataflowNode, NumSamplePositions) == 432, "Offset mismatch for FRadialFalloffFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.RadialIntMaskFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRadialIntMaskFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Sphere[0x20]; // 0x0118 (Size: 0x20, Type: StructProperty)
    std::uint8_t Translation[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::int32_t InteriorValue; // 0x0150 (Size: 0x4, Type: IntProperty)
    std::int32_t ExteriorValue; // 0x0154 (Size: 0x4, Type: IntProperty)
    std::uint8_t SetMaskConditionType; // 0x0158 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0159
    TArray<void*> FieldIntResult; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePositions; // 0x0180 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRadialIntMaskFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FRadialIntMaskFieldDataflowNode::SamplePositions");
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FRadialIntMaskFieldDataflowNode::SampleIndices");
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, Sphere) == 280, "Offset mismatch for FRadialIntMaskFieldDataflowNode::Sphere");
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, Translation) == 312, "Offset mismatch for FRadialIntMaskFieldDataflowNode::Translation");
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, InteriorValue) == 336, "Offset mismatch for FRadialIntMaskFieldDataflowNode::InteriorValue");
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, ExteriorValue) == 340, "Offset mismatch for FRadialIntMaskFieldDataflowNode::ExteriorValue");
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, SetMaskConditionType) == 344, "Offset mismatch for FRadialIntMaskFieldDataflowNode::SetMaskConditionType");
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, FieldIntResult) == 352, "Offset mismatch for FRadialIntMaskFieldDataflowNode::FieldIntResult");
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, FieldRemap) == 368, "Offset mismatch for FRadialIntMaskFieldDataflowNode::FieldRemap");
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, NumSamplePositions) == 384, "Offset mismatch for FRadialIntMaskFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.RadialScatterPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRadialScatterPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Center[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::int32_t AngularSteps; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::int32_t RadialSteps; // 0x0118 (Size: 0x4, Type: IntProperty)
    float AngleOffset; // 0x011C (Size: 0x4, Type: FloatProperty)
    float Variability; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float RandomSeed; // 0x0124 (Size: 0x4, Type: FloatProperty)
    TArray<void*> Points; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRadialScatterPointsDataflowNode, Center) == 224, "Offset mismatch for FRadialScatterPointsDataflowNode::Center");
static_assert(offsetof(FRadialScatterPointsDataflowNode, Normal) == 248, "Offset mismatch for FRadialScatterPointsDataflowNode::Normal");
static_assert(offsetof(FRadialScatterPointsDataflowNode, Radius) == 272, "Offset mismatch for FRadialScatterPointsDataflowNode::Radius");
static_assert(offsetof(FRadialScatterPointsDataflowNode, AngularSteps) == 276, "Offset mismatch for FRadialScatterPointsDataflowNode::AngularSteps");
static_assert(offsetof(FRadialScatterPointsDataflowNode, RadialSteps) == 280, "Offset mismatch for FRadialScatterPointsDataflowNode::RadialSteps");
static_assert(offsetof(FRadialScatterPointsDataflowNode, AngleOffset) == 284, "Offset mismatch for FRadialScatterPointsDataflowNode::AngleOffset");
static_assert(offsetof(FRadialScatterPointsDataflowNode, Variability) == 288, "Offset mismatch for FRadialScatterPointsDataflowNode::Variability");
static_assert(offsetof(FRadialScatterPointsDataflowNode, RandomSeed) == 292, "Offset mismatch for FRadialScatterPointsDataflowNode::RandomSeed");
static_assert(offsetof(FRadialScatterPointsDataflowNode, Points) == 296, "Offset mismatch for FRadialScatterPointsDataflowNode::Points");

// /Script/GeometryCollectionNodes.RadialScatterPointsDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FRadialScatterPointsDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t BoundingBox[0x38]; // 0x00E0 (Size: 0x38, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::int32_t RandomSeed; // 0x0148 (Size: 0x4, Type: IntProperty)
    std::int32_t AngularSteps; // 0x014C (Size: 0x4, Type: IntProperty)
    float AngleOffset; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float AngularNoise; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float Radius; // 0x0158 (Size: 0x4, Type: FloatProperty)
    std::int32_t RadialSteps; // 0x015C (Size: 0x4, Type: IntProperty)
    float RadialStepExponent; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float RadialMinStep; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float RadialNoise; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float RadialVariability; // 0x016C (Size: 0x4, Type: FloatProperty)
    float AngularVariability; // 0x0170 (Size: 0x4, Type: FloatProperty)
    float AxialVariability; // 0x0174 (Size: 0x4, Type: FloatProperty)
    TArray<void*> Points; // 0x0178 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, BoundingBox) == 224, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::BoundingBox");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, Center) == 280, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::Center");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, Normal) == 304, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::Normal");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, RandomSeed) == 328, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::RandomSeed");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, AngularSteps) == 332, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::AngularSteps");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, AngleOffset) == 336, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::AngleOffset");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, AngularNoise) == 340, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::AngularNoise");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, Radius) == 344, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::Radius");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, RadialSteps) == 348, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::RadialSteps");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, RadialStepExponent) == 352, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::RadialStepExponent");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, RadialMinStep) == 356, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::RadialMinStep");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, RadialNoise) == 360, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::RadialNoise");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, RadialVariability) == 364, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::RadialVariability");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, AngularVariability) == 368, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::AngularVariability");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, AxialVariability) == 372, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::AxialVariability");
static_assert(offsetof(FRadialScatterPointsDataflowNode_v2, Points) == 376, "Offset mismatch for FRadialScatterPointsDataflowNode_v2::Points");

// /Script/GeometryCollectionNodes.RadialVectorFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRadialVectorFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    float Magnitude; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    std::uint8_t Position[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    TArray<void*> FieldVectorResult; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePositions; // 0x0158 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRadialVectorFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FRadialVectorFieldDataflowNode::SamplePositions");
static_assert(offsetof(FRadialVectorFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FRadialVectorFieldDataflowNode::SampleIndices");
static_assert(offsetof(FRadialVectorFieldDataflowNode, Magnitude) == 280, "Offset mismatch for FRadialVectorFieldDataflowNode::Magnitude");
static_assert(offsetof(FRadialVectorFieldDataflowNode, Position) == 288, "Offset mismatch for FRadialVectorFieldDataflowNode::Position");
static_assert(offsetof(FRadialVectorFieldDataflowNode, FieldVectorResult) == 312, "Offset mismatch for FRadialVectorFieldDataflowNode::FieldVectorResult");
static_assert(offsetof(FRadialVectorFieldDataflowNode, FieldRemap) == 328, "Offset mismatch for FRadialVectorFieldDataflowNode::FieldRemap");
static_assert(offsetof(FRadialVectorFieldDataflowNode, NumSamplePositions) == 344, "Offset mismatch for FRadialVectorFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.RadiansToDegreesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRadiansToDegreesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Radians; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Degrees; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRadiansToDegreesDataflowNode, Radians) == 224, "Offset mismatch for FRadiansToDegreesDataflowNode::Radians");
static_assert(offsetof(FRadiansToDegreesDataflowNode, Degrees) == 228, "Offset mismatch for FRadiansToDegreesDataflowNode::Degrees");

// /Script/GeometryCollectionNodes.RandomFloatDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRandomFloatDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bDeterministic; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float RandomSeed; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRandomFloatDataflowNode, bDeterministic) == 224, "Offset mismatch for FRandomFloatDataflowNode::bDeterministic");
static_assert(offsetof(FRandomFloatDataflowNode, RandomSeed) == 228, "Offset mismatch for FRandomFloatDataflowNode::RandomSeed");
static_assert(offsetof(FRandomFloatDataflowNode, ReturnValue) == 232, "Offset mismatch for FRandomFloatDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.RandomFloatInRangeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRandomFloatInRangeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bDeterministic; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float RandomSeed; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float min; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float max; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00F0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRandomFloatInRangeDataflowNode, bDeterministic) == 224, "Offset mismatch for FRandomFloatInRangeDataflowNode::bDeterministic");
static_assert(offsetof(FRandomFloatInRangeDataflowNode, RandomSeed) == 228, "Offset mismatch for FRandomFloatInRangeDataflowNode::RandomSeed");
static_assert(offsetof(FRandomFloatInRangeDataflowNode, min) == 232, "Offset mismatch for FRandomFloatInRangeDataflowNode::min");
static_assert(offsetof(FRandomFloatInRangeDataflowNode, max) == 236, "Offset mismatch for FRandomFloatInRangeDataflowNode::max");
static_assert(offsetof(FRandomFloatInRangeDataflowNode, ReturnValue) == 240, "Offset mismatch for FRandomFloatInRangeDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.RandomUnitVectorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRandomUnitVectorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bDeterministic; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float RandomSeed; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ReturnValue[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRandomUnitVectorDataflowNode, bDeterministic) == 224, "Offset mismatch for FRandomUnitVectorDataflowNode::bDeterministic");
static_assert(offsetof(FRandomUnitVectorDataflowNode, RandomSeed) == 228, "Offset mismatch for FRandomUnitVectorDataflowNode::RandomSeed");
static_assert(offsetof(FRandomUnitVectorDataflowNode, ReturnValue) == 232, "Offset mismatch for FRandomUnitVectorDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRandomUnitVectorInConeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bDeterministic; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float RandomSeed; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ConeDirection[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    float ConeHalfAngle; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0104
    std::uint8_t ReturnValue[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRandomUnitVectorInConeDataflowNode, bDeterministic) == 224, "Offset mismatch for FRandomUnitVectorInConeDataflowNode::bDeterministic");
static_assert(offsetof(FRandomUnitVectorInConeDataflowNode, RandomSeed) == 228, "Offset mismatch for FRandomUnitVectorInConeDataflowNode::RandomSeed");
static_assert(offsetof(FRandomUnitVectorInConeDataflowNode, ConeDirection) == 232, "Offset mismatch for FRandomUnitVectorInConeDataflowNode::ConeDirection");
static_assert(offsetof(FRandomUnitVectorInConeDataflowNode, ConeHalfAngle) == 256, "Offset mismatch for FRandomUnitVectorInConeDataflowNode::ConeHalfAngle");
static_assert(offsetof(FRandomUnitVectorInConeDataflowNode, ReturnValue) == 264, "Offset mismatch for FRandomUnitVectorInConeDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.RandomVectorFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRandomVectorFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    float Magnitude; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    TArray<void*> FieldVectorResult; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePositions; // 0x0140 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRandomVectorFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FRandomVectorFieldDataflowNode::SamplePositions");
static_assert(offsetof(FRandomVectorFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FRandomVectorFieldDataflowNode::SampleIndices");
static_assert(offsetof(FRandomVectorFieldDataflowNode, Magnitude) == 280, "Offset mismatch for FRandomVectorFieldDataflowNode::Magnitude");
static_assert(offsetof(FRandomVectorFieldDataflowNode, FieldVectorResult) == 288, "Offset mismatch for FRandomVectorFieldDataflowNode::FieldVectorResult");
static_assert(offsetof(FRandomVectorFieldDataflowNode, FieldRemap) == 304, "Offset mismatch for FRandomVectorFieldDataflowNode::FieldRemap");
static_assert(offsetof(FRandomVectorFieldDataflowNode, NumSamplePositions) == 320, "Offset mismatch for FRandomVectorFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.RandomizeFloatArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRandomizeFloatArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> FloatArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    float RandomRangeMin; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float RandomRangeMax; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x00F8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRandomizeFloatArrayDataflowNode, FloatArray) == 224, "Offset mismatch for FRandomizeFloatArrayDataflowNode::FloatArray");
static_assert(offsetof(FRandomizeFloatArrayDataflowNode, RandomRangeMin) == 240, "Offset mismatch for FRandomizeFloatArrayDataflowNode::RandomRangeMin");
static_assert(offsetof(FRandomizeFloatArrayDataflowNode, RandomRangeMax) == 244, "Offset mismatch for FRandomizeFloatArrayDataflowNode::RandomRangeMax");
static_assert(offsetof(FRandomizeFloatArrayDataflowNode, RandomSeed) == 248, "Offset mismatch for FRandomizeFloatArrayDataflowNode::RandomSeed");

// /Script/GeometryCollectionNodes.ReAssignMaterialInCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FReAssignMaterialInCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FaceSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    TArray<void*> Materials; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    std::int32_t OutsideMaterialIdx; // 0x0148 (Size: 0x4, Type: IntProperty)
    std::int32_t InsideMaterialIdx; // 0x014C (Size: 0x4, Type: IntProperty)
    std::uint8_t bAssignOutsideMaterial; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAssignInsideMaterial; // 0x0151 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, Collection) == 224, "Offset mismatch for FReAssignMaterialInCollectionDataflowNode::Collection");
static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, FaceSelection) == 272, "Offset mismatch for FReAssignMaterialInCollectionDataflowNode::FaceSelection");
static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, Materials) == 312, "Offset mismatch for FReAssignMaterialInCollectionDataflowNode::Materials");
static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, OutsideMaterialIdx) == 328, "Offset mismatch for FReAssignMaterialInCollectionDataflowNode::OutsideMaterialIdx");
static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, InsideMaterialIdx) == 332, "Offset mismatch for FReAssignMaterialInCollectionDataflowNode::InsideMaterialIdx");
static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, bAssignOutsideMaterial) == 336, "Offset mismatch for FReAssignMaterialInCollectionDataflowNode::bAssignOutsideMaterial");
static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, bAssignInsideMaterial) == 337, "Offset mismatch for FReAssignMaterialInCollectionDataflowNode::bAssignInsideMaterial");

// /Script/GeometryCollectionNodes.RecomputeNormalsInGeometryCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRecomputeNormalsInGeometryCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t bOnlyTangents; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecomputeSharpEdges; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x013A
    float SharpEdgeAngleThreshold; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOnlyInternalSurfaces; // 0x0140 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRecomputeNormalsInGeometryCollectionDataflowNode, Collection) == 224, "Offset mismatch for FRecomputeNormalsInGeometryCollectionDataflowNode::Collection");
static_assert(offsetof(FRecomputeNormalsInGeometryCollectionDataflowNode, TransformSelection) == 272, "Offset mismatch for FRecomputeNormalsInGeometryCollectionDataflowNode::TransformSelection");
static_assert(offsetof(FRecomputeNormalsInGeometryCollectionDataflowNode, bOnlyTangents) == 312, "Offset mismatch for FRecomputeNormalsInGeometryCollectionDataflowNode::bOnlyTangents");
static_assert(offsetof(FRecomputeNormalsInGeometryCollectionDataflowNode, bRecomputeSharpEdges) == 313, "Offset mismatch for FRecomputeNormalsInGeometryCollectionDataflowNode::bRecomputeSharpEdges");
static_assert(offsetof(FRecomputeNormalsInGeometryCollectionDataflowNode, SharpEdgeAngleThreshold) == 316, "Offset mismatch for FRecomputeNormalsInGeometryCollectionDataflowNode::SharpEdgeAngleThreshold");
static_assert(offsetof(FRecomputeNormalsInGeometryCollectionDataflowNode, bOnlyInternalSurfaces) == 320, "Offset mismatch for FRecomputeNormalsInGeometryCollectionDataflowNode::bOnlyInternalSurfaces");

// /Script/GeometryCollectionNodes.RemoveFloatArrayElementDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRemoveFloatArrayElementDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Index; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPreserveOrder; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E5
    TArray<void*> FloatArray; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRemoveFloatArrayElementDataflowNode, Index) == 224, "Offset mismatch for FRemoveFloatArrayElementDataflowNode::Index");
static_assert(offsetof(FRemoveFloatArrayElementDataflowNode, bPreserveOrder) == 228, "Offset mismatch for FRemoveFloatArrayElementDataflowNode::bPreserveOrder");
static_assert(offsetof(FRemoveFloatArrayElementDataflowNode, FloatArray) == 232, "Offset mismatch for FRemoveFloatArrayElementDataflowNode::FloatArray");

// /Script/GeometryCollectionNodes.RemoveMeshOverlapsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRemoveMeshOverlapsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> DynamicMeshes; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerMeshTransforms; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SubtractOrder; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0101
    std::uint8_t bSimplifyNewMeshEdges; // 0x0104 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRemoveMeshOverlapsDataflowNode, DynamicMeshes) == 224, "Offset mismatch for FRemoveMeshOverlapsDataflowNode::DynamicMeshes");
static_assert(offsetof(FRemoveMeshOverlapsDataflowNode, PerMeshTransforms) == 240, "Offset mismatch for FRemoveMeshOverlapsDataflowNode::PerMeshTransforms");
static_assert(offsetof(FRemoveMeshOverlapsDataflowNode, SubtractOrder) == 256, "Offset mismatch for FRemoveMeshOverlapsDataflowNode::SubtractOrder");
static_assert(offsetof(FRemoveMeshOverlapsDataflowNode, bSimplifyNewMeshEdges) == 260, "Offset mismatch for FRemoveMeshOverlapsDataflowNode::bSimplifyNewMeshEdges");

// /Script/GeometryCollectionNodes.RemoveOnBreakDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRemoveOnBreakDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnabledRemoval; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0139
    std::uint8_t PostBreakTimer[0x8]; // 0x013C (Size: 0x8, Type: StructProperty)
    std::uint8_t RemovalTimer[0x8]; // 0x0144 (Size: 0x8, Type: StructProperty)
    std::uint8_t bClusterCrumbling; // 0x014C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRemoveOnBreakDataflowNode, Collection) == 224, "Offset mismatch for FRemoveOnBreakDataflowNode::Collection");
static_assert(offsetof(FRemoveOnBreakDataflowNode, TransformSelection) == 272, "Offset mismatch for FRemoveOnBreakDataflowNode::TransformSelection");
static_assert(offsetof(FRemoveOnBreakDataflowNode, bEnabledRemoval) == 312, "Offset mismatch for FRemoveOnBreakDataflowNode::bEnabledRemoval");
static_assert(offsetof(FRemoveOnBreakDataflowNode, PostBreakTimer) == 316, "Offset mismatch for FRemoveOnBreakDataflowNode::PostBreakTimer");
static_assert(offsetof(FRemoveOnBreakDataflowNode, RemovalTimer) == 324, "Offset mismatch for FRemoveOnBreakDataflowNode::RemovalTimer");
static_assert(offsetof(FRemoveOnBreakDataflowNode, bClusterCrumbling) == 332, "Offset mismatch for FRemoveOnBreakDataflowNode::bClusterCrumbling");

// /Script/GeometryCollectionNodes.ResampleGeometryCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FResampleGeometryCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t AddSamplesForCollision; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0139
    float CollisionSampleSpacing; // 0x013C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FResampleGeometryCollectionDataflowNode, Collection) == 224, "Offset mismatch for FResampleGeometryCollectionDataflowNode::Collection");
static_assert(offsetof(FResampleGeometryCollectionDataflowNode, TransformSelection) == 272, "Offset mismatch for FResampleGeometryCollectionDataflowNode::TransformSelection");
static_assert(offsetof(FResampleGeometryCollectionDataflowNode, AddSamplesForCollision) == 312, "Offset mismatch for FResampleGeometryCollectionDataflowNode::AddSamplesForCollision");
static_assert(offsetof(FResampleGeometryCollectionDataflowNode, CollisionSampleSpacing) == 316, "Offset mismatch for FResampleGeometryCollectionDataflowNode::CollisionSampleSpacing");

// /Script/GeometryCollectionNodes.RoundDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRoundDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRoundDataflowNode, float_) == 224, "Offset mismatch for FRoundDataflowNode::float_");
static_assert(offsetof(FRoundDataflowNode, ReturnValue) == 228, "Offset mismatch for FRoundDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.SafeDivideDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSafeDivideDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float FloatA; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSafeDivideDataflowNode, FloatA) == 224, "Offset mismatch for FSafeDivideDataflowNode::FloatA");
static_assert(offsetof(FSafeDivideDataflowNode, FloatB) == 228, "Offset mismatch for FSafeDivideDataflowNode::FloatB");
static_assert(offsetof(FSafeDivideDataflowNode, ReturnValue) == 232, "Offset mismatch for FSafeDivideDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.SafeReciprocalDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSafeReciprocalDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSafeReciprocalDataflowNode, float_) == 224, "Offset mismatch for FSafeReciprocalDataflowNode::float_");
static_assert(offsetof(FSafeReciprocalDataflowNode, ReturnValue) == 228, "Offset mismatch for FSafeReciprocalDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.ScaleVectorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FScaleVectorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Vector[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    float Scale; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00FC
    std::uint8_t ScaledVector[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScaleVectorDataflowNode, Vector) == 224, "Offset mismatch for FScaleVectorDataflowNode::Vector");
static_assert(offsetof(FScaleVectorDataflowNode, Scale) == 248, "Offset mismatch for FScaleVectorDataflowNode::Scale");
static_assert(offsetof(FScaleVectorDataflowNode, ScaledVector) == 256, "Offset mismatch for FScaleVectorDataflowNode::ScaledVector");

// /Script/GeometryCollectionNodes.SelectFloatArrayIndicesInRangeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSelectFloatArrayIndicesInRangeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Values; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    float min; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float max; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RangeSetting; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInclusive; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00FA
    TArray<void*> Indices; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSelectFloatArrayIndicesInRangeDataflowNode, Values) == 224, "Offset mismatch for FSelectFloatArrayIndicesInRangeDataflowNode::Values");
static_assert(offsetof(FSelectFloatArrayIndicesInRangeDataflowNode, min) == 240, "Offset mismatch for FSelectFloatArrayIndicesInRangeDataflowNode::min");
static_assert(offsetof(FSelectFloatArrayIndicesInRangeDataflowNode, max) == 244, "Offset mismatch for FSelectFloatArrayIndicesInRangeDataflowNode::max");
static_assert(offsetof(FSelectFloatArrayIndicesInRangeDataflowNode, RangeSetting) == 248, "Offset mismatch for FSelectFloatArrayIndicesInRangeDataflowNode::RangeSetting");
static_assert(offsetof(FSelectFloatArrayIndicesInRangeDataflowNode, bInclusive) == 249, "Offset mismatch for FSelectFloatArrayIndicesInRangeDataflowNode::bInclusive");
static_assert(offsetof(FSelectFloatArrayIndicesInRangeDataflowNode, Indices) == 256, "Offset mismatch for FSelectFloatArrayIndicesInRangeDataflowNode::Indices");

// /Script/GeometryCollectionNodes.SelectionToVertexListDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSelectionToVertexListDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t VertexSelection[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    TArray<void*> VertexList; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSelectionToVertexListDataflowNode, VertexSelection) == 224, "Offset mismatch for FSelectionToVertexListDataflowNode::VertexSelection");
static_assert(offsetof(FSelectionToVertexListDataflowNode, VertexList) == 264, "Offset mismatch for FSelectionToVertexListDataflowNode::VertexList");

// /Script/GeometryCollectionNodes.SetAnchorStateDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetAnchorStateDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t AnchorState; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetNotSelectedBonesToOppositeState; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00E2
    std::uint8_t Collection[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSetAnchorStateDataflowNode, AnchorState) == 224, "Offset mismatch for FSetAnchorStateDataflowNode::AnchorState");
static_assert(offsetof(FSetAnchorStateDataflowNode, bSetNotSelectedBonesToOppositeState) == 225, "Offset mismatch for FSetAnchorStateDataflowNode::bSetNotSelectedBonesToOppositeState");
static_assert(offsetof(FSetAnchorStateDataflowNode, Collection) == 232, "Offset mismatch for FSetAnchorStateDataflowNode::Collection");
static_assert(offsetof(FSetAnchorStateDataflowNode, TransformSelection) == 280, "Offset mismatch for FSetAnchorStateDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.SetCollectionAttributeDataTypedDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetCollectionAttributeDataTypedDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t AttributeKey[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t GroupName; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0131
    FString CustomGroupName; // 0x0138 (Size: 0x10, Type: StrProperty)
    FString AttrName; // 0x0148 (Size: 0x10, Type: StrProperty)
    TArray<void*> BoolAttributeData; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FloatAttributeData; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DoubleAttributeData; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Int32AttributeData; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StringAttributeData; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector3fAttributeData; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector3dAttributeData; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LinearColorAttributeData; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, Collection) == 224, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::Collection");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, AttributeKey) == 272, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::AttributeKey");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, GroupName) == 304, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::GroupName");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, CustomGroupName) == 312, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::CustomGroupName");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, AttrName) == 328, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::AttrName");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, BoolAttributeData) == 344, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::BoolAttributeData");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, FloatAttributeData) == 360, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::FloatAttributeData");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, DoubleAttributeData) == 376, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::DoubleAttributeData");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, Int32AttributeData) == 392, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::Int32AttributeData");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, StringAttributeData) == 408, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::StringAttributeData");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, Vector3fAttributeData) == 424, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::Vector3fAttributeData");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, Vector3dAttributeData) == 440, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::Vector3dAttributeData");
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, LinearColorAttributeData) == 456, "Offset mismatch for FSetCollectionAttributeDataTypedDataflowNode::LinearColorAttributeData");

// /Script/GeometryCollectionNodes.SetDynamicStateDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetDynamicStateDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t DynamicState; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t Collection[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSetDynamicStateDataflowNode, DynamicState) == 224, "Offset mismatch for FSetDynamicStateDataflowNode::DynamicState");
static_assert(offsetof(FSetDynamicStateDataflowNode, Collection) == 232, "Offset mismatch for FSetDynamicStateDataflowNode::Collection");
static_assert(offsetof(FSetDynamicStateDataflowNode, TransformSelection) == 280, "Offset mismatch for FSetDynamicStateDataflowNode::TransformSelection");

// /Script/GeometryCollectionNodes.SetExternalCollisionsFromPrimitiveDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetExternalCollisionsFromPrimitiveDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t OptionalSelectionFilter[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Shape; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0139
    float Scale; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAlignToPrincipalAxis; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0141
    std::uint8_t DebugDrawRenderSettings[0x1]; // 0x0144 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSetExternalCollisionsFromPrimitiveDataflowNode, Collection) == 224, "Offset mismatch for FSetExternalCollisionsFromPrimitiveDataflowNode::Collection");
static_assert(offsetof(FSetExternalCollisionsFromPrimitiveDataflowNode, OptionalSelectionFilter) == 272, "Offset mismatch for FSetExternalCollisionsFromPrimitiveDataflowNode::OptionalSelectionFilter");
static_assert(offsetof(FSetExternalCollisionsFromPrimitiveDataflowNode, Shape) == 312, "Offset mismatch for FSetExternalCollisionsFromPrimitiveDataflowNode::Shape");
static_assert(offsetof(FSetExternalCollisionsFromPrimitiveDataflowNode, Scale) == 316, "Offset mismatch for FSetExternalCollisionsFromPrimitiveDataflowNode::Scale");
static_assert(offsetof(FSetExternalCollisionsFromPrimitiveDataflowNode, bAlignToPrincipalAxis) == 320, "Offset mismatch for FSetExternalCollisionsFromPrimitiveDataflowNode::bAlignToPrincipalAxis");
static_assert(offsetof(FSetExternalCollisionsFromPrimitiveDataflowNode, DebugDrawRenderSettings) == 324, "Offset mismatch for FSetExternalCollisionsFromPrimitiveDataflowNode::DebugDrawRenderSettings");

// /Script/GeometryCollectionNodes.SetFloatAttributeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetFloatAttributeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString Attribute; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t Method; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0121
    std::int32_t RandomSeed; // 0x0124 (Size: 0x4, Type: IntProperty)
    float NoiseScale; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x012C
    TArray<void*> FloatArray; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSetFloatAttributeDataflowNode, Collection) == 224, "Offset mismatch for FSetFloatAttributeDataflowNode::Collection");
static_assert(offsetof(FSetFloatAttributeDataflowNode, Attribute) == 272, "Offset mismatch for FSetFloatAttributeDataflowNode::Attribute");
static_assert(offsetof(FSetFloatAttributeDataflowNode, Method) == 288, "Offset mismatch for FSetFloatAttributeDataflowNode::Method");
static_assert(offsetof(FSetFloatAttributeDataflowNode, RandomSeed) == 292, "Offset mismatch for FSetFloatAttributeDataflowNode::RandomSeed");
static_assert(offsetof(FSetFloatAttributeDataflowNode, NoiseScale) == 296, "Offset mismatch for FSetFloatAttributeDataflowNode::NoiseScale");
static_assert(offsetof(FSetFloatAttributeDataflowNode, FloatArray) == 304, "Offset mismatch for FSetFloatAttributeDataflowNode::FloatArray");

// /Script/GeometryCollectionNodes.SetIntoMaterialInterfaceArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetIntoMaterialInterfaceArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> MaterialArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* Material; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Index; // 0x00F8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSetIntoMaterialInterfaceArrayDataflowNode, MaterialArray) == 224, "Offset mismatch for FSetIntoMaterialInterfaceArrayDataflowNode::MaterialArray");
static_assert(offsetof(FSetIntoMaterialInterfaceArrayDataflowNode, Material) == 240, "Offset mismatch for FSetIntoMaterialInterfaceArrayDataflowNode::Material");
static_assert(offsetof(FSetIntoMaterialInterfaceArrayDataflowNode, Index) == 248, "Offset mismatch for FSetIntoMaterialInterfaceArrayDataflowNode::Index");

// /Script/GeometryCollectionNodes.SetMaterialInMaterialsArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetMaterialInMaterialsArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Materials; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* Material; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Operation; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F9
    std::int32_t MaterialIdx; // 0x00FC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSetMaterialInMaterialsArrayDataflowNode, Materials) == 224, "Offset mismatch for FSetMaterialInMaterialsArrayDataflowNode::Materials");
static_assert(offsetof(FSetMaterialInMaterialsArrayDataflowNode, Material) == 240, "Offset mismatch for FSetMaterialInMaterialsArrayDataflowNode::Material");
static_assert(offsetof(FSetMaterialInMaterialsArrayDataflowNode, Operation) == 248, "Offset mismatch for FSetMaterialInMaterialsArrayDataflowNode::Operation");
static_assert(offsetof(FSetMaterialInMaterialsArrayDataflowNode, MaterialIdx) == 252, "Offset mismatch for FSetMaterialInMaterialsArrayDataflowNode::MaterialIdx");

// /Script/GeometryCollectionNodes.SetVertexColorFromFloatArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetVertexColorFromFloatArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> FloatArray; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bNormalizeInput; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0121
    std::uint8_t Color[0x1]; // 0x0124 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSetVertexColorFromFloatArrayDataflowNode, Collection) == 224, "Offset mismatch for FSetVertexColorFromFloatArrayDataflowNode::Collection");
static_assert(offsetof(FSetVertexColorFromFloatArrayDataflowNode, FloatArray) == 272, "Offset mismatch for FSetVertexColorFromFloatArrayDataflowNode::FloatArray");
static_assert(offsetof(FSetVertexColorFromFloatArrayDataflowNode, bNormalizeInput) == 288, "Offset mismatch for FSetVertexColorFromFloatArrayDataflowNode::bNormalizeInput");
static_assert(offsetof(FSetVertexColorFromFloatArrayDataflowNode, Color) == 292, "Offset mismatch for FSetVertexColorFromFloatArrayDataflowNode::Color");

// /Script/GeometryCollectionNodes.SetVertexColorFromVertexIndicesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetVertexColorFromVertexIndicesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> VertexIndicesIn; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SelectedColor[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSetVertexColorFromVertexIndicesDataflowNode, Collection) == 224, "Offset mismatch for FSetVertexColorFromVertexIndicesDataflowNode::Collection");
static_assert(offsetof(FSetVertexColorFromVertexIndicesDataflowNode, VertexIndicesIn) == 272, "Offset mismatch for FSetVertexColorFromVertexIndicesDataflowNode::VertexIndicesIn");
static_assert(offsetof(FSetVertexColorFromVertexIndicesDataflowNode, SelectedColor) == 288, "Offset mismatch for FSetVertexColorFromVertexIndicesDataflowNode::SelectedColor");

// /Script/GeometryCollectionNodes.SetVertexColorFromVertexSelectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetVertexColorFromVertexSelectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t VertexSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t SelectedColor[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSetVertexColorFromVertexSelectionDataflowNode, Collection) == 224, "Offset mismatch for FSetVertexColorFromVertexSelectionDataflowNode::Collection");
static_assert(offsetof(FSetVertexColorFromVertexSelectionDataflowNode, VertexSelection) == 272, "Offset mismatch for FSetVertexColorFromVertexSelectionDataflowNode::VertexSelection");
static_assert(offsetof(FSetVertexColorFromVertexSelectionDataflowNode, SelectedColor) == 312, "Offset mismatch for FSetVertexColorFromVertexSelectionDataflowNode::SelectedColor");

// /Script/GeometryCollectionNodes.SetVisibilityInCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetVisibilityInCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Visibility; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t Collection[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t FaceSelection[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSetVisibilityInCollectionDataflowNode, Visibility) == 224, "Offset mismatch for FSetVisibilityInCollectionDataflowNode::Visibility");
static_assert(offsetof(FSetVisibilityInCollectionDataflowNode, Collection) == 232, "Offset mismatch for FSetVisibilityInCollectionDataflowNode::Collection");
static_assert(offsetof(FSetVisibilityInCollectionDataflowNode, TransformSelection) == 280, "Offset mismatch for FSetVisibilityInCollectionDataflowNode::TransformSelection");
static_assert(offsetof(FSetVisibilityInCollectionDataflowNode, FaceSelection) == 320, "Offset mismatch for FSetVisibilityInCollectionDataflowNode::FaceSelection");

// /Script/GeometryCollectionNodes.SignDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSignDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSignDataflowNode, float_) == 224, "Offset mismatch for FSignDataflowNode::float_");
static_assert(offsetof(FSignDataflowNode, ReturnValue) == 228, "Offset mismatch for FSignDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.SimplifyConvexHullsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSimplifyConvexHullsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t OptionalSelectionFilter[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t SimplifyMethod; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0139
    float SimplificationAngleThreshold; // 0x013C (Size: 0x4, Type: FloatProperty)
    float SimplificationDistanceThreshold; // 0x0140 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinTargetTriangleCount; // 0x0144 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseExistingVertices; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0149
    std::uint8_t DebugDrawRenderSettings[0x18]; // 0x014C (Size: 0x18, Type: StructProperty)
    std::uint8_t bRandomizeColor; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0165
    std::int32_t ColorRandomSeed; // 0x0168 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSimplifyConvexHullsDataflowNode, Collection) == 224, "Offset mismatch for FSimplifyConvexHullsDataflowNode::Collection");
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, OptionalSelectionFilter) == 272, "Offset mismatch for FSimplifyConvexHullsDataflowNode::OptionalSelectionFilter");
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, SimplifyMethod) == 312, "Offset mismatch for FSimplifyConvexHullsDataflowNode::SimplifyMethod");
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, SimplificationAngleThreshold) == 316, "Offset mismatch for FSimplifyConvexHullsDataflowNode::SimplificationAngleThreshold");
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, SimplificationDistanceThreshold) == 320, "Offset mismatch for FSimplifyConvexHullsDataflowNode::SimplificationDistanceThreshold");
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, MinTargetTriangleCount) == 324, "Offset mismatch for FSimplifyConvexHullsDataflowNode::MinTargetTriangleCount");
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, bUseExistingVertices) == 328, "Offset mismatch for FSimplifyConvexHullsDataflowNode::bUseExistingVertices");
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, DebugDrawRenderSettings) == 332, "Offset mismatch for FSimplifyConvexHullsDataflowNode::DebugDrawRenderSettings");
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, bRandomizeColor) == 356, "Offset mismatch for FSimplifyConvexHullsDataflowNode::bRandomizeColor");
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, ColorRandomSeed) == 360, "Offset mismatch for FSimplifyConvexHullsDataflowNode::ColorRandomSeed");

// /Script/GeometryCollectionNodes.SimplifyMedialSkeletonDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSimplifyMedialSkeletonDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MedialSkeleton[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    void* TargetMesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MedialSpheres; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MinSpheres; // 0x0138 (Size: 0x4, Type: IntProperty)
    float QEMErrorThresholdSqrt; // 0x013C (Size: 0x4, Type: FloatProperty)
    float EdgeLengthThreshold; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float SphereRadiusThreshold; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float SphereOverlapThreshold; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOnlySimplifySurfaces; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x014D
    float ClusterSkeletonDistanceWt; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreventEdgeSurfaceIntersections; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0155
    std::uint8_t bSplitThinTriEdges; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x015D
    float SplitThinTriEdgeAngleThresholdDeg; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float SplitThinTriEdgePosErrorWt; // 0x0164 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, MedialSkeleton) == 224, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::MedialSkeleton");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, TargetMesh) == 288, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::TargetMesh");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, MedialSpheres) == 296, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::MedialSpheres");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, MinSpheres) == 312, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::MinSpheres");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, QEMErrorThresholdSqrt) == 316, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::QEMErrorThresholdSqrt");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, EdgeLengthThreshold) == 320, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::EdgeLengthThreshold");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, SphereRadiusThreshold) == 324, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::SphereRadiusThreshold");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, SphereOverlapThreshold) == 328, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::SphereOverlapThreshold");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, bOnlySimplifySurfaces) == 332, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::bOnlySimplifySurfaces");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, ClusterSkeletonDistanceWt) == 336, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::ClusterSkeletonDistanceWt");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, bPreventEdgeSurfaceIntersections) == 340, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::bPreventEdgeSurfaceIntersections");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, bSplitThinTriEdges) == 348, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::bSplitThinTriEdges");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, SplitThinTriEdgeAngleThresholdDeg) == 352, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::SplitThinTriEdgeAngleThresholdDeg");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode, SplitThinTriEdgePosErrorWt) == 356, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode::SplitThinTriEdgePosErrorWt");

// /Script/GeometryCollectionNodes.SimplifyMedialSkeletonDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FSimplifyMedialSkeletonDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MedialSkeleton[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    void* TargetMesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MedialSpheres; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MinSpheres; // 0x0138 (Size: 0x4, Type: IntProperty)
    float QEMErrorThresholdSqrt; // 0x013C (Size: 0x4, Type: FloatProperty)
    float EdgeLengthThreshold; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float SphereRadiusThreshold; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float SphereOverlapThreshold; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOnlySimplifySurfaces; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x014D
    float ClusterSkeletonDistanceWt; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreventEdgeSurfaceIntersections; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0155
    std::uint8_t bSplitThinTriEdges; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x015D
    float SplitThinTriEdgeAngleThresholdDeg; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float SplitThinTriEdgePosErrorWt; // 0x0164 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, MedialSkeleton) == 224, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::MedialSkeleton");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, TargetMesh) == 288, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::TargetMesh");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, MedialSpheres) == 296, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::MedialSpheres");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, MinSpheres) == 312, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::MinSpheres");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, QEMErrorThresholdSqrt) == 316, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::QEMErrorThresholdSqrt");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, EdgeLengthThreshold) == 320, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::EdgeLengthThreshold");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, SphereRadiusThreshold) == 324, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::SphereRadiusThreshold");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, SphereOverlapThreshold) == 328, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::SphereOverlapThreshold");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, bOnlySimplifySurfaces) == 332, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::bOnlySimplifySurfaces");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, ClusterSkeletonDistanceWt) == 336, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::ClusterSkeletonDistanceWt");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, bPreventEdgeSurfaceIntersections) == 340, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::bPreventEdgeSurfaceIntersections");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, bSplitThinTriEdges) == 348, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::bSplitThinTriEdges");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, SplitThinTriEdgeAngleThresholdDeg) == 352, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::SplitThinTriEdgeAngleThresholdDeg");
static_assert(offsetof(FSimplifyMedialSkeletonDataflowNode_v2, SplitThinTriEdgePosErrorWt) == 356, "Offset mismatch for FSimplifyMedialSkeletonDataflowNode_v2::SplitThinTriEdgePosErrorWt");

// /Script/GeometryCollectionNodes.SinDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSinDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSinDataflowNode, float_) == 224, "Offset mismatch for FSinDataflowNode::float_");
static_assert(offsetof(FSinDataflowNode, ReturnValue) == 228, "Offset mismatch for FSinDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.SkeletalMeshTerminalNode
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FSkeletalMeshTerminalNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    FString AssetPath; // 0x00E8 (Size: 0x10, Type: StrProperty)
    void* SkeletalMeshAsset; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSkeletalMeshTerminalNode, Mesh) == 224, "Offset mismatch for FSkeletalMeshTerminalNode::Mesh");
static_assert(offsetof(FSkeletalMeshTerminalNode, AssetPath) == 232, "Offset mismatch for FSkeletalMeshTerminalNode::AssetPath");
static_assert(offsetof(FSkeletalMeshTerminalNode, SkeletalMeshAsset) == 248, "Offset mismatch for FSkeletalMeshTerminalNode::SkeletalMeshAsset");

// /Script/GeometryCollectionNodes.SkeletalMeshToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSkeletalMeshToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SkeletalMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Collection[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bImportTransformOnly; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSkeletalMeshToCollectionDataflowNode, SkeletalMesh) == 224, "Offset mismatch for FSkeletalMeshToCollectionDataflowNode::SkeletalMesh");
static_assert(offsetof(FSkeletalMeshToCollectionDataflowNode, Collection) == 232, "Offset mismatch for FSkeletalMeshToCollectionDataflowNode::Collection");
static_assert(offsetof(FSkeletalMeshToCollectionDataflowNode, bImportTransformOnly) == 280, "Offset mismatch for FSkeletalMeshToCollectionDataflowNode::bImportTransformOnly");

// /Script/GeometryCollectionNodes.SkeletonToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSkeletonToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* skeleton; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Collection[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSkeletonToCollectionDataflowNode, skeleton) == 224, "Offset mismatch for FSkeletonToCollectionDataflowNode::skeleton");
static_assert(offsetof(FSkeletonToCollectionDataflowNode, Collection) == 232, "Offset mismatch for FSkeletonToCollectionDataflowNode::Collection");

// /Script/GeometryCollectionNodes.SkinMeshViaMedialSkeleton
// Kind: ScriptStruct; super: DataflowNode
struct FSkinMeshViaMedialSkeleton
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MedialSkeleton[0x40]; // 0x00E8 (Size: 0x40, Type: StructProperty)
    std::uint8_t EdgeWeightMethod; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MergeDisconnectedMethod; // 0x0129 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SelectRootMethod; // 0x012A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x012B
    std::uint8_t RootSelectionPoint[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t RootSelectionDirection[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::int32_t RootClusterIndex; // 0x0160 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAddCustomAnimationRoot; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0165
    std::uint8_t CustomAnimationRootPosition[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t BindMethod; // 0x0180 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0181
    float Stiffness; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxInfluences; // 0x0188 (Size: 0x4, Type: IntProperty)
    std::int32_t VoxelResolution; // 0x018C (Size: 0x4, Type: IntProperty)
    std::int32_t ClusterNeighborSearchRange; // 0x0190 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSkinMeshViaMedialSkeleton, Mesh) == 224, "Offset mismatch for FSkinMeshViaMedialSkeleton::Mesh");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, MedialSkeleton) == 232, "Offset mismatch for FSkinMeshViaMedialSkeleton::MedialSkeleton");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, EdgeWeightMethod) == 296, "Offset mismatch for FSkinMeshViaMedialSkeleton::EdgeWeightMethod");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, MergeDisconnectedMethod) == 297, "Offset mismatch for FSkinMeshViaMedialSkeleton::MergeDisconnectedMethod");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, SelectRootMethod) == 298, "Offset mismatch for FSkinMeshViaMedialSkeleton::SelectRootMethod");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, RootSelectionPoint) == 304, "Offset mismatch for FSkinMeshViaMedialSkeleton::RootSelectionPoint");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, RootSelectionDirection) == 328, "Offset mismatch for FSkinMeshViaMedialSkeleton::RootSelectionDirection");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, RootClusterIndex) == 352, "Offset mismatch for FSkinMeshViaMedialSkeleton::RootClusterIndex");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, bAddCustomAnimationRoot) == 356, "Offset mismatch for FSkinMeshViaMedialSkeleton::bAddCustomAnimationRoot");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, CustomAnimationRootPosition) == 360, "Offset mismatch for FSkinMeshViaMedialSkeleton::CustomAnimationRootPosition");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, BindMethod) == 384, "Offset mismatch for FSkinMeshViaMedialSkeleton::BindMethod");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, Stiffness) == 388, "Offset mismatch for FSkinMeshViaMedialSkeleton::Stiffness");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, MaxInfluences) == 392, "Offset mismatch for FSkinMeshViaMedialSkeleton::MaxInfluences");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, VoxelResolution) == 396, "Offset mismatch for FSkinMeshViaMedialSkeleton::VoxelResolution");
static_assert(offsetof(FSkinMeshViaMedialSkeleton, ClusterNeighborSearchRange) == 400, "Offset mismatch for FSkinMeshViaMedialSkeleton::ClusterNeighborSearchRange");

// /Script/GeometryCollectionNodes.SkinMeshViaMedialSkeleton_v2
// Kind: ScriptStruct; super: DataflowNode
struct FSkinMeshViaMedialSkeleton_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MedialSkeleton[0x40]; // 0x00E8 (Size: 0x40, Type: StructProperty)
    std::uint8_t EdgeWeightMethod; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MergeDisconnectedMethod; // 0x0129 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SelectRootMethod; // 0x012A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x012B
    std::uint8_t RootSelectionPoint[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t RootSelectionDirection[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::int32_t RootClusterIndex; // 0x0160 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAddCustomAnimationRoot; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0165
    std::uint8_t CustomAnimationRootPosition[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t BindMethod; // 0x0180 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0181
    float Stiffness; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxInfluences; // 0x0188 (Size: 0x4, Type: IntProperty)
    std::int32_t VoxelResolution; // 0x018C (Size: 0x4, Type: IntProperty)
    std::int32_t ClusterNeighborSearchRange; // 0x0190 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, Mesh) == 224, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::Mesh");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, MedialSkeleton) == 232, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::MedialSkeleton");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, EdgeWeightMethod) == 296, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::EdgeWeightMethod");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, MergeDisconnectedMethod) == 297, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::MergeDisconnectedMethod");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, SelectRootMethod) == 298, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::SelectRootMethod");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, RootSelectionPoint) == 304, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::RootSelectionPoint");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, RootSelectionDirection) == 328, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::RootSelectionDirection");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, RootClusterIndex) == 352, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::RootClusterIndex");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, bAddCustomAnimationRoot) == 356, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::bAddCustomAnimationRoot");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, CustomAnimationRootPosition) == 360, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::CustomAnimationRootPosition");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, BindMethod) == 384, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::BindMethod");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, Stiffness) == 388, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::Stiffness");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, MaxInfluences) == 392, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::MaxInfluences");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, VoxelResolution) == 396, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::VoxelResolution");
static_assert(offsetof(FSkinMeshViaMedialSkeleton_v2, ClusterNeighborSearchRange) == 400, "Offset mismatch for FSkinMeshViaMedialSkeleton_v2::ClusterNeighborSearchRange");

// /Script/GeometryCollectionNodes.SliceCutterDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSliceCutterDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t BoundingBox[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::int32_t SlicesX; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::int32_t SlicesY; // 0x0174 (Size: 0x4, Type: IntProperty)
    std::int32_t SlicesZ; // 0x0178 (Size: 0x4, Type: IntProperty)
    float SliceAngleVariation; // 0x017C (Size: 0x4, Type: FloatProperty)
    float SliceOffsetVariation; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x0184 (Size: 0x4, Type: IntProperty)
    float ChanceToFracture; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SplitIslands; // 0x018C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x018D
    float CloseVertexDistance; // 0x0190 (Size: 0x4, Type: FloatProperty)
    float VertexToSurfaceBridgeDistance; // 0x0194 (Size: 0x4, Type: FloatProperty)
    float Grout; // 0x0198 (Size: 0x4, Type: FloatProperty)
    float Amplitude; // 0x019C (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float Persistence; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    float Lacunarity; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    std::int32_t OctaveNumber; // 0x01AC (Size: 0x4, Type: IntProperty)
    float PointSpacing; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AddSamplesForCollision; // 0x01B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01B5
    float CollisionSampleSpacing; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x01BC
    std::uint8_t NewGeometryTransformSelection[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSliceCutterDataflowNode, Collection) == 224, "Offset mismatch for FSliceCutterDataflowNode::Collection");
static_assert(offsetof(FSliceCutterDataflowNode, BoundingBox) == 272, "Offset mismatch for FSliceCutterDataflowNode::BoundingBox");
static_assert(offsetof(FSliceCutterDataflowNode, TransformSelection) == 328, "Offset mismatch for FSliceCutterDataflowNode::TransformSelection");
static_assert(offsetof(FSliceCutterDataflowNode, SlicesX) == 368, "Offset mismatch for FSliceCutterDataflowNode::SlicesX");
static_assert(offsetof(FSliceCutterDataflowNode, SlicesY) == 372, "Offset mismatch for FSliceCutterDataflowNode::SlicesY");
static_assert(offsetof(FSliceCutterDataflowNode, SlicesZ) == 376, "Offset mismatch for FSliceCutterDataflowNode::SlicesZ");
static_assert(offsetof(FSliceCutterDataflowNode, SliceAngleVariation) == 380, "Offset mismatch for FSliceCutterDataflowNode::SliceAngleVariation");
static_assert(offsetof(FSliceCutterDataflowNode, SliceOffsetVariation) == 384, "Offset mismatch for FSliceCutterDataflowNode::SliceOffsetVariation");
static_assert(offsetof(FSliceCutterDataflowNode, RandomSeed) == 388, "Offset mismatch for FSliceCutterDataflowNode::RandomSeed");
static_assert(offsetof(FSliceCutterDataflowNode, ChanceToFracture) == 392, "Offset mismatch for FSliceCutterDataflowNode::ChanceToFracture");
static_assert(offsetof(FSliceCutterDataflowNode, SplitIslands) == 396, "Offset mismatch for FSliceCutterDataflowNode::SplitIslands");
static_assert(offsetof(FSliceCutterDataflowNode, CloseVertexDistance) == 400, "Offset mismatch for FSliceCutterDataflowNode::CloseVertexDistance");
static_assert(offsetof(FSliceCutterDataflowNode, VertexToSurfaceBridgeDistance) == 404, "Offset mismatch for FSliceCutterDataflowNode::VertexToSurfaceBridgeDistance");
static_assert(offsetof(FSliceCutterDataflowNode, Grout) == 408, "Offset mismatch for FSliceCutterDataflowNode::Grout");
static_assert(offsetof(FSliceCutterDataflowNode, Amplitude) == 412, "Offset mismatch for FSliceCutterDataflowNode::Amplitude");
static_assert(offsetof(FSliceCutterDataflowNode, Frequency) == 416, "Offset mismatch for FSliceCutterDataflowNode::Frequency");
static_assert(offsetof(FSliceCutterDataflowNode, Persistence) == 420, "Offset mismatch for FSliceCutterDataflowNode::Persistence");
static_assert(offsetof(FSliceCutterDataflowNode, Lacunarity) == 424, "Offset mismatch for FSliceCutterDataflowNode::Lacunarity");
static_assert(offsetof(FSliceCutterDataflowNode, OctaveNumber) == 428, "Offset mismatch for FSliceCutterDataflowNode::OctaveNumber");
static_assert(offsetof(FSliceCutterDataflowNode, PointSpacing) == 432, "Offset mismatch for FSliceCutterDataflowNode::PointSpacing");
static_assert(offsetof(FSliceCutterDataflowNode, AddSamplesForCollision) == 436, "Offset mismatch for FSliceCutterDataflowNode::AddSamplesForCollision");
static_assert(offsetof(FSliceCutterDataflowNode, CollisionSampleSpacing) == 440, "Offset mismatch for FSliceCutterDataflowNode::CollisionSampleSpacing");
static_assert(offsetof(FSliceCutterDataflowNode, NewGeometryTransformSelection) == 448, "Offset mismatch for FSliceCutterDataflowNode::NewGeometryTransformSelection");

// /Script/GeometryCollectionNodes.SmoothMeshBoneWeightsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSmoothMeshBoneWeightsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    float Strength; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumIterations; // 0x00EC (Size: 0x4, Type: IntProperty)
    FName WeightProfile; // 0x00F0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSmoothMeshBoneWeightsDataflowNode, Mesh) == 224, "Offset mismatch for FSmoothMeshBoneWeightsDataflowNode::Mesh");
static_assert(offsetof(FSmoothMeshBoneWeightsDataflowNode, Strength) == 232, "Offset mismatch for FSmoothMeshBoneWeightsDataflowNode::Strength");
static_assert(offsetof(FSmoothMeshBoneWeightsDataflowNode, NumIterations) == 236, "Offset mismatch for FSmoothMeshBoneWeightsDataflowNode::NumIterations");
static_assert(offsetof(FSmoothMeshBoneWeightsDataflowNode, WeightProfile) == 240, "Offset mismatch for FSmoothMeshBoneWeightsDataflowNode::WeightProfile");

// /Script/GeometryCollectionNodes.SphereCoveringCountSpheresNode
// Kind: ScriptStruct; super: DataflowNode
struct FSphereCoveringCountSpheresNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t SphereCovering[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::int32_t NumSpheres; // 0x0100 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSphereCoveringCountSpheresNode, SphereCovering) == 224, "Offset mismatch for FSphereCoveringCountSpheresNode::SphereCovering");
static_assert(offsetof(FSphereCoveringCountSpheresNode, NumSpheres) == 256, "Offset mismatch for FSphereCoveringCountSpheresNode::NumSpheres");

// /Script/GeometryCollectionNodes.SphereCoveringToMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSphereCoveringToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t SphereCovering[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::int32_t VerticesAlongEachSide; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0104
    void* Mesh; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSphereCoveringToMeshDataflowNode, SphereCovering) == 224, "Offset mismatch for FSphereCoveringToMeshDataflowNode::SphereCovering");
static_assert(offsetof(FSphereCoveringToMeshDataflowNode, VerticesAlongEachSide) == 256, "Offset mismatch for FSphereCoveringToMeshDataflowNode::VerticesAlongEachSide");
static_assert(offsetof(FSphereCoveringToMeshDataflowNode, Mesh) == 264, "Offset mismatch for FSphereCoveringToMeshDataflowNode::Mesh");

// /Script/GeometryCollectionNodes.SpheresToMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSpheresToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Spheres; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t VerticesAlongEachSide; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    void* Mesh; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Meshes; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpheresToMeshDataflowNode, Spheres) == 224, "Offset mismatch for FSpheresToMeshDataflowNode::Spheres");
static_assert(offsetof(FSpheresToMeshDataflowNode, VerticesAlongEachSide) == 240, "Offset mismatch for FSpheresToMeshDataflowNode::VerticesAlongEachSide");
static_assert(offsetof(FSpheresToMeshDataflowNode, Mesh) == 248, "Offset mismatch for FSpheresToMeshDataflowNode::Mesh");
static_assert(offsetof(FSpheresToMeshDataflowNode, Meshes) == 256, "Offset mismatch for FSpheresToMeshDataflowNode::Meshes");

// /Script/GeometryCollectionNodes.SpheresToPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSpheresToPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Spheres; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Points; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Radii; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpheresToPointsDataflowNode, Spheres) == 224, "Offset mismatch for FSpheresToPointsDataflowNode::Spheres");
static_assert(offsetof(FSpheresToPointsDataflowNode, Points) == 240, "Offset mismatch for FSpheresToPointsDataflowNode::Points");
static_assert(offsetof(FSpheresToPointsDataflowNode, Radii) == 256, "Offset mismatch for FSpheresToPointsDataflowNode::Radii");

// /Script/GeometryCollectionNodes.SplitDataflowMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSplitDataflowMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* InMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Mesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialArray; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSplitDataflowMeshDataflowNode, InMesh) == 224, "Offset mismatch for FSplitDataflowMeshDataflowNode::InMesh");
static_assert(offsetof(FSplitDataflowMeshDataflowNode, Mesh) == 232, "Offset mismatch for FSplitDataflowMeshDataflowNode::Mesh");
static_assert(offsetof(FSplitDataflowMeshDataflowNode, MaterialArray) == 240, "Offset mismatch for FSplitDataflowMeshDataflowNode::MaterialArray");

// /Script/GeometryCollectionNodes.SplitIslandsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSplitIslandsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    float CloseVertexDistance; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float VertexToSurfaceBridgeDistance; // 0x013C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSplitIslandsDataflowNode, Collection) == 224, "Offset mismatch for FSplitIslandsDataflowNode::Collection");
static_assert(offsetof(FSplitIslandsDataflowNode, TransformSelection) == 272, "Offset mismatch for FSplitIslandsDataflowNode::TransformSelection");
static_assert(offsetof(FSplitIslandsDataflowNode, CloseVertexDistance) == 312, "Offset mismatch for FSplitIslandsDataflowNode::CloseVertexDistance");
static_assert(offsetof(FSplitIslandsDataflowNode, VertexToSurfaceBridgeDistance) == 316, "Offset mismatch for FSplitIslandsDataflowNode::VertexToSurfaceBridgeDistance");

// /Script/GeometryCollectionNodes.SplitMeshIslandsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSplitMeshIslandsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Meshes; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SplitMethod; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F9
    float ConnectVerticesThreshold; // 0x00FC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSplitMeshIslandsDataflowNode, Mesh) == 224, "Offset mismatch for FSplitMeshIslandsDataflowNode::Mesh");
static_assert(offsetof(FSplitMeshIslandsDataflowNode, Meshes) == 232, "Offset mismatch for FSplitMeshIslandsDataflowNode::Meshes");
static_assert(offsetof(FSplitMeshIslandsDataflowNode, SplitMethod) == 248, "Offset mismatch for FSplitMeshIslandsDataflowNode::SplitMethod");
static_assert(offsetof(FSplitMeshIslandsDataflowNode, ConnectVerticesThreshold) == 252, "Offset mismatch for FSplitMeshIslandsDataflowNode::ConnectVerticesThreshold");

// /Script/GeometryCollectionNodes.SquareDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSquareDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSquareDataflowNode, float_) == 224, "Offset mismatch for FSquareDataflowNode::float_");
static_assert(offsetof(FSquareDataflowNode, ReturnValue) == 228, "Offset mismatch for FSquareDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.SquareRootDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSquareRootDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSquareRootDataflowNode, float_) == 224, "Offset mismatch for FSquareRootDataflowNode::float_");
static_assert(offsetof(FSquareRootDataflowNode, ReturnValue) == 228, "Offset mismatch for FSquareRootDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.StaticMeshToCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FStaticMeshToCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* StaticMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E8
    std::uint8_t MeshTransform[0x60]; // 0x00F0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bSetInternalFromMaterialIndex; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSplitComponents; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0152
    std::uint8_t Collection[0x30]; // 0x0158 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialInstances; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStaticMeshToCollectionDataflowNode, StaticMesh) == 224, "Offset mismatch for FStaticMeshToCollectionDataflowNode::StaticMesh");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, MeshTransform) == 240, "Offset mismatch for FStaticMeshToCollectionDataflowNode::MeshTransform");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, bSetInternalFromMaterialIndex) == 336, "Offset mismatch for FStaticMeshToCollectionDataflowNode::bSetInternalFromMaterialIndex");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, bSplitComponents) == 337, "Offset mismatch for FStaticMeshToCollectionDataflowNode::bSplitComponents");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, Collection) == 344, "Offset mismatch for FStaticMeshToCollectionDataflowNode::Collection");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, Materials) == 392, "Offset mismatch for FStaticMeshToCollectionDataflowNode::Materials");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, MaterialInstances) == 408, "Offset mismatch for FStaticMeshToCollectionDataflowNode::MaterialInstances");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, InstancedMeshes) == 424, "Offset mismatch for FStaticMeshToCollectionDataflowNode::InstancedMeshes");

// /Script/GeometryCollectionNodes.StaticMeshToCollectionDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FStaticMeshToCollectionDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* StaticMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E8
    std::uint8_t MeshTransform[0x60]; // 0x00F0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Collection[0x30]; // 0x0150 (Size: 0x30, Type: StructProperty)
    TArray<void*> Materials; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstancedMeshes; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RootProxyMeshes; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSetInternalFromMaterialIndex; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSplitComponents; // 0x01B1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStaticMeshToCollectionDataflowNode_v2, StaticMesh) == 224, "Offset mismatch for FStaticMeshToCollectionDataflowNode_v2::StaticMesh");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode_v2, MeshTransform) == 240, "Offset mismatch for FStaticMeshToCollectionDataflowNode_v2::MeshTransform");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode_v2, Collection) == 336, "Offset mismatch for FStaticMeshToCollectionDataflowNode_v2::Collection");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode_v2, Materials) == 384, "Offset mismatch for FStaticMeshToCollectionDataflowNode_v2::Materials");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode_v2, InstancedMeshes) == 400, "Offset mismatch for FStaticMeshToCollectionDataflowNode_v2::InstancedMeshes");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode_v2, RootProxyMeshes) == 416, "Offset mismatch for FStaticMeshToCollectionDataflowNode_v2::RootProxyMeshes");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode_v2, bSetInternalFromMaterialIndex) == 432, "Offset mismatch for FStaticMeshToCollectionDataflowNode_v2::bSetInternalFromMaterialIndex");
static_assert(offsetof(FStaticMeshToCollectionDataflowNode_v2, bSplitComponents) == 433, "Offset mismatch for FStaticMeshToCollectionDataflowNode_v2::bSplitComponents");

// /Script/GeometryCollectionNodes.StaticMeshToMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FStaticMeshToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* StaticMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseHiRes; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E9
    std::int32_t LODLevel; // 0x00EC (Size: 0x4, Type: IntProperty)
    void* Mesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialArray; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStaticMeshToMeshDataflowNode, StaticMesh) == 224, "Offset mismatch for FStaticMeshToMeshDataflowNode::StaticMesh");
static_assert(offsetof(FStaticMeshToMeshDataflowNode, bUseHiRes) == 232, "Offset mismatch for FStaticMeshToMeshDataflowNode::bUseHiRes");
static_assert(offsetof(FStaticMeshToMeshDataflowNode, LODLevel) == 236, "Offset mismatch for FStaticMeshToMeshDataflowNode::LODLevel");
static_assert(offsetof(FStaticMeshToMeshDataflowNode, Mesh) == 240, "Offset mismatch for FStaticMeshToMeshDataflowNode::Mesh");
static_assert(offsetof(FStaticMeshToMeshDataflowNode, MaterialArray) == 248, "Offset mismatch for FStaticMeshToMeshDataflowNode::MaterialArray");

// /Script/GeometryCollectionNodes.StaticMeshToMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FStaticMeshToMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* StaticMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseHiRes; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E9
    std::int32_t LODLevel; // 0x00EC (Size: 0x4, Type: IntProperty)
    void* Mesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStaticMeshToMeshDataflowNode_v2, StaticMesh) == 224, "Offset mismatch for FStaticMeshToMeshDataflowNode_v2::StaticMesh");
static_assert(offsetof(FStaticMeshToMeshDataflowNode_v2, bUseHiRes) == 232, "Offset mismatch for FStaticMeshToMeshDataflowNode_v2::bUseHiRes");
static_assert(offsetof(FStaticMeshToMeshDataflowNode_v2, LODLevel) == 236, "Offset mismatch for FStaticMeshToMeshDataflowNode_v2::LODLevel");
static_assert(offsetof(FStaticMeshToMeshDataflowNode_v2, Mesh) == 240, "Offset mismatch for FStaticMeshToMeshDataflowNode_v2::Mesh");

// /Script/GeometryCollectionNodes.StringAppendDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FStringAppendDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString String1; // 0x00E0 (Size: 0x10, Type: StrProperty)
    FString String2; // 0x00F0 (Size: 0x10, Type: StrProperty)
    FString String; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FStringAppendDataflowNode, String1) == 224, "Offset mismatch for FStringAppendDataflowNode::String1");
static_assert(offsetof(FStringAppendDataflowNode, String2) == 240, "Offset mismatch for FStringAppendDataflowNode::String2");
static_assert(offsetof(FStringAppendDataflowNode, String) == 256, "Offset mismatch for FStringAppendDataflowNode::String");

// /Script/GeometryCollectionNodes.StringAppendDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FStringAppendDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Inputs; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    FString String; // 0x00F0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FStringAppendDataflowNode_v2, Inputs) == 224, "Offset mismatch for FStringAppendDataflowNode_v2::Inputs");
static_assert(offsetof(FStringAppendDataflowNode_v2, String) == 240, "Offset mismatch for FStringAppendDataflowNode_v2::String");

// /Script/GeometryCollectionNodes.SubdivideMedialSkeletonDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSubdivideMedialSkeletonDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MedialSkeleton[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    void* TargetMesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MedialSpheres; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    float TargetEdgeLengthRadiusFraction; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RadiusReference; // 0x013C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x013D
    float MinTargetEdgeLength; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float MaxTargetEdgeLength; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSubdivideOnSurfaces; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0149
    float ReassignClusterPosErrorWt; // 0x014C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bProjectNewMedialSpheres; // 0x0150 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, MedialSkeleton) == 224, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::MedialSkeleton");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, TargetMesh) == 288, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::TargetMesh");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, MedialSpheres) == 296, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::MedialSpheres");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, TargetEdgeLengthRadiusFraction) == 312, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::TargetEdgeLengthRadiusFraction");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, RadiusReference) == 316, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::RadiusReference");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, MinTargetEdgeLength) == 320, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::MinTargetEdgeLength");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, MaxTargetEdgeLength) == 324, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::MaxTargetEdgeLength");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, bSubdivideOnSurfaces) == 328, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::bSubdivideOnSurfaces");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, ReassignClusterPosErrorWt) == 332, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::ReassignClusterPosErrorWt");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode, bProjectNewMedialSpheres) == 336, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode::bProjectNewMedialSpheres");

// /Script/GeometryCollectionNodes.SubdivideMedialSkeletonDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FSubdivideMedialSkeletonDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MedialSkeleton[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    void* TargetMesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MedialSpheres; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    float TargetEdgeLengthRadiusFraction; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RadiusReference; // 0x013C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x013D
    float MinTargetEdgeLength; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float MaxTargetEdgeLength; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSubdivideOnSurfaces; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0149
    float ReassignClusterPosErrorWt; // 0x014C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bProjectNewMedialSpheres; // 0x0150 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, MedialSkeleton) == 224, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::MedialSkeleton");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, TargetMesh) == 288, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::TargetMesh");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, MedialSpheres) == 296, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::MedialSpheres");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, TargetEdgeLengthRadiusFraction) == 312, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::TargetEdgeLengthRadiusFraction");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, RadiusReference) == 316, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::RadiusReference");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, MinTargetEdgeLength) == 320, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::MinTargetEdgeLength");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, MaxTargetEdgeLength) == 324, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::MaxTargetEdgeLength");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, bSubdivideOnSurfaces) == 328, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::bSubdivideOnSurfaces");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, ReassignClusterPosErrorWt) == 332, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::ReassignClusterPosErrorWt");
static_assert(offsetof(FSubdivideMedialSkeletonDataflowNode_v2, bProjectNewMedialSpheres) == 336, "Offset mismatch for FSubdivideMedialSkeletonDataflowNode_v2::bProjectNewMedialSpheres");

// /Script/GeometryCollectionNodes.SubdivideMeshCatmullClarkDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSubdivideMeshCatmullClarkDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Subdivisions; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDefaultLayer; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00ED
    std::int32_t ExtendedLayerIndex; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t AutogenPolygroups; // 0x00F4 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSubdivideMeshCatmullClarkDataflowNode, Mesh) == 224, "Offset mismatch for FSubdivideMeshCatmullClarkDataflowNode::Mesh");
static_assert(offsetof(FSubdivideMeshCatmullClarkDataflowNode, Subdivisions) == 232, "Offset mismatch for FSubdivideMeshCatmullClarkDataflowNode::Subdivisions");
static_assert(offsetof(FSubdivideMeshCatmullClarkDataflowNode, bDefaultLayer) == 236, "Offset mismatch for FSubdivideMeshCatmullClarkDataflowNode::bDefaultLayer");
static_assert(offsetof(FSubdivideMeshCatmullClarkDataflowNode, ExtendedLayerIndex) == 240, "Offset mismatch for FSubdivideMeshCatmullClarkDataflowNode::ExtendedLayerIndex");
static_assert(offsetof(FSubdivideMeshCatmullClarkDataflowNode, AutogenPolygroups) == 244, "Offset mismatch for FSubdivideMeshCatmullClarkDataflowNode::AutogenPolygroups");

// /Script/GeometryCollectionNodes.SubtractDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSubtractDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float FloatA; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float FloatB; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSubtractDataflowNode, FloatA) == 224, "Offset mismatch for FSubtractDataflowNode::FloatA");
static_assert(offsetof(FSubtractDataflowNode, FloatB) == 228, "Offset mismatch for FSubtractDataflowNode::FloatB");
static_assert(offsetof(FSubtractDataflowNode, ReturnValue) == 232, "Offset mismatch for FSubtractDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.SumScalarFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSumScalarFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> FieldFloatLeft; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemapLeft; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldFloatRight; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemapRight; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    float Magnitude; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Operation; // 0x0124 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSwapInputs; // 0x0125 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0126
    TArray<void*> FieldFloatResult; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSumScalarFieldDataflowNode, FieldFloatLeft) == 224, "Offset mismatch for FSumScalarFieldDataflowNode::FieldFloatLeft");
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldRemapLeft) == 240, "Offset mismatch for FSumScalarFieldDataflowNode::FieldRemapLeft");
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldFloatRight) == 256, "Offset mismatch for FSumScalarFieldDataflowNode::FieldFloatRight");
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldRemapRight) == 272, "Offset mismatch for FSumScalarFieldDataflowNode::FieldRemapRight");
static_assert(offsetof(FSumScalarFieldDataflowNode, Magnitude) == 288, "Offset mismatch for FSumScalarFieldDataflowNode::Magnitude");
static_assert(offsetof(FSumScalarFieldDataflowNode, Operation) == 292, "Offset mismatch for FSumScalarFieldDataflowNode::Operation");
static_assert(offsetof(FSumScalarFieldDataflowNode, bSwapInputs) == 293, "Offset mismatch for FSumScalarFieldDataflowNode::bSwapInputs");
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldFloatResult) == 296, "Offset mismatch for FSumScalarFieldDataflowNode::FieldFloatResult");
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldRemap) == 312, "Offset mismatch for FSumScalarFieldDataflowNode::FieldRemap");

// /Script/GeometryCollectionNodes.SumVectorFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSumVectorFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> FieldFloat; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldFloatRemap; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldVectorLeft; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemapLeft; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldVectorRight; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemapRight; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    float Magnitude; // 0x0140 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Operation; // 0x0144 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSwapVectorInputs; // 0x0145 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0146
    TArray<void*> FieldVectorResult; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSumVectorFieldDataflowNode, FieldFloat) == 224, "Offset mismatch for FSumVectorFieldDataflowNode::FieldFloat");
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldFloatRemap) == 240, "Offset mismatch for FSumVectorFieldDataflowNode::FieldFloatRemap");
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldVectorLeft) == 256, "Offset mismatch for FSumVectorFieldDataflowNode::FieldVectorLeft");
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldRemapLeft) == 272, "Offset mismatch for FSumVectorFieldDataflowNode::FieldRemapLeft");
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldVectorRight) == 288, "Offset mismatch for FSumVectorFieldDataflowNode::FieldVectorRight");
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldRemapRight) == 304, "Offset mismatch for FSumVectorFieldDataflowNode::FieldRemapRight");
static_assert(offsetof(FSumVectorFieldDataflowNode, Magnitude) == 320, "Offset mismatch for FSumVectorFieldDataflowNode::Magnitude");
static_assert(offsetof(FSumVectorFieldDataflowNode, Operation) == 324, "Offset mismatch for FSumVectorFieldDataflowNode::Operation");
static_assert(offsetof(FSumVectorFieldDataflowNode, bSwapVectorInputs) == 325, "Offset mismatch for FSumVectorFieldDataflowNode::bSwapVectorInputs");
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldVectorResult) == 328, "Offset mismatch for FSumVectorFieldDataflowNode::FieldVectorResult");
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldRemap) == 344, "Offset mismatch for FSumVectorFieldDataflowNode::FieldRemap");

// /Script/GeometryCollectionNodes.TanDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FTanDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTanDataflowNode, float_) == 224, "Offset mismatch for FTanDataflowNode::float_");
static_assert(offsetof(FTanDataflowNode, ReturnValue) == 228, "Offset mismatch for FTanDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.TransformCollectionAttributeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FTransformCollectionAttributeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformIn[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalTransform[0x60]; // 0x0170 (Size: 0x60, Type: StructProperty)
    FString GroupName; // 0x01D0 (Size: 0x10, Type: StrProperty)
    FString AttributeName; // 0x01E0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTransformCollectionAttributeDataflowNode, Collection) == 224, "Offset mismatch for FTransformCollectionAttributeDataflowNode::Collection");
static_assert(offsetof(FTransformCollectionAttributeDataflowNode, TransformIn) == 272, "Offset mismatch for FTransformCollectionAttributeDataflowNode::TransformIn");
static_assert(offsetof(FTransformCollectionAttributeDataflowNode, LocalTransform) == 368, "Offset mismatch for FTransformCollectionAttributeDataflowNode::LocalTransform");
static_assert(offsetof(FTransformCollectionAttributeDataflowNode, GroupName) == 464, "Offset mismatch for FTransformCollectionAttributeDataflowNode::GroupName");
static_assert(offsetof(FTransformCollectionAttributeDataflowNode, AttributeName) == 480, "Offset mismatch for FTransformCollectionAttributeDataflowNode::AttributeName");

// /Script/GeometryCollectionNodes.TransformCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FTransformCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Translate[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOrder; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0151
    std::uint8_t Rotate[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    float UniformScale; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x018C
    std::uint8_t RotatePivot[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScalePivot[0x18]; // 0x01A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bInvertTransformation; // 0x01C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTransformCollectionDataflowNode, Collection) == 224, "Offset mismatch for FTransformCollectionDataflowNode::Collection");
static_assert(offsetof(FTransformCollectionDataflowNode, TransformSelection) == 272, "Offset mismatch for FTransformCollectionDataflowNode::TransformSelection");
static_assert(offsetof(FTransformCollectionDataflowNode, Translate) == 312, "Offset mismatch for FTransformCollectionDataflowNode::Translate");
static_assert(offsetof(FTransformCollectionDataflowNode, RotationOrder) == 336, "Offset mismatch for FTransformCollectionDataflowNode::RotationOrder");
static_assert(offsetof(FTransformCollectionDataflowNode, Rotate) == 344, "Offset mismatch for FTransformCollectionDataflowNode::Rotate");
static_assert(offsetof(FTransformCollectionDataflowNode, Scale) == 368, "Offset mismatch for FTransformCollectionDataflowNode::Scale");
static_assert(offsetof(FTransformCollectionDataflowNode, UniformScale) == 392, "Offset mismatch for FTransformCollectionDataflowNode::UniformScale");
static_assert(offsetof(FTransformCollectionDataflowNode, RotatePivot) == 400, "Offset mismatch for FTransformCollectionDataflowNode::RotatePivot");
static_assert(offsetof(FTransformCollectionDataflowNode, ScalePivot) == 424, "Offset mismatch for FTransformCollectionDataflowNode::ScalePivot");
static_assert(offsetof(FTransformCollectionDataflowNode, bInvertTransformation) == 448, "Offset mismatch for FTransformCollectionDataflowNode::bInvertTransformation");

// /Script/GeometryCollectionNodes.TransformMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FTransformMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Translate[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOrder; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    std::uint8_t Rotate[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    float UniformScale; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x013C
    std::uint8_t RotatePivot[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScalePivot[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t bInvertTransformation; // 0x0170 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTransformMeshDataflowNode, Mesh) == 224, "Offset mismatch for FTransformMeshDataflowNode::Mesh");
static_assert(offsetof(FTransformMeshDataflowNode, Translate) == 232, "Offset mismatch for FTransformMeshDataflowNode::Translate");
static_assert(offsetof(FTransformMeshDataflowNode, RotationOrder) == 256, "Offset mismatch for FTransformMeshDataflowNode::RotationOrder");
static_assert(offsetof(FTransformMeshDataflowNode, Rotate) == 264, "Offset mismatch for FTransformMeshDataflowNode::Rotate");
static_assert(offsetof(FTransformMeshDataflowNode, Scale) == 288, "Offset mismatch for FTransformMeshDataflowNode::Scale");
static_assert(offsetof(FTransformMeshDataflowNode, UniformScale) == 312, "Offset mismatch for FTransformMeshDataflowNode::UniformScale");
static_assert(offsetof(FTransformMeshDataflowNode, RotatePivot) == 320, "Offset mismatch for FTransformMeshDataflowNode::RotatePivot");
static_assert(offsetof(FTransformMeshDataflowNode, ScalePivot) == 344, "Offset mismatch for FTransformMeshDataflowNode::ScalePivot");
static_assert(offsetof(FTransformMeshDataflowNode, bInvertTransformation) == 368, "Offset mismatch for FTransformMeshDataflowNode::bInvertTransformation");

// /Script/GeometryCollectionNodes.TransformMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FTransformMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Translate[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOrder; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    std::uint8_t Rotate[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    float UniformScale; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x013C
    std::uint8_t RotatePivot[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScalePivot[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t bInvertTransformation; // 0x0170 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTransformMeshDataflowNode_v2, Mesh) == 224, "Offset mismatch for FTransformMeshDataflowNode_v2::Mesh");
static_assert(offsetof(FTransformMeshDataflowNode_v2, Translate) == 232, "Offset mismatch for FTransformMeshDataflowNode_v2::Translate");
static_assert(offsetof(FTransformMeshDataflowNode_v2, RotationOrder) == 256, "Offset mismatch for FTransformMeshDataflowNode_v2::RotationOrder");
static_assert(offsetof(FTransformMeshDataflowNode_v2, Rotate) == 264, "Offset mismatch for FTransformMeshDataflowNode_v2::Rotate");
static_assert(offsetof(FTransformMeshDataflowNode_v2, Scale) == 288, "Offset mismatch for FTransformMeshDataflowNode_v2::Scale");
static_assert(offsetof(FTransformMeshDataflowNode_v2, UniformScale) == 312, "Offset mismatch for FTransformMeshDataflowNode_v2::UniformScale");
static_assert(offsetof(FTransformMeshDataflowNode_v2, RotatePivot) == 320, "Offset mismatch for FTransformMeshDataflowNode_v2::RotatePivot");
static_assert(offsetof(FTransformMeshDataflowNode_v2, ScalePivot) == 344, "Offset mismatch for FTransformMeshDataflowNode_v2::ScalePivot");
static_assert(offsetof(FTransformMeshDataflowNode_v2, bInvertTransformation) == 368, "Offset mismatch for FTransformMeshDataflowNode_v2::bInvertTransformation");

// /Script/GeometryCollectionNodes.TransformPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FTransformPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Points; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Transform[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransformPointsDataflowNode, Points) == 224, "Offset mismatch for FTransformPointsDataflowNode::Points");
static_assert(offsetof(FTransformPointsDataflowNode, Transform) == 240, "Offset mismatch for FTransformPointsDataflowNode::Transform");

// /Script/GeometryCollectionNodes.TriangleBoundaryIndicesNode
// Kind: ScriptStruct; super: DataflowNode
struct FTriangleBoundaryIndicesNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> BoundaryIndicesOut; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTriangleBoundaryIndicesNode, Collection) == 224, "Offset mismatch for FTriangleBoundaryIndicesNode::Collection");
static_assert(offsetof(FTriangleBoundaryIndicesNode, BoundaryIndicesOut) == 272, "Offset mismatch for FTriangleBoundaryIndicesNode::BoundaryIndicesOut");

// /Script/GeometryCollectionNodes.TruncDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FTruncDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTruncDataflowNode, float_) == 224, "Offset mismatch for FTruncDataflowNode::float_");
static_assert(offsetof(FTruncDataflowNode, ReturnValue) == 228, "Offset mismatch for FTruncDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.UniformFractureDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FUniformFractureDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformSelection[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0140 (Size: 0x60, Type: StructProperty)
    std::int32_t MinVoronoiSites; // 0x01A0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxVoronoiSites; // 0x01A4 (Size: 0x4, Type: IntProperty)
    std::int32_t InternalMaterialID; // 0x01A8 (Size: 0x4, Type: IntProperty)
    std::int32_t RandomSeed; // 0x01AC (Size: 0x4, Type: IntProperty)
    float ChanceToFracture; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GroupFracture; // 0x01B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SplitIslands; // 0x01B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01B6
    float CloseVertexDistance; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    float VertexToSurfaceBridgeDistance; // 0x01BC (Size: 0x4, Type: FloatProperty)
    float Grout; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float Amplitude; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    float Persistence; // 0x01CC (Size: 0x4, Type: FloatProperty)
    float Lacunarity; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    std::int32_t OctaveNumber; // 0x01D4 (Size: 0x4, Type: IntProperty)
    float PointSpacing; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AddSamplesForCollision; // 0x01DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01DD
    float CollisionSampleSpacing; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x01E4
    std::uint8_t NewGeometryTransformSelection[0x1]; // 0x01E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUniformFractureDataflowNode, Collection) == 224, "Offset mismatch for FUniformFractureDataflowNode::Collection");
static_assert(offsetof(FUniformFractureDataflowNode, TransformSelection) == 272, "Offset mismatch for FUniformFractureDataflowNode::TransformSelection");
static_assert(offsetof(FUniformFractureDataflowNode, Transform) == 320, "Offset mismatch for FUniformFractureDataflowNode::Transform");
static_assert(offsetof(FUniformFractureDataflowNode, MinVoronoiSites) == 416, "Offset mismatch for FUniformFractureDataflowNode::MinVoronoiSites");
static_assert(offsetof(FUniformFractureDataflowNode, MaxVoronoiSites) == 420, "Offset mismatch for FUniformFractureDataflowNode::MaxVoronoiSites");
static_assert(offsetof(FUniformFractureDataflowNode, InternalMaterialID) == 424, "Offset mismatch for FUniformFractureDataflowNode::InternalMaterialID");
static_assert(offsetof(FUniformFractureDataflowNode, RandomSeed) == 428, "Offset mismatch for FUniformFractureDataflowNode::RandomSeed");
static_assert(offsetof(FUniformFractureDataflowNode, ChanceToFracture) == 432, "Offset mismatch for FUniformFractureDataflowNode::ChanceToFracture");
static_assert(offsetof(FUniformFractureDataflowNode, GroupFracture) == 436, "Offset mismatch for FUniformFractureDataflowNode::GroupFracture");
static_assert(offsetof(FUniformFractureDataflowNode, SplitIslands) == 437, "Offset mismatch for FUniformFractureDataflowNode::SplitIslands");
static_assert(offsetof(FUniformFractureDataflowNode, CloseVertexDistance) == 440, "Offset mismatch for FUniformFractureDataflowNode::CloseVertexDistance");
static_assert(offsetof(FUniformFractureDataflowNode, VertexToSurfaceBridgeDistance) == 444, "Offset mismatch for FUniformFractureDataflowNode::VertexToSurfaceBridgeDistance");
static_assert(offsetof(FUniformFractureDataflowNode, Grout) == 448, "Offset mismatch for FUniformFractureDataflowNode::Grout");
static_assert(offsetof(FUniformFractureDataflowNode, Amplitude) == 452, "Offset mismatch for FUniformFractureDataflowNode::Amplitude");
static_assert(offsetof(FUniformFractureDataflowNode, Frequency) == 456, "Offset mismatch for FUniformFractureDataflowNode::Frequency");
static_assert(offsetof(FUniformFractureDataflowNode, Persistence) == 460, "Offset mismatch for FUniformFractureDataflowNode::Persistence");
static_assert(offsetof(FUniformFractureDataflowNode, Lacunarity) == 464, "Offset mismatch for FUniformFractureDataflowNode::Lacunarity");
static_assert(offsetof(FUniformFractureDataflowNode, OctaveNumber) == 468, "Offset mismatch for FUniformFractureDataflowNode::OctaveNumber");
static_assert(offsetof(FUniformFractureDataflowNode, PointSpacing) == 472, "Offset mismatch for FUniformFractureDataflowNode::PointSpacing");
static_assert(offsetof(FUniformFractureDataflowNode, AddSamplesForCollision) == 476, "Offset mismatch for FUniformFractureDataflowNode::AddSamplesForCollision");
static_assert(offsetof(FUniformFractureDataflowNode, CollisionSampleSpacing) == 480, "Offset mismatch for FUniformFractureDataflowNode::CollisionSampleSpacing");
static_assert(offsetof(FUniformFractureDataflowNode, NewGeometryTransformSelection) == 488, "Offset mismatch for FUniformFractureDataflowNode::NewGeometryTransformSelection");

// /Script/GeometryCollectionNodes.UniformIntegerFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FUniformIntegerFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::int32_t Magnitude; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    TArray<void*> FieldIntResult; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePositions; // 0x0140 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUniformIntegerFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FUniformIntegerFieldDataflowNode::SamplePositions");
static_assert(offsetof(FUniformIntegerFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FUniformIntegerFieldDataflowNode::SampleIndices");
static_assert(offsetof(FUniformIntegerFieldDataflowNode, Magnitude) == 280, "Offset mismatch for FUniformIntegerFieldDataflowNode::Magnitude");
static_assert(offsetof(FUniformIntegerFieldDataflowNode, FieldIntResult) == 288, "Offset mismatch for FUniformIntegerFieldDataflowNode::FieldIntResult");
static_assert(offsetof(FUniformIntegerFieldDataflowNode, FieldRemap) == 304, "Offset mismatch for FUniformIntegerFieldDataflowNode::FieldRemap");
static_assert(offsetof(FUniformIntegerFieldDataflowNode, NumSamplePositions) == 320, "Offset mismatch for FUniformIntegerFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.UniformPointSamplingDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FUniformPointSamplingDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    float SamplingRadius; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumSamples; // 0x00EC (Size: 0x4, Type: IntProperty)
    float SubSampleDensity; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x00F4 (Size: 0x4, Type: IntProperty)
    TArray<void*> SamplePoints; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleTriangleIDs; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleBarycentricCoords; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePoints; // 0x0128 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUniformPointSamplingDataflowNode, TargetMesh) == 224, "Offset mismatch for FUniformPointSamplingDataflowNode::TargetMesh");
static_assert(offsetof(FUniformPointSamplingDataflowNode, SamplingRadius) == 232, "Offset mismatch for FUniformPointSamplingDataflowNode::SamplingRadius");
static_assert(offsetof(FUniformPointSamplingDataflowNode, MaxNumSamples) == 236, "Offset mismatch for FUniformPointSamplingDataflowNode::MaxNumSamples");
static_assert(offsetof(FUniformPointSamplingDataflowNode, SubSampleDensity) == 240, "Offset mismatch for FUniformPointSamplingDataflowNode::SubSampleDensity");
static_assert(offsetof(FUniformPointSamplingDataflowNode, RandomSeed) == 244, "Offset mismatch for FUniformPointSamplingDataflowNode::RandomSeed");
static_assert(offsetof(FUniformPointSamplingDataflowNode, SamplePoints) == 248, "Offset mismatch for FUniformPointSamplingDataflowNode::SamplePoints");
static_assert(offsetof(FUniformPointSamplingDataflowNode, SampleTriangleIDs) == 264, "Offset mismatch for FUniformPointSamplingDataflowNode::SampleTriangleIDs");
static_assert(offsetof(FUniformPointSamplingDataflowNode, SampleBarycentricCoords) == 280, "Offset mismatch for FUniformPointSamplingDataflowNode::SampleBarycentricCoords");
static_assert(offsetof(FUniformPointSamplingDataflowNode, NumSamplePoints) == 296, "Offset mismatch for FUniformPointSamplingDataflowNode::NumSamplePoints");

// /Script/GeometryCollectionNodes.UniformPointSamplingDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FUniformPointSamplingDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    float SamplingRadius; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumSamples; // 0x00EC (Size: 0x4, Type: IntProperty)
    float SubSampleDensity; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t SamplePoints[0x30]; // 0x00F8 (Size: 0x30, Type: StructProperty)
    TArray<void*> SampleTriangleIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleBarycentricCoords; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePoints; // 0x0148 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUniformPointSamplingDataflowNode_v2, TargetMesh) == 224, "Offset mismatch for FUniformPointSamplingDataflowNode_v2::TargetMesh");
static_assert(offsetof(FUniformPointSamplingDataflowNode_v2, SamplingRadius) == 232, "Offset mismatch for FUniformPointSamplingDataflowNode_v2::SamplingRadius");
static_assert(offsetof(FUniformPointSamplingDataflowNode_v2, MaxNumSamples) == 236, "Offset mismatch for FUniformPointSamplingDataflowNode_v2::MaxNumSamples");
static_assert(offsetof(FUniformPointSamplingDataflowNode_v2, SubSampleDensity) == 240, "Offset mismatch for FUniformPointSamplingDataflowNode_v2::SubSampleDensity");
static_assert(offsetof(FUniformPointSamplingDataflowNode_v2, RandomSeed) == 244, "Offset mismatch for FUniformPointSamplingDataflowNode_v2::RandomSeed");
static_assert(offsetof(FUniformPointSamplingDataflowNode_v2, SamplePoints) == 248, "Offset mismatch for FUniformPointSamplingDataflowNode_v2::SamplePoints");
static_assert(offsetof(FUniformPointSamplingDataflowNode_v2, SampleTriangleIDs) == 296, "Offset mismatch for FUniformPointSamplingDataflowNode_v2::SampleTriangleIDs");
static_assert(offsetof(FUniformPointSamplingDataflowNode_v2, SampleBarycentricCoords) == 312, "Offset mismatch for FUniformPointSamplingDataflowNode_v2::SampleBarycentricCoords");
static_assert(offsetof(FUniformPointSamplingDataflowNode_v2, NumSamplePoints) == 328, "Offset mismatch for FUniformPointSamplingDataflowNode_v2::NumSamplePoints");

// /Script/GeometryCollectionNodes.UniformScalarFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FUniformScalarFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    float Magnitude; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    TArray<void*> FieldFloatResult; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePositions; // 0x0140 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUniformScalarFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FUniformScalarFieldDataflowNode::SamplePositions");
static_assert(offsetof(FUniformScalarFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FUniformScalarFieldDataflowNode::SampleIndices");
static_assert(offsetof(FUniformScalarFieldDataflowNode, Magnitude) == 280, "Offset mismatch for FUniformScalarFieldDataflowNode::Magnitude");
static_assert(offsetof(FUniformScalarFieldDataflowNode, FieldFloatResult) == 288, "Offset mismatch for FUniformScalarFieldDataflowNode::FieldFloatResult");
static_assert(offsetof(FUniformScalarFieldDataflowNode, FieldRemap) == 304, "Offset mismatch for FUniformScalarFieldDataflowNode::FieldRemap");
static_assert(offsetof(FUniformScalarFieldDataflowNode, NumSamplePositions) == 320, "Offset mismatch for FUniformScalarFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.UniformScatterPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FUniformScatterPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t MinNumberOfPoints; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumberOfPoints; // 0x00E4 (Size: 0x4, Type: IntProperty)
    float RandomSeed; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    std::uint8_t BoundingBox[0x38]; // 0x00F0 (Size: 0x38, Type: StructProperty)
    TArray<void*> Points; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUniformScatterPointsDataflowNode, MinNumberOfPoints) == 224, "Offset mismatch for FUniformScatterPointsDataflowNode::MinNumberOfPoints");
static_assert(offsetof(FUniformScatterPointsDataflowNode, MaxNumberOfPoints) == 228, "Offset mismatch for FUniformScatterPointsDataflowNode::MaxNumberOfPoints");
static_assert(offsetof(FUniformScatterPointsDataflowNode, RandomSeed) == 232, "Offset mismatch for FUniformScatterPointsDataflowNode::RandomSeed");
static_assert(offsetof(FUniformScatterPointsDataflowNode, BoundingBox) == 240, "Offset mismatch for FUniformScatterPointsDataflowNode::BoundingBox");
static_assert(offsetof(FUniformScatterPointsDataflowNode, Points) == 296, "Offset mismatch for FUniformScatterPointsDataflowNode::Points");

// /Script/GeometryCollectionNodes.UniformScatterPointsDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FUniformScatterPointsDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t MinNumberOfPoints; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumberOfPoints; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::int32_t RandomSeed; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    std::uint8_t BoundingBox[0x38]; // 0x00F0 (Size: 0x38, Type: StructProperty)
    TArray<void*> Points; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUniformScatterPointsDataflowNode_v2, MinNumberOfPoints) == 224, "Offset mismatch for FUniformScatterPointsDataflowNode_v2::MinNumberOfPoints");
static_assert(offsetof(FUniformScatterPointsDataflowNode_v2, MaxNumberOfPoints) == 228, "Offset mismatch for FUniformScatterPointsDataflowNode_v2::MaxNumberOfPoints");
static_assert(offsetof(FUniformScatterPointsDataflowNode_v2, RandomSeed) == 232, "Offset mismatch for FUniformScatterPointsDataflowNode_v2::RandomSeed");
static_assert(offsetof(FUniformScatterPointsDataflowNode_v2, BoundingBox) == 240, "Offset mismatch for FUniformScatterPointsDataflowNode_v2::BoundingBox");
static_assert(offsetof(FUniformScatterPointsDataflowNode_v2, Points) == 296, "Offset mismatch for FUniformScatterPointsDataflowNode_v2::Points");

// /Script/GeometryCollectionNodes.UniformVectorFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FUniformVectorFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    float Magnitude; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    std::uint8_t Direction[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    TArray<void*> FieldVectorResult; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePositions; // 0x0158 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUniformVectorFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FUniformVectorFieldDataflowNode::SamplePositions");
static_assert(offsetof(FUniformVectorFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FUniformVectorFieldDataflowNode::SampleIndices");
static_assert(offsetof(FUniformVectorFieldDataflowNode, Magnitude) == 280, "Offset mismatch for FUniformVectorFieldDataflowNode::Magnitude");
static_assert(offsetof(FUniformVectorFieldDataflowNode, Direction) == 288, "Offset mismatch for FUniformVectorFieldDataflowNode::Direction");
static_assert(offsetof(FUniformVectorFieldDataflowNode, FieldVectorResult) == 312, "Offset mismatch for FUniformVectorFieldDataflowNode::FieldVectorResult");
static_assert(offsetof(FUniformVectorFieldDataflowNode, FieldRemap) == 328, "Offset mismatch for FUniformVectorFieldDataflowNode::FieldRemap");
static_assert(offsetof(FUniformVectorFieldDataflowNode, NumSamplePositions) == 344, "Offset mismatch for FUniformVectorFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.UnionIntArraysDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FUnionIntArraysDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> InArray1; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InArray2; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutArray; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUnionIntArraysDataflowNode, InArray1) == 224, "Offset mismatch for FUnionIntArraysDataflowNode::InArray1");
static_assert(offsetof(FUnionIntArraysDataflowNode, InArray2) == 240, "Offset mismatch for FUnionIntArraysDataflowNode::InArray2");
static_assert(offsetof(FUnionIntArraysDataflowNode, OutArray) == 256, "Offset mismatch for FUnionIntArraysDataflowNode::OutArray");

// /Script/GeometryCollectionNodes.UpdateVolumeAttributesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FUpdateVolumeAttributesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUpdateVolumeAttributesDataflowNode, Collection) == 224, "Offset mismatch for FUpdateVolumeAttributesDataflowNode::Collection");

// /Script/GeometryCollectionNodes.ValidateGeometryCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FValidateGeometryCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bRemoveUnreferencedGeometry; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveClustersOfOne; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveDanglingClusters; // 0x0112 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FValidateGeometryCollectionDataflowNode, Collection) == 224, "Offset mismatch for FValidateGeometryCollectionDataflowNode::Collection");
static_assert(offsetof(FValidateGeometryCollectionDataflowNode, bRemoveUnreferencedGeometry) == 272, "Offset mismatch for FValidateGeometryCollectionDataflowNode::bRemoveUnreferencedGeometry");
static_assert(offsetof(FValidateGeometryCollectionDataflowNode, bRemoveClustersOfOne) == 273, "Offset mismatch for FValidateGeometryCollectionDataflowNode::bRemoveClustersOfOne");
static_assert(offsetof(FValidateGeometryCollectionDataflowNode, bRemoveDanglingClusters) == 274, "Offset mismatch for FValidateGeometryCollectionDataflowNode::bRemoveDanglingClusters");

// /Script/GeometryCollectionNodes.VectorArrayNormalizeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FVectorArrayNormalizeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> InVectorArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Selection[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    float Magnitude; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    TArray<void*> OutVectorArray; // 0x0120 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVectorArrayNormalizeDataflowNode, InVectorArray) == 224, "Offset mismatch for FVectorArrayNormalizeDataflowNode::InVectorArray");
static_assert(offsetof(FVectorArrayNormalizeDataflowNode, Selection) == 240, "Offset mismatch for FVectorArrayNormalizeDataflowNode::Selection");
static_assert(offsetof(FVectorArrayNormalizeDataflowNode, Magnitude) == 280, "Offset mismatch for FVectorArrayNormalizeDataflowNode::Magnitude");
static_assert(offsetof(FVectorArrayNormalizeDataflowNode, OutVectorArray) == 288, "Offset mismatch for FVectorArrayNormalizeDataflowNode::OutVectorArray");

// /Script/GeometryCollectionNodes.VectorToStringDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FVectorToStringDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Vector[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    FString String; // 0x00F8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVectorToStringDataflowNode, Vector) == 224, "Offset mismatch for FVectorToStringDataflowNode::Vector");
static_assert(offsetof(FVectorToStringDataflowNode, String) == 248, "Offset mismatch for FVectorToStringDataflowNode::String");

// /Script/GeometryCollectionNodes.VertexWeightedPointSamplingDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FVertexWeightedPointSamplingDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VertexWeights; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    float SamplingRadius; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumSamples; // 0x00FC (Size: 0x4, Type: IntProperty)
    float SubSampleDensity; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x0104 (Size: 0x4, Type: IntProperty)
    float MaxSamplingRadius; // 0x0108 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SizeDistribution; // 0x010C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x010D
    float SizeDistributionPower; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WeightMode; // 0x0114 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvertWeights; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    TArray<void*> SamplePoints; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleRadii; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleTriangleIDs; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleBarycentricCoords; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePoints; // 0x0158 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, TargetMesh) == 224, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::TargetMesh");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, VertexWeights) == 232, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::VertexWeights");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, SamplingRadius) == 248, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::SamplingRadius");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, MaxNumSamples) == 252, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::MaxNumSamples");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, SubSampleDensity) == 256, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::SubSampleDensity");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, RandomSeed) == 260, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::RandomSeed");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, MaxSamplingRadius) == 264, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::MaxSamplingRadius");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, SizeDistribution) == 268, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::SizeDistribution");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, SizeDistributionPower) == 272, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::SizeDistributionPower");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, WeightMode) == 276, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::WeightMode");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, bInvertWeights) == 277, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::bInvertWeights");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, SamplePoints) == 280, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::SamplePoints");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, SampleRadii) == 296, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::SampleRadii");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, SampleTriangleIDs) == 312, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::SampleTriangleIDs");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, SampleBarycentricCoords) == 328, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::SampleBarycentricCoords");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode, NumSamplePoints) == 344, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode::NumSamplePoints");

// /Script/GeometryCollectionNodes.VertexWeightedPointSamplingDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FVertexWeightedPointSamplingDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VertexWeights; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    float SamplingRadius; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumSamples; // 0x00FC (Size: 0x4, Type: IntProperty)
    float SubSampleDensity; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x0104 (Size: 0x4, Type: IntProperty)
    float MaxSamplingRadius; // 0x0108 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SizeDistribution; // 0x010C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x010D
    float SizeDistributionPower; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WeightMode; // 0x0114 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvertWeights; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    std::uint8_t SamplePoints[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    TArray<void*> SampleRadii; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleTriangleIDs; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleBarycentricCoords; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePoints; // 0x0178 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, TargetMesh) == 224, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::TargetMesh");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, VertexWeights) == 232, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::VertexWeights");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, SamplingRadius) == 248, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::SamplingRadius");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, MaxNumSamples) == 252, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::MaxNumSamples");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, SubSampleDensity) == 256, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::SubSampleDensity");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, RandomSeed) == 260, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::RandomSeed");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, MaxSamplingRadius) == 264, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::MaxSamplingRadius");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, SizeDistribution) == 268, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::SizeDistribution");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, SizeDistributionPower) == 272, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::SizeDistributionPower");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, WeightMode) == 276, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::WeightMode");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, bInvertWeights) == 277, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::bInvertWeights");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, SamplePoints) == 280, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::SamplePoints");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, SampleRadii) == 328, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::SampleRadii");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, SampleTriangleIDs) == 344, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::SampleTriangleIDs");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, SampleBarycentricCoords) == 360, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::SampleBarycentricCoords");
static_assert(offsetof(FVertexWeightedPointSamplingDataflowNode_v2, NumSamplePoints) == 376, "Offset mismatch for FVertexWeightedPointSamplingDataflowNode_v2::NumSamplePoints");

// /Script/GeometryCollectionNodes.VisualizeFractureDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FVisualizeFractureDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::int32_t Level; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::int32_t RandomSeed; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::uint8_t bApplyExplodedView; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0119
    float ExplodeAmount; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Scale[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t bApplyColor; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ColoringType; // 0x0139 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x013A
    std::int32_t RandomColorRangeMin; // 0x013C (Size: 0x4, Type: IntProperty)
    std::int32_t RandomColorRangeMax; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0144
    FString Attribute; // 0x0148 (Size: 0x10, Type: StrProperty)
    std::uint8_t min[0x14]; // 0x0158 (Size: 0x14, Type: StructProperty)
    std::uint8_t max[0x14]; // 0x016C (Size: 0x14, Type: StructProperty)
    std::uint8_t Offset[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVisualizeFractureDataflowNode, Collection) == 224, "Offset mismatch for FVisualizeFractureDataflowNode::Collection");
static_assert(offsetof(FVisualizeFractureDataflowNode, Level) == 272, "Offset mismatch for FVisualizeFractureDataflowNode::Level");
static_assert(offsetof(FVisualizeFractureDataflowNode, RandomSeed) == 276, "Offset mismatch for FVisualizeFractureDataflowNode::RandomSeed");
static_assert(offsetof(FVisualizeFractureDataflowNode, bApplyExplodedView) == 280, "Offset mismatch for FVisualizeFractureDataflowNode::bApplyExplodedView");
static_assert(offsetof(FVisualizeFractureDataflowNode, ExplodeAmount) == 284, "Offset mismatch for FVisualizeFractureDataflowNode::ExplodeAmount");
static_assert(offsetof(FVisualizeFractureDataflowNode, Scale) == 288, "Offset mismatch for FVisualizeFractureDataflowNode::Scale");
static_assert(offsetof(FVisualizeFractureDataflowNode, bApplyColor) == 312, "Offset mismatch for FVisualizeFractureDataflowNode::bApplyColor");
static_assert(offsetof(FVisualizeFractureDataflowNode, ColoringType) == 313, "Offset mismatch for FVisualizeFractureDataflowNode::ColoringType");
static_assert(offsetof(FVisualizeFractureDataflowNode, RandomColorRangeMin) == 316, "Offset mismatch for FVisualizeFractureDataflowNode::RandomColorRangeMin");
static_assert(offsetof(FVisualizeFractureDataflowNode, RandomColorRangeMax) == 320, "Offset mismatch for FVisualizeFractureDataflowNode::RandomColorRangeMax");
static_assert(offsetof(FVisualizeFractureDataflowNode, Attribute) == 328, "Offset mismatch for FVisualizeFractureDataflowNode::Attribute");
static_assert(offsetof(FVisualizeFractureDataflowNode, min) == 344, "Offset mismatch for FVisualizeFractureDataflowNode::min");
static_assert(offsetof(FVisualizeFractureDataflowNode, max) == 364, "Offset mismatch for FVisualizeFractureDataflowNode::max");
static_assert(offsetof(FVisualizeFractureDataflowNode, Offset) == 384, "Offset mismatch for FVisualizeFractureDataflowNode::Offset");

// /Script/GeometryCollectionNodes.VisualizeTetrahedronsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FVisualizeTetrahedronsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Vertices; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVisualizeTetrahedronsDataflowNode, Collection) == 224, "Offset mismatch for FVisualizeTetrahedronsDataflowNode::Collection");
static_assert(offsetof(FVisualizeTetrahedronsDataflowNode, Vertices) == 272, "Offset mismatch for FVisualizeTetrahedronsDataflowNode::Vertices");

// /Script/GeometryCollectionNodes.VoronoiFractureDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FVoronoiFractureDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Points; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TransformSelection[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    float RandomSeed; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float ChanceToFracture; // 0x014C (Size: 0x4, Type: FloatProperty)
    std::uint8_t GroupFracture; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0151
    float Grout; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float Amplitude; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x015C (Size: 0x4, Type: FloatProperty)
    float Persistence; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float Lacunarity; // 0x0164 (Size: 0x4, Type: FloatProperty)
    std::int32_t OctaveNumber; // 0x0168 (Size: 0x4, Type: IntProperty)
    float PointSpacing; // 0x016C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AddSamplesForCollision; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0171
    float CollisionSampleSpacing; // 0x0174 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVoronoiFractureDataflowNode, Collection) == 224, "Offset mismatch for FVoronoiFractureDataflowNode::Collection");
static_assert(offsetof(FVoronoiFractureDataflowNode, Points) == 272, "Offset mismatch for FVoronoiFractureDataflowNode::Points");
static_assert(offsetof(FVoronoiFractureDataflowNode, TransformSelection) == 288, "Offset mismatch for FVoronoiFractureDataflowNode::TransformSelection");
static_assert(offsetof(FVoronoiFractureDataflowNode, RandomSeed) == 328, "Offset mismatch for FVoronoiFractureDataflowNode::RandomSeed");
static_assert(offsetof(FVoronoiFractureDataflowNode, ChanceToFracture) == 332, "Offset mismatch for FVoronoiFractureDataflowNode::ChanceToFracture");
static_assert(offsetof(FVoronoiFractureDataflowNode, GroupFracture) == 336, "Offset mismatch for FVoronoiFractureDataflowNode::GroupFracture");
static_assert(offsetof(FVoronoiFractureDataflowNode, Grout) == 340, "Offset mismatch for FVoronoiFractureDataflowNode::Grout");
static_assert(offsetof(FVoronoiFractureDataflowNode, Amplitude) == 344, "Offset mismatch for FVoronoiFractureDataflowNode::Amplitude");
static_assert(offsetof(FVoronoiFractureDataflowNode, Frequency) == 348, "Offset mismatch for FVoronoiFractureDataflowNode::Frequency");
static_assert(offsetof(FVoronoiFractureDataflowNode, Persistence) == 352, "Offset mismatch for FVoronoiFractureDataflowNode::Persistence");
static_assert(offsetof(FVoronoiFractureDataflowNode, Lacunarity) == 356, "Offset mismatch for FVoronoiFractureDataflowNode::Lacunarity");
static_assert(offsetof(FVoronoiFractureDataflowNode, OctaveNumber) == 360, "Offset mismatch for FVoronoiFractureDataflowNode::OctaveNumber");
static_assert(offsetof(FVoronoiFractureDataflowNode, PointSpacing) == 364, "Offset mismatch for FVoronoiFractureDataflowNode::PointSpacing");
static_assert(offsetof(FVoronoiFractureDataflowNode, AddSamplesForCollision) == 368, "Offset mismatch for FVoronoiFractureDataflowNode::AddSamplesForCollision");
static_assert(offsetof(FVoronoiFractureDataflowNode, CollisionSampleSpacing) == 372, "Offset mismatch for FVoronoiFractureDataflowNode::CollisionSampleSpacing");

// /Script/GeometryCollectionNodes.VoronoiFractureDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FVoronoiFractureDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> Points; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TransformSelection[0x30]; // 0x0120 (Size: 0x30, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0150 (Size: 0x60, Type: StructProperty)
    std::int32_t RandomSeed; // 0x01B0 (Size: 0x4, Type: IntProperty)
    float ChanceToFracture; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SplitIslands; // 0x01B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01B9
    float CloseVertexDistance; // 0x01BC (Size: 0x4, Type: FloatProperty)
    float VertexToSurfaceBridgeDistance; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float Grout; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    float Amplitude; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x01CC (Size: 0x4, Type: FloatProperty)
    float Persistence; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    float Lacunarity; // 0x01D4 (Size: 0x4, Type: FloatProperty)
    std::int32_t OctaveNumber; // 0x01D8 (Size: 0x4, Type: IntProperty)
    float PointSpacing; // 0x01DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t AddSamplesForCollision; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01E1
    float CollisionSampleSpacing; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NewGeometryTransformSelection[0x1]; // 0x01E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVoronoiFractureDataflowNode_v2, Collection) == 224, "Offset mismatch for FVoronoiFractureDataflowNode_v2::Collection");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, Points) == 272, "Offset mismatch for FVoronoiFractureDataflowNode_v2::Points");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, TransformSelection) == 288, "Offset mismatch for FVoronoiFractureDataflowNode_v2::TransformSelection");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, Transform) == 336, "Offset mismatch for FVoronoiFractureDataflowNode_v2::Transform");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, RandomSeed) == 432, "Offset mismatch for FVoronoiFractureDataflowNode_v2::RandomSeed");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, ChanceToFracture) == 436, "Offset mismatch for FVoronoiFractureDataflowNode_v2::ChanceToFracture");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, SplitIslands) == 440, "Offset mismatch for FVoronoiFractureDataflowNode_v2::SplitIslands");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, CloseVertexDistance) == 444, "Offset mismatch for FVoronoiFractureDataflowNode_v2::CloseVertexDistance");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, VertexToSurfaceBridgeDistance) == 448, "Offset mismatch for FVoronoiFractureDataflowNode_v2::VertexToSurfaceBridgeDistance");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, Grout) == 452, "Offset mismatch for FVoronoiFractureDataflowNode_v2::Grout");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, Amplitude) == 456, "Offset mismatch for FVoronoiFractureDataflowNode_v2::Amplitude");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, Frequency) == 460, "Offset mismatch for FVoronoiFractureDataflowNode_v2::Frequency");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, Persistence) == 464, "Offset mismatch for FVoronoiFractureDataflowNode_v2::Persistence");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, Lacunarity) == 468, "Offset mismatch for FVoronoiFractureDataflowNode_v2::Lacunarity");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, OctaveNumber) == 472, "Offset mismatch for FVoronoiFractureDataflowNode_v2::OctaveNumber");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, PointSpacing) == 476, "Offset mismatch for FVoronoiFractureDataflowNode_v2::PointSpacing");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, AddSamplesForCollision) == 480, "Offset mismatch for FVoronoiFractureDataflowNode_v2::AddSamplesForCollision");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, CollisionSampleSpacing) == 484, "Offset mismatch for FVoronoiFractureDataflowNode_v2::CollisionSampleSpacing");
static_assert(offsetof(FVoronoiFractureDataflowNode_v2, NewGeometryTransformSelection) == 488, "Offset mismatch for FVoronoiFractureDataflowNode_v2::NewGeometryTransformSelection");

// /Script/GeometryCollectionNodes.WaveScalarFieldDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FWaveScalarFieldDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SamplePositions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SampleIndices[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    float Magnitude; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    std::uint8_t Position[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t Translation[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    float Wavelength; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float Period; // 0x0154 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FunctionType; // 0x0158 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FalloffType; // 0x0159 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x015A
    TArray<void*> FieldFloatResult; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldRemap; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumSamplePositions; // 0x0180 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FWaveScalarFieldDataflowNode, SamplePositions) == 224, "Offset mismatch for FWaveScalarFieldDataflowNode::SamplePositions");
static_assert(offsetof(FWaveScalarFieldDataflowNode, SampleIndices) == 240, "Offset mismatch for FWaveScalarFieldDataflowNode::SampleIndices");
static_assert(offsetof(FWaveScalarFieldDataflowNode, Magnitude) == 280, "Offset mismatch for FWaveScalarFieldDataflowNode::Magnitude");
static_assert(offsetof(FWaveScalarFieldDataflowNode, Position) == 288, "Offset mismatch for FWaveScalarFieldDataflowNode::Position");
static_assert(offsetof(FWaveScalarFieldDataflowNode, Translation) == 312, "Offset mismatch for FWaveScalarFieldDataflowNode::Translation");
static_assert(offsetof(FWaveScalarFieldDataflowNode, Wavelength) == 336, "Offset mismatch for FWaveScalarFieldDataflowNode::Wavelength");
static_assert(offsetof(FWaveScalarFieldDataflowNode, Period) == 340, "Offset mismatch for FWaveScalarFieldDataflowNode::Period");
static_assert(offsetof(FWaveScalarFieldDataflowNode, FunctionType) == 344, "Offset mismatch for FWaveScalarFieldDataflowNode::FunctionType");
static_assert(offsetof(FWaveScalarFieldDataflowNode, FalloffType) == 345, "Offset mismatch for FWaveScalarFieldDataflowNode::FalloffType");
static_assert(offsetof(FWaveScalarFieldDataflowNode, FieldFloatResult) == 352, "Offset mismatch for FWaveScalarFieldDataflowNode::FieldFloatResult");
static_assert(offsetof(FWaveScalarFieldDataflowNode, FieldRemap) == 368, "Offset mismatch for FWaveScalarFieldDataflowNode::FieldRemap");
static_assert(offsetof(FWaveScalarFieldDataflowNode, NumSamplePositions) == 384, "Offset mismatch for FWaveScalarFieldDataflowNode::NumSamplePositions");

// /Script/GeometryCollectionNodes.WrapDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FWrapDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float float_; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float min; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float max; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float ReturnValue; // 0x00EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWrapDataflowNode, float_) == 224, "Offset mismatch for FWrapDataflowNode::float_");
static_assert(offsetof(FWrapDataflowNode, min) == 228, "Offset mismatch for FWrapDataflowNode::min");
static_assert(offsetof(FWrapDataflowNode, max) == 232, "Offset mismatch for FWrapDataflowNode::max");
static_assert(offsetof(FWrapDataflowNode, ReturnValue) == 236, "Offset mismatch for FWrapDataflowNode::ReturnValue");

// /Script/GeometryCollectionNodes.WriteStringToFile
// Kind: ScriptStruct; super: DataflowNode
struct FWriteStringToFile
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString FilePath; // 0x00E0 (Size: 0x10, Type: StrProperty)
    FString FileContents; // 0x00F0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FWriteStringToFile, FilePath) == 224, "Offset mismatch for FWriteStringToFile::FilePath");
static_assert(offsetof(FWriteStringToFile, FileContents) == 240, "Offset mismatch for FWriteStringToFile::FileContents");
