/**
 * decamp dumper generated SDK
 * Package: /Script/ModelingComponents
 */
#pragma once
#include "Basic.h"

// /Script/ModelingComponents.CreateActorParams
// Kind: ScriptStruct; super: none
struct FCreateActorParams
{
public:
    void* TargetWorld; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FString BaseName; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    void* TemplateActor; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* TemplateAsset; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCreateActorParams, TargetWorld) == 0, "Offset mismatch for FCreateActorParams::TargetWorld");
static_assert(offsetof(FCreateActorParams, BaseName) == 8, "Offset mismatch for FCreateActorParams::BaseName");
static_assert(offsetof(FCreateActorParams, Transform) == 32, "Offset mismatch for FCreateActorParams::Transform");
static_assert(offsetof(FCreateActorParams, TemplateActor) == 128, "Offset mismatch for FCreateActorParams::TemplateActor");
static_assert(offsetof(FCreateActorParams, TemplateAsset) == 136, "Offset mismatch for FCreateActorParams::TemplateAsset");

// /Script/ModelingComponents.CreateActorResult
// Kind: ScriptStruct; super: none
struct FCreateActorResult
{
public:
    std::uint8_t ResultCode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* NewActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCreateActorResult, ResultCode) == 0, "Offset mismatch for FCreateActorResult::ResultCode");
static_assert(offsetof(FCreateActorResult, NewActor) == 8, "Offset mismatch for FCreateActorResult::NewActor");

// /Script/ModelingComponents.CreateComponentParams
// Kind: ScriptStruct; super: none
struct FCreateComponentParams
{
public:
    void* HostActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ComponentClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    FString BaseName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSetAsRoot; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransact; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCreateComponentParams, HostActor) == 0, "Offset mismatch for FCreateComponentParams::HostActor");
static_assert(offsetof(FCreateComponentParams, ComponentClass) == 8, "Offset mismatch for FCreateComponentParams::ComponentClass");
static_assert(offsetof(FCreateComponentParams, BaseName) == 16, "Offset mismatch for FCreateComponentParams::BaseName");
static_assert(offsetof(FCreateComponentParams, bSetAsRoot) == 32, "Offset mismatch for FCreateComponentParams::bSetAsRoot");
static_assert(offsetof(FCreateComponentParams, bTransact) == 33, "Offset mismatch for FCreateComponentParams::bTransact");

// /Script/ModelingComponents.CreateComponentResult
// Kind: ScriptStruct; super: none
struct FCreateComponentResult
{
public:
    std::uint8_t ResultCode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* NewComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCreateComponentResult, ResultCode) == 0, "Offset mismatch for FCreateComponentResult::ResultCode");
static_assert(offsetof(FCreateComponentResult, NewComponent) == 8, "Offset mismatch for FCreateComponentResult::NewComponent");

// /Script/ModelingComponents.CreateMaterialObjectParams
// Kind: ScriptStruct; super: none
struct FCreateMaterialObjectParams
{
public:
    void* TargetWorld; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* StoreRelativeToObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FString BaseName; // 0x0010 (Size: 0x10, Type: StrProperty)
    void* MaterialToDuplicate; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCreateMaterialObjectParams, TargetWorld) == 0, "Offset mismatch for FCreateMaterialObjectParams::TargetWorld");
static_assert(offsetof(FCreateMaterialObjectParams, StoreRelativeToObject) == 8, "Offset mismatch for FCreateMaterialObjectParams::StoreRelativeToObject");
static_assert(offsetof(FCreateMaterialObjectParams, BaseName) == 16, "Offset mismatch for FCreateMaterialObjectParams::BaseName");
static_assert(offsetof(FCreateMaterialObjectParams, MaterialToDuplicate) == 32, "Offset mismatch for FCreateMaterialObjectParams::MaterialToDuplicate");

// /Script/ModelingComponents.CreateMaterialObjectResult
// Kind: ScriptStruct; super: none
struct FCreateMaterialObjectResult
{
public:
    std::uint8_t ResultCode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* NewAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCreateMaterialObjectResult, ResultCode) == 0, "Offset mismatch for FCreateMaterialObjectResult::ResultCode");
static_assert(offsetof(FCreateMaterialObjectResult, NewAsset) == 8, "Offset mismatch for FCreateMaterialObjectResult::NewAsset");

// /Script/ModelingComponents.CreateMeshObjectParams
// Kind: ScriptStruct; super: none
struct FCreateMeshObjectParams
{
public:
    void* SourceComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TypeHint; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    void* TypeHintClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::int32_t TypeHintExtended; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    void* TargetWorld; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0028
    std::uint8_t Transform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    FString BaseName; // 0x0090 (Size: 0x10, Type: StrProperty)
    TArray<void*> Materials; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetMaterials; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableCollision; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CollisionMode; // 0x00C1 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x5E]; // 0x00C2
    std::uint8_t bEnableRaytracingSupport; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateLightmapUVs; // 0x0121 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRecomputeNormals; // 0x0122 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRecomputeTangents; // 0x0123 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableNanite; // 0x0124 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0125
    float NaniteProxyTrianglePercent; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x012C
    std::uint8_t NaniteSettings[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCreateMeshObjectParams, SourceComponent) == 0, "Offset mismatch for FCreateMeshObjectParams::SourceComponent");
static_assert(offsetof(FCreateMeshObjectParams, TypeHint) == 8, "Offset mismatch for FCreateMeshObjectParams::TypeHint");
static_assert(offsetof(FCreateMeshObjectParams, TypeHintClass) == 16, "Offset mismatch for FCreateMeshObjectParams::TypeHintClass");
static_assert(offsetof(FCreateMeshObjectParams, TypeHintExtended) == 24, "Offset mismatch for FCreateMeshObjectParams::TypeHintExtended");
static_assert(offsetof(FCreateMeshObjectParams, TargetWorld) == 32, "Offset mismatch for FCreateMeshObjectParams::TargetWorld");
static_assert(offsetof(FCreateMeshObjectParams, Transform) == 48, "Offset mismatch for FCreateMeshObjectParams::Transform");
static_assert(offsetof(FCreateMeshObjectParams, BaseName) == 144, "Offset mismatch for FCreateMeshObjectParams::BaseName");
static_assert(offsetof(FCreateMeshObjectParams, Materials) == 160, "Offset mismatch for FCreateMeshObjectParams::Materials");
static_assert(offsetof(FCreateMeshObjectParams, AssetMaterials) == 176, "Offset mismatch for FCreateMeshObjectParams::AssetMaterials");
static_assert(offsetof(FCreateMeshObjectParams, bEnableCollision) == 192, "Offset mismatch for FCreateMeshObjectParams::bEnableCollision");
static_assert(offsetof(FCreateMeshObjectParams, CollisionMode) == 193, "Offset mismatch for FCreateMeshObjectParams::CollisionMode");
static_assert(offsetof(FCreateMeshObjectParams, bEnableRaytracingSupport) == 288, "Offset mismatch for FCreateMeshObjectParams::bEnableRaytracingSupport");
static_assert(offsetof(FCreateMeshObjectParams, bGenerateLightmapUVs) == 289, "Offset mismatch for FCreateMeshObjectParams::bGenerateLightmapUVs");
static_assert(offsetof(FCreateMeshObjectParams, bEnableRecomputeNormals) == 290, "Offset mismatch for FCreateMeshObjectParams::bEnableRecomputeNormals");
static_assert(offsetof(FCreateMeshObjectParams, bEnableRecomputeTangents) == 291, "Offset mismatch for FCreateMeshObjectParams::bEnableRecomputeTangents");
static_assert(offsetof(FCreateMeshObjectParams, bEnableNanite) == 292, "Offset mismatch for FCreateMeshObjectParams::bEnableNanite");
static_assert(offsetof(FCreateMeshObjectParams, NaniteProxyTrianglePercent) == 296, "Offset mismatch for FCreateMeshObjectParams::NaniteProxyTrianglePercent");
static_assert(offsetof(FCreateMeshObjectParams, NaniteSettings) == 304, "Offset mismatch for FCreateMeshObjectParams::NaniteSettings");

// /Script/ModelingComponents.CreateMeshObjectResult
// Kind: ScriptStruct; super: none
struct FCreateMeshObjectResult
{
public:
    std::uint8_t ResultCode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* NewActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* NewComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* NewAsset; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCreateMeshObjectResult, ResultCode) == 0, "Offset mismatch for FCreateMeshObjectResult::ResultCode");
static_assert(offsetof(FCreateMeshObjectResult, NewActor) == 8, "Offset mismatch for FCreateMeshObjectResult::NewActor");
static_assert(offsetof(FCreateMeshObjectResult, NewComponent) == 16, "Offset mismatch for FCreateMeshObjectResult::NewComponent");
static_assert(offsetof(FCreateMeshObjectResult, NewAsset) == 24, "Offset mismatch for FCreateMeshObjectResult::NewAsset");

// /Script/ModelingComponents.CreateTextureObjectParams
// Kind: ScriptStruct; super: none
struct FCreateTextureObjectParams
{
public:
    std::int32_t TypeHintExtended; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* TargetWorld; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* StoreRelativeToObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    FString BaseName; // 0x0018 (Size: 0x10, Type: StrProperty)
    void* GeneratedTransientTexture; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FString FullAssetPath; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCreateTextureObjectParams, TypeHintExtended) == 0, "Offset mismatch for FCreateTextureObjectParams::TypeHintExtended");
static_assert(offsetof(FCreateTextureObjectParams, TargetWorld) == 8, "Offset mismatch for FCreateTextureObjectParams::TargetWorld");
static_assert(offsetof(FCreateTextureObjectParams, StoreRelativeToObject) == 16, "Offset mismatch for FCreateTextureObjectParams::StoreRelativeToObject");
static_assert(offsetof(FCreateTextureObjectParams, BaseName) == 24, "Offset mismatch for FCreateTextureObjectParams::BaseName");
static_assert(offsetof(FCreateTextureObjectParams, GeneratedTransientTexture) == 40, "Offset mismatch for FCreateTextureObjectParams::GeneratedTransientTexture");
static_assert(offsetof(FCreateTextureObjectParams, FullAssetPath) == 48, "Offset mismatch for FCreateTextureObjectParams::FullAssetPath");

// /Script/ModelingComponents.CreateTextureObjectResult
// Kind: ScriptStruct; super: none
struct FCreateTextureObjectResult
{
public:
    std::uint8_t ResultCode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* NewAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCreateTextureObjectResult, ResultCode) == 0, "Offset mismatch for FCreateTextureObjectResult::ResultCode");
static_assert(offsetof(FCreateTextureObjectResult, NewAsset) == 8, "Offset mismatch for FCreateTextureObjectResult::NewAsset");

// /Script/ModelingComponents.MeshElementSelectionParams
// Kind: ScriptStruct; super: none
struct FMeshElementSelectionParams
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* SelectionFillColor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMeshElementSelectionParams, SelectionFillColor) == 64, "Offset mismatch for FMeshElementSelectionParams::SelectionFillColor");

// /Script/ModelingComponents.ModelingToolsAxisFilter
// Kind: ScriptStruct; super: none
struct FModelingToolsAxisFilter
{
public:
    std::uint8_t bAxisX; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAxisY; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAxisZ; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FModelingToolsAxisFilter, bAxisX) == 0, "Offset mismatch for FModelingToolsAxisFilter::bAxisX");
static_assert(offsetof(FModelingToolsAxisFilter, bAxisY) == 1, "Offset mismatch for FModelingToolsAxisFilter::bAxisY");
static_assert(offsetof(FModelingToolsAxisFilter, bAxisZ) == 2, "Offset mismatch for FModelingToolsAxisFilter::bAxisZ");

// /Script/ModelingComponents.ModelingToolsColorChannelFilter
// Kind: ScriptStruct; super: none
struct FModelingToolsColorChannelFilter
{
public:
    std::uint8_t bRed; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGreen; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlue; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlpha; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FModelingToolsColorChannelFilter, bRed) == 0, "Offset mismatch for FModelingToolsColorChannelFilter::bRed");
static_assert(offsetof(FModelingToolsColorChannelFilter, bGreen) == 1, "Offset mismatch for FModelingToolsColorChannelFilter::bGreen");
static_assert(offsetof(FModelingToolsColorChannelFilter, bBlue) == 2, "Offset mismatch for FModelingToolsColorChannelFilter::bBlue");
static_assert(offsetof(FModelingToolsColorChannelFilter, bAlpha) == 3, "Offset mismatch for FModelingToolsColorChannelFilter::bAlpha");

// /Script/ModelingComponents.RenderableTriangle
// Kind: ScriptStruct; super: none
struct FRenderableTriangle
{
public:
    void* Material; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Vertex0[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t Vertex1[0x48]; // 0x0050 (Size: 0x48, Type: StructProperty)
    std::uint8_t Vertex2[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRenderableTriangle, Material) == 0, "Offset mismatch for FRenderableTriangle::Material");
static_assert(offsetof(FRenderableTriangle, Vertex0) == 8, "Offset mismatch for FRenderableTriangle::Vertex0");
static_assert(offsetof(FRenderableTriangle, Vertex1) == 80, "Offset mismatch for FRenderableTriangle::Vertex1");
static_assert(offsetof(FRenderableTriangle, Vertex2) == 152, "Offset mismatch for FRenderableTriangle::Vertex2");

// /Script/ModelingComponents.RenderableTriangleVertex
// Kind: ScriptStruct; super: none
struct FRenderableTriangleVertex
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t UV[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Color[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRenderableTriangleVertex, Position) == 0, "Offset mismatch for FRenderableTriangleVertex::Position");
static_assert(offsetof(FRenderableTriangleVertex, UV) == 24, "Offset mismatch for FRenderableTriangleVertex::UV");
static_assert(offsetof(FRenderableTriangleVertex, Normal) == 40, "Offset mismatch for FRenderableTriangleVertex::Normal");
static_assert(offsetof(FRenderableTriangleVertex, Color) == 64, "Offset mismatch for FRenderableTriangleVertex::Color");

// /Script/ModelingComponents.BaseCreateFromSelectedCollisionProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBaseCreateFromSelectedCollisionProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bTransferCollision; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBaseCreateFromSelectedCollisionProperties, bTransferCollision) == 104, "Offset mismatch for UBaseCreateFromSelectedCollisionProperties::bTransferCollision");

// /Script/ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// Kind: Class; super: OnAcceptHandleSourcesProperties
class UBaseCreateFromSelectedHandleSourceProperties
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t OutputWriteTo; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    FString OutputNewName; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString OutputExistingName; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputWriteTo) == 112, "Offset mismatch for UBaseCreateFromSelectedHandleSourceProperties::OutputWriteTo");
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputNewName) == 120, "Offset mismatch for UBaseCreateFromSelectedHandleSourceProperties::OutputNewName");
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputExistingName) == 136, "Offset mismatch for UBaseCreateFromSelectedHandleSourceProperties::OutputExistingName");

// /Script/ModelingComponents.BaseCreateFromSelectedTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UBaseCreateFromSelectedTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* TransformProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* OutputTypeProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* HandleSourcesProperties; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* CollisionProperties; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TransformProxies; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TransformGizmos; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBaseCreateFromSelectedTool, TransformProperties) == 216, "Offset mismatch for UBaseCreateFromSelectedTool::TransformProperties");
static_assert(offsetof(UBaseCreateFromSelectedTool, OutputTypeProperties) == 224, "Offset mismatch for UBaseCreateFromSelectedTool::OutputTypeProperties");
static_assert(offsetof(UBaseCreateFromSelectedTool, HandleSourcesProperties) == 232, "Offset mismatch for UBaseCreateFromSelectedTool::HandleSourcesProperties");
static_assert(offsetof(UBaseCreateFromSelectedTool, CollisionProperties) == 240, "Offset mismatch for UBaseCreateFromSelectedTool::CollisionProperties");
static_assert(offsetof(UBaseCreateFromSelectedTool, Preview) == 248, "Offset mismatch for UBaseCreateFromSelectedTool::Preview");
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformProxies) == 256, "Offset mismatch for UBaseCreateFromSelectedTool::TransformProxies");
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformGizmos) == 272, "Offset mismatch for UBaseCreateFromSelectedTool::TransformGizmos");

// /Script/ModelingComponents.BaseCreateFromSelectedToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UBaseCreateFromSelectedToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.BaseMeshProcessingTool
// Kind: Class; super: SingleTargetWithSelectionTool
class UBaseMeshProcessingTool
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* Preview; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBaseMeshProcessingTool, Preview) == 288, "Offset mismatch for UBaseMeshProcessingTool::Preview");

// /Script/ModelingComponents.BaseMeshProcessingToolBuilder
// Kind: Class; super: SingleTargetWithSelectionToolBuilder
class UBaseMeshProcessingToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.BaseVoxelTool
// Kind: Class; super: BaseCreateFromSelectedTool
class UBaseVoxelTool
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* VoxProperties; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBaseVoxelTool, VoxProperties) == 288, "Offset mismatch for UBaseVoxelTool::VoxProperties");

// /Script/ModelingComponents.BoundarySelectionMechanic
// Kind: Class; super: MeshTopologySelectionMechanic
class UBoundarySelectionMechanic
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Properties; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x50]; // 0x0080
    void* HoverBehavior; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ClickOrDragBehavior; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MarqueeMechanic; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PolyLassoMechanic; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MarqueeSelectionUpdateType; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00F1
    std::uint8_t SelectionDragToolUpdateType; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x27B]; // 0x00F5
    void* PreviewGeometryActor; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* DrawnTriangleSetComponent; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0380
    void* HighlightedFaceMaterial; // 0x0390 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBoundarySelectionMechanic, Properties) == 120, "Offset mismatch for UBoundarySelectionMechanic::Properties");
static_assert(offsetof(UBoundarySelectionMechanic, HoverBehavior) == 208, "Offset mismatch for UBoundarySelectionMechanic::HoverBehavior");
static_assert(offsetof(UBoundarySelectionMechanic, ClickOrDragBehavior) == 216, "Offset mismatch for UBoundarySelectionMechanic::ClickOrDragBehavior");
static_assert(offsetof(UBoundarySelectionMechanic, MarqueeMechanic) == 224, "Offset mismatch for UBoundarySelectionMechanic::MarqueeMechanic");
static_assert(offsetof(UBoundarySelectionMechanic, PolyLassoMechanic) == 232, "Offset mismatch for UBoundarySelectionMechanic::PolyLassoMechanic");
static_assert(offsetof(UBoundarySelectionMechanic, MarqueeSelectionUpdateType) == 240, "Offset mismatch for UBoundarySelectionMechanic::MarqueeSelectionUpdateType");
static_assert(offsetof(UBoundarySelectionMechanic, SelectionDragToolUpdateType) == 244, "Offset mismatch for UBoundarySelectionMechanic::SelectionDragToolUpdateType");
static_assert(offsetof(UBoundarySelectionMechanic, PreviewGeometryActor) == 880, "Offset mismatch for UBoundarySelectionMechanic::PreviewGeometryActor");
static_assert(offsetof(UBoundarySelectionMechanic, DrawnTriangleSetComponent) == 888, "Offset mismatch for UBoundarySelectionMechanic::DrawnTriangleSetComponent");
static_assert(offsetof(UBoundarySelectionMechanic, HighlightedFaceMaterial) == 912, "Offset mismatch for UBoundarySelectionMechanic::HighlightedFaceMaterial");

// /Script/ModelingComponents.CollectSurfacePathMechanic
// Kind: Class; super: InteractionMechanic
class UCollectSurfacePathMechanic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.CollisionPrimitivesMechanic
// Kind: Class; super: InteractionMechanic
class UCollisionPrimitivesMechanic
{
public:
    std::uint8_t Pad_0000[0x1D0]; // 0x0000
    void* PreviewGeometry; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    void* DrawnPrimitiveEdges; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xB0]; // 0x01E0
    void* TranslateTransformProxy; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* SphereTransformProxy; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* BoxTransformProxy; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* CapsuleTransformProxy; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* FullTransformProxy; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* CurrentActiveProxy; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* TranslateTransformGizmo; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* SphereTransformGizmo; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* BoxTransformGizmo; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    void* CapsuleTransformGizmo; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    void* FullTransformGizmo; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    void* BoxIntervalGizmo; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    void* BoxXIntervalSource; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* BoxYIntervalSource; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    void* BoxZIntervalSource; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* CapsuleIntervalGizmo; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* CapsuleRadiusIntervalSource; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* CapsuleLengthIntervalSource; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x48]; // 0x0320
    void* MarqueeMechanic; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCollisionPrimitivesMechanic, PreviewGeometry) == 464, "Offset mismatch for UCollisionPrimitivesMechanic::PreviewGeometry");
static_assert(offsetof(UCollisionPrimitivesMechanic, DrawnPrimitiveEdges) == 472, "Offset mismatch for UCollisionPrimitivesMechanic::DrawnPrimitiveEdges");
static_assert(offsetof(UCollisionPrimitivesMechanic, TranslateTransformProxy) == 656, "Offset mismatch for UCollisionPrimitivesMechanic::TranslateTransformProxy");
static_assert(offsetof(UCollisionPrimitivesMechanic, SphereTransformProxy) == 664, "Offset mismatch for UCollisionPrimitivesMechanic::SphereTransformProxy");
static_assert(offsetof(UCollisionPrimitivesMechanic, BoxTransformProxy) == 672, "Offset mismatch for UCollisionPrimitivesMechanic::BoxTransformProxy");
static_assert(offsetof(UCollisionPrimitivesMechanic, CapsuleTransformProxy) == 680, "Offset mismatch for UCollisionPrimitivesMechanic::CapsuleTransformProxy");
static_assert(offsetof(UCollisionPrimitivesMechanic, FullTransformProxy) == 688, "Offset mismatch for UCollisionPrimitivesMechanic::FullTransformProxy");
static_assert(offsetof(UCollisionPrimitivesMechanic, CurrentActiveProxy) == 696, "Offset mismatch for UCollisionPrimitivesMechanic::CurrentActiveProxy");
static_assert(offsetof(UCollisionPrimitivesMechanic, TranslateTransformGizmo) == 704, "Offset mismatch for UCollisionPrimitivesMechanic::TranslateTransformGizmo");
static_assert(offsetof(UCollisionPrimitivesMechanic, SphereTransformGizmo) == 712, "Offset mismatch for UCollisionPrimitivesMechanic::SphereTransformGizmo");
static_assert(offsetof(UCollisionPrimitivesMechanic, BoxTransformGizmo) == 720, "Offset mismatch for UCollisionPrimitivesMechanic::BoxTransformGizmo");
static_assert(offsetof(UCollisionPrimitivesMechanic, CapsuleTransformGizmo) == 728, "Offset mismatch for UCollisionPrimitivesMechanic::CapsuleTransformGizmo");
static_assert(offsetof(UCollisionPrimitivesMechanic, FullTransformGizmo) == 736, "Offset mismatch for UCollisionPrimitivesMechanic::FullTransformGizmo");
static_assert(offsetof(UCollisionPrimitivesMechanic, BoxIntervalGizmo) == 744, "Offset mismatch for UCollisionPrimitivesMechanic::BoxIntervalGizmo");
static_assert(offsetof(UCollisionPrimitivesMechanic, BoxXIntervalSource) == 752, "Offset mismatch for UCollisionPrimitivesMechanic::BoxXIntervalSource");
static_assert(offsetof(UCollisionPrimitivesMechanic, BoxYIntervalSource) == 760, "Offset mismatch for UCollisionPrimitivesMechanic::BoxYIntervalSource");
static_assert(offsetof(UCollisionPrimitivesMechanic, BoxZIntervalSource) == 768, "Offset mismatch for UCollisionPrimitivesMechanic::BoxZIntervalSource");
static_assert(offsetof(UCollisionPrimitivesMechanic, CapsuleIntervalGizmo) == 776, "Offset mismatch for UCollisionPrimitivesMechanic::CapsuleIntervalGizmo");
static_assert(offsetof(UCollisionPrimitivesMechanic, CapsuleRadiusIntervalSource) == 784, "Offset mismatch for UCollisionPrimitivesMechanic::CapsuleRadiusIntervalSource");
static_assert(offsetof(UCollisionPrimitivesMechanic, CapsuleLengthIntervalSource) == 792, "Offset mismatch for UCollisionPrimitivesMechanic::CapsuleLengthIntervalSource");
static_assert(offsetof(UCollisionPrimitivesMechanic, MarqueeMechanic) == 872, "Offset mismatch for UCollisionPrimitivesMechanic::MarqueeMechanic");

// /Script/ModelingComponents.ConstructionPlaneMechanic
// Kind: Class; super: InteractionMechanic
class UConstructionPlaneMechanic
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    void* PlaneTransformGizmo; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* PlaneTransformProxy; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C8
    void* ClickToSetPlaneBehavior; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* MiddleClickToSetGizmoBehavior; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConstructionPlaneMechanic, PlaneTransformGizmo) == 184, "Offset mismatch for UConstructionPlaneMechanic::PlaneTransformGizmo");
static_assert(offsetof(UConstructionPlaneMechanic, PlaneTransformProxy) == 192, "Offset mismatch for UConstructionPlaneMechanic::PlaneTransformProxy");
static_assert(offsetof(UConstructionPlaneMechanic, ClickToSetPlaneBehavior) == 208, "Offset mismatch for UConstructionPlaneMechanic::ClickToSetPlaneBehavior");
static_assert(offsetof(UConstructionPlaneMechanic, MiddleClickToSetGizmoBehavior) == 216, "Offset mismatch for UConstructionPlaneMechanic::MiddleClickToSetGizmoBehavior");

// /Script/ModelingComponents.CreateMeshObjectTypeProperties
// Kind: Class; super: InteractiveToolPropertySet
class UCreateMeshObjectTypeProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString OutputType; // 0x0068 (Size: 0x10, Type: StrProperty)
    void* VolumeType; // 0x0078 (Size: 0x8, Type: ClassProperty)
    TArray<void*> OutputTypeNamesList; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShowVolumeList; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCreateMeshObjectTypeProperties, OutputType) == 104, "Offset mismatch for UCreateMeshObjectTypeProperties::OutputType");
static_assert(offsetof(UCreateMeshObjectTypeProperties, VolumeType) == 120, "Offset mismatch for UCreateMeshObjectTypeProperties::VolumeType");
static_assert(offsetof(UCreateMeshObjectTypeProperties, OutputTypeNamesList) == 128, "Offset mismatch for UCreateMeshObjectTypeProperties::OutputTypeNamesList");
static_assert(offsetof(UCreateMeshObjectTypeProperties, bShowVolumeList) == 144, "Offset mismatch for UCreateMeshObjectTypeProperties::bShowVolumeList");

// /Script/ModelingComponents.CurveControlPointsMechanic
// Kind: Class; super: InteractionMechanic
class UCurveControlPointsMechanic
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* ClickBehavior; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* HoverBehavior; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x358]; // 0x0050
    void* PreviewGeometryActor; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* DrawnControlPoints; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* DrawnControlSegments; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewPoint; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewSegment; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x78]; // 0x03D0
    void* PointTransformProxy; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    void* PointTransformGizmo; // 0x0450 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCurveControlPointsMechanic, ClickBehavior) == 64, "Offset mismatch for UCurveControlPointsMechanic::ClickBehavior");
static_assert(offsetof(UCurveControlPointsMechanic, HoverBehavior) == 72, "Offset mismatch for UCurveControlPointsMechanic::HoverBehavior");
static_assert(offsetof(UCurveControlPointsMechanic, PreviewGeometryActor) == 936, "Offset mismatch for UCurveControlPointsMechanic::PreviewGeometryActor");
static_assert(offsetof(UCurveControlPointsMechanic, DrawnControlPoints) == 944, "Offset mismatch for UCurveControlPointsMechanic::DrawnControlPoints");
static_assert(offsetof(UCurveControlPointsMechanic, DrawnControlSegments) == 952, "Offset mismatch for UCurveControlPointsMechanic::DrawnControlSegments");
static_assert(offsetof(UCurveControlPointsMechanic, PreviewPoint) == 960, "Offset mismatch for UCurveControlPointsMechanic::PreviewPoint");
static_assert(offsetof(UCurveControlPointsMechanic, PreviewSegment) == 968, "Offset mismatch for UCurveControlPointsMechanic::PreviewSegment");
static_assert(offsetof(UCurveControlPointsMechanic, PointTransformProxy) == 1096, "Offset mismatch for UCurveControlPointsMechanic::PointTransformProxy");
static_assert(offsetof(UCurveControlPointsMechanic, PointTransformGizmo) == 1104, "Offset mismatch for UCurveControlPointsMechanic::PointTransformGizmo");

// /Script/ModelingComponents.DragAlignmentInteraction
// Kind: Class; super: Object
class UDragAlignmentInteraction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.DragAlignmentMechanic
// Kind: Class; super: InteractionMechanic
class UDragAlignmentMechanic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.DynamicMeshCommitter
// Kind: Class; super: Interface
class UDynamicMeshCommitter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.DynamicMeshProvider
// Kind: Class; super: Interface
class UDynamicMeshProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.DynamicMeshReplacementChangeTarget
// Kind: Class; super: Object
class UDynamicMeshReplacementChangeTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.GeometrySelectionEditCommand
// Kind: Class; super: InteractiveCommand
class UGeometrySelectionEditCommand
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.GeometrySelectionEditCommandArguments
// Kind: Class; super: InteractiveCommandArguments
class UGeometrySelectionEditCommandArguments
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.GeometrySelectionEditCommandResult
// Kind: Class; super: InteractiveCommandResult
class UGeometrySelectionEditCommandResult
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.GeometrySelectionManager
// Kind: Class; super: Object
class UGeometrySelectionManager
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SelectionArguments; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0058
    void* ToolsContext; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x58]; // 0x0070
    void* PreviewGeometry; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0xE8]; // 0x00D0
    std::uint8_t UnselectedParams[0x48]; // 0x01B8 (Size: 0x48, Type: StructProperty)
    std::uint8_t HoverOverSelectedParams[0x48]; // 0x0200 (Size: 0x48, Type: StructProperty)
    std::uint8_t HoverOverUnselectedParams[0x48]; // 0x0248 (Size: 0x48, Type: StructProperty)
    std::uint8_t SelectedParams[0x48]; // 0x0290 (Size: 0x48, Type: StructProperty)
    std::uint8_t SoftSelectedParams[0x1]; // 0x02D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGeometrySelectionManager, SelectionArguments) == 80, "Offset mismatch for UGeometrySelectionManager::SelectionArguments");
static_assert(offsetof(UGeometrySelectionManager, ToolsContext) == 104, "Offset mismatch for UGeometrySelectionManager::ToolsContext");
static_assert(offsetof(UGeometrySelectionManager, PreviewGeometry) == 200, "Offset mismatch for UGeometrySelectionManager::PreviewGeometry");
static_assert(offsetof(UGeometrySelectionManager, UnselectedParams) == 440, "Offset mismatch for UGeometrySelectionManager::UnselectedParams");
static_assert(offsetof(UGeometrySelectionManager, HoverOverSelectedParams) == 512, "Offset mismatch for UGeometrySelectionManager::HoverOverSelectedParams");
static_assert(offsetof(UGeometrySelectionManager, HoverOverUnselectedParams) == 584, "Offset mismatch for UGeometrySelectionManager::HoverOverUnselectedParams");
static_assert(offsetof(UGeometrySelectionManager, SelectedParams) == 656, "Offset mismatch for UGeometrySelectionManager::SelectedParams");
static_assert(offsetof(UGeometrySelectionManager, SoftSelectedParams) == 728, "Offset mismatch for UGeometrySelectionManager::SoftSelectedParams");

// /Script/ModelingComponents.GeometrySelectionVisualizationProperties
// Kind: Class; super: InteractiveToolPropertySet
class UGeometrySelectionVisualizationProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bEnableShowTriangleROIBorder; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableShowEdgeSelectionVertices; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SelectionElementType; // 0x006A (Size: 0x1, Type: EnumProperty)
    std::uint8_t SelectionTopologyType; // 0x006B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowSelection; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowTriangleROIBorder; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowHidden; // 0x006E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowEdgeSelectionVertices; // 0x006F (Size: 0x1, Type: BoolProperty)
    float LineThickness; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float PointSize; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float DepthBias; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FaceColor[0x4]; // 0x007C (Size: 0x4, Type: StructProperty)
    std::uint8_t LineColor[0x4]; // 0x0080 (Size: 0x4, Type: StructProperty)
    std::uint8_t PointColor[0x4]; // 0x0084 (Size: 0x4, Type: StructProperty)
    std::uint8_t TriangleROIBorderColor[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    void* TriangleMaterial; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* LineMaterial; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* PointMaterial; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* TriangleMaterialShowingHidden; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* LineMaterialShowingHidden; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* PointMaterialShowingHidden; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGeometrySelectionVisualizationProperties, bEnableShowTriangleROIBorder) == 104, "Offset mismatch for UGeometrySelectionVisualizationProperties::bEnableShowTriangleROIBorder");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, bEnableShowEdgeSelectionVertices) == 105, "Offset mismatch for UGeometrySelectionVisualizationProperties::bEnableShowEdgeSelectionVertices");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, SelectionElementType) == 106, "Offset mismatch for UGeometrySelectionVisualizationProperties::SelectionElementType");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, SelectionTopologyType) == 107, "Offset mismatch for UGeometrySelectionVisualizationProperties::SelectionTopologyType");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, bShowSelection) == 108, "Offset mismatch for UGeometrySelectionVisualizationProperties::bShowSelection");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, bShowTriangleROIBorder) == 109, "Offset mismatch for UGeometrySelectionVisualizationProperties::bShowTriangleROIBorder");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, bShowHidden) == 110, "Offset mismatch for UGeometrySelectionVisualizationProperties::bShowHidden");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, bShowEdgeSelectionVertices) == 111, "Offset mismatch for UGeometrySelectionVisualizationProperties::bShowEdgeSelectionVertices");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, LineThickness) == 112, "Offset mismatch for UGeometrySelectionVisualizationProperties::LineThickness");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, PointSize) == 116, "Offset mismatch for UGeometrySelectionVisualizationProperties::PointSize");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, DepthBias) == 120, "Offset mismatch for UGeometrySelectionVisualizationProperties::DepthBias");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, FaceColor) == 124, "Offset mismatch for UGeometrySelectionVisualizationProperties::FaceColor");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, LineColor) == 128, "Offset mismatch for UGeometrySelectionVisualizationProperties::LineColor");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, PointColor) == 132, "Offset mismatch for UGeometrySelectionVisualizationProperties::PointColor");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, TriangleROIBorderColor) == 136, "Offset mismatch for UGeometrySelectionVisualizationProperties::TriangleROIBorderColor");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, TriangleMaterial) == 144, "Offset mismatch for UGeometrySelectionVisualizationProperties::TriangleMaterial");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, LineMaterial) == 152, "Offset mismatch for UGeometrySelectionVisualizationProperties::LineMaterial");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, PointMaterial) == 160, "Offset mismatch for UGeometrySelectionVisualizationProperties::PointMaterial");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, TriangleMaterialShowingHidden) == 168, "Offset mismatch for UGeometrySelectionVisualizationProperties::TriangleMaterialShowingHidden");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, LineMaterialShowingHidden) == 176, "Offset mismatch for UGeometrySelectionVisualizationProperties::LineMaterialShowingHidden");
static_assert(offsetof(UGeometrySelectionVisualizationProperties, PointMaterialShowingHidden) == 184, "Offset mismatch for UGeometrySelectionVisualizationProperties::PointMaterialShowingHidden");

// /Script/ModelingComponents.InteractiveToolActivity
// Kind: Class; super: InteractionMechanic
class UInteractiveToolActivity
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.LatticeControlPointsMechanic
// Kind: Class; super: InteractionMechanic
class ULatticeControlPointsMechanic
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    void* PreviewGeometryActor; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* DrawnControlPoints; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* DrawnLatticeEdges; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x88]; // 0x01C8
    void* PointTransformProxy; // 0x0250 (Size: 0x8, Type: ObjectProperty)
    void* PointTransformGizmo; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x48]; // 0x0260
    void* MarqueeMechanic; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULatticeControlPointsMechanic, PreviewGeometryActor) == 432, "Offset mismatch for ULatticeControlPointsMechanic::PreviewGeometryActor");
static_assert(offsetof(ULatticeControlPointsMechanic, DrawnControlPoints) == 440, "Offset mismatch for ULatticeControlPointsMechanic::DrawnControlPoints");
static_assert(offsetof(ULatticeControlPointsMechanic, DrawnLatticeEdges) == 448, "Offset mismatch for ULatticeControlPointsMechanic::DrawnLatticeEdges");
static_assert(offsetof(ULatticeControlPointsMechanic, PointTransformProxy) == 592, "Offset mismatch for ULatticeControlPointsMechanic::PointTransformProxy");
static_assert(offsetof(ULatticeControlPointsMechanic, PointTransformGizmo) == 600, "Offset mismatch for ULatticeControlPointsMechanic::PointTransformGizmo");
static_assert(offsetof(ULatticeControlPointsMechanic, MarqueeMechanic) == 680, "Offset mismatch for ULatticeControlPointsMechanic::MarqueeMechanic");

// /Script/ModelingComponents.LatticeStateStorage
// Kind: Class; super: Interface
class ULatticeStateStorage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.LineSetComponent
// Kind: Class; super: MeshComponent
class ULineSetComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    void* LineMaterial; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Bounds[0x38]; // 0x05D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bBoundsDirty; // 0x0610 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULineSetComponent, LineMaterial) == 1488, "Offset mismatch for ULineSetComponent::LineMaterial");
static_assert(offsetof(ULineSetComponent, Bounds) == 1496, "Offset mismatch for ULineSetComponent::Bounds");
static_assert(offsetof(ULineSetComponent, bBoundsDirty) == 1552, "Offset mismatch for ULineSetComponent::bBoundsDirty");

// /Script/ModelingComponents.MeshElementsVisualizer
// Kind: Class; super: PreviewGeometry
class UMeshElementsVisualizer
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* Settings; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* WireframeComponent; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshElementsVisualizer, Settings) == 96, "Offset mismatch for UMeshElementsVisualizer::Settings");
static_assert(offsetof(UMeshElementsVisualizer, WireframeComponent) == 104, "Offset mismatch for UMeshElementsVisualizer::WireframeComponent");

// /Script/ModelingComponents.MeshElementsVisualizerProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshElementsVisualizerProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bVisible; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowWireframe; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowBorders; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowUVSeams; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowNormalSeams; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowTangentSeams; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowColorSeams; // 0x006E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGroupBoundaries; // 0x006F (Size: 0x1, Type: BoolProperty)
    float ThicknessScale; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WireframeColor[0x4]; // 0x0074 (Size: 0x4, Type: StructProperty)
    std::uint8_t BoundaryEdgeColor[0x4]; // 0x0078 (Size: 0x4, Type: StructProperty)
    std::uint8_t UVSeamColor[0x4]; // 0x007C (Size: 0x4, Type: StructProperty)
    std::uint8_t NormalSeamColor[0x4]; // 0x0080 (Size: 0x4, Type: StructProperty)
    std::uint8_t TangentSeamColor[0x4]; // 0x0084 (Size: 0x4, Type: StructProperty)
    std::uint8_t ColorSeamColor[0x4]; // 0x0088 (Size: 0x4, Type: StructProperty)
    std::uint8_t GroupBoundaryColor[0x4]; // 0x008C (Size: 0x4, Type: StructProperty)
    float DepthBias; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAdjustDepthBiasUsingMeshSize; // 0x0094 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshElementsVisualizerProperties, bVisible) == 104, "Offset mismatch for UMeshElementsVisualizerProperties::bVisible");
static_assert(offsetof(UMeshElementsVisualizerProperties, bShowWireframe) == 105, "Offset mismatch for UMeshElementsVisualizerProperties::bShowWireframe");
static_assert(offsetof(UMeshElementsVisualizerProperties, bShowBorders) == 106, "Offset mismatch for UMeshElementsVisualizerProperties::bShowBorders");
static_assert(offsetof(UMeshElementsVisualizerProperties, bShowUVSeams) == 107, "Offset mismatch for UMeshElementsVisualizerProperties::bShowUVSeams");
static_assert(offsetof(UMeshElementsVisualizerProperties, bShowNormalSeams) == 108, "Offset mismatch for UMeshElementsVisualizerProperties::bShowNormalSeams");
static_assert(offsetof(UMeshElementsVisualizerProperties, bShowTangentSeams) == 109, "Offset mismatch for UMeshElementsVisualizerProperties::bShowTangentSeams");
static_assert(offsetof(UMeshElementsVisualizerProperties, bShowColorSeams) == 110, "Offset mismatch for UMeshElementsVisualizerProperties::bShowColorSeams");
static_assert(offsetof(UMeshElementsVisualizerProperties, bShowGroupBoundaries) == 111, "Offset mismatch for UMeshElementsVisualizerProperties::bShowGroupBoundaries");
static_assert(offsetof(UMeshElementsVisualizerProperties, ThicknessScale) == 112, "Offset mismatch for UMeshElementsVisualizerProperties::ThicknessScale");
static_assert(offsetof(UMeshElementsVisualizerProperties, WireframeColor) == 116, "Offset mismatch for UMeshElementsVisualizerProperties::WireframeColor");
static_assert(offsetof(UMeshElementsVisualizerProperties, BoundaryEdgeColor) == 120, "Offset mismatch for UMeshElementsVisualizerProperties::BoundaryEdgeColor");
static_assert(offsetof(UMeshElementsVisualizerProperties, UVSeamColor) == 124, "Offset mismatch for UMeshElementsVisualizerProperties::UVSeamColor");
static_assert(offsetof(UMeshElementsVisualizerProperties, NormalSeamColor) == 128, "Offset mismatch for UMeshElementsVisualizerProperties::NormalSeamColor");
static_assert(offsetof(UMeshElementsVisualizerProperties, TangentSeamColor) == 132, "Offset mismatch for UMeshElementsVisualizerProperties::TangentSeamColor");
static_assert(offsetof(UMeshElementsVisualizerProperties, ColorSeamColor) == 136, "Offset mismatch for UMeshElementsVisualizerProperties::ColorSeamColor");
static_assert(offsetof(UMeshElementsVisualizerProperties, GroupBoundaryColor) == 140, "Offset mismatch for UMeshElementsVisualizerProperties::GroupBoundaryColor");
static_assert(offsetof(UMeshElementsVisualizerProperties, DepthBias) == 144, "Offset mismatch for UMeshElementsVisualizerProperties::DepthBias");
static_assert(offsetof(UMeshElementsVisualizerProperties, bAdjustDepthBiasUsingMeshSize) == 148, "Offset mismatch for UMeshElementsVisualizerProperties::bAdjustDepthBiasUsingMeshSize");

// /Script/ModelingComponents.MeshOpPreviewWithBackgroundCompute
// Kind: Class; super: Object
class UMeshOpPreviewWithBackgroundCompute
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* PreviewMesh; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StandardMaterials; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    void* OverrideMaterial; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* WorkingMaterial; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryMaterial; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PreviewWorld; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, PreviewMesh) == 88, "Offset mismatch for UMeshOpPreviewWithBackgroundCompute::PreviewMesh");
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, StandardMaterials) == 96, "Offset mismatch for UMeshOpPreviewWithBackgroundCompute::StandardMaterials");
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, OverrideMaterial) == 112, "Offset mismatch for UMeshOpPreviewWithBackgroundCompute::OverrideMaterial");
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, WorkingMaterial) == 120, "Offset mismatch for UMeshOpPreviewWithBackgroundCompute::WorkingMaterial");
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, SecondaryMaterial) == 128, "Offset mismatch for UMeshOpPreviewWithBackgroundCompute::SecondaryMaterial");
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, PreviewWorld) == 136, "Offset mismatch for UMeshOpPreviewWithBackgroundCompute::PreviewWorld");

// /Script/ModelingComponents.MeshSculptLayersManager
// Kind: Class; super: Interface
class UMeshSculptLayersManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
// Kind: Class; super: MeshSurfacePointToolBuilder
class UMeshSurfacePointMeshEditingToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.MeshTopologySelectionMechanic
// Kind: Class; super: InteractionMechanic
class UMeshTopologySelectionMechanic
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Properties; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x50]; // 0x0080
    void* HoverBehavior; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ClickOrDragBehavior; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MarqueeMechanic; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PolyLassoMechanic; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MarqueeSelectionUpdateType; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00F1
    std::uint8_t SelectionDragToolUpdateType; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x27B]; // 0x00F5
    void* PreviewGeometryActor; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* DrawnTriangleSetComponent; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0380
    void* HighlightedFaceMaterial; // 0x0390 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshTopologySelectionMechanic, Properties) == 120, "Offset mismatch for UMeshTopologySelectionMechanic::Properties");
static_assert(offsetof(UMeshTopologySelectionMechanic, HoverBehavior) == 208, "Offset mismatch for UMeshTopologySelectionMechanic::HoverBehavior");
static_assert(offsetof(UMeshTopologySelectionMechanic, ClickOrDragBehavior) == 216, "Offset mismatch for UMeshTopologySelectionMechanic::ClickOrDragBehavior");
static_assert(offsetof(UMeshTopologySelectionMechanic, MarqueeMechanic) == 224, "Offset mismatch for UMeshTopologySelectionMechanic::MarqueeMechanic");
static_assert(offsetof(UMeshTopologySelectionMechanic, PolyLassoMechanic) == 232, "Offset mismatch for UMeshTopologySelectionMechanic::PolyLassoMechanic");
static_assert(offsetof(UMeshTopologySelectionMechanic, MarqueeSelectionUpdateType) == 240, "Offset mismatch for UMeshTopologySelectionMechanic::MarqueeSelectionUpdateType");
static_assert(offsetof(UMeshTopologySelectionMechanic, SelectionDragToolUpdateType) == 244, "Offset mismatch for UMeshTopologySelectionMechanic::SelectionDragToolUpdateType");
static_assert(offsetof(UMeshTopologySelectionMechanic, PreviewGeometryActor) == 880, "Offset mismatch for UMeshTopologySelectionMechanic::PreviewGeometryActor");
static_assert(offsetof(UMeshTopologySelectionMechanic, DrawnTriangleSetComponent) == 888, "Offset mismatch for UMeshTopologySelectionMechanic::DrawnTriangleSetComponent");
static_assert(offsetof(UMeshTopologySelectionMechanic, HighlightedFaceMaterial) == 912, "Offset mismatch for UMeshTopologySelectionMechanic::HighlightedFaceMaterial");

// /Script/ModelingComponents.MeshTopologySelectionMechanicProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshTopologySelectionMechanicProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bSelectVertices; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectEdges; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectFaces; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectEdgeLoops; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectEdgeRings; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitBackFaces; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t SelectionDragTool; // 0x006E (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnoreOcclusionForDragTools; // 0x006F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreferProjectedElement; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectDownRay; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreOcclusion; // 0x0072 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bSelectVertices) == 104, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bSelectVertices");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bSelectEdges) == 105, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bSelectEdges");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bSelectFaces) == 106, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bSelectFaces");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bSelectEdgeLoops) == 107, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bSelectEdgeLoops");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bSelectEdgeRings) == 108, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bSelectEdgeRings");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bHitBackFaces) == 109, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bHitBackFaces");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, SelectionDragTool) == 110, "Offset mismatch for UMeshTopologySelectionMechanicProperties::SelectionDragTool");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bIgnoreOcclusionForDragTools) == 111, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bIgnoreOcclusionForDragTools");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bPreferProjectedElement) == 112, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bPreferProjectedElement");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bSelectDownRay) == 113, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bSelectDownRay");
static_assert(offsetof(UMeshTopologySelectionMechanicProperties, bIgnoreOcclusion) == 114, "Offset mismatch for UMeshTopologySelectionMechanicProperties::bIgnoreOcclusion");

// /Script/ModelingComponents.MeshWireframeComponent
// Kind: Class; super: MeshComponent
class UMeshWireframeComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    float LineDepthBias; // 0x05D0 (Size: 0x4, Type: FloatProperty)
    float LineDepthBiasSizeScale; // 0x05D4 (Size: 0x4, Type: FloatProperty)
    float ThicknessScale; // 0x05D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableWireframe; // 0x05DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x05DD
    std::uint8_t WireframeColor[0x4]; // 0x05E0 (Size: 0x4, Type: StructProperty)
    float WireframeThickness; // 0x05E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableBoundaryEdges; // 0x05E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x05E9
    std::uint8_t BoundaryEdgeColor[0x4]; // 0x05EC (Size: 0x4, Type: StructProperty)
    float BoundaryEdgeThickness; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableUVSeams; // 0x05F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x05F5
    std::uint8_t UVSeamColor[0x4]; // 0x05F8 (Size: 0x4, Type: StructProperty)
    float UVSeamThickness; // 0x05FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableNormalSeams; // 0x0600 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0601
    std::uint8_t NormalSeamColor[0x4]; // 0x0604 (Size: 0x4, Type: StructProperty)
    float NormalSeamThickness; // 0x0608 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableTangentSeams; // 0x060C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x060D
    std::uint8_t TangentSeamColor[0x4]; // 0x0610 (Size: 0x4, Type: StructProperty)
    float TangentSeamThickness; // 0x0614 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableColorSeams; // 0x0618 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0619
    std::uint8_t ColorSeamColor[0x4]; // 0x061C (Size: 0x4, Type: StructProperty)
    float ColorSeamThickness; // 0x0620 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableGroupBoundaries; // 0x0624 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0625
    std::uint8_t GroupBoundaryColor[0x4]; // 0x0628 (Size: 0x4, Type: StructProperty)
    float GroupBoundaryThickness; // 0x062C (Size: 0x4, Type: FloatProperty)
    void* LineMaterial; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocalBounds[0x1]; // 0x0638 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshWireframeComponent, LineDepthBias) == 1488, "Offset mismatch for UMeshWireframeComponent::LineDepthBias");
static_assert(offsetof(UMeshWireframeComponent, LineDepthBiasSizeScale) == 1492, "Offset mismatch for UMeshWireframeComponent::LineDepthBiasSizeScale");
static_assert(offsetof(UMeshWireframeComponent, ThicknessScale) == 1496, "Offset mismatch for UMeshWireframeComponent::ThicknessScale");
static_assert(offsetof(UMeshWireframeComponent, bEnableWireframe) == 1500, "Offset mismatch for UMeshWireframeComponent::bEnableWireframe");
static_assert(offsetof(UMeshWireframeComponent, WireframeColor) == 1504, "Offset mismatch for UMeshWireframeComponent::WireframeColor");
static_assert(offsetof(UMeshWireframeComponent, WireframeThickness) == 1508, "Offset mismatch for UMeshWireframeComponent::WireframeThickness");
static_assert(offsetof(UMeshWireframeComponent, bEnableBoundaryEdges) == 1512, "Offset mismatch for UMeshWireframeComponent::bEnableBoundaryEdges");
static_assert(offsetof(UMeshWireframeComponent, BoundaryEdgeColor) == 1516, "Offset mismatch for UMeshWireframeComponent::BoundaryEdgeColor");
static_assert(offsetof(UMeshWireframeComponent, BoundaryEdgeThickness) == 1520, "Offset mismatch for UMeshWireframeComponent::BoundaryEdgeThickness");
static_assert(offsetof(UMeshWireframeComponent, bEnableUVSeams) == 1524, "Offset mismatch for UMeshWireframeComponent::bEnableUVSeams");
static_assert(offsetof(UMeshWireframeComponent, UVSeamColor) == 1528, "Offset mismatch for UMeshWireframeComponent::UVSeamColor");
static_assert(offsetof(UMeshWireframeComponent, UVSeamThickness) == 1532, "Offset mismatch for UMeshWireframeComponent::UVSeamThickness");
static_assert(offsetof(UMeshWireframeComponent, bEnableNormalSeams) == 1536, "Offset mismatch for UMeshWireframeComponent::bEnableNormalSeams");
static_assert(offsetof(UMeshWireframeComponent, NormalSeamColor) == 1540, "Offset mismatch for UMeshWireframeComponent::NormalSeamColor");
static_assert(offsetof(UMeshWireframeComponent, NormalSeamThickness) == 1544, "Offset mismatch for UMeshWireframeComponent::NormalSeamThickness");
static_assert(offsetof(UMeshWireframeComponent, bEnableTangentSeams) == 1548, "Offset mismatch for UMeshWireframeComponent::bEnableTangentSeams");
static_assert(offsetof(UMeshWireframeComponent, TangentSeamColor) == 1552, "Offset mismatch for UMeshWireframeComponent::TangentSeamColor");
static_assert(offsetof(UMeshWireframeComponent, TangentSeamThickness) == 1556, "Offset mismatch for UMeshWireframeComponent::TangentSeamThickness");
static_assert(offsetof(UMeshWireframeComponent, bEnableColorSeams) == 1560, "Offset mismatch for UMeshWireframeComponent::bEnableColorSeams");
static_assert(offsetof(UMeshWireframeComponent, ColorSeamColor) == 1564, "Offset mismatch for UMeshWireframeComponent::ColorSeamColor");
static_assert(offsetof(UMeshWireframeComponent, ColorSeamThickness) == 1568, "Offset mismatch for UMeshWireframeComponent::ColorSeamThickness");
static_assert(offsetof(UMeshWireframeComponent, bEnableGroupBoundaries) == 1572, "Offset mismatch for UMeshWireframeComponent::bEnableGroupBoundaries");
static_assert(offsetof(UMeshWireframeComponent, GroupBoundaryColor) == 1576, "Offset mismatch for UMeshWireframeComponent::GroupBoundaryColor");
static_assert(offsetof(UMeshWireframeComponent, GroupBoundaryThickness) == 1580, "Offset mismatch for UMeshWireframeComponent::GroupBoundaryThickness");
static_assert(offsetof(UMeshWireframeComponent, LineMaterial) == 1584, "Offset mismatch for UMeshWireframeComponent::LineMaterial");
static_assert(offsetof(UMeshWireframeComponent, LocalBounds) == 1592, "Offset mismatch for UMeshWireframeComponent::LocalBounds");

// /Script/ModelingComponents.ModelingComponentsEditorSettings
// Kind: Class; super: DeveloperSettings
class UModelingComponentsEditorSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t GridMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::int32_t NumGridLines; // 0x0034 (Size: 0x4, Type: IntProperty)
    float GridSpacing; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float GridScale; // 0x003C (Size: 0x4, Type: FloatProperty)
    float GridSize; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UModelingComponentsEditorSettings, GridMode) == 48, "Offset mismatch for UModelingComponentsEditorSettings::GridMode");
static_assert(offsetof(UModelingComponentsEditorSettings, NumGridLines) == 52, "Offset mismatch for UModelingComponentsEditorSettings::NumGridLines");
static_assert(offsetof(UModelingComponentsEditorSettings, GridSpacing) == 56, "Offset mismatch for UModelingComponentsEditorSettings::GridSpacing");
static_assert(offsetof(UModelingComponentsEditorSettings, GridScale) == 60, "Offset mismatch for UModelingComponentsEditorSettings::GridScale");
static_assert(offsetof(UModelingComponentsEditorSettings, GridSize) == 64, "Offset mismatch for UModelingComponentsEditorSettings::GridSize");

// /Script/ModelingComponents.ModelingComponentsSettings
// Kind: Class; super: DeveloperSettings
class UModelingComponentsSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bEnableRayTracingWhileEditing; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRayTracing; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateLightmapUVs; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableCollision; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CollisionMode; // 0x0034 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UModelingComponentsSettings, bEnableRayTracingWhileEditing) == 48, "Offset mismatch for UModelingComponentsSettings::bEnableRayTracingWhileEditing");
static_assert(offsetof(UModelingComponentsSettings, bEnableRayTracing) == 49, "Offset mismatch for UModelingComponentsSettings::bEnableRayTracing");
static_assert(offsetof(UModelingComponentsSettings, bGenerateLightmapUVs) == 50, "Offset mismatch for UModelingComponentsSettings::bGenerateLightmapUVs");
static_assert(offsetof(UModelingComponentsSettings, bEnableCollision) == 51, "Offset mismatch for UModelingComponentsSettings::bEnableCollision");
static_assert(offsetof(UModelingComponentsSettings, CollisionMode) == 52, "Offset mismatch for UModelingComponentsSettings::CollisionMode");

// /Script/ModelingComponents.ModelingObjectsCreationAPI
// Kind: Class; super: Object
class UModelingObjectsCreationAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.ModelingSceneSnappingManager
// Kind: Class; super: SceneSnappingManager
class UModelingSceneSnappingManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ParentContext; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UModelingSceneSnappingManager, ParentContext) == 40, "Offset mismatch for UModelingSceneSnappingManager::ParentContext");

// /Script/ModelingComponents.ModelingToolExternalDynamicMeshUpdateAPI
// Kind: Class; super: Interface
class UModelingToolExternalDynamicMeshUpdateAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.MultiSelectionMeshEditingTool
// Kind: Class; super: MultiSelectionTool
class UMultiSelectionMeshEditingTool
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> TargetWorld; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UMultiSelectionMeshEditingTool, TargetWorld) == 200, "Offset mismatch for UMultiSelectionMeshEditingTool::TargetWorld");

// /Script/ModelingComponents.MultiSelectionMeshEditingToolBuilder
// Kind: Class; super: InteractiveToolWithToolTargetsBuilder
class UMultiSelectionMeshEditingToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.MultiTargetWithSelectionTool
// Kind: Class; super: MultiSelectionTool
class UMultiTargetWithSelectionTool
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> TargetWorld; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00D0
    void* GeometrySelectionVizProperties; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* GeometrySelectionViz; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMultiTargetWithSelectionTool, TargetWorld) == 200, "Offset mismatch for UMultiTargetWithSelectionTool::TargetWorld");
static_assert(offsetof(UMultiTargetWithSelectionTool, GeometrySelectionVizProperties) == 240, "Offset mismatch for UMultiTargetWithSelectionTool::GeometrySelectionVizProperties");
static_assert(offsetof(UMultiTargetWithSelectionTool, GeometrySelectionViz) == 248, "Offset mismatch for UMultiTargetWithSelectionTool::GeometrySelectionViz");

// /Script/ModelingComponents.MultiTargetWithSelectionToolBuilder
// Kind: Class; super: InteractiveToolWithToolTargetsBuilder
class UMultiTargetWithSelectionToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.MultiTransformer
// Kind: Class; super: Object
class UMultiTransformer
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* GizmoManager; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x70]; // 0x0090
    void* TransformGizmo; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* TransformProxy; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMultiTransformer, GizmoManager) == 136, "Offset mismatch for UMultiTransformer::GizmoManager");
static_assert(offsetof(UMultiTransformer, TransformGizmo) == 256, "Offset mismatch for UMultiTransformer::TransformGizmo");
static_assert(offsetof(UMultiTransformer, TransformProxy) == 264, "Offset mismatch for UMultiTransformer::TransformProxy");
static_assert(offsetof(UMultiTransformer, DragAlignmentMechanic) == 272, "Offset mismatch for UMultiTransformer::DragAlignmentMechanic");

// /Script/ModelingComponents.OctreeDynamicMeshComponent
// Kind: Class; super: BaseDynamicMeshComponent
class UOctreeDynamicMeshComponent
{
public:
    std::uint8_t Pad_0000[0x6A0]; // 0x0000
    void* MeshObject; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOctreeDynamicMeshComponent, MeshObject) == 1696, "Offset mismatch for UOctreeDynamicMeshComponent::MeshObject");

// /Script/ModelingComponents.OnAcceptHandleSourcesProperties
// Kind: Class; super: OnAcceptHandleSourcesPropertiesBase
class UOnAcceptHandleSourcesProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t HandleInputs; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOnAcceptHandleSourcesProperties, HandleInputs) == 104, "Offset mismatch for UOnAcceptHandleSourcesProperties::HandleInputs");

// /Script/ModelingComponents.OnAcceptHandleSourcesPropertiesBase
// Kind: Class; super: InteractiveToolPropertySet
class UOnAcceptHandleSourcesPropertiesBase
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOnAcceptHandleSourcesPropertiesBase, CachedPropertiesMap) == 56, "Offset mismatch for UOnAcceptHandleSourcesPropertiesBase::CachedPropertiesMap");
static_assert(offsetof(UOnAcceptHandleSourcesPropertiesBase, bIsPropertySetEnabled) == 72, "Offset mismatch for UOnAcceptHandleSourcesPropertiesBase::bIsPropertySetEnabled");

// /Script/ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
// Kind: Class; super: OnAcceptHandleSourcesPropertiesBase
class UOnAcceptHandleSourcesPropertiesSingle
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t HandleInputs; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOnAcceptHandleSourcesPropertiesSingle, HandleInputs) == 104, "Offset mismatch for UOnAcceptHandleSourcesPropertiesSingle::HandleInputs");

// /Script/ModelingComponents.PersistentDynamicMeshSource
// Kind: Class; super: Interface
class UPersistentDynamicMeshSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.PlaneDistanceFromHitMechanic
// Kind: Class; super: InteractionMechanic
class UPlaneDistanceFromHitMechanic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.PointSetComponent
// Kind: Class; super: MeshComponent
class UPointSetComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    void* PointMaterial; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Bounds[0x38]; // 0x05D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bBoundsDirty; // 0x0610 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPointSetComponent, PointMaterial) == 1488, "Offset mismatch for UPointSetComponent::PointMaterial");
static_assert(offsetof(UPointSetComponent, Bounds) == 1496, "Offset mismatch for UPointSetComponent::Bounds");
static_assert(offsetof(UPointSetComponent, bBoundsDirty) == 1552, "Offset mismatch for UPointSetComponent::bBoundsDirty");

// /Script/ModelingComponents.PolyEditPreviewMesh
// Kind: Class; super: PreviewMesh
class UPolyEditPreviewMesh
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bBuildSpatialDataStructure; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0041
    void* DynamicMeshComponent; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditPreviewMesh, bBuildSpatialDataStructure) == 64, "Offset mismatch for UPolyEditPreviewMesh::bBuildSpatialDataStructure");
static_assert(offsetof(UPolyEditPreviewMesh, DynamicMeshComponent) == 80, "Offset mismatch for UPolyEditPreviewMesh::DynamicMeshComponent");

// /Script/ModelingComponents.PolyLassoMarqueeMechanic
// Kind: Class; super: InteractionMechanic
class UPolyLassoMarqueeMechanic
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    float SpacingTolerance; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float LineThickness; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t LineColor[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClosedColor[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnableFreehandPolygons; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableMultiClickPolygons; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00B2
    void* ClickDragBehavior; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* HoverBehavior; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyLassoMarqueeMechanic, SpacingTolerance) == 136, "Offset mismatch for UPolyLassoMarqueeMechanic::SpacingTolerance");
static_assert(offsetof(UPolyLassoMarqueeMechanic, LineThickness) == 140, "Offset mismatch for UPolyLassoMarqueeMechanic::LineThickness");
static_assert(offsetof(UPolyLassoMarqueeMechanic, LineColor) == 144, "Offset mismatch for UPolyLassoMarqueeMechanic::LineColor");
static_assert(offsetof(UPolyLassoMarqueeMechanic, ClosedColor) == 160, "Offset mismatch for UPolyLassoMarqueeMechanic::ClosedColor");
static_assert(offsetof(UPolyLassoMarqueeMechanic, bEnableFreehandPolygons) == 176, "Offset mismatch for UPolyLassoMarqueeMechanic::bEnableFreehandPolygons");
static_assert(offsetof(UPolyLassoMarqueeMechanic, bEnableMultiClickPolygons) == 177, "Offset mismatch for UPolyLassoMarqueeMechanic::bEnableMultiClickPolygons");
static_assert(offsetof(UPolyLassoMarqueeMechanic, ClickDragBehavior) == 184, "Offset mismatch for UPolyLassoMarqueeMechanic::ClickDragBehavior");
static_assert(offsetof(UPolyLassoMarqueeMechanic, HoverBehavior) == 192, "Offset mismatch for UPolyLassoMarqueeMechanic::HoverBehavior");

// /Script/ModelingComponents.PolygonSelectionMechanic
// Kind: Class; super: MeshTopologySelectionMechanic
class UPolygonSelectionMechanic
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Properties; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x50]; // 0x0080
    void* HoverBehavior; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ClickOrDragBehavior; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MarqueeMechanic; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PolyLassoMechanic; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MarqueeSelectionUpdateType; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00F1
    std::uint8_t SelectionDragToolUpdateType; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x27B]; // 0x00F5
    void* PreviewGeometryActor; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* DrawnTriangleSetComponent; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0380
    void* HighlightedFaceMaterial; // 0x0390 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolygonSelectionMechanic, Properties) == 120, "Offset mismatch for UPolygonSelectionMechanic::Properties");
static_assert(offsetof(UPolygonSelectionMechanic, HoverBehavior) == 208, "Offset mismatch for UPolygonSelectionMechanic::HoverBehavior");
static_assert(offsetof(UPolygonSelectionMechanic, ClickOrDragBehavior) == 216, "Offset mismatch for UPolygonSelectionMechanic::ClickOrDragBehavior");
static_assert(offsetof(UPolygonSelectionMechanic, MarqueeMechanic) == 224, "Offset mismatch for UPolygonSelectionMechanic::MarqueeMechanic");
static_assert(offsetof(UPolygonSelectionMechanic, PolyLassoMechanic) == 232, "Offset mismatch for UPolygonSelectionMechanic::PolyLassoMechanic");
static_assert(offsetof(UPolygonSelectionMechanic, MarqueeSelectionUpdateType) == 240, "Offset mismatch for UPolygonSelectionMechanic::MarqueeSelectionUpdateType");
static_assert(offsetof(UPolygonSelectionMechanic, SelectionDragToolUpdateType) == 244, "Offset mismatch for UPolygonSelectionMechanic::SelectionDragToolUpdateType");
static_assert(offsetof(UPolygonSelectionMechanic, PreviewGeometryActor) == 880, "Offset mismatch for UPolygonSelectionMechanic::PreviewGeometryActor");
static_assert(offsetof(UPolygonSelectionMechanic, DrawnTriangleSetComponent) == 888, "Offset mismatch for UPolygonSelectionMechanic::DrawnTriangleSetComponent");
static_assert(offsetof(UPolygonSelectionMechanic, HighlightedFaceMaterial) == 912, "Offset mismatch for UPolygonSelectionMechanic::HighlightedFaceMaterial");

// /Script/ModelingComponents.PolygonSelectionMechanicProperties
// Kind: Class; super: MeshTopologySelectionMechanicProperties
class UPolygonSelectionMechanicProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bSelectVertices; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectEdges; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectFaces; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectEdgeLoops; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectEdgeRings; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitBackFaces; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t SelectionDragTool; // 0x006E (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnoreOcclusionForDragTools; // 0x006F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreferProjectedElement; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectDownRay; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreOcclusion; // 0x0072 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolygonSelectionMechanicProperties, bSelectVertices) == 104, "Offset mismatch for UPolygonSelectionMechanicProperties::bSelectVertices");
static_assert(offsetof(UPolygonSelectionMechanicProperties, bSelectEdges) == 105, "Offset mismatch for UPolygonSelectionMechanicProperties::bSelectEdges");
static_assert(offsetof(UPolygonSelectionMechanicProperties, bSelectFaces) == 106, "Offset mismatch for UPolygonSelectionMechanicProperties::bSelectFaces");
static_assert(offsetof(UPolygonSelectionMechanicProperties, bSelectEdgeLoops) == 107, "Offset mismatch for UPolygonSelectionMechanicProperties::bSelectEdgeLoops");
static_assert(offsetof(UPolygonSelectionMechanicProperties, bSelectEdgeRings) == 108, "Offset mismatch for UPolygonSelectionMechanicProperties::bSelectEdgeRings");
static_assert(offsetof(UPolygonSelectionMechanicProperties, bHitBackFaces) == 109, "Offset mismatch for UPolygonSelectionMechanicProperties::bHitBackFaces");
static_assert(offsetof(UPolygonSelectionMechanicProperties, SelectionDragTool) == 110, "Offset mismatch for UPolygonSelectionMechanicProperties::SelectionDragTool");
static_assert(offsetof(UPolygonSelectionMechanicProperties, bIgnoreOcclusionForDragTools) == 111, "Offset mismatch for UPolygonSelectionMechanicProperties::bIgnoreOcclusionForDragTools");
static_assert(offsetof(UPolygonSelectionMechanicProperties, bPreferProjectedElement) == 112, "Offset mismatch for UPolygonSelectionMechanicProperties::bPreferProjectedElement");
static_assert(offsetof(UPolygonSelectionMechanicProperties, bSelectDownRay) == 113, "Offset mismatch for UPolygonSelectionMechanicProperties::bSelectDownRay");
static_assert(offsetof(UPolygonSelectionMechanicProperties, bIgnoreOcclusion) == 114, "Offset mismatch for UPolygonSelectionMechanicProperties::bIgnoreOcclusion");

// /Script/ModelingComponents.PolygroupLayersProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolygroupLayersProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FName ActiveGroupLayer; // 0x0068 (Size: 0x8, Type: NameProperty)
    TArray<void*> GroupLayersList; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSupportLabels; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolygroupLayersProperties, ActiveGroupLayer) == 104, "Offset mismatch for UPolygroupLayersProperties::ActiveGroupLayer");
static_assert(offsetof(UPolygroupLayersProperties, GroupLayersList) == 112, "Offset mismatch for UPolygroupLayersProperties::GroupLayersList");
static_assert(offsetof(UPolygroupLayersProperties, bSupportLabels) == 128, "Offset mismatch for UPolygroupLayersProperties::bSupportLabels");

// /Script/ModelingComponents.PreviewGeometry
// Kind: Class; super: Object
class UPreviewGeometry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ParentActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> TriangleSets; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LineSets; // 0x0040 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PointSets; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPreviewGeometry, ParentActor) == 40, "Offset mismatch for UPreviewGeometry::ParentActor");
static_assert(offsetof(UPreviewGeometry, TriangleSets) == 48, "Offset mismatch for UPreviewGeometry::TriangleSets");
static_assert(offsetof(UPreviewGeometry, LineSets) == 64, "Offset mismatch for UPreviewGeometry::LineSets");
static_assert(offsetof(UPreviewGeometry, PointSets) == 80, "Offset mismatch for UPreviewGeometry::PointSets");

// /Script/ModelingComponents.PreviewGeometryActor
// Kind: Class; super: InternalToolFrameworkActor
class UPreviewGeometryActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bIsSelectableInEditor; // 0x0270 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPreviewGeometryActor, bIsSelectableInEditor) == 624, "Offset mismatch for UPreviewGeometryActor::bIsSelectableInEditor");

// /Script/ModelingComponents.PreviewMesh
// Kind: Class; super: Object
class UPreviewMesh
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bBuildSpatialDataStructure; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0041
    void* DynamicMeshComponent; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPreviewMesh, bBuildSpatialDataStructure) == 64, "Offset mismatch for UPreviewMesh::bBuildSpatialDataStructure");
static_assert(offsetof(UPreviewMesh, DynamicMeshComponent) == 80, "Offset mismatch for UPreviewMesh::DynamicMeshComponent");

// /Script/ModelingComponents.PreviewMeshActor
// Kind: Class; super: InternalToolFrameworkActor
class UPreviewMeshActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bIsSelectableInEditor; // 0x0270 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPreviewMeshActor, bIsSelectableInEditor) == 624, "Offset mismatch for UPreviewMeshActor::bIsSelectableInEditor");

// /Script/ModelingComponents.RectangleMarqueeInteraction
// Kind: Class; super: Object
class URectangleMarqueeInteraction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.RectangleMarqueeMechanic
// Kind: Class; super: InteractionMechanic
class URectangleMarqueeMechanic
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bUseExternalClickDragBehavior; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseExternalUpdateCameraState; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x36]; // 0x003A
    double OnDragRectangleChangedDeferredThreshold; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0002[0x48]; // 0x0078
    void* ClickDragBehavior; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URectangleMarqueeMechanic, bUseExternalClickDragBehavior) == 56, "Offset mismatch for URectangleMarqueeMechanic::bUseExternalClickDragBehavior");
static_assert(offsetof(URectangleMarqueeMechanic, bUseExternalUpdateCameraState) == 57, "Offset mismatch for URectangleMarqueeMechanic::bUseExternalUpdateCameraState");
static_assert(offsetof(URectangleMarqueeMechanic, OnDragRectangleChangedDeferredThreshold) == 112, "Offset mismatch for URectangleMarqueeMechanic::OnDragRectangleChangedDeferredThreshold");
static_assert(offsetof(URectangleMarqueeMechanic, ClickDragBehavior) == 192, "Offset mismatch for URectangleMarqueeMechanic::ClickDragBehavior");

// /Script/ModelingComponents.SingleSelectionMeshEditingTool
// Kind: Class; super: SingleSelectionTool
class USingleSelectionMeshEditingTool
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> TargetWorld; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USingleSelectionMeshEditingTool, TargetWorld) == 192, "Offset mismatch for USingleSelectionMeshEditingTool::TargetWorld");

// /Script/ModelingComponents.SingleSelectionMeshEditingToolBuilder
// Kind: Class; super: InteractiveToolWithToolTargetsBuilder
class USingleSelectionMeshEditingToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.SingleTargetWithSelectionTool
// Kind: Class; super: SingleSelectionTool
class USingleTargetWithSelectionTool
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> TargetWorld; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00C8
    void* GeometrySelectionVizProperties; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* GeometrySelectionViz; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USingleTargetWithSelectionTool, TargetWorld) == 192, "Offset mismatch for USingleTargetWithSelectionTool::TargetWorld");
static_assert(offsetof(USingleTargetWithSelectionTool, GeometrySelectionVizProperties) == 248, "Offset mismatch for USingleTargetWithSelectionTool::GeometrySelectionVizProperties");
static_assert(offsetof(USingleTargetWithSelectionTool, GeometrySelectionViz) == 256, "Offset mismatch for USingleTargetWithSelectionTool::GeometrySelectionViz");

// /Script/ModelingComponents.SingleTargetWithSelectionToolBuilder
// Kind: Class; super: InteractiveToolWithToolTargetsBuilder
class USingleTargetWithSelectionToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.SpaceCurveDeformationMechanic
// Kind: Class; super: InteractionMechanic
class USpaceCurveDeformationMechanic
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* ClickBehavior; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* HoverBehavior; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0050
    void* TransformProperties; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x78]; // 0x0070
    void* PreviewGeometryActor; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* RenderPoints; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* RenderSegments; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x38]; // 0x0100
    void* PointTransformProxy; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* PointTransformGizmo; // 0x0140 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpaceCurveDeformationMechanic, ClickBehavior) == 64, "Offset mismatch for USpaceCurveDeformationMechanic::ClickBehavior");
static_assert(offsetof(USpaceCurveDeformationMechanic, HoverBehavior) == 72, "Offset mismatch for USpaceCurveDeformationMechanic::HoverBehavior");
static_assert(offsetof(USpaceCurveDeformationMechanic, TransformProperties) == 104, "Offset mismatch for USpaceCurveDeformationMechanic::TransformProperties");
static_assert(offsetof(USpaceCurveDeformationMechanic, PreviewGeometryActor) == 232, "Offset mismatch for USpaceCurveDeformationMechanic::PreviewGeometryActor");
static_assert(offsetof(USpaceCurveDeformationMechanic, RenderPoints) == 240, "Offset mismatch for USpaceCurveDeformationMechanic::RenderPoints");
static_assert(offsetof(USpaceCurveDeformationMechanic, RenderSegments) == 248, "Offset mismatch for USpaceCurveDeformationMechanic::RenderSegments");
static_assert(offsetof(USpaceCurveDeformationMechanic, PointTransformProxy) == 312, "Offset mismatch for USpaceCurveDeformationMechanic::PointTransformProxy");
static_assert(offsetof(USpaceCurveDeformationMechanic, PointTransformGizmo) == 320, "Offset mismatch for USpaceCurveDeformationMechanic::PointTransformGizmo");

// /Script/ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class USpaceCurveDeformationMechanicPropertySet
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t TransformMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t TransformOrigin; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    float Softness; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SoftFalloff; // 0x0074 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, TransformMode) == 104, "Offset mismatch for USpaceCurveDeformationMechanicPropertySet::TransformMode");
static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, TransformOrigin) == 108, "Offset mismatch for USpaceCurveDeformationMechanicPropertySet::TransformOrigin");
static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, Softness) == 112, "Offset mismatch for USpaceCurveDeformationMechanicPropertySet::Softness");
static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, SoftFalloff) == 116, "Offset mismatch for USpaceCurveDeformationMechanicPropertySet::SoftFalloff");

// /Script/ModelingComponents.SpatialCurveDistanceMechanic
// Kind: Class; super: InteractionMechanic
class USpatialCurveDistanceMechanic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.ToolActivityHost
// Kind: Class; super: Interface
class UToolActivityHost
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.ToolHostCustomizationAPI
// Kind: Class; super: Interface
class UToolHostCustomizationAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.TransformInputsToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UTransformInputsToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bShowTransformGizmo; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTransformInputsToolProperties, bShowTransformGizmo) == 104, "Offset mismatch for UTransformInputsToolProperties::bShowTransformGizmo");

// /Script/ModelingComponents.TriangleSetComponent
// Kind: Class; super: MeshComponent
class UTriangleSetComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    std::uint8_t Bounds[0x38]; // 0x05D0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bBoundsDirty; // 0x0608 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTriangleSetComponent, Bounds) == 1488, "Offset mismatch for UTriangleSetComponent::Bounds");
static_assert(offsetof(UTriangleSetComponent, bBoundsDirty) == 1544, "Offset mismatch for UTriangleSetComponent::bBoundsDirty");

// /Script/ModelingComponents.UVLayoutPreview
// Kind: Class; super: Object
class UUVLayoutPreview
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Settings; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* MeshElementsVisualizer; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* TriangleComponent; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowBackingRectangle; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* BackingRectangleMaterial; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUVLayoutPreview, Settings) == 40, "Offset mismatch for UUVLayoutPreview::Settings");
static_assert(offsetof(UUVLayoutPreview, PreviewMesh) == 48, "Offset mismatch for UUVLayoutPreview::PreviewMesh");
static_assert(offsetof(UUVLayoutPreview, MeshElementsVisualizer) == 56, "Offset mismatch for UUVLayoutPreview::MeshElementsVisualizer");
static_assert(offsetof(UUVLayoutPreview, TriangleComponent) == 64, "Offset mismatch for UUVLayoutPreview::TriangleComponent");
static_assert(offsetof(UUVLayoutPreview, bShowBackingRectangle) == 72, "Offset mismatch for UUVLayoutPreview::bShowBackingRectangle");
static_assert(offsetof(UUVLayoutPreview, BackingRectangleMaterial) == 80, "Offset mismatch for UUVLayoutPreview::BackingRectangleMaterial");

// /Script/ModelingComponents.UVLayoutPreviewProperties
// Kind: Class; super: InteractiveToolPropertySet
class UUVLayoutPreviewProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bEnabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t Side; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    float Scale; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0074
    std::uint8_t Offset[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShowWireframe; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUVLayoutPreviewProperties, bEnabled) == 104, "Offset mismatch for UUVLayoutPreviewProperties::bEnabled");
static_assert(offsetof(UUVLayoutPreviewProperties, Side) == 108, "Offset mismatch for UUVLayoutPreviewProperties::Side");
static_assert(offsetof(UUVLayoutPreviewProperties, Scale) == 112, "Offset mismatch for UUVLayoutPreviewProperties::Scale");
static_assert(offsetof(UUVLayoutPreviewProperties, Offset) == 120, "Offset mismatch for UUVLayoutPreviewProperties::Offset");
static_assert(offsetof(UUVLayoutPreviewProperties, bShowWireframe) == 136, "Offset mismatch for UUVLayoutPreviewProperties::bShowWireframe");

// /Script/ModelingComponents.VolumetricBrushStampIndicator
// Kind: Class; super: BrushStampIndicator
class UVolumetricBrushStampIndicator
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* SphereMesh; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVolumetricBrushStampIndicator, SphereMesh) == 216, "Offset mismatch for UVolumetricBrushStampIndicator::SphereMesh");

// /Script/ModelingComponents.VolumetricBrushStampIndicatorBuilder
// Kind: Class; super: InteractiveGizmoBuilder
class UVolumetricBrushStampIndicatorBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingComponents.VoxelProperties
// Kind: Class; super: InteractiveToolPropertySet
class UVoxelProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t VoxelCount; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutoSimplify; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveInternalSurfaces; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006E
    double SimplifyMaxErrorFactor; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double CubeRootMinComponentVolume; // 0x0078 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UVoxelProperties, VoxelCount) == 104, "Offset mismatch for UVoxelProperties::VoxelCount");
static_assert(offsetof(UVoxelProperties, bAutoSimplify) == 108, "Offset mismatch for UVoxelProperties::bAutoSimplify");
static_assert(offsetof(UVoxelProperties, bRemoveInternalSurfaces) == 109, "Offset mismatch for UVoxelProperties::bRemoveInternalSurfaces");
static_assert(offsetof(UVoxelProperties, SimplifyMaxErrorFactor) == 112, "Offset mismatch for UVoxelProperties::SimplifyMaxErrorFactor");
static_assert(offsetof(UVoxelProperties, CubeRootMinComponentVolume) == 120, "Offset mismatch for UVoxelProperties::CubeRootMinComponentVolume");

// /Script/ModelingComponents.WeightMapSetProperties
// Kind: Class; super: InteractiveToolPropertySet
class UWeightMapSetProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FName WeightMap; // 0x0068 (Size: 0x8, Type: NameProperty)
    TArray<void*> WeightMapsList; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bInvertWeightMap; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWeightMapSetProperties, WeightMap) == 104, "Offset mismatch for UWeightMapSetProperties::WeightMap");
static_assert(offsetof(UWeightMapSetProperties, WeightMapsList) == 112, "Offset mismatch for UWeightMapSetProperties::WeightMapsList");
static_assert(offsetof(UWeightMapSetProperties, bInvertWeightMap) == 128, "Offset mismatch for UWeightMapSetProperties::bInvertWeightMap");
