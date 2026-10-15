/**
 * decamp dumper generated SDK
 * Package: /Script/Landscape
 */
#pragma once
#include "Basic.h"

// /Script/Landscape.ForeignControlPointData
// Kind: ScriptStruct; super: none
struct FForeignControlPointData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.ForeignSplineSegmentData
// Kind: ScriptStruct; super: none
struct FForeignSplineSegmentData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.ForeignWorldSplineData
// Kind: ScriptStruct; super: none
struct FForeignWorldSplineData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.GizmoSelectData
// Kind: ScriptStruct; super: none
struct FGizmoSelectData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.GrassInput
// Kind: ScriptStruct; super: none
struct FGrassInput
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* GrassType; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Input[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGrassInput, Name) == 0, "Offset mismatch for FGrassInput::Name");
static_assert(offsetof(FGrassInput, GrassType) == 8, "Offset mismatch for FGrassInput::GrassType");
static_assert(offsetof(FGrassInput, Input) == 16, "Offset mismatch for FGrassInput::Input");

// /Script/Landscape.GrassVariety
// Kind: ScriptStruct; super: none
struct FGrassVariety
{
public:
    void* GrassMesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OverrideMaterials; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrassDensity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t GrassDensityQuality[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseGrid; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0059
    float PlacementJitter; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t StartCullDistance[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartCullDistanceQuality[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndCullDistance[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndCullDistanceQuality[0x28]; // 0x00B8 (Size: 0x28, Type: StructProperty)
    std::int32_t MinLOD; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t AllowedDensityRange[0x8]; // 0x00E4 (Size: 0x8, Type: StructProperty)
    std::uint8_t Scaling; // 0x00EC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00ED
    std::uint8_t ScaleX[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ScaleY[0x8]; // 0x00F8 (Size: 0x8, Type: StructProperty)
    std::uint8_t ScaleZ[0x8]; // 0x0100 (Size: 0x8, Type: StructProperty)
    std::uint8_t bWeightAttenuatesMaxScale; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0109
    float MaxScaleWeightAttenuation; // 0x010C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RandomRotation; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AlignToSurface; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlignToTriangleNormals; // 0x0112 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLandscapeLightmap; // 0x0113 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0114 (Size: 0x1, Type: StructProperty)
    std::uint8_t bReceivesDecals; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAffectDistanceFieldLighting; // 0x0116 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCastDynamicShadow; // 0x0117 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCastContactShadow; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepInstanceBufferCPUCopy; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x011A
    std::uint32_t InstanceWorldPositionOffsetDisableDistance; // 0x011C (Size: 0x4, Type: UInt32Property)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0120 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGrassVariety, GrassMesh) == 0, "Offset mismatch for FGrassVariety::GrassMesh");
static_assert(offsetof(FGrassVariety, OverrideMaterials) == 8, "Offset mismatch for FGrassVariety::OverrideMaterials");
static_assert(offsetof(FGrassVariety, GrassDensity) == 24, "Offset mismatch for FGrassVariety::GrassDensity");
static_assert(offsetof(FGrassVariety, GrassDensityQuality) == 48, "Offset mismatch for FGrassVariety::GrassDensityQuality");
static_assert(offsetof(FGrassVariety, bUseGrid) == 88, "Offset mismatch for FGrassVariety::bUseGrid");
static_assert(offsetof(FGrassVariety, PlacementJitter) == 92, "Offset mismatch for FGrassVariety::PlacementJitter");
static_assert(offsetof(FGrassVariety, StartCullDistance) == 96, "Offset mismatch for FGrassVariety::StartCullDistance");
static_assert(offsetof(FGrassVariety, StartCullDistanceQuality) == 120, "Offset mismatch for FGrassVariety::StartCullDistanceQuality");
static_assert(offsetof(FGrassVariety, EndCullDistance) == 160, "Offset mismatch for FGrassVariety::EndCullDistance");
static_assert(offsetof(FGrassVariety, EndCullDistanceQuality) == 184, "Offset mismatch for FGrassVariety::EndCullDistanceQuality");
static_assert(offsetof(FGrassVariety, MinLOD) == 224, "Offset mismatch for FGrassVariety::MinLOD");
static_assert(offsetof(FGrassVariety, AllowedDensityRange) == 228, "Offset mismatch for FGrassVariety::AllowedDensityRange");
static_assert(offsetof(FGrassVariety, Scaling) == 236, "Offset mismatch for FGrassVariety::Scaling");
static_assert(offsetof(FGrassVariety, ScaleX) == 240, "Offset mismatch for FGrassVariety::ScaleX");
static_assert(offsetof(FGrassVariety, ScaleY) == 248, "Offset mismatch for FGrassVariety::ScaleY");
static_assert(offsetof(FGrassVariety, ScaleZ) == 256, "Offset mismatch for FGrassVariety::ScaleZ");
static_assert(offsetof(FGrassVariety, bWeightAttenuatesMaxScale) == 264, "Offset mismatch for FGrassVariety::bWeightAttenuatesMaxScale");
static_assert(offsetof(FGrassVariety, MaxScaleWeightAttenuation) == 268, "Offset mismatch for FGrassVariety::MaxScaleWeightAttenuation");
static_assert(offsetof(FGrassVariety, RandomRotation) == 272, "Offset mismatch for FGrassVariety::RandomRotation");
static_assert(offsetof(FGrassVariety, AlignToSurface) == 273, "Offset mismatch for FGrassVariety::AlignToSurface");
static_assert(offsetof(FGrassVariety, bAlignToTriangleNormals) == 274, "Offset mismatch for FGrassVariety::bAlignToTriangleNormals");
static_assert(offsetof(FGrassVariety, bUseLandscapeLightmap) == 275, "Offset mismatch for FGrassVariety::bUseLandscapeLightmap");
static_assert(offsetof(FGrassVariety, LightingChannels) == 276, "Offset mismatch for FGrassVariety::LightingChannels");
static_assert(offsetof(FGrassVariety, bReceivesDecals) == 277, "Offset mismatch for FGrassVariety::bReceivesDecals");
static_assert(offsetof(FGrassVariety, bAffectDistanceFieldLighting) == 278, "Offset mismatch for FGrassVariety::bAffectDistanceFieldLighting");
static_assert(offsetof(FGrassVariety, bCastDynamicShadow) == 279, "Offset mismatch for FGrassVariety::bCastDynamicShadow");
static_assert(offsetof(FGrassVariety, bCastContactShadow) == 280, "Offset mismatch for FGrassVariety::bCastContactShadow");
static_assert(offsetof(FGrassVariety, bKeepInstanceBufferCPUCopy) == 281, "Offset mismatch for FGrassVariety::bKeepInstanceBufferCPUCopy");
static_assert(offsetof(FGrassVariety, InstanceWorldPositionOffsetDisableDistance) == 284, "Offset mismatch for FGrassVariety::InstanceWorldPositionOffsetDisableDistance");
static_assert(offsetof(FGrassVariety, ShadowCacheInvalidationBehavior) == 288, "Offset mismatch for FGrassVariety::ShadowCacheInvalidationBehavior");

// /Script/Landscape.HeightmapData
// Kind: ScriptStruct; super: none
struct FHeightmapData
{
public:
    void* Texture; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FHeightmapData, Texture) == 0, "Offset mismatch for FHeightmapData::Texture");

// /Script/Landscape.HeightmapTextureEdgeSnapshot
// Kind: ScriptStruct; super: none
struct FHeightmapTextureEdgeSnapshot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeBrushParameters
// Kind: ScriptStruct; super: none
struct FLandscapeBrushParameters
{
public:
    std::uint8_t RenderAreaWorldTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t RenderAreaSize[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    void* CombinedResult; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LayerType; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0071
    FName WeightmapLayerName; // 0x0074 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLandscapeBrushParameters, RenderAreaWorldTransform) == 0, "Offset mismatch for FLandscapeBrushParameters::RenderAreaWorldTransform");
static_assert(offsetof(FLandscapeBrushParameters, RenderAreaSize) == 96, "Offset mismatch for FLandscapeBrushParameters::RenderAreaSize");
static_assert(offsetof(FLandscapeBrushParameters, CombinedResult) == 104, "Offset mismatch for FLandscapeBrushParameters::CombinedResult");
static_assert(offsetof(FLandscapeBrushParameters, LayerType) == 112, "Offset mismatch for FLandscapeBrushParameters::LayerType");
static_assert(offsetof(FLandscapeBrushParameters, WeightmapLayerName) == 116, "Offset mismatch for FLandscapeBrushParameters::WeightmapLayerName");

// /Script/Landscape.LandscapeComponentMaterialOverride
// Kind: ScriptStruct; super: none
struct FLandscapeComponentMaterialOverride
{
public:
    std::uint8_t LODIndex[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* Material; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLandscapeComponentMaterialOverride, LODIndex) == 0, "Offset mismatch for FLandscapeComponentMaterialOverride::LODIndex");
static_assert(offsetof(FLandscapeComponentMaterialOverride, Material) == 24, "Offset mismatch for FLandscapeComponentMaterialOverride::Material");

// /Script/Landscape.LandscapeEditLayerMergeRenderBlackboardItem
// Kind: ScriptStruct; super: none
struct FLandscapeEditLayerMergeRenderBlackboardItem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeEditToolRenderData
// Kind: ScriptStruct; super: none
struct FLandscapeEditToolRenderData
{
public:
    void* ToolMaterial; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* GizmoMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SelectedType; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t DebugChannelR; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t DebugChannelG; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t DebugChannelB; // 0x001C (Size: 0x4, Type: IntProperty)
    void* DataTexture; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* LayerContributionTexture; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* DirtyTexture; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLandscapeEditToolRenderData, ToolMaterial) == 0, "Offset mismatch for FLandscapeEditToolRenderData::ToolMaterial");
static_assert(offsetof(FLandscapeEditToolRenderData, GizmoMaterial) == 8, "Offset mismatch for FLandscapeEditToolRenderData::GizmoMaterial");
static_assert(offsetof(FLandscapeEditToolRenderData, SelectedType) == 16, "Offset mismatch for FLandscapeEditToolRenderData::SelectedType");
static_assert(offsetof(FLandscapeEditToolRenderData, DebugChannelR) == 20, "Offset mismatch for FLandscapeEditToolRenderData::DebugChannelR");
static_assert(offsetof(FLandscapeEditToolRenderData, DebugChannelG) == 24, "Offset mismatch for FLandscapeEditToolRenderData::DebugChannelG");
static_assert(offsetof(FLandscapeEditToolRenderData, DebugChannelB) == 28, "Offset mismatch for FLandscapeEditToolRenderData::DebugChannelB");
static_assert(offsetof(FLandscapeEditToolRenderData, DataTexture) == 32, "Offset mismatch for FLandscapeEditToolRenderData::DataTexture");
static_assert(offsetof(FLandscapeEditToolRenderData, LayerContributionTexture) == 40, "Offset mismatch for FLandscapeEditToolRenderData::LayerContributionTexture");
static_assert(offsetof(FLandscapeEditToolRenderData, DirtyTexture) == 48, "Offset mismatch for FLandscapeEditToolRenderData::DirtyTexture");

// /Script/Landscape.LandscapeEditorLayerSettings
// Kind: ScriptStruct; super: none
struct FLandscapeEditorLayerSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeGrassName
// Kind: ScriptStruct; super: none
struct FLandscapeGrassName
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLandscapeGrassName, Name) == 0, "Offset mismatch for FLandscapeGrassName::Name");

// /Script/Landscape.LandscapeImportLayerInfo
// Kind: ScriptStruct; super: none
struct FLandscapeImportLayerInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeInfoLayerSettings
// Kind: ScriptStruct; super: none
struct FLandscapeInfoLayerSettings
{
public:
    void* LayerInfoObj; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName LayerName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLandscapeInfoLayerSettings, LayerInfoObj) == 0, "Offset mismatch for FLandscapeInfoLayerSettings::LayerInfoObj");
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerName) == 8, "Offset mismatch for FLandscapeInfoLayerSettings::LayerName");

// /Script/Landscape.LandscapeLayer
// Kind: ScriptStruct; super: none
struct FLandscapeLayer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Guid[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t bVisible; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocked; // 0x001D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001E
    float HeightmapAlpha; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float WeightmapAlpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0029
    TArray<void*> Brushes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> WeightmapLayerAllocationBlend; // 0x0040 (Size: 0x10, Type: MapProperty)
    void* EditLayer; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLandscapeLayer, Guid) == 8, "Offset mismatch for FLandscapeLayer::Guid");
static_assert(offsetof(FLandscapeLayer, Name) == 24, "Offset mismatch for FLandscapeLayer::Name");
static_assert(offsetof(FLandscapeLayer, bVisible) == 28, "Offset mismatch for FLandscapeLayer::bVisible");
static_assert(offsetof(FLandscapeLayer, bLocked) == 29, "Offset mismatch for FLandscapeLayer::bLocked");
static_assert(offsetof(FLandscapeLayer, HeightmapAlpha) == 32, "Offset mismatch for FLandscapeLayer::HeightmapAlpha");
static_assert(offsetof(FLandscapeLayer, WeightmapAlpha) == 36, "Offset mismatch for FLandscapeLayer::WeightmapAlpha");
static_assert(offsetof(FLandscapeLayer, BlendMode) == 40, "Offset mismatch for FLandscapeLayer::BlendMode");
static_assert(offsetof(FLandscapeLayer, Brushes) == 48, "Offset mismatch for FLandscapeLayer::Brushes");
static_assert(offsetof(FLandscapeLayer, WeightmapLayerAllocationBlend) == 64, "Offset mismatch for FLandscapeLayer::WeightmapLayerAllocationBlend");
static_assert(offsetof(FLandscapeLayer, EditLayer) == 80, "Offset mismatch for FLandscapeLayer::EditLayer");

// /Script/Landscape.LandscapeLayerBrush
// Kind: ScriptStruct; super: none
struct FLandscapeLayerBrush
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeLayerComponentData
// Kind: ScriptStruct; super: none
struct FLandscapeLayerComponentData
{
public:
    std::uint8_t HeightmapData[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t WeightmapData[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLandscapeLayerComponentData, HeightmapData) == 0, "Offset mismatch for FLandscapeLayerComponentData::HeightmapData");
static_assert(offsetof(FLandscapeLayerComponentData, WeightmapData) == 8, "Offset mismatch for FLandscapeLayerComponentData::WeightmapData");

// /Script/Landscape.LandscapeMaterialTextureStreamingInfo
// Kind: ScriptStruct; super: none
struct FLandscapeMaterialTextureStreamingInfo
{
public:
    std::uint8_t TextureName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float TexelFactor; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLandscapeMaterialTextureStreamingInfo, TextureName) == 0, "Offset mismatch for FLandscapeMaterialTextureStreamingInfo::TextureName");
static_assert(offsetof(FLandscapeMaterialTextureStreamingInfo, TexelFactor) == 4, "Offset mismatch for FLandscapeMaterialTextureStreamingInfo::TexelFactor");

// /Script/Landscape.LandscapePerLODMaterialOverride
// Kind: ScriptStruct; super: none
struct FLandscapePerLODMaterialOverride
{
public:
    std::int32_t LODIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* Material; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLandscapePerLODMaterialOverride, LODIndex) == 0, "Offset mismatch for FLandscapePerLODMaterialOverride::LODIndex");
static_assert(offsetof(FLandscapePerLODMaterialOverride, Material) == 8, "Offset mismatch for FLandscapePerLODMaterialOverride::Material");

// /Script/Landscape.LandscapeProxyMaterialOverride
// Kind: ScriptStruct; super: none
struct FLandscapeProxyMaterialOverride
{
public:
    std::uint8_t LODIndex[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* Material; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLandscapeProxyMaterialOverride, LODIndex) == 0, "Offset mismatch for FLandscapeProxyMaterialOverride::LODIndex");
static_assert(offsetof(FLandscapeProxyMaterialOverride, Material) == 24, "Offset mismatch for FLandscapeProxyMaterialOverride::Material");

// /Script/Landscape.LandscapeSplineConnection
// Kind: ScriptStruct; super: none
struct FLandscapeSplineConnection
{
public:
    void* Segment; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t End; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLandscapeSplineConnection, Segment) == 0, "Offset mismatch for FLandscapeSplineConnection::Segment");
static_assert(offsetof(FLandscapeSplineConnection, End) == 8, "Offset mismatch for FLandscapeSplineConnection::End");

// /Script/Landscape.LandscapeSplineInterpPoint
// Kind: ScriptStruct; super: none
struct FLandscapeSplineInterpPoint
{
public:
    std::uint8_t Center[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Left[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Right[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t FalloffLeft[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t FalloffRight[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerLeft[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerRight[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerFalloffLeft[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerFalloffRight[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    float StartEndFalloff; // 0x00D8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLandscapeSplineInterpPoint, Center) == 0, "Offset mismatch for FLandscapeSplineInterpPoint::Center");
static_assert(offsetof(FLandscapeSplineInterpPoint, Left) == 24, "Offset mismatch for FLandscapeSplineInterpPoint::Left");
static_assert(offsetof(FLandscapeSplineInterpPoint, Right) == 48, "Offset mismatch for FLandscapeSplineInterpPoint::Right");
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffLeft) == 72, "Offset mismatch for FLandscapeSplineInterpPoint::FalloffLeft");
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffRight) == 96, "Offset mismatch for FLandscapeSplineInterpPoint::FalloffRight");
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerLeft) == 120, "Offset mismatch for FLandscapeSplineInterpPoint::LayerLeft");
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerRight) == 144, "Offset mismatch for FLandscapeSplineInterpPoint::LayerRight");
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffLeft) == 168, "Offset mismatch for FLandscapeSplineInterpPoint::LayerFalloffLeft");
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffRight) == 192, "Offset mismatch for FLandscapeSplineInterpPoint::LayerFalloffRight");
static_assert(offsetof(FLandscapeSplineInterpPoint, StartEndFalloff) == 216, "Offset mismatch for FLandscapeSplineInterpPoint::StartEndFalloff");

// /Script/Landscape.LandscapeSplineMeshEntry
// Kind: ScriptStruct; super: none
struct FLandscapeSplineMeshEntry
{
public:
    void* Mesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialOverrides; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCenterH; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    std::uint8_t CenterAdjust[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t bNoZScaling; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bScaleToWidth (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t Scale[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t orientation; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ForwardAxis; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t UpAxis; // 0x0052 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLandscapeSplineMeshEntry, Mesh) == 0, "Offset mismatch for FLandscapeSplineMeshEntry::Mesh");
static_assert(offsetof(FLandscapeSplineMeshEntry, MaterialOverrides) == 8, "Offset mismatch for FLandscapeSplineMeshEntry::MaterialOverrides");
static_assert(offsetof(FLandscapeSplineMeshEntry, bCenterH) == 24, "Offset mismatch for FLandscapeSplineMeshEntry::bCenterH");
static_assert(offsetof(FLandscapeSplineMeshEntry, CenterAdjust) == 32, "Offset mismatch for FLandscapeSplineMeshEntry::CenterAdjust");
static_assert(offsetof(FLandscapeSplineMeshEntry, bNoZScaling) == 48, "Offset mismatch for FLandscapeSplineMeshEntry::bNoZScaling");
static_assert(offsetof(FLandscapeSplineMeshEntry, Scale) == 56, "Offset mismatch for FLandscapeSplineMeshEntry::Scale");
static_assert(offsetof(FLandscapeSplineMeshEntry, orientation) == 80, "Offset mismatch for FLandscapeSplineMeshEntry::orientation");
static_assert(offsetof(FLandscapeSplineMeshEntry, ForwardAxis) == 81, "Offset mismatch for FLandscapeSplineMeshEntry::ForwardAxis");
static_assert(offsetof(FLandscapeSplineMeshEntry, UpAxis) == 82, "Offset mismatch for FLandscapeSplineMeshEntry::UpAxis");

// /Script/Landscape.LandscapeSplineSegmentConnection
// Kind: ScriptStruct; super: none
struct FLandscapeSplineSegmentConnection
{
public:
    void* ControlPoint; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float TangentLen; // 0x0008 (Size: 0x4, Type: FloatProperty)
    FName SocketName; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLandscapeSplineSegmentConnection, ControlPoint) == 0, "Offset mismatch for FLandscapeSplineSegmentConnection::ControlPoint");
static_assert(offsetof(FLandscapeSplineSegmentConnection, TangentLen) == 8, "Offset mismatch for FLandscapeSplineSegmentConnection::TangentLen");
static_assert(offsetof(FLandscapeSplineSegmentConnection, SocketName) == 12, "Offset mismatch for FLandscapeSplineSegmentConnection::SocketName");

// /Script/Landscape.LandscapeTargetLayerSettings
// Kind: ScriptStruct; super: none
struct FLandscapeTargetLayerSettings
{
public:
    void* LayerInfoObj; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLandscapeTargetLayerSettings, LayerInfoObj) == 0, "Offset mismatch for FLandscapeTargetLayerSettings::LayerInfoObj");

// /Script/Landscape.LandscapeTexture2DMipMap
// Kind: ScriptStruct; super: none
struct FLandscapeTexture2DMipMap
{
public:
    std::int32_t SizeX; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SizeY; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCompressed; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLandscapeTexture2DMipMap, SizeX) == 0, "Offset mismatch for FLandscapeTexture2DMipMap::SizeX");
static_assert(offsetof(FLandscapeTexture2DMipMap, SizeY) == 4, "Offset mismatch for FLandscapeTexture2DMipMap::SizeY");
static_assert(offsetof(FLandscapeTexture2DMipMap, bCompressed) == 8, "Offset mismatch for FLandscapeTexture2DMipMap::bCompressed");

// /Script/Landscape.LayerBlendInput
// Kind: ScriptStruct; super: none
struct FLayerBlendInput
{
public:
    std::uint8_t LayerName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BlendType; // 0x0004 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t LayerInput[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightInput[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    float PreviewWeight; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    std::uint8_t ConstLayerInput[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    float ConstHeightInput; // 0x0078 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLayerBlendInput, LayerName) == 0, "Offset mismatch for FLayerBlendInput::LayerName");
static_assert(offsetof(FLayerBlendInput, BlendType) == 4, "Offset mismatch for FLayerBlendInput::BlendType");
static_assert(offsetof(FLayerBlendInput, LayerInput) == 8, "Offset mismatch for FLayerBlendInput::LayerInput");
static_assert(offsetof(FLayerBlendInput, HeightInput) == 48, "Offset mismatch for FLayerBlendInput::HeightInput");
static_assert(offsetof(FLayerBlendInput, PreviewWeight) == 88, "Offset mismatch for FLayerBlendInput::PreviewWeight");
static_assert(offsetof(FLayerBlendInput, ConstLayerInput) == 96, "Offset mismatch for FLayerBlendInput::ConstLayerInput");
static_assert(offsetof(FLayerBlendInput, ConstHeightInput) == 120, "Offset mismatch for FLayerBlendInput::ConstHeightInput");

// /Script/Landscape.PhysicalMaterialInput
// Kind: ScriptStruct; super: none
struct FPhysicalMaterialInput
{
public:
    void* PhysicalMaterial; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Input[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicalMaterialInput, PhysicalMaterial) == 0, "Offset mismatch for FPhysicalMaterialInput::PhysicalMaterial");
static_assert(offsetof(FPhysicalMaterialInput, Input) == 8, "Offset mismatch for FPhysicalMaterialInput::Input");

// /Script/Landscape.TargetLayerBlendGroup
// Kind: ScriptStruct; super: none
struct FTargetLayerBlendGroup
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BlendMethod; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TSet<void*> TargetLayers; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FTargetLayerBlendGroup, Name) == 0, "Offset mismatch for FTargetLayerBlendGroup::Name");
static_assert(offsetof(FTargetLayerBlendGroup, BlendMethod) == 4, "Offset mismatch for FTargetLayerBlendGroup::BlendMethod");
static_assert(offsetof(FTargetLayerBlendGroup, TargetLayers) == 8, "Offset mismatch for FTargetLayerBlendGroup::TargetLayers");

// /Script/Landscape.WeightmapData
// Kind: ScriptStruct; super: none
struct FWeightmapData
{
public:
    TArray<void*> Textures; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LayerAllocations; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TextureUsages; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWeightmapData, Textures) == 0, "Offset mismatch for FWeightmapData::Textures");
static_assert(offsetof(FWeightmapData, LayerAllocations) == 16, "Offset mismatch for FWeightmapData::LayerAllocations");
static_assert(offsetof(FWeightmapData, TextureUsages) == 32, "Offset mismatch for FWeightmapData::TextureUsages");

// /Script/Landscape.WeightmapLayerAllocationInfo
// Kind: ScriptStruct; super: none
struct FWeightmapLayerAllocationInfo
{
public:
    void* LayerInfo; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WeightmapTextureIndex; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t WeightmapTextureChannel; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FWeightmapLayerAllocationInfo, LayerInfo) == 0, "Offset mismatch for FWeightmapLayerAllocationInfo::LayerInfo");
static_assert(offsetof(FWeightmapLayerAllocationInfo, WeightmapTextureIndex) == 8, "Offset mismatch for FWeightmapLayerAllocationInfo::WeightmapTextureIndex");
static_assert(offsetof(FWeightmapLayerAllocationInfo, WeightmapTextureChannel) == 9, "Offset mismatch for FWeightmapLayerAllocationInfo::WeightmapTextureChannel");

// /Script/Landscape.ControlPointMeshActor
// Kind: Class; super: Actor
class UControlPointMeshActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ControlPointMeshComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UControlPointMeshActor, ControlPointMeshComponent) == 624, "Offset mismatch for UControlPointMeshActor::ControlPointMeshComponent");

// /Script/Landscape.ControlPointMeshComponent
// Kind: Class; super: StaticMeshComponent
class UControlPointMeshComponent
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    float VirtualTextureMainPassMaxDrawDistance; // 0x06B0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UControlPointMeshComponent, VirtualTextureMainPassMaxDrawDistance) == 1712, "Offset mismatch for UControlPointMeshComponent::VirtualTextureMainPassMaxDrawDistance");

// /Script/Landscape.Landscape
// Kind: Class; super: LandscapeProxy
class ULandscape
{
public:
    std::uint8_t Pad_0000[0x688]; // 0x0000
    std::uint8_t bGrassEnabled; // 0x0688 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandscape, bGrassEnabled) == 1672, "Offset mismatch for ULandscape::bGrassEnabled");

// /Script/Landscape.LandscapeBlueprintBrushBase
// Kind: Class; super: Actor
class ULandscapeBlueprintBrushBase
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t UpdateOnPropertyChange; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AffectHeightmap; // 0x0271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AffectWeightmap; // 0x0272 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AffectVisibilityLayer; // 0x0273 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0274
    TArray<void*> AffectedWeightmapLayers; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUsePowerOfTwoRenderTarget; // 0x0288 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandscapeBlueprintBrushBase, UpdateOnPropertyChange) == 624, "Offset mismatch for ULandscapeBlueprintBrushBase::UpdateOnPropertyChange");
static_assert(offsetof(ULandscapeBlueprintBrushBase, AffectHeightmap) == 625, "Offset mismatch for ULandscapeBlueprintBrushBase::AffectHeightmap");
static_assert(offsetof(ULandscapeBlueprintBrushBase, AffectWeightmap) == 626, "Offset mismatch for ULandscapeBlueprintBrushBase::AffectWeightmap");
static_assert(offsetof(ULandscapeBlueprintBrushBase, AffectVisibilityLayer) == 627, "Offset mismatch for ULandscapeBlueprintBrushBase::AffectVisibilityLayer");
static_assert(offsetof(ULandscapeBlueprintBrushBase, AffectedWeightmapLayers) == 632, "Offset mismatch for ULandscapeBlueprintBrushBase::AffectedWeightmapLayers");
static_assert(offsetof(ULandscapeBlueprintBrushBase, bUsePowerOfTwoRenderTarget) == 648, "Offset mismatch for ULandscapeBlueprintBrushBase::bUsePowerOfTwoRenderTarget");

// /Script/Landscape.LandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_DEPRECATED
// Kind: Class; super: Interface
class ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_DEPRECATED
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeComponent
// Kind: Class; super: PrimitiveComponent
class ULandscapeComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::int32_t SectionBaseX; // 0x0570 (Size: 0x4, Type: IntProperty)
    std::int32_t SectionBaseY; // 0x0574 (Size: 0x4, Type: IntProperty)
    std::int32_t ComponentSizeQuads; // 0x0578 (Size: 0x4, Type: IntProperty)
    std::int32_t SubsectionSizeQuads; // 0x057C (Size: 0x4, Type: IntProperty)
    std::int32_t NumSubsections; // 0x0580 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0584
    void* OverrideMaterial; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* OverrideHoleMaterial; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialInstances; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialInstancesDynamic; // 0x05A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LODIndexToMaterialIndex; // 0x05B8 (Size: 0x10, Type: ArrayProperty)
    void* XYOffsetmapTexture; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WeightmapScaleBias[0x20]; // 0x05D0 (Size: 0x20, Type: StructProperty)
    float WeightmapSubsectionOffset; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x05F4
    std::uint8_t HeightmapScaleBias[0x20]; // 0x0600 (Size: 0x20, Type: StructProperty)
    std::uint8_t CachedLocalBox[0x38]; // 0x0620 (Size: 0x38, Type: StructProperty)
    TArray<void*> MipToMipMaxDeltas; // 0x0658 (Size: 0x10, Type: ArrayProperty)
    void* CollisionComponentRef; // 0x0668 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUserTriggeredChangeRequested; // 0x0670 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNaniteActive; // 0x0671 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0672
    void* HeightmapTexture; // 0x0678 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WeightmapLayerAllocations; // 0x0680 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WeightmapTextures; // 0x0690 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerLODOverrideMaterials; // 0x06A0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> NamedGrassTypes; // 0x06B0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0004[0x10]; // 0x06C0
    std::uint8_t MapBuildDataId[0x10]; // 0x06D0 (Size: 0x10, Type: StructProperty)
    std::int32_t CollisionMipLevel; // 0x06E0 (Size: 0x4, Type: IntProperty)
    std::int32_t SimpleCollisionMipLevel; // 0x06E4 (Size: 0x4, Type: IntProperty)
    float NegativeZBoundsExtension; // 0x06E8 (Size: 0x4, Type: FloatProperty)
    float PositiveZBoundsExtension; // 0x06EC (Size: 0x4, Type: FloatProperty)
    float StaticLightingResolution; // 0x06F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t ForcedLOD; // 0x06F4 (Size: 0x4, Type: IntProperty)
    std::int32_t LODBias; // 0x06F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x06FC
    void* RegisteredEdgeFixup; // 0x0700 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x0708
    TArray<void*> MobileMaterialInterfaces; // 0x0710 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MobileWeightmapTextures; // 0x0720 (Size: 0x10, Type: ArrayProperty)
    void* MobileWeightmapTextureArray; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MobileWeightmapLayerAllocations; // 0x0738 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeComponent, SectionBaseX) == 1392, "Offset mismatch for ULandscapeComponent::SectionBaseX");
static_assert(offsetof(ULandscapeComponent, SectionBaseY) == 1396, "Offset mismatch for ULandscapeComponent::SectionBaseY");
static_assert(offsetof(ULandscapeComponent, ComponentSizeQuads) == 1400, "Offset mismatch for ULandscapeComponent::ComponentSizeQuads");
static_assert(offsetof(ULandscapeComponent, SubsectionSizeQuads) == 1404, "Offset mismatch for ULandscapeComponent::SubsectionSizeQuads");
static_assert(offsetof(ULandscapeComponent, NumSubsections) == 1408, "Offset mismatch for ULandscapeComponent::NumSubsections");
static_assert(offsetof(ULandscapeComponent, OverrideMaterial) == 1416, "Offset mismatch for ULandscapeComponent::OverrideMaterial");
static_assert(offsetof(ULandscapeComponent, OverrideHoleMaterial) == 1424, "Offset mismatch for ULandscapeComponent::OverrideHoleMaterial");
static_assert(offsetof(ULandscapeComponent, MaterialInstances) == 1432, "Offset mismatch for ULandscapeComponent::MaterialInstances");
static_assert(offsetof(ULandscapeComponent, MaterialInstancesDynamic) == 1448, "Offset mismatch for ULandscapeComponent::MaterialInstancesDynamic");
static_assert(offsetof(ULandscapeComponent, LODIndexToMaterialIndex) == 1464, "Offset mismatch for ULandscapeComponent::LODIndexToMaterialIndex");
static_assert(offsetof(ULandscapeComponent, XYOffsetmapTexture) == 1480, "Offset mismatch for ULandscapeComponent::XYOffsetmapTexture");
static_assert(offsetof(ULandscapeComponent, WeightmapScaleBias) == 1488, "Offset mismatch for ULandscapeComponent::WeightmapScaleBias");
static_assert(offsetof(ULandscapeComponent, WeightmapSubsectionOffset) == 1520, "Offset mismatch for ULandscapeComponent::WeightmapSubsectionOffset");
static_assert(offsetof(ULandscapeComponent, HeightmapScaleBias) == 1536, "Offset mismatch for ULandscapeComponent::HeightmapScaleBias");
static_assert(offsetof(ULandscapeComponent, CachedLocalBox) == 1568, "Offset mismatch for ULandscapeComponent::CachedLocalBox");
static_assert(offsetof(ULandscapeComponent, MipToMipMaxDeltas) == 1624, "Offset mismatch for ULandscapeComponent::MipToMipMaxDeltas");
static_assert(offsetof(ULandscapeComponent, CollisionComponentRef) == 1640, "Offset mismatch for ULandscapeComponent::CollisionComponentRef");
static_assert(offsetof(ULandscapeComponent, bUserTriggeredChangeRequested) == 1648, "Offset mismatch for ULandscapeComponent::bUserTriggeredChangeRequested");
static_assert(offsetof(ULandscapeComponent, bNaniteActive) == 1649, "Offset mismatch for ULandscapeComponent::bNaniteActive");
static_assert(offsetof(ULandscapeComponent, HeightmapTexture) == 1656, "Offset mismatch for ULandscapeComponent::HeightmapTexture");
static_assert(offsetof(ULandscapeComponent, WeightmapLayerAllocations) == 1664, "Offset mismatch for ULandscapeComponent::WeightmapLayerAllocations");
static_assert(offsetof(ULandscapeComponent, WeightmapTextures) == 1680, "Offset mismatch for ULandscapeComponent::WeightmapTextures");
static_assert(offsetof(ULandscapeComponent, PerLODOverrideMaterials) == 1696, "Offset mismatch for ULandscapeComponent::PerLODOverrideMaterials");
static_assert(offsetof(ULandscapeComponent, NamedGrassTypes) == 1712, "Offset mismatch for ULandscapeComponent::NamedGrassTypes");
static_assert(offsetof(ULandscapeComponent, MapBuildDataId) == 1744, "Offset mismatch for ULandscapeComponent::MapBuildDataId");
static_assert(offsetof(ULandscapeComponent, CollisionMipLevel) == 1760, "Offset mismatch for ULandscapeComponent::CollisionMipLevel");
static_assert(offsetof(ULandscapeComponent, SimpleCollisionMipLevel) == 1764, "Offset mismatch for ULandscapeComponent::SimpleCollisionMipLevel");
static_assert(offsetof(ULandscapeComponent, NegativeZBoundsExtension) == 1768, "Offset mismatch for ULandscapeComponent::NegativeZBoundsExtension");
static_assert(offsetof(ULandscapeComponent, PositiveZBoundsExtension) == 1772, "Offset mismatch for ULandscapeComponent::PositiveZBoundsExtension");
static_assert(offsetof(ULandscapeComponent, StaticLightingResolution) == 1776, "Offset mismatch for ULandscapeComponent::StaticLightingResolution");
static_assert(offsetof(ULandscapeComponent, ForcedLOD) == 1780, "Offset mismatch for ULandscapeComponent::ForcedLOD");
static_assert(offsetof(ULandscapeComponent, LODBias) == 1784, "Offset mismatch for ULandscapeComponent::LODBias");
static_assert(offsetof(ULandscapeComponent, RegisteredEdgeFixup) == 1792, "Offset mismatch for ULandscapeComponent::RegisteredEdgeFixup");
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterfaces) == 1808, "Offset mismatch for ULandscapeComponent::MobileMaterialInterfaces");
static_assert(offsetof(ULandscapeComponent, MobileWeightmapTextures) == 1824, "Offset mismatch for ULandscapeComponent::MobileWeightmapTextures");
static_assert(offsetof(ULandscapeComponent, MobileWeightmapTextureArray) == 1840, "Offset mismatch for ULandscapeComponent::MobileWeightmapTextureArray");
static_assert(offsetof(ULandscapeComponent, MobileWeightmapLayerAllocations) == 1848, "Offset mismatch for ULandscapeComponent::MobileWeightmapLayerAllocations");

// /Script/Landscape.LandscapeDefaultEditLayerRenderer
// Kind: Class; super: Object
class ULandscapeDefaultEditLayerRenderer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeEditLayer
// Kind: Class; super: LandscapeEditLayerPersistent
class ULandscapeEditLayer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeEditLayerBase
// Kind: Class; super: Object
class ULandscapeEditLayerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeEditLayerPersistent
// Kind: Class; super: LandscapeEditLayerBase
class ULandscapeEditLayerPersistent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeEditLayerProcedural
// Kind: Class; super: LandscapeEditLayerBase
class ULandscapeEditLayerProcedural
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeEditLayerRenderer
// Kind: Class; super: Interface
class ULandscapeEditLayerRenderer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeEditLayerSplines
// Kind: Class; super: LandscapeEditLayerPersistent
class ULandscapeEditLayerSplines
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeEditResourcesSubsystem
// Kind: Class; super: EngineSubsystem
class ULandscapeEditResourcesSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> ScratchRenderTargets; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeEditResourcesSubsystem, ScratchRenderTargets) == 48, "Offset mismatch for ULandscapeEditResourcesSubsystem::ScratchRenderTargets");

// /Script/Landscape.LandscapeGizmoActiveActor
// Kind: Class; super: LandscapeGizmoActor
class ULandscapeGizmoActiveActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeGizmoActiveActor, PrimaryActorTick) == 40, "Offset mismatch for ULandscapeGizmoActiveActor::PrimaryActorTick");
static_assert(offsetof(ULandscapeGizmoActiveActor, bAlwaysRelevant) == 88, "Offset mismatch for ULandscapeGizmoActiveActor::bAlwaysRelevant");
static_assert(offsetof(ULandscapeGizmoActiveActor, bExchangedRoles) == 89, "Offset mismatch for ULandscapeGizmoActiveActor::bExchangedRoles");
static_assert(offsetof(ULandscapeGizmoActiveActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for ULandscapeGizmoActiveActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(ULandscapeGizmoActiveActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for ULandscapeGizmoActiveActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(ULandscapeGizmoActiveActor, bActorEnableCollision) == 93, "Offset mismatch for ULandscapeGizmoActiveActor::bActorEnableCollision");
static_assert(offsetof(ULandscapeGizmoActiveActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for ULandscapeGizmoActiveActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(ULandscapeGizmoActiveActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for ULandscapeGizmoActiveActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(ULandscapeGizmoActiveActor, RemoteRole) == 96, "Offset mismatch for ULandscapeGizmoActiveActor::RemoteRole");
static_assert(offsetof(ULandscapeGizmoActiveActor, InitialLifeSpan) == 100, "Offset mismatch for ULandscapeGizmoActiveActor::InitialLifeSpan");
static_assert(offsetof(ULandscapeGizmoActiveActor, CustomTimeDilation) == 104, "Offset mismatch for ULandscapeGizmoActiveActor::CustomTimeDilation");
static_assert(offsetof(ULandscapeGizmoActiveActor, RayTracingGroupId) == 108, "Offset mismatch for ULandscapeGizmoActiveActor::RayTracingGroupId");
static_assert(offsetof(ULandscapeGizmoActiveActor, AttachmentReplication) == 112, "Offset mismatch for ULandscapeGizmoActiveActor::AttachmentReplication");
static_assert(offsetof(ULandscapeGizmoActiveActor, ReplicatedMovement) == 208, "Offset mismatch for ULandscapeGizmoActiveActor::ReplicatedMovement");
static_assert(offsetof(ULandscapeGizmoActiveActor, Owner) == 344, "Offset mismatch for ULandscapeGizmoActiveActor::Owner");
static_assert(offsetof(ULandscapeGizmoActiveActor, NetDriverName) == 352, "Offset mismatch for ULandscapeGizmoActiveActor::NetDriverName");
static_assert(offsetof(ULandscapeGizmoActiveActor, Role) == 356, "Offset mismatch for ULandscapeGizmoActiveActor::Role");
static_assert(offsetof(ULandscapeGizmoActiveActor, NetDormancy) == 357, "Offset mismatch for ULandscapeGizmoActiveActor::NetDormancy");
static_assert(offsetof(ULandscapeGizmoActiveActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for ULandscapeGizmoActiveActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(ULandscapeGizmoActiveActor, AutoReceiveInput) == 359, "Offset mismatch for ULandscapeGizmoActiveActor::AutoReceiveInput");
static_assert(offsetof(ULandscapeGizmoActiveActor, InputPriority) == 360, "Offset mismatch for ULandscapeGizmoActiveActor::InputPriority");
static_assert(offsetof(ULandscapeGizmoActiveActor, InputComponent) == 368, "Offset mismatch for ULandscapeGizmoActiveActor::InputComponent");
static_assert(offsetof(ULandscapeGizmoActiveActor, NetTag) == 376, "Offset mismatch for ULandscapeGizmoActiveActor::NetTag");
static_assert(offsetof(ULandscapeGizmoActiveActor, NetCullDistanceSquared) == 380, "Offset mismatch for ULandscapeGizmoActiveActor::NetCullDistanceSquared");
static_assert(offsetof(ULandscapeGizmoActiveActor, NetUpdateFrequency) == 384, "Offset mismatch for ULandscapeGizmoActiveActor::NetUpdateFrequency");
static_assert(offsetof(ULandscapeGizmoActiveActor, MinNetUpdateFrequency) == 388, "Offset mismatch for ULandscapeGizmoActiveActor::MinNetUpdateFrequency");
static_assert(offsetof(ULandscapeGizmoActiveActor, NetPriority) == 392, "Offset mismatch for ULandscapeGizmoActiveActor::NetPriority");
static_assert(offsetof(ULandscapeGizmoActiveActor, PhysicsReplicationMode) == 396, "Offset mismatch for ULandscapeGizmoActiveActor::PhysicsReplicationMode");
static_assert(offsetof(ULandscapeGizmoActiveActor, Instigator) == 408, "Offset mismatch for ULandscapeGizmoActiveActor::Instigator");
static_assert(offsetof(ULandscapeGizmoActiveActor, Children) == 416, "Offset mismatch for ULandscapeGizmoActiveActor::Children");
static_assert(offsetof(ULandscapeGizmoActiveActor, RootComponent) == 432, "Offset mismatch for ULandscapeGizmoActiveActor::RootComponent");
static_assert(offsetof(ULandscapeGizmoActiveActor, HLODLayer) == 448, "Offset mismatch for ULandscapeGizmoActiveActor::HLODLayer");
static_assert(offsetof(ULandscapeGizmoActiveActor, Layers) == 456, "Offset mismatch for ULandscapeGizmoActiveActor::Layers");
static_assert(offsetof(ULandscapeGizmoActiveActor, ParentComponent) == 472, "Offset mismatch for ULandscapeGizmoActiveActor::ParentComponent");
static_assert(offsetof(ULandscapeGizmoActiveActor, Tags) == 496, "Offset mismatch for ULandscapeGizmoActiveActor::Tags");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnTakeAnyDamage) == 512, "Offset mismatch for ULandscapeGizmoActiveActor::OnTakeAnyDamage");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnTakePointDamage) == 513, "Offset mismatch for ULandscapeGizmoActiveActor::OnTakePointDamage");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnTakeRadialDamage) == 514, "Offset mismatch for ULandscapeGizmoActiveActor::OnTakeRadialDamage");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnActorBeginOverlap) == 515, "Offset mismatch for ULandscapeGizmoActiveActor::OnActorBeginOverlap");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnActorEndOverlap) == 516, "Offset mismatch for ULandscapeGizmoActiveActor::OnActorEndOverlap");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnBeginCursorOver) == 517, "Offset mismatch for ULandscapeGizmoActiveActor::OnBeginCursorOver");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnEndCursorOver) == 518, "Offset mismatch for ULandscapeGizmoActiveActor::OnEndCursorOver");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnClicked) == 519, "Offset mismatch for ULandscapeGizmoActiveActor::OnClicked");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnReleased) == 520, "Offset mismatch for ULandscapeGizmoActiveActor::OnReleased");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnInputTouchBegin) == 521, "Offset mismatch for ULandscapeGizmoActiveActor::OnInputTouchBegin");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnInputTouchEnd) == 522, "Offset mismatch for ULandscapeGizmoActiveActor::OnInputTouchEnd");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnInputTouchEnter) == 523, "Offset mismatch for ULandscapeGizmoActiveActor::OnInputTouchEnter");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnInputTouchLeave) == 524, "Offset mismatch for ULandscapeGizmoActiveActor::OnInputTouchLeave");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnActorHit) == 525, "Offset mismatch for ULandscapeGizmoActiveActor::OnActorHit");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnDestroyed) == 526, "Offset mismatch for ULandscapeGizmoActiveActor::OnDestroyed");
static_assert(offsetof(ULandscapeGizmoActiveActor, OnEndPlay) == 527, "Offset mismatch for ULandscapeGizmoActiveActor::OnEndPlay");
static_assert(offsetof(ULandscapeGizmoActiveActor, InstanceComponents) == 592, "Offset mismatch for ULandscapeGizmoActiveActor::InstanceComponents");
static_assert(offsetof(ULandscapeGizmoActiveActor, BlueprintCreatedComponents) == 608, "Offset mismatch for ULandscapeGizmoActiveActor::BlueprintCreatedComponents");

// /Script/Landscape.LandscapeGizmoActor
// Kind: Class; super: Actor
class ULandscapeGizmoActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeGizmoActor, PrimaryActorTick) == 40, "Offset mismatch for ULandscapeGizmoActor::PrimaryActorTick");
static_assert(offsetof(ULandscapeGizmoActor, bAlwaysRelevant) == 88, "Offset mismatch for ULandscapeGizmoActor::bAlwaysRelevant");
static_assert(offsetof(ULandscapeGizmoActor, bExchangedRoles) == 89, "Offset mismatch for ULandscapeGizmoActor::bExchangedRoles");
static_assert(offsetof(ULandscapeGizmoActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for ULandscapeGizmoActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(ULandscapeGizmoActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for ULandscapeGizmoActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(ULandscapeGizmoActor, bActorEnableCollision) == 93, "Offset mismatch for ULandscapeGizmoActor::bActorEnableCollision");
static_assert(offsetof(ULandscapeGizmoActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for ULandscapeGizmoActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(ULandscapeGizmoActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for ULandscapeGizmoActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(ULandscapeGizmoActor, RemoteRole) == 96, "Offset mismatch for ULandscapeGizmoActor::RemoteRole");
static_assert(offsetof(ULandscapeGizmoActor, InitialLifeSpan) == 100, "Offset mismatch for ULandscapeGizmoActor::InitialLifeSpan");
static_assert(offsetof(ULandscapeGizmoActor, CustomTimeDilation) == 104, "Offset mismatch for ULandscapeGizmoActor::CustomTimeDilation");
static_assert(offsetof(ULandscapeGizmoActor, RayTracingGroupId) == 108, "Offset mismatch for ULandscapeGizmoActor::RayTracingGroupId");
static_assert(offsetof(ULandscapeGizmoActor, AttachmentReplication) == 112, "Offset mismatch for ULandscapeGizmoActor::AttachmentReplication");
static_assert(offsetof(ULandscapeGizmoActor, ReplicatedMovement) == 208, "Offset mismatch for ULandscapeGizmoActor::ReplicatedMovement");
static_assert(offsetof(ULandscapeGizmoActor, Owner) == 344, "Offset mismatch for ULandscapeGizmoActor::Owner");
static_assert(offsetof(ULandscapeGizmoActor, NetDriverName) == 352, "Offset mismatch for ULandscapeGizmoActor::NetDriverName");
static_assert(offsetof(ULandscapeGizmoActor, Role) == 356, "Offset mismatch for ULandscapeGizmoActor::Role");
static_assert(offsetof(ULandscapeGizmoActor, NetDormancy) == 357, "Offset mismatch for ULandscapeGizmoActor::NetDormancy");
static_assert(offsetof(ULandscapeGizmoActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for ULandscapeGizmoActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(ULandscapeGizmoActor, AutoReceiveInput) == 359, "Offset mismatch for ULandscapeGizmoActor::AutoReceiveInput");
static_assert(offsetof(ULandscapeGizmoActor, InputPriority) == 360, "Offset mismatch for ULandscapeGizmoActor::InputPriority");
static_assert(offsetof(ULandscapeGizmoActor, InputComponent) == 368, "Offset mismatch for ULandscapeGizmoActor::InputComponent");
static_assert(offsetof(ULandscapeGizmoActor, NetTag) == 376, "Offset mismatch for ULandscapeGizmoActor::NetTag");
static_assert(offsetof(ULandscapeGizmoActor, NetCullDistanceSquared) == 380, "Offset mismatch for ULandscapeGizmoActor::NetCullDistanceSquared");
static_assert(offsetof(ULandscapeGizmoActor, NetUpdateFrequency) == 384, "Offset mismatch for ULandscapeGizmoActor::NetUpdateFrequency");
static_assert(offsetof(ULandscapeGizmoActor, MinNetUpdateFrequency) == 388, "Offset mismatch for ULandscapeGizmoActor::MinNetUpdateFrequency");
static_assert(offsetof(ULandscapeGizmoActor, NetPriority) == 392, "Offset mismatch for ULandscapeGizmoActor::NetPriority");
static_assert(offsetof(ULandscapeGizmoActor, PhysicsReplicationMode) == 396, "Offset mismatch for ULandscapeGizmoActor::PhysicsReplicationMode");
static_assert(offsetof(ULandscapeGizmoActor, Instigator) == 408, "Offset mismatch for ULandscapeGizmoActor::Instigator");
static_assert(offsetof(ULandscapeGizmoActor, Children) == 416, "Offset mismatch for ULandscapeGizmoActor::Children");
static_assert(offsetof(ULandscapeGizmoActor, RootComponent) == 432, "Offset mismatch for ULandscapeGizmoActor::RootComponent");
static_assert(offsetof(ULandscapeGizmoActor, HLODLayer) == 448, "Offset mismatch for ULandscapeGizmoActor::HLODLayer");
static_assert(offsetof(ULandscapeGizmoActor, Layers) == 456, "Offset mismatch for ULandscapeGizmoActor::Layers");
static_assert(offsetof(ULandscapeGizmoActor, ParentComponent) == 472, "Offset mismatch for ULandscapeGizmoActor::ParentComponent");
static_assert(offsetof(ULandscapeGizmoActor, Tags) == 496, "Offset mismatch for ULandscapeGizmoActor::Tags");
static_assert(offsetof(ULandscapeGizmoActor, OnTakeAnyDamage) == 512, "Offset mismatch for ULandscapeGizmoActor::OnTakeAnyDamage");
static_assert(offsetof(ULandscapeGizmoActor, OnTakePointDamage) == 513, "Offset mismatch for ULandscapeGizmoActor::OnTakePointDamage");
static_assert(offsetof(ULandscapeGizmoActor, OnTakeRadialDamage) == 514, "Offset mismatch for ULandscapeGizmoActor::OnTakeRadialDamage");
static_assert(offsetof(ULandscapeGizmoActor, OnActorBeginOverlap) == 515, "Offset mismatch for ULandscapeGizmoActor::OnActorBeginOverlap");
static_assert(offsetof(ULandscapeGizmoActor, OnActorEndOverlap) == 516, "Offset mismatch for ULandscapeGizmoActor::OnActorEndOverlap");
static_assert(offsetof(ULandscapeGizmoActor, OnBeginCursorOver) == 517, "Offset mismatch for ULandscapeGizmoActor::OnBeginCursorOver");
static_assert(offsetof(ULandscapeGizmoActor, OnEndCursorOver) == 518, "Offset mismatch for ULandscapeGizmoActor::OnEndCursorOver");
static_assert(offsetof(ULandscapeGizmoActor, OnClicked) == 519, "Offset mismatch for ULandscapeGizmoActor::OnClicked");
static_assert(offsetof(ULandscapeGizmoActor, OnReleased) == 520, "Offset mismatch for ULandscapeGizmoActor::OnReleased");
static_assert(offsetof(ULandscapeGizmoActor, OnInputTouchBegin) == 521, "Offset mismatch for ULandscapeGizmoActor::OnInputTouchBegin");
static_assert(offsetof(ULandscapeGizmoActor, OnInputTouchEnd) == 522, "Offset mismatch for ULandscapeGizmoActor::OnInputTouchEnd");
static_assert(offsetof(ULandscapeGizmoActor, OnInputTouchEnter) == 523, "Offset mismatch for ULandscapeGizmoActor::OnInputTouchEnter");
static_assert(offsetof(ULandscapeGizmoActor, OnInputTouchLeave) == 524, "Offset mismatch for ULandscapeGizmoActor::OnInputTouchLeave");
static_assert(offsetof(ULandscapeGizmoActor, OnActorHit) == 525, "Offset mismatch for ULandscapeGizmoActor::OnActorHit");
static_assert(offsetof(ULandscapeGizmoActor, OnDestroyed) == 526, "Offset mismatch for ULandscapeGizmoActor::OnDestroyed");
static_assert(offsetof(ULandscapeGizmoActor, OnEndPlay) == 527, "Offset mismatch for ULandscapeGizmoActor::OnEndPlay");
static_assert(offsetof(ULandscapeGizmoActor, InstanceComponents) == 592, "Offset mismatch for ULandscapeGizmoActor::InstanceComponents");
static_assert(offsetof(ULandscapeGizmoActor, BlueprintCreatedComponents) == 608, "Offset mismatch for ULandscapeGizmoActor::BlueprintCreatedComponents");

// /Script/Landscape.LandscapeGizmoRenderComponent
// Kind: Class; super: PrimitiveComponent
class ULandscapeGizmoRenderComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULandscapeGizmoRenderComponent, MinDrawDistance) == 632, "Offset mismatch for ULandscapeGizmoRenderComponent::MinDrawDistance");
static_assert(offsetof(ULandscapeGizmoRenderComponent, LDMaxDrawDistance) == 636, "Offset mismatch for ULandscapeGizmoRenderComponent::LDMaxDrawDistance");
static_assert(offsetof(ULandscapeGizmoRenderComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for ULandscapeGizmoRenderComponent::CachedMaxDrawDistance");
static_assert(offsetof(ULandscapeGizmoRenderComponent, DepthPriorityGroup) == 644, "Offset mismatch for ULandscapeGizmoRenderComponent::DepthPriorityGroup");
static_assert(offsetof(ULandscapeGizmoRenderComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for ULandscapeGizmoRenderComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(ULandscapeGizmoRenderComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for ULandscapeGizmoRenderComponent::IndirectLightingCacheQuality");
static_assert(offsetof(ULandscapeGizmoRenderComponent, LightmapType) == 647, "Offset mismatch for ULandscapeGizmoRenderComponent::LightmapType");
static_assert(offsetof(ULandscapeGizmoRenderComponent, HLODBatchingPolicy) == 648, "Offset mismatch for ULandscapeGizmoRenderComponent::HLODBatchingPolicy");
static_assert(offsetof(ULandscapeGizmoRenderComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for ULandscapeGizmoRenderComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(ULandscapeGizmoRenderComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for ULandscapeGizmoRenderComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(ULandscapeGizmoRenderComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for ULandscapeGizmoRenderComponent::bAllowCullDistanceVolume");
static_assert(offsetof(ULandscapeGizmoRenderComponent, bHoldout) == 652, "Offset mismatch for ULandscapeGizmoRenderComponent::bHoldout");
static_assert(offsetof(ULandscapeGizmoRenderComponent, CastShadow) == 653, "Offset mismatch for ULandscapeGizmoRenderComponent::CastShadow");
static_assert(offsetof(ULandscapeGizmoRenderComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for ULandscapeGizmoRenderComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(ULandscapeGizmoRenderComponent, bCastCinematicShadow) == 655, "Offset mismatch for ULandscapeGizmoRenderComponent::bCastCinematicShadow");
static_assert(offsetof(ULandscapeGizmoRenderComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for ULandscapeGizmoRenderComponent::AlwaysLoadOnClient");
static_assert(offsetof(ULandscapeGizmoRenderComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for ULandscapeGizmoRenderComponent::bHiddenInSceneCapture");
static_assert(offsetof(ULandscapeGizmoRenderComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for ULandscapeGizmoRenderComponent::FirstPersonPrimitiveType");
static_assert(offsetof(ULandscapeGizmoRenderComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for ULandscapeGizmoRenderComponent::bHasNoStreamableTextures");
static_assert(offsetof(ULandscapeGizmoRenderComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for ULandscapeGizmoRenderComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(ULandscapeGizmoRenderComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for ULandscapeGizmoRenderComponent::CanCharacterStepUpOn");
static_assert(offsetof(ULandscapeGizmoRenderComponent, LightingChannels) == 663, "Offset mismatch for ULandscapeGizmoRenderComponent::LightingChannels");
static_assert(offsetof(ULandscapeGizmoRenderComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for ULandscapeGizmoRenderComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(ULandscapeGizmoRenderComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for ULandscapeGizmoRenderComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(ULandscapeGizmoRenderComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for ULandscapeGizmoRenderComponent::ExcludeFromHLODLevels");
static_assert(offsetof(ULandscapeGizmoRenderComponent, RayTracingGroupId) == 668, "Offset mismatch for ULandscapeGizmoRenderComponent::RayTracingGroupId");
static_assert(offsetof(ULandscapeGizmoRenderComponent, VisibilityId) == 672, "Offset mismatch for ULandscapeGizmoRenderComponent::VisibilityId");
static_assert(offsetof(ULandscapeGizmoRenderComponent, CustomDepthStencilValue) == 676, "Offset mismatch for ULandscapeGizmoRenderComponent::CustomDepthStencilValue");
static_assert(offsetof(ULandscapeGizmoRenderComponent, CustomPrimitiveData) == 680, "Offset mismatch for ULandscapeGizmoRenderComponent::CustomPrimitiveData");
static_assert(offsetof(ULandscapeGizmoRenderComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for ULandscapeGizmoRenderComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(ULandscapeGizmoRenderComponent, TranslucencySortPriority) == 776, "Offset mismatch for ULandscapeGizmoRenderComponent::TranslucencySortPriority");
static_assert(offsetof(ULandscapeGizmoRenderComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for ULandscapeGizmoRenderComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(ULandscapeGizmoRenderComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for ULandscapeGizmoRenderComponent::RuntimeVirtualTextures");
static_assert(offsetof(ULandscapeGizmoRenderComponent, VirtualTextureLodBias) == 800, "Offset mismatch for ULandscapeGizmoRenderComponent::VirtualTextureLodBias");
static_assert(offsetof(ULandscapeGizmoRenderComponent, VirtualTextureCullMips) == 801, "Offset mismatch for ULandscapeGizmoRenderComponent::VirtualTextureCullMips");
static_assert(offsetof(ULandscapeGizmoRenderComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for ULandscapeGizmoRenderComponent::VirtualTextureMinCoverage");
static_assert(offsetof(ULandscapeGizmoRenderComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for ULandscapeGizmoRenderComponent::VirtualTextureRenderPassType");
static_assert(offsetof(ULandscapeGizmoRenderComponent, BoundsScale) == 840, "Offset mismatch for ULandscapeGizmoRenderComponent::BoundsScale");
static_assert(offsetof(ULandscapeGizmoRenderComponent, MoveIgnoreActors) == 848, "Offset mismatch for ULandscapeGizmoRenderComponent::MoveIgnoreActors");
static_assert(offsetof(ULandscapeGizmoRenderComponent, MoveIgnoreComponents) == 864, "Offset mismatch for ULandscapeGizmoRenderComponent::MoveIgnoreComponents");
static_assert(offsetof(ULandscapeGizmoRenderComponent, BodyInstance) == 896, "Offset mismatch for ULandscapeGizmoRenderComponent::BodyInstance");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnComponentHit) == 1320, "Offset mismatch for ULandscapeGizmoRenderComponent::OnComponentHit");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for ULandscapeGizmoRenderComponent::OnComponentBeginOverlap");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for ULandscapeGizmoRenderComponent::OnComponentEndOverlap");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnComponentWake) == 1323, "Offset mismatch for ULandscapeGizmoRenderComponent::OnComponentWake");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnComponentSleep) == 1324, "Offset mismatch for ULandscapeGizmoRenderComponent::OnComponentSleep");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for ULandscapeGizmoRenderComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnBeginCursorOver) == 1327, "Offset mismatch for ULandscapeGizmoRenderComponent::OnBeginCursorOver");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnEndCursorOver) == 1328, "Offset mismatch for ULandscapeGizmoRenderComponent::OnEndCursorOver");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnClicked) == 1329, "Offset mismatch for ULandscapeGizmoRenderComponent::OnClicked");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnReleased) == 1330, "Offset mismatch for ULandscapeGizmoRenderComponent::OnReleased");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnInputTouchBegin) == 1331, "Offset mismatch for ULandscapeGizmoRenderComponent::OnInputTouchBegin");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnInputTouchEnd) == 1332, "Offset mismatch for ULandscapeGizmoRenderComponent::OnInputTouchEnd");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnInputTouchEnter) == 1333, "Offset mismatch for ULandscapeGizmoRenderComponent::OnInputTouchEnter");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnInputTouchLeave) == 1334, "Offset mismatch for ULandscapeGizmoRenderComponent::OnInputTouchLeave");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnTouchBegan) == 1335, "Offset mismatch for ULandscapeGizmoRenderComponent::OnTouchBegan");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnTouchEnded) == 1336, "Offset mismatch for ULandscapeGizmoRenderComponent::OnTouchEnded");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnTouchEntered) == 1337, "Offset mismatch for ULandscapeGizmoRenderComponent::OnTouchEntered");
static_assert(offsetof(ULandscapeGizmoRenderComponent, OnTouchExited) == 1338, "Offset mismatch for ULandscapeGizmoRenderComponent::OnTouchExited");
static_assert(offsetof(ULandscapeGizmoRenderComponent, LODParentPrimitive) == 1368, "Offset mismatch for ULandscapeGizmoRenderComponent::LODParentPrimitive");

// /Script/Landscape.LandscapeGrassType
// Kind: Class; super: Object
class ULandscapeGrassType
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> GrassVarieties; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableDensityScaling; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint32_t StateHash; // 0x003C (Size: 0x4, Type: UInt32Property)
    void* GrassMesh; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    float GrassDensity; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float PlacementJitter; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::int32_t StartCullDistance; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t EndCullDistance; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t RandomRotation; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AlignToSurface; // 0x0059 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandscapeGrassType, GrassVarieties) == 40, "Offset mismatch for ULandscapeGrassType::GrassVarieties");
static_assert(offsetof(ULandscapeGrassType, bEnableDensityScaling) == 56, "Offset mismatch for ULandscapeGrassType::bEnableDensityScaling");
static_assert(offsetof(ULandscapeGrassType, StateHash) == 60, "Offset mismatch for ULandscapeGrassType::StateHash");
static_assert(offsetof(ULandscapeGrassType, GrassMesh) == 64, "Offset mismatch for ULandscapeGrassType::GrassMesh");
static_assert(offsetof(ULandscapeGrassType, GrassDensity) == 72, "Offset mismatch for ULandscapeGrassType::GrassDensity");
static_assert(offsetof(ULandscapeGrassType, PlacementJitter) == 76, "Offset mismatch for ULandscapeGrassType::PlacementJitter");
static_assert(offsetof(ULandscapeGrassType, StartCullDistance) == 80, "Offset mismatch for ULandscapeGrassType::StartCullDistance");
static_assert(offsetof(ULandscapeGrassType, EndCullDistance) == 84, "Offset mismatch for ULandscapeGrassType::EndCullDistance");
static_assert(offsetof(ULandscapeGrassType, RandomRotation) == 88, "Offset mismatch for ULandscapeGrassType::RandomRotation");
static_assert(offsetof(ULandscapeGrassType, AlignToSurface) == 89, "Offset mismatch for ULandscapeGrassType::AlignToSurface");

// /Script/Landscape.LandscapeHLODBuilder
// Kind: Class; super: HLODBuilder
class ULandscapeHLODBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeHeightfieldCollisionComponent
// Kind: Class; super: PrimitiveComponent
class ULandscapeHeightfieldCollisionComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    TArray<void*> ComponentLayerInfos; // 0x0570 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SectionBaseX; // 0x0580 (Size: 0x4, Type: IntProperty)
    std::int32_t SectionBaseY; // 0x0584 (Size: 0x4, Type: IntProperty)
    std::int32_t CollisionSizeQuads; // 0x0588 (Size: 0x4, Type: IntProperty)
    float CollisionScale; // 0x058C (Size: 0x4, Type: FloatProperty)
    std::int32_t SimpleCollisionSizeQuads; // 0x0590 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0594
    TArray<void*> CollisionQuadFlags; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t HeightfieldGuid[0x10]; // 0x05A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedLocalBox[0x38]; // 0x05B8 (Size: 0x38, Type: StructProperty)
    void* RenderComponentRef; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DeferredSnapFoliageInstanceBoxes; // 0x05F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0608
    TArray<void*> CookedPhysicalMaterials; // 0x0618 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos) == 1392, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::ComponentLayerInfos");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, SectionBaseX) == 1408, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::SectionBaseX");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, SectionBaseY) == 1412, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::SectionBaseY");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionSizeQuads) == 1416, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::CollisionSizeQuads");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionScale) == 1420, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::CollisionScale");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, SimpleCollisionSizeQuads) == 1424, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::SimpleCollisionSizeQuads");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags) == 1432, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::CollisionQuadFlags");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid) == 1448, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::HeightfieldGuid");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CachedLocalBox) == 1464, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::CachedLocalBox");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, RenderComponentRef) == 1520, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::RenderComponentRef");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, DeferredSnapFoliageInstanceBoxes) == 1528, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::DeferredSnapFoliageInstanceBoxes");
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials) == 1560, "Offset mismatch for ULandscapeHeightfieldCollisionComponent::CookedPhysicalMaterials");

// /Script/Landscape.LandscapeHeightmapNormalsEditLayerRenderer
// Kind: Class; super: Object
class ULandscapeHeightmapNormalsEditLayerRenderer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeHeightmapTextureEdgeFixup
// Kind: Class; super: AssetUserData
class ULandscapeHeightmapTextureEdgeFixup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeInfo
// Kind: Class; super: Object
class ULandscapeInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> LandscapeActor; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t LandscapeGuid[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::int32_t ComponentSizeQuads; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t SubsectionSizeQuads; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::int32_t ComponentNumSubsections; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x24]; // 0x004C
    TArray<void*> StreamingProxies; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x40]; // 0x0080
    TArray<void*> SortedStreamingProxies; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeInfo, LandscapeActor) == 40, "Offset mismatch for ULandscapeInfo::LandscapeActor");
static_assert(offsetof(ULandscapeInfo, LandscapeGuid) == 48, "Offset mismatch for ULandscapeInfo::LandscapeGuid");
static_assert(offsetof(ULandscapeInfo, ComponentSizeQuads) == 64, "Offset mismatch for ULandscapeInfo::ComponentSizeQuads");
static_assert(offsetof(ULandscapeInfo, SubsectionSizeQuads) == 68, "Offset mismatch for ULandscapeInfo::SubsectionSizeQuads");
static_assert(offsetof(ULandscapeInfo, ComponentNumSubsections) == 72, "Offset mismatch for ULandscapeInfo::ComponentNumSubsections");
static_assert(offsetof(ULandscapeInfo, StreamingProxies) == 112, "Offset mismatch for ULandscapeInfo::StreamingProxies");
static_assert(offsetof(ULandscapeInfo, SortedStreamingProxies) == 192, "Offset mismatch for ULandscapeInfo::SortedStreamingProxies");

// /Script/Landscape.LandscapeInfoMap
// Kind: Class; super: Object
class ULandscapeInfoMap
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeLODStreamingProxy_DEPRECATED
// Kind: Class; super: StreamableRenderAsset
class ULandscapeLODStreamingProxy_DEPRECATED
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    double ForceMipLevelsToBeResidentTimestamp; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    std::int32_t NumCinematicMipLevels; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t NoRefStreamingLODBias[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::int32_t StreamingIndex; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0xC]; // 0x007C
    std::uint8_t NeverStream; // 0x0088 (Size: 0x1, Type: BoolProperty)
    // 0x0088 BoolProperty bForceMiplevelsToBeResident (shared storage)
    // 0x0088 BoolProperty bGlobalForceMipLevelsToBeResident (shared storage)
    // 0x0088 BoolProperty bHasStreamingUpdatePending (shared storage)
    // 0x0088 BoolProperty bIgnoreStreamingMipBias (shared storage)
    // 0x0088 BoolProperty bMarkAsEditorStreamingPool (shared storage)
    // 0x0088 BoolProperty bUseCinematicMipLevels (shared storage)
};

static_assert(offsetof(ULandscapeLODStreamingProxy_DEPRECATED, ForceMipLevelsToBeResidentTimestamp) == 64, "Offset mismatch for ULandscapeLODStreamingProxy_DEPRECATED::ForceMipLevelsToBeResidentTimestamp");
static_assert(offsetof(ULandscapeLODStreamingProxy_DEPRECATED, NumCinematicMipLevels) == 72, "Offset mismatch for ULandscapeLODStreamingProxy_DEPRECATED::NumCinematicMipLevels");
static_assert(offsetof(ULandscapeLODStreamingProxy_DEPRECATED, NoRefStreamingLODBias) == 80, "Offset mismatch for ULandscapeLODStreamingProxy_DEPRECATED::NoRefStreamingLODBias");
static_assert(offsetof(ULandscapeLODStreamingProxy_DEPRECATED, StreamingIndex) == 120, "Offset mismatch for ULandscapeLODStreamingProxy_DEPRECATED::StreamingIndex");
static_assert(offsetof(ULandscapeLODStreamingProxy_DEPRECATED, NeverStream) == 136, "Offset mismatch for ULandscapeLODStreamingProxy_DEPRECATED::NeverStream");

// /Script/Landscape.LandscapeLayerInfoObject
// Kind: Class; super: Object
class ULandscapeLayerInfoObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName LayerName; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* PhysMaterial; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float Hardness; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LayerUsageDebugColor[0x10]; // 0x003C (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendMethod; // 0x004C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    FName BlendGroup; // 0x0050 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(ULandscapeLayerInfoObject, LayerName) == 40, "Offset mismatch for ULandscapeLayerInfoObject::LayerName");
static_assert(offsetof(ULandscapeLayerInfoObject, PhysMaterial) == 48, "Offset mismatch for ULandscapeLayerInfoObject::PhysMaterial");
static_assert(offsetof(ULandscapeLayerInfoObject, Hardness) == 56, "Offset mismatch for ULandscapeLayerInfoObject::Hardness");
static_assert(offsetof(ULandscapeLayerInfoObject, LayerUsageDebugColor) == 60, "Offset mismatch for ULandscapeLayerInfoObject::LayerUsageDebugColor");
static_assert(offsetof(ULandscapeLayerInfoObject, BlendMethod) == 76, "Offset mismatch for ULandscapeLayerInfoObject::BlendMethod");
static_assert(offsetof(ULandscapeLayerInfoObject, BlendGroup) == 80, "Offset mismatch for ULandscapeLayerInfoObject::BlendGroup");

// /Script/Landscape.LandscapeMaterialInstanceConstant
// Kind: Class; super: MaterialInstanceConstant
class ULandscapeMaterialInstanceConstant
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    TArray<void*> TextureStreamingInfo; // 0x0358 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDisableTessellation; // 0x0368 (Size: 0x1, Type: BoolProperty)
    // 0x0368 BoolProperty bEditorToolUsage (shared storage)
    // 0x0368 BoolProperty bIsLayerThumbnail (shared storage)
    // 0x0368 BoolProperty bMobile (shared storage)
};

static_assert(offsetof(ULandscapeMaterialInstanceConstant, TextureStreamingInfo) == 856, "Offset mismatch for ULandscapeMaterialInstanceConstant::TextureStreamingInfo");
static_assert(offsetof(ULandscapeMaterialInstanceConstant, bDisableTessellation) == 872, "Offset mismatch for ULandscapeMaterialInstanceConstant::bDisableTessellation");

// /Script/Landscape.LandscapeMeshCollisionComponent_DEPRECATED
// Kind: Class; super: LandscapeHeightfieldCollisionComponent
class ULandscapeMeshCollisionComponent_DEPRECATED
{
public:
    std::uint8_t Pad_0000[0x680]; // 0x0000
    std::uint8_t MeshGuid[0x1]; // 0x0680 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULandscapeMeshCollisionComponent_DEPRECATED, MeshGuid) == 1664, "Offset mismatch for ULandscapeMeshCollisionComponent_DEPRECATED::MeshGuid");

// /Script/Landscape.LandscapeMeshProxyActor
// Kind: Class; super: Actor
class ULandscapeMeshProxyActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* LandscapeMeshProxyComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULandscapeMeshProxyActor, LandscapeMeshProxyComponent) == 624, "Offset mismatch for ULandscapeMeshProxyActor::LandscapeMeshProxyComponent");

// /Script/Landscape.LandscapeMeshProxyComponent
// Kind: Class; super: StaticMeshComponent
class ULandscapeMeshProxyComponent
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    std::uint8_t LandscapeGuid[0x10]; // 0x06B0 (Size: 0x10, Type: StructProperty)
    TArray<void*> ProxyComponentBases; // 0x06C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProxyComponentCentersObjectSpace; // 0x06D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ComponentXVectorObjectSpace[0x18]; // 0x06E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentYVectorObjectSpace[0x18]; // 0x06F8 (Size: 0x18, Type: StructProperty)
    std::int32_t ComponentResolution; // 0x0710 (Size: 0x4, Type: IntProperty)
    std::int8_t ProxyLOD; // 0x0714 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x3]; // 0x0715
    std::uint32_t LODGroupKey; // 0x0718 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(ULandscapeMeshProxyComponent, LandscapeGuid) == 1712, "Offset mismatch for ULandscapeMeshProxyComponent::LandscapeGuid");
static_assert(offsetof(ULandscapeMeshProxyComponent, ProxyComponentBases) == 1728, "Offset mismatch for ULandscapeMeshProxyComponent::ProxyComponentBases");
static_assert(offsetof(ULandscapeMeshProxyComponent, ProxyComponentCentersObjectSpace) == 1744, "Offset mismatch for ULandscapeMeshProxyComponent::ProxyComponentCentersObjectSpace");
static_assert(offsetof(ULandscapeMeshProxyComponent, ComponentXVectorObjectSpace) == 1760, "Offset mismatch for ULandscapeMeshProxyComponent::ComponentXVectorObjectSpace");
static_assert(offsetof(ULandscapeMeshProxyComponent, ComponentYVectorObjectSpace) == 1784, "Offset mismatch for ULandscapeMeshProxyComponent::ComponentYVectorObjectSpace");
static_assert(offsetof(ULandscapeMeshProxyComponent, ComponentResolution) == 1808, "Offset mismatch for ULandscapeMeshProxyComponent::ComponentResolution");
static_assert(offsetof(ULandscapeMeshProxyComponent, ProxyLOD) == 1812, "Offset mismatch for ULandscapeMeshProxyComponent::ProxyLOD");
static_assert(offsetof(ULandscapeMeshProxyComponent, LODGroupKey) == 1816, "Offset mismatch for ULandscapeMeshProxyComponent::LODGroupKey");

// /Script/Landscape.LandscapeNaniteComponent
// Kind: Class; super: StaticMeshComponent
class ULandscapeNaniteComponent
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    std::uint8_t ProxyContentId[0x10]; // 0x06B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnabled; // 0x06C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x06C1
    TArray<void*> SourceLandscapeComponents; // 0x06C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeNaniteComponent, ProxyContentId) == 1712, "Offset mismatch for ULandscapeNaniteComponent::ProxyContentId");
static_assert(offsetof(ULandscapeNaniteComponent, bEnabled) == 1728, "Offset mismatch for ULandscapeNaniteComponent::bEnabled");
static_assert(offsetof(ULandscapeNaniteComponent, SourceLandscapeComponents) == 1736, "Offset mismatch for ULandscapeNaniteComponent::SourceLandscapeComponents");

// /Script/Landscape.LandscapeProxy
// Kind: Class; super: PartitionActor
class ULandscapeProxy
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* SplineComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LandscapeGuid[0x10]; // 0x0280 (Size: 0x10, Type: StructProperty)
    std::uint8_t OriginalLandscapeGuid[0x10]; // 0x0290 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnableNanite; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02A1
    TArray<void*> PerLODOverrideMaterials; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDisableRuntimeGrassMapGeneration; // 0x02B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableGrass; // 0x02B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x02BA
    std::int32_t MaxLODLevel; // 0x02BC (Size: 0x4, Type: IntProperty)
    float LOD0ScreenSize; // 0x02C0 (Size: 0x4, Type: FloatProperty)
    std::uint32_t LODGroupKey; // 0x02C4 (Size: 0x4, Type: UInt32Property)
    float LOD0DistributionSetting; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    float LODDistributionSetting; // 0x02CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScalableLOD0ScreenSize[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ScalableLOD0DistributionSetting[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ScalableLODDistributionSetting[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseScalableLODSettings; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0349
    float LODBlendRange; // 0x034C (Size: 0x4, Type: FloatProperty)
    std::int32_t StaticLightingLOD; // 0x0350 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0354
    void* DefaultPhysMaterial; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    float StreamingDistanceMultiplier; // 0x0360 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0364
    void* LandscapeMaterial; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* LandscapeHoleMaterial; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0378 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSetCreateRuntimeVirtualTextureVolumes; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVirtualTextureRenderWithQuad; // 0x0389 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVirtualTextureRenderWithQuadHQ; // 0x038A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x038B
    std::int32_t VirtualTextureNumLods; // 0x038C (Size: 0x4, Type: IntProperty)
    std::int32_t VirtualTextureLodBias; // 0x0390 (Size: 0x4, Type: IntProperty)
    std::uint8_t VirtualTextureRenderPassType; // 0x0394 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0395
    float NegativeZBoundsExtension; // 0x0398 (Size: 0x4, Type: FloatProperty)
    float PositiveZBoundsExtension; // 0x039C (Size: 0x4, Type: FloatProperty)
    TArray<void*> LandscapeComponents; // 0x03A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionComponents; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FoliageComponents; // 0x03C0 (Size: 0x10, Type: ArrayProperty)
    void* NaniteComponent; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NaniteComponents; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0008[0x24]; // 0x03E8
    float GrassTypesMaxDiscardDistance; // 0x040C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0009[0x10]; // 0x0410
    float StaticLightingResolution; // 0x0420 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CastShadow; // 0x0424 (Size: 0x1, Type: BoolProperty)
    // 0x0424 BoolProperty bCastDynamicShadow (shared storage)
    // 0x0424 BoolProperty bCastStaticShadow (shared storage)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0425 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCastContactShadow; // 0x0426 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x1]; // 0x0427
    std::uint8_t bCastFarShadow; // 0x0428 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x3]; // 0x0429
    std::uint8_t bCastHiddenShadow; // 0x042C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x3]; // 0x042D
    std::uint8_t bCastShadowAsTwoSided; // 0x0430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x3]; // 0x0431
    std::uint8_t bAffectDistanceFieldLighting; // 0x0434 (Size: 0x1, Type: BoolProperty)
    // 0x0434 BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x0434 BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    std::uint8_t LightingChannels[0x3]; // 0x0435 (Size: 0x3, Type: StructProperty)
    std::uint8_t bUseMaterialPositionOffsetInStaticLighting; // 0x0438 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x3]; // 0x0439
    float NonNaniteVirtualShadowMapConstantDepthBias; // 0x043C (Size: 0x4, Type: FloatProperty)
    float NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold; // 0x0440 (Size: 0x4, Type: FloatProperty)
    float NonNaniteVirtualShadowMapInvalidationScreenSizeLimit; // 0x0444 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHoldout; // 0x0448 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000F[0x3]; // 0x0449
    std::uint8_t bRenderCustomDepth; // 0x044C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0010[0x3]; // 0x044D
    std::uint8_t CustomDepthStencilWriteMask; // 0x0450 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0011[0x3]; // 0x0451
    std::int32_t CustomDepthStencilValue; // 0x0454 (Size: 0x4, Type: IntProperty)
    float LDMaxDrawDistance; // 0x0458 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LightmassSettings[0x1C]; // 0x045C (Size: 0x1C, Type: StructProperty)
    TMap<void*, void*> GrassTypesOverrides; // 0x0478 (Size: 0x10, Type: MapProperty)
    std::int32_t CollisionMipLevel; // 0x0488 (Size: 0x4, Type: IntProperty)
    std::int32_t SimpleCollisionMipLevel; // 0x048C (Size: 0x4, Type: IntProperty)
    std::uint8_t BodyInstance[0x1A8]; // 0x0490 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t bBakeMaterialPositionOffsetIntoCollision; // 0x0638 (Size: 0x1, Type: BoolProperty)
    // 0x0638 BoolProperty bGenerateOverlapEvents (shared storage)
    std::uint8_t Pad_0012[0x7]; // 0x0639
    void* RegisteredToSubsystem; // 0x0640 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ComponentSizeQuads; // 0x0648 (Size: 0x4, Type: IntProperty)
    std::int32_t SubsectionSizeQuads; // 0x064C (Size: 0x4, Type: IntProperty)
    std::int32_t NumSubsections; // 0x0650 (Size: 0x4, Type: IntProperty)
    std::uint8_t bFillCollisionUnderLandscapeForNavmesh; // 0x0654 (Size: 0x1, Type: BoolProperty)
    // 0x0654 BoolProperty bUsedForNavigation (shared storage)
    std::uint8_t Pad_0013[0x3]; // 0x0655
    std::uint8_t NavigationGeometryGatheringMode; // 0x0658 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseDynamicMaterialInstance; // 0x0659 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLandscapeForCullingInvisibleHLODVertices; // 0x065A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasLayersContent; // 0x065B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0014[0x2]; // 0x065C
    std::uint8_t bStripPhysicsWhenCookedClient; // 0x065E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStripPhysicsWhenCookedServer; // 0x065F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStripGrassWhenCookedClient; // 0x0660 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStripGrassWhenCookedServer; // 0x0661 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0015[0x6]; // 0x0662
    TMap<void*, void*> TargetLayers; // 0x0668 (Size: 0x10, Type: MapProperty)
    std::uint8_t SectionBase[0x1]; // 0x0678 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULandscapeProxy, SplineComponent) == 632, "Offset mismatch for ULandscapeProxy::SplineComponent");
static_assert(offsetof(ULandscapeProxy, LandscapeGuid) == 640, "Offset mismatch for ULandscapeProxy::LandscapeGuid");
static_assert(offsetof(ULandscapeProxy, OriginalLandscapeGuid) == 656, "Offset mismatch for ULandscapeProxy::OriginalLandscapeGuid");
static_assert(offsetof(ULandscapeProxy, bEnableNanite) == 672, "Offset mismatch for ULandscapeProxy::bEnableNanite");
static_assert(offsetof(ULandscapeProxy, PerLODOverrideMaterials) == 680, "Offset mismatch for ULandscapeProxy::PerLODOverrideMaterials");
static_assert(offsetof(ULandscapeProxy, bDisableRuntimeGrassMapGeneration) == 696, "Offset mismatch for ULandscapeProxy::bDisableRuntimeGrassMapGeneration");
static_assert(offsetof(ULandscapeProxy, bEnableGrass) == 697, "Offset mismatch for ULandscapeProxy::bEnableGrass");
static_assert(offsetof(ULandscapeProxy, MaxLODLevel) == 700, "Offset mismatch for ULandscapeProxy::MaxLODLevel");
static_assert(offsetof(ULandscapeProxy, LOD0ScreenSize) == 704, "Offset mismatch for ULandscapeProxy::LOD0ScreenSize");
static_assert(offsetof(ULandscapeProxy, LODGroupKey) == 708, "Offset mismatch for ULandscapeProxy::LODGroupKey");
static_assert(offsetof(ULandscapeProxy, LOD0DistributionSetting) == 712, "Offset mismatch for ULandscapeProxy::LOD0DistributionSetting");
static_assert(offsetof(ULandscapeProxy, LODDistributionSetting) == 716, "Offset mismatch for ULandscapeProxy::LODDistributionSetting");
static_assert(offsetof(ULandscapeProxy, ScalableLOD0ScreenSize) == 720, "Offset mismatch for ULandscapeProxy::ScalableLOD0ScreenSize");
static_assert(offsetof(ULandscapeProxy, ScalableLOD0DistributionSetting) == 760, "Offset mismatch for ULandscapeProxy::ScalableLOD0DistributionSetting");
static_assert(offsetof(ULandscapeProxy, ScalableLODDistributionSetting) == 800, "Offset mismatch for ULandscapeProxy::ScalableLODDistributionSetting");
static_assert(offsetof(ULandscapeProxy, bUseScalableLODSettings) == 840, "Offset mismatch for ULandscapeProxy::bUseScalableLODSettings");
static_assert(offsetof(ULandscapeProxy, LODBlendRange) == 844, "Offset mismatch for ULandscapeProxy::LODBlendRange");
static_assert(offsetof(ULandscapeProxy, StaticLightingLOD) == 848, "Offset mismatch for ULandscapeProxy::StaticLightingLOD");
static_assert(offsetof(ULandscapeProxy, DefaultPhysMaterial) == 856, "Offset mismatch for ULandscapeProxy::DefaultPhysMaterial");
static_assert(offsetof(ULandscapeProxy, StreamingDistanceMultiplier) == 864, "Offset mismatch for ULandscapeProxy::StreamingDistanceMultiplier");
static_assert(offsetof(ULandscapeProxy, LandscapeMaterial) == 872, "Offset mismatch for ULandscapeProxy::LandscapeMaterial");
static_assert(offsetof(ULandscapeProxy, LandscapeHoleMaterial) == 880, "Offset mismatch for ULandscapeProxy::LandscapeHoleMaterial");
static_assert(offsetof(ULandscapeProxy, RuntimeVirtualTextures) == 888, "Offset mismatch for ULandscapeProxy::RuntimeVirtualTextures");
static_assert(offsetof(ULandscapeProxy, bSetCreateRuntimeVirtualTextureVolumes) == 904, "Offset mismatch for ULandscapeProxy::bSetCreateRuntimeVirtualTextureVolumes");
static_assert(offsetof(ULandscapeProxy, bVirtualTextureRenderWithQuad) == 905, "Offset mismatch for ULandscapeProxy::bVirtualTextureRenderWithQuad");
static_assert(offsetof(ULandscapeProxy, bVirtualTextureRenderWithQuadHQ) == 906, "Offset mismatch for ULandscapeProxy::bVirtualTextureRenderWithQuadHQ");
static_assert(offsetof(ULandscapeProxy, VirtualTextureNumLods) == 908, "Offset mismatch for ULandscapeProxy::VirtualTextureNumLods");
static_assert(offsetof(ULandscapeProxy, VirtualTextureLodBias) == 912, "Offset mismatch for ULandscapeProxy::VirtualTextureLodBias");
static_assert(offsetof(ULandscapeProxy, VirtualTextureRenderPassType) == 916, "Offset mismatch for ULandscapeProxy::VirtualTextureRenderPassType");
static_assert(offsetof(ULandscapeProxy, NegativeZBoundsExtension) == 920, "Offset mismatch for ULandscapeProxy::NegativeZBoundsExtension");
static_assert(offsetof(ULandscapeProxy, PositiveZBoundsExtension) == 924, "Offset mismatch for ULandscapeProxy::PositiveZBoundsExtension");
static_assert(offsetof(ULandscapeProxy, LandscapeComponents) == 928, "Offset mismatch for ULandscapeProxy::LandscapeComponents");
static_assert(offsetof(ULandscapeProxy, CollisionComponents) == 944, "Offset mismatch for ULandscapeProxy::CollisionComponents");
static_assert(offsetof(ULandscapeProxy, FoliageComponents) == 960, "Offset mismatch for ULandscapeProxy::FoliageComponents");
static_assert(offsetof(ULandscapeProxy, NaniteComponent) == 976, "Offset mismatch for ULandscapeProxy::NaniteComponent");
static_assert(offsetof(ULandscapeProxy, NaniteComponents) == 984, "Offset mismatch for ULandscapeProxy::NaniteComponents");
static_assert(offsetof(ULandscapeProxy, GrassTypesMaxDiscardDistance) == 1036, "Offset mismatch for ULandscapeProxy::GrassTypesMaxDiscardDistance");
static_assert(offsetof(ULandscapeProxy, StaticLightingResolution) == 1056, "Offset mismatch for ULandscapeProxy::StaticLightingResolution");
static_assert(offsetof(ULandscapeProxy, CastShadow) == 1060, "Offset mismatch for ULandscapeProxy::CastShadow");
static_assert(offsetof(ULandscapeProxy, ShadowCacheInvalidationBehavior) == 1061, "Offset mismatch for ULandscapeProxy::ShadowCacheInvalidationBehavior");
static_assert(offsetof(ULandscapeProxy, bCastContactShadow) == 1062, "Offset mismatch for ULandscapeProxy::bCastContactShadow");
static_assert(offsetof(ULandscapeProxy, bCastFarShadow) == 1064, "Offset mismatch for ULandscapeProxy::bCastFarShadow");
static_assert(offsetof(ULandscapeProxy, bCastHiddenShadow) == 1068, "Offset mismatch for ULandscapeProxy::bCastHiddenShadow");
static_assert(offsetof(ULandscapeProxy, bCastShadowAsTwoSided) == 1072, "Offset mismatch for ULandscapeProxy::bCastShadowAsTwoSided");
static_assert(offsetof(ULandscapeProxy, bAffectDistanceFieldLighting) == 1076, "Offset mismatch for ULandscapeProxy::bAffectDistanceFieldLighting");
static_assert(offsetof(ULandscapeProxy, LightingChannels) == 1077, "Offset mismatch for ULandscapeProxy::LightingChannels");
static_assert(offsetof(ULandscapeProxy, bUseMaterialPositionOffsetInStaticLighting) == 1080, "Offset mismatch for ULandscapeProxy::bUseMaterialPositionOffsetInStaticLighting");
static_assert(offsetof(ULandscapeProxy, NonNaniteVirtualShadowMapConstantDepthBias) == 1084, "Offset mismatch for ULandscapeProxy::NonNaniteVirtualShadowMapConstantDepthBias");
static_assert(offsetof(ULandscapeProxy, NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold) == 1088, "Offset mismatch for ULandscapeProxy::NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold");
static_assert(offsetof(ULandscapeProxy, NonNaniteVirtualShadowMapInvalidationScreenSizeLimit) == 1092, "Offset mismatch for ULandscapeProxy::NonNaniteVirtualShadowMapInvalidationScreenSizeLimit");
static_assert(offsetof(ULandscapeProxy, bHoldout) == 1096, "Offset mismatch for ULandscapeProxy::bHoldout");
static_assert(offsetof(ULandscapeProxy, bRenderCustomDepth) == 1100, "Offset mismatch for ULandscapeProxy::bRenderCustomDepth");
static_assert(offsetof(ULandscapeProxy, CustomDepthStencilWriteMask) == 1104, "Offset mismatch for ULandscapeProxy::CustomDepthStencilWriteMask");
static_assert(offsetof(ULandscapeProxy, CustomDepthStencilValue) == 1108, "Offset mismatch for ULandscapeProxy::CustomDepthStencilValue");
static_assert(offsetof(ULandscapeProxy, LDMaxDrawDistance) == 1112, "Offset mismatch for ULandscapeProxy::LDMaxDrawDistance");
static_assert(offsetof(ULandscapeProxy, LightmassSettings) == 1116, "Offset mismatch for ULandscapeProxy::LightmassSettings");
static_assert(offsetof(ULandscapeProxy, GrassTypesOverrides) == 1144, "Offset mismatch for ULandscapeProxy::GrassTypesOverrides");
static_assert(offsetof(ULandscapeProxy, CollisionMipLevel) == 1160, "Offset mismatch for ULandscapeProxy::CollisionMipLevel");
static_assert(offsetof(ULandscapeProxy, SimpleCollisionMipLevel) == 1164, "Offset mismatch for ULandscapeProxy::SimpleCollisionMipLevel");
static_assert(offsetof(ULandscapeProxy, BodyInstance) == 1168, "Offset mismatch for ULandscapeProxy::BodyInstance");
static_assert(offsetof(ULandscapeProxy, bBakeMaterialPositionOffsetIntoCollision) == 1592, "Offset mismatch for ULandscapeProxy::bBakeMaterialPositionOffsetIntoCollision");
static_assert(offsetof(ULandscapeProxy, RegisteredToSubsystem) == 1600, "Offset mismatch for ULandscapeProxy::RegisteredToSubsystem");
static_assert(offsetof(ULandscapeProxy, ComponentSizeQuads) == 1608, "Offset mismatch for ULandscapeProxy::ComponentSizeQuads");
static_assert(offsetof(ULandscapeProxy, SubsectionSizeQuads) == 1612, "Offset mismatch for ULandscapeProxy::SubsectionSizeQuads");
static_assert(offsetof(ULandscapeProxy, NumSubsections) == 1616, "Offset mismatch for ULandscapeProxy::NumSubsections");
static_assert(offsetof(ULandscapeProxy, bFillCollisionUnderLandscapeForNavmesh) == 1620, "Offset mismatch for ULandscapeProxy::bFillCollisionUnderLandscapeForNavmesh");
static_assert(offsetof(ULandscapeProxy, NavigationGeometryGatheringMode) == 1624, "Offset mismatch for ULandscapeProxy::NavigationGeometryGatheringMode");
static_assert(offsetof(ULandscapeProxy, bUseDynamicMaterialInstance) == 1625, "Offset mismatch for ULandscapeProxy::bUseDynamicMaterialInstance");
static_assert(offsetof(ULandscapeProxy, bUseLandscapeForCullingInvisibleHLODVertices) == 1626, "Offset mismatch for ULandscapeProxy::bUseLandscapeForCullingInvisibleHLODVertices");
static_assert(offsetof(ULandscapeProxy, bHasLayersContent) == 1627, "Offset mismatch for ULandscapeProxy::bHasLayersContent");
static_assert(offsetof(ULandscapeProxy, bStripPhysicsWhenCookedClient) == 1630, "Offset mismatch for ULandscapeProxy::bStripPhysicsWhenCookedClient");
static_assert(offsetof(ULandscapeProxy, bStripPhysicsWhenCookedServer) == 1631, "Offset mismatch for ULandscapeProxy::bStripPhysicsWhenCookedServer");
static_assert(offsetof(ULandscapeProxy, bStripGrassWhenCookedClient) == 1632, "Offset mismatch for ULandscapeProxy::bStripGrassWhenCookedClient");
static_assert(offsetof(ULandscapeProxy, bStripGrassWhenCookedServer) == 1633, "Offset mismatch for ULandscapeProxy::bStripGrassWhenCookedServer");
static_assert(offsetof(ULandscapeProxy, TargetLayers) == 1640, "Offset mismatch for ULandscapeProxy::TargetLayers");
static_assert(offsetof(ULandscapeProxy, SectionBase) == 1656, "Offset mismatch for ULandscapeProxy::SectionBase");

// /Script/Landscape.LandscapeScratchRenderTarget
// Kind: Class; super: Object
class ULandscapeScratchRenderTarget
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* RenderTarget; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULandscapeScratchRenderTarget, RenderTarget) == 40, "Offset mismatch for ULandscapeScratchRenderTarget::RenderTarget");

// /Script/Landscape.LandscapeSettings
// Kind: Class; super: DeveloperSettings
class ULandscapeSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t MaxNumberOfLayers; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowDialogForAutomaticLayerCreation; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::int32_t MaxComponents; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint32_t MaxImageImportCacheSizeMegaBytes; // 0x003C (Size: 0x4, Type: UInt32Property)
    float PaintStrengthGamma; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisablePaintingStartupSlowdown; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LandscapeDirtyingMode; // 0x0045 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0046
    std::int32_t SideResolutionLimit; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x004C
    std::uint8_t DefaultLandscapeMaterial[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultLayerInfoObject[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    float BrushSizeUIMax; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float BrushSizeClampMax; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::int32_t HLODMaxTextureSize; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShouldUpdateEditLayersDuringInteractiveChanges; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t FoliageLandscapeSnappingMode; // 0x009D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRestrictiveMode; // 0x009E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x009F
    float SplineIconWorldZOffset; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float SplineIconScale; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisplayTargetLayerThumbnails; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableTemporalAntiAliasingInLandscapeMode; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TargetLayerDefaultBlendMethod; // 0x00AA (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(ULandscapeSettings, MaxNumberOfLayers) == 48, "Offset mismatch for ULandscapeSettings::MaxNumberOfLayers");
static_assert(offsetof(ULandscapeSettings, bShowDialogForAutomaticLayerCreation) == 52, "Offset mismatch for ULandscapeSettings::bShowDialogForAutomaticLayerCreation");
static_assert(offsetof(ULandscapeSettings, MaxComponents) == 56, "Offset mismatch for ULandscapeSettings::MaxComponents");
static_assert(offsetof(ULandscapeSettings, MaxImageImportCacheSizeMegaBytes) == 60, "Offset mismatch for ULandscapeSettings::MaxImageImportCacheSizeMegaBytes");
static_assert(offsetof(ULandscapeSettings, PaintStrengthGamma) == 64, "Offset mismatch for ULandscapeSettings::PaintStrengthGamma");
static_assert(offsetof(ULandscapeSettings, bDisablePaintingStartupSlowdown) == 68, "Offset mismatch for ULandscapeSettings::bDisablePaintingStartupSlowdown");
static_assert(offsetof(ULandscapeSettings, LandscapeDirtyingMode) == 69, "Offset mismatch for ULandscapeSettings::LandscapeDirtyingMode");
static_assert(offsetof(ULandscapeSettings, SideResolutionLimit) == 72, "Offset mismatch for ULandscapeSettings::SideResolutionLimit");
static_assert(offsetof(ULandscapeSettings, DefaultLandscapeMaterial) == 80, "Offset mismatch for ULandscapeSettings::DefaultLandscapeMaterial");
static_assert(offsetof(ULandscapeSettings, DefaultLayerInfoObject) == 112, "Offset mismatch for ULandscapeSettings::DefaultLayerInfoObject");
static_assert(offsetof(ULandscapeSettings, BrushSizeUIMax) == 144, "Offset mismatch for ULandscapeSettings::BrushSizeUIMax");
static_assert(offsetof(ULandscapeSettings, BrushSizeClampMax) == 148, "Offset mismatch for ULandscapeSettings::BrushSizeClampMax");
static_assert(offsetof(ULandscapeSettings, HLODMaxTextureSize) == 152, "Offset mismatch for ULandscapeSettings::HLODMaxTextureSize");
static_assert(offsetof(ULandscapeSettings, bShouldUpdateEditLayersDuringInteractiveChanges) == 156, "Offset mismatch for ULandscapeSettings::bShouldUpdateEditLayersDuringInteractiveChanges");
static_assert(offsetof(ULandscapeSettings, FoliageLandscapeSnappingMode) == 157, "Offset mismatch for ULandscapeSettings::FoliageLandscapeSnappingMode");
static_assert(offsetof(ULandscapeSettings, bRestrictiveMode) == 158, "Offset mismatch for ULandscapeSettings::bRestrictiveMode");
static_assert(offsetof(ULandscapeSettings, SplineIconWorldZOffset) == 160, "Offset mismatch for ULandscapeSettings::SplineIconWorldZOffset");
static_assert(offsetof(ULandscapeSettings, SplineIconScale) == 164, "Offset mismatch for ULandscapeSettings::SplineIconScale");
static_assert(offsetof(ULandscapeSettings, bDisplayTargetLayerThumbnails) == 168, "Offset mismatch for ULandscapeSettings::bDisplayTargetLayerThumbnails");
static_assert(offsetof(ULandscapeSettings, bDisableTemporalAntiAliasingInLandscapeMode) == 169, "Offset mismatch for ULandscapeSettings::bDisableTemporalAntiAliasingInLandscapeMode");
static_assert(offsetof(ULandscapeSettings, TargetLayerDefaultBlendMethod) == 170, "Offset mismatch for ULandscapeSettings::TargetLayerDefaultBlendMethod");

// /Script/Landscape.LandscapeSplineActor
// Kind: Class; super: Actor
class ULandscapeSplineActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t LandscapeGuid[0x1]; // 0x0278 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULandscapeSplineActor, LandscapeGuid) == 632, "Offset mismatch for ULandscapeSplineActor::LandscapeGuid");

// /Script/Landscape.LandscapeSplineControlPoint
// Kind: Class; super: Object
class ULandscapeSplineControlPoint
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    float Width; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float LayerWidthRatio; // 0x005C (Size: 0x4, Type: FloatProperty)
    float SideFalloff; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float LeftSideFalloffFactor; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float RightSideFalloffFactor; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float LeftSideLayerFalloffFactor; // 0x006C (Size: 0x4, Type: FloatProperty)
    float RightSideLayerFalloffFactor; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float EndFalloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    TArray<void*> ConnectedSegments; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Points; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x38]; // 0x0098 (Size: 0x38, Type: StructProperty)
    void* LocalMeshComponent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULandscapeSplineControlPoint, Location) == 40, "Offset mismatch for ULandscapeSplineControlPoint::Location");
static_assert(offsetof(ULandscapeSplineControlPoint, Rotation) == 64, "Offset mismatch for ULandscapeSplineControlPoint::Rotation");
static_assert(offsetof(ULandscapeSplineControlPoint, Width) == 88, "Offset mismatch for ULandscapeSplineControlPoint::Width");
static_assert(offsetof(ULandscapeSplineControlPoint, LayerWidthRatio) == 92, "Offset mismatch for ULandscapeSplineControlPoint::LayerWidthRatio");
static_assert(offsetof(ULandscapeSplineControlPoint, SideFalloff) == 96, "Offset mismatch for ULandscapeSplineControlPoint::SideFalloff");
static_assert(offsetof(ULandscapeSplineControlPoint, LeftSideFalloffFactor) == 100, "Offset mismatch for ULandscapeSplineControlPoint::LeftSideFalloffFactor");
static_assert(offsetof(ULandscapeSplineControlPoint, RightSideFalloffFactor) == 104, "Offset mismatch for ULandscapeSplineControlPoint::RightSideFalloffFactor");
static_assert(offsetof(ULandscapeSplineControlPoint, LeftSideLayerFalloffFactor) == 108, "Offset mismatch for ULandscapeSplineControlPoint::LeftSideLayerFalloffFactor");
static_assert(offsetof(ULandscapeSplineControlPoint, RightSideLayerFalloffFactor) == 112, "Offset mismatch for ULandscapeSplineControlPoint::RightSideLayerFalloffFactor");
static_assert(offsetof(ULandscapeSplineControlPoint, EndFalloff) == 116, "Offset mismatch for ULandscapeSplineControlPoint::EndFalloff");
static_assert(offsetof(ULandscapeSplineControlPoint, ConnectedSegments) == 120, "Offset mismatch for ULandscapeSplineControlPoint::ConnectedSegments");
static_assert(offsetof(ULandscapeSplineControlPoint, Points) == 136, "Offset mismatch for ULandscapeSplineControlPoint::Points");
static_assert(offsetof(ULandscapeSplineControlPoint, Bounds) == 152, "Offset mismatch for ULandscapeSplineControlPoint::Bounds");
static_assert(offsetof(ULandscapeSplineControlPoint, LocalMeshComponent) == 208, "Offset mismatch for ULandscapeSplineControlPoint::LocalMeshComponent");

// /Script/Landscape.LandscapeSplineInterface
// Kind: Class; super: Interface
class ULandscapeSplineInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeSplineMeshesActor
// Kind: Class; super: PartitionActor
class ULandscapeSplineMeshesActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> StaticMeshComponents; // 0x0270 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeSplineMeshesActor, StaticMeshComponents) == 624, "Offset mismatch for ULandscapeSplineMeshesActor::StaticMeshComponents");

// /Script/Landscape.LandscapeSplineSegment
// Kind: Class; super: Object
class ULandscapeSplineSegment
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Connections[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t SplineInfo[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    TArray<void*> Points; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x38]; // 0x0070 (Size: 0x38, Type: StructProperty)
    TArray<void*> LocalMeshComponents; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeSplineSegment, Connections) == 40, "Offset mismatch for ULandscapeSplineSegment::Connections");
static_assert(offsetof(ULandscapeSplineSegment, SplineInfo) == 72, "Offset mismatch for ULandscapeSplineSegment::SplineInfo");
static_assert(offsetof(ULandscapeSplineSegment, Points) == 96, "Offset mismatch for ULandscapeSplineSegment::Points");
static_assert(offsetof(ULandscapeSplineSegment, Bounds) == 112, "Offset mismatch for ULandscapeSplineSegment::Bounds");
static_assert(offsetof(ULandscapeSplineSegment, LocalMeshComponents) == 168, "Offset mismatch for ULandscapeSplineSegment::LocalMeshComponents");

// /Script/Landscape.LandscapeSplinesComponent
// Kind: Class; super: PrimitiveComponent
class ULandscapeSplinesComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    TArray<void*> ControlPoints; // 0x0570 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Segments; // 0x0580 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CookedForeignMeshComponents; // 0x0590 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeSplinesComponent, ControlPoints) == 1392, "Offset mismatch for ULandscapeSplinesComponent::ControlPoints");
static_assert(offsetof(ULandscapeSplinesComponent, Segments) == 1408, "Offset mismatch for ULandscapeSplinesComponent::Segments");
static_assert(offsetof(ULandscapeSplinesComponent, CookedForeignMeshComponents) == 1424, "Offset mismatch for ULandscapeSplinesComponent::CookedForeignMeshComponents");

// /Script/Landscape.LandscapeStreamingProxy
// Kind: Class; super: LandscapeProxy
class ULandscapeStreamingProxy
{
public:
    std::uint8_t Pad_0000[0x688]; // 0x0000
    std::uint8_t LandscapeActorRef[0x20]; // 0x0688 (Size: 0x20, Type: SoftObjectProperty)
    TSet<void*> OverriddenSharedProperties; // 0x06A8 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(ULandscapeStreamingProxy, LandscapeActorRef) == 1672, "Offset mismatch for ULandscapeStreamingProxy::LandscapeActorRef");
static_assert(offsetof(ULandscapeStreamingProxy, OverriddenSharedProperties) == 1704, "Offset mismatch for ULandscapeStreamingProxy::OverriddenSharedProperties");

// /Script/Landscape.LandscapeSubsystem
// Kind: Class; super: TickableWorldSubsystem
class ULandscapeSubsystem
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t StreamingProxiesNeedingReregister[0x18]; // 0x0058 (Size: 0x18, Type: SetProperty)
    TArray<void*> LandscapeActors; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Proxies; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapeSubsystem, StreamingProxiesNeedingReregister) == 88, "Offset mismatch for ULandscapeSubsystem::StreamingProxiesNeedingReregister");
static_assert(offsetof(ULandscapeSubsystem, LandscapeActors) == 112, "Offset mismatch for ULandscapeSubsystem::LandscapeActors");
static_assert(offsetof(ULandscapeSubsystem, Proxies) == 128, "Offset mismatch for ULandscapeSubsystem::Proxies");

// /Script/Landscape.LandscapeTextureHash
// Kind: Class; super: AssetUserData
class ULandscapeTextureHash
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TextureHashGUID[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastSourceID[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t TextureType; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextureUsage; // 0x0049 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(ULandscapeTextureHash, TextureHashGUID) == 40, "Offset mismatch for ULandscapeTextureHash::TextureHashGUID");
static_assert(offsetof(ULandscapeTextureHash, LastSourceID) == 56, "Offset mismatch for ULandscapeTextureHash::LastSourceID");
static_assert(offsetof(ULandscapeTextureHash, TextureType) == 72, "Offset mismatch for ULandscapeTextureHash::TextureType");
static_assert(offsetof(ULandscapeTextureHash, TextureUsage) == 73, "Offset mismatch for ULandscapeTextureHash::TextureUsage");

// /Script/Landscape.LandscapeTextureMipEdgeOverrideFactory
// Kind: Class; super: TextureMipDataProviderFactory
class ULandscapeTextureMipEdgeOverrideFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.LandscapeTextureStorageProviderFactory
// Kind: Class; super: TextureAllMipDataProviderFactory
class ULandscapeTextureStorageProviderFactory
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::int32_t BoundaryOffset; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t BoundaryCountX; // 0x004C (Size: 0x4, Type: IntProperty)
    std::int32_t BoundaryCountY; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULandscapeTextureStorageProviderFactory, BoundaryOffset) == 72, "Offset mismatch for ULandscapeTextureStorageProviderFactory::BoundaryOffset");
static_assert(offsetof(ULandscapeTextureStorageProviderFactory, BoundaryCountX) == 76, "Offset mismatch for ULandscapeTextureStorageProviderFactory::BoundaryCountX");
static_assert(offsetof(ULandscapeTextureStorageProviderFactory, BoundaryCountY) == 80, "Offset mismatch for ULandscapeTextureStorageProviderFactory::BoundaryCountY");

// /Script/Landscape.LandscapeWeightmapUsage
// Kind: Class; super: Object
class ULandscapeWeightmapUsage
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ChannelUsage; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0030
    std::uint8_t LayerGuid[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULandscapeWeightmapUsage, ChannelUsage) == 40, "Offset mismatch for ULandscapeWeightmapUsage::ChannelUsage");
static_assert(offsetof(ULandscapeWeightmapUsage, LayerGuid) == 72, "Offset mismatch for ULandscapeWeightmapUsage::LayerGuid");

// /Script/Landscape.LandscapeWeightmapWeightBlendedLayersRenderer
// Kind: Class; super: Object
class ULandscapeWeightmapWeightBlendedLayersRenderer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Landscape.MaterialExpressionLandscapeGrassOutput
// Kind: Class; super: MaterialExpressionCustomOutput
class UMaterialExpressionLandscapeGrassOutput
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TArray<void*> GrassTypes; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMaterialExpressionLandscapeGrassOutput, GrassTypes) == 176, "Offset mismatch for UMaterialExpressionLandscapeGrassOutput::GrassTypes");

// /Script/Landscape.MaterialExpressionLandscapeLayerBlend
// Kind: Class; super: MaterialExpression
class UMaterialExpressionLandscapeLayerBlend
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TArray<void*> Layers; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMaterialExpressionLandscapeLayerBlend, Layers) == 176, "Offset mismatch for UMaterialExpressionLandscapeLayerBlend::Layers");

// /Script/Landscape.MaterialExpressionLandscapeLayerCoords
// Kind: Class; super: MaterialExpression
class UMaterialExpressionLandscapeLayerCoords
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t MappingType; // 0x00B0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CustomUVType; // 0x00B1 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00B2
    float MappingScale; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float MappingRotation; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float MappingPanU; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float MappingPanV; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingType) == 176, "Offset mismatch for UMaterialExpressionLandscapeLayerCoords::MappingType");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, CustomUVType) == 177, "Offset mismatch for UMaterialExpressionLandscapeLayerCoords::CustomUVType");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingScale) == 180, "Offset mismatch for UMaterialExpressionLandscapeLayerCoords::MappingScale");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingRotation) == 184, "Offset mismatch for UMaterialExpressionLandscapeLayerCoords::MappingRotation");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingPanU) == 188, "Offset mismatch for UMaterialExpressionLandscapeLayerCoords::MappingPanU");
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingPanV) == 192, "Offset mismatch for UMaterialExpressionLandscapeLayerCoords::MappingPanV");

// /Script/Landscape.MaterialExpressionLandscapeLayerSample
// Kind: Class; super: MaterialExpression
class UMaterialExpressionLandscapeLayerSample
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t ParameterName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    float PreviewWeight; // 0x00B4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, ParameterName) == 176, "Offset mismatch for UMaterialExpressionLandscapeLayerSample::ParameterName");
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, PreviewWeight) == 180, "Offset mismatch for UMaterialExpressionLandscapeLayerSample::PreviewWeight");

// /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
// Kind: Class; super: MaterialExpression
class UMaterialExpressionLandscapeLayerSwitch
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t LayerUsed[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LayerNotUsed[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ParameterName[0x4]; // 0x0100 (Size: 0x4, Type: NameProperty)
    std::uint8_t PreviewUsed; // 0x0104 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerUsed) == 176, "Offset mismatch for UMaterialExpressionLandscapeLayerSwitch::LayerUsed");
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed) == 216, "Offset mismatch for UMaterialExpressionLandscapeLayerSwitch::LayerNotUsed");
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, ParameterName) == 256, "Offset mismatch for UMaterialExpressionLandscapeLayerSwitch::ParameterName");
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, PreviewUsed) == 260, "Offset mismatch for UMaterialExpressionLandscapeLayerSwitch::PreviewUsed");

// /Script/Landscape.MaterialExpressionLandscapeLayerWeight
// Kind: Class; super: MaterialExpression
class UMaterialExpressionLandscapeLayerWeight
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t base[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Layer[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ParameterName[0x4]; // 0x0100 (Size: 0x4, Type: NameProperty)
    float PreviewWeight; // 0x0104 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ConstBase[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, base) == 176, "Offset mismatch for UMaterialExpressionLandscapeLayerWeight::base");
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Layer) == 216, "Offset mismatch for UMaterialExpressionLandscapeLayerWeight::Layer");
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ParameterName) == 256, "Offset mismatch for UMaterialExpressionLandscapeLayerWeight::ParameterName");
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, PreviewWeight) == 260, "Offset mismatch for UMaterialExpressionLandscapeLayerWeight::PreviewWeight");
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ConstBase) == 264, "Offset mismatch for UMaterialExpressionLandscapeLayerWeight::ConstBase");

// /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Kind: Class; super: MaterialExpressionCustomOutput
class UMaterialExpressionLandscapePhysicalMaterialOutput
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TArray<void*> Inputs; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMaterialExpressionLandscapePhysicalMaterialOutput, Inputs) == 176, "Offset mismatch for UMaterialExpressionLandscapePhysicalMaterialOutput::Inputs");

// /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
// Kind: Class; super: MaterialExpression
class UMaterialExpressionLandscapeVisibilityMask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MaterialExpressionEditorX; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MaterialExpressionEditorY; // 0x002C (Size: 0x4, Type: IntProperty)
    void* GraphNode; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* SubgraphExpression; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0040
    std::uint8_t MaterialExpressionGuid[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    void* Material; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* Function; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    FString Desc; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Precision; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0081
    std::uint8_t bNeedToUpdatePreview; // 0x0084 (Size: 0x1, Type: BoolProperty)
    // 0x0084 BoolProperty bRealtimePreview (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x0085
    std::uint8_t bIsParameterExpression; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0089
    std::uint8_t bCollapsed; // 0x008C (Size: 0x1, Type: BoolProperty)
    // 0x008C BoolProperty bCommentBubbleVisible (shared storage)
    // 0x008C BoolProperty bHidePreviewWindow (shared storage)
    // 0x008C BoolProperty bShaderInputData (shared storage)
    // 0x008C BoolProperty bShowInputs (shared storage)
    // 0x008C BoolProperty bShowMaskColorsOnPin (shared storage)
    // 0x008C BoolProperty bShowOutputNameOnPin (shared storage)
    // 0x008C BoolProperty bShowOutputs (shared storage)
    std::uint8_t Pad_0005[0x3]; // 0x008D
    TArray<void*> MenuCategories; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Outputs; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, MaterialExpressionEditorX) == 40, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::MaterialExpressionEditorX");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, MaterialExpressionEditorY) == 44, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::MaterialExpressionEditorY");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, GraphNode) == 48, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::GraphNode");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, SubgraphExpression) == 56, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::SubgraphExpression");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, MaterialExpressionGuid) == 80, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::MaterialExpressionGuid");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, Material) == 96, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::Material");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, Function) == 104, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::Function");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, Desc) == 112, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::Desc");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, Precision) == 128, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::Precision");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, bNeedToUpdatePreview) == 132, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::bNeedToUpdatePreview");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, bIsParameterExpression) == 136, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::bIsParameterExpression");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, bCollapsed) == 140, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::bCollapsed");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, MenuCategories) == 144, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::MenuCategories");
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, Outputs) == 160, "Offset mismatch for UMaterialExpressionLandscapeVisibilityMask::Outputs");
