/**
 * decamp dumper generated SDK
 * Package: /Script/MeshModelingToolsExp
 */
#pragma once
#include "Basic.h"

// /Script/MeshModelingToolsExp.BakeMultiMeshDetailProperties
// Kind: ScriptStruct; super: none
struct FBakeMultiMeshDetailProperties
{
public:
    void* SourceMesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SourceTexture; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SourceTextureUVLayer; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBakeMultiMeshDetailProperties, SourceMesh) == 0, "Offset mismatch for FBakeMultiMeshDetailProperties::SourceMesh");
static_assert(offsetof(FBakeMultiMeshDetailProperties, SourceTexture) == 8, "Offset mismatch for FBakeMultiMeshDetailProperties::SourceTexture");
static_assert(offsetof(FBakeMultiMeshDetailProperties, SourceTextureUVLayer) == 16, "Offset mismatch for FBakeMultiMeshDetailProperties::SourceTextureUVLayer");

// /Script/MeshModelingToolsExp.EditPivotTarget
// Kind: ScriptStruct; super: none
struct FEditPivotTarget
{
public:
    void* TransformProxy; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TransformGizmo; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEditPivotTarget, TransformProxy) == 0, "Offset mismatch for FEditPivotTarget::TransformProxy");
static_assert(offsetof(FEditPivotTarget, TransformGizmo) == 8, "Offset mismatch for FEditPivotTarget::TransformGizmo");

// /Script/MeshModelingToolsExp.PhysicsBoxData
// Kind: ScriptStruct; super: none
struct FPhysicsBoxData
{
public:
    std::uint8_t Dimensions[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Element[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsBoxData, Dimensions) == 0, "Offset mismatch for FPhysicsBoxData::Dimensions");
static_assert(offsetof(FPhysicsBoxData, Transform) == 32, "Offset mismatch for FPhysicsBoxData::Transform");
static_assert(offsetof(FPhysicsBoxData, Element) == 128, "Offset mismatch for FPhysicsBoxData::Element");

// /Script/MeshModelingToolsExp.PhysicsCapsuleData
// Kind: ScriptStruct; super: none
struct FPhysicsCapsuleData
{
public:
    float Radius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Length; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Element[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsCapsuleData, Radius) == 0, "Offset mismatch for FPhysicsCapsuleData::Radius");
static_assert(offsetof(FPhysicsCapsuleData, Length) == 4, "Offset mismatch for FPhysicsCapsuleData::Length");
static_assert(offsetof(FPhysicsCapsuleData, Transform) == 16, "Offset mismatch for FPhysicsCapsuleData::Transform");
static_assert(offsetof(FPhysicsCapsuleData, Element) == 112, "Offset mismatch for FPhysicsCapsuleData::Element");

// /Script/MeshModelingToolsExp.PhysicsConvexData
// Kind: ScriptStruct; super: none
struct FPhysicsConvexData
{
public:
    std::int32_t NumVertices; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumFaces; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t Element[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsConvexData, NumVertices) == 0, "Offset mismatch for FPhysicsConvexData::NumVertices");
static_assert(offsetof(FPhysicsConvexData, NumFaces) == 4, "Offset mismatch for FPhysicsConvexData::NumFaces");
static_assert(offsetof(FPhysicsConvexData, Element) == 8, "Offset mismatch for FPhysicsConvexData::Element");

// /Script/MeshModelingToolsExp.PhysicsLevelSetData
// Kind: ScriptStruct; super: none
struct FPhysicsLevelSetData
{
public:
    std::uint8_t Element[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsLevelSetData, Element) == 0, "Offset mismatch for FPhysicsLevelSetData::Element");

// /Script/MeshModelingToolsExp.PhysicsSphereData
// Kind: ScriptStruct; super: none
struct FPhysicsSphereData
{
public:
    float Radius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0004
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Element[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsSphereData, Radius) == 0, "Offset mismatch for FPhysicsSphereData::Radius");
static_assert(offsetof(FPhysicsSphereData, Transform) == 16, "Offset mismatch for FPhysicsSphereData::Transform");
static_assert(offsetof(FPhysicsSphereData, Element) == 112, "Offset mismatch for FPhysicsSphereData::Element");

// /Script/MeshModelingToolsExp.TransformMeshesTarget
// Kind: ScriptStruct; super: none
struct FTransformMeshesTarget
{
public:
    void* TransformProxy; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TransformGizmo; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTransformMeshesTarget, TransformProxy) == 0, "Offset mismatch for FTransformMeshesTarget::TransformProxy");
static_assert(offsetof(FTransformMeshesTarget, TransformGizmo) == 8, "Offset mismatch for FTransformMeshesTarget::TransformGizmo");

// /Script/MeshModelingToolsExp.AddPatchTool
// Kind: Class; super: SingleClickTool
class UAddPatchTool
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ShapeSettings; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAddPatchTool, ShapeSettings) == 192, "Offset mismatch for UAddPatchTool::ShapeSettings");
static_assert(offsetof(UAddPatchTool, MaterialProperties) == 200, "Offset mismatch for UAddPatchTool::MaterialProperties");
static_assert(offsetof(UAddPatchTool, PreviewMesh) == 208, "Offset mismatch for UAddPatchTool::PreviewMesh");

// /Script/MeshModelingToolsExp.AddPatchToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class UAddPatchToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.AddPatchToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UAddPatchToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float Width; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Rotation; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::int32_t Subdivisions; // 0x0070 (Size: 0x4, Type: IntProperty)
    float Shift; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAddPatchToolProperties, Width) == 104, "Offset mismatch for UAddPatchToolProperties::Width");
static_assert(offsetof(UAddPatchToolProperties, Rotation) == 108, "Offset mismatch for UAddPatchToolProperties::Rotation");
static_assert(offsetof(UAddPatchToolProperties, Subdivisions) == 112, "Offset mismatch for UAddPatchToolProperties::Subdivisions");
static_assert(offsetof(UAddPatchToolProperties, Shift) == 116, "Offset mismatch for UAddPatchToolProperties::Shift");

// /Script/MeshModelingToolsExp.AlignObjectsTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UAlignObjectsTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* AlignProps; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAlignObjectsTool, AlignProps) == 216, "Offset mismatch for UAlignObjectsTool::AlignProps");

// /Script/MeshModelingToolsExp.AlignObjectsToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UAlignObjectsToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.AlignObjectsToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UAlignObjectsToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t AlignType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t AlignTo; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    std::uint8_t BoxPosition; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0071
    std::uint8_t bAlignX; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlignY; // 0x0075 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlignZ; // 0x0076 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAlignObjectsToolProperties, AlignType) == 104, "Offset mismatch for UAlignObjectsToolProperties::AlignType");
static_assert(offsetof(UAlignObjectsToolProperties, AlignTo) == 108, "Offset mismatch for UAlignObjectsToolProperties::AlignTo");
static_assert(offsetof(UAlignObjectsToolProperties, BoxPosition) == 112, "Offset mismatch for UAlignObjectsToolProperties::BoxPosition");
static_assert(offsetof(UAlignObjectsToolProperties, bAlignX) == 116, "Offset mismatch for UAlignObjectsToolProperties::bAlignX");
static_assert(offsetof(UAlignObjectsToolProperties, bAlignY) == 117, "Offset mismatch for UAlignObjectsToolProperties::bAlignY");
static_assert(offsetof(UAlignObjectsToolProperties, bAlignZ) == 118, "Offset mismatch for UAlignObjectsToolProperties::bAlignZ");

// /Script/MeshModelingToolsExp.BakeCurvatureMapToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeCurvatureMapToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CurvatureType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t ColorMapping; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    float ColorRangeMultiplier; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MinRangeMultiplier; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Clamping; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UBakeCurvatureMapToolProperties, CurvatureType) == 104, "Offset mismatch for UBakeCurvatureMapToolProperties::CurvatureType");
static_assert(offsetof(UBakeCurvatureMapToolProperties, ColorMapping) == 108, "Offset mismatch for UBakeCurvatureMapToolProperties::ColorMapping");
static_assert(offsetof(UBakeCurvatureMapToolProperties, ColorRangeMultiplier) == 112, "Offset mismatch for UBakeCurvatureMapToolProperties::ColorRangeMultiplier");
static_assert(offsetof(UBakeCurvatureMapToolProperties, MinRangeMultiplier) == 116, "Offset mismatch for UBakeCurvatureMapToolProperties::MinRangeMultiplier");
static_assert(offsetof(UBakeCurvatureMapToolProperties, Clamping) == 120, "Offset mismatch for UBakeCurvatureMapToolProperties::Clamping");

// /Script/MeshModelingToolsExp.BakeHeightMapToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeHeightMapToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t HeightRangeMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float InnerDistance; // 0x006C (Size: 0x4, Type: FloatProperty)
    float OuterDistance; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float InnerBoundsDistance; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float OuterBoundsDistance; // 0x0078 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBakeHeightMapToolProperties, HeightRangeMode) == 104, "Offset mismatch for UBakeHeightMapToolProperties::HeightRangeMode");
static_assert(offsetof(UBakeHeightMapToolProperties, InnerDistance) == 108, "Offset mismatch for UBakeHeightMapToolProperties::InnerDistance");
static_assert(offsetof(UBakeHeightMapToolProperties, OuterDistance) == 112, "Offset mismatch for UBakeHeightMapToolProperties::OuterDistance");
static_assert(offsetof(UBakeHeightMapToolProperties, InnerBoundsDistance) == 116, "Offset mismatch for UBakeHeightMapToolProperties::InnerBoundsDistance");
static_assert(offsetof(UBakeHeightMapToolProperties, OuterBoundsDistance) == 120, "Offset mismatch for UBakeHeightMapToolProperties::OuterBoundsDistance");

// /Script/MeshModelingToolsExp.BakeInputMeshProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeInputMeshProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* TargetStaticMesh; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* TargetSkeletalMesh; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* TargetDynamicMesh; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    FString TargetUVLayer; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bHasTargetUVLayer; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    void* SourceStaticMesh; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* SourceSkeletalMesh; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* SourceDynamicMesh; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHideSourceMesh; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00B1
    void* SourceNormalMap; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    FString SourceNormalMapUVLayer; // 0x00C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t SourceNormalSpace; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00D1
    std::uint8_t bHasSourceNormalMap; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00D5
    float ProjectionDistance; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bProjectionInWorldSpace; // 0x00DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x00DD
    TArray<void*> TargetUVLayerNamesList; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceUVLayerNamesList; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBakeInputMeshProperties, TargetStaticMesh) == 104, "Offset mismatch for UBakeInputMeshProperties::TargetStaticMesh");
static_assert(offsetof(UBakeInputMeshProperties, TargetSkeletalMesh) == 112, "Offset mismatch for UBakeInputMeshProperties::TargetSkeletalMesh");
static_assert(offsetof(UBakeInputMeshProperties, TargetDynamicMesh) == 120, "Offset mismatch for UBakeInputMeshProperties::TargetDynamicMesh");
static_assert(offsetof(UBakeInputMeshProperties, TargetUVLayer) == 128, "Offset mismatch for UBakeInputMeshProperties::TargetUVLayer");
static_assert(offsetof(UBakeInputMeshProperties, bHasTargetUVLayer) == 144, "Offset mismatch for UBakeInputMeshProperties::bHasTargetUVLayer");
static_assert(offsetof(UBakeInputMeshProperties, SourceStaticMesh) == 152, "Offset mismatch for UBakeInputMeshProperties::SourceStaticMesh");
static_assert(offsetof(UBakeInputMeshProperties, SourceSkeletalMesh) == 160, "Offset mismatch for UBakeInputMeshProperties::SourceSkeletalMesh");
static_assert(offsetof(UBakeInputMeshProperties, SourceDynamicMesh) == 168, "Offset mismatch for UBakeInputMeshProperties::SourceDynamicMesh");
static_assert(offsetof(UBakeInputMeshProperties, bHideSourceMesh) == 176, "Offset mismatch for UBakeInputMeshProperties::bHideSourceMesh");
static_assert(offsetof(UBakeInputMeshProperties, SourceNormalMap) == 184, "Offset mismatch for UBakeInputMeshProperties::SourceNormalMap");
static_assert(offsetof(UBakeInputMeshProperties, SourceNormalMapUVLayer) == 192, "Offset mismatch for UBakeInputMeshProperties::SourceNormalMapUVLayer");
static_assert(offsetof(UBakeInputMeshProperties, SourceNormalSpace) == 208, "Offset mismatch for UBakeInputMeshProperties::SourceNormalSpace");
static_assert(offsetof(UBakeInputMeshProperties, bHasSourceNormalMap) == 212, "Offset mismatch for UBakeInputMeshProperties::bHasSourceNormalMap");
static_assert(offsetof(UBakeInputMeshProperties, ProjectionDistance) == 216, "Offset mismatch for UBakeInputMeshProperties::ProjectionDistance");
static_assert(offsetof(UBakeInputMeshProperties, bProjectionInWorldSpace) == 220, "Offset mismatch for UBakeInputMeshProperties::bProjectionInWorldSpace");
static_assert(offsetof(UBakeInputMeshProperties, TargetUVLayerNamesList) == 224, "Offset mismatch for UBakeInputMeshProperties::TargetUVLayerNamesList");
static_assert(offsetof(UBakeInputMeshProperties, SourceUVLayerNamesList) == 240, "Offset mismatch for UBakeInputMeshProperties::SourceUVLayerNamesList");

// /Script/MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeMeshAttributeMapsResultToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TMap<void*, void*> Result; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UBakeMeshAttributeMapsResultToolProperties, Result) == 104, "Offset mismatch for UBakeMeshAttributeMapsResultToolProperties::Result");

// /Script/MeshModelingToolsExp.BakeMeshAttributeMapsTool
// Kind: Class; super: BakeMeshAttributeMapsToolBase
class UBakeMeshAttributeMapsTool
{
public:
    std::uint8_t Pad_0000[0x320]; // 0x0000
    void* InputMeshSettings; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* ResultSettings; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* UVShellSettings; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBakeMeshAttributeMapsTool, InputMeshSettings) == 800, "Offset mismatch for UBakeMeshAttributeMapsTool::InputMeshSettings");
static_assert(offsetof(UBakeMeshAttributeMapsTool, Settings) == 808, "Offset mismatch for UBakeMeshAttributeMapsTool::Settings");
static_assert(offsetof(UBakeMeshAttributeMapsTool, ResultSettings) == 816, "Offset mismatch for UBakeMeshAttributeMapsTool::ResultSettings");
static_assert(offsetof(UBakeMeshAttributeMapsTool, UVShellSettings) == 824, "Offset mismatch for UBakeMeshAttributeMapsTool::UVShellSettings");

// /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBase
// Kind: Class; super: BakeMeshAttributeTool
class UBakeMeshAttributeMapsToolBase
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    void* VisualizationProps; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x01F8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMaterial; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    void* BentNormalPreviewMaterial; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x50]; // 0x0210
    TMap<void*, void*> CachedMaps; // 0x0260 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x98]; // 0x0270
    void* EmptyNormalMap; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* EmptyColorMapBlack; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* EmptyColorMapWhite; // 0x0318 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBakeMeshAttributeMapsToolBase, VisualizationProps) == 496, "Offset mismatch for UBakeMeshAttributeMapsToolBase::VisualizationProps");
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, PreviewMesh) == 504, "Offset mismatch for UBakeMeshAttributeMapsToolBase::PreviewMesh");
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, PreviewMaterial) == 512, "Offset mismatch for UBakeMeshAttributeMapsToolBase::PreviewMaterial");
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, BentNormalPreviewMaterial) == 520, "Offset mismatch for UBakeMeshAttributeMapsToolBase::BentNormalPreviewMaterial");
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, CachedMaps) == 608, "Offset mismatch for UBakeMeshAttributeMapsToolBase::CachedMaps");
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, EmptyNormalMap) == 776, "Offset mismatch for UBakeMeshAttributeMapsToolBase::EmptyNormalMap");
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, EmptyColorMapBlack) == 784, "Offset mismatch for UBakeMeshAttributeMapsToolBase::EmptyColorMapBlack");
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, EmptyColorMapWhite) == 792, "Offset mismatch for UBakeMeshAttributeMapsToolBase::EmptyColorMapWhite");

// /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UBakeMeshAttributeMapsToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeMeshAttributeMapsToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t MapTypes; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    FString MapPreview; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Resolution; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0081
    std::uint8_t BitDepth; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0085
    std::uint8_t SamplesPerPixel; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0089
    void* SampleFilterMask; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MapPreviewNamesList; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, MapTypes) == 104, "Offset mismatch for UBakeMeshAttributeMapsToolProperties::MapTypes");
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, MapPreview) == 112, "Offset mismatch for UBakeMeshAttributeMapsToolProperties::MapPreview");
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, Resolution) == 128, "Offset mismatch for UBakeMeshAttributeMapsToolProperties::Resolution");
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, BitDepth) == 132, "Offset mismatch for UBakeMeshAttributeMapsToolProperties::BitDepth");
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, SamplesPerPixel) == 136, "Offset mismatch for UBakeMeshAttributeMapsToolProperties::SamplesPerPixel");
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, SampleFilterMask) == 144, "Offset mismatch for UBakeMeshAttributeMapsToolProperties::SampleFilterMask");
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, MapPreviewNamesList) == 152, "Offset mismatch for UBakeMeshAttributeMapsToolProperties::MapPreviewNamesList");

// /Script/MeshModelingToolsExp.BakeMeshAttributeTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UBakeMeshAttributeTool
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* OcclusionSettings; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* CurvatureSettings; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* TextureSettings; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* MultiTextureSettings; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* HeightSettings; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* WorkingPreviewMaterial; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* ErrorPreviewMaterial; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBakeMeshAttributeTool, OcclusionSettings) == 224, "Offset mismatch for UBakeMeshAttributeTool::OcclusionSettings");
static_assert(offsetof(UBakeMeshAttributeTool, CurvatureSettings) == 232, "Offset mismatch for UBakeMeshAttributeTool::CurvatureSettings");
static_assert(offsetof(UBakeMeshAttributeTool, TextureSettings) == 240, "Offset mismatch for UBakeMeshAttributeTool::TextureSettings");
static_assert(offsetof(UBakeMeshAttributeTool, MultiTextureSettings) == 248, "Offset mismatch for UBakeMeshAttributeTool::MultiTextureSettings");
static_assert(offsetof(UBakeMeshAttributeTool, HeightSettings) == 256, "Offset mismatch for UBakeMeshAttributeTool::HeightSettings");
static_assert(offsetof(UBakeMeshAttributeTool, WorkingPreviewMaterial) == 264, "Offset mismatch for UBakeMeshAttributeTool::WorkingPreviewMaterial");
static_assert(offsetof(UBakeMeshAttributeTool, ErrorPreviewMaterial) == 272, "Offset mismatch for UBakeMeshAttributeTool::ErrorPreviewMaterial");

// /Script/MeshModelingToolsExp.BakeMeshAttributeVertexTool
// Kind: Class; super: BakeMeshAttributeTool
class UBakeMeshAttributeVertexTool
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    void* InputMeshSettings; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x01F8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMaterial; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    void* PreviewAlphaMaterial; // 0x0210 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBakeMeshAttributeVertexTool, InputMeshSettings) == 496, "Offset mismatch for UBakeMeshAttributeVertexTool::InputMeshSettings");
static_assert(offsetof(UBakeMeshAttributeVertexTool, Settings) == 504, "Offset mismatch for UBakeMeshAttributeVertexTool::Settings");
static_assert(offsetof(UBakeMeshAttributeVertexTool, PreviewMesh) == 512, "Offset mismatch for UBakeMeshAttributeVertexTool::PreviewMesh");
static_assert(offsetof(UBakeMeshAttributeVertexTool, PreviewMaterial) == 520, "Offset mismatch for UBakeMeshAttributeVertexTool::PreviewMaterial");
static_assert(offsetof(UBakeMeshAttributeVertexTool, PreviewAlphaMaterial) == 528, "Offset mismatch for UBakeMeshAttributeVertexTool::PreviewAlphaMaterial");

// /Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UBakeMeshAttributeVertexToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeMeshAttributeVertexToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t OutputMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t OutputType; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t OutputTypeR; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t OutputTypeG; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t OutputTypeB; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t OutputTypeA; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t PreviewMode; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0081
    std::uint8_t TopologyMode; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0085
    std::uint8_t bSplitAtNormalSeams; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSplitAtUVSeams; // 0x0089 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, OutputMode) == 104, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::OutputMode");
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, OutputType) == 108, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::OutputType");
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, OutputTypeR) == 112, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::OutputTypeR");
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, OutputTypeG) == 116, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::OutputTypeG");
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, OutputTypeB) == 120, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::OutputTypeB");
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, OutputTypeA) == 124, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::OutputTypeA");
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, PreviewMode) == 128, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::PreviewMode");
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, TopologyMode) == 132, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::TopologyMode");
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, bSplitAtNormalSeams) == 136, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::bSplitAtNormalSeams");
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, bSplitAtUVSeams) == 137, "Offset mismatch for UBakeMeshAttributeVertexToolProperties::bSplitAtUVSeams");

// /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool
// Kind: Class; super: BakeMeshAttributeMapsToolBase
class UBakeMultiMeshAttributeMapsTool
{
public:
    std::uint8_t Pad_0000[0x320]; // 0x0000
    void* Settings; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* InputMeshSettings; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* ResultSettings; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBakeMultiMeshAttributeMapsTool, Settings) == 800, "Offset mismatch for UBakeMultiMeshAttributeMapsTool::Settings");
static_assert(offsetof(UBakeMultiMeshAttributeMapsTool, InputMeshSettings) == 808, "Offset mismatch for UBakeMultiMeshAttributeMapsTool::InputMeshSettings");
static_assert(offsetof(UBakeMultiMeshAttributeMapsTool, ResultSettings) == 816, "Offset mismatch for UBakeMultiMeshAttributeMapsTool::ResultSettings");

// /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UBakeMultiMeshAttributeMapsToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeMultiMeshAttributeMapsToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t MapTypes; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    FString MapPreview; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Resolution; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0081
    std::uint8_t BitDepth; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0085
    std::uint8_t SamplesPerPixel; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0089
    void* SampleFilterMask; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MapPreviewNamesList; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, MapTypes) == 104, "Offset mismatch for UBakeMultiMeshAttributeMapsToolProperties::MapTypes");
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, MapPreview) == 112, "Offset mismatch for UBakeMultiMeshAttributeMapsToolProperties::MapPreview");
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, Resolution) == 128, "Offset mismatch for UBakeMultiMeshAttributeMapsToolProperties::Resolution");
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, BitDepth) == 132, "Offset mismatch for UBakeMultiMeshAttributeMapsToolProperties::BitDepth");
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, SamplesPerPixel) == 136, "Offset mismatch for UBakeMultiMeshAttributeMapsToolProperties::SamplesPerPixel");
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, SampleFilterMask) == 144, "Offset mismatch for UBakeMultiMeshAttributeMapsToolProperties::SampleFilterMask");
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, MapPreviewNamesList) == 152, "Offset mismatch for UBakeMultiMeshAttributeMapsToolProperties::MapPreviewNamesList");

// /Script/MeshModelingToolsExp.BakeMultiMeshInputToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeMultiMeshInputToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* TargetStaticMesh; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* TargetSkeletalMesh; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* TargetDynamicMesh; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    FString TargetUVLayer; // 0x0080 (Size: 0x10, Type: StrProperty)
    TArray<void*> SourceMeshes; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    float ProjectionDistance; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00A4
    TArray<void*> TargetUVLayerNamesList; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetStaticMesh) == 104, "Offset mismatch for UBakeMultiMeshInputToolProperties::TargetStaticMesh");
static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetSkeletalMesh) == 112, "Offset mismatch for UBakeMultiMeshInputToolProperties::TargetSkeletalMesh");
static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetDynamicMesh) == 120, "Offset mismatch for UBakeMultiMeshInputToolProperties::TargetDynamicMesh");
static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetUVLayer) == 128, "Offset mismatch for UBakeMultiMeshInputToolProperties::TargetUVLayer");
static_assert(offsetof(UBakeMultiMeshInputToolProperties, SourceMeshes) == 144, "Offset mismatch for UBakeMultiMeshInputToolProperties::SourceMeshes");
static_assert(offsetof(UBakeMultiMeshInputToolProperties, ProjectionDistance) == 160, "Offset mismatch for UBakeMultiMeshInputToolProperties::ProjectionDistance");
static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetUVLayerNamesList) == 168, "Offset mismatch for UBakeMultiMeshInputToolProperties::TargetUVLayerNamesList");

// /Script/MeshModelingToolsExp.BakeMultiTexture2DProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeMultiTexture2DProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> MaterialIDSourceTextures; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    FString UVLayer; // 0x0078 (Size: 0x10, Type: StrProperty)
    TArray<void*> UVLayerNamesList; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllSourceTextures; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBakeMultiTexture2DProperties, MaterialIDSourceTextures) == 104, "Offset mismatch for UBakeMultiTexture2DProperties::MaterialIDSourceTextures");
static_assert(offsetof(UBakeMultiTexture2DProperties, UVLayer) == 120, "Offset mismatch for UBakeMultiTexture2DProperties::UVLayer");
static_assert(offsetof(UBakeMultiTexture2DProperties, UVLayerNamesList) == 136, "Offset mismatch for UBakeMultiTexture2DProperties::UVLayerNamesList");
static_assert(offsetof(UBakeMultiTexture2DProperties, AllSourceTextures) == 152, "Offset mismatch for UBakeMultiTexture2DProperties::AllSourceTextures");

// /Script/MeshModelingToolsExp.BakeNormalMapToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeNormalMapToolProperties
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBakeNormalMapToolProperties, CachedPropertiesMap) == 56, "Offset mismatch for UBakeNormalMapToolProperties::CachedPropertiesMap");
static_assert(offsetof(UBakeNormalMapToolProperties, bIsPropertySetEnabled) == 72, "Offset mismatch for UBakeNormalMapToolProperties::bIsPropertySetEnabled");

// /Script/MeshModelingToolsExp.BakeOcclusionMapToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeOcclusionMapToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t OcclusionRays; // 0x0068 (Size: 0x4, Type: IntProperty)
    float MaxDistance; // 0x006C (Size: 0x4, Type: FloatProperty)
    float SpreadAngle; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float BiasAngle; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NormalSpace; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UBakeOcclusionMapToolProperties, OcclusionRays) == 104, "Offset mismatch for UBakeOcclusionMapToolProperties::OcclusionRays");
static_assert(offsetof(UBakeOcclusionMapToolProperties, MaxDistance) == 108, "Offset mismatch for UBakeOcclusionMapToolProperties::MaxDistance");
static_assert(offsetof(UBakeOcclusionMapToolProperties, SpreadAngle) == 112, "Offset mismatch for UBakeOcclusionMapToolProperties::SpreadAngle");
static_assert(offsetof(UBakeOcclusionMapToolProperties, BiasAngle) == 116, "Offset mismatch for UBakeOcclusionMapToolProperties::BiasAngle");
static_assert(offsetof(UBakeOcclusionMapToolProperties, NormalSpace) == 120, "Offset mismatch for UBakeOcclusionMapToolProperties::NormalSpace");

// /Script/MeshModelingToolsExp.BakeTexture2DProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeTexture2DProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* SourceTexture; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    FString UVLayer; // 0x0070 (Size: 0x10, Type: StrProperty)
    TArray<void*> UVLayerNamesList; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBakeTexture2DProperties, SourceTexture) == 104, "Offset mismatch for UBakeTexture2DProperties::SourceTexture");
static_assert(offsetof(UBakeTexture2DProperties, UVLayer) == 112, "Offset mismatch for UBakeTexture2DProperties::UVLayer");
static_assert(offsetof(UBakeTexture2DProperties, UVLayerNamesList) == 128, "Offset mismatch for UBakeTexture2DProperties::UVLayerNamesList");

// /Script/MeshModelingToolsExp.BakeTransformTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UBakeTransformTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* BasicProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBakeTransformTool, BasicProperties) == 216, "Offset mismatch for UBakeTransformTool::BasicProperties");

// /Script/MeshModelingToolsExp.BakeTransformToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UBakeTransformToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.BakeTransformToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeTransformToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bApplyToAllLODs; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBakeRotation; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BakeScale; // 0x006A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRecenterPivot; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowNoScale; // 0x006C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBakeTransformToolProperties, bApplyToAllLODs) == 104, "Offset mismatch for UBakeTransformToolProperties::bApplyToAllLODs");
static_assert(offsetof(UBakeTransformToolProperties, bBakeRotation) == 105, "Offset mismatch for UBakeTransformToolProperties::bBakeRotation");
static_assert(offsetof(UBakeTransformToolProperties, BakeScale) == 106, "Offset mismatch for UBakeTransformToolProperties::BakeScale");
static_assert(offsetof(UBakeTransformToolProperties, bRecenterPivot) == 107, "Offset mismatch for UBakeTransformToolProperties::bRecenterPivot");
static_assert(offsetof(UBakeTransformToolProperties, bAllowNoScale) == 108, "Offset mismatch for UBakeTransformToolProperties::bAllowNoScale");

// /Script/MeshModelingToolsExp.BakeUVShellMapToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeUVShellMapToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t UVLayer; // 0x0068 (Size: 0x4, Type: IntProperty)
    float WireframeThickness; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WireframeColor[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShellColor[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundColor[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBakeUVShellMapToolProperties, UVLayer) == 104, "Offset mismatch for UBakeUVShellMapToolProperties::UVLayer");
static_assert(offsetof(UBakeUVShellMapToolProperties, WireframeThickness) == 108, "Offset mismatch for UBakeUVShellMapToolProperties::WireframeThickness");
static_assert(offsetof(UBakeUVShellMapToolProperties, WireframeColor) == 112, "Offset mismatch for UBakeUVShellMapToolProperties::WireframeColor");
static_assert(offsetof(UBakeUVShellMapToolProperties, ShellColor) == 128, "Offset mismatch for UBakeUVShellMapToolProperties::ShellColor");
static_assert(offsetof(UBakeUVShellMapToolProperties, BackgroundColor) == 144, "Offset mismatch for UBakeUVShellMapToolProperties::BackgroundColor");

// /Script/MeshModelingToolsExp.BakeVisualizationProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBakeVisualizationProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bPreviewAsMaterial; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float Brightness; // 0x006C (Size: 0x4, Type: FloatProperty)
    float AOMultiplier; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBakeVisualizationProperties, bPreviewAsMaterial) == 104, "Offset mismatch for UBakeVisualizationProperties::bPreviewAsMaterial");
static_assert(offsetof(UBakeVisualizationProperties, Brightness) == 108, "Offset mismatch for UBakeVisualizationProperties::Brightness");
static_assert(offsetof(UBakeVisualizationProperties, AOMultiplier) == 112, "Offset mismatch for UBakeVisualizationProperties::AOMultiplier");

// /Script/MeshModelingToolsExp.BaseMeshFromSplinesTool
// Kind: Class; super: InteractiveTool
class UBaseMeshFromSplinesTool
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* OutputTypeProperties; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> TargetWorld; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ActorsWithSplines; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBaseMeshFromSplinesTool, OutputTypeProperties) == 192, "Offset mismatch for UBaseMeshFromSplinesTool::OutputTypeProperties");
static_assert(offsetof(UBaseMeshFromSplinesTool, MaterialProperties) == 200, "Offset mismatch for UBaseMeshFromSplinesTool::MaterialProperties");
static_assert(offsetof(UBaseMeshFromSplinesTool, Preview) == 208, "Offset mismatch for UBaseMeshFromSplinesTool::Preview");
static_assert(offsetof(UBaseMeshFromSplinesTool, TargetWorld) == 216, "Offset mismatch for UBaseMeshFromSplinesTool::TargetWorld");
static_assert(offsetof(UBaseMeshFromSplinesTool, ActorsWithSplines) == 224, "Offset mismatch for UBaseMeshFromSplinesTool::ActorsWithSplines");

// /Script/MeshModelingToolsExp.BaseMeshFromSplinesToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class UBaseMeshFromSplinesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.CollisionGeometryVisualizationProperties
// Kind: Class; super: InteractiveToolPropertySet
class UCollisionGeometryVisualizationProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bShowCollision; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSolid; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    float LineThickness; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowHidden; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRandomColors; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0072
    std::uint8_t Color[0x4]; // 0x0074 (Size: 0x4, Type: StructProperty)
    void* LineMaterial; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* LineMaterialShowingHidden; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* TriangleMaterial; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableShowCollision; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableShowSolid; // 0x0091 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCollisionGeometryVisualizationProperties, bShowCollision) == 104, "Offset mismatch for UCollisionGeometryVisualizationProperties::bShowCollision");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, bShowSolid) == 105, "Offset mismatch for UCollisionGeometryVisualizationProperties::bShowSolid");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, LineThickness) == 108, "Offset mismatch for UCollisionGeometryVisualizationProperties::LineThickness");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, bShowHidden) == 112, "Offset mismatch for UCollisionGeometryVisualizationProperties::bShowHidden");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, bRandomColors) == 113, "Offset mismatch for UCollisionGeometryVisualizationProperties::bRandomColors");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, Color) == 116, "Offset mismatch for UCollisionGeometryVisualizationProperties::Color");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, LineMaterial) == 120, "Offset mismatch for UCollisionGeometryVisualizationProperties::LineMaterial");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, LineMaterialShowingHidden) == 128, "Offset mismatch for UCollisionGeometryVisualizationProperties::LineMaterialShowingHidden");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, TriangleMaterial) == 136, "Offset mismatch for UCollisionGeometryVisualizationProperties::TriangleMaterial");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, bEnableShowCollision) == 144, "Offset mismatch for UCollisionGeometryVisualizationProperties::bEnableShowCollision");
static_assert(offsetof(UCollisionGeometryVisualizationProperties, bEnableShowSolid) == 145, "Offset mismatch for UCollisionGeometryVisualizationProperties::bEnableShowSolid");

// /Script/MeshModelingToolsExp.ConvertMeshesTool
// Kind: Class; super: InteractiveTool
class UConvertMeshesTool
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    void* BasicProperties; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* OutputTypeProperties; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Inputs; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UConvertMeshesTool, BasicProperties) == 184, "Offset mismatch for UConvertMeshesTool::BasicProperties");
static_assert(offsetof(UConvertMeshesTool, OutputTypeProperties) == 192, "Offset mismatch for UConvertMeshesTool::OutputTypeProperties");
static_assert(offsetof(UConvertMeshesTool, Inputs) == 200, "Offset mismatch for UConvertMeshesTool::Inputs");

// /Script/MeshModelingToolsExp.ConvertMeshesToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class UConvertMeshesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.ConvertMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UConvertMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bTransferMaterials; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowTransferMaterials; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferCollision; // 0x006A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UConvertMeshesToolProperties, bTransferMaterials) == 104, "Offset mismatch for UConvertMeshesToolProperties::bTransferMaterials");
static_assert(offsetof(UConvertMeshesToolProperties, bShowTransferMaterials) == 105, "Offset mismatch for UConvertMeshesToolProperties::bShowTransferMaterials");
static_assert(offsetof(UConvertMeshesToolProperties, bTransferCollision) == 106, "Offset mismatch for UConvertMeshesToolProperties::bTransferCollision");

// /Script/MeshModelingToolsExp.CubeGridTool
// Kind: Class; super: InteractiveTool
class UCubeGridTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* GridGizmo; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* GridGizmoAlignmentMechanic; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* GridGizmoTransformProxy; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* LineSets; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* ClickDragBehavior; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* HoverBehavior; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* CtrlMiddleClickBehavior; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* MiddleClickDragBehavior; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* ToolActions; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* OutputTypeProperties; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x180]; // 0x0140
    void* Preview; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCubeGridTool, GridGizmo) == 216, "Offset mismatch for UCubeGridTool::GridGizmo");
static_assert(offsetof(UCubeGridTool, GridGizmoAlignmentMechanic) == 224, "Offset mismatch for UCubeGridTool::GridGizmoAlignmentMechanic");
static_assert(offsetof(UCubeGridTool, GridGizmoTransformProxy) == 232, "Offset mismatch for UCubeGridTool::GridGizmoTransformProxy");
static_assert(offsetof(UCubeGridTool, LineSets) == 240, "Offset mismatch for UCubeGridTool::LineSets");
static_assert(offsetof(UCubeGridTool, ClickDragBehavior) == 248, "Offset mismatch for UCubeGridTool::ClickDragBehavior");
static_assert(offsetof(UCubeGridTool, HoverBehavior) == 256, "Offset mismatch for UCubeGridTool::HoverBehavior");
static_assert(offsetof(UCubeGridTool, CtrlMiddleClickBehavior) == 264, "Offset mismatch for UCubeGridTool::CtrlMiddleClickBehavior");
static_assert(offsetof(UCubeGridTool, MiddleClickDragBehavior) == 272, "Offset mismatch for UCubeGridTool::MiddleClickDragBehavior");
static_assert(offsetof(UCubeGridTool, Settings) == 280, "Offset mismatch for UCubeGridTool::Settings");
static_assert(offsetof(UCubeGridTool, ToolActions) == 288, "Offset mismatch for UCubeGridTool::ToolActions");
static_assert(offsetof(UCubeGridTool, MaterialProperties) == 296, "Offset mismatch for UCubeGridTool::MaterialProperties");
static_assert(offsetof(UCubeGridTool, OutputTypeProperties) == 304, "Offset mismatch for UCubeGridTool::OutputTypeProperties");
static_assert(offsetof(UCubeGridTool, Target) == 312, "Offset mismatch for UCubeGridTool::Target");
static_assert(offsetof(UCubeGridTool, Preview) == 704, "Offset mismatch for UCubeGridTool::Preview");

// /Script/MeshModelingToolsExp.CubeGridToolActions
// Kind: Class; super: InteractiveToolPropertySet
class UCubeGridToolActions
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* GridSourceActor; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCubeGridToolActions, GridSourceActor) == 112, "Offset mismatch for UCubeGridToolActions::GridSourceActor");

// /Script/MeshModelingToolsExp.CubeGridToolBuilder
// Kind: Class; super: InteractiveToolWithToolTargetsBuilder
class UCubeGridToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.CubeGridToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UCubeGridToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t GridFrameOrigin[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t GridFrameOrientation[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShowGrid; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGizmo; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xE]; // 0x009A
    std::uint8_t GridPower; // 0x00A8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00A9
    double CurrentBlockSize; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    std::int32_t BlocksPerStep; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPowerOfTwoBlockSizes; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00BD
    double BlockBaseSize; // 0x00C0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCrosswiseDiagonal; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepSideGroups; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSelectionMeasurements; // 0x00CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x5]; // 0x00CB
    double PlaneTolerance; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bHitUnrelatedGeometry; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitGridGroundPlaneIfCloser; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x00DA
    std::uint8_t FaceSelectionMode; // 0x00DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x00DD
    FString ToggleCornerMode; // 0x00E0 (Size: 0x10, Type: StrProperty)
    FString PushPull; // 0x00F0 (Size: 0x10, Type: StrProperty)
    FString ResizeGrid; // 0x0100 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0007[0x10]; // 0x0110
    FString FlipSelection; // 0x0120 (Size: 0x10, Type: StrProperty)
    FString GridGizmo; // 0x0130 (Size: 0x10, Type: StrProperty)
    FString QuickShiftGizmo; // 0x0140 (Size: 0x10, Type: StrProperty)
    FString AlignGizmo; // 0x0150 (Size: 0x10, Type: StrProperty)
    std::uint8_t bInCornerMode; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowedToEditGrid; // 0x0161 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCubeGridToolProperties, GridFrameOrigin) == 104, "Offset mismatch for UCubeGridToolProperties::GridFrameOrigin");
static_assert(offsetof(UCubeGridToolProperties, GridFrameOrientation) == 128, "Offset mismatch for UCubeGridToolProperties::GridFrameOrientation");
static_assert(offsetof(UCubeGridToolProperties, bShowGrid) == 152, "Offset mismatch for UCubeGridToolProperties::bShowGrid");
static_assert(offsetof(UCubeGridToolProperties, bShowGizmo) == 153, "Offset mismatch for UCubeGridToolProperties::bShowGizmo");
static_assert(offsetof(UCubeGridToolProperties, GridPower) == 168, "Offset mismatch for UCubeGridToolProperties::GridPower");
static_assert(offsetof(UCubeGridToolProperties, CurrentBlockSize) == 176, "Offset mismatch for UCubeGridToolProperties::CurrentBlockSize");
static_assert(offsetof(UCubeGridToolProperties, BlocksPerStep) == 184, "Offset mismatch for UCubeGridToolProperties::BlocksPerStep");
static_assert(offsetof(UCubeGridToolProperties, bPowerOfTwoBlockSizes) == 188, "Offset mismatch for UCubeGridToolProperties::bPowerOfTwoBlockSizes");
static_assert(offsetof(UCubeGridToolProperties, BlockBaseSize) == 192, "Offset mismatch for UCubeGridToolProperties::BlockBaseSize");
static_assert(offsetof(UCubeGridToolProperties, bCrosswiseDiagonal) == 200, "Offset mismatch for UCubeGridToolProperties::bCrosswiseDiagonal");
static_assert(offsetof(UCubeGridToolProperties, bKeepSideGroups) == 201, "Offset mismatch for UCubeGridToolProperties::bKeepSideGroups");
static_assert(offsetof(UCubeGridToolProperties, bShowSelectionMeasurements) == 202, "Offset mismatch for UCubeGridToolProperties::bShowSelectionMeasurements");
static_assert(offsetof(UCubeGridToolProperties, PlaneTolerance) == 208, "Offset mismatch for UCubeGridToolProperties::PlaneTolerance");
static_assert(offsetof(UCubeGridToolProperties, bHitUnrelatedGeometry) == 216, "Offset mismatch for UCubeGridToolProperties::bHitUnrelatedGeometry");
static_assert(offsetof(UCubeGridToolProperties, bHitGridGroundPlaneIfCloser) == 217, "Offset mismatch for UCubeGridToolProperties::bHitGridGroundPlaneIfCloser");
static_assert(offsetof(UCubeGridToolProperties, FaceSelectionMode) == 220, "Offset mismatch for UCubeGridToolProperties::FaceSelectionMode");
static_assert(offsetof(UCubeGridToolProperties, ToggleCornerMode) == 224, "Offset mismatch for UCubeGridToolProperties::ToggleCornerMode");
static_assert(offsetof(UCubeGridToolProperties, PushPull) == 240, "Offset mismatch for UCubeGridToolProperties::PushPull");
static_assert(offsetof(UCubeGridToolProperties, ResizeGrid) == 256, "Offset mismatch for UCubeGridToolProperties::ResizeGrid");
static_assert(offsetof(UCubeGridToolProperties, FlipSelection) == 288, "Offset mismatch for UCubeGridToolProperties::FlipSelection");
static_assert(offsetof(UCubeGridToolProperties, GridGizmo) == 304, "Offset mismatch for UCubeGridToolProperties::GridGizmo");
static_assert(offsetof(UCubeGridToolProperties, QuickShiftGizmo) == 320, "Offset mismatch for UCubeGridToolProperties::QuickShiftGizmo");
static_assert(offsetof(UCubeGridToolProperties, AlignGizmo) == 336, "Offset mismatch for UCubeGridToolProperties::AlignGizmo");
static_assert(offsetof(UCubeGridToolProperties, bInCornerMode) == 352, "Offset mismatch for UCubeGridToolProperties::bInCornerMode");
static_assert(offsetof(UCubeGridToolProperties, bAllowedToEditGrid) == 353, "Offset mismatch for UCubeGridToolProperties::bAllowedToEditGrid");

// /Script/MeshModelingToolsExp.DrawPolyPathExtrudeProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDrawPolyPathExtrudeProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Direction; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDrawPolyPathExtrudeProperties, Direction) == 104, "Offset mismatch for UDrawPolyPathExtrudeProperties::Direction");

// /Script/MeshModelingToolsExp.DrawPolyPathProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDrawPolyPathProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t WidthMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float Width; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRoundedCorners; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0071
    std::uint8_t RadiusMode; // 0x0074 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0075
    float CornerRadius; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::int32_t RadialSlices; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t bSinglePolyGroup; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0081
    std::uint8_t ExtrudeMode; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0085
    float ExtrudeHeight; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float RampStartRatio; // 0x008C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDrawPolyPathProperties, WidthMode) == 104, "Offset mismatch for UDrawPolyPathProperties::WidthMode");
static_assert(offsetof(UDrawPolyPathProperties, Width) == 108, "Offset mismatch for UDrawPolyPathProperties::Width");
static_assert(offsetof(UDrawPolyPathProperties, bRoundedCorners) == 112, "Offset mismatch for UDrawPolyPathProperties::bRoundedCorners");
static_assert(offsetof(UDrawPolyPathProperties, RadiusMode) == 116, "Offset mismatch for UDrawPolyPathProperties::RadiusMode");
static_assert(offsetof(UDrawPolyPathProperties, CornerRadius) == 120, "Offset mismatch for UDrawPolyPathProperties::CornerRadius");
static_assert(offsetof(UDrawPolyPathProperties, RadialSlices) == 124, "Offset mismatch for UDrawPolyPathProperties::RadialSlices");
static_assert(offsetof(UDrawPolyPathProperties, bSinglePolyGroup) == 128, "Offset mismatch for UDrawPolyPathProperties::bSinglePolyGroup");
static_assert(offsetof(UDrawPolyPathProperties, ExtrudeMode) == 132, "Offset mismatch for UDrawPolyPathProperties::ExtrudeMode");
static_assert(offsetof(UDrawPolyPathProperties, ExtrudeHeight) == 136, "Offset mismatch for UDrawPolyPathProperties::ExtrudeHeight");
static_assert(offsetof(UDrawPolyPathProperties, RampStartRatio) == 140, "Offset mismatch for UDrawPolyPathProperties::RampStartRatio");

// /Script/MeshModelingToolsExp.DrawPolyPathTool
// Kind: Class; super: InteractiveTool
class UDrawPolyPathTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* TransformProps; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* ExtrudeProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xD0]; // 0x00F0
    void* PlaneMechanic; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0xC0]; // 0x01C8
    void* EditPreview; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* ExtrudeHeightMechanic; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* CurveDistMechanic; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* SurfacePathMechanic; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDrawPolyPathTool, OutputTypeProperties) == 208, "Offset mismatch for UDrawPolyPathTool::OutputTypeProperties");
static_assert(offsetof(UDrawPolyPathTool, TransformProps) == 216, "Offset mismatch for UDrawPolyPathTool::TransformProps");
static_assert(offsetof(UDrawPolyPathTool, ExtrudeProperties) == 224, "Offset mismatch for UDrawPolyPathTool::ExtrudeProperties");
static_assert(offsetof(UDrawPolyPathTool, MaterialProperties) == 232, "Offset mismatch for UDrawPolyPathTool::MaterialProperties");
static_assert(offsetof(UDrawPolyPathTool, PlaneMechanic) == 448, "Offset mismatch for UDrawPolyPathTool::PlaneMechanic");
static_assert(offsetof(UDrawPolyPathTool, EditPreview) == 648, "Offset mismatch for UDrawPolyPathTool::EditPreview");
static_assert(offsetof(UDrawPolyPathTool, ExtrudeHeightMechanic) == 656, "Offset mismatch for UDrawPolyPathTool::ExtrudeHeightMechanic");
static_assert(offsetof(UDrawPolyPathTool, CurveDistMechanic) == 664, "Offset mismatch for UDrawPolyPathTool::CurveDistMechanic");
static_assert(offsetof(UDrawPolyPathTool, SurfacePathMechanic) == 672, "Offset mismatch for UDrawPolyPathTool::SurfacePathMechanic");

// /Script/MeshModelingToolsExp.DrawPolyPathToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class UDrawPolyPathToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.EditNormalsOperatorFactory
// Kind: Class; super: Object
class UEditNormalsOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Tool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEditNormalsOperatorFactory, Tool) == 48, "Offset mismatch for UEditNormalsOperatorFactory::Tool");

// /Script/MeshModelingToolsExp.EditNormalsTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UEditNormalsTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* BasicProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* PolygroupLayerProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Previews; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x88]; // 0x00F8
    void* GeometrySelectionVizProperties; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    void* GeometrySelectionViz; // 0x0188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEditNormalsTool, BasicProperties) == 216, "Offset mismatch for UEditNormalsTool::BasicProperties");
static_assert(offsetof(UEditNormalsTool, PolygroupLayerProperties) == 224, "Offset mismatch for UEditNormalsTool::PolygroupLayerProperties");
static_assert(offsetof(UEditNormalsTool, Previews) == 232, "Offset mismatch for UEditNormalsTool::Previews");
static_assert(offsetof(UEditNormalsTool, GeometrySelectionVizProperties) == 384, "Offset mismatch for UEditNormalsTool::GeometrySelectionVizProperties");
static_assert(offsetof(UEditNormalsTool, GeometrySelectionViz) == 392, "Offset mismatch for UEditNormalsTool::GeometrySelectionViz");

// /Script/MeshModelingToolsExp.EditNormalsToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UEditNormalsToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.EditNormalsToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UEditNormalsToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bRecomputeNormals; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NormalCalculationMethod; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFixInconsistentNormals; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvertNormals; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t SplitNormalMethod; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    float SharpEdgeAngleThreshold; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowSharpVertices; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bToolHasSelection; // 0x0075 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEditNormalsToolProperties, bRecomputeNormals) == 104, "Offset mismatch for UEditNormalsToolProperties::bRecomputeNormals");
static_assert(offsetof(UEditNormalsToolProperties, NormalCalculationMethod) == 105, "Offset mismatch for UEditNormalsToolProperties::NormalCalculationMethod");
static_assert(offsetof(UEditNormalsToolProperties, bFixInconsistentNormals) == 106, "Offset mismatch for UEditNormalsToolProperties::bFixInconsistentNormals");
static_assert(offsetof(UEditNormalsToolProperties, bInvertNormals) == 107, "Offset mismatch for UEditNormalsToolProperties::bInvertNormals");
static_assert(offsetof(UEditNormalsToolProperties, SplitNormalMethod) == 108, "Offset mismatch for UEditNormalsToolProperties::SplitNormalMethod");
static_assert(offsetof(UEditNormalsToolProperties, SharpEdgeAngleThreshold) == 112, "Offset mismatch for UEditNormalsToolProperties::SharpEdgeAngleThreshold");
static_assert(offsetof(UEditNormalsToolProperties, bAllowSharpVertices) == 116, "Offset mismatch for UEditNormalsToolProperties::bAllowSharpVertices");
static_assert(offsetof(UEditNormalsToolProperties, bToolHasSelection) == 117, "Offset mismatch for UEditNormalsToolProperties::bToolHasSelection");

// /Script/MeshModelingToolsExp.EditPivotTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UEditPivotTool
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TransformProps; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* EditPivotActions; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x140]; // 0x00F0
    TArray<void*> ActiveGizmos; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    void* DragAlignmentMechanic; // 0x0240 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEditPivotTool, TransformProps) == 224, "Offset mismatch for UEditPivotTool::TransformProps");
static_assert(offsetof(UEditPivotTool, EditPivotActions) == 232, "Offset mismatch for UEditPivotTool::EditPivotActions");
static_assert(offsetof(UEditPivotTool, ActiveGizmos) == 560, "Offset mismatch for UEditPivotTool::ActiveGizmos");
static_assert(offsetof(UEditPivotTool, DragAlignmentMechanic) == 576, "Offset mismatch for UEditPivotTool::DragAlignmentMechanic");

// /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class UEditPivotToolActionPropertySet
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bUseWorldBox; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEditPivotToolActionPropertySet, bUseWorldBox) == 112, "Offset mismatch for UEditPivotToolActionPropertySet::bUseWorldBox");

// /Script/MeshModelingToolsExp.EditPivotToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UEditPivotToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.EditPivotToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UEditPivotToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bApplyToAllLODs; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapDragPosition; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapDragRotation; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t RotationMode; // 0x006B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UEditPivotToolProperties, bApplyToAllLODs) == 104, "Offset mismatch for UEditPivotToolProperties::bApplyToAllLODs");
static_assert(offsetof(UEditPivotToolProperties, bSnapDragPosition) == 105, "Offset mismatch for UEditPivotToolProperties::bSnapDragPosition");
static_assert(offsetof(UEditPivotToolProperties, bSnapDragRotation) == 106, "Offset mismatch for UEditPivotToolProperties::bSnapDragRotation");
static_assert(offsetof(UEditPivotToolProperties, RotationMode) == 107, "Offset mismatch for UEditPivotToolProperties::RotationMode");

// /Script/MeshModelingToolsExp.EditUVIslandsTool
// Kind: Class; super: MeshSurfacePointTool
class UEditUVIslandsTool
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* MaterialSettings; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* CheckerMaterial; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMeshActor; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* DynamicMeshComponent; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* SelectionMechanic; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0148
    void* TransformGizmo; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    void* TransformProxy; // 0x0158 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEditUVIslandsTool, MaterialSettings) == 288, "Offset mismatch for UEditUVIslandsTool::MaterialSettings");
static_assert(offsetof(UEditUVIslandsTool, CheckerMaterial) == 296, "Offset mismatch for UEditUVIslandsTool::CheckerMaterial");
static_assert(offsetof(UEditUVIslandsTool, PreviewMeshActor) == 304, "Offset mismatch for UEditUVIslandsTool::PreviewMeshActor");
static_assert(offsetof(UEditUVIslandsTool, DynamicMeshComponent) == 312, "Offset mismatch for UEditUVIslandsTool::DynamicMeshComponent");
static_assert(offsetof(UEditUVIslandsTool, SelectionMechanic) == 320, "Offset mismatch for UEditUVIslandsTool::SelectionMechanic");
static_assert(offsetof(UEditUVIslandsTool, TransformGizmo) == 336, "Offset mismatch for UEditUVIslandsTool::TransformGizmo");
static_assert(offsetof(UEditUVIslandsTool, TransformProxy) == 344, "Offset mismatch for UEditUVIslandsTool::TransformProxy");

// /Script/MeshModelingToolsExp.EditUVIslandsToolBuilder
// Kind: Class; super: MeshSurfacePointMeshEditingToolBuilder
class UEditUVIslandsToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.ExtractCollisionGeometryTool
// Kind: Class; super: SingleSelectionMeshEditingTool
class UExtractCollisionGeometryTool
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* OutputTypeProperties; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* VizSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* ObjectProps; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewElements; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractCollisionGeometryTool, OutputTypeProperties) == 200, "Offset mismatch for UExtractCollisionGeometryTool::OutputTypeProperties");
static_assert(offsetof(UExtractCollisionGeometryTool, Settings) == 208, "Offset mismatch for UExtractCollisionGeometryTool::Settings");
static_assert(offsetof(UExtractCollisionGeometryTool, VizSettings) == 216, "Offset mismatch for UExtractCollisionGeometryTool::VizSettings");
static_assert(offsetof(UExtractCollisionGeometryTool, ObjectProps) == 224, "Offset mismatch for UExtractCollisionGeometryTool::ObjectProps");
static_assert(offsetof(UExtractCollisionGeometryTool, PreviewElements) == 232, "Offset mismatch for UExtractCollisionGeometryTool::PreviewElements");
static_assert(offsetof(UExtractCollisionGeometryTool, PreviewMesh) == 240, "Offset mismatch for UExtractCollisionGeometryTool::PreviewMesh");

// /Script/MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder
// Kind: Class; super: SingleSelectionMeshEditingToolBuilder
class UExtractCollisionGeometryToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.ExtractCollisionToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UExtractCollisionToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CollisionType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOutputSeparateMeshes; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowPreview; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInputMesh; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWeldEdges; // 0x006C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UExtractCollisionToolProperties, CollisionType) == 104, "Offset mismatch for UExtractCollisionToolProperties::CollisionType");
static_assert(offsetof(UExtractCollisionToolProperties, bOutputSeparateMeshes) == 105, "Offset mismatch for UExtractCollisionToolProperties::bOutputSeparateMeshes");
static_assert(offsetof(UExtractCollisionToolProperties, bShowPreview) == 106, "Offset mismatch for UExtractCollisionToolProperties::bShowPreview");
static_assert(offsetof(UExtractCollisionToolProperties, bShowInputMesh) == 107, "Offset mismatch for UExtractCollisionToolProperties::bShowInputMesh");
static_assert(offsetof(UExtractCollisionToolProperties, bWeldEdges) == 108, "Offset mismatch for UExtractCollisionToolProperties::bWeldEdges");

// /Script/MeshModelingToolsExp.ExtractSplineTool
// Kind: Class; super: SingleSelectionMeshEditingTool
class UExtractSplineTool
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* Settings; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* PlaneMechanic; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* SelectionMechanic; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00E0
    void* Preview; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0100
    void* Factory; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x38]; // 0x0118
    void* CutlineGeometry; // 0x0150 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractSplineTool, Settings) == 200, "Offset mismatch for UExtractSplineTool::Settings");
static_assert(offsetof(UExtractSplineTool, PlaneMechanic) == 208, "Offset mismatch for UExtractSplineTool::PlaneMechanic");
static_assert(offsetof(UExtractSplineTool, SelectionMechanic) == 216, "Offset mismatch for UExtractSplineTool::SelectionMechanic");
static_assert(offsetof(UExtractSplineTool, Preview) == 248, "Offset mismatch for UExtractSplineTool::Preview");
static_assert(offsetof(UExtractSplineTool, Factory) == 272, "Offset mismatch for UExtractSplineTool::Factory");
static_assert(offsetof(UExtractSplineTool, CutlineGeometry) == 336, "Offset mismatch for UExtractSplineTool::CutlineGeometry");

// /Script/MeshModelingToolsExp.ExtractSplineToolBuilder
// Kind: Class; super: SingleSelectionMeshEditingToolBuilder
class UExtractSplineToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.ExtractSplineToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UExtractSplineToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ExtractionMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UExtractSplineToolProperties, ExtractionMode) == 104, "Offset mismatch for UExtractSplineToolProperties::ExtractionMode");

// /Script/MeshModelingToolsExp.ExtrudeMeshSelectionTool
// Kind: Class; super: SingleTargetWithSelectionTool
class UExtrudeMeshSelectionTool
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    void* ExtrudeProperties; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x680]; // 0x0110
    void* SourcePreview; // 0x0790 (Size: 0x8, Type: ObjectProperty)
    void* EditCompute; // 0x0798 (Size: 0x8, Type: ObjectProperty)
    void* TransformGizmo; // 0x07A0 (Size: 0x8, Type: ObjectProperty)
    void* TransformProxy; // 0x07A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtrudeMeshSelectionTool, ExtrudeProperties) == 264, "Offset mismatch for UExtrudeMeshSelectionTool::ExtrudeProperties");
static_assert(offsetof(UExtrudeMeshSelectionTool, SourcePreview) == 1936, "Offset mismatch for UExtrudeMeshSelectionTool::SourcePreview");
static_assert(offsetof(UExtrudeMeshSelectionTool, EditCompute) == 1944, "Offset mismatch for UExtrudeMeshSelectionTool::EditCompute");
static_assert(offsetof(UExtrudeMeshSelectionTool, TransformGizmo) == 1952, "Offset mismatch for UExtrudeMeshSelectionTool::TransformGizmo");
static_assert(offsetof(UExtrudeMeshSelectionTool, TransformProxy) == 1960, "Offset mismatch for UExtrudeMeshSelectionTool::TransformProxy");

// /Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder
// Kind: Class; super: SingleTargetWithSelectionToolBuilder
class UExtrudeMeshSelectionToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UExtrudeMeshSelectionToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t InputMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    double ExtrudeDistance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t RegionMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    std::int32_t NumSubdivisions; // 0x007C (Size: 0x4, Type: IntProperty)
    double CreaseAngle; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    double RaycastMaxDistance; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bShellsToSolids; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInferGroupsFromNbrs; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGroupPerSubdivision; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplaceSelectionGroups; // 0x0093 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0094
    double UVScale; // 0x0098 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUVIslandPerGroup; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInferMaterialID; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x00A2
    std::int32_t SetMaterialID; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowInputMaterials; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UExtrudeMeshSelectionToolProperties, InputMode) == 104, "Offset mismatch for UExtrudeMeshSelectionToolProperties::InputMode");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, ExtrudeDistance) == 112, "Offset mismatch for UExtrudeMeshSelectionToolProperties::ExtrudeDistance");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, RegionMode) == 120, "Offset mismatch for UExtrudeMeshSelectionToolProperties::RegionMode");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, NumSubdivisions) == 124, "Offset mismatch for UExtrudeMeshSelectionToolProperties::NumSubdivisions");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, CreaseAngle) == 128, "Offset mismatch for UExtrudeMeshSelectionToolProperties::CreaseAngle");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, RaycastMaxDistance) == 136, "Offset mismatch for UExtrudeMeshSelectionToolProperties::RaycastMaxDistance");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, bShellsToSolids) == 144, "Offset mismatch for UExtrudeMeshSelectionToolProperties::bShellsToSolids");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, bInferGroupsFromNbrs) == 145, "Offset mismatch for UExtrudeMeshSelectionToolProperties::bInferGroupsFromNbrs");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, bGroupPerSubdivision) == 146, "Offset mismatch for UExtrudeMeshSelectionToolProperties::bGroupPerSubdivision");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, bReplaceSelectionGroups) == 147, "Offset mismatch for UExtrudeMeshSelectionToolProperties::bReplaceSelectionGroups");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, UVScale) == 152, "Offset mismatch for UExtrudeMeshSelectionToolProperties::UVScale");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, bUVIslandPerGroup) == 160, "Offset mismatch for UExtrudeMeshSelectionToolProperties::bUVIslandPerGroup");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, bInferMaterialID) == 161, "Offset mismatch for UExtrudeMeshSelectionToolProperties::bInferMaterialID");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, SetMaterialID) == 164, "Offset mismatch for UExtrudeMeshSelectionToolProperties::SetMaterialID");
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, bShowInputMaterials) == 168, "Offset mismatch for UExtrudeMeshSelectionToolProperties::bShowInputMaterials");

// /Script/MeshModelingToolsExp.MeshAnalysisProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshAnalysisProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString SurfaceArea; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString Volume; // 0x0078 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMeshAnalysisProperties, SurfaceArea) == 104, "Offset mismatch for UMeshAnalysisProperties::SurfaceArea");
static_assert(offsetof(UMeshAnalysisProperties, Volume) == 120, "Offset mismatch for UMeshAnalysisProperties::Volume");

// /Script/MeshModelingToolsExp.MeshBoundaryToolBase
// Kind: Class; super: SingleSelectionMeshEditingTool
class UMeshBoundaryToolBase
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* SelectionMechanic; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshBoundaryToolBase, SelectionMechanic) == 416, "Offset mismatch for UMeshBoundaryToolBase::SelectionMechanic");

// /Script/MeshModelingToolsExp.MeshInspectorMaterialProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshInspectorMaterialProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t MaterialMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float CheckerDensity; // 0x006C (Size: 0x4, Type: FloatProperty)
    void* OverrideMaterial; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    FString UVChannel; // 0x0078 (Size: 0x10, Type: StrProperty)
    TArray<void*> UVChannelNamesList; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bFlatShading; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    std::uint8_t Color[0x14]; // 0x009C (Size: 0x14, Type: StructProperty)
    double Opacity; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TransparentMaterialColor[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t bTwoSided; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00C9
    void* CheckerMaterial; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ActiveCustomMaterial; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshInspectorMaterialProperties, MaterialMode) == 104, "Offset mismatch for UMeshInspectorMaterialProperties::MaterialMode");
static_assert(offsetof(UMeshInspectorMaterialProperties, CheckerDensity) == 108, "Offset mismatch for UMeshInspectorMaterialProperties::CheckerDensity");
static_assert(offsetof(UMeshInspectorMaterialProperties, OverrideMaterial) == 112, "Offset mismatch for UMeshInspectorMaterialProperties::OverrideMaterial");
static_assert(offsetof(UMeshInspectorMaterialProperties, UVChannel) == 120, "Offset mismatch for UMeshInspectorMaterialProperties::UVChannel");
static_assert(offsetof(UMeshInspectorMaterialProperties, UVChannelNamesList) == 136, "Offset mismatch for UMeshInspectorMaterialProperties::UVChannelNamesList");
static_assert(offsetof(UMeshInspectorMaterialProperties, bFlatShading) == 152, "Offset mismatch for UMeshInspectorMaterialProperties::bFlatShading");
static_assert(offsetof(UMeshInspectorMaterialProperties, Color) == 156, "Offset mismatch for UMeshInspectorMaterialProperties::Color");
static_assert(offsetof(UMeshInspectorMaterialProperties, Opacity) == 176, "Offset mismatch for UMeshInspectorMaterialProperties::Opacity");
static_assert(offsetof(UMeshInspectorMaterialProperties, TransparentMaterialColor) == 184, "Offset mismatch for UMeshInspectorMaterialProperties::TransparentMaterialColor");
static_assert(offsetof(UMeshInspectorMaterialProperties, bTwoSided) == 200, "Offset mismatch for UMeshInspectorMaterialProperties::bTwoSided");
static_assert(offsetof(UMeshInspectorMaterialProperties, CheckerMaterial) == 208, "Offset mismatch for UMeshInspectorMaterialProperties::CheckerMaterial");
static_assert(offsetof(UMeshInspectorMaterialProperties, ActiveCustomMaterial) == 216, "Offset mismatch for UMeshInspectorMaterialProperties::ActiveCustomMaterial");

// /Script/MeshModelingToolsExp.MeshInspectorProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshInspectorProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bWireframe; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoundaryEdges; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBowtieVertices; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPolygonBorders; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUVSeams; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUVBowties; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMissingUVs; // 0x006E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalSeams; // 0x006F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTangentSeams; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalVectors; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTangentVectors; // 0x0072 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawHiddenEdgesAndSeams; // 0x0073 (Size: 0x1, Type: BoolProperty)
    float NormalLength; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float TangentLength; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ShowIndices; // 0x007C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMeshInspectorProperties, bWireframe) == 104, "Offset mismatch for UMeshInspectorProperties::bWireframe");
static_assert(offsetof(UMeshInspectorProperties, bBoundaryEdges) == 105, "Offset mismatch for UMeshInspectorProperties::bBoundaryEdges");
static_assert(offsetof(UMeshInspectorProperties, bBowtieVertices) == 106, "Offset mismatch for UMeshInspectorProperties::bBowtieVertices");
static_assert(offsetof(UMeshInspectorProperties, bPolygonBorders) == 107, "Offset mismatch for UMeshInspectorProperties::bPolygonBorders");
static_assert(offsetof(UMeshInspectorProperties, bUVSeams) == 108, "Offset mismatch for UMeshInspectorProperties::bUVSeams");
static_assert(offsetof(UMeshInspectorProperties, bUVBowties) == 109, "Offset mismatch for UMeshInspectorProperties::bUVBowties");
static_assert(offsetof(UMeshInspectorProperties, bMissingUVs) == 110, "Offset mismatch for UMeshInspectorProperties::bMissingUVs");
static_assert(offsetof(UMeshInspectorProperties, bNormalSeams) == 111, "Offset mismatch for UMeshInspectorProperties::bNormalSeams");
static_assert(offsetof(UMeshInspectorProperties, bTangentSeams) == 112, "Offset mismatch for UMeshInspectorProperties::bTangentSeams");
static_assert(offsetof(UMeshInspectorProperties, bNormalVectors) == 113, "Offset mismatch for UMeshInspectorProperties::bNormalVectors");
static_assert(offsetof(UMeshInspectorProperties, bTangentVectors) == 114, "Offset mismatch for UMeshInspectorProperties::bTangentVectors");
static_assert(offsetof(UMeshInspectorProperties, bDrawHiddenEdgesAndSeams) == 115, "Offset mismatch for UMeshInspectorProperties::bDrawHiddenEdgesAndSeams");
static_assert(offsetof(UMeshInspectorProperties, NormalLength) == 116, "Offset mismatch for UMeshInspectorProperties::NormalLength");
static_assert(offsetof(UMeshInspectorProperties, TangentLength) == 120, "Offset mismatch for UMeshInspectorProperties::TangentLength");
static_assert(offsetof(UMeshInspectorProperties, ShowIndices) == 124, "Offset mismatch for UMeshInspectorProperties::ShowIndices");

// /Script/MeshModelingToolsExp.MeshInspectorTool
// Kind: Class; super: SingleSelectionMeshEditingTool
class UMeshInspectorTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* Settings; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* PolygroupLayerProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialSettings; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E8
    void* PreviewMesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DrawnLineSet; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultMaterial; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshInspectorTool, Settings) == 208, "Offset mismatch for UMeshInspectorTool::Settings");
static_assert(offsetof(UMeshInspectorTool, PolygroupLayerProperties) == 216, "Offset mismatch for UMeshInspectorTool::PolygroupLayerProperties");
static_assert(offsetof(UMeshInspectorTool, MaterialSettings) == 224, "Offset mismatch for UMeshInspectorTool::MaterialSettings");
static_assert(offsetof(UMeshInspectorTool, PreviewMesh) == 240, "Offset mismatch for UMeshInspectorTool::PreviewMesh");
static_assert(offsetof(UMeshInspectorTool, DrawnLineSet) == 248, "Offset mismatch for UMeshInspectorTool::DrawnLineSet");
static_assert(offsetof(UMeshInspectorTool, DefaultMaterial) == 256, "Offset mismatch for UMeshInspectorTool::DefaultMaterial");

// /Script/MeshModelingToolsExp.MeshInspectorToolBuilder
// Kind: Class; super: SingleSelectionMeshEditingToolBuilder
class UMeshInspectorToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.MeshSelectionEditActions
// Kind: Class; super: MeshSelectionToolActionPropertySet
class UMeshSelectionEditActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshSelectionEditActions, CachedPropertiesMap) == 56, "Offset mismatch for UMeshSelectionEditActions::CachedPropertiesMap");
static_assert(offsetof(UMeshSelectionEditActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UMeshSelectionEditActions::bIsPropertySetEnabled");

// /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions
// Kind: Class; super: MeshSelectionToolActionPropertySet
class UMeshSelectionMeshEditActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshSelectionMeshEditActions, CachedPropertiesMap) == 56, "Offset mismatch for UMeshSelectionMeshEditActions::CachedPropertiesMap");
static_assert(offsetof(UMeshSelectionMeshEditActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UMeshSelectionMeshEditActions::bIsPropertySetEnabled");

// /Script/MeshModelingToolsExp.MeshSelectionTool
// Kind: Class; super: DynamicMeshBrushTool
class UMeshSelectionTool
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    void* SelectionProps; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* SelectionActions; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* EditActions; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* MeshStatisticsProperties; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* MeshElementsDisplay; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* UVChannelProperties; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* PolygroupLayerProperties; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x03E8
    void* Selection; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SpawnedActors; // 0x0418 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshSelectionTool, SelectionProps) == 944, "Offset mismatch for UMeshSelectionTool::SelectionProps");
static_assert(offsetof(UMeshSelectionTool, SelectionActions) == 952, "Offset mismatch for UMeshSelectionTool::SelectionActions");
static_assert(offsetof(UMeshSelectionTool, EditActions) == 960, "Offset mismatch for UMeshSelectionTool::EditActions");
static_assert(offsetof(UMeshSelectionTool, MeshStatisticsProperties) == 968, "Offset mismatch for UMeshSelectionTool::MeshStatisticsProperties");
static_assert(offsetof(UMeshSelectionTool, MeshElementsDisplay) == 976, "Offset mismatch for UMeshSelectionTool::MeshElementsDisplay");
static_assert(offsetof(UMeshSelectionTool, UVChannelProperties) == 984, "Offset mismatch for UMeshSelectionTool::UVChannelProperties");
static_assert(offsetof(UMeshSelectionTool, PolygroupLayerProperties) == 992, "Offset mismatch for UMeshSelectionTool::PolygroupLayerProperties");
static_assert(offsetof(UMeshSelectionTool, Selection) == 1040, "Offset mismatch for UMeshSelectionTool::Selection");
static_assert(offsetof(UMeshSelectionTool, SpawnedActors) == 1048, "Offset mismatch for UMeshSelectionTool::SpawnedActors");

// /Script/MeshModelingToolsExp.MeshSelectionToolActionPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class UMeshSelectionToolActionPropertySet
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshSelectionToolActionPropertySet, CachedPropertiesMap) == 56, "Offset mismatch for UMeshSelectionToolActionPropertySet::CachedPropertiesMap");
static_assert(offsetof(UMeshSelectionToolActionPropertySet, bIsPropertySetEnabled) == 72, "Offset mismatch for UMeshSelectionToolActionPropertySet::bIsPropertySetEnabled");

// /Script/MeshModelingToolsExp.MeshSelectionToolBuilder
// Kind: Class; super: MeshSurfacePointMeshEditingToolBuilder
class UMeshSelectionToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.MeshSelectionToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshSelectionToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SelectionMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float AngleTolerance; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHitBackFaces; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowPoints; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0072
    std::uint8_t FaceColorMode; // 0x0074 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMeshSelectionToolProperties, SelectionMode) == 104, "Offset mismatch for UMeshSelectionToolProperties::SelectionMode");
static_assert(offsetof(UMeshSelectionToolProperties, AngleTolerance) == 108, "Offset mismatch for UMeshSelectionToolProperties::AngleTolerance");
static_assert(offsetof(UMeshSelectionToolProperties, bHitBackFaces) == 112, "Offset mismatch for UMeshSelectionToolProperties::bHitBackFaces");
static_assert(offsetof(UMeshSelectionToolProperties, bShowPoints) == 113, "Offset mismatch for UMeshSelectionToolProperties::bShowPoints");
static_assert(offsetof(UMeshSelectionToolProperties, FaceColorMode) == 116, "Offset mismatch for UMeshSelectionToolProperties::FaceColorMode");

// /Script/MeshModelingToolsExp.MirrorOperatorFactory
// Kind: Class; super: Object
class UMirrorOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* MirrorTool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMirrorOperatorFactory, MirrorTool) == 48, "Offset mismatch for UMirrorOperatorFactory::MirrorTool");

// /Script/MeshModelingToolsExp.MirrorTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UMirrorTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* Settings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* OutputTypeProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* HandleSourcesProperties; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* ToolActions; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MeshesToMirror; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Previews; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0118
    void* PlaneMechanic; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMirrorTool, Settings) == 216, "Offset mismatch for UMirrorTool::Settings");
static_assert(offsetof(UMirrorTool, OutputTypeProperties) == 224, "Offset mismatch for UMirrorTool::OutputTypeProperties");
static_assert(offsetof(UMirrorTool, HandleSourcesProperties) == 232, "Offset mismatch for UMirrorTool::HandleSourcesProperties");
static_assert(offsetof(UMirrorTool, ToolActions) == 240, "Offset mismatch for UMirrorTool::ToolActions");
static_assert(offsetof(UMirrorTool, MeshesToMirror) == 248, "Offset mismatch for UMirrorTool::MeshesToMirror");
static_assert(offsetof(UMirrorTool, Previews) == 264, "Offset mismatch for UMirrorTool::Previews");
static_assert(offsetof(UMirrorTool, PlaneMechanic) == 328, "Offset mismatch for UMirrorTool::PlaneMechanic");

// /Script/MeshModelingToolsExp.MirrorToolActionPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class UMirrorToolActionPropertySet
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bButtonsOnlyChangeOrientation; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMirrorToolActionPropertySet, bButtonsOnlyChangeOrientation) == 112, "Offset mismatch for UMirrorToolActionPropertySet::bButtonsOnlyChangeOrientation");

// /Script/MeshModelingToolsExp.MirrorToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UMirrorToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.MirrorToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMirrorToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t OperationMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCropAlongMirrorPlaneFirst; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSimplifyAlongCrop; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWeldVerticesOnMirrorPlane; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t WeldVerticesNormalMode; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    double PlaneTolerance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bAllowBowtieVertexCreation; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowPreview; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WriteTo; // 0x007A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMirrorToolProperties, OperationMode) == 104, "Offset mismatch for UMirrorToolProperties::OperationMode");
static_assert(offsetof(UMirrorToolProperties, bCropAlongMirrorPlaneFirst) == 105, "Offset mismatch for UMirrorToolProperties::bCropAlongMirrorPlaneFirst");
static_assert(offsetof(UMirrorToolProperties, bSimplifyAlongCrop) == 106, "Offset mismatch for UMirrorToolProperties::bSimplifyAlongCrop");
static_assert(offsetof(UMirrorToolProperties, bWeldVerticesOnMirrorPlane) == 107, "Offset mismatch for UMirrorToolProperties::bWeldVerticesOnMirrorPlane");
static_assert(offsetof(UMirrorToolProperties, WeldVerticesNormalMode) == 108, "Offset mismatch for UMirrorToolProperties::WeldVerticesNormalMode");
static_assert(offsetof(UMirrorToolProperties, PlaneTolerance) == 112, "Offset mismatch for UMirrorToolProperties::PlaneTolerance");
static_assert(offsetof(UMirrorToolProperties, bAllowBowtieVertexCreation) == 120, "Offset mismatch for UMirrorToolProperties::bAllowBowtieVertexCreation");
static_assert(offsetof(UMirrorToolProperties, bShowPreview) == 121, "Offset mismatch for UMirrorToolProperties::bShowPreview");
static_assert(offsetof(UMirrorToolProperties, WriteTo) == 122, "Offset mismatch for UMirrorToolProperties::WriteTo");

// /Script/MeshModelingToolsExp.OffsetMeshSelectionTool
// Kind: Class; super: SingleTargetWithSelectionTool
class UOffsetMeshSelectionTool
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    void* OffsetProperties; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x680]; // 0x0110
    void* SourcePreview; // 0x0790 (Size: 0x8, Type: ObjectProperty)
    void* EditCompute; // 0x0798 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOffsetMeshSelectionTool, OffsetProperties) == 264, "Offset mismatch for UOffsetMeshSelectionTool::OffsetProperties");
static_assert(offsetof(UOffsetMeshSelectionTool, SourcePreview) == 1936, "Offset mismatch for UOffsetMeshSelectionTool::SourcePreview");
static_assert(offsetof(UOffsetMeshSelectionTool, EditCompute) == 1944, "Offset mismatch for UOffsetMeshSelectionTool::EditCompute");

// /Script/MeshModelingToolsExp.OffsetMeshSelectionToolBuilder
// Kind: Class; super: SingleTargetWithSelectionToolBuilder
class UOffsetMeshSelectionToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.OffsetMeshSelectionToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UOffsetMeshSelectionToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    double OffsetDistance; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Direction; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    std::int32_t NumSubdivisions; // 0x0074 (Size: 0x4, Type: IntProperty)
    double CreaseAngle; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bShellsToSolids; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInferGroupsFromNbrs; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGroupPerSubdivision; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplaceSelectionGroups; // 0x0083 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0084
    double UVScale; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUVIslandPerGroup; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInferMaterialID; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0092
    std::int32_t SetMaterialID; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowInputMaterials; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOffsetMeshSelectionToolProperties, OffsetDistance) == 104, "Offset mismatch for UOffsetMeshSelectionToolProperties::OffsetDistance");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, Direction) == 112, "Offset mismatch for UOffsetMeshSelectionToolProperties::Direction");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, NumSubdivisions) == 116, "Offset mismatch for UOffsetMeshSelectionToolProperties::NumSubdivisions");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, CreaseAngle) == 120, "Offset mismatch for UOffsetMeshSelectionToolProperties::CreaseAngle");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, bShellsToSolids) == 128, "Offset mismatch for UOffsetMeshSelectionToolProperties::bShellsToSolids");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, bInferGroupsFromNbrs) == 129, "Offset mismatch for UOffsetMeshSelectionToolProperties::bInferGroupsFromNbrs");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, bGroupPerSubdivision) == 130, "Offset mismatch for UOffsetMeshSelectionToolProperties::bGroupPerSubdivision");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, bReplaceSelectionGroups) == 131, "Offset mismatch for UOffsetMeshSelectionToolProperties::bReplaceSelectionGroups");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, UVScale) == 136, "Offset mismatch for UOffsetMeshSelectionToolProperties::UVScale");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, bUVIslandPerGroup) == 144, "Offset mismatch for UOffsetMeshSelectionToolProperties::bUVIslandPerGroup");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, bInferMaterialID) == 145, "Offset mismatch for UOffsetMeshSelectionToolProperties::bInferMaterialID");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, SetMaterialID) == 148, "Offset mismatch for UOffsetMeshSelectionToolProperties::SetMaterialID");
static_assert(offsetof(UOffsetMeshSelectionToolProperties, bShowInputMaterials) == 152, "Offset mismatch for UOffsetMeshSelectionToolProperties::bShowInputMaterials");

// /Script/MeshModelingToolsExp.PatternTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UPatternTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* Settings; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* BoundingBoxSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* LinearSettings; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* GridSettings; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* RadialSettings; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* RotationSettings; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* TranslationSettings; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* ScaleSettings; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x58]; // 0x0110
    void* OutputSettings; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    void* PatternGizmoProxy; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    void* PatternGizmo; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* PatternGizmoComponent; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0188
    void* DragAlignmentMechanic; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* PlaneMechanic; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1F8]; // 0x01B0
    std::uint8_t AllComponents[0x30]; // 0x03A8 (Size: 0x30, Type: SetProperty)
    void* PreviewGeometry; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPatternTool, Settings) == 208, "Offset mismatch for UPatternTool::Settings");
static_assert(offsetof(UPatternTool, BoundingBoxSettings) == 216, "Offset mismatch for UPatternTool::BoundingBoxSettings");
static_assert(offsetof(UPatternTool, LinearSettings) == 224, "Offset mismatch for UPatternTool::LinearSettings");
static_assert(offsetof(UPatternTool, GridSettings) == 232, "Offset mismatch for UPatternTool::GridSettings");
static_assert(offsetof(UPatternTool, RadialSettings) == 240, "Offset mismatch for UPatternTool::RadialSettings");
static_assert(offsetof(UPatternTool, RotationSettings) == 248, "Offset mismatch for UPatternTool::RotationSettings");
static_assert(offsetof(UPatternTool, TranslationSettings) == 256, "Offset mismatch for UPatternTool::TranslationSettings");
static_assert(offsetof(UPatternTool, ScaleSettings) == 264, "Offset mismatch for UPatternTool::ScaleSettings");
static_assert(offsetof(UPatternTool, OutputSettings) == 360, "Offset mismatch for UPatternTool::OutputSettings");
static_assert(offsetof(UPatternTool, PatternGizmoProxy) == 368, "Offset mismatch for UPatternTool::PatternGizmoProxy");
static_assert(offsetof(UPatternTool, PatternGizmo) == 376, "Offset mismatch for UPatternTool::PatternGizmo");
static_assert(offsetof(UPatternTool, PatternGizmoComponent) == 384, "Offset mismatch for UPatternTool::PatternGizmoComponent");
static_assert(offsetof(UPatternTool, DragAlignmentMechanic) == 416, "Offset mismatch for UPatternTool::DragAlignmentMechanic");
static_assert(offsetof(UPatternTool, PlaneMechanic) == 424, "Offset mismatch for UPatternTool::PlaneMechanic");
static_assert(offsetof(UPatternTool, AllComponents) == 936, "Offset mismatch for UPatternTool::AllComponents");
static_assert(offsetof(UPatternTool, PreviewGeometry) == 984, "Offset mismatch for UPatternTool::PreviewGeometry");

// /Script/MeshModelingToolsExp.PatternToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UPatternToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.PatternToolSettings
// Kind: Class; super: InteractiveToolPropertySet
class UPatternToolSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t Seed; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bProjectElementsDown; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    float ProjectionOffset; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHideSources; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRelativeTransforms; // 0x0075 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRandomlyPickElements; // 0x0076 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Shape; // 0x0077 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SingleAxis; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SinglePlane; // 0x0079 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPatternToolSettings, Seed) == 104, "Offset mismatch for UPatternToolSettings::Seed");
static_assert(offsetof(UPatternToolSettings, bProjectElementsDown) == 108, "Offset mismatch for UPatternToolSettings::bProjectElementsDown");
static_assert(offsetof(UPatternToolSettings, ProjectionOffset) == 112, "Offset mismatch for UPatternToolSettings::ProjectionOffset");
static_assert(offsetof(UPatternToolSettings, bHideSources) == 116, "Offset mismatch for UPatternToolSettings::bHideSources");
static_assert(offsetof(UPatternToolSettings, bUseRelativeTransforms) == 117, "Offset mismatch for UPatternToolSettings::bUseRelativeTransforms");
static_assert(offsetof(UPatternToolSettings, bRandomlyPickElements) == 118, "Offset mismatch for UPatternToolSettings::bRandomlyPickElements");
static_assert(offsetof(UPatternToolSettings, Shape) == 119, "Offset mismatch for UPatternToolSettings::Shape");
static_assert(offsetof(UPatternToolSettings, SingleAxis) == 120, "Offset mismatch for UPatternToolSettings::SingleAxis");
static_assert(offsetof(UPatternToolSettings, SinglePlane) == 121, "Offset mismatch for UPatternToolSettings::SinglePlane");

// /Script/MeshModelingToolsExp.PatternTool_BoundingBoxSettings
// Kind: Class; super: InteractiveToolPropertySet
class UPatternTool_BoundingBoxSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIgnoreTransforms; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float Adjustment; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bVisualize; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPatternTool_BoundingBoxSettings, bIgnoreTransforms) == 104, "Offset mismatch for UPatternTool_BoundingBoxSettings::bIgnoreTransforms");
static_assert(offsetof(UPatternTool_BoundingBoxSettings, Adjustment) == 108, "Offset mismatch for UPatternTool_BoundingBoxSettings::Adjustment");
static_assert(offsetof(UPatternTool_BoundingBoxSettings, bVisualize) == 112, "Offset mismatch for UPatternTool_BoundingBoxSettings::bVisualize");

// /Script/MeshModelingToolsExp.PatternTool_GridSettings
// Kind: Class; super: InteractiveToolPropertySet
class UPatternTool_GridSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SpacingX; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t CountX; // 0x006C (Size: 0x4, Type: IntProperty)
    double StepSizeX; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double ExtentX; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCenteredX; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SpacingY; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0082
    std::int32_t CountY; // 0x0084 (Size: 0x4, Type: IntProperty)
    double StepSizeY; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    double ExtentY; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCenteredY; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPatternTool_GridSettings, SpacingX) == 104, "Offset mismatch for UPatternTool_GridSettings::SpacingX");
static_assert(offsetof(UPatternTool_GridSettings, CountX) == 108, "Offset mismatch for UPatternTool_GridSettings::CountX");
static_assert(offsetof(UPatternTool_GridSettings, StepSizeX) == 112, "Offset mismatch for UPatternTool_GridSettings::StepSizeX");
static_assert(offsetof(UPatternTool_GridSettings, ExtentX) == 120, "Offset mismatch for UPatternTool_GridSettings::ExtentX");
static_assert(offsetof(UPatternTool_GridSettings, bCenteredX) == 128, "Offset mismatch for UPatternTool_GridSettings::bCenteredX");
static_assert(offsetof(UPatternTool_GridSettings, SpacingY) == 129, "Offset mismatch for UPatternTool_GridSettings::SpacingY");
static_assert(offsetof(UPatternTool_GridSettings, CountY) == 132, "Offset mismatch for UPatternTool_GridSettings::CountY");
static_assert(offsetof(UPatternTool_GridSettings, StepSizeY) == 136, "Offset mismatch for UPatternTool_GridSettings::StepSizeY");
static_assert(offsetof(UPatternTool_GridSettings, ExtentY) == 144, "Offset mismatch for UPatternTool_GridSettings::ExtentY");
static_assert(offsetof(UPatternTool_GridSettings, bCenteredY) == 152, "Offset mismatch for UPatternTool_GridSettings::bCenteredY");

// /Script/MeshModelingToolsExp.PatternTool_LinearSettings
// Kind: Class; super: InteractiveToolPropertySet
class UPatternTool_LinearSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SpacingMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t Count; // 0x006C (Size: 0x4, Type: IntProperty)
    double StepSize; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double Extent; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCentered; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPatternTool_LinearSettings, SpacingMode) == 104, "Offset mismatch for UPatternTool_LinearSettings::SpacingMode");
static_assert(offsetof(UPatternTool_LinearSettings, Count) == 108, "Offset mismatch for UPatternTool_LinearSettings::Count");
static_assert(offsetof(UPatternTool_LinearSettings, StepSize) == 112, "Offset mismatch for UPatternTool_LinearSettings::StepSize");
static_assert(offsetof(UPatternTool_LinearSettings, Extent) == 120, "Offset mismatch for UPatternTool_LinearSettings::Extent");
static_assert(offsetof(UPatternTool_LinearSettings, bCentered) == 128, "Offset mismatch for UPatternTool_LinearSettings::bCentered");

// /Script/MeshModelingToolsExp.PatternTool_OutputSettings
// Kind: Class; super: InteractiveToolPropertySet
class UPatternTool_OutputSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bSeparateActors; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertToDynamic; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCreateISMCs; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHaveStaticMeshes; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableCreateISMCs; // 0x006C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPatternTool_OutputSettings, bSeparateActors) == 104, "Offset mismatch for UPatternTool_OutputSettings::bSeparateActors");
static_assert(offsetof(UPatternTool_OutputSettings, bConvertToDynamic) == 105, "Offset mismatch for UPatternTool_OutputSettings::bConvertToDynamic");
static_assert(offsetof(UPatternTool_OutputSettings, bCreateISMCs) == 106, "Offset mismatch for UPatternTool_OutputSettings::bCreateISMCs");
static_assert(offsetof(UPatternTool_OutputSettings, bHaveStaticMeshes) == 107, "Offset mismatch for UPatternTool_OutputSettings::bHaveStaticMeshes");
static_assert(offsetof(UPatternTool_OutputSettings, bEnableCreateISMCs) == 108, "Offset mismatch for UPatternTool_OutputSettings::bEnableCreateISMCs");

// /Script/MeshModelingToolsExp.PatternTool_RadialSettings
// Kind: Class; super: InteractiveToolPropertySet
class UPatternTool_RadialSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SpacingMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t Count; // 0x006C (Size: 0x4, Type: IntProperty)
    double StepSize; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double Radius; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    double StartAngle; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    double EndAngle; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    double AngleShift; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bOriented; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPatternTool_RadialSettings, SpacingMode) == 104, "Offset mismatch for UPatternTool_RadialSettings::SpacingMode");
static_assert(offsetof(UPatternTool_RadialSettings, Count) == 108, "Offset mismatch for UPatternTool_RadialSettings::Count");
static_assert(offsetof(UPatternTool_RadialSettings, StepSize) == 112, "Offset mismatch for UPatternTool_RadialSettings::StepSize");
static_assert(offsetof(UPatternTool_RadialSettings, Radius) == 120, "Offset mismatch for UPatternTool_RadialSettings::Radius");
static_assert(offsetof(UPatternTool_RadialSettings, StartAngle) == 128, "Offset mismatch for UPatternTool_RadialSettings::StartAngle");
static_assert(offsetof(UPatternTool_RadialSettings, EndAngle) == 136, "Offset mismatch for UPatternTool_RadialSettings::EndAngle");
static_assert(offsetof(UPatternTool_RadialSettings, AngleShift) == 144, "Offset mismatch for UPatternTool_RadialSettings::AngleShift");
static_assert(offsetof(UPatternTool_RadialSettings, bOriented) == 152, "Offset mismatch for UPatternTool_RadialSettings::bOriented");

// /Script/MeshModelingToolsExp.PatternTool_RotationSettings
// Kind: Class; super: InteractiveToolPropertySet
class UPatternTool_RotationSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bInterpolate; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJitter; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    std::uint8_t StartRotation[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndRotation[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t jitter[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPatternTool_RotationSettings, bInterpolate) == 104, "Offset mismatch for UPatternTool_RotationSettings::bInterpolate");
static_assert(offsetof(UPatternTool_RotationSettings, bJitter) == 105, "Offset mismatch for UPatternTool_RotationSettings::bJitter");
static_assert(offsetof(UPatternTool_RotationSettings, StartRotation) == 112, "Offset mismatch for UPatternTool_RotationSettings::StartRotation");
static_assert(offsetof(UPatternTool_RotationSettings, EndRotation) == 136, "Offset mismatch for UPatternTool_RotationSettings::EndRotation");
static_assert(offsetof(UPatternTool_RotationSettings, jitter) == 160, "Offset mismatch for UPatternTool_RotationSettings::jitter");

// /Script/MeshModelingToolsExp.PatternTool_ScaleSettings
// Kind: Class; super: InteractiveToolPropertySet
class UPatternTool_ScaleSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bProportional; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInterpolate; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJitter; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x006B
    std::uint8_t StartScale[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndScale[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t jitter[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPatternTool_ScaleSettings, bProportional) == 104, "Offset mismatch for UPatternTool_ScaleSettings::bProportional");
static_assert(offsetof(UPatternTool_ScaleSettings, bInterpolate) == 105, "Offset mismatch for UPatternTool_ScaleSettings::bInterpolate");
static_assert(offsetof(UPatternTool_ScaleSettings, bJitter) == 106, "Offset mismatch for UPatternTool_ScaleSettings::bJitter");
static_assert(offsetof(UPatternTool_ScaleSettings, StartScale) == 112, "Offset mismatch for UPatternTool_ScaleSettings::StartScale");
static_assert(offsetof(UPatternTool_ScaleSettings, EndScale) == 136, "Offset mismatch for UPatternTool_ScaleSettings::EndScale");
static_assert(offsetof(UPatternTool_ScaleSettings, jitter) == 160, "Offset mismatch for UPatternTool_ScaleSettings::jitter");

// /Script/MeshModelingToolsExp.PatternTool_TranslationSettings
// Kind: Class; super: InteractiveToolPropertySet
class UPatternTool_TranslationSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bInterpolate; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJitter; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    std::uint8_t StartTranslation[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndTranslation[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t jitter[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPatternTool_TranslationSettings, bInterpolate) == 104, "Offset mismatch for UPatternTool_TranslationSettings::bInterpolate");
static_assert(offsetof(UPatternTool_TranslationSettings, bJitter) == 105, "Offset mismatch for UPatternTool_TranslationSettings::bJitter");
static_assert(offsetof(UPatternTool_TranslationSettings, StartTranslation) == 112, "Offset mismatch for UPatternTool_TranslationSettings::StartTranslation");
static_assert(offsetof(UPatternTool_TranslationSettings, EndTranslation) == 136, "Offset mismatch for UPatternTool_TranslationSettings::EndTranslation");
static_assert(offsetof(UPatternTool_TranslationSettings, jitter) == 160, "Offset mismatch for UPatternTool_TranslationSettings::jitter");

// /Script/MeshModelingToolsExp.PhysicsInspectorTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UPhysicsInspectorTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* VizSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObjectData; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviewElements; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPhysicsInspectorTool, VizSettings) == 216, "Offset mismatch for UPhysicsInspectorTool::VizSettings");
static_assert(offsetof(UPhysicsInspectorTool, Settings) == 224, "Offset mismatch for UPhysicsInspectorTool::Settings");
static_assert(offsetof(UPhysicsInspectorTool, ObjectData) == 232, "Offset mismatch for UPhysicsInspectorTool::ObjectData");
static_assert(offsetof(UPhysicsInspectorTool, PreviewElements) == 248, "Offset mismatch for UPhysicsInspectorTool::PreviewElements");

// /Script/MeshModelingToolsExp.PhysicsInspectorToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UPhysicsInspectorToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.PhysicsInspectorToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPhysicsInspectorToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bShowTargetMesh; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPhysicsInspectorToolProperties, bShowTargetMesh) == 104, "Offset mismatch for UPhysicsInspectorToolProperties::bShowTargetMesh");

// /Script/MeshModelingToolsExp.PhysicsObjectToolPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class UPhysicsObjectToolPropertySet
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString ObjectName; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t CollisionType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    TArray<void*> Spheres; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Boxes; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Capsules; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Convexes; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LevelSets; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPhysicsObjectToolPropertySet, ObjectName) == 104, "Offset mismatch for UPhysicsObjectToolPropertySet::ObjectName");
static_assert(offsetof(UPhysicsObjectToolPropertySet, CollisionType) == 120, "Offset mismatch for UPhysicsObjectToolPropertySet::CollisionType");
static_assert(offsetof(UPhysicsObjectToolPropertySet, Spheres) == 128, "Offset mismatch for UPhysicsObjectToolPropertySet::Spheres");
static_assert(offsetof(UPhysicsObjectToolPropertySet, Boxes) == 144, "Offset mismatch for UPhysicsObjectToolPropertySet::Boxes");
static_assert(offsetof(UPhysicsObjectToolPropertySet, Capsules) == 160, "Offset mismatch for UPhysicsObjectToolPropertySet::Capsules");
static_assert(offsetof(UPhysicsObjectToolPropertySet, Convexes) == 176, "Offset mismatch for UPhysicsObjectToolPropertySet::Convexes");
static_assert(offsetof(UPhysicsObjectToolPropertySet, LevelSets) == 192, "Offset mismatch for UPhysicsObjectToolPropertySet::LevelSets");

// /Script/MeshModelingToolsExp.PlaneCutOperatorFactory
// Kind: Class; super: Object
class UPlaneCutOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* CutTool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlaneCutOperatorFactory, CutTool) == 48, "Offset mismatch for UPlaneCutOperatorFactory::CutTool");

// /Script/MeshModelingToolsExp.PlaneCutTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UPlaneCutTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* BasicProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Previews; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshesToCut; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* PlaneMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlaneCutTool, BasicProperties) == 208, "Offset mismatch for UPlaneCutTool::BasicProperties");
static_assert(offsetof(UPlaneCutTool, Previews) == 216, "Offset mismatch for UPlaneCutTool::Previews");
static_assert(offsetof(UPlaneCutTool, MeshesToCut) == 232, "Offset mismatch for UPlaneCutTool::MeshesToCut");
static_assert(offsetof(UPlaneCutTool, PlaneMechanic) == 248, "Offset mismatch for UPlaneCutTool::PlaneMechanic");

// /Script/MeshModelingToolsExp.PlaneCutToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UPlaneCutToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.PlaneCutToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPlaneCutToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bKeepBothHalves; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float SpacingBetweenHalves; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bExportSeparatedPiecesAsNewMeshAssets; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowPreview; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFillCutHole; // 0x0072 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFillSpans; // 0x0073 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSimplifyAlongCut; // 0x0074 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPlaneCutToolProperties, bKeepBothHalves) == 104, "Offset mismatch for UPlaneCutToolProperties::bKeepBothHalves");
static_assert(offsetof(UPlaneCutToolProperties, SpacingBetweenHalves) == 108, "Offset mismatch for UPlaneCutToolProperties::SpacingBetweenHalves");
static_assert(offsetof(UPlaneCutToolProperties, bExportSeparatedPiecesAsNewMeshAssets) == 112, "Offset mismatch for UPlaneCutToolProperties::bExportSeparatedPiecesAsNewMeshAssets");
static_assert(offsetof(UPlaneCutToolProperties, bShowPreview) == 113, "Offset mismatch for UPlaneCutToolProperties::bShowPreview");
static_assert(offsetof(UPlaneCutToolProperties, bFillCutHole) == 114, "Offset mismatch for UPlaneCutToolProperties::bFillCutHole");
static_assert(offsetof(UPlaneCutToolProperties, bFillSpans) == 115, "Offset mismatch for UPlaneCutToolProperties::bFillSpans");
static_assert(offsetof(UPlaneCutToolProperties, bSimplifyAlongCut) == 116, "Offset mismatch for UPlaneCutToolProperties::bSimplifyAlongCut");

// /Script/MeshModelingToolsExp.RevolveBoundaryOperatorFactory
// Kind: Class; super: Object
class URevolveBoundaryOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* RevolveBoundaryTool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URevolveBoundaryOperatorFactory, RevolveBoundaryTool) == 48, "Offset mismatch for URevolveBoundaryOperatorFactory::RevolveBoundaryTool");

// /Script/MeshModelingToolsExp.RevolveBoundaryTool
// Kind: Class; super: MeshBoundaryToolBase
class URevolveBoundaryTool
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    void* OutputTypeProperties; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    void* PlaneMechanic; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URevolveBoundaryTool, OutputTypeProperties) == 456, "Offset mismatch for URevolveBoundaryTool::OutputTypeProperties");
static_assert(offsetof(URevolveBoundaryTool, Settings) == 464, "Offset mismatch for URevolveBoundaryTool::Settings");
static_assert(offsetof(URevolveBoundaryTool, MaterialProperties) == 472, "Offset mismatch for URevolveBoundaryTool::MaterialProperties");
static_assert(offsetof(URevolveBoundaryTool, PlaneMechanic) == 480, "Offset mismatch for URevolveBoundaryTool::PlaneMechanic");
static_assert(offsetof(URevolveBoundaryTool, Preview) == 488, "Offset mismatch for URevolveBoundaryTool::Preview");

// /Script/MeshModelingToolsExp.RevolveBoundaryToolBuilder
// Kind: Class; super: SingleSelectionMeshEditingToolBuilder
class URevolveBoundaryToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.RevolveBoundaryToolProperties
// Kind: Class; super: RevolveProperties
class URevolveBoundaryToolProperties
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t CapFillMode; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDisplayInputMesh; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00DA
    std::uint8_t AxisOrigin[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t AxisOrientation[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URevolveBoundaryToolProperties, CapFillMode) == 216, "Offset mismatch for URevolveBoundaryToolProperties::CapFillMode");
static_assert(offsetof(URevolveBoundaryToolProperties, bDisplayInputMesh) == 217, "Offset mismatch for URevolveBoundaryToolProperties::bDisplayInputMesh");
static_assert(offsetof(URevolveBoundaryToolProperties, AxisOrigin) == 224, "Offset mismatch for URevolveBoundaryToolProperties::AxisOrigin");
static_assert(offsetof(URevolveBoundaryToolProperties, AxisOrientation) == 248, "Offset mismatch for URevolveBoundaryToolProperties::AxisOrientation");

// /Script/MeshModelingToolsExp.RevolveSplineTool
// Kind: Class; super: BaseMeshFromSplinesTool
class URevolveSplineTool
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* Settings; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* ToolActions; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* PlaneMechanic; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URevolveSplineTool, Settings) == 280, "Offset mismatch for URevolveSplineTool::Settings");
static_assert(offsetof(URevolveSplineTool, ToolActions) == 288, "Offset mismatch for URevolveSplineTool::ToolActions");
static_assert(offsetof(URevolveSplineTool, PlaneMechanic) == 296, "Offset mismatch for URevolveSplineTool::PlaneMechanic");

// /Script/MeshModelingToolsExp.RevolveSplineToolActionPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class URevolveSplineToolActionPropertySet
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URevolveSplineToolActionPropertySet, CachedPropertiesMap) == 56, "Offset mismatch for URevolveSplineToolActionPropertySet::CachedPropertiesMap");
static_assert(offsetof(URevolveSplineToolActionPropertySet, bIsPropertySetEnabled) == 72, "Offset mismatch for URevolveSplineToolActionPropertySet::bIsPropertySetEnabled");

// /Script/MeshModelingToolsExp.RevolveSplineToolBuilder
// Kind: Class; super: BaseMeshFromSplinesToolBuilder
class URevolveSplineToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.RevolveSplineToolProperties
// Kind: Class; super: RevolveProperties
class URevolveSplineToolProperties
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t SampleMode; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    double ErrorTolerance; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    double MaxSampleDistance; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t CapFillMode; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClosePathToAxis; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00F2
    std::uint8_t AxisOrigin[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t AxisOrientation[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t bResetAxisOnStart; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URevolveSplineToolProperties, SampleMode) == 216, "Offset mismatch for URevolveSplineToolProperties::SampleMode");
static_assert(offsetof(URevolveSplineToolProperties, ErrorTolerance) == 224, "Offset mismatch for URevolveSplineToolProperties::ErrorTolerance");
static_assert(offsetof(URevolveSplineToolProperties, MaxSampleDistance) == 232, "Offset mismatch for URevolveSplineToolProperties::MaxSampleDistance");
static_assert(offsetof(URevolveSplineToolProperties, CapFillMode) == 240, "Offset mismatch for URevolveSplineToolProperties::CapFillMode");
static_assert(offsetof(URevolveSplineToolProperties, bClosePathToAxis) == 241, "Offset mismatch for URevolveSplineToolProperties::bClosePathToAxis");
static_assert(offsetof(URevolveSplineToolProperties, AxisOrigin) == 248, "Offset mismatch for URevolveSplineToolProperties::AxisOrigin");
static_assert(offsetof(URevolveSplineToolProperties, AxisOrientation) == 272, "Offset mismatch for URevolveSplineToolProperties::AxisOrientation");
static_assert(offsetof(URevolveSplineToolProperties, bResetAxisOnStart) == 288, "Offset mismatch for URevolveSplineToolProperties::bResetAxisOnStart");

// /Script/MeshModelingToolsExp.SeamSculptTool
// Kind: Class; super: DynamicMeshBrushTool
class USeamSculptTool
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    void* Settings; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewGeom; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USeamSculptTool, Settings) == 944, "Offset mismatch for USeamSculptTool::Settings");
static_assert(offsetof(USeamSculptTool, PreviewGeom) == 952, "Offset mismatch for USeamSculptTool::PreviewGeom");

// /Script/MeshModelingToolsExp.SeamSculptToolBuilder
// Kind: Class; super: MeshSurfacePointMeshEditingToolBuilder
class USeamSculptToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.SeamSculptToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class USeamSculptToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bShowWireframe; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitBackFaces; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    double PathSimilarityWeight; // 0x0070 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(USeamSculptToolProperties, bShowWireframe) == 104, "Offset mismatch for USeamSculptToolProperties::bShowWireframe");
static_assert(offsetof(USeamSculptToolProperties, bHitBackFaces) == 105, "Offset mismatch for USeamSculptToolProperties::bHitBackFaces");
static_assert(offsetof(USeamSculptToolProperties, PathSimilarityWeight) == 112, "Offset mismatch for USeamSculptToolProperties::PathSimilarityWeight");

// /Script/MeshModelingToolsExp.SelfUnionMeshesTool
// Kind: Class; super: BaseCreateFromSelectedTool
class USelfUnionMeshesTool
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* Properties; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* DrawnLineSet; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USelfUnionMeshesTool, Properties) == 288, "Offset mismatch for USelfUnionMeshesTool::Properties");
static_assert(offsetof(USelfUnionMeshesTool, DrawnLineSet) == 296, "Offset mismatch for USelfUnionMeshesTool::DrawnLineSet");

// /Script/MeshModelingToolsExp.SelfUnionMeshesToolBuilder
// Kind: Class; super: BaseCreateFromSelectedToolBuilder
class USelfUnionMeshesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.SelfUnionMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class USelfUnionMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bTrimFlaps; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryFixHoles; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryCollapseEdges; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x006B
    float WindingThreshold; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowNewBoundaryEdges; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyUseFirstMeshMaterials; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USelfUnionMeshesToolProperties, bTrimFlaps) == 104, "Offset mismatch for USelfUnionMeshesToolProperties::bTrimFlaps");
static_assert(offsetof(USelfUnionMeshesToolProperties, bTryFixHoles) == 105, "Offset mismatch for USelfUnionMeshesToolProperties::bTryFixHoles");
static_assert(offsetof(USelfUnionMeshesToolProperties, bTryCollapseEdges) == 106, "Offset mismatch for USelfUnionMeshesToolProperties::bTryCollapseEdges");
static_assert(offsetof(USelfUnionMeshesToolProperties, WindingThreshold) == 108, "Offset mismatch for USelfUnionMeshesToolProperties::WindingThreshold");
static_assert(offsetof(USelfUnionMeshesToolProperties, bShowNewBoundaryEdges) == 112, "Offset mismatch for USelfUnionMeshesToolProperties::bShowNewBoundaryEdges");
static_assert(offsetof(USelfUnionMeshesToolProperties, bOnlyUseFirstMeshMaterials) == 113, "Offset mismatch for USelfUnionMeshesToolProperties::bOnlyUseFirstMeshMaterials");

// /Script/MeshModelingToolsExp.SetCollisionGeometryTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class USetCollisionGeometryTool
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Settings; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PolygroupLayerProperties; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* VizSettings; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* CollisionProps; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0100
    void* PreviewGeom; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x240]; // 0x0110
    void* GeometrySelectionVizProperties; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* GeometrySelectionViz; // 0x0358 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USetCollisionGeometryTool, Settings) == 224, "Offset mismatch for USetCollisionGeometryTool::Settings");
static_assert(offsetof(USetCollisionGeometryTool, PolygroupLayerProperties) == 232, "Offset mismatch for USetCollisionGeometryTool::PolygroupLayerProperties");
static_assert(offsetof(USetCollisionGeometryTool, VizSettings) == 240, "Offset mismatch for USetCollisionGeometryTool::VizSettings");
static_assert(offsetof(USetCollisionGeometryTool, CollisionProps) == 248, "Offset mismatch for USetCollisionGeometryTool::CollisionProps");
static_assert(offsetof(USetCollisionGeometryTool, PreviewGeom) == 264, "Offset mismatch for USetCollisionGeometryTool::PreviewGeom");
static_assert(offsetof(USetCollisionGeometryTool, GeometrySelectionVizProperties) == 848, "Offset mismatch for USetCollisionGeometryTool::GeometrySelectionVizProperties");
static_assert(offsetof(USetCollisionGeometryTool, GeometrySelectionViz) == 856, "Offset mismatch for USetCollisionGeometryTool::GeometrySelectionViz");

// /Script/MeshModelingToolsExp.SetCollisionGeometryToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class USetCollisionGeometryToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.SetCollisionGeometryToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class USetCollisionGeometryToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t GeometryType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t bAppendToExisting; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseWorldSpace; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x006E
    std::uint8_t InputMode; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0071
    std::uint8_t bRemoveContained; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableMaxCount; // 0x0075 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0076
    std::int32_t MaxCount; // 0x0078 (Size: 0x4, Type: IntProperty)
    float MinThickness; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDetectBoxes; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDetectSpheres; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDetectCapsules; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMergeCollisionShapes; // 0x0083 (Size: 0x1, Type: BoolProperty)
    std::int32_t MergeAboveCount; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseNegativeSpaceInMerge; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSimplifyHulls; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x008A
    std::int32_t HullTargetFaceCount; // 0x008C (Size: 0x4, Type: IntProperty)
    double HullSimplifyGeometryTolerance; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bPreSimplifyToEdgeLength; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0099
    double DecompositionTargetEdgeLength; // 0x00A0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DecompositionMethod; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x3]; // 0x00A9
    std::uint8_t bLimitHullsPerShape; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x00AD
    std::int32_t MaxHullsPerShape; // 0x00B0 (Size: 0x4, Type: IntProperty)
    float ConvexDecompositionSearchFactor; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float AddHullsErrorTolerance; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float MinPartThickness; // 0x00BC (Size: 0x4, Type: FloatProperty)
    double NegativeSpaceTolerance; // 0x00C0 (Size: 0x8, Type: DoubleProperty)
    double NegativeSpaceMinRadius; // 0x00C8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIgnoreInternalNegativeSpace; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x00D1
    float HullTolerance; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SweepAxis; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x3]; // 0x00D9
    std::int32_t LevelSetResolution; // 0x00DC (Size: 0x4, Type: IntProperty)
    std::uint8_t SetCollisionType; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000B[0x3]; // 0x00E1
    std::uint8_t bShowTargetMesh; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsingMultipleInputs; // 0x00E5 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USetCollisionGeometryToolProperties, GeometryType) == 104, "Offset mismatch for USetCollisionGeometryToolProperties::GeometryType");
static_assert(offsetof(USetCollisionGeometryToolProperties, bAppendToExisting) == 108, "Offset mismatch for USetCollisionGeometryToolProperties::bAppendToExisting");
static_assert(offsetof(USetCollisionGeometryToolProperties, bUseWorldSpace) == 109, "Offset mismatch for USetCollisionGeometryToolProperties::bUseWorldSpace");
static_assert(offsetof(USetCollisionGeometryToolProperties, InputMode) == 112, "Offset mismatch for USetCollisionGeometryToolProperties::InputMode");
static_assert(offsetof(USetCollisionGeometryToolProperties, bRemoveContained) == 116, "Offset mismatch for USetCollisionGeometryToolProperties::bRemoveContained");
static_assert(offsetof(USetCollisionGeometryToolProperties, bEnableMaxCount) == 117, "Offset mismatch for USetCollisionGeometryToolProperties::bEnableMaxCount");
static_assert(offsetof(USetCollisionGeometryToolProperties, MaxCount) == 120, "Offset mismatch for USetCollisionGeometryToolProperties::MaxCount");
static_assert(offsetof(USetCollisionGeometryToolProperties, MinThickness) == 124, "Offset mismatch for USetCollisionGeometryToolProperties::MinThickness");
static_assert(offsetof(USetCollisionGeometryToolProperties, bDetectBoxes) == 128, "Offset mismatch for USetCollisionGeometryToolProperties::bDetectBoxes");
static_assert(offsetof(USetCollisionGeometryToolProperties, bDetectSpheres) == 129, "Offset mismatch for USetCollisionGeometryToolProperties::bDetectSpheres");
static_assert(offsetof(USetCollisionGeometryToolProperties, bDetectCapsules) == 130, "Offset mismatch for USetCollisionGeometryToolProperties::bDetectCapsules");
static_assert(offsetof(USetCollisionGeometryToolProperties, bMergeCollisionShapes) == 131, "Offset mismatch for USetCollisionGeometryToolProperties::bMergeCollisionShapes");
static_assert(offsetof(USetCollisionGeometryToolProperties, MergeAboveCount) == 132, "Offset mismatch for USetCollisionGeometryToolProperties::MergeAboveCount");
static_assert(offsetof(USetCollisionGeometryToolProperties, bUseNegativeSpaceInMerge) == 136, "Offset mismatch for USetCollisionGeometryToolProperties::bUseNegativeSpaceInMerge");
static_assert(offsetof(USetCollisionGeometryToolProperties, bSimplifyHulls) == 137, "Offset mismatch for USetCollisionGeometryToolProperties::bSimplifyHulls");
static_assert(offsetof(USetCollisionGeometryToolProperties, HullTargetFaceCount) == 140, "Offset mismatch for USetCollisionGeometryToolProperties::HullTargetFaceCount");
static_assert(offsetof(USetCollisionGeometryToolProperties, HullSimplifyGeometryTolerance) == 144, "Offset mismatch for USetCollisionGeometryToolProperties::HullSimplifyGeometryTolerance");
static_assert(offsetof(USetCollisionGeometryToolProperties, bPreSimplifyToEdgeLength) == 152, "Offset mismatch for USetCollisionGeometryToolProperties::bPreSimplifyToEdgeLength");
static_assert(offsetof(USetCollisionGeometryToolProperties, DecompositionTargetEdgeLength) == 160, "Offset mismatch for USetCollisionGeometryToolProperties::DecompositionTargetEdgeLength");
static_assert(offsetof(USetCollisionGeometryToolProperties, DecompositionMethod) == 168, "Offset mismatch for USetCollisionGeometryToolProperties::DecompositionMethod");
static_assert(offsetof(USetCollisionGeometryToolProperties, bLimitHullsPerShape) == 172, "Offset mismatch for USetCollisionGeometryToolProperties::bLimitHullsPerShape");
static_assert(offsetof(USetCollisionGeometryToolProperties, MaxHullsPerShape) == 176, "Offset mismatch for USetCollisionGeometryToolProperties::MaxHullsPerShape");
static_assert(offsetof(USetCollisionGeometryToolProperties, ConvexDecompositionSearchFactor) == 180, "Offset mismatch for USetCollisionGeometryToolProperties::ConvexDecompositionSearchFactor");
static_assert(offsetof(USetCollisionGeometryToolProperties, AddHullsErrorTolerance) == 184, "Offset mismatch for USetCollisionGeometryToolProperties::AddHullsErrorTolerance");
static_assert(offsetof(USetCollisionGeometryToolProperties, MinPartThickness) == 188, "Offset mismatch for USetCollisionGeometryToolProperties::MinPartThickness");
static_assert(offsetof(USetCollisionGeometryToolProperties, NegativeSpaceTolerance) == 192, "Offset mismatch for USetCollisionGeometryToolProperties::NegativeSpaceTolerance");
static_assert(offsetof(USetCollisionGeometryToolProperties, NegativeSpaceMinRadius) == 200, "Offset mismatch for USetCollisionGeometryToolProperties::NegativeSpaceMinRadius");
static_assert(offsetof(USetCollisionGeometryToolProperties, bIgnoreInternalNegativeSpace) == 208, "Offset mismatch for USetCollisionGeometryToolProperties::bIgnoreInternalNegativeSpace");
static_assert(offsetof(USetCollisionGeometryToolProperties, HullTolerance) == 212, "Offset mismatch for USetCollisionGeometryToolProperties::HullTolerance");
static_assert(offsetof(USetCollisionGeometryToolProperties, SweepAxis) == 216, "Offset mismatch for USetCollisionGeometryToolProperties::SweepAxis");
static_assert(offsetof(USetCollisionGeometryToolProperties, LevelSetResolution) == 220, "Offset mismatch for USetCollisionGeometryToolProperties::LevelSetResolution");
static_assert(offsetof(USetCollisionGeometryToolProperties, SetCollisionType) == 224, "Offset mismatch for USetCollisionGeometryToolProperties::SetCollisionType");
static_assert(offsetof(USetCollisionGeometryToolProperties, bShowTargetMesh) == 228, "Offset mismatch for USetCollisionGeometryToolProperties::bShowTargetMesh");
static_assert(offsetof(USetCollisionGeometryToolProperties, bUsingMultipleInputs) == 229, "Offset mismatch for USetCollisionGeometryToolProperties::bUsingMultipleInputs");

// /Script/MeshModelingToolsExp.SimpleCollisionEditorTool
// Kind: Class; super: SingleSelectionMeshEditingTool
class USimpleCollisionEditorTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* ActionProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USimpleCollisionEditorTool, ActionProperties) == 208, "Offset mismatch for USimpleCollisionEditorTool::ActionProperties");

// /Script/MeshModelingToolsExp.SimpleCollisionEditorToolActionProperties
// Kind: Class; super: InteractiveToolPropertySet
class USimpleCollisionEditorToolActionProperties
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USimpleCollisionEditorToolActionProperties, CachedPropertiesMap) == 56, "Offset mismatch for USimpleCollisionEditorToolActionProperties::CachedPropertiesMap");
static_assert(offsetof(USimpleCollisionEditorToolActionProperties, bIsPropertySetEnabled) == 72, "Offset mismatch for USimpleCollisionEditorToolActionProperties::bIsPropertySetEnabled");

// /Script/MeshModelingToolsExp.SimpleCollisionEditorToolBuilder
// Kind: Class; super: SingleSelectionMeshEditingToolBuilder
class USimpleCollisionEditorToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.SplitMeshesTool
// Kind: Class; super: MultiTargetWithSelectionTool
class USplitMeshesTool
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* BasicProperties; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* OutputTypeProperties; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0110
    TArray<void*> PerTargetPreviews; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    void* PreviewMaterial; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USplitMeshesTool, BasicProperties) == 256, "Offset mismatch for USplitMeshesTool::BasicProperties");
static_assert(offsetof(USplitMeshesTool, OutputTypeProperties) == 264, "Offset mismatch for USplitMeshesTool::OutputTypeProperties");
static_assert(offsetof(USplitMeshesTool, PerTargetPreviews) == 312, "Offset mismatch for USplitMeshesTool::PerTargetPreviews");
static_assert(offsetof(USplitMeshesTool, PreviewMaterial) == 328, "Offset mismatch for USplitMeshesTool::PreviewMaterial");

// /Script/MeshModelingToolsExp.SplitMeshesToolBuilder
// Kind: Class; super: MultiTargetWithSelectionToolBuilder
class USplitMeshesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.SplitMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class USplitMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SplitMethod; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    double ConnectVerticesThreshold; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bTransferMaterials; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowPreview; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInSelectionMode; // 0x007A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USplitMeshesToolProperties, SplitMethod) == 104, "Offset mismatch for USplitMeshesToolProperties::SplitMethod");
static_assert(offsetof(USplitMeshesToolProperties, ConnectVerticesThreshold) == 112, "Offset mismatch for USplitMeshesToolProperties::ConnectVerticesThreshold");
static_assert(offsetof(USplitMeshesToolProperties, bTransferMaterials) == 120, "Offset mismatch for USplitMeshesToolProperties::bTransferMaterials");
static_assert(offsetof(USplitMeshesToolProperties, bShowPreview) == 121, "Offset mismatch for USplitMeshesToolProperties::bShowPreview");
static_assert(offsetof(USplitMeshesToolProperties, bIsInSelectionMode) == 122, "Offset mismatch for USplitMeshesToolProperties::bIsInSelectionMode");

// /Script/MeshModelingToolsExp.TransferMeshTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UTransferMeshTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* BasicProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTransferMeshTool, BasicProperties) == 216, "Offset mismatch for UTransferMeshTool::BasicProperties");

// /Script/MeshModelingToolsExp.TransferMeshToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UTransferMeshToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.TransferMeshToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UTransferMeshToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bTransferMaterials; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferCollision; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    FString SourceLOD; // 0x0070 (Size: 0x10, Type: StrProperty)
    FString TargetLOD; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsStaticMeshSource; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0091
    TArray<void*> SourceLODNamesList; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x00A8
    TArray<void*> TargetLODNamesList; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x10]; // 0x00C8
    std::uint8_t bIsStaticMeshTarget; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTransferMeshToolProperties, bTransferMaterials) == 104, "Offset mismatch for UTransferMeshToolProperties::bTransferMaterials");
static_assert(offsetof(UTransferMeshToolProperties, bTransferCollision) == 105, "Offset mismatch for UTransferMeshToolProperties::bTransferCollision");
static_assert(offsetof(UTransferMeshToolProperties, SourceLOD) == 112, "Offset mismatch for UTransferMeshToolProperties::SourceLOD");
static_assert(offsetof(UTransferMeshToolProperties, TargetLOD) == 128, "Offset mismatch for UTransferMeshToolProperties::TargetLOD");
static_assert(offsetof(UTransferMeshToolProperties, bIsStaticMeshSource) == 144, "Offset mismatch for UTransferMeshToolProperties::bIsStaticMeshSource");
static_assert(offsetof(UTransferMeshToolProperties, SourceLODNamesList) == 152, "Offset mismatch for UTransferMeshToolProperties::SourceLODNamesList");
static_assert(offsetof(UTransferMeshToolProperties, TargetLODNamesList) == 184, "Offset mismatch for UTransferMeshToolProperties::TargetLODNamesList");
static_assert(offsetof(UTransferMeshToolProperties, bIsStaticMeshTarget) == 216, "Offset mismatch for UTransferMeshToolProperties::bIsStaticMeshTarget");

// /Script/MeshModelingToolsExp.TransformMeshesTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UTransformMeshesTool
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TransformProps; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActiveGizmos; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTransformMeshesTool, TransformProps) == 224, "Offset mismatch for UTransformMeshesTool::TransformProps");
static_assert(offsetof(UTransformMeshesTool, ActiveGizmos) == 232, "Offset mismatch for UTransformMeshesTool::ActiveGizmos");
static_assert(offsetof(UTransformMeshesTool, DragAlignmentMechanic) == 248, "Offset mismatch for UTransformMeshesTool::DragAlignmentMechanic");

// /Script/MeshModelingToolsExp.TransformMeshesToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UTransformMeshesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.TransformMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UTransformMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t TransformMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyToInstances; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetPivotMode; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSnapDragging; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t SnapDragSource; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationMode; // 0x006D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHaveInstances; // 0x006E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTransformMeshesToolProperties, TransformMode) == 104, "Offset mismatch for UTransformMeshesToolProperties::TransformMode");
static_assert(offsetof(UTransformMeshesToolProperties, bApplyToInstances) == 105, "Offset mismatch for UTransformMeshesToolProperties::bApplyToInstances");
static_assert(offsetof(UTransformMeshesToolProperties, bSetPivotMode) == 106, "Offset mismatch for UTransformMeshesToolProperties::bSetPivotMode");
static_assert(offsetof(UTransformMeshesToolProperties, bEnableSnapDragging) == 107, "Offset mismatch for UTransformMeshesToolProperties::bEnableSnapDragging");
static_assert(offsetof(UTransformMeshesToolProperties, SnapDragSource) == 108, "Offset mismatch for UTransformMeshesToolProperties::SnapDragSource");
static_assert(offsetof(UTransformMeshesToolProperties, RotationMode) == 109, "Offset mismatch for UTransformMeshesToolProperties::RotationMode");
static_assert(offsetof(UTransformMeshesToolProperties, bHaveInstances) == 110, "Offset mismatch for UTransformMeshesToolProperties::bHaveInstances");

// /Script/MeshModelingToolsExp.TriangulateSplinesTool
// Kind: Class; super: BaseMeshFromSplinesTool
class UTriangulateSplinesTool
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* TriangulateProperties; // 0x0118 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTriangulateSplinesTool, TriangulateProperties) == 280, "Offset mismatch for UTriangulateSplinesTool::TriangulateProperties");

// /Script/MeshModelingToolsExp.TriangulateSplinesToolBuilder
// Kind: Class; super: BaseMeshFromSplinesToolBuilder
class UTriangulateSplinesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.TriangulateSplinesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UTriangulateSplinesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    double ErrorTolerance; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FlattenMethod; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CombineMethod; // 0x0071 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0072
    double Thickness; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bFlipResult; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OpenCurves; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0082
    double CurveOffset; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t OffsetClosedCurves; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EndShapes; // 0x0091 (Size: 0x1, Type: EnumProperty)
    std::uint8_t JoinMethod; // 0x0092 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x5]; // 0x0093
    double MiterLimit; // 0x0098 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UTriangulateSplinesToolProperties, ErrorTolerance) == 104, "Offset mismatch for UTriangulateSplinesToolProperties::ErrorTolerance");
static_assert(offsetof(UTriangulateSplinesToolProperties, FlattenMethod) == 112, "Offset mismatch for UTriangulateSplinesToolProperties::FlattenMethod");
static_assert(offsetof(UTriangulateSplinesToolProperties, CombineMethod) == 113, "Offset mismatch for UTriangulateSplinesToolProperties::CombineMethod");
static_assert(offsetof(UTriangulateSplinesToolProperties, Thickness) == 120, "Offset mismatch for UTriangulateSplinesToolProperties::Thickness");
static_assert(offsetof(UTriangulateSplinesToolProperties, bFlipResult) == 128, "Offset mismatch for UTriangulateSplinesToolProperties::bFlipResult");
static_assert(offsetof(UTriangulateSplinesToolProperties, OpenCurves) == 129, "Offset mismatch for UTriangulateSplinesToolProperties::OpenCurves");
static_assert(offsetof(UTriangulateSplinesToolProperties, CurveOffset) == 136, "Offset mismatch for UTriangulateSplinesToolProperties::CurveOffset");
static_assert(offsetof(UTriangulateSplinesToolProperties, OffsetClosedCurves) == 144, "Offset mismatch for UTriangulateSplinesToolProperties::OffsetClosedCurves");
static_assert(offsetof(UTriangulateSplinesToolProperties, EndShapes) == 145, "Offset mismatch for UTriangulateSplinesToolProperties::EndShapes");
static_assert(offsetof(UTriangulateSplinesToolProperties, JoinMethod) == 146, "Offset mismatch for UTriangulateSplinesToolProperties::JoinMethod");
static_assert(offsetof(UTriangulateSplinesToolProperties, MiterLimit) == 152, "Offset mismatch for UTriangulateSplinesToolProperties::MiterLimit");

// /Script/MeshModelingToolsExp.UVTransferTool
// Kind: Class; super: MultiTargetWithSelectionTool
class UUVTransferTool
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    void* Settings; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* DestinationMaterialSettings; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* DestinationPreview; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* SourcePreview; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* SourceSeamVisualizer; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* DestinationSeamVisualizer; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUVTransferTool, Settings) == 272, "Offset mismatch for UUVTransferTool::Settings");
static_assert(offsetof(UUVTransferTool, DestinationMaterialSettings) == 280, "Offset mismatch for UUVTransferTool::DestinationMaterialSettings");
static_assert(offsetof(UUVTransferTool, DestinationPreview) == 288, "Offset mismatch for UUVTransferTool::DestinationPreview");
static_assert(offsetof(UUVTransferTool, SourcePreview) == 296, "Offset mismatch for UUVTransferTool::SourcePreview");
static_assert(offsetof(UUVTransferTool, SourceSeamVisualizer) == 304, "Offset mismatch for UUVTransferTool::SourceSeamVisualizer");
static_assert(offsetof(UUVTransferTool, DestinationSeamVisualizer) == 312, "Offset mismatch for UUVTransferTool::DestinationSeamVisualizer");

// /Script/MeshModelingToolsExp.UVTransferToolBuilder
// Kind: Class; super: MultiTargetWithSelectionToolBuilder
class UUVTransferToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.UVTransferToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UUVTransferToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bReverseDirection; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferSeamsOnly; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearExistingSeams; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x006B
    double PathSimilarityWeight; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bShowWireframes; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSeams; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x007A
    double VertexSearchDistance; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    FString SourceUVChannel; // 0x0088 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSameDestinationChannel; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0099
    FString DestUVChannel; // 0x00A0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UUVTransferToolProperties, bReverseDirection) == 104, "Offset mismatch for UUVTransferToolProperties::bReverseDirection");
static_assert(offsetof(UUVTransferToolProperties, bTransferSeamsOnly) == 105, "Offset mismatch for UUVTransferToolProperties::bTransferSeamsOnly");
static_assert(offsetof(UUVTransferToolProperties, bClearExistingSeams) == 106, "Offset mismatch for UUVTransferToolProperties::bClearExistingSeams");
static_assert(offsetof(UUVTransferToolProperties, PathSimilarityWeight) == 112, "Offset mismatch for UUVTransferToolProperties::PathSimilarityWeight");
static_assert(offsetof(UUVTransferToolProperties, bShowWireframes) == 120, "Offset mismatch for UUVTransferToolProperties::bShowWireframes");
static_assert(offsetof(UUVTransferToolProperties, bShowSeams) == 121, "Offset mismatch for UUVTransferToolProperties::bShowSeams");
static_assert(offsetof(UUVTransferToolProperties, VertexSearchDistance) == 128, "Offset mismatch for UUVTransferToolProperties::VertexSearchDistance");
static_assert(offsetof(UUVTransferToolProperties, SourceUVChannel) == 136, "Offset mismatch for UUVTransferToolProperties::SourceUVChannel");
static_assert(offsetof(UUVTransferToolProperties, bSameDestinationChannel) == 152, "Offset mismatch for UUVTransferToolProperties::bSameDestinationChannel");
static_assert(offsetof(UUVTransferToolProperties, DestUVChannel) == 160, "Offset mismatch for UUVTransferToolProperties::DestUVChannel");

// /Script/MeshModelingToolsExp.VolumeToMeshTool
// Kind: Class; super: InteractiveTool
class UVolumeToMeshTool
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* Settings; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* OutputTypeProperties; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetVolume[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    void* VolumeEdgesSet; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVolumeToMeshTool, Settings) == 176, "Offset mismatch for UVolumeToMeshTool::Settings");
static_assert(offsetof(UVolumeToMeshTool, OutputTypeProperties) == 184, "Offset mismatch for UVolumeToMeshTool::OutputTypeProperties");
static_assert(offsetof(UVolumeToMeshTool, PreviewMesh) == 192, "Offset mismatch for UVolumeToMeshTool::PreviewMesh");
static_assert(offsetof(UVolumeToMeshTool, TargetVolume) == 200, "Offset mismatch for UVolumeToMeshTool::TargetVolume");
static_assert(offsetof(UVolumeToMeshTool, VolumeEdgesSet) == 232, "Offset mismatch for UVolumeToMeshTool::VolumeEdgesSet");

// /Script/MeshModelingToolsExp.VolumeToMeshToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class UVolumeToMeshToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.VolumeToMeshToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UVolumeToMeshToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bWeldEdges; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRepair; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOptimizeMesh; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowWireframe; // 0x006B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVolumeToMeshToolProperties, bWeldEdges) == 104, "Offset mismatch for UVolumeToMeshToolProperties::bWeldEdges");
static_assert(offsetof(UVolumeToMeshToolProperties, bAutoRepair) == 105, "Offset mismatch for UVolumeToMeshToolProperties::bAutoRepair");
static_assert(offsetof(UVolumeToMeshToolProperties, bOptimizeMesh) == 106, "Offset mismatch for UVolumeToMeshToolProperties::bOptimizeMesh");
static_assert(offsetof(UVolumeToMeshToolProperties, bShowWireframe) == 107, "Offset mismatch for UVolumeToMeshToolProperties::bShowWireframe");

// /Script/MeshModelingToolsExp.VoxelBlendMeshesTool
// Kind: Class; super: BaseVoxelTool
class UVoxelBlendMeshesTool
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    void* BlendProperties; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVoxelBlendMeshesTool, BlendProperties) == 312, "Offset mismatch for UVoxelBlendMeshesTool::BlendProperties");

// /Script/MeshModelingToolsExp.VoxelBlendMeshesToolBuilder
// Kind: Class; super: BaseCreateFromSelectedToolBuilder
class UVoxelBlendMeshesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.VoxelBlendMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UVoxelBlendMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    double BlendPower; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double BlendFalloff; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Operation; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bVoxWrap; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveInternalsAfterVoxWrap; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x007B
    double ThickenShells; // 0x0080 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UVoxelBlendMeshesToolProperties, BlendPower) == 104, "Offset mismatch for UVoxelBlendMeshesToolProperties::BlendPower");
static_assert(offsetof(UVoxelBlendMeshesToolProperties, BlendFalloff) == 112, "Offset mismatch for UVoxelBlendMeshesToolProperties::BlendFalloff");
static_assert(offsetof(UVoxelBlendMeshesToolProperties, Operation) == 120, "Offset mismatch for UVoxelBlendMeshesToolProperties::Operation");
static_assert(offsetof(UVoxelBlendMeshesToolProperties, bVoxWrap) == 121, "Offset mismatch for UVoxelBlendMeshesToolProperties::bVoxWrap");
static_assert(offsetof(UVoxelBlendMeshesToolProperties, bRemoveInternalsAfterVoxWrap) == 122, "Offset mismatch for UVoxelBlendMeshesToolProperties::bRemoveInternalsAfterVoxWrap");
static_assert(offsetof(UVoxelBlendMeshesToolProperties, ThickenShells) == 128, "Offset mismatch for UVoxelBlendMeshesToolProperties::ThickenShells");

// /Script/MeshModelingToolsExp.VoxelMorphologyMeshesTool
// Kind: Class; super: BaseVoxelTool
class UVoxelMorphologyMeshesTool
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    void* MorphologyProperties; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVoxelMorphologyMeshesTool, MorphologyProperties) == 312, "Offset mismatch for UVoxelMorphologyMeshesTool::MorphologyProperties");

// /Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder
// Kind: Class; super: BaseCreateFromSelectedToolBuilder
class UVoxelMorphologyMeshesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UVoxelMorphologyMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Operation; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    double Distance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bVoxWrap; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveInternalsAfterVoxWrap; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x007A
    double ThickenShells; // 0x0080 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UVoxelMorphologyMeshesToolProperties, Operation) == 104, "Offset mismatch for UVoxelMorphologyMeshesToolProperties::Operation");
static_assert(offsetof(UVoxelMorphologyMeshesToolProperties, Distance) == 112, "Offset mismatch for UVoxelMorphologyMeshesToolProperties::Distance");
static_assert(offsetof(UVoxelMorphologyMeshesToolProperties, bVoxWrap) == 120, "Offset mismatch for UVoxelMorphologyMeshesToolProperties::bVoxWrap");
static_assert(offsetof(UVoxelMorphologyMeshesToolProperties, bRemoveInternalsAfterVoxWrap) == 121, "Offset mismatch for UVoxelMorphologyMeshesToolProperties::bRemoveInternalsAfterVoxWrap");
static_assert(offsetof(UVoxelMorphologyMeshesToolProperties, ThickenShells) == 128, "Offset mismatch for UVoxelMorphologyMeshesToolProperties::ThickenShells");

// /Script/MeshModelingToolsExp.VoxelSolidifyMeshesTool
// Kind: Class; super: BaseVoxelTool
class UVoxelSolidifyMeshesTool
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    void* SolidifyProperties; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVoxelSolidifyMeshesTool, SolidifyProperties) == 312, "Offset mismatch for UVoxelSolidifyMeshesTool::SolidifyProperties");

// /Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder
// Kind: Class; super: BaseCreateFromSelectedToolBuilder
class UVoxelSolidifyMeshesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UVoxelSolidifyMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    double WindingThreshold; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double ExtendBounds; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::int32_t SurfaceSearchSteps; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSolidAtBoundaries; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyThickenShells; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x007E
    double ThickenShells; // 0x0080 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UVoxelSolidifyMeshesToolProperties, WindingThreshold) == 104, "Offset mismatch for UVoxelSolidifyMeshesToolProperties::WindingThreshold");
static_assert(offsetof(UVoxelSolidifyMeshesToolProperties, ExtendBounds) == 112, "Offset mismatch for UVoxelSolidifyMeshesToolProperties::ExtendBounds");
static_assert(offsetof(UVoxelSolidifyMeshesToolProperties, SurfaceSearchSteps) == 120, "Offset mismatch for UVoxelSolidifyMeshesToolProperties::SurfaceSearchSteps");
static_assert(offsetof(UVoxelSolidifyMeshesToolProperties, bSolidAtBoundaries) == 124, "Offset mismatch for UVoxelSolidifyMeshesToolProperties::bSolidAtBoundaries");
static_assert(offsetof(UVoxelSolidifyMeshesToolProperties, bApplyThickenShells) == 125, "Offset mismatch for UVoxelSolidifyMeshesToolProperties::bApplyThickenShells");
static_assert(offsetof(UVoxelSolidifyMeshesToolProperties, ThickenShells) == 128, "Offset mismatch for UVoxelSolidifyMeshesToolProperties::ThickenShells");
