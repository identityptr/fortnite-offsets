/**
 * decamp dumper generated SDK
 * Package: /Script/DataflowNodes
 */
#pragma once
#include "Basic.h"

// /Script/DataflowNodes.BreakAttributeKeyDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FBreakAttributeKeyDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t AttributeKeyIn[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    FString AttributeOut; // 0x0100 (Size: 0x10, Type: StrProperty)
    FString GroupOut; // 0x0110 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FBreakAttributeKeyDataflowNode, AttributeKeyIn) == 224, "Offset mismatch for FBreakAttributeKeyDataflowNode::AttributeKeyIn");
static_assert(offsetof(FBreakAttributeKeyDataflowNode, AttributeOut) == 256, "Offset mismatch for FBreakAttributeKeyDataflowNode::AttributeOut");
static_assert(offsetof(FBreakAttributeKeyDataflowNode, GroupOut) == 272, "Offset mismatch for FBreakAttributeKeyDataflowNode::GroupOut");

// /Script/DataflowNodes.ColorToFColorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FColorToFColorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t LinearColor[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Color[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FColorToFColorDataflowNode, LinearColor) == 224, "Offset mismatch for FColorToFColorDataflowNode::LinearColor");
static_assert(offsetof(FColorToFColorDataflowNode, Color) == 240, "Offset mismatch for FColorToFColorDataflowNode::Color");

// /Script/DataflowNodes.DataflowAbsFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowAbsFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowAbsSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowAbsSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowAbsSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowAbsSamplerNode::Sampler");

// /Script/DataflowNodes.DataflowAbsVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowAbsVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowAddFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowAddFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowAddSamplerNode
// Kind: ScriptStruct; super: DataflowMultiInputSamplerNodeBase
struct FDataflowAddSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> InputSamplers; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Sampler[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowAddSamplerNode, InputSamplers) == 224, "Offset mismatch for FDataflowAddSamplerNode::InputSamplers");
static_assert(offsetof(FDataflowAddSamplerNode, Sampler) == 240, "Offset mismatch for FDataflowAddSamplerNode::Sampler");

// /Script/DataflowNodes.DataflowAddVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowAddVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowAttributeProxy
// Kind: ScriptStruct; super: none
struct FDataflowAttributeProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowCharge
// Kind: ScriptStruct; super: none
struct FDataflowCharge
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    double Charge; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDataflowCharge, Position) == 0, "Offset mismatch for FDataflowCharge::Position");
static_assert(offsetof(FDataflowCharge, Charge) == 24, "Offset mismatch for FDataflowCharge::Charge");

// /Script/DataflowNodes.DataflowClampFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowClampFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float min; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float max; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowClampFloatSampler, min) == 8, "Offset mismatch for FDataflowClampFloatSampler::min");
static_assert(offsetof(FDataflowClampFloatSampler, max) == 12, "Offset mismatch for FDataflowClampFloatSampler::max");

// /Script/DataflowNodes.DataflowClampFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowClampFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClampSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowClampFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowClampFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowClampFloatSamplerNode, ClampSampler) == 248, "Offset mismatch for FDataflowClampFloatSamplerNode::ClampSampler");

// /Script/DataflowNodes.DataflowCollectionAddScalarVertexPropertyNode
// Kind: ScriptStruct; super: DataflowVertexAttributeEditableNode
struct FDataflowCollectionAddScalarVertexPropertyNode
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    FString Name; // 0x0148 (Size: 0x10, Type: StrProperty)
    std::uint8_t AttributeKey[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    TArray<void*> VertexWeights; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetGroup[0x4]; // 0x0188 (Size: 0x4, Type: StructProperty)
    std::uint8_t OverrideType; // 0x018C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDataflowCollectionAddScalarVertexPropertyNode, Collection) == 280, "Offset mismatch for FDataflowCollectionAddScalarVertexPropertyNode::Collection");
static_assert(offsetof(FDataflowCollectionAddScalarVertexPropertyNode, Name) == 328, "Offset mismatch for FDataflowCollectionAddScalarVertexPropertyNode::Name");
static_assert(offsetof(FDataflowCollectionAddScalarVertexPropertyNode, AttributeKey) == 344, "Offset mismatch for FDataflowCollectionAddScalarVertexPropertyNode::AttributeKey");
static_assert(offsetof(FDataflowCollectionAddScalarVertexPropertyNode, VertexWeights) == 376, "Offset mismatch for FDataflowCollectionAddScalarVertexPropertyNode::VertexWeights");
static_assert(offsetof(FDataflowCollectionAddScalarVertexPropertyNode, TargetGroup) == 392, "Offset mismatch for FDataflowCollectionAddScalarVertexPropertyNode::TargetGroup");
static_assert(offsetof(FDataflowCollectionAddScalarVertexPropertyNode, OverrideType) == 396, "Offset mismatch for FDataflowCollectionAddScalarVertexPropertyNode::OverrideType");

// /Script/DataflowNodes.DataflowCollectionEditSkeletonBonesNode
// Kind: ScriptStruct; super: DataflowPrimitiveNode
struct FDataflowCollectionEditSkeletonBonesNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t VertexGroup[0x8]; // 0x0110 (Size: 0x8, Type: StructProperty)
    void* skeleton; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* ToolSkeleton; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0128
    TArray<void*> SkeletalMeshes; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowCollectionEditSkeletonBonesNode, Collection) == 224, "Offset mismatch for FDataflowCollectionEditSkeletonBonesNode::Collection");
static_assert(offsetof(FDataflowCollectionEditSkeletonBonesNode, VertexGroup) == 272, "Offset mismatch for FDataflowCollectionEditSkeletonBonesNode::VertexGroup");
static_assert(offsetof(FDataflowCollectionEditSkeletonBonesNode, skeleton) == 280, "Offset mismatch for FDataflowCollectionEditSkeletonBonesNode::skeleton");
static_assert(offsetof(FDataflowCollectionEditSkeletonBonesNode, ToolSkeleton) == 288, "Offset mismatch for FDataflowCollectionEditSkeletonBonesNode::ToolSkeleton");
static_assert(offsetof(FDataflowCollectionEditSkeletonBonesNode, SkeletalMeshes) == 320, "Offset mismatch for FDataflowCollectionEditSkeletonBonesNode::SkeletalMeshes");

// /Script/DataflowNodes.DataflowCollectionEditSkinWeightsNode
// Kind: ScriptStruct; super: DataflowPrimitiveNode
struct FDataflowCollectionEditSkinWeightsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString BoneIndicesName; // 0x0110 (Size: 0x10, Type: StrProperty)
    FString BoneWeightsName; // 0x0120 (Size: 0x10, Type: StrProperty)
    std::uint8_t VertexGroup[0x8]; // 0x0130 (Size: 0x8, Type: StructProperty)
    std::uint8_t BoneIndicesKey[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoneWeightsKey[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    void* SkeletalMesh; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCompressSkinWeights; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0181
    TArray<void*> SkinWeights; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t VertexSkinWeights[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::int32_t SkinWeightsRefSkeletonHash; // 0x01C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x1C]; // 0x01C4
    TArray<void*> SkeletalMeshes; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x8]; // 0x01F0
    TArray<void*> DynamicMeshes; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, Collection) == 224, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::Collection");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, BoneIndicesName) == 272, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::BoneIndicesName");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, BoneWeightsName) == 288, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::BoneWeightsName");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, VertexGroup) == 304, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::VertexGroup");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, BoneIndicesKey) == 312, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::BoneIndicesKey");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, BoneWeightsKey) == 344, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::BoneWeightsKey");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, SkeletalMesh) == 376, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::SkeletalMesh");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, bCompressSkinWeights) == 384, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::bCompressSkinWeights");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, SkinWeights) == 392, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::SkinWeights");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, VertexSkinWeights) == 408, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::VertexSkinWeights");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, SkinWeightsRefSkeletonHash) == 448, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::SkinWeightsRefSkeletonHash");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, SkeletalMeshes) == 480, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::SkeletalMeshes");
static_assert(offsetof(FDataflowCollectionEditSkinWeightsNode, DynamicMeshes) == 504, "Offset mismatch for FDataflowCollectionEditSkinWeightsNode::DynamicMeshes");

// /Script/DataflowNodes.DataflowCollectionSetSkinningSkeletalMesh
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowCollectionSetSkinningSkeletalMesh
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    void* SkeletalMesh; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LODIndex; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    std::uint8_t GeometrySelection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowCollectionSetSkinningSkeletalMesh, Collection) == 224, "Offset mismatch for FDataflowCollectionSetSkinningSkeletalMesh::Collection");
static_assert(offsetof(FDataflowCollectionSetSkinningSkeletalMesh, SkeletalMesh) == 272, "Offset mismatch for FDataflowCollectionSetSkinningSkeletalMesh::SkeletalMesh");
static_assert(offsetof(FDataflowCollectionSetSkinningSkeletalMesh, LODIndex) == 280, "Offset mismatch for FDataflowCollectionSetSkinningSkeletalMesh::LODIndex");
static_assert(offsetof(FDataflowCollectionSetSkinningSkeletalMesh, GeometrySelection) == 288, "Offset mismatch for FDataflowCollectionSetSkinningSkeletalMesh::GeometrySelection");

// /Script/DataflowNodes.DataflowCollectionVerticesToPointsNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowCollectionVerticesToPointsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bCopyAttributes; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    std::uint8_t Selection[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t bScatterExtraPoints; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeterministic; // 0x0141 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0142
    std::int32_t RandomSeed; // 0x0144 (Size: 0x4, Type: IntProperty)
    float PointDensity; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x014C
    std::uint8_t Points[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowCollectionVerticesToPointsNode, Collection) == 224, "Offset mismatch for FDataflowCollectionVerticesToPointsNode::Collection");
static_assert(offsetof(FDataflowCollectionVerticesToPointsNode, bCopyAttributes) == 272, "Offset mismatch for FDataflowCollectionVerticesToPointsNode::bCopyAttributes");
static_assert(offsetof(FDataflowCollectionVerticesToPointsNode, Selection) == 280, "Offset mismatch for FDataflowCollectionVerticesToPointsNode::Selection");
static_assert(offsetof(FDataflowCollectionVerticesToPointsNode, bScatterExtraPoints) == 320, "Offset mismatch for FDataflowCollectionVerticesToPointsNode::bScatterExtraPoints");
static_assert(offsetof(FDataflowCollectionVerticesToPointsNode, bDeterministic) == 321, "Offset mismatch for FDataflowCollectionVerticesToPointsNode::bDeterministic");
static_assert(offsetof(FDataflowCollectionVerticesToPointsNode, RandomSeed) == 324, "Offset mismatch for FDataflowCollectionVerticesToPointsNode::RandomSeed");
static_assert(offsetof(FDataflowCollectionVerticesToPointsNode, PointDensity) == 328, "Offset mismatch for FDataflowCollectionVerticesToPointsNode::PointDensity");
static_assert(offsetof(FDataflowCollectionVerticesToPointsNode, Points) == 336, "Offset mismatch for FDataflowCollectionVerticesToPointsNode::Points");

// /Script/DataflowNodes.DataflowColorRampSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowColorRampSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ColorSampler[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ColorRampSampler[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowColorRampSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowColorRampSamplerNode::Sampler");
static_assert(offsetof(FDataflowColorRampSamplerNode, ColorSampler) == 248, "Offset mismatch for FDataflowColorRampSamplerNode::ColorSampler");
static_assert(offsetof(FDataflowColorRampSamplerNode, ColorRampSampler) == 272, "Offset mismatch for FDataflowColorRampSamplerNode::ColorRampSampler");

// /Script/DataflowNodes.DataflowColorRampVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowColorRampVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float min; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float max; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ColorRamp[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowColorRampVectorSampler, min) == 8, "Offset mismatch for FDataflowColorRampVectorSampler::min");
static_assert(offsetof(FDataflowColorRampVectorSampler, max) == 12, "Offset mismatch for FDataflowColorRampVectorSampler::max");
static_assert(offsetof(FDataflowColorRampVectorSampler, ColorRamp) == 16, "Offset mismatch for FDataflowColorRampVectorSampler::ColorRamp");

// /Script/DataflowNodes.DataflowCombineFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowCombineFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t FloatSamplerX[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t FloatSamplerY[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t FloatSamplerZ[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t VectorSampler[0x1]; // 0x0128 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowCombineFloatSamplerNode, FloatSamplerX) == 224, "Offset mismatch for FDataflowCombineFloatSamplerNode::FloatSamplerX");
static_assert(offsetof(FDataflowCombineFloatSamplerNode, FloatSamplerY) == 248, "Offset mismatch for FDataflowCombineFloatSamplerNode::FloatSamplerY");
static_assert(offsetof(FDataflowCombineFloatSamplerNode, FloatSamplerZ) == 272, "Offset mismatch for FDataflowCombineFloatSamplerNode::FloatSamplerZ");
static_assert(offsetof(FDataflowCombineFloatSamplerNode, VectorSampler) == 296, "Offset mismatch for FDataflowCombineFloatSamplerNode::VectorSampler");

// /Script/DataflowNodes.DataflowCombineVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowCombineVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowDistanceFromBoxFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowDistanceFromBoxFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Box[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowDistanceFromBoxFloatSampler, Box) == 8, "Offset mismatch for FDataflowDistanceFromBoxFloatSampler::Box");

// /Script/DataflowNodes.DataflowDistanceFromBoxFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowDistanceFromBoxFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DistanceFromBoxSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowDistanceFromBoxFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowDistanceFromBoxFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowDistanceFromBoxFloatSamplerNode, DistanceFromBoxSampler) == 248, "Offset mismatch for FDataflowDistanceFromBoxFloatSamplerNode::DistanceFromBoxSampler");

// /Script/DataflowNodes.DataflowDistanceFromPlaneFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowDistanceFromPlaneFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Plane[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowDistanceFromPlaneFloatSampler, Plane) == 8, "Offset mismatch for FDataflowDistanceFromPlaneFloatSampler::Plane");

// /Script/DataflowNodes.DataflowDistanceFromPlaneFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowDistanceFromPlaneFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DistanceFromPlaneSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowDistanceFromPlaneFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowDistanceFromPlaneFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowDistanceFromPlaneFloatSamplerNode, DistanceFromPlaneSampler) == 248, "Offset mismatch for FDataflowDistanceFromPlaneFloatSamplerNode::DistanceFromPlaneSampler");

// /Script/DataflowNodes.DataflowDistanceFromSphereFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowDistanceFromSphereFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Sphere[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowDistanceFromSphereFloatSampler, Sphere) == 8, "Offset mismatch for FDataflowDistanceFromSphereFloatSampler::Sphere");

// /Script/DataflowNodes.DataflowDistanceFromSphereFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowDistanceFromSphereFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DistanceFromSphereSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowDistanceFromSphereFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowDistanceFromSphereFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowDistanceFromSphereFloatSamplerNode, DistanceFromSphereSampler) == 248, "Offset mismatch for FDataflowDistanceFromSphereFloatSamplerNode::DistanceFromSphereSampler");

// /Script/DataflowNodes.DataflowElectricFieldVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowElectricFieldVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Charges; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    double Scalar; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bClamp; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    double MaxMagnitude; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ChargesFromSampler[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t RenderBounds[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowElectricFieldVectorSampler, Charges) == 8, "Offset mismatch for FDataflowElectricFieldVectorSampler::Charges");
static_assert(offsetof(FDataflowElectricFieldVectorSampler, Scalar) == 24, "Offset mismatch for FDataflowElectricFieldVectorSampler::Scalar");
static_assert(offsetof(FDataflowElectricFieldVectorSampler, bClamp) == 32, "Offset mismatch for FDataflowElectricFieldVectorSampler::bClamp");
static_assert(offsetof(FDataflowElectricFieldVectorSampler, MaxMagnitude) == 40, "Offset mismatch for FDataflowElectricFieldVectorSampler::MaxMagnitude");
static_assert(offsetof(FDataflowElectricFieldVectorSampler, ChargesFromSampler) == 48, "Offset mismatch for FDataflowElectricFieldVectorSampler::ChargesFromSampler");
static_assert(offsetof(FDataflowElectricFieldVectorSampler, RenderBounds) == 96, "Offset mismatch for FDataflowElectricFieldVectorSampler::RenderBounds");

// /Script/DataflowNodes.DataflowElectricFieldVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowElectricFieldVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Charges[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Sampler[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t ElectricFieldSampler[0x1]; // 0x0128 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowElectricFieldVectorSamplerNode, Charges) == 224, "Offset mismatch for FDataflowElectricFieldVectorSamplerNode::Charges");
static_assert(offsetof(FDataflowElectricFieldVectorSamplerNode, Sampler) == 272, "Offset mismatch for FDataflowElectricFieldVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowElectricFieldVectorSamplerNode, ElectricFieldSampler) == 296, "Offset mismatch for FDataflowElectricFieldVectorSamplerNode::ElectricFieldSampler");

// /Script/DataflowNodes.DataflowFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowFloatSamplerBase
// Kind: ScriptStruct; super: none
struct FDataflowFloatSamplerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowFloatSamplerToAttributeNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowFloatSamplerToAttributeNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Sampler[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    FString AttributeName; // 0x0128 (Size: 0x10, Type: StrProperty)
    std::uint8_t VertexGroup[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowFloatSamplerToAttributeNode, Collection) == 224, "Offset mismatch for FDataflowFloatSamplerToAttributeNode::Collection");
static_assert(offsetof(FDataflowFloatSamplerToAttributeNode, Sampler) == 272, "Offset mismatch for FDataflowFloatSamplerToAttributeNode::Sampler");
static_assert(offsetof(FDataflowFloatSamplerToAttributeNode, AttributeName) == 296, "Offset mismatch for FDataflowFloatSamplerToAttributeNode::AttributeName");
static_assert(offsetof(FDataflowFloatSamplerToAttributeNode, VertexGroup) == 312, "Offset mismatch for FDataflowFloatSamplerToAttributeNode::VertexGroup");

// /Script/DataflowNodes.DataflowGetCollectionBoundsNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowGetCollectionBoundsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Selection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Bounds[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t Sphere[0x20]; // 0x0170 (Size: 0x20, Type: StructProperty)
    std::uint8_t VertexGroup[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowGetCollectionBoundsNode, Collection) == 224, "Offset mismatch for FDataflowGetCollectionBoundsNode::Collection");
static_assert(offsetof(FDataflowGetCollectionBoundsNode, Selection) == 272, "Offset mismatch for FDataflowGetCollectionBoundsNode::Selection");
static_assert(offsetof(FDataflowGetCollectionBoundsNode, Bounds) == 312, "Offset mismatch for FDataflowGetCollectionBoundsNode::Bounds");
static_assert(offsetof(FDataflowGetCollectionBoundsNode, Sphere) == 368, "Offset mismatch for FDataflowGetCollectionBoundsNode::Sphere");
static_assert(offsetof(FDataflowGetCollectionBoundsNode, VertexGroup) == 400, "Offset mismatch for FDataflowGetCollectionBoundsNode::VertexGroup");

// /Script/DataflowNodes.DataflowGetPointsBoundsNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowGetPointsBoundsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Points[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Selection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Bounds[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t Sphere[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowGetPointsBoundsNode, Points) == 224, "Offset mismatch for FDataflowGetPointsBoundsNode::Points");
static_assert(offsetof(FDataflowGetPointsBoundsNode, Selection) == 272, "Offset mismatch for FDataflowGetPointsBoundsNode::Selection");
static_assert(offsetof(FDataflowGetPointsBoundsNode, Bounds) == 312, "Offset mismatch for FDataflowGetPointsBoundsNode::Bounds");
static_assert(offsetof(FDataflowGetPointsBoundsNode, Sphere) == 368, "Offset mismatch for FDataflowGetPointsBoundsNode::Sphere");

// /Script/DataflowNodes.DataflowLerpFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowLerpFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Blend; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowLerpFloatSampler, Blend) == 8, "Offset mismatch for FDataflowLerpFloatSampler::Blend");

// /Script/DataflowNodes.DataflowLerpSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowLerpSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t SamplerA[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SamplerB[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlendSampler[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    float Blend; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowLerpSamplerNode, SamplerA) == 224, "Offset mismatch for FDataflowLerpSamplerNode::SamplerA");
static_assert(offsetof(FDataflowLerpSamplerNode, SamplerB) == 256, "Offset mismatch for FDataflowLerpSamplerNode::SamplerB");
static_assert(offsetof(FDataflowLerpSamplerNode, BlendSampler) == 288, "Offset mismatch for FDataflowLerpSamplerNode::BlendSampler");
static_assert(offsetof(FDataflowLerpSamplerNode, Blend) == 312, "Offset mismatch for FDataflowLerpSamplerNode::Blend");

// /Script/DataflowNodes.DataflowLerpVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowLerpVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Blend; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowLerpVectorSampler, Blend) == 8, "Offset mismatch for FDataflowLerpVectorSampler::Blend");

// /Script/DataflowNodes.DataflowLinearGradientFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowLinearGradientFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StartPoint[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float StartValue; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Endpoint[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    float EndValue; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClamp; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowLinearGradientFloatSampler, StartPoint) == 8, "Offset mismatch for FDataflowLinearGradientFloatSampler::StartPoint");
static_assert(offsetof(FDataflowLinearGradientFloatSampler, StartValue) == 20, "Offset mismatch for FDataflowLinearGradientFloatSampler::StartValue");
static_assert(offsetof(FDataflowLinearGradientFloatSampler, Endpoint) == 24, "Offset mismatch for FDataflowLinearGradientFloatSampler::Endpoint");
static_assert(offsetof(FDataflowLinearGradientFloatSampler, EndValue) == 36, "Offset mismatch for FDataflowLinearGradientFloatSampler::EndValue");
static_assert(offsetof(FDataflowLinearGradientFloatSampler, bClamp) == 40, "Offset mismatch for FDataflowLinearGradientFloatSampler::bClamp");

// /Script/DataflowNodes.DataflowLinearGradientFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowLinearGradientFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Gradient[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowLinearGradientFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowLinearGradientFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowLinearGradientFloatSamplerNode, Gradient) == 248, "Offset mismatch for FDataflowLinearGradientFloatSamplerNode::Gradient");

// /Script/DataflowNodes.DataflowLinearGradientFromBoxFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowLinearGradientFromBoxFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Box[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t Axis; // 0x00A0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bClamp; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00A2
    std::uint8_t ColorRamp[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowLinearGradientFromBoxFloatSampler, Box) == 8, "Offset mismatch for FDataflowLinearGradientFromBoxFloatSampler::Box");
static_assert(offsetof(FDataflowLinearGradientFromBoxFloatSampler, Transform) == 64, "Offset mismatch for FDataflowLinearGradientFromBoxFloatSampler::Transform");
static_assert(offsetof(FDataflowLinearGradientFromBoxFloatSampler, Axis) == 160, "Offset mismatch for FDataflowLinearGradientFromBoxFloatSampler::Axis");
static_assert(offsetof(FDataflowLinearGradientFromBoxFloatSampler, bClamp) == 161, "Offset mismatch for FDataflowLinearGradientFromBoxFloatSampler::bClamp");
static_assert(offsetof(FDataflowLinearGradientFromBoxFloatSampler, ColorRamp) == 168, "Offset mismatch for FDataflowLinearGradientFromBoxFloatSampler::ColorRamp");

// /Script/DataflowNodes.DataflowLinearGradientFromBoxFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowLinearGradientFromBoxFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Gradient[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowLinearGradientFromBoxFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowLinearGradientFromBoxFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowLinearGradientFromBoxFloatSamplerNode, Gradient) == 256, "Offset mismatch for FDataflowLinearGradientFromBoxFloatSamplerNode::Gradient");

// /Script/DataflowNodes.DataflowMaxFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowMaxFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowMaxSamplerNode
// Kind: ScriptStruct; super: DataflowMultiInputSamplerNodeBase
struct FDataflowMaxSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> InputSamplers; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Sampler[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMaxSamplerNode, InputSamplers) == 224, "Offset mismatch for FDataflowMaxSamplerNode::InputSamplers");
static_assert(offsetof(FDataflowMaxSamplerNode, Sampler) == 240, "Offset mismatch for FDataflowMaxSamplerNode::Sampler");

// /Script/DataflowNodes.DataflowMaxVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowMaxVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowMeshFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowMeshFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Mesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OutputType; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDataflowMeshFloatSampler, Mesh) == 8, "Offset mismatch for FDataflowMeshFloatSampler::Mesh");
static_assert(offsetof(FDataflowMeshFloatSampler, OutputType) == 16, "Offset mismatch for FDataflowMeshFloatSampler::OutputType");

// /Script/DataflowNodes.DataflowMeshFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMeshFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t MeshSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMeshFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowMeshFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowMeshFloatSamplerNode, MeshSampler) == 248, "Offset mismatch for FDataflowMeshFloatSamplerNode::MeshSampler");

// /Script/DataflowNodes.DataflowMeshSelectionCustomDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMeshSelectionCustomDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    FString Indices; // 0x00E8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Selection[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMeshSelectionCustomDataflowNode, Mesh) == 224, "Offset mismatch for FDataflowMeshSelectionCustomDataflowNode::Mesh");
static_assert(offsetof(FDataflowMeshSelectionCustomDataflowNode, Indices) == 232, "Offset mismatch for FDataflowMeshSelectionCustomDataflowNode::Indices");
static_assert(offsetof(FDataflowMeshSelectionCustomDataflowNode, Selection) == 248, "Offset mismatch for FDataflowMeshSelectionCustomDataflowNode::Selection");

// /Script/DataflowNodes.DataflowMeshVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowMeshVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Mesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OutputType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::int32_t UVLayer; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDataflowMeshVectorSampler, Mesh) == 8, "Offset mismatch for FDataflowMeshVectorSampler::Mesh");
static_assert(offsetof(FDataflowMeshVectorSampler, OutputType) == 16, "Offset mismatch for FDataflowMeshVectorSampler::OutputType");
static_assert(offsetof(FDataflowMeshVectorSampler, UVLayer) == 20, "Offset mismatch for FDataflowMeshVectorSampler::UVLayer");

// /Script/DataflowNodes.DataflowMeshVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMeshVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t MeshSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMeshVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowMeshVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowMeshVectorSamplerNode, MeshSampler) == 248, "Offset mismatch for FDataflowMeshVectorSamplerNode::MeshSampler");

// /Script/DataflowNodes.DataflowMinFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowMinFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowMinSamplerNode
// Kind: ScriptStruct; super: DataflowMultiInputSamplerNodeBase
struct FDataflowMinSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> InputSamplers; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Sampler[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMinSamplerNode, InputSamplers) == 224, "Offset mismatch for FDataflowMinSamplerNode::InputSamplers");
static_assert(offsetof(FDataflowMinSamplerNode, Sampler) == 240, "Offset mismatch for FDataflowMinSamplerNode::Sampler");

// /Script/DataflowNodes.DataflowMinVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowMinVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowModuloFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowModuloFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float base; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Offset; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowModuloFloatSampler, base) == 8, "Offset mismatch for FDataflowModuloFloatSampler::base");
static_assert(offsetof(FDataflowModuloFloatSampler, Offset) == 12, "Offset mismatch for FDataflowModuloFloatSampler::Offset");

// /Script/DataflowNodes.DataflowModuloFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowModuloFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ModuloSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowModuloFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowModuloFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowModuloFloatSamplerNode, ModuloSampler) == 248, "Offset mismatch for FDataflowModuloFloatSamplerNode::ModuloSampler");

// /Script/DataflowNodes.DataflowModuloVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowModuloVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t base[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Offset[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowModuloVectorSampler, base) == 8, "Offset mismatch for FDataflowModuloVectorSampler::base");
static_assert(offsetof(FDataflowModuloVectorSampler, Offset) == 32, "Offset mismatch for FDataflowModuloVectorSampler::Offset");

// /Script/DataflowNodes.DataflowModuloVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowModuloVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ModuloSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowModuloVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowModuloVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowModuloVectorSamplerNode, ModuloSampler) == 248, "Offset mismatch for FDataflowModuloVectorSamplerNode::ModuloSampler");

// /Script/DataflowNodes.DataflowMorphTargetProxy
// Kind: ScriptStruct; super: DataflowAttributeProxy
struct FDataflowMorphTargetProxy
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SourceType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t Source[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    FName Destination; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FDataflowMorphTargetProxy, SourceType) == 8, "Offset mismatch for FDataflowMorphTargetProxy::SourceType");
static_assert(offsetof(FDataflowMorphTargetProxy, Source) == 12, "Offset mismatch for FDataflowMorphTargetProxy::Source");
static_assert(offsetof(FDataflowMorphTargetProxy, Destination) == 16, "Offset mismatch for FDataflowMorphTargetProxy::Destination");

// /Script/DataflowNodes.DataflowMultiInputSamplerNodeBase
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMultiInputSamplerNodeBase
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> InputSamplers; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Sampler[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMultiInputSamplerNodeBase, InputSamplers) == 224, "Offset mismatch for FDataflowMultiInputSamplerNodeBase::InputSamplers");
static_assert(offsetof(FDataflowMultiInputSamplerNodeBase, Sampler) == 240, "Offset mismatch for FDataflowMultiInputSamplerNodeBase::Sampler");

// /Script/DataflowNodes.DataflowMultiplyFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowMultiplyFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowMultiplySamplerNode
// Kind: ScriptStruct; super: DataflowMultiInputSamplerNodeBase
struct FDataflowMultiplySamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> InputSamplers; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Sampler[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMultiplySamplerNode, InputSamplers) == 224, "Offset mismatch for FDataflowMultiplySamplerNode::InputSamplers");
static_assert(offsetof(FDataflowMultiplySamplerNode, Sampler) == 240, "Offset mismatch for FDataflowMultiplySamplerNode::Sampler");

// /Script/DataflowNodes.DataflowMultiplyVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowMultiplyVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowNegateFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowNegateFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowNegateSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowNegateSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowNegateSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowNegateSamplerNode::Sampler");

// /Script/DataflowNodes.DataflowNegateVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowNegateVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowNormalizeFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowNormalizeFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float min; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float max; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowNormalizeFloatSampler, min) == 8, "Offset mismatch for FDataflowNormalizeFloatSampler::min");
static_assert(offsetof(FDataflowNormalizeFloatSampler, max) == 12, "Offset mismatch for FDataflowNormalizeFloatSampler::max");

// /Script/DataflowNodes.DataflowNormalizeSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowNormalizeSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowNormalizeSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowNormalizeSamplerNode::Sampler");

// /Script/DataflowNodes.DataflowNormalizeVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowNormalizeVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowOneMinusFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowOneMinusFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowOneMinusFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowOneMinusFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t OneMinusSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowOneMinusFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowOneMinusFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowOneMinusFloatSamplerNode, OneMinusSampler) == 248, "Offset mismatch for FDataflowOneMinusFloatSamplerNode::OneMinusSampler");

// /Script/DataflowNodes.DataflowPerlinNoiseFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowPerlinNoiseFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Amplitude; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Offset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t RenderBounds[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPerlinNoiseFloatSampler, Amplitude) == 8, "Offset mismatch for FDataflowPerlinNoiseFloatSampler::Amplitude");
static_assert(offsetof(FDataflowPerlinNoiseFloatSampler, Frequency) == 12, "Offset mismatch for FDataflowPerlinNoiseFloatSampler::Frequency");
static_assert(offsetof(FDataflowPerlinNoiseFloatSampler, Offset) == 16, "Offset mismatch for FDataflowPerlinNoiseFloatSampler::Offset");
static_assert(offsetof(FDataflowPerlinNoiseFloatSampler, RenderBounds) == 40, "Offset mismatch for FDataflowPerlinNoiseFloatSampler::RenderBounds");

// /Script/DataflowNodes.DataflowPerlinNoiseFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowPerlinNoiseFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PerlinNoiseSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPerlinNoiseFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowPerlinNoiseFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowPerlinNoiseFloatSamplerNode, PerlinNoiseSampler) == 248, "Offset mismatch for FDataflowPerlinNoiseFloatSamplerNode::PerlinNoiseSampler");

// /Script/DataflowNodes.DataflowPerlinNoiseVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowPerlinNoiseVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Amplitude; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Offset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t RenderBounds[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPerlinNoiseVectorSampler, Amplitude) == 8, "Offset mismatch for FDataflowPerlinNoiseVectorSampler::Amplitude");
static_assert(offsetof(FDataflowPerlinNoiseVectorSampler, Frequency) == 12, "Offset mismatch for FDataflowPerlinNoiseVectorSampler::Frequency");
static_assert(offsetof(FDataflowPerlinNoiseVectorSampler, Offset) == 16, "Offset mismatch for FDataflowPerlinNoiseVectorSampler::Offset");
static_assert(offsetof(FDataflowPerlinNoiseVectorSampler, RenderBounds) == 40, "Offset mismatch for FDataflowPerlinNoiseVectorSampler::RenderBounds");

// /Script/DataflowNodes.DataflowPerlinNoiseVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowPerlinNoiseVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PerlinNoiseSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPerlinNoiseVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowPerlinNoiseVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowPerlinNoiseVectorSamplerNode, PerlinNoiseSampler) == 248, "Offset mismatch for FDataflowPerlinNoiseVectorSamplerNode::PerlinNoiseSampler");

// /Script/DataflowNodes.DataflowPointsToPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowPointsToPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Points[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> OutPoints; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowPointsToPointsDataflowNode, Points) == 224, "Offset mismatch for FDataflowPointsToPointsDataflowNode::Points");
static_assert(offsetof(FDataflowPointsToPointsDataflowNode, OutPoints) == 272, "Offset mismatch for FDataflowPointsToPointsDataflowNode::OutPoints");

// /Script/DataflowNodes.DataflowPolygroupProxy
// Kind: ScriptStruct; super: DataflowAttributeProxy
struct FDataflowPolygroupProxy
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SourceType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t Source[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    FName Destination; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FDataflowPolygroupProxy, SourceType) == 8, "Offset mismatch for FDataflowPolygroupProxy::SourceType");
static_assert(offsetof(FDataflowPolygroupProxy, Source) == 12, "Offset mismatch for FDataflowPolygroupProxy::Source");
static_assert(offsetof(FDataflowPolygroupProxy, Destination) == 16, "Offset mismatch for FDataflowPolygroupProxy::Destination");

// /Script/DataflowNodes.DataflowPrimitiveNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowPrimitiveNode
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bOverrideColor; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t OverrideColor[0x74]; // 0x0014 (Size: 0x74, Type: StructProperty)
    std::uint8_t bActive; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    std::uint8_t FrozenProperties[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsFrozen; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowPrimitiveNode, bOverrideColor) == 16, "Offset mismatch for FDataflowPrimitiveNode::bOverrideColor");
static_assert(offsetof(FDataflowPrimitiveNode, OverrideColor) == 20, "Offset mismatch for FDataflowPrimitiveNode::OverrideColor");
static_assert(offsetof(FDataflowPrimitiveNode, bActive) == 136, "Offset mismatch for FDataflowPrimitiveNode::bActive");
static_assert(offsetof(FDataflowPrimitiveNode, FrozenProperties) == 144, "Offset mismatch for FDataflowPrimitiveNode::FrozenProperties");
static_assert(offsetof(FDataflowPrimitiveNode, bIsFrozen) == 160, "Offset mismatch for FDataflowPrimitiveNode::bIsFrozen");

// /Script/DataflowNodes.DataflowRadialGradientFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowRadialGradientFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Center[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Radius; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CenterValue; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float EdgeValue; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClamp; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowRadialGradientFloatSampler, Center) == 8, "Offset mismatch for FDataflowRadialGradientFloatSampler::Center");
static_assert(offsetof(FDataflowRadialGradientFloatSampler, Radius) == 20, "Offset mismatch for FDataflowRadialGradientFloatSampler::Radius");
static_assert(offsetof(FDataflowRadialGradientFloatSampler, CenterValue) == 24, "Offset mismatch for FDataflowRadialGradientFloatSampler::CenterValue");
static_assert(offsetof(FDataflowRadialGradientFloatSampler, EdgeValue) == 28, "Offset mismatch for FDataflowRadialGradientFloatSampler::EdgeValue");
static_assert(offsetof(FDataflowRadialGradientFloatSampler, bClamp) == 32, "Offset mismatch for FDataflowRadialGradientFloatSampler::bClamp");

// /Script/DataflowNodes.DataflowRadialGradientFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowRadialGradientFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Gradient[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowRadialGradientFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowRadialGradientFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowRadialGradientFloatSamplerNode, Gradient) == 248, "Offset mismatch for FDataflowRadialGradientFloatSamplerNode::Gradient");

// /Script/DataflowNodes.DataflowRandomFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowRandomFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Seed; // 0x0008 (Size: 0x4, Type: IntProperty)
    float min; // 0x000C (Size: 0x4, Type: FloatProperty)
    float max; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t RenderBounds[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowRandomFloatSampler, Seed) == 8, "Offset mismatch for FDataflowRandomFloatSampler::Seed");
static_assert(offsetof(FDataflowRandomFloatSampler, min) == 12, "Offset mismatch for FDataflowRandomFloatSampler::min");
static_assert(offsetof(FDataflowRandomFloatSampler, max) == 16, "Offset mismatch for FDataflowRandomFloatSampler::max");
static_assert(offsetof(FDataflowRandomFloatSampler, RenderBounds) == 24, "Offset mismatch for FDataflowRandomFloatSampler::RenderBounds");

// /Script/DataflowNodes.DataflowRandomFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowRandomFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RandomSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowRandomFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowRandomFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowRandomFloatSamplerNode, RandomSampler) == 248, "Offset mismatch for FDataflowRandomFloatSamplerNode::RandomSampler");

// /Script/DataflowNodes.DataflowRandomVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowRandomVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Seed; // 0x0008 (Size: 0x4, Type: IntProperty)
    float min; // 0x000C (Size: 0x4, Type: FloatProperty)
    float max; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t RenderBounds[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowRandomVectorSampler, Seed) == 8, "Offset mismatch for FDataflowRandomVectorSampler::Seed");
static_assert(offsetof(FDataflowRandomVectorSampler, min) == 12, "Offset mismatch for FDataflowRandomVectorSampler::min");
static_assert(offsetof(FDataflowRandomVectorSampler, max) == 16, "Offset mismatch for FDataflowRandomVectorSampler::max");
static_assert(offsetof(FDataflowRandomVectorSampler, RenderBounds) == 24, "Offset mismatch for FDataflowRandomVectorSampler::RenderBounds");

// /Script/DataflowNodes.DataflowRandomVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowRandomVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RandomSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowRandomVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowRandomVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowRandomVectorSamplerNode, RandomSampler) == 248, "Offset mismatch for FDataflowRandomVectorSamplerNode::RandomSampler");

// /Script/DataflowNodes.DataflowRemapFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowRemapFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float OriginalMin; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float OriginalMax; // 0x000C (Size: 0x4, Type: FloatProperty)
    float NewMin; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float NewMax; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Power; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClamp; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowRemapFloatSampler, OriginalMin) == 8, "Offset mismatch for FDataflowRemapFloatSampler::OriginalMin");
static_assert(offsetof(FDataflowRemapFloatSampler, OriginalMax) == 12, "Offset mismatch for FDataflowRemapFloatSampler::OriginalMax");
static_assert(offsetof(FDataflowRemapFloatSampler, NewMin) == 16, "Offset mismatch for FDataflowRemapFloatSampler::NewMin");
static_assert(offsetof(FDataflowRemapFloatSampler, NewMax) == 20, "Offset mismatch for FDataflowRemapFloatSampler::NewMax");
static_assert(offsetof(FDataflowRemapFloatSampler, Power) == 24, "Offset mismatch for FDataflowRemapFloatSampler::Power");
static_assert(offsetof(FDataflowRemapFloatSampler, bClamp) == 28, "Offset mismatch for FDataflowRemapFloatSampler::bClamp");

// /Script/DataflowNodes.DataflowRemapFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowRemapFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RemapSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowRemapFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowRemapFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowRemapFloatSamplerNode, RemapSampler) == 248, "Offset mismatch for FDataflowRemapFloatSamplerNode::RemapSampler");

// /Script/DataflowNodes.DataflowSLerpSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSLerpSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t SamplerA[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SamplerB[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t BlendSampler[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    float Blend; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowSLerpSamplerNode, SamplerA) == 224, "Offset mismatch for FDataflowSLerpSamplerNode::SamplerA");
static_assert(offsetof(FDataflowSLerpSamplerNode, SamplerB) == 248, "Offset mismatch for FDataflowSLerpSamplerNode::SamplerB");
static_assert(offsetof(FDataflowSLerpSamplerNode, BlendSampler) == 272, "Offset mismatch for FDataflowSLerpSamplerNode::BlendSampler");
static_assert(offsetof(FDataflowSLerpSamplerNode, Blend) == 296, "Offset mismatch for FDataflowSLerpSamplerNode::Blend");

// /Script/DataflowNodes.DataflowSLerpVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowSLerpVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Blend; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowSLerpVectorSampler, Blend) == 8, "Offset mismatch for FDataflowSLerpVectorSampler::Blend");

// /Script/DataflowNodes.DataflowSamplerToAttributeNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSamplerToAttributeNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Sampler[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    FString AttributeName; // 0x0130 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSaveAsColor; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0141
    std::uint8_t VertexGroup[0x4]; // 0x0144 (Size: 0x4, Type: StructProperty)
    std::uint8_t VertexSelection[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseDefaultValue; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0171
    float DefaultValue; // 0x0174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultVectorValue[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSamplerToAttributeNode, Collection) == 224, "Offset mismatch for FDataflowSamplerToAttributeNode::Collection");
static_assert(offsetof(FDataflowSamplerToAttributeNode, Sampler) == 272, "Offset mismatch for FDataflowSamplerToAttributeNode::Sampler");
static_assert(offsetof(FDataflowSamplerToAttributeNode, AttributeName) == 304, "Offset mismatch for FDataflowSamplerToAttributeNode::AttributeName");
static_assert(offsetof(FDataflowSamplerToAttributeNode, bSaveAsColor) == 320, "Offset mismatch for FDataflowSamplerToAttributeNode::bSaveAsColor");
static_assert(offsetof(FDataflowSamplerToAttributeNode, VertexGroup) == 324, "Offset mismatch for FDataflowSamplerToAttributeNode::VertexGroup");
static_assert(offsetof(FDataflowSamplerToAttributeNode, VertexSelection) == 328, "Offset mismatch for FDataflowSamplerToAttributeNode::VertexSelection");
static_assert(offsetof(FDataflowSamplerToAttributeNode, bUseDefaultValue) == 368, "Offset mismatch for FDataflowSamplerToAttributeNode::bUseDefaultValue");
static_assert(offsetof(FDataflowSamplerToAttributeNode, DefaultValue) == 372, "Offset mismatch for FDataflowSamplerToAttributeNode::DefaultValue");
static_assert(offsetof(FDataflowSamplerToAttributeNode, DefaultVectorValue) == 376, "Offset mismatch for FDataflowSamplerToAttributeNode::DefaultVectorValue");

// /Script/DataflowNodes.DataflowSamplerToImageNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSamplerToImageNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t Extent[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t Plane; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0131
    float Offset; // 0x0134 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNormalize; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0139
    std::uint8_t Resolution; // 0x013C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x013D
    std::uint8_t Image[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSamplerToImageNode, Sampler) == 224, "Offset mismatch for FDataflowSamplerToImageNode::Sampler");
static_assert(offsetof(FDataflowSamplerToImageNode, Center) == 256, "Offset mismatch for FDataflowSamplerToImageNode::Center");
static_assert(offsetof(FDataflowSamplerToImageNode, Extent) == 280, "Offset mismatch for FDataflowSamplerToImageNode::Extent");
static_assert(offsetof(FDataflowSamplerToImageNode, Plane) == 304, "Offset mismatch for FDataflowSamplerToImageNode::Plane");
static_assert(offsetof(FDataflowSamplerToImageNode, Offset) == 308, "Offset mismatch for FDataflowSamplerToImageNode::Offset");
static_assert(offsetof(FDataflowSamplerToImageNode, bNormalize) == 312, "Offset mismatch for FDataflowSamplerToImageNode::bNormalize");
static_assert(offsetof(FDataflowSamplerToImageNode, Resolution) == 316, "Offset mismatch for FDataflowSamplerToImageNode::Resolution");
static_assert(offsetof(FDataflowSamplerToImageNode, Image) == 320, "Offset mismatch for FDataflowSamplerToImageNode::Image");

// /Script/DataflowNodes.DataflowSamplerToPointsNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSamplerToPointsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Points[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Sampler[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    FString Attribute; // 0x0130 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDataflowSamplerToPointsNode, Points) == 224, "Offset mismatch for FDataflowSamplerToPointsNode::Points");
static_assert(offsetof(FDataflowSamplerToPointsNode, Sampler) == 272, "Offset mismatch for FDataflowSamplerToPointsNode::Sampler");
static_assert(offsetof(FDataflowSamplerToPointsNode, Attribute) == 304, "Offset mismatch for FDataflowSamplerToPointsNode::Attribute");

// /Script/DataflowNodes.DataflowSamplerTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowSamplerTypes
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSamplerTypes, Value) == 0, "Offset mismatch for FDataflowSamplerTypes::Value");

// /Script/DataflowNodes.DataflowSamplerTypesStorage
// Kind: ScriptStruct; super: none
struct FDataflowSamplerTypesStorage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowScaleVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowScaleVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowScaleVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowScaleVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t VectorSampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t FloatSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowScaleVectorSamplerNode, VectorSampler) == 224, "Offset mismatch for FDataflowScaleVectorSamplerNode::VectorSampler");
static_assert(offsetof(FDataflowScaleVectorSamplerNode, FloatSampler) == 248, "Offset mismatch for FDataflowScaleVectorSamplerNode::FloatSampler");

// /Script/DataflowNodes.DataflowSelectionToolNode
// Kind: ScriptStruct; super: DataflowToolNode
struct FDataflowSelectionToolNode
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    std::uint8_t Selection[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSelectionToolNode, Collection) == 280, "Offset mismatch for FDataflowSelectionToolNode::Collection");
static_assert(offsetof(FDataflowSelectionToolNode, Selection) == 328, "Offset mismatch for FDataflowSelectionToolNode::Selection");

// /Script/DataflowNodes.DataflowSignFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowSignFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowSignSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSignSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSignSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowSignSamplerNode::Sampler");

// /Script/DataflowNodes.DataflowSignVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowSignVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowSkeletonProxy
// Kind: ScriptStruct; super: DataflowAttributeProxy
struct FDataflowSkeletonProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowSkinWeightData
// Kind: ScriptStruct; super: none
struct FDataflowSkinWeightData
{
public:
    TArray<void*> BoneWeights; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoneIndices; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowSkinWeightData, BoneWeights) == 0, "Offset mismatch for FDataflowSkinWeightData::BoneWeights");
static_assert(offsetof(FDataflowSkinWeightData, BoneIndices) == 16, "Offset mismatch for FDataflowSkinWeightData::BoneIndices");

// /Script/DataflowNodes.DataflowSkinWeightsProxy
// Kind: ScriptStruct; super: DataflowAttributeProxy
struct FDataflowSkinWeightsProxy
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SourceType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t Source[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    FName Destination; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FDataflowSkinWeightsProxy, SourceType) == 8, "Offset mismatch for FDataflowSkinWeightsProxy::SourceType");
static_assert(offsetof(FDataflowSkinWeightsProxy, Source) == 12, "Offset mismatch for FDataflowSkinWeightsProxy::Source");
static_assert(offsetof(FDataflowSkinWeightsProxy, Destination) == 16, "Offset mismatch for FDataflowSkinWeightsProxy::Destination");

// /Script/DataflowNodes.DataflowSmoothStepFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowSmoothStepFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float MinValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ValueA; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ValueB; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowSmoothStepFloatSampler, MinValue) == 8, "Offset mismatch for FDataflowSmoothStepFloatSampler::MinValue");
static_assert(offsetof(FDataflowSmoothStepFloatSampler, MaxValue) == 12, "Offset mismatch for FDataflowSmoothStepFloatSampler::MaxValue");
static_assert(offsetof(FDataflowSmoothStepFloatSampler, ValueA) == 16, "Offset mismatch for FDataflowSmoothStepFloatSampler::ValueA");
static_assert(offsetof(FDataflowSmoothStepFloatSampler, ValueB) == 20, "Offset mismatch for FDataflowSmoothStepFloatSampler::ValueB");

// /Script/DataflowNodes.DataflowSmoothStepFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSmoothStepFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SmoothStepSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSmoothStepFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowSmoothStepFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowSmoothStepFloatSamplerNode, SmoothStepSampler) == 248, "Offset mismatch for FDataflowSmoothStepFloatSamplerNode::SmoothStepSampler");

// /Script/DataflowNodes.DataflowSmoothStepVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowSmoothStepVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MinValue[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxValue[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ValueA[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t ValueB[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSmoothStepVectorSampler, MinValue) == 8, "Offset mismatch for FDataflowSmoothStepVectorSampler::MinValue");
static_assert(offsetof(FDataflowSmoothStepVectorSampler, MaxValue) == 32, "Offset mismatch for FDataflowSmoothStepVectorSampler::MaxValue");
static_assert(offsetof(FDataflowSmoothStepVectorSampler, ValueA) == 56, "Offset mismatch for FDataflowSmoothStepVectorSampler::ValueA");
static_assert(offsetof(FDataflowSmoothStepVectorSampler, ValueB) == 80, "Offset mismatch for FDataflowSmoothStepVectorSampler::ValueB");

// /Script/DataflowNodes.DataflowSmoothStepVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSmoothStepVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SmoothStepSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSmoothStepVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowSmoothStepVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowSmoothStepVectorSamplerNode, SmoothStepSampler) == 248, "Offset mismatch for FDataflowSmoothStepVectorSamplerNode::SmoothStepSampler");

// /Script/DataflowNodes.DataflowSplitVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSplitVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SamplerX[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SamplerY[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t SamplerZ[0x1]; // 0x0128 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSplitVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowSplitVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowSplitVectorSamplerNode, SamplerX) == 248, "Offset mismatch for FDataflowSplitVectorSamplerNode::SamplerX");
static_assert(offsetof(FDataflowSplitVectorSamplerNode, SamplerY) == 272, "Offset mismatch for FDataflowSplitVectorSamplerNode::SamplerY");
static_assert(offsetof(FDataflowSplitVectorSamplerNode, SamplerZ) == 296, "Offset mismatch for FDataflowSplitVectorSamplerNode::SamplerZ");

// /Script/DataflowNodes.DataflowStaticMeshTerminalNode
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FDataflowStaticMeshTerminalNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Materials; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    FString AssetPath; // 0x00F8 (Size: 0x10, Type: StrProperty)
    void* StaticMeshAsset; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowStaticMeshTerminalNode, Mesh) == 224, "Offset mismatch for FDataflowStaticMeshTerminalNode::Mesh");
static_assert(offsetof(FDataflowStaticMeshTerminalNode, Materials) == 232, "Offset mismatch for FDataflowStaticMeshTerminalNode::Materials");
static_assert(offsetof(FDataflowStaticMeshTerminalNode, AssetPath) == 248, "Offset mismatch for FDataflowStaticMeshTerminalNode::AssetPath");
static_assert(offsetof(FDataflowStaticMeshTerminalNode, StaticMeshAsset) == 264, "Offset mismatch for FDataflowStaticMeshTerminalNode::StaticMeshAsset");

// /Script/DataflowNodes.DataflowStepFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowStepFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Step; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ValueA; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ValueB; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowStepFloatSampler, Step) == 8, "Offset mismatch for FDataflowStepFloatSampler::Step");
static_assert(offsetof(FDataflowStepFloatSampler, ValueA) == 12, "Offset mismatch for FDataflowStepFloatSampler::ValueA");
static_assert(offsetof(FDataflowStepFloatSampler, ValueB) == 16, "Offset mismatch for FDataflowStepFloatSampler::ValueB");

// /Script/DataflowNodes.DataflowStepFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowStepFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t StepSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowStepFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowStepFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowStepFloatSamplerNode, StepSampler) == 248, "Offset mismatch for FDataflowStepFloatSamplerNode::StepSampler");

// /Script/DataflowNodes.DataflowStepVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowStepVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Step[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ValueA[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ValueB[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowStepVectorSampler, Step) == 8, "Offset mismatch for FDataflowStepVectorSampler::Step");
static_assert(offsetof(FDataflowStepVectorSampler, ValueA) == 32, "Offset mismatch for FDataflowStepVectorSampler::ValueA");
static_assert(offsetof(FDataflowStepVectorSampler, ValueB) == 56, "Offset mismatch for FDataflowStepVectorSampler::ValueB");

// /Script/DataflowNodes.DataflowStepVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowStepVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t StepSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowStepVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowStepVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowStepVectorSamplerNode, StepSampler) == 248, "Offset mismatch for FDataflowStepVectorSamplerNode::StepSampler");

// /Script/DataflowNodes.DataflowTextureToAttributeNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowTextureToAttributeNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    void* Texture; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::int32_t UVChannel; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    FString AttributeName; // 0x0120 (Size: 0x10, Type: StrProperty)
    std::uint8_t VertexGroup[0x4]; // 0x0130 (Size: 0x4, Type: StructProperty)
    std::uint8_t bMultithreadProcessing; // 0x0134 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowTextureToAttributeNode, Collection) == 224, "Offset mismatch for FDataflowTextureToAttributeNode::Collection");
static_assert(offsetof(FDataflowTextureToAttributeNode, Texture) == 272, "Offset mismatch for FDataflowTextureToAttributeNode::Texture");
static_assert(offsetof(FDataflowTextureToAttributeNode, UVChannel) == 280, "Offset mismatch for FDataflowTextureToAttributeNode::UVChannel");
static_assert(offsetof(FDataflowTextureToAttributeNode, AttributeName) == 288, "Offset mismatch for FDataflowTextureToAttributeNode::AttributeName");
static_assert(offsetof(FDataflowTextureToAttributeNode, VertexGroup) == 304, "Offset mismatch for FDataflowTextureToAttributeNode::VertexGroup");
static_assert(offsetof(FDataflowTextureToAttributeNode, bMultithreadProcessing) == 308, "Offset mismatch for FDataflowTextureToAttributeNode::bMultithreadProcessing");

// /Script/DataflowNodes.DataflowTextureVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowTextureVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Texture; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowTextureVectorSampler, Texture) == 8, "Offset mismatch for FDataflowTextureVectorSampler::Texture");

// /Script/DataflowNodes.DataflowTextureVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowTextureVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TextureSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTextureVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowTextureVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowTextureVectorSamplerNode, TextureSampler) == 248, "Offset mismatch for FDataflowTextureVectorSamplerNode::TextureSampler");

// /Script/DataflowNodes.DataflowTilingFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowTilingFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Offset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t TileSize[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTilingFloatSampler, Offset) == 8, "Offset mismatch for FDataflowTilingFloatSampler::Offset");
static_assert(offsetof(FDataflowTilingFloatSampler, TileSize) == 32, "Offset mismatch for FDataflowTilingFloatSampler::TileSize");

// /Script/DataflowNodes.DataflowTilingSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowTilingSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Offset[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t TileSize[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTilingSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowTilingSamplerNode::Sampler");
static_assert(offsetof(FDataflowTilingSamplerNode, Offset) == 256, "Offset mismatch for FDataflowTilingSamplerNode::Offset");
static_assert(offsetof(FDataflowTilingSamplerNode, TileSize) == 280, "Offset mismatch for FDataflowTilingSamplerNode::TileSize");

// /Script/DataflowNodes.DataflowTilingVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowTilingVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Offset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t TileSize[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTilingVectorSampler, Offset) == 8, "Offset mismatch for FDataflowTilingVectorSampler::Offset");
static_assert(offsetof(FDataflowTilingVectorSampler, TileSize) == 32, "Offset mismatch for FDataflowTilingVectorSampler::TileSize");

// /Script/DataflowNodes.DataflowToolNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowToolNode
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t Snapshots[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowToolNode, Snapshots) == 232, "Offset mismatch for FDataflowToolNode::Snapshots");

// /Script/DataflowNodes.DataflowToolNodeSnapshot
// Kind: ScriptStruct; super: none
struct FDataflowToolNodeSnapshot
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Data[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    std::uint8_t Date[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t bLocked; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowToolNodeSnapshot, Name) == 0, "Offset mismatch for FDataflowToolNodeSnapshot::Name");
static_assert(offsetof(FDataflowToolNodeSnapshot, Description) == 16, "Offset mismatch for FDataflowToolNodeSnapshot::Description");
static_assert(offsetof(FDataflowToolNodeSnapshot, Data) == 32, "Offset mismatch for FDataflowToolNodeSnapshot::Data");
static_assert(offsetof(FDataflowToolNodeSnapshot, Date) == 80, "Offset mismatch for FDataflowToolNodeSnapshot::Date");
static_assert(offsetof(FDataflowToolNodeSnapshot, bLocked) == 88, "Offset mismatch for FDataflowToolNodeSnapshot::bLocked");

// /Script/DataflowNodes.DataflowToolNodeSnapshotSet
// Kind: ScriptStruct; super: none
struct FDataflowToolNodeSnapshotSet
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::int32_t ActiveSnapshot; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    TArray<void*> Snapshots; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowToolNodeSnapshotSet, ActiveSnapshot) == 24, "Offset mismatch for FDataflowToolNodeSnapshotSet::ActiveSnapshot");
static_assert(offsetof(FDataflowToolNodeSnapshotSet, Snapshots) == 32, "Offset mismatch for FDataflowToolNodeSnapshotSet::Snapshots");

// /Script/DataflowNodes.DataflowTransformFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowTransformFloatSampler
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t bInverseTransform; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowTransformFloatSampler, Transform) == 16, "Offset mismatch for FDataflowTransformFloatSampler::Transform");
static_assert(offsetof(FDataflowTransformFloatSampler, bInverseTransform) == 112, "Offset mismatch for FDataflowTransformFloatSampler::bInverseTransform");

// /Script/DataflowNodes.DataflowTransformFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowTransformFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TransformSampler[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTransformFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowTransformFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowTransformFloatSamplerNode, TransformSampler) == 256, "Offset mismatch for FDataflowTransformFloatSamplerNode::TransformSampler");

// /Script/DataflowNodes.DataflowTriangleLabelsProxy
// Kind: ScriptStruct; super: DataflowAttributeProxy
struct FDataflowTriangleLabelsProxy
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SourceType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t Source[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    FName Destination; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FDataflowTriangleLabelsProxy, SourceType) == 8, "Offset mismatch for FDataflowTriangleLabelsProxy::SourceType");
static_assert(offsetof(FDataflowTriangleLabelsProxy, Source) == 12, "Offset mismatch for FDataflowTriangleLabelsProxy::Source");
static_assert(offsetof(FDataflowTriangleLabelsProxy, Destination) == 16, "Offset mismatch for FDataflowTriangleLabelsProxy::Destination");

// /Script/DataflowNodes.DataflowTurbulenceFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowTurbulenceFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Amplitude; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Offset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::int32_t Octaves; // 0x0028 (Size: 0x4, Type: IntProperty)
    float Lacunarity; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Gain; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t RenderBounds[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTurbulenceFloatSampler, Amplitude) == 8, "Offset mismatch for FDataflowTurbulenceFloatSampler::Amplitude");
static_assert(offsetof(FDataflowTurbulenceFloatSampler, Frequency) == 12, "Offset mismatch for FDataflowTurbulenceFloatSampler::Frequency");
static_assert(offsetof(FDataflowTurbulenceFloatSampler, Offset) == 16, "Offset mismatch for FDataflowTurbulenceFloatSampler::Offset");
static_assert(offsetof(FDataflowTurbulenceFloatSampler, Octaves) == 40, "Offset mismatch for FDataflowTurbulenceFloatSampler::Octaves");
static_assert(offsetof(FDataflowTurbulenceFloatSampler, Lacunarity) == 44, "Offset mismatch for FDataflowTurbulenceFloatSampler::Lacunarity");
static_assert(offsetof(FDataflowTurbulenceFloatSampler, Gain) == 48, "Offset mismatch for FDataflowTurbulenceFloatSampler::Gain");
static_assert(offsetof(FDataflowTurbulenceFloatSampler, RenderBounds) == 56, "Offset mismatch for FDataflowTurbulenceFloatSampler::RenderBounds");

// /Script/DataflowNodes.DataflowTurbulenceFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowTurbulenceFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TurbulenceSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTurbulenceFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowTurbulenceFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowTurbulenceFloatSamplerNode, TurbulenceSampler) == 248, "Offset mismatch for FDataflowTurbulenceFloatSamplerNode::TurbulenceSampler");

// /Script/DataflowNodes.DataflowUniformFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowUniformFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t RenderBounds[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowUniformFloatSampler, Value) == 8, "Offset mismatch for FDataflowUniformFloatSampler::Value");
static_assert(offsetof(FDataflowUniformFloatSampler, RenderBounds) == 16, "Offset mismatch for FDataflowUniformFloatSampler::RenderBounds");

// /Script/DataflowNodes.DataflowUniformFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowUniformFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t UniformSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowUniformFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowUniformFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowUniformFloatSamplerNode, UniformSampler) == 248, "Offset mismatch for FDataflowUniformFloatSamplerNode::UniformSampler");

// /Script/DataflowNodes.DataflowUniformVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowUniformVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t RenderBounds[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowUniformVectorSampler, Value) == 8, "Offset mismatch for FDataflowUniformVectorSampler::Value");
static_assert(offsetof(FDataflowUniformVectorSampler, RenderBounds) == 24, "Offset mismatch for FDataflowUniformVectorSampler::RenderBounds");

// /Script/DataflowNodes.DataflowUniformVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowUniformVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t UniformSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowUniformVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowUniformVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowUniformVectorSamplerNode, UniformSampler) == 248, "Offset mismatch for FDataflowUniformVectorSamplerNode::UniformSampler");

// /Script/DataflowNodes.DataflowVectorDeviationFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowVectorDeviationFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ReferenceVector[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorDeviationFloatSampler, ReferenceVector) == 8, "Offset mismatch for FDataflowVectorDeviationFloatSampler::ReferenceVector");

// /Script/DataflowNodes.DataflowVectorDeviationSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorDeviationSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t VectorDeviationSampler[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferenceVector[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorDeviationSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowVectorDeviationSamplerNode::Sampler");
static_assert(offsetof(FDataflowVectorDeviationSamplerNode, VectorDeviationSampler) == 248, "Offset mismatch for FDataflowVectorDeviationSamplerNode::VectorDeviationSampler");
static_assert(offsetof(FDataflowVectorDeviationSamplerNode, ReferenceVector) == 272, "Offset mismatch for FDataflowVectorDeviationSamplerNode::ReferenceVector");

// /Script/DataflowNodes.DataflowVectorLengthFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowVectorLengthFloatSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowVectorLengthSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorLengthSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t VectorLengthSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorLengthSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowVectorLengthSamplerNode::Sampler");
static_assert(offsetof(FDataflowVectorLengthSamplerNode, VectorLengthSampler) == 248, "Offset mismatch for FDataflowVectorLengthSamplerNode::VectorLengthSampler");

// /Script/DataflowNodes.DataflowVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowVectorSampler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowVectorSamplerBase
// Kind: ScriptStruct; super: none
struct FDataflowVectorSamplerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowVectorToFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowVectorToFloatSampler
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::int32_t ElementIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDataflowVectorToFloatSampler, ElementIndex) == 24, "Offset mismatch for FDataflowVectorToFloatSampler::ElementIndex");

// /Script/DataflowNodes.DataflowVertexAttributeEditableNode
// Kind: ScriptStruct; super: DataflowToolNode
struct FDataflowVertexAttributeEditableNode
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t Snapshots[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVertexAttributeEditableNode, Snapshots) == 232, "Offset mismatch for FDataflowVertexAttributeEditableNode::Snapshots");

// /Script/DataflowNodes.DataflowVertexColorToAttributeNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVertexColorToAttributeNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ColorChannel; // 0x0110 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    FString AttributeName; // 0x0118 (Size: 0x10, Type: StrProperty)
    float ScalingFactor; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VertexGroup[0x1]; // 0x012C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVertexColorToAttributeNode, Collection) == 224, "Offset mismatch for FDataflowVertexColorToAttributeNode::Collection");
static_assert(offsetof(FDataflowVertexColorToAttributeNode, ColorChannel) == 272, "Offset mismatch for FDataflowVertexColorToAttributeNode::ColorChannel");
static_assert(offsetof(FDataflowVertexColorToAttributeNode, AttributeName) == 280, "Offset mismatch for FDataflowVertexColorToAttributeNode::AttributeName");
static_assert(offsetof(FDataflowVertexColorToAttributeNode, ScalingFactor) == 296, "Offset mismatch for FDataflowVertexColorToAttributeNode::ScalingFactor");
static_assert(offsetof(FDataflowVertexColorToAttributeNode, VertexGroup) == 300, "Offset mismatch for FDataflowVertexColorToAttributeNode::VertexGroup");

// /Script/DataflowNodes.DataflowVertexSkinWeightData
// Kind: ScriptStruct; super: none
struct FDataflowVertexSkinWeightData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowNodes.DataflowVisualizeAttributeNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVisualizeAttributeNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString AttributeName; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t VertexGroup[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVisualizeAttributeNode, Collection) == 224, "Offset mismatch for FDataflowVisualizeAttributeNode::Collection");
static_assert(offsetof(FDataflowVisualizeAttributeNode, AttributeName) == 272, "Offset mismatch for FDataflowVisualizeAttributeNode::AttributeName");
static_assert(offsetof(FDataflowVisualizeAttributeNode, VertexGroup) == 288, "Offset mismatch for FDataflowVisualizeAttributeNode::VertexGroup");

// /Script/DataflowNodes.DataflowfBmFloatSampler
// Kind: ScriptStruct; super: DataflowFloatSamplerBase
struct FDataflowfBmFloatSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Amplitude; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Offset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::int32_t Octaves; // 0x0028 (Size: 0x4, Type: IntProperty)
    float Lacunarity; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Gain; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t RenderBounds[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowfBmFloatSampler, Amplitude) == 8, "Offset mismatch for FDataflowfBmFloatSampler::Amplitude");
static_assert(offsetof(FDataflowfBmFloatSampler, Frequency) == 12, "Offset mismatch for FDataflowfBmFloatSampler::Frequency");
static_assert(offsetof(FDataflowfBmFloatSampler, Offset) == 16, "Offset mismatch for FDataflowfBmFloatSampler::Offset");
static_assert(offsetof(FDataflowfBmFloatSampler, Octaves) == 40, "Offset mismatch for FDataflowfBmFloatSampler::Octaves");
static_assert(offsetof(FDataflowfBmFloatSampler, Lacunarity) == 44, "Offset mismatch for FDataflowfBmFloatSampler::Lacunarity");
static_assert(offsetof(FDataflowfBmFloatSampler, Gain) == 48, "Offset mismatch for FDataflowfBmFloatSampler::Gain");
static_assert(offsetof(FDataflowfBmFloatSampler, RenderBounds) == 56, "Offset mismatch for FDataflowfBmFloatSampler::RenderBounds");

// /Script/DataflowNodes.DataflowfBmFloatSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowfBmFloatSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t fBmSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowfBmFloatSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowfBmFloatSamplerNode::Sampler");
static_assert(offsetof(FDataflowfBmFloatSamplerNode, fBmSampler) == 248, "Offset mismatch for FDataflowfBmFloatSamplerNode::fBmSampler");

// /Script/DataflowNodes.DataflowfBmVectorSampler
// Kind: ScriptStruct; super: DataflowVectorSamplerBase
struct FDataflowfBmVectorSampler
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Amplitude; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Offset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::int32_t Octaves; // 0x0028 (Size: 0x4, Type: IntProperty)
    float Lacunarity; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Gain; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t RenderBounds[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowfBmVectorSampler, Amplitude) == 8, "Offset mismatch for FDataflowfBmVectorSampler::Amplitude");
static_assert(offsetof(FDataflowfBmVectorSampler, Frequency) == 12, "Offset mismatch for FDataflowfBmVectorSampler::Frequency");
static_assert(offsetof(FDataflowfBmVectorSampler, Offset) == 16, "Offset mismatch for FDataflowfBmVectorSampler::Offset");
static_assert(offsetof(FDataflowfBmVectorSampler, Octaves) == 40, "Offset mismatch for FDataflowfBmVectorSampler::Octaves");
static_assert(offsetof(FDataflowfBmVectorSampler, Lacunarity) == 44, "Offset mismatch for FDataflowfBmVectorSampler::Lacunarity");
static_assert(offsetof(FDataflowfBmVectorSampler, Gain) == 48, "Offset mismatch for FDataflowfBmVectorSampler::Gain");
static_assert(offsetof(FDataflowfBmVectorSampler, RenderBounds) == 56, "Offset mismatch for FDataflowfBmVectorSampler::RenderBounds");

// /Script/DataflowNodes.DataflowfBmVectorSamplerNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowfBmVectorSamplerNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t fBmSampler[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowfBmVectorSamplerNode, Sampler) == 224, "Offset mismatch for FDataflowfBmVectorSamplerNode::Sampler");
static_assert(offsetof(FDataflowfBmVectorSamplerNode, fBmSampler) == 248, "Offset mismatch for FDataflowfBmVectorSamplerNode::fBmSampler");

// /Script/DataflowNodes.DisplaceDataflowMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FDisplaceDataflowMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Selection[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Sampler[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t bRecomputeNormals; // 0x0130 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDisplaceDataflowMeshDataflowNode, Mesh) == 224, "Offset mismatch for FDisplaceDataflowMeshDataflowNode::Mesh");
static_assert(offsetof(FDisplaceDataflowMeshDataflowNode, Selection) == 232, "Offset mismatch for FDisplaceDataflowMeshDataflowNode::Selection");
static_assert(offsetof(FDisplaceDataflowMeshDataflowNode, Sampler) == 272, "Offset mismatch for FDisplaceDataflowMeshDataflowNode::Sampler");
static_assert(offsetof(FDisplaceDataflowMeshDataflowNode, bRecomputeNormals) == 304, "Offset mismatch for FDisplaceDataflowMeshDataflowNode::bRecomputeNormals");

// /Script/DataflowNodes.FColorToColorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFColorToColorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Color[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t LinearColor[0x1]; // 0x00E4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFColorToColorDataflowNode, Color) == 224, "Offset mismatch for FFColorToColorDataflowNode::Color");
static_assert(offsetof(FFColorToColorDataflowNode, LinearColor) == 228, "Offset mismatch for FFColorToColorDataflowNode::LinearColor");

// /Script/DataflowNodes.FilterPointsByAttributeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFilterPointsByAttributeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Points[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Operation; // 0x0110 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    FString Attribute; // 0x0118 (Size: 0x10, Type: StrProperty)
    float Value; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float Value2; // 0x012C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FilteredPoints[0x30]; // 0x0130 (Size: 0x30, Type: StructProperty)
    std::uint8_t PointSelection[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFilterPointsByAttributeDataflowNode, Points) == 224, "Offset mismatch for FFilterPointsByAttributeDataflowNode::Points");
static_assert(offsetof(FFilterPointsByAttributeDataflowNode, Operation) == 272, "Offset mismatch for FFilterPointsByAttributeDataflowNode::Operation");
static_assert(offsetof(FFilterPointsByAttributeDataflowNode, Attribute) == 280, "Offset mismatch for FFilterPointsByAttributeDataflowNode::Attribute");
static_assert(offsetof(FFilterPointsByAttributeDataflowNode, Value) == 296, "Offset mismatch for FFilterPointsByAttributeDataflowNode::Value");
static_assert(offsetof(FFilterPointsByAttributeDataflowNode, Value2) == 300, "Offset mismatch for FFilterPointsByAttributeDataflowNode::Value2");
static_assert(offsetof(FFilterPointsByAttributeDataflowNode, FilteredPoints) == 304, "Offset mismatch for FFilterPointsByAttributeDataflowNode::FilteredPoints");
static_assert(offsetof(FFilterPointsByAttributeDataflowNode, PointSelection) == 352, "Offset mismatch for FFilterPointsByAttributeDataflowNode::PointSelection");

// /Script/DataflowNodes.FloatOverrideDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FFloatOverrideDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t PropertyName[0x4]; // 0x00E0 (Size: 0x4, Type: NameProperty)
    std::uint8_t KeyName[0x4]; // 0x00E4 (Size: 0x4, Type: NameProperty)
    float ValueOut; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFloatOverrideDataflowNode, PropertyName) == 224, "Offset mismatch for FFloatOverrideDataflowNode::PropertyName");
static_assert(offsetof(FFloatOverrideDataflowNode, KeyName) == 228, "Offset mismatch for FFloatOverrideDataflowNode::KeyName");
static_assert(offsetof(FFloatOverrideDataflowNode, ValueOut) == 232, "Offset mismatch for FFloatOverrideDataflowNode::ValueOut");

// /Script/DataflowNodes.GetColorFromPaletteDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetColorFromPaletteDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> ColorPalette; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Index; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t LinearColor[0x1]; // 0x00F4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetColorFromPaletteDataflowNode, ColorPalette) == 224, "Offset mismatch for FGetColorFromPaletteDataflowNode::ColorPalette");
static_assert(offsetof(FGetColorFromPaletteDataflowNode, Index) == 240, "Offset mismatch for FGetColorFromPaletteDataflowNode::Index");
static_assert(offsetof(FGetColorFromPaletteDataflowNode, LinearColor) == 244, "Offset mismatch for FGetColorFromPaletteDataflowNode::LinearColor");

// /Script/DataflowNodes.GetMeanColorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetMeanColorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> ColorPalette; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MeanColor[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetMeanColorDataflowNode, ColorPalette) == 224, "Offset mismatch for FGetMeanColorDataflowNode::ColorPalette");
static_assert(offsetof(FGetMeanColorDataflowNode, MeanColor) == 240, "Offset mismatch for FGetMeanColorDataflowNode::MeanColor");

// /Script/DataflowNodes.GetMedianColorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetMedianColorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> ColorPalette; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MedianColor[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetMedianColorDataflowNode, ColorPalette) == 224, "Offset mismatch for FGetMedianColorDataflowNode::ColorPalette");
static_assert(offsetof(FGetMedianColorDataflowNode, MedianColor) == 240, "Offset mismatch for FGetMedianColorDataflowNode::MedianColor");

// /Script/DataflowNodes.GetPhysicsAssetFromSkeletalMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetPhysicsAssetFromSkeletalMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SkeletalMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PhysicsAsset; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetPhysicsAssetFromSkeletalMeshDataflowNode, SkeletalMesh) == 224, "Offset mismatch for FGetPhysicsAssetFromSkeletalMeshDataflowNode::SkeletalMesh");
static_assert(offsetof(FGetPhysicsAssetFromSkeletalMeshDataflowNode, PhysicsAsset) == 232, "Offset mismatch for FGetPhysicsAssetFromSkeletalMeshDataflowNode::PhysicsAsset");

// /Script/DataflowNodes.GetPointsCollectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetPointsCollectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Points[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Collection[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetPointsCollectionDataflowNode, Points) == 224, "Offset mismatch for FGetPointsCollectionDataflowNode::Points");
static_assert(offsetof(FGetPointsCollectionDataflowNode, Collection) == 272, "Offset mismatch for FGetPointsCollectionDataflowNode::Collection");

// /Script/DataflowNodes.GetSelectionSetDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetSelectionSetDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    FString Attribute; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t Selection[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetSelectionSetDataflowNode, Collection) == 224, "Offset mismatch for FGetSelectionSetDataflowNode::Collection");
static_assert(offsetof(FGetSelectionSetDataflowNode, Attribute) == 272, "Offset mismatch for FGetSelectionSetDataflowNode::Attribute");
static_assert(offsetof(FGetSelectionSetDataflowNode, Selection) == 288, "Offset mismatch for FGetSelectionSetDataflowNode::Selection");

// /Script/DataflowNodes.GetSkeletalMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetSkeletalMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SkeletalMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    FName PropertyName; // 0x00E8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGetSkeletalMeshDataflowNode, SkeletalMesh) == 224, "Offset mismatch for FGetSkeletalMeshDataflowNode::SkeletalMesh");
static_assert(offsetof(FGetSkeletalMeshDataflowNode, PropertyName) == 232, "Offset mismatch for FGetSkeletalMeshDataflowNode::PropertyName");

// /Script/DataflowNodes.GetSkeletonDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetSkeletonDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* skeleton; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    FName PropertyName; // 0x00E8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGetSkeletonDataflowNode, skeleton) == 224, "Offset mismatch for FGetSkeletonDataflowNode::skeleton");
static_assert(offsetof(FGetSkeletonDataflowNode, PropertyName) == 232, "Offset mismatch for FGetSkeletonDataflowNode::PropertyName");

// /Script/DataflowNodes.GetStaticMeshBoundingBoxDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetStaticMeshBoundingBoxDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* StaticMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoundingBox[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t Dimensions[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetStaticMeshBoundingBoxDataflowNode, StaticMesh) == 224, "Offset mismatch for FGetStaticMeshBoundingBoxDataflowNode::StaticMesh");
static_assert(offsetof(FGetStaticMeshBoundingBoxDataflowNode, BoundingBox) == 232, "Offset mismatch for FGetStaticMeshBoundingBoxDataflowNode::BoundingBox");
static_assert(offsetof(FGetStaticMeshBoundingBoxDataflowNode, Center) == 288, "Offset mismatch for FGetStaticMeshBoundingBoxDataflowNode::Center");
static_assert(offsetof(FGetStaticMeshBoundingBoxDataflowNode, Dimensions) == 312, "Offset mismatch for FGetStaticMeshBoundingBoxDataflowNode::Dimensions");

// /Script/DataflowNodes.GetStaticMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetStaticMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* StaticMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    FName PropertyName; // 0x00E8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGetStaticMeshDataflowNode, StaticMesh) == 224, "Offset mismatch for FGetStaticMeshDataflowNode::StaticMesh");
static_assert(offsetof(FGetStaticMeshDataflowNode, PropertyName) == 232, "Offset mismatch for FGetStaticMeshDataflowNode::PropertyName");

// /Script/DataflowNodes.GetStaticMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FGetStaticMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* StaticMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetStaticMeshDataflowNode_v2, StaticMesh) == 224, "Offset mismatch for FGetStaticMeshDataflowNode_v2::StaticMesh");

// /Script/DataflowNodes.MakeAttributeKeyDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeAttributeKeyDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString GroupIn; // 0x00E0 (Size: 0x10, Type: StrProperty)
    FString AttributeIn; // 0x00F0 (Size: 0x10, Type: StrProperty)
    std::uint8_t AttributeKeyOut[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeAttributeKeyDataflowNode, GroupIn) == 224, "Offset mismatch for FMakeAttributeKeyDataflowNode::GroupIn");
static_assert(offsetof(FMakeAttributeKeyDataflowNode, AttributeIn) == 240, "Offset mismatch for FMakeAttributeKeyDataflowNode::AttributeIn");
static_assert(offsetof(FMakeAttributeKeyDataflowNode, AttributeKeyOut) == 256, "Offset mismatch for FMakeAttributeKeyDataflowNode::AttributeKeyOut");

// /Script/DataflowNodes.MakeBoxMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeBoxMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Center[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Size[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::int32_t SubdivisionsX; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::int32_t SubdivisionsY; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::int32_t SubdivisionsZ; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    void* Mesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeBoxMeshDataflowNode, Center) == 224, "Offset mismatch for FMakeBoxMeshDataflowNode::Center");
static_assert(offsetof(FMakeBoxMeshDataflowNode, Size) == 248, "Offset mismatch for FMakeBoxMeshDataflowNode::Size");
static_assert(offsetof(FMakeBoxMeshDataflowNode, SubdivisionsX) == 272, "Offset mismatch for FMakeBoxMeshDataflowNode::SubdivisionsX");
static_assert(offsetof(FMakeBoxMeshDataflowNode, SubdivisionsY) == 276, "Offset mismatch for FMakeBoxMeshDataflowNode::SubdivisionsY");
static_assert(offsetof(FMakeBoxMeshDataflowNode, SubdivisionsZ) == 280, "Offset mismatch for FMakeBoxMeshDataflowNode::SubdivisionsZ");
static_assert(offsetof(FMakeBoxMeshDataflowNode, Mesh) == 288, "Offset mismatch for FMakeBoxMeshDataflowNode::Mesh");

// /Script/DataflowNodes.MakeBoxMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeBoxMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Center[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Size[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::int32_t SubdivisionsX; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::int32_t SubdivisionsY; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::int32_t SubdivisionsZ; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    void* Mesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeBoxMeshDataflowNode_v2, Center) == 224, "Offset mismatch for FMakeBoxMeshDataflowNode_v2::Center");
static_assert(offsetof(FMakeBoxMeshDataflowNode_v2, Size) == 248, "Offset mismatch for FMakeBoxMeshDataflowNode_v2::Size");
static_assert(offsetof(FMakeBoxMeshDataflowNode_v2, SubdivisionsX) == 272, "Offset mismatch for FMakeBoxMeshDataflowNode_v2::SubdivisionsX");
static_assert(offsetof(FMakeBoxMeshDataflowNode_v2, SubdivisionsY) == 276, "Offset mismatch for FMakeBoxMeshDataflowNode_v2::SubdivisionsY");
static_assert(offsetof(FMakeBoxMeshDataflowNode_v2, SubdivisionsZ) == 280, "Offset mismatch for FMakeBoxMeshDataflowNode_v2::SubdivisionsZ");
static_assert(offsetof(FMakeBoxMeshDataflowNode_v2, Mesh) == 288, "Offset mismatch for FMakeBoxMeshDataflowNode_v2::Mesh");

// /Script/DataflowNodes.MakeCapsuleMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeCapsuleMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Radius; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float SegmentLength; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumHemisphereArcSteps; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t NumCircleSteps; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t NumSegmentSteps; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    void* Mesh; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeCapsuleMeshDataflowNode, Radius) == 224, "Offset mismatch for FMakeCapsuleMeshDataflowNode::Radius");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode, SegmentLength) == 228, "Offset mismatch for FMakeCapsuleMeshDataflowNode::SegmentLength");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode, NumHemisphereArcSteps) == 232, "Offset mismatch for FMakeCapsuleMeshDataflowNode::NumHemisphereArcSteps");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode, NumCircleSteps) == 236, "Offset mismatch for FMakeCapsuleMeshDataflowNode::NumCircleSteps");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode, NumSegmentSteps) == 240, "Offset mismatch for FMakeCapsuleMeshDataflowNode::NumSegmentSteps");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode, Mesh) == 248, "Offset mismatch for FMakeCapsuleMeshDataflowNode::Mesh");

// /Script/DataflowNodes.MakeCapsuleMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeCapsuleMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Radius; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float SegmentLength; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumHemisphereArcSteps; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t NumCircleSteps; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t NumSegmentSteps; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    void* Mesh; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeCapsuleMeshDataflowNode_v2, Radius) == 224, "Offset mismatch for FMakeCapsuleMeshDataflowNode_v2::Radius");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode_v2, SegmentLength) == 228, "Offset mismatch for FMakeCapsuleMeshDataflowNode_v2::SegmentLength");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode_v2, NumHemisphereArcSteps) == 232, "Offset mismatch for FMakeCapsuleMeshDataflowNode_v2::NumHemisphereArcSteps");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode_v2, NumCircleSteps) == 236, "Offset mismatch for FMakeCapsuleMeshDataflowNode_v2::NumCircleSteps");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode_v2, NumSegmentSteps) == 240, "Offset mismatch for FMakeCapsuleMeshDataflowNode_v2::NumSegmentSteps");
static_assert(offsetof(FMakeCapsuleMeshDataflowNode_v2, Mesh) == 248, "Offset mismatch for FMakeCapsuleMeshDataflowNode_v2::Mesh");

// /Script/DataflowNodes.MakeColorPaletteDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeColorPaletteDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Color; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorPalette; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeColorPaletteDataflowNode, Color) == 224, "Offset mismatch for FMakeColorPaletteDataflowNode::Color");
static_assert(offsetof(FMakeColorPaletteDataflowNode, ColorPalette) == 240, "Offset mismatch for FMakeColorPaletteDataflowNode::ColorPalette");

// /Script/DataflowNodes.MakeColorPaletteFromTextureDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeColorPaletteFromTextureDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Texture; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    double Tolerance; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> ColorPalette; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeColorPaletteFromTextureDataflowNode, Texture) == 224, "Offset mismatch for FMakeColorPaletteFromTextureDataflowNode::Texture");
static_assert(offsetof(FMakeColorPaletteFromTextureDataflowNode, Tolerance) == 232, "Offset mismatch for FMakeColorPaletteFromTextureDataflowNode::Tolerance");
static_assert(offsetof(FMakeColorPaletteFromTextureDataflowNode, ColorPalette) == 240, "Offset mismatch for FMakeColorPaletteFromTextureDataflowNode::ColorPalette");

// /Script/DataflowNodes.MakeCylinderMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeCylinderMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Radius1; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Radius2; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t LengthSamples; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t AngleSamples; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    void* Mesh; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeCylinderMeshDataflowNode, Radius1) == 224, "Offset mismatch for FMakeCylinderMeshDataflowNode::Radius1");
static_assert(offsetof(FMakeCylinderMeshDataflowNode, Radius2) == 228, "Offset mismatch for FMakeCylinderMeshDataflowNode::Radius2");
static_assert(offsetof(FMakeCylinderMeshDataflowNode, Height) == 232, "Offset mismatch for FMakeCylinderMeshDataflowNode::Height");
static_assert(offsetof(FMakeCylinderMeshDataflowNode, LengthSamples) == 236, "Offset mismatch for FMakeCylinderMeshDataflowNode::LengthSamples");
static_assert(offsetof(FMakeCylinderMeshDataflowNode, AngleSamples) == 240, "Offset mismatch for FMakeCylinderMeshDataflowNode::AngleSamples");
static_assert(offsetof(FMakeCylinderMeshDataflowNode, Mesh) == 248, "Offset mismatch for FMakeCylinderMeshDataflowNode::Mesh");

// /Script/DataflowNodes.MakeCylinderMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeCylinderMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Radius1; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Radius2; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t LengthSamples; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t AngleSamples; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    void* Mesh; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeCylinderMeshDataflowNode_v2, Radius1) == 224, "Offset mismatch for FMakeCylinderMeshDataflowNode_v2::Radius1");
static_assert(offsetof(FMakeCylinderMeshDataflowNode_v2, Radius2) == 228, "Offset mismatch for FMakeCylinderMeshDataflowNode_v2::Radius2");
static_assert(offsetof(FMakeCylinderMeshDataflowNode_v2, Height) == 232, "Offset mismatch for FMakeCylinderMeshDataflowNode_v2::Height");
static_assert(offsetof(FMakeCylinderMeshDataflowNode_v2, LengthSamples) == 236, "Offset mismatch for FMakeCylinderMeshDataflowNode_v2::LengthSamples");
static_assert(offsetof(FMakeCylinderMeshDataflowNode_v2, AngleSamples) == 240, "Offset mismatch for FMakeCylinderMeshDataflowNode_v2::AngleSamples");
static_assert(offsetof(FMakeCylinderMeshDataflowNode_v2, Mesh) == 248, "Offset mismatch for FMakeCylinderMeshDataflowNode_v2::Mesh");

// /Script/DataflowNodes.MakeDiscMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeDiscMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Radius; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    std::uint8_t Normal[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::int32_t AngleSamples; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t RadialSamples; // 0x0104 (Size: 0x4, Type: IntProperty)
    float StartAngle; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float EndAngle; // 0x010C (Size: 0x4, Type: FloatProperty)
    void* Mesh; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeDiscMeshDataflowNode, Radius) == 224, "Offset mismatch for FMakeDiscMeshDataflowNode::Radius");
static_assert(offsetof(FMakeDiscMeshDataflowNode, Normal) == 232, "Offset mismatch for FMakeDiscMeshDataflowNode::Normal");
static_assert(offsetof(FMakeDiscMeshDataflowNode, AngleSamples) == 256, "Offset mismatch for FMakeDiscMeshDataflowNode::AngleSamples");
static_assert(offsetof(FMakeDiscMeshDataflowNode, RadialSamples) == 260, "Offset mismatch for FMakeDiscMeshDataflowNode::RadialSamples");
static_assert(offsetof(FMakeDiscMeshDataflowNode, StartAngle) == 264, "Offset mismatch for FMakeDiscMeshDataflowNode::StartAngle");
static_assert(offsetof(FMakeDiscMeshDataflowNode, EndAngle) == 268, "Offset mismatch for FMakeDiscMeshDataflowNode::EndAngle");
static_assert(offsetof(FMakeDiscMeshDataflowNode, Mesh) == 272, "Offset mismatch for FMakeDiscMeshDataflowNode::Mesh");

// /Script/DataflowNodes.MakeDiscMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeDiscMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Radius; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    std::uint8_t Normal[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::int32_t AngleSamples; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t RadialSamples; // 0x0104 (Size: 0x4, Type: IntProperty)
    float StartAngle; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float EndAngle; // 0x010C (Size: 0x4, Type: FloatProperty)
    void* Mesh; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeDiscMeshDataflowNode_v2, Radius) == 224, "Offset mismatch for FMakeDiscMeshDataflowNode_v2::Radius");
static_assert(offsetof(FMakeDiscMeshDataflowNode_v2, Normal) == 232, "Offset mismatch for FMakeDiscMeshDataflowNode_v2::Normal");
static_assert(offsetof(FMakeDiscMeshDataflowNode_v2, AngleSamples) == 256, "Offset mismatch for FMakeDiscMeshDataflowNode_v2::AngleSamples");
static_assert(offsetof(FMakeDiscMeshDataflowNode_v2, RadialSamples) == 260, "Offset mismatch for FMakeDiscMeshDataflowNode_v2::RadialSamples");
static_assert(offsetof(FMakeDiscMeshDataflowNode_v2, StartAngle) == 264, "Offset mismatch for FMakeDiscMeshDataflowNode_v2::StartAngle");
static_assert(offsetof(FMakeDiscMeshDataflowNode_v2, EndAngle) == 268, "Offset mismatch for FMakeDiscMeshDataflowNode_v2::EndAngle");
static_assert(offsetof(FMakeDiscMeshDataflowNode_v2, Mesh) == 272, "Offset mismatch for FMakeDiscMeshDataflowNode_v2::Mesh");

// /Script/DataflowNodes.MakeLiteralColorDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralColorDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t LinearColor[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Color[0x4]; // 0x00F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bRandom; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPseudoRandom; // 0x00F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00F6
    std::int32_t RandomSeed; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDeterministic; // 0x00FC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMakeLiteralColorDataflowNode, LinearColor) == 224, "Offset mismatch for FMakeLiteralColorDataflowNode::LinearColor");
static_assert(offsetof(FMakeLiteralColorDataflowNode, Color) == 240, "Offset mismatch for FMakeLiteralColorDataflowNode::Color");
static_assert(offsetof(FMakeLiteralColorDataflowNode, bRandom) == 244, "Offset mismatch for FMakeLiteralColorDataflowNode::bRandom");
static_assert(offsetof(FMakeLiteralColorDataflowNode, bPseudoRandom) == 245, "Offset mismatch for FMakeLiteralColorDataflowNode::bPseudoRandom");
static_assert(offsetof(FMakeLiteralColorDataflowNode, RandomSeed) == 248, "Offset mismatch for FMakeLiteralColorDataflowNode::RandomSeed");
static_assert(offsetof(FMakeLiteralColorDataflowNode, bDeterministic) == 252, "Offset mismatch for FMakeLiteralColorDataflowNode::bDeterministic");

// /Script/DataflowNodes.MakeLiteralColorHSLDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeLiteralColorHSLDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Hue; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Saturation; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float Lightness; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LinearColor[0x10]; // 0x00EC (Size: 0x10, Type: StructProperty)
    std::uint8_t Color[0x1]; // 0x00FC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMakeLiteralColorHSLDataflowNode, Hue) == 224, "Offset mismatch for FMakeLiteralColorHSLDataflowNode::Hue");
static_assert(offsetof(FMakeLiteralColorHSLDataflowNode, Saturation) == 228, "Offset mismatch for FMakeLiteralColorHSLDataflowNode::Saturation");
static_assert(offsetof(FMakeLiteralColorHSLDataflowNode, Lightness) == 232, "Offset mismatch for FMakeLiteralColorHSLDataflowNode::Lightness");
static_assert(offsetof(FMakeLiteralColorHSLDataflowNode, LinearColor) == 236, "Offset mismatch for FMakeLiteralColorHSLDataflowNode::LinearColor");
static_assert(offsetof(FMakeLiteralColorHSLDataflowNode, Color) == 252, "Offset mismatch for FMakeLiteralColorHSLDataflowNode::Color");

// /Script/DataflowNodes.MakeRandomColorPaletteFromReferenceColorHSLDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t ReferenceColor[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::int32_t NumColors; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUsePseudoRandom; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F5
    std::int32_t RandomSeed; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDeterministic; // 0x00FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00FD
    std::uint8_t HueRandomRange[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    std::uint8_t SaturationRandomRange[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t LightnessRandomRange[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t bFilter; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0131
    double Tolerance; // 0x0138 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> ColorPalette; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, ReferenceColor) == 224, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::ReferenceColor");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, NumColors) == 240, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::NumColors");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, bUsePseudoRandom) == 244, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::bUsePseudoRandom");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, RandomSeed) == 248, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::RandomSeed");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, bDeterministic) == 252, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::bDeterministic");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, HueRandomRange) == 256, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::HueRandomRange");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, SaturationRandomRange) == 272, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::SaturationRandomRange");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, LightnessRandomRange) == 288, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::LightnessRandomRange");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, bFilter) == 304, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::bFilter");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, Tolerance) == 312, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::Tolerance");
static_assert(offsetof(FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode, ColorPalette) == 320, "Offset mismatch for FMakeRandomColorPaletteFromReferenceColorHSLDataflowNode::ColorPalette");

// /Script/DataflowNodes.MakeRandomColorPaletteHSLDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeRandomColorPaletteHSLDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t NumColors; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUsePseudoRandom; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E5
    std::int32_t RandomSeed; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDeterministic; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00ED
    float HueRandomMin; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float HueRandomMax; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float SaturationRandomMin; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float SaturationRandomMax; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float LightnessRandomMin; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float LightnessRandomMax; // 0x0104 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFilter; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0109
    float Tolerance; // 0x010C (Size: 0x4, Type: FloatProperty)
    TArray<void*> ColorPalette; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, NumColors) == 224, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::NumColors");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, bUsePseudoRandom) == 228, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::bUsePseudoRandom");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, RandomSeed) == 232, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::RandomSeed");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, bDeterministic) == 236, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::bDeterministic");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, HueRandomMin) == 240, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::HueRandomMin");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, HueRandomMax) == 244, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::HueRandomMax");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, SaturationRandomMin) == 248, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::SaturationRandomMin");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, SaturationRandomMax) == 252, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::SaturationRandomMax");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, LightnessRandomMin) == 256, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::LightnessRandomMin");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, LightnessRandomMax) == 260, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::LightnessRandomMax");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, bFilter) == 264, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::bFilter");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, Tolerance) == 268, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::Tolerance");
static_assert(offsetof(FMakeRandomColorPaletteHSLDataflowNode, ColorPalette) == 272, "Offset mismatch for FMakeRandomColorPaletteHSLDataflowNode::ColorPalette");

// /Script/DataflowNodes.MakeRectangleMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeRectangleMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t origin[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    float Width; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::int32_t WidthVertexCount; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::int32_t HeightVertexCount; // 0x011C (Size: 0x4, Type: IntProperty)
    void* Mesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeRectangleMeshDataflowNode, origin) == 224, "Offset mismatch for FMakeRectangleMeshDataflowNode::origin");
static_assert(offsetof(FMakeRectangleMeshDataflowNode, Normal) == 248, "Offset mismatch for FMakeRectangleMeshDataflowNode::Normal");
static_assert(offsetof(FMakeRectangleMeshDataflowNode, Width) == 272, "Offset mismatch for FMakeRectangleMeshDataflowNode::Width");
static_assert(offsetof(FMakeRectangleMeshDataflowNode, Height) == 276, "Offset mismatch for FMakeRectangleMeshDataflowNode::Height");
static_assert(offsetof(FMakeRectangleMeshDataflowNode, WidthVertexCount) == 280, "Offset mismatch for FMakeRectangleMeshDataflowNode::WidthVertexCount");
static_assert(offsetof(FMakeRectangleMeshDataflowNode, HeightVertexCount) == 284, "Offset mismatch for FMakeRectangleMeshDataflowNode::HeightVertexCount");
static_assert(offsetof(FMakeRectangleMeshDataflowNode, Mesh) == 288, "Offset mismatch for FMakeRectangleMeshDataflowNode::Mesh");

// /Script/DataflowNodes.MakeRectangleMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeRectangleMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t origin[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    float Width; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::int32_t WidthVertexCount; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::int32_t HeightVertexCount; // 0x011C (Size: 0x4, Type: IntProperty)
    void* Mesh; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeRectangleMeshDataflowNode_v2, origin) == 224, "Offset mismatch for FMakeRectangleMeshDataflowNode_v2::origin");
static_assert(offsetof(FMakeRectangleMeshDataflowNode_v2, Normal) == 248, "Offset mismatch for FMakeRectangleMeshDataflowNode_v2::Normal");
static_assert(offsetof(FMakeRectangleMeshDataflowNode_v2, Width) == 272, "Offset mismatch for FMakeRectangleMeshDataflowNode_v2::Width");
static_assert(offsetof(FMakeRectangleMeshDataflowNode_v2, Height) == 276, "Offset mismatch for FMakeRectangleMeshDataflowNode_v2::Height");
static_assert(offsetof(FMakeRectangleMeshDataflowNode_v2, WidthVertexCount) == 280, "Offset mismatch for FMakeRectangleMeshDataflowNode_v2::WidthVertexCount");
static_assert(offsetof(FMakeRectangleMeshDataflowNode_v2, HeightVertexCount) == 284, "Offset mismatch for FMakeRectangleMeshDataflowNode_v2::HeightVertexCount");
static_assert(offsetof(FMakeRectangleMeshDataflowNode_v2, Mesh) == 288, "Offset mismatch for FMakeRectangleMeshDataflowNode_v2::Mesh");

// /Script/DataflowNodes.MakeSelectionSetDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeSelectionSetDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Selection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    FString Attribute; // 0x0138 (Size: 0x10, Type: StrProperty)
    std::uint8_t bStoreAsFloat; // 0x0148 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMakeSelectionSetDataflowNode, Collection) == 224, "Offset mismatch for FMakeSelectionSetDataflowNode::Collection");
static_assert(offsetof(FMakeSelectionSetDataflowNode, Selection) == 272, "Offset mismatch for FMakeSelectionSetDataflowNode::Selection");
static_assert(offsetof(FMakeSelectionSetDataflowNode, Attribute) == 312, "Offset mismatch for FMakeSelectionSetDataflowNode::Attribute");
static_assert(offsetof(FMakeSelectionSetDataflowNode, bStoreAsFloat) == 328, "Offset mismatch for FMakeSelectionSetDataflowNode::bStoreAsFloat");

// /Script/DataflowNodes.MakeSphereMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeSphereMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Radius; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumPhi; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTheta; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    void* Mesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeSphereMeshDataflowNode, Radius) == 224, "Offset mismatch for FMakeSphereMeshDataflowNode::Radius");
static_assert(offsetof(FMakeSphereMeshDataflowNode, NumPhi) == 228, "Offset mismatch for FMakeSphereMeshDataflowNode::NumPhi");
static_assert(offsetof(FMakeSphereMeshDataflowNode, NumTheta) == 232, "Offset mismatch for FMakeSphereMeshDataflowNode::NumTheta");
static_assert(offsetof(FMakeSphereMeshDataflowNode, Mesh) == 240, "Offset mismatch for FMakeSphereMeshDataflowNode::Mesh");

// /Script/DataflowNodes.MakeSphereMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeSphereMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Radius; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumPhi; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTheta; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    void* Mesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeSphereMeshDataflowNode_v2, Radius) == 224, "Offset mismatch for FMakeSphereMeshDataflowNode_v2::Radius");
static_assert(offsetof(FMakeSphereMeshDataflowNode_v2, NumPhi) == 228, "Offset mismatch for FMakeSphereMeshDataflowNode_v2::NumPhi");
static_assert(offsetof(FMakeSphereMeshDataflowNode_v2, NumTheta) == 232, "Offset mismatch for FMakeSphereMeshDataflowNode_v2::NumTheta");
static_assert(offsetof(FMakeSphereMeshDataflowNode_v2, Mesh) == 240, "Offset mismatch for FMakeSphereMeshDataflowNode_v2::Mesh");

// /Script/DataflowNodes.MakeStairMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeStairMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t StairType; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    std::int32_t NumSteps; // 0x00E4 (Size: 0x4, Type: IntProperty)
    float StepWidth; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float StepHeight; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float StepDepth; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float CurveAngle; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float InnerRadius; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00FC
    void* Mesh; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeStairMeshDataflowNode, StairType) == 224, "Offset mismatch for FMakeStairMeshDataflowNode::StairType");
static_assert(offsetof(FMakeStairMeshDataflowNode, NumSteps) == 228, "Offset mismatch for FMakeStairMeshDataflowNode::NumSteps");
static_assert(offsetof(FMakeStairMeshDataflowNode, StepWidth) == 232, "Offset mismatch for FMakeStairMeshDataflowNode::StepWidth");
static_assert(offsetof(FMakeStairMeshDataflowNode, StepHeight) == 236, "Offset mismatch for FMakeStairMeshDataflowNode::StepHeight");
static_assert(offsetof(FMakeStairMeshDataflowNode, StepDepth) == 240, "Offset mismatch for FMakeStairMeshDataflowNode::StepDepth");
static_assert(offsetof(FMakeStairMeshDataflowNode, CurveAngle) == 244, "Offset mismatch for FMakeStairMeshDataflowNode::CurveAngle");
static_assert(offsetof(FMakeStairMeshDataflowNode, InnerRadius) == 248, "Offset mismatch for FMakeStairMeshDataflowNode::InnerRadius");
static_assert(offsetof(FMakeStairMeshDataflowNode, Mesh) == 256, "Offset mismatch for FMakeStairMeshDataflowNode::Mesh");

// /Script/DataflowNodes.MakeStairMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeStairMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t StairType; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    std::int32_t NumSteps; // 0x00E4 (Size: 0x4, Type: IntProperty)
    float StepWidth; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float StepHeight; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float StepDepth; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float CurveAngle; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float InnerRadius; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00FC
    void* Mesh; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeStairMeshDataflowNode_v2, StairType) == 224, "Offset mismatch for FMakeStairMeshDataflowNode_v2::StairType");
static_assert(offsetof(FMakeStairMeshDataflowNode_v2, NumSteps) == 228, "Offset mismatch for FMakeStairMeshDataflowNode_v2::NumSteps");
static_assert(offsetof(FMakeStairMeshDataflowNode_v2, StepWidth) == 232, "Offset mismatch for FMakeStairMeshDataflowNode_v2::StepWidth");
static_assert(offsetof(FMakeStairMeshDataflowNode_v2, StepHeight) == 236, "Offset mismatch for FMakeStairMeshDataflowNode_v2::StepHeight");
static_assert(offsetof(FMakeStairMeshDataflowNode_v2, StepDepth) == 240, "Offset mismatch for FMakeStairMeshDataflowNode_v2::StepDepth");
static_assert(offsetof(FMakeStairMeshDataflowNode_v2, CurveAngle) == 244, "Offset mismatch for FMakeStairMeshDataflowNode_v2::CurveAngle");
static_assert(offsetof(FMakeStairMeshDataflowNode_v2, InnerRadius) == 248, "Offset mismatch for FMakeStairMeshDataflowNode_v2::InnerRadius");
static_assert(offsetof(FMakeStairMeshDataflowNode_v2, Mesh) == 256, "Offset mismatch for FMakeStairMeshDataflowNode_v2::Mesh");

// /Script/DataflowNodes.MakeTorusMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMakeTorusMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t origin[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    float Radius1; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::int32_t ProfileVertexCount; // 0x00FC (Size: 0x4, Type: IntProperty)
    float Radius2; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::int32_t SweepVertexCount; // 0x0104 (Size: 0x4, Type: IntProperty)
    void* Mesh; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeTorusMeshDataflowNode, origin) == 224, "Offset mismatch for FMakeTorusMeshDataflowNode::origin");
static_assert(offsetof(FMakeTorusMeshDataflowNode, Radius1) == 248, "Offset mismatch for FMakeTorusMeshDataflowNode::Radius1");
static_assert(offsetof(FMakeTorusMeshDataflowNode, ProfileVertexCount) == 252, "Offset mismatch for FMakeTorusMeshDataflowNode::ProfileVertexCount");
static_assert(offsetof(FMakeTorusMeshDataflowNode, Radius2) == 256, "Offset mismatch for FMakeTorusMeshDataflowNode::Radius2");
static_assert(offsetof(FMakeTorusMeshDataflowNode, SweepVertexCount) == 260, "Offset mismatch for FMakeTorusMeshDataflowNode::SweepVertexCount");
static_assert(offsetof(FMakeTorusMeshDataflowNode, Mesh) == 264, "Offset mismatch for FMakeTorusMeshDataflowNode::Mesh");

// /Script/DataflowNodes.MakeTorusMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FMakeTorusMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t origin[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    float Radius1; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::int32_t ProfileVertexCount; // 0x00FC (Size: 0x4, Type: IntProperty)
    float Radius2; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::int32_t SweepVertexCount; // 0x0104 (Size: 0x4, Type: IntProperty)
    void* Mesh; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMakeTorusMeshDataflowNode_v2, origin) == 224, "Offset mismatch for FMakeTorusMeshDataflowNode_v2::origin");
static_assert(offsetof(FMakeTorusMeshDataflowNode_v2, Radius1) == 248, "Offset mismatch for FMakeTorusMeshDataflowNode_v2::Radius1");
static_assert(offsetof(FMakeTorusMeshDataflowNode_v2, ProfileVertexCount) == 252, "Offset mismatch for FMakeTorusMeshDataflowNode_v2::ProfileVertexCount");
static_assert(offsetof(FMakeTorusMeshDataflowNode_v2, Radius2) == 256, "Offset mismatch for FMakeTorusMeshDataflowNode_v2::Radius2");
static_assert(offsetof(FMakeTorusMeshDataflowNode_v2, SweepVertexCount) == 260, "Offset mismatch for FMakeTorusMeshDataflowNode_v2::SweepVertexCount");
static_assert(offsetof(FMakeTorusMeshDataflowNode_v2, Mesh) == 264, "Offset mismatch for FMakeTorusMeshDataflowNode_v2::Mesh");

// /Script/DataflowNodes.PointsToDataflowPointsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FPointsToDataflowPointsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Points; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OutPoints[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPointsToDataflowPointsDataflowNode, Points) == 224, "Offset mismatch for FPointsToDataflowPointsDataflowNode::Points");
static_assert(offsetof(FPointsToDataflowPointsDataflowNode, OutPoints) == 240, "Offset mismatch for FPointsToDataflowPointsDataflowNode::OutPoints");

// /Script/DataflowNodes.SamplerRangeDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSamplerRangeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Sampler[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    float PointSeparation; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSamplePoints; // 0x0104 (Size: 0x4, Type: IntProperty)
    float MinSampledValue; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float MaxSampledValue; // 0x010C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSamplerRangeDataflowNode, Sampler) == 224, "Offset mismatch for FSamplerRangeDataflowNode::Sampler");
static_assert(offsetof(FSamplerRangeDataflowNode, PointSeparation) == 256, "Offset mismatch for FSamplerRangeDataflowNode::PointSeparation");
static_assert(offsetof(FSamplerRangeDataflowNode, NumSamplePoints) == 260, "Offset mismatch for FSamplerRangeDataflowNode::NumSamplePoints");
static_assert(offsetof(FSamplerRangeDataflowNode, MinSampledValue) == 264, "Offset mismatch for FSamplerRangeDataflowNode::MinSampledValue");
static_assert(offsetof(FSamplerRangeDataflowNode, MaxSampledValue) == 268, "Offset mismatch for FSamplerRangeDataflowNode::MaxSampledValue");

// /Script/DataflowNodes.ScalarVertexPropertyGroup
// Kind: ScriptStruct; super: none
struct FScalarVertexPropertyGroup
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FScalarVertexPropertyGroup, Name) == 0, "Offset mismatch for FScalarVertexPropertyGroup::Name");

// /Script/DataflowNodes.SelectionSetDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSelectionSetDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString Indices; // 0x00E0 (Size: 0x10, Type: StrProperty)
    TArray<void*> IndicesOut; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSelectionSetDataflowNode, Indices) == 224, "Offset mismatch for FSelectionSetDataflowNode::Indices");
static_assert(offsetof(FSelectionSetDataflowNode, IndicesOut) == 240, "Offset mismatch for FSelectionSetDataflowNode::IndicesOut");

// /Script/DataflowNodes.SetVertexColorOnMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetVertexColorOnMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VertexSelection[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    TArray<void*> ColorPalette; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Index; // 0x0130 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSetVertexColorOnMeshDataflowNode, Mesh) == 224, "Offset mismatch for FSetVertexColorOnMeshDataflowNode::Mesh");
static_assert(offsetof(FSetVertexColorOnMeshDataflowNode, VertexSelection) == 232, "Offset mismatch for FSetVertexColorOnMeshDataflowNode::VertexSelection");
static_assert(offsetof(FSetVertexColorOnMeshDataflowNode, Color) == 272, "Offset mismatch for FSetVertexColorOnMeshDataflowNode::Color");
static_assert(offsetof(FSetVertexColorOnMeshDataflowNode, ColorPalette) == 288, "Offset mismatch for FSetVertexColorOnMeshDataflowNode::ColorPalette");
static_assert(offsetof(FSetVertexColorOnMeshDataflowNode, Index) == 304, "Offset mismatch for FSetVertexColorOnMeshDataflowNode::Index");

// /Script/DataflowNodes.SkeletalMeshBoneDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSkeletalMeshBoneDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FName BoneName; // 0x00E0 (Size: 0x8, Type: NameProperty)
    void* SkeletalMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t BoneIndexOut; // 0x00F0 (Size: 0x4, Type: IntProperty)
    FName PropertyName; // 0x00F4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSkeletalMeshBoneDataflowNode, BoneName) == 224, "Offset mismatch for FSkeletalMeshBoneDataflowNode::BoneName");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, SkeletalMesh) == 232, "Offset mismatch for FSkeletalMeshBoneDataflowNode::SkeletalMesh");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, BoneIndexOut) == 240, "Offset mismatch for FSkeletalMeshBoneDataflowNode::BoneIndexOut");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, PropertyName) == 244, "Offset mismatch for FSkeletalMeshBoneDataflowNode::PropertyName");

// /Script/DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSkeletalMeshReferenceTransformDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SkeletalMeshIn; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t BoneIndexIn; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    std::uint8_t TransformOut[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSkeletalMeshReferenceTransformDataflowNode, SkeletalMeshIn) == 224, "Offset mismatch for FSkeletalMeshReferenceTransformDataflowNode::SkeletalMeshIn");
static_assert(offsetof(FSkeletalMeshReferenceTransformDataflowNode, BoneIndexIn) == 232, "Offset mismatch for FSkeletalMeshReferenceTransformDataflowNode::BoneIndexIn");
static_assert(offsetof(FSkeletalMeshReferenceTransformDataflowNode, TransformOut) == 240, "Offset mismatch for FSkeletalMeshReferenceTransformDataflowNode::TransformOut");

// /Script/DataflowNodes.SkeletalMeshToMeshDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSkeletalMeshToMeshDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SkeletalMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Mesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialArray; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t LODLevel; // 0x0100 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSkeletalMeshToMeshDataflowNode, SkeletalMesh) == 224, "Offset mismatch for FSkeletalMeshToMeshDataflowNode::SkeletalMesh");
static_assert(offsetof(FSkeletalMeshToMeshDataflowNode, Mesh) == 232, "Offset mismatch for FSkeletalMeshToMeshDataflowNode::Mesh");
static_assert(offsetof(FSkeletalMeshToMeshDataflowNode, MaterialArray) == 240, "Offset mismatch for FSkeletalMeshToMeshDataflowNode::MaterialArray");
static_assert(offsetof(FSkeletalMeshToMeshDataflowNode, LODLevel) == 256, "Offset mismatch for FSkeletalMeshToMeshDataflowNode::LODLevel");

// /Script/DataflowNodes.SkeletalMeshToMeshDataflowNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FSkeletalMeshToMeshDataflowNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SkeletalMesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Mesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LODLevel; // 0x00F0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSkeletalMeshToMeshDataflowNode_v2, SkeletalMesh) == 224, "Offset mismatch for FSkeletalMeshToMeshDataflowNode_v2::SkeletalMesh");
static_assert(offsetof(FSkeletalMeshToMeshDataflowNode_v2, Mesh) == 232, "Offset mismatch for FSkeletalMeshToMeshDataflowNode_v2::Mesh");
static_assert(offsetof(FSkeletalMeshToMeshDataflowNode_v2, LODLevel) == 240, "Offset mismatch for FSkeletalMeshToMeshDataflowNode_v2::LODLevel");

// /Script/DataflowNodes.SkeletonAssetTerminalNode
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FSkeletonAssetTerminalNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SourceSkeleton; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* SkeletonAsset; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSkeletonAssetTerminalNode, SourceSkeleton) == 224, "Offset mismatch for FSkeletonAssetTerminalNode::SourceSkeleton");
static_assert(offsetof(FSkeletonAssetTerminalNode, SkeletonAsset) == 232, "Offset mismatch for FSkeletonAssetTerminalNode::SkeletonAsset");

// /Script/DataflowNodes.TransferMeshAttributesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FTransferMeshAttributesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Mesh; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* SourceMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t All[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t None[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> AttributeProxies; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TransferMethod; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0121
    float SearchRadius; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float NormalThreshold; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLayeredMeshSupport; // 0x012C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseIntrinsicLaplacian; // 0x012D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTransferMeshAttributesDataflowNode, Mesh) == 224, "Offset mismatch for FTransferMeshAttributesDataflowNode::Mesh");
static_assert(offsetof(FTransferMeshAttributesDataflowNode, SourceMesh) == 232, "Offset mismatch for FTransferMeshAttributesDataflowNode::SourceMesh");
static_assert(offsetof(FTransferMeshAttributesDataflowNode, All) == 240, "Offset mismatch for FTransferMeshAttributesDataflowNode::All");
static_assert(offsetof(FTransferMeshAttributesDataflowNode, None) == 256, "Offset mismatch for FTransferMeshAttributesDataflowNode::None");
static_assert(offsetof(FTransferMeshAttributesDataflowNode, AttributeProxies) == 272, "Offset mismatch for FTransferMeshAttributesDataflowNode::AttributeProxies");
static_assert(offsetof(FTransferMeshAttributesDataflowNode, TransferMethod) == 288, "Offset mismatch for FTransferMeshAttributesDataflowNode::TransferMethod");
static_assert(offsetof(FTransferMeshAttributesDataflowNode, SearchRadius) == 292, "Offset mismatch for FTransferMeshAttributesDataflowNode::SearchRadius");
static_assert(offsetof(FTransferMeshAttributesDataflowNode, NormalThreshold) == 296, "Offset mismatch for FTransferMeshAttributesDataflowNode::NormalThreshold");
static_assert(offsetof(FTransferMeshAttributesDataflowNode, bLayeredMeshSupport) == 300, "Offset mismatch for FTransferMeshAttributesDataflowNode::bLayeredMeshSupport");
static_assert(offsetof(FTransferMeshAttributesDataflowNode, bUseIntrinsicLaplacian) == 301, "Offset mismatch for FTransferMeshAttributesDataflowNode::bUseIntrinsicLaplacian");
