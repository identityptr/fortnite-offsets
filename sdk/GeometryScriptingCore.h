/**
 * decamp dumper generated SDK
 * Package: /Script/GeometryScriptingCore
 */
#pragma once
#include "Basic.h"

// /Script/GeometryScriptingCore.ComputeDistanceFieldSettings
// Kind: ScriptStruct; super: none
struct FComputeDistanceFieldSettings
{
public:
    std::uint8_t ComputeMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float NarrowBandWidth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NarrowBandUnits; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t VoxelsPerDimensions[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t bRequirePower2; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FComputeDistanceFieldSettings, ComputeMode) == 0, "Offset mismatch for FComputeDistanceFieldSettings::ComputeMode");
static_assert(offsetof(FComputeDistanceFieldSettings, NarrowBandWidth) == 4, "Offset mismatch for FComputeDistanceFieldSettings::NarrowBandWidth");
static_assert(offsetof(FComputeDistanceFieldSettings, NarrowBandUnits) == 8, "Offset mismatch for FComputeDistanceFieldSettings::NarrowBandUnits");
static_assert(offsetof(FComputeDistanceFieldSettings, VoxelsPerDimensions) == 12, "Offset mismatch for FComputeDistanceFieldSettings::VoxelsPerDimensions");
static_assert(offsetof(FComputeDistanceFieldSettings, bRequirePower2) == 24, "Offset mismatch for FComputeDistanceFieldSettings::bRequirePower2");

// /Script/GeometryScriptingCore.ComputeNegativeSpaceOptions
// Kind: ScriptStruct; super: none
struct FComputeNegativeSpaceOptions
{
public:
    std::uint8_t SampleMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRequireSearchSampleCoverage; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyConnectedToHull; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t MaxVoxelsPerDim; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetNumSamples; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    double MinSampleSpacing; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double NegativeSpaceTolerance; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> ToleranceDirectionalScales; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    double MinRadius; // 0x0030 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FComputeNegativeSpaceOptions, SampleMethod) == 0, "Offset mismatch for FComputeNegativeSpaceOptions::SampleMethod");
static_assert(offsetof(FComputeNegativeSpaceOptions, bRequireSearchSampleCoverage) == 1, "Offset mismatch for FComputeNegativeSpaceOptions::bRequireSearchSampleCoverage");
static_assert(offsetof(FComputeNegativeSpaceOptions, bOnlyConnectedToHull) == 2, "Offset mismatch for FComputeNegativeSpaceOptions::bOnlyConnectedToHull");
static_assert(offsetof(FComputeNegativeSpaceOptions, MaxVoxelsPerDim) == 4, "Offset mismatch for FComputeNegativeSpaceOptions::MaxVoxelsPerDim");
static_assert(offsetof(FComputeNegativeSpaceOptions, TargetNumSamples) == 8, "Offset mismatch for FComputeNegativeSpaceOptions::TargetNumSamples");
static_assert(offsetof(FComputeNegativeSpaceOptions, MinSampleSpacing) == 16, "Offset mismatch for FComputeNegativeSpaceOptions::MinSampleSpacing");
static_assert(offsetof(FComputeNegativeSpaceOptions, NegativeSpaceTolerance) == 24, "Offset mismatch for FComputeNegativeSpaceOptions::NegativeSpaceTolerance");
static_assert(offsetof(FComputeNegativeSpaceOptions, ToleranceDirectionalScales) == 32, "Offset mismatch for FComputeNegativeSpaceOptions::ToleranceDirectionalScales");
static_assert(offsetof(FComputeNegativeSpaceOptions, MinRadius) == 48, "Offset mismatch for FComputeNegativeSpaceOptions::MinRadius");

// /Script/GeometryScriptingCore.DistanceFieldToTextureSettings
// Kind: ScriptStruct; super: none
struct FDistanceFieldToTextureSettings
{
public:
    float Scale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Offset; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDistanceFieldToTextureSettings, Scale) == 0, "Offset mismatch for FDistanceFieldToTextureSettings::Scale");
static_assert(offsetof(FDistanceFieldToTextureSettings, Offset) == 4, "Offset mismatch for FDistanceFieldToTextureSettings::Offset");

// /Script/GeometryScriptingCore.GeometryScript3DGridParameters
// Kind: ScriptStruct; super: none
struct FGeometryScript3DGridParameters
{
public:
    std::uint8_t SizeMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float GridCellSize; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t GridResolution; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScript3DGridParameters, SizeMethod) == 0, "Offset mismatch for FGeometryScript3DGridParameters::SizeMethod");
static_assert(offsetof(FGeometryScript3DGridParameters, GridCellSize) == 4, "Offset mismatch for FGeometryScript3DGridParameters::GridCellSize");
static_assert(offsetof(FGeometryScript3DGridParameters, GridResolution) == 8, "Offset mismatch for FGeometryScript3DGridParameters::GridResolution");

// /Script/GeometryScriptingCore.GeometryScriptAdaptiveRemeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptAdaptiveRemeshOptions
{
public:
    std::uint8_t TargetType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t TargetTriangleCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    float TargetEdgeLength; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float RelativeDensity; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptAdaptiveRemeshOptions, TargetType) == 0, "Offset mismatch for FGeometryScriptAdaptiveRemeshOptions::TargetType");
static_assert(offsetof(FGeometryScriptAdaptiveRemeshOptions, TargetTriangleCount) == 4, "Offset mismatch for FGeometryScriptAdaptiveRemeshOptions::TargetTriangleCount");
static_assert(offsetof(FGeometryScriptAdaptiveRemeshOptions, TargetEdgeLength) == 8, "Offset mismatch for FGeometryScriptAdaptiveRemeshOptions::TargetEdgeLength");
static_assert(offsetof(FGeometryScriptAdaptiveRemeshOptions, RelativeDensity) == 12, "Offset mismatch for FGeometryScriptAdaptiveRemeshOptions::RelativeDensity");

// /Script/GeometryScriptingCore.GeometryScriptAdaptiveTessellationOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptAdaptiveTessellationOptions
{
public:
    std::uint8_t bEnableTessellation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ErrorTolerance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ErrorMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float FeatureSensitivity; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bMeshOptimization; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0011
    float Coplanarity; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptAdaptiveTessellationOptions, bEnableTessellation) == 0, "Offset mismatch for FGeometryScriptAdaptiveTessellationOptions::bEnableTessellation");
static_assert(offsetof(FGeometryScriptAdaptiveTessellationOptions, ErrorTolerance) == 4, "Offset mismatch for FGeometryScriptAdaptiveTessellationOptions::ErrorTolerance");
static_assert(offsetof(FGeometryScriptAdaptiveTessellationOptions, ErrorMode) == 8, "Offset mismatch for FGeometryScriptAdaptiveTessellationOptions::ErrorMode");
static_assert(offsetof(FGeometryScriptAdaptiveTessellationOptions, FeatureSensitivity) == 12, "Offset mismatch for FGeometryScriptAdaptiveTessellationOptions::FeatureSensitivity");
static_assert(offsetof(FGeometryScriptAdaptiveTessellationOptions, bMeshOptimization) == 16, "Offset mismatch for FGeometryScriptAdaptiveTessellationOptions::bMeshOptimization");
static_assert(offsetof(FGeometryScriptAdaptiveTessellationOptions, Coplanarity) == 20, "Offset mismatch for FGeometryScriptAdaptiveTessellationOptions::Coplanarity");

// /Script/GeometryScriptingCore.GeometryScriptAppendMeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptAppendMeshOptions
{
public:
    std::uint8_t CombineMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptAppendMeshOptions, CombineMode) == 0, "Offset mismatch for FGeometryScriptAppendMeshOptions::CombineMode");

// /Script/GeometryScriptingCore.GeometryScriptBakeOutputType
// Kind: ScriptStruct; super: none
struct FGeometryScriptBakeOutputType
{
public:
    std::uint8_t OutputMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t RGBA[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t R[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t G[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t B[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t A[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptBakeOutputType, OutputMode) == 0, "Offset mismatch for FGeometryScriptBakeOutputType::OutputMode");
static_assert(offsetof(FGeometryScriptBakeOutputType, RGBA) == 8, "Offset mismatch for FGeometryScriptBakeOutputType::RGBA");
static_assert(offsetof(FGeometryScriptBakeOutputType, R) == 32, "Offset mismatch for FGeometryScriptBakeOutputType::R");
static_assert(offsetof(FGeometryScriptBakeOutputType, G) == 56, "Offset mismatch for FGeometryScriptBakeOutputType::G");
static_assert(offsetof(FGeometryScriptBakeOutputType, B) == 80, "Offset mismatch for FGeometryScriptBakeOutputType::B");
static_assert(offsetof(FGeometryScriptBakeOutputType, A) == 104, "Offset mismatch for FGeometryScriptBakeOutputType::A");

// /Script/GeometryScriptingCore.GeometryScriptBakeRenderCaptureOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptBakeRenderCaptureOptions
{
public:
    TArray<void*> Cameras; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RenderCaptureResolution; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    double FieldOfViewDegrees; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double NearPlaneDist; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Resolution; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SamplesPerPixel; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRenderCaptureAntiAliasing; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002B
    float CleanupTolerance; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBaseColorMap; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalMap; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPackedMRSMap; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMetallicMap; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRoughnessMap; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpecularMap; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEmissiveMap; // 0x0036 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOpacityMap; // 0x0037 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSubsurfaceColorMap; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, Cameras) == 0, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::Cameras");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, RenderCaptureResolution) == 16, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::RenderCaptureResolution");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, FieldOfViewDegrees) == 24, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::FieldOfViewDegrees");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, NearPlaneDist) == 32, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::NearPlaneDist");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, Resolution) == 40, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::Resolution");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, SamplesPerPixel) == 41, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::SamplesPerPixel");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bRenderCaptureAntiAliasing) == 42, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bRenderCaptureAntiAliasing");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, CleanupTolerance) == 44, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::CleanupTolerance");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bBaseColorMap) == 48, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bBaseColorMap");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bNormalMap) == 49, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bNormalMap");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bPackedMRSMap) == 50, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bPackedMRSMap");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bMetallicMap) == 51, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bMetallicMap");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bRoughnessMap) == 52, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bRoughnessMap");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bSpecularMap) == 53, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bSpecularMap");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bEmissiveMap) == 54, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bEmissiveMap");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bOpacityMap) == 55, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bOpacityMap");
static_assert(offsetof(FGeometryScriptBakeRenderCaptureOptions, bSubsurfaceColorMap) == 56, "Offset mismatch for FGeometryScriptBakeRenderCaptureOptions::bSubsurfaceColorMap");

// /Script/GeometryScriptingCore.GeometryScriptBakeSourceMeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptBakeSourceMeshOptions
{
public:
    void* SourceNormalMap; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SourceNormalUVLayer; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t SourceNormalSpace; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptBakeSourceMeshOptions, SourceNormalMap) == 0, "Offset mismatch for FGeometryScriptBakeSourceMeshOptions::SourceNormalMap");
static_assert(offsetof(FGeometryScriptBakeSourceMeshOptions, SourceNormalUVLayer) == 8, "Offset mismatch for FGeometryScriptBakeSourceMeshOptions::SourceNormalUVLayer");
static_assert(offsetof(FGeometryScriptBakeSourceMeshOptions, SourceNormalSpace) == 12, "Offset mismatch for FGeometryScriptBakeSourceMeshOptions::SourceNormalSpace");

// /Script/GeometryScriptingCore.GeometryScriptBakeTargetMeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptBakeTargetMeshOptions
{
public:
    std::int32_t TargetUVLayer; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptBakeTargetMeshOptions, TargetUVLayer) == 0, "Offset mismatch for FGeometryScriptBakeTargetMeshOptions::TargetUVLayer");

// /Script/GeometryScriptingCore.GeometryScriptBakeTextureOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptBakeTextureOptions
{
public:
    std::uint8_t Resolution; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BitDepth; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t GutterSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t SamplesPerPixel; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    void* SampleFilterMask; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FilteringType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0019
    float ProjectionDistance; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bProjectionInWorldSpace; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptBakeTextureOptions, Resolution) == 0, "Offset mismatch for FGeometryScriptBakeTextureOptions::Resolution");
static_assert(offsetof(FGeometryScriptBakeTextureOptions, BitDepth) == 1, "Offset mismatch for FGeometryScriptBakeTextureOptions::BitDepth");
static_assert(offsetof(FGeometryScriptBakeTextureOptions, GutterSize) == 4, "Offset mismatch for FGeometryScriptBakeTextureOptions::GutterSize");
static_assert(offsetof(FGeometryScriptBakeTextureOptions, SamplesPerPixel) == 8, "Offset mismatch for FGeometryScriptBakeTextureOptions::SamplesPerPixel");
static_assert(offsetof(FGeometryScriptBakeTextureOptions, SampleFilterMask) == 16, "Offset mismatch for FGeometryScriptBakeTextureOptions::SampleFilterMask");
static_assert(offsetof(FGeometryScriptBakeTextureOptions, FilteringType) == 24, "Offset mismatch for FGeometryScriptBakeTextureOptions::FilteringType");
static_assert(offsetof(FGeometryScriptBakeTextureOptions, ProjectionDistance) == 28, "Offset mismatch for FGeometryScriptBakeTextureOptions::ProjectionDistance");
static_assert(offsetof(FGeometryScriptBakeTextureOptions, bProjectionInWorldSpace) == 32, "Offset mismatch for FGeometryScriptBakeTextureOptions::bProjectionInWorldSpace");

// /Script/GeometryScriptingCore.GeometryScriptBakeTypeOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptBakeTypeOptions
{
public:
    std::uint8_t BakeType; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptBakeTypeOptions, BakeType) == 0, "Offset mismatch for FGeometryScriptBakeTypeOptions::BakeType");

// /Script/GeometryScriptingCore.GeometryScriptBakeVertexOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptBakeVertexOptions
{
public:
    std::uint8_t TopologyMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSplitAtNormalSeams; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSplitAtUVSeams; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float ProjectionDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bProjectionInWorldSpace; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptBakeVertexOptions, TopologyMode) == 0, "Offset mismatch for FGeometryScriptBakeVertexOptions::TopologyMode");
static_assert(offsetof(FGeometryScriptBakeVertexOptions, bSplitAtNormalSeams) == 1, "Offset mismatch for FGeometryScriptBakeVertexOptions::bSplitAtNormalSeams");
static_assert(offsetof(FGeometryScriptBakeVertexOptions, bSplitAtUVSeams) == 2, "Offset mismatch for FGeometryScriptBakeVertexOptions::bSplitAtUVSeams");
static_assert(offsetof(FGeometryScriptBakeVertexOptions, ProjectionDistance) == 4, "Offset mismatch for FGeometryScriptBakeVertexOptions::ProjectionDistance");
static_assert(offsetof(FGeometryScriptBakeVertexOptions, bProjectionInWorldSpace) == 8, "Offset mismatch for FGeometryScriptBakeVertexOptions::bProjectionInWorldSpace");

// /Script/GeometryScriptingCore.GeometryScriptBendWarpOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptBendWarpOptions
{
public:
    std::uint8_t bSymmetricExtents; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LowerExtent; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBidirectional; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptBendWarpOptions, bSymmetricExtents) == 0, "Offset mismatch for FGeometryScriptBendWarpOptions::bSymmetricExtents");
static_assert(offsetof(FGeometryScriptBendWarpOptions, LowerExtent) == 4, "Offset mismatch for FGeometryScriptBendWarpOptions::LowerExtent");
static_assert(offsetof(FGeometryScriptBendWarpOptions, bBidirectional) == 8, "Offset mismatch for FGeometryScriptBendWarpOptions::bBidirectional");

// /Script/GeometryScriptingCore.GeometryScriptBlurMeshVertexColorsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptBlurMeshVertexColorsOptions
{
public:
    std::uint8_t Red; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Green; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Blue; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Alpha; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptBlurMeshVertexColorsOptions, Red) == 0, "Offset mismatch for FGeometryScriptBlurMeshVertexColorsOptions::Red");
static_assert(offsetof(FGeometryScriptBlurMeshVertexColorsOptions, Green) == 1, "Offset mismatch for FGeometryScriptBlurMeshVertexColorsOptions::Green");
static_assert(offsetof(FGeometryScriptBlurMeshVertexColorsOptions, Blue) == 2, "Offset mismatch for FGeometryScriptBlurMeshVertexColorsOptions::Blue");
static_assert(offsetof(FGeometryScriptBlurMeshVertexColorsOptions, Alpha) == 3, "Offset mismatch for FGeometryScriptBlurMeshVertexColorsOptions::Alpha");

// /Script/GeometryScriptingCore.GeometryScriptBoneInfo
// Kind: ScriptStruct; super: none
struct FGeometryScriptBoneInfo
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::int32_t ParentIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t LocalTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t WorldTransform[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t Color[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptBoneInfo, Index) == 0, "Offset mismatch for FGeometryScriptBoneInfo::Index");
static_assert(offsetof(FGeometryScriptBoneInfo, Name) == 4, "Offset mismatch for FGeometryScriptBoneInfo::Name");
static_assert(offsetof(FGeometryScriptBoneInfo, ParentIndex) == 8, "Offset mismatch for FGeometryScriptBoneInfo::ParentIndex");
static_assert(offsetof(FGeometryScriptBoneInfo, LocalTransform) == 16, "Offset mismatch for FGeometryScriptBoneInfo::LocalTransform");
static_assert(offsetof(FGeometryScriptBoneInfo, WorldTransform) == 112, "Offset mismatch for FGeometryScriptBoneInfo::WorldTransform");
static_assert(offsetof(FGeometryScriptBoneInfo, Color) == 208, "Offset mismatch for FGeometryScriptBoneInfo::Color");

// /Script/GeometryScriptingCore.GeometryScriptBoneWeight
// Kind: ScriptStruct; super: none
struct FGeometryScriptBoneWeight
{
public:
    std::int32_t BoneIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptBoneWeight, BoneIndex) == 0, "Offset mismatch for FGeometryScriptBoneWeight::BoneIndex");
static_assert(offsetof(FGeometryScriptBoneWeight, Weight) == 4, "Offset mismatch for FGeometryScriptBoneWeight::Weight");

// /Script/GeometryScriptingCore.GeometryScriptBoneWeightProfile
// Kind: ScriptStruct; super: none
struct FGeometryScriptBoneWeightProfile
{
public:
    FName ProfileName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGeometryScriptBoneWeightProfile, ProfileName) == 0, "Offset mismatch for FGeometryScriptBoneWeightProfile::ProfileName");

// /Script/GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptCalculateNormalsOptions
{
public:
    std::uint8_t bAngleWeighted; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAreaWeighted; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptCalculateNormalsOptions, bAngleWeighted) == 0, "Offset mismatch for FGeometryScriptCalculateNormalsOptions::bAngleWeighted");
static_assert(offsetof(FGeometryScriptCalculateNormalsOptions, bAreaWeighted) == 1, "Offset mismatch for FGeometryScriptCalculateNormalsOptions::bAreaWeighted");

// /Script/GeometryScriptingCore.GeometryScriptClusterSimplifyEdgeConstraintOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptClusterSimplifyEdgeConstraintOptions
{
public:
    std::uint8_t MeshBoundary; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GroupBoundary; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MaterialBoundary; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UVSeam; // 0x0003 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ColorSeam; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t NormalSeam; // 0x0005 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptClusterSimplifyEdgeConstraintOptions, MeshBoundary) == 0, "Offset mismatch for FGeometryScriptClusterSimplifyEdgeConstraintOptions::MeshBoundary");
static_assert(offsetof(FGeometryScriptClusterSimplifyEdgeConstraintOptions, GroupBoundary) == 1, "Offset mismatch for FGeometryScriptClusterSimplifyEdgeConstraintOptions::GroupBoundary");
static_assert(offsetof(FGeometryScriptClusterSimplifyEdgeConstraintOptions, MaterialBoundary) == 2, "Offset mismatch for FGeometryScriptClusterSimplifyEdgeConstraintOptions::MaterialBoundary");
static_assert(offsetof(FGeometryScriptClusterSimplifyEdgeConstraintOptions, UVSeam) == 3, "Offset mismatch for FGeometryScriptClusterSimplifyEdgeConstraintOptions::UVSeam");
static_assert(offsetof(FGeometryScriptClusterSimplifyEdgeConstraintOptions, ColorSeam) == 4, "Offset mismatch for FGeometryScriptClusterSimplifyEdgeConstraintOptions::ColorSeam");
static_assert(offsetof(FGeometryScriptClusterSimplifyEdgeConstraintOptions, NormalSeam) == 5, "Offset mismatch for FGeometryScriptClusterSimplifyEdgeConstraintOptions::NormalSeam");

// /Script/GeometryScriptingCore.GeometryScriptClusterSimplifyMeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptClusterSimplifyMeshOptions
{
public:
    std::uint8_t bDiscardAttributes; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double FixBoundaryAngleTolerance; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t EdgeConstraints[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t WeightMapHandle[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    float RelativeDensity; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptClusterSimplifyMeshOptions, bDiscardAttributes) == 0, "Offset mismatch for FGeometryScriptClusterSimplifyMeshOptions::bDiscardAttributes");
static_assert(offsetof(FGeometryScriptClusterSimplifyMeshOptions, FixBoundaryAngleTolerance) == 8, "Offset mismatch for FGeometryScriptClusterSimplifyMeshOptions::FixBoundaryAngleTolerance");
static_assert(offsetof(FGeometryScriptClusterSimplifyMeshOptions, EdgeConstraints) == 16, "Offset mismatch for FGeometryScriptClusterSimplifyMeshOptions::EdgeConstraints");
static_assert(offsetof(FGeometryScriptClusterSimplifyMeshOptions, WeightMapHandle) == 24, "Offset mismatch for FGeometryScriptClusterSimplifyMeshOptions::WeightMapHandle");
static_assert(offsetof(FGeometryScriptClusterSimplifyMeshOptions, RelativeDensity) == 28, "Offset mismatch for FGeometryScriptClusterSimplifyMeshOptions::RelativeDensity");

// /Script/GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptCollisionFromMeshOptions
{
public:
    std::uint8_t bEmitTransaction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Method; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAutoDetectSpheres; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoDetectBoxes; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoDetectCapsules; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float MinThickness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSimplifyHulls; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::int32_t ConvexHullTargetFaceCount; // 0x0010 (Size: 0x4, Type: IntProperty)
    float ConvexHullGeometricTolerance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxConvexHullsPerMesh; // 0x0018 (Size: 0x4, Type: IntProperty)
    float ConvexDecompositionSearchFactor; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ConvexDecompositionErrorTolerance; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ConvexDecompositionMinPartThickness; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float SweptHullSimplifyTolerance; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SweptHullAxis; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRemoveFullyContainedShapes; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x002E
    std::int32_t MaxShapeCount; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, bEmitTransaction) == 0, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::bEmitTransaction");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, Method) == 1, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::Method");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, bAutoDetectSpheres) == 2, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::bAutoDetectSpheres");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, bAutoDetectBoxes) == 3, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::bAutoDetectBoxes");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, bAutoDetectCapsules) == 4, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::bAutoDetectCapsules");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, MinThickness) == 8, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::MinThickness");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, bSimplifyHulls) == 12, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::bSimplifyHulls");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, ConvexHullTargetFaceCount) == 16, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::ConvexHullTargetFaceCount");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, ConvexHullGeometricTolerance) == 20, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::ConvexHullGeometricTolerance");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, MaxConvexHullsPerMesh) == 24, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::MaxConvexHullsPerMesh");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, ConvexDecompositionSearchFactor) == 28, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::ConvexDecompositionSearchFactor");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, ConvexDecompositionErrorTolerance) == 32, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::ConvexDecompositionErrorTolerance");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, ConvexDecompositionMinPartThickness) == 36, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::ConvexDecompositionMinPartThickness");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, SweptHullSimplifyTolerance) == 40, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::SweptHullSimplifyTolerance");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, SweptHullAxis) == 44, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::SweptHullAxis");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, bRemoveFullyContainedShapes) == 45, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::bRemoveFullyContainedShapes");
static_assert(offsetof(FGeometryScriptCollisionFromMeshOptions, MaxShapeCount) == 48, "Offset mismatch for FGeometryScriptCollisionFromMeshOptions::MaxShapeCount");

// /Script/GeometryScriptingCore.GeometryScriptColorFlags
// Kind: ScriptStruct; super: none
struct FGeometryScriptColorFlags
{
public:
    std::uint8_t bRed; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGreen; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlue; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlpha; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptColorFlags, bRed) == 0, "Offset mismatch for FGeometryScriptColorFlags::bRed");
static_assert(offsetof(FGeometryScriptColorFlags, bGreen) == 1, "Offset mismatch for FGeometryScriptColorFlags::bGreen");
static_assert(offsetof(FGeometryScriptColorFlags, bBlue) == 2, "Offset mismatch for FGeometryScriptColorFlags::bBlue");
static_assert(offsetof(FGeometryScriptColorFlags, bAlpha) == 3, "Offset mismatch for FGeometryScriptColorFlags::bAlpha");

// /Script/GeometryScriptingCore.GeometryScriptColorList
// Kind: ScriptStruct; super: none
struct FGeometryScriptColorList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptConstrainedDelaunayTriangulationOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptConstrainedDelaunayTriangulationOptions
{
public:
    std::uint8_t ConstrainedEdgesFillMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bValidateEdgesInResult; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveDuplicateVertices; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptConstrainedDelaunayTriangulationOptions, ConstrainedEdgesFillMode) == 0, "Offset mismatch for FGeometryScriptConstrainedDelaunayTriangulationOptions::ConstrainedEdgesFillMode");
static_assert(offsetof(FGeometryScriptConstrainedDelaunayTriangulationOptions, bValidateEdgesInResult) == 1, "Offset mismatch for FGeometryScriptConstrainedDelaunayTriangulationOptions::bValidateEdgesInResult");
static_assert(offsetof(FGeometryScriptConstrainedDelaunayTriangulationOptions, bRemoveDuplicateVertices) == 2, "Offset mismatch for FGeometryScriptConstrainedDelaunayTriangulationOptions::bRemoveDuplicateVertices");

// /Script/GeometryScriptingCore.GeometryScriptConvexDecompositionOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptConvexDecompositionOptions
{
public:
    std::int32_t NumHulls; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double SearchFactor; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double ErrorTolerance; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double MinPartThickness; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::int32_t SimplifyToFaceCount; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptConvexDecompositionOptions, NumHulls) == 0, "Offset mismatch for FGeometryScriptConvexDecompositionOptions::NumHulls");
static_assert(offsetof(FGeometryScriptConvexDecompositionOptions, SearchFactor) == 8, "Offset mismatch for FGeometryScriptConvexDecompositionOptions::SearchFactor");
static_assert(offsetof(FGeometryScriptConvexDecompositionOptions, ErrorTolerance) == 16, "Offset mismatch for FGeometryScriptConvexDecompositionOptions::ErrorTolerance");
static_assert(offsetof(FGeometryScriptConvexDecompositionOptions, MinPartThickness) == 24, "Offset mismatch for FGeometryScriptConvexDecompositionOptions::MinPartThickness");
static_assert(offsetof(FGeometryScriptConvexDecompositionOptions, SimplifyToFaceCount) == 32, "Offset mismatch for FGeometryScriptConvexDecompositionOptions::SimplifyToFaceCount");

// /Script/GeometryScriptingCore.GeometryScriptConvexHullApproximationOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptConvexHullApproximationOptions
{
public:
    std::uint8_t bFitSpheres; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFitBoxes; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFitCapsules; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float DistanceThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float VolumeDiffThreshold_Fraction; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptConvexHullApproximationOptions, bFitSpheres) == 0, "Offset mismatch for FGeometryScriptConvexHullApproximationOptions::bFitSpheres");
static_assert(offsetof(FGeometryScriptConvexHullApproximationOptions, bFitBoxes) == 1, "Offset mismatch for FGeometryScriptConvexHullApproximationOptions::bFitBoxes");
static_assert(offsetof(FGeometryScriptConvexHullApproximationOptions, bFitCapsules) == 2, "Offset mismatch for FGeometryScriptConvexHullApproximationOptions::bFitCapsules");
static_assert(offsetof(FGeometryScriptConvexHullApproximationOptions, DistanceThreshold) == 4, "Offset mismatch for FGeometryScriptConvexHullApproximationOptions::DistanceThreshold");
static_assert(offsetof(FGeometryScriptConvexHullApproximationOptions, VolumeDiffThreshold_Fraction) == 8, "Offset mismatch for FGeometryScriptConvexHullApproximationOptions::VolumeDiffThreshold_Fraction");

// /Script/GeometryScriptingCore.GeometryScriptConvexHullOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptConvexHullOptions
{
public:
    std::uint8_t bPrefilterVertices; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t PrefilterGridResolution; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t SimplifyToFaceCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    float GeometricToleranceAfterTarget; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptConvexHullOptions, bPrefilterVertices) == 0, "Offset mismatch for FGeometryScriptConvexHullOptions::bPrefilterVertices");
static_assert(offsetof(FGeometryScriptConvexHullOptions, PrefilterGridResolution) == 4, "Offset mismatch for FGeometryScriptConvexHullOptions::PrefilterGridResolution");
static_assert(offsetof(FGeometryScriptConvexHullOptions, SimplifyToFaceCount) == 8, "Offset mismatch for FGeometryScriptConvexHullOptions::SimplifyToFaceCount");
static_assert(offsetof(FGeometryScriptConvexHullOptions, GeometricToleranceAfterTarget) == 12, "Offset mismatch for FGeometryScriptConvexHullOptions::GeometricToleranceAfterTarget");

// /Script/GeometryScriptingCore.GeometryScriptConvexHullSimplificationOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptConvexHullSimplificationOptions
{
public:
    std::uint8_t SimplificationMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float SimplificationDistanceThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SimplificationAngleThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinTargetFaceCount; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptConvexHullSimplificationOptions, SimplificationMethod) == 0, "Offset mismatch for FGeometryScriptConvexHullSimplificationOptions::SimplificationMethod");
static_assert(offsetof(FGeometryScriptConvexHullSimplificationOptions, SimplificationDistanceThreshold) == 4, "Offset mismatch for FGeometryScriptConvexHullSimplificationOptions::SimplificationDistanceThreshold");
static_assert(offsetof(FGeometryScriptConvexHullSimplificationOptions, SimplificationAngleThreshold) == 8, "Offset mismatch for FGeometryScriptConvexHullSimplificationOptions::SimplificationAngleThreshold");
static_assert(offsetof(FGeometryScriptConvexHullSimplificationOptions, MinTargetFaceCount) == 12, "Offset mismatch for FGeometryScriptConvexHullSimplificationOptions::MinTargetFaceCount");

// /Script/GeometryScriptingCore.GeometryScriptCopyBonesFromMeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptCopyBonesFromMeshOptions
{
public:
    std::uint8_t ReindexWeights; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BonesToCopyFromSource; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptCopyBonesFromMeshOptions, ReindexWeights) == 0, "Offset mismatch for FGeometryScriptCopyBonesFromMeshOptions::ReindexWeights");
static_assert(offsetof(FGeometryScriptCopyBonesFromMeshOptions, BonesToCopyFromSource) == 1, "Offset mismatch for FGeometryScriptCopyBonesFromMeshOptions::BonesToCopyFromSource");

// /Script/GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptCopyMeshFromAssetOptions
{
public:
    std::uint8_t bApplyBuildSettings; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequestTangents; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreRemoveDegenerates; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseBuildScale; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptCopyMeshFromAssetOptions, bApplyBuildSettings) == 0, "Offset mismatch for FGeometryScriptCopyMeshFromAssetOptions::bApplyBuildSettings");
static_assert(offsetof(FGeometryScriptCopyMeshFromAssetOptions, bRequestTangents) == 1, "Offset mismatch for FGeometryScriptCopyMeshFromAssetOptions::bRequestTangents");
static_assert(offsetof(FGeometryScriptCopyMeshFromAssetOptions, bIgnoreRemoveDegenerates) == 2, "Offset mismatch for FGeometryScriptCopyMeshFromAssetOptions::bIgnoreRemoveDegenerates");
static_assert(offsetof(FGeometryScriptCopyMeshFromAssetOptions, bUseBuildScale) == 3, "Offset mismatch for FGeometryScriptCopyMeshFromAssetOptions::bUseBuildScale");

// /Script/GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptCopyMeshFromComponentOptions
{
public:
    std::uint8_t bWantNormals; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWantTangents; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWantInstanceColors; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::uint8_t RequestedLOD[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptCopyMeshFromComponentOptions, bWantNormals) == 0, "Offset mismatch for FGeometryScriptCopyMeshFromComponentOptions::bWantNormals");
static_assert(offsetof(FGeometryScriptCopyMeshFromComponentOptions, bWantTangents) == 1, "Offset mismatch for FGeometryScriptCopyMeshFromComponentOptions::bWantTangents");
static_assert(offsetof(FGeometryScriptCopyMeshFromComponentOptions, bWantInstanceColors) == 2, "Offset mismatch for FGeometryScriptCopyMeshFromComponentOptions::bWantInstanceColors");
static_assert(offsetof(FGeometryScriptCopyMeshFromComponentOptions, RequestedLOD) == 4, "Offset mismatch for FGeometryScriptCopyMeshFromComponentOptions::RequestedLOD");

// /Script/GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptCopyMeshToAssetOptions
{
public:
    std::uint8_t bEnableRecomputeNormals; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRecomputeTangents; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRemoveDegenerates; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BoneHierarchyMismatchHandling; // 0x0003 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRemapBoneIndicesToMatchAsset; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseOriginalVertexOrder; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseBuildScale; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplaceMaterials; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NewMaterialUsage; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    TArray<void*> NewMaterials; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NewMaterialSlotNames; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCleanAssignedMaterials; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GenerateLightmapUVs; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyNaniteSettings; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0033
    std::uint8_t NaniteSettings[0xC]; // 0x0034 (Size: 0xC, Type: StructProperty)
    std::uint8_t NewNaniteSettings[0x70]; // 0x0040 (Size: 0x70, Type: StructProperty)
    std::uint8_t bEmitTransaction; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeferMeshPostEditChange; // 0x00B1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bEnableRecomputeNormals) == 0, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bEnableRecomputeNormals");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bEnableRecomputeTangents) == 1, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bEnableRecomputeTangents");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bEnableRemoveDegenerates) == 2, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bEnableRemoveDegenerates");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, BoneHierarchyMismatchHandling) == 3, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::BoneHierarchyMismatchHandling");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bRemapBoneIndicesToMatchAsset) == 4, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bRemapBoneIndicesToMatchAsset");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bUseOriginalVertexOrder) == 5, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bUseOriginalVertexOrder");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bUseBuildScale) == 6, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bUseBuildScale");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bReplaceMaterials) == 7, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bReplaceMaterials");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, NewMaterialUsage) == 8, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::NewMaterialUsage");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, NewMaterials) == 16, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::NewMaterials");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, NewMaterialSlotNames) == 32, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::NewMaterialSlotNames");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bCleanAssignedMaterials) == 48, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bCleanAssignedMaterials");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, GenerateLightmapUVs) == 49, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::GenerateLightmapUVs");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bApplyNaniteSettings) == 50, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bApplyNaniteSettings");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, NaniteSettings) == 52, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::NaniteSettings");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, NewNaniteSettings) == 64, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::NewNaniteSettings");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bEmitTransaction) == 176, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bEmitTransaction");
static_assert(offsetof(FGeometryScriptCopyMeshToAssetOptions, bDeferMeshPostEditChange) == 177, "Offset mismatch for FGeometryScriptCopyMeshToAssetOptions::bDeferMeshPostEditChange");

// /Script/GeometryScriptingCore.GeometryScriptCopyMorphTargetToAssetOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptCopyMorphTargetToAssetOptions
{
public:
    std::uint8_t bOverwriteExistingTarget; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEmitTransaction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeferMeshPostEditChange; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyNormals; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptCopyMorphTargetToAssetOptions, bOverwriteExistingTarget) == 0, "Offset mismatch for FGeometryScriptCopyMorphTargetToAssetOptions::bOverwriteExistingTarget");
static_assert(offsetof(FGeometryScriptCopyMorphTargetToAssetOptions, bEmitTransaction) == 1, "Offset mismatch for FGeometryScriptCopyMorphTargetToAssetOptions::bEmitTransaction");
static_assert(offsetof(FGeometryScriptCopyMorphTargetToAssetOptions, bDeferMeshPostEditChange) == 2, "Offset mismatch for FGeometryScriptCopyMorphTargetToAssetOptions::bDeferMeshPostEditChange");
static_assert(offsetof(FGeometryScriptCopyMorphTargetToAssetOptions, bCopyNormals) == 3, "Offset mismatch for FGeometryScriptCopyMorphTargetToAssetOptions::bCopyNormals");

// /Script/GeometryScriptingCore.GeometryScriptCopySkinWeightProfileToAssetOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptCopySkinWeightProfileToAssetOptions
{
public:
    std::uint8_t bOverwriteExistingProfile; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEmitTransaction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeferMeshPostEditChange; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptCopySkinWeightProfileToAssetOptions, bOverwriteExistingProfile) == 0, "Offset mismatch for FGeometryScriptCopySkinWeightProfileToAssetOptions::bOverwriteExistingProfile");
static_assert(offsetof(FGeometryScriptCopySkinWeightProfileToAssetOptions, bEmitTransaction) == 1, "Offset mismatch for FGeometryScriptCopySkinWeightProfileToAssetOptions::bEmitTransaction");
static_assert(offsetof(FGeometryScriptCopySkinWeightProfileToAssetOptions, bDeferMeshPostEditChange) == 2, "Offset mismatch for FGeometryScriptCopySkinWeightProfileToAssetOptions::bDeferMeshPostEditChange");

// /Script/GeometryScriptingCore.GeometryScriptDebugMessage
// Kind: ScriptStruct; super: none
struct FGeometryScriptDebugMessage
{
public:
    std::uint8_t MessageType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ErrorType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    FText Message; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FGeometryScriptDebugMessage, MessageType) == 0, "Offset mismatch for FGeometryScriptDebugMessage::MessageType");
static_assert(offsetof(FGeometryScriptDebugMessage, ErrorType) == 1, "Offset mismatch for FGeometryScriptDebugMessage::ErrorType");
static_assert(offsetof(FGeometryScriptDebugMessage, Message) == 8, "Offset mismatch for FGeometryScriptDebugMessage::Message");

// /Script/GeometryScriptingCore.GeometryScriptDegenerateTriangleOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptDegenerateTriangleOptions
{
public:
    std::uint8_t Mode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double MinTriangleArea; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double MinEdgeLength; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCompactOnCompletion; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptDegenerateTriangleOptions, Mode) == 0, "Offset mismatch for FGeometryScriptDegenerateTriangleOptions::Mode");
static_assert(offsetof(FGeometryScriptDegenerateTriangleOptions, MinTriangleArea) == 8, "Offset mismatch for FGeometryScriptDegenerateTriangleOptions::MinTriangleArea");
static_assert(offsetof(FGeometryScriptDegenerateTriangleOptions, MinEdgeLength) == 16, "Offset mismatch for FGeometryScriptDegenerateTriangleOptions::MinEdgeLength");
static_assert(offsetof(FGeometryScriptDegenerateTriangleOptions, bCompactOnCompletion) == 24, "Offset mismatch for FGeometryScriptDegenerateTriangleOptions::bCompactOnCompletion");

// /Script/GeometryScriptingCore.GeometryScriptDetermineMeshOcclusionOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptDetermineMeshOcclusionOptions
{
public:
    double SamplingDensity; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bDoubleSided; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t NumSearchDirections; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptDetermineMeshOcclusionOptions, SamplingDensity) == 0, "Offset mismatch for FGeometryScriptDetermineMeshOcclusionOptions::SamplingDensity");
static_assert(offsetof(FGeometryScriptDetermineMeshOcclusionOptions, bDoubleSided) == 8, "Offset mismatch for FGeometryScriptDetermineMeshOcclusionOptions::bDoubleSided");
static_assert(offsetof(FGeometryScriptDetermineMeshOcclusionOptions, NumSearchDirections) == 12, "Offset mismatch for FGeometryScriptDetermineMeshOcclusionOptions::NumSearchDirections");

// /Script/GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptDisplaceFromTextureOptions
{
public:
    float Magnitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t UVScale[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t UVOffset[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    float Center; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::int32_t ImageChannel; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t EmptyBehavior; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptDisplaceFromTextureOptions, Magnitude) == 0, "Offset mismatch for FGeometryScriptDisplaceFromTextureOptions::Magnitude");
static_assert(offsetof(FGeometryScriptDisplaceFromTextureOptions, UVScale) == 8, "Offset mismatch for FGeometryScriptDisplaceFromTextureOptions::UVScale");
static_assert(offsetof(FGeometryScriptDisplaceFromTextureOptions, UVOffset) == 24, "Offset mismatch for FGeometryScriptDisplaceFromTextureOptions::UVOffset");
static_assert(offsetof(FGeometryScriptDisplaceFromTextureOptions, Center) == 40, "Offset mismatch for FGeometryScriptDisplaceFromTextureOptions::Center");
static_assert(offsetof(FGeometryScriptDisplaceFromTextureOptions, ImageChannel) == 44, "Offset mismatch for FGeometryScriptDisplaceFromTextureOptions::ImageChannel");
static_assert(offsetof(FGeometryScriptDisplaceFromTextureOptions, EmptyBehavior) == 48, "Offset mismatch for FGeometryScriptDisplaceFromTextureOptions::EmptyBehavior");

// /Script/GeometryScriptingCore.GeometryScriptDynamicMeshBVH
// Kind: ScriptStruct; super: none
struct FGeometryScriptDynamicMeshBVH
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptExpMapUVOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptExpMapUVOptions
{
public:
    std::int32_t NormalSmoothingRounds; // 0x0000 (Size: 0x4, Type: IntProperty)
    float NormalSmoothingAlpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptExpMapUVOptions, NormalSmoothingRounds) == 0, "Offset mismatch for FGeometryScriptExpMapUVOptions::NormalSmoothingRounds");
static_assert(offsetof(FGeometryScriptExpMapUVOptions, NormalSmoothingAlpha) == 4, "Offset mismatch for FGeometryScriptExpMapUVOptions::NormalSmoothingAlpha");

// /Script/GeometryScriptingCore.GeometryScriptFillHolesOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptFillHolesOptions
{
public:
    std::uint8_t FillMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDeleteIsolatedTriangles; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptFillHolesOptions, FillMethod) == 0, "Offset mismatch for FGeometryScriptFillHolesOptions::FillMethod");
static_assert(offsetof(FGeometryScriptFillHolesOptions, bDeleteIsolatedTriangles) == 1, "Offset mismatch for FGeometryScriptFillHolesOptions::bDeleteIsolatedTriangles");

// /Script/GeometryScriptingCore.GeometryScriptFitOrientedBoxOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptFitOrientedBoxOptions
{
public:
    double MinBoxDimension; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FitMethod; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptFitOrientedBoxOptions, MinBoxDimension) == 0, "Offset mismatch for FGeometryScriptFitOrientedBoxOptions::MinBoxDimension");
static_assert(offsetof(FGeometryScriptFitOrientedBoxOptions, FitMethod) == 8, "Offset mismatch for FGeometryScriptFitOrientedBoxOptions::FitMethod");

// /Script/GeometryScriptingCore.GeometryScriptFlareWarpOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptFlareWarpOptions
{
public:
    std::uint8_t bSymmetricExtents; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LowerExtent; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FlareType; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptFlareWarpOptions, bSymmetricExtents) == 0, "Offset mismatch for FGeometryScriptFlareWarpOptions::bSymmetricExtents");
static_assert(offsetof(FGeometryScriptFlareWarpOptions, LowerExtent) == 4, "Offset mismatch for FGeometryScriptFlareWarpOptions::LowerExtent");
static_assert(offsetof(FGeometryScriptFlareWarpOptions, FlareType) == 8, "Offset mismatch for FGeometryScriptFlareWarpOptions::FlareType");

// /Script/GeometryScriptingCore.GeometryScriptGeneralPolygonList
// Kind: ScriptStruct; super: none
struct FGeometryScriptGeneralPolygonList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptGroupLayer
// Kind: ScriptStruct; super: none
struct FGeometryScriptGroupLayer
{
public:
    std::uint8_t bDefaultLayer; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t ExtendedLayerIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptGroupLayer, bDefaultLayer) == 0, "Offset mismatch for FGeometryScriptGroupLayer::bDefaultLayer");
static_assert(offsetof(FGeometryScriptGroupLayer, ExtendedLayerIndex) == 4, "Offset mismatch for FGeometryScriptGroupLayer::ExtendedLayerIndex");

// /Script/GeometryScriptingCore.GeometryScriptIndexList
// Kind: ScriptStruct; super: none
struct FGeometryScriptIndexList
{
public:
    std::uint8_t IndexType; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptIndexList, IndexType) == 0, "Offset mismatch for FGeometryScriptIndexList::IndexType");

// /Script/GeometryScriptingCore.GeometryScriptIsSameMeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptIsSameMeshOptions
{
public:
    std::uint8_t bCheckConnectivity; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckEdgeIDs; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckNormals; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckColors; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckUVs; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckGroups; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckAttributes; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    float Epsilon; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptIsSameMeshOptions, bCheckConnectivity) == 0, "Offset mismatch for FGeometryScriptIsSameMeshOptions::bCheckConnectivity");
static_assert(offsetof(FGeometryScriptIsSameMeshOptions, bCheckEdgeIDs) == 1, "Offset mismatch for FGeometryScriptIsSameMeshOptions::bCheckEdgeIDs");
static_assert(offsetof(FGeometryScriptIsSameMeshOptions, bCheckNormals) == 2, "Offset mismatch for FGeometryScriptIsSameMeshOptions::bCheckNormals");
static_assert(offsetof(FGeometryScriptIsSameMeshOptions, bCheckColors) == 3, "Offset mismatch for FGeometryScriptIsSameMeshOptions::bCheckColors");
static_assert(offsetof(FGeometryScriptIsSameMeshOptions, bCheckUVs) == 4, "Offset mismatch for FGeometryScriptIsSameMeshOptions::bCheckUVs");
static_assert(offsetof(FGeometryScriptIsSameMeshOptions, bCheckGroups) == 5, "Offset mismatch for FGeometryScriptIsSameMeshOptions::bCheckGroups");
static_assert(offsetof(FGeometryScriptIsSameMeshOptions, bCheckAttributes) == 6, "Offset mismatch for FGeometryScriptIsSameMeshOptions::bCheckAttributes");
static_assert(offsetof(FGeometryScriptIsSameMeshOptions, Epsilon) == 8, "Offset mismatch for FGeometryScriptIsSameMeshOptions::Epsilon");

// /Script/GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptIterativeMeshSmoothingOptions
{
public:
    std::int32_t NumIterations; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Alpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EmptyBehavior; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptIterativeMeshSmoothingOptions, NumIterations) == 0, "Offset mismatch for FGeometryScriptIterativeMeshSmoothingOptions::NumIterations");
static_assert(offsetof(FGeometryScriptIterativeMeshSmoothingOptions, Alpha) == 4, "Offset mismatch for FGeometryScriptIterativeMeshSmoothingOptions::Alpha");
static_assert(offsetof(FGeometryScriptIterativeMeshSmoothingOptions, EmptyBehavior) == 8, "Offset mismatch for FGeometryScriptIterativeMeshSmoothingOptions::EmptyBehavior");

// /Script/GeometryScriptingCore.GeometryScriptLayoutUVsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptLayoutUVsOptions
{
public:
    std::uint8_t LayoutType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t TextureResolution; // 0x0004 (Size: 0x4, Type: IntProperty)
    float Scale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t Translation[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t bPreserveScale; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreserveRotation; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowFlips; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableUDIMLayout; // 0x0023 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0024
    TMap<void*, void*> UDIMResolutions; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FGeometryScriptLayoutUVsOptions, LayoutType) == 0, "Offset mismatch for FGeometryScriptLayoutUVsOptions::LayoutType");
static_assert(offsetof(FGeometryScriptLayoutUVsOptions, TextureResolution) == 4, "Offset mismatch for FGeometryScriptLayoutUVsOptions::TextureResolution");
static_assert(offsetof(FGeometryScriptLayoutUVsOptions, Scale) == 8, "Offset mismatch for FGeometryScriptLayoutUVsOptions::Scale");
static_assert(offsetof(FGeometryScriptLayoutUVsOptions, Translation) == 16, "Offset mismatch for FGeometryScriptLayoutUVsOptions::Translation");
static_assert(offsetof(FGeometryScriptLayoutUVsOptions, bPreserveScale) == 32, "Offset mismatch for FGeometryScriptLayoutUVsOptions::bPreserveScale");
static_assert(offsetof(FGeometryScriptLayoutUVsOptions, bPreserveRotation) == 33, "Offset mismatch for FGeometryScriptLayoutUVsOptions::bPreserveRotation");
static_assert(offsetof(FGeometryScriptLayoutUVsOptions, bAllowFlips) == 34, "Offset mismatch for FGeometryScriptLayoutUVsOptions::bAllowFlips");
static_assert(offsetof(FGeometryScriptLayoutUVsOptions, bEnableUDIMLayout) == 35, "Offset mismatch for FGeometryScriptLayoutUVsOptions::bEnableUDIMLayout");
static_assert(offsetof(FGeometryScriptLayoutUVsOptions, UDIMResolutions) == 40, "Offset mismatch for FGeometryScriptLayoutUVsOptions::UDIMResolutions");

// /Script/GeometryScriptingCore.GeometryScriptMathWarpOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMathWarpOptions
{
public:
    float Magnitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FrequencyShift; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptMathWarpOptions, Magnitude) == 0, "Offset mismatch for FGeometryScriptMathWarpOptions::Magnitude");
static_assert(offsetof(FGeometryScriptMathWarpOptions, Frequency) == 4, "Offset mismatch for FGeometryScriptMathWarpOptions::Frequency");
static_assert(offsetof(FGeometryScriptMathWarpOptions, FrequencyShift) == 8, "Offset mismatch for FGeometryScriptMathWarpOptions::FrequencyShift");

// /Script/GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeasureMeshDistanceOptions
{
public:
    std::uint8_t bSymmetric; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptMeasureMeshDistanceOptions, bSymmetric) == 0, "Offset mismatch for FGeometryScriptMeasureMeshDistanceOptions::bSymmetric");

// /Script/GeometryScriptingCore.GeometryScriptMergeSimpleCollisionOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMergeSimpleCollisionOptions
{
public:
    std::int32_t MaxShapeCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double ErrorTolerance; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double MinThicknessTolerance; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bConsiderAllPossibleMerges; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t PrecomputedNegativeSpace[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t bComputeNegativeSpace; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0031
    std::uint8_t ComputeNegativeSpaceOptions[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t ShapeToHullTriangulation[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptMergeSimpleCollisionOptions, MaxShapeCount) == 0, "Offset mismatch for FGeometryScriptMergeSimpleCollisionOptions::MaxShapeCount");
static_assert(offsetof(FGeometryScriptMergeSimpleCollisionOptions, ErrorTolerance) == 8, "Offset mismatch for FGeometryScriptMergeSimpleCollisionOptions::ErrorTolerance");
static_assert(offsetof(FGeometryScriptMergeSimpleCollisionOptions, MinThicknessTolerance) == 16, "Offset mismatch for FGeometryScriptMergeSimpleCollisionOptions::MinThicknessTolerance");
static_assert(offsetof(FGeometryScriptMergeSimpleCollisionOptions, bConsiderAllPossibleMerges) == 24, "Offset mismatch for FGeometryScriptMergeSimpleCollisionOptions::bConsiderAllPossibleMerges");
static_assert(offsetof(FGeometryScriptMergeSimpleCollisionOptions, PrecomputedNegativeSpace) == 32, "Offset mismatch for FGeometryScriptMergeSimpleCollisionOptions::PrecomputedNegativeSpace");
static_assert(offsetof(FGeometryScriptMergeSimpleCollisionOptions, bComputeNegativeSpace) == 48, "Offset mismatch for FGeometryScriptMergeSimpleCollisionOptions::bComputeNegativeSpace");
static_assert(offsetof(FGeometryScriptMergeSimpleCollisionOptions, ComputeNegativeSpaceOptions) == 56, "Offset mismatch for FGeometryScriptMergeSimpleCollisionOptions::ComputeNegativeSpaceOptions");
static_assert(offsetof(FGeometryScriptMergeSimpleCollisionOptions, ShapeToHullTriangulation) == 112, "Offset mismatch for FGeometryScriptMergeSimpleCollisionOptions::ShapeToHullTriangulation");

// /Script/GeometryScriptingCore.GeometryScriptMergeVertexOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMergeVertexOptions
{
public:
    std::uint8_t bOnlyBoundary; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowNonBoundaryBowties; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptMergeVertexOptions, bOnlyBoundary) == 0, "Offset mismatch for FGeometryScriptMergeVertexOptions::bOnlyBoundary");
static_assert(offsetof(FGeometryScriptMergeVertexOptions, bAllowNonBoundaryBowties) == 1, "Offset mismatch for FGeometryScriptMergeVertexOptions::bAllowNonBoundaryBowties");

// /Script/GeometryScriptingCore.GeometryScriptMeshBevelOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshBevelOptions
{
public:
    float BevelDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInferMaterialID; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t SetMaterialID; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Subdivisions; // 0x000C (Size: 0x4, Type: IntProperty)
    float RoundWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyFilterBox; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::uint8_t FilterBox[0x38]; // 0x0018 (Size: 0x38, Type: StructProperty)
    std::uint8_t FilterBoxTransform[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    std::uint8_t bFullyContained; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptMeshBevelOptions, BevelDistance) == 0, "Offset mismatch for FGeometryScriptMeshBevelOptions::BevelDistance");
static_assert(offsetof(FGeometryScriptMeshBevelOptions, bInferMaterialID) == 4, "Offset mismatch for FGeometryScriptMeshBevelOptions::bInferMaterialID");
static_assert(offsetof(FGeometryScriptMeshBevelOptions, SetMaterialID) == 8, "Offset mismatch for FGeometryScriptMeshBevelOptions::SetMaterialID");
static_assert(offsetof(FGeometryScriptMeshBevelOptions, Subdivisions) == 12, "Offset mismatch for FGeometryScriptMeshBevelOptions::Subdivisions");
static_assert(offsetof(FGeometryScriptMeshBevelOptions, RoundWeight) == 16, "Offset mismatch for FGeometryScriptMeshBevelOptions::RoundWeight");
static_assert(offsetof(FGeometryScriptMeshBevelOptions, bApplyFilterBox) == 20, "Offset mismatch for FGeometryScriptMeshBevelOptions::bApplyFilterBox");
static_assert(offsetof(FGeometryScriptMeshBevelOptions, FilterBox) == 24, "Offset mismatch for FGeometryScriptMeshBevelOptions::FilterBox");
static_assert(offsetof(FGeometryScriptMeshBevelOptions, FilterBoxTransform) == 80, "Offset mismatch for FGeometryScriptMeshBevelOptions::FilterBoxTransform");
static_assert(offsetof(FGeometryScriptMeshBevelOptions, bFullyContained) == 176, "Offset mismatch for FGeometryScriptMeshBevelOptions::bFullyContained");

// /Script/GeometryScriptingCore.GeometryScriptMeshBevelSelectionOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshBevelSelectionOptions
{
public:
    float BevelDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInferMaterialID; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t SetMaterialID; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Subdivisions; // 0x000C (Size: 0x4, Type: IntProperty)
    float RoundWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptMeshBevelSelectionOptions, BevelDistance) == 0, "Offset mismatch for FGeometryScriptMeshBevelSelectionOptions::BevelDistance");
static_assert(offsetof(FGeometryScriptMeshBevelSelectionOptions, bInferMaterialID) == 4, "Offset mismatch for FGeometryScriptMeshBevelSelectionOptions::bInferMaterialID");
static_assert(offsetof(FGeometryScriptMeshBevelSelectionOptions, SetMaterialID) == 8, "Offset mismatch for FGeometryScriptMeshBevelSelectionOptions::SetMaterialID");
static_assert(offsetof(FGeometryScriptMeshBevelSelectionOptions, Subdivisions) == 12, "Offset mismatch for FGeometryScriptMeshBevelSelectionOptions::Subdivisions");
static_assert(offsetof(FGeometryScriptMeshBevelSelectionOptions, RoundWeight) == 16, "Offset mismatch for FGeometryScriptMeshBevelSelectionOptions::RoundWeight");

// /Script/GeometryScriptingCore.GeometryScriptMeshBooleanOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshBooleanOptions
{
public:
    std::uint8_t bFillHoles; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSimplifyOutput; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float SimplifyPlanarTolerance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowEmptyResult; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OutputTransformSpace; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptMeshBooleanOptions, bFillHoles) == 0, "Offset mismatch for FGeometryScriptMeshBooleanOptions::bFillHoles");
static_assert(offsetof(FGeometryScriptMeshBooleanOptions, bSimplifyOutput) == 1, "Offset mismatch for FGeometryScriptMeshBooleanOptions::bSimplifyOutput");
static_assert(offsetof(FGeometryScriptMeshBooleanOptions, SimplifyPlanarTolerance) == 4, "Offset mismatch for FGeometryScriptMeshBooleanOptions::SimplifyPlanarTolerance");
static_assert(offsetof(FGeometryScriptMeshBooleanOptions, bAllowEmptyResult) == 8, "Offset mismatch for FGeometryScriptMeshBooleanOptions::bAllowEmptyResult");
static_assert(offsetof(FGeometryScriptMeshBooleanOptions, OutputTransformSpace) == 9, "Offset mismatch for FGeometryScriptMeshBooleanOptions::OutputTransformSpace");

// /Script/GeometryScriptingCore.GeometryScriptMeshDifferenceInfo
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshDifferenceInfo
{
public:
    std::uint8_t Reason; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Detail; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t TargetMeshElementID; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t OtherMeshElementID; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t ElementIDType; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptMeshDifferenceInfo, Reason) == 0, "Offset mismatch for FGeometryScriptMeshDifferenceInfo::Reason");
static_assert(offsetof(FGeometryScriptMeshDifferenceInfo, Detail) == 8, "Offset mismatch for FGeometryScriptMeshDifferenceInfo::Detail");
static_assert(offsetof(FGeometryScriptMeshDifferenceInfo, TargetMeshElementID) == 24, "Offset mismatch for FGeometryScriptMeshDifferenceInfo::TargetMeshElementID");
static_assert(offsetof(FGeometryScriptMeshDifferenceInfo, OtherMeshElementID) == 28, "Offset mismatch for FGeometryScriptMeshDifferenceInfo::OtherMeshElementID");
static_assert(offsetof(FGeometryScriptMeshDifferenceInfo, ElementIDType) == 32, "Offset mismatch for FGeometryScriptMeshDifferenceInfo::ElementIDType");

// /Script/GeometryScriptingCore.GeometryScriptMeshEditPolygroupOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshEditPolygroupOptions
{
public:
    std::uint8_t GroupMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t ConstantGroup; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptMeshEditPolygroupOptions, GroupMode) == 0, "Offset mismatch for FGeometryScriptMeshEditPolygroupOptions::GroupMode");
static_assert(offsetof(FGeometryScriptMeshEditPolygroupOptions, ConstantGroup) == 4, "Offset mismatch for FGeometryScriptMeshEditPolygroupOptions::ConstantGroup");

// /Script/GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshExtrudeOptions
{
public:
    float ExtrudeDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t ExtrudeDirection[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float UVScale; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSolidsToShells; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptMeshExtrudeOptions, ExtrudeDistance) == 0, "Offset mismatch for FGeometryScriptMeshExtrudeOptions::ExtrudeDistance");
static_assert(offsetof(FGeometryScriptMeshExtrudeOptions, ExtrudeDirection) == 8, "Offset mismatch for FGeometryScriptMeshExtrudeOptions::ExtrudeDirection");
static_assert(offsetof(FGeometryScriptMeshExtrudeOptions, UVScale) == 32, "Offset mismatch for FGeometryScriptMeshExtrudeOptions::UVScale");
static_assert(offsetof(FGeometryScriptMeshExtrudeOptions, bSolidsToShells) == 36, "Offset mismatch for FGeometryScriptMeshExtrudeOptions::bSolidsToShells");

// /Script/GeometryScriptingCore.GeometryScriptMeshInsetOutsetFacesOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshInsetOutsetFacesOptions
{
public:
    float Distance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReproject; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoundaryOnly; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    float Softness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AreaScale; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AreaMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t GroupOptions[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    float UVScale; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptMeshInsetOutsetFacesOptions, Distance) == 0, "Offset mismatch for FGeometryScriptMeshInsetOutsetFacesOptions::Distance");
static_assert(offsetof(FGeometryScriptMeshInsetOutsetFacesOptions, bReproject) == 4, "Offset mismatch for FGeometryScriptMeshInsetOutsetFacesOptions::bReproject");
static_assert(offsetof(FGeometryScriptMeshInsetOutsetFacesOptions, bBoundaryOnly) == 5, "Offset mismatch for FGeometryScriptMeshInsetOutsetFacesOptions::bBoundaryOnly");
static_assert(offsetof(FGeometryScriptMeshInsetOutsetFacesOptions, Softness) == 8, "Offset mismatch for FGeometryScriptMeshInsetOutsetFacesOptions::Softness");
static_assert(offsetof(FGeometryScriptMeshInsetOutsetFacesOptions, AreaScale) == 12, "Offset mismatch for FGeometryScriptMeshInsetOutsetFacesOptions::AreaScale");
static_assert(offsetof(FGeometryScriptMeshInsetOutsetFacesOptions, AreaMode) == 16, "Offset mismatch for FGeometryScriptMeshInsetOutsetFacesOptions::AreaMode");
static_assert(offsetof(FGeometryScriptMeshInsetOutsetFacesOptions, GroupOptions) == 20, "Offset mismatch for FGeometryScriptMeshInsetOutsetFacesOptions::GroupOptions");
static_assert(offsetof(FGeometryScriptMeshInsetOutsetFacesOptions, UVScale) == 28, "Offset mismatch for FGeometryScriptMeshInsetOutsetFacesOptions::UVScale");

// /Script/GeometryScriptingCore.GeometryScriptMeshIsoCurveOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshIsoCurveOptions
{
public:
    float CurveIsoValueSnapTolerance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SnapToExistingVertexTolerance; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptMeshIsoCurveOptions, CurveIsoValueSnapTolerance) == 0, "Offset mismatch for FGeometryScriptMeshIsoCurveOptions::CurveIsoValueSnapTolerance");
static_assert(offsetof(FGeometryScriptMeshIsoCurveOptions, SnapToExistingVertexTolerance) == 4, "Offset mismatch for FGeometryScriptMeshIsoCurveOptions::SnapToExistingVertexTolerance");

// /Script/GeometryScriptingCore.GeometryScriptMeshLinearExtrudeOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshLinearExtrudeOptions
{
public:
    float Distance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DirectionMode; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t Direction[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t AreaMode; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    std::uint8_t GroupOptions[0x8]; // 0x0024 (Size: 0x8, Type: StructProperty)
    float UVScale; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSolidsToShells; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptMeshLinearExtrudeOptions, Distance) == 0, "Offset mismatch for FGeometryScriptMeshLinearExtrudeOptions::Distance");
static_assert(offsetof(FGeometryScriptMeshLinearExtrudeOptions, DirectionMode) == 4, "Offset mismatch for FGeometryScriptMeshLinearExtrudeOptions::DirectionMode");
static_assert(offsetof(FGeometryScriptMeshLinearExtrudeOptions, Direction) == 8, "Offset mismatch for FGeometryScriptMeshLinearExtrudeOptions::Direction");
static_assert(offsetof(FGeometryScriptMeshLinearExtrudeOptions, AreaMode) == 32, "Offset mismatch for FGeometryScriptMeshLinearExtrudeOptions::AreaMode");
static_assert(offsetof(FGeometryScriptMeshLinearExtrudeOptions, GroupOptions) == 36, "Offset mismatch for FGeometryScriptMeshLinearExtrudeOptions::GroupOptions");
static_assert(offsetof(FGeometryScriptMeshLinearExtrudeOptions, UVScale) == 44, "Offset mismatch for FGeometryScriptMeshLinearExtrudeOptions::UVScale");
static_assert(offsetof(FGeometryScriptMeshLinearExtrudeOptions, bSolidsToShells) == 48, "Offset mismatch for FGeometryScriptMeshLinearExtrudeOptions::bSolidsToShells");

// /Script/GeometryScriptingCore.GeometryScriptMeshMirrorOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshMirrorOptions
{
public:
    std::uint8_t bApplyPlaneCut; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipCutSide; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWeldAlongPlane; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptMeshMirrorOptions, bApplyPlaneCut) == 0, "Offset mismatch for FGeometryScriptMeshMirrorOptions::bApplyPlaneCut");
static_assert(offsetof(FGeometryScriptMeshMirrorOptions, bFlipCutSide) == 1, "Offset mismatch for FGeometryScriptMeshMirrorOptions::bFlipCutSide");
static_assert(offsetof(FGeometryScriptMeshMirrorOptions, bWeldAlongPlane) == 2, "Offset mismatch for FGeometryScriptMeshMirrorOptions::bWeldAlongPlane");

// /Script/GeometryScriptingCore.GeometryScriptMeshOffsetFacesOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshOffsetFacesOptions
{
public:
    float Distance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OffsetType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AreaMode; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::uint8_t GroupOptions[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    float UVScale; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSolidsToShells; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptMeshOffsetFacesOptions, Distance) == 0, "Offset mismatch for FGeometryScriptMeshOffsetFacesOptions::Distance");
static_assert(offsetof(FGeometryScriptMeshOffsetFacesOptions, OffsetType) == 4, "Offset mismatch for FGeometryScriptMeshOffsetFacesOptions::OffsetType");
static_assert(offsetof(FGeometryScriptMeshOffsetFacesOptions, AreaMode) == 5, "Offset mismatch for FGeometryScriptMeshOffsetFacesOptions::AreaMode");
static_assert(offsetof(FGeometryScriptMeshOffsetFacesOptions, GroupOptions) == 8, "Offset mismatch for FGeometryScriptMeshOffsetFacesOptions::GroupOptions");
static_assert(offsetof(FGeometryScriptMeshOffsetFacesOptions, UVScale) == 16, "Offset mismatch for FGeometryScriptMeshOffsetFacesOptions::UVScale");
static_assert(offsetof(FGeometryScriptMeshOffsetFacesOptions, bSolidsToShells) == 20, "Offset mismatch for FGeometryScriptMeshOffsetFacesOptions::bSolidsToShells");

// /Script/GeometryScriptingCore.GeometryScriptMeshOffsetOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshOffsetOptions
{
public:
    float OffsetDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFixedBoundary; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t SolveSteps; // 0x0008 (Size: 0x4, Type: IntProperty)
    float SmoothAlpha; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReprojectDuringSmoothing; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float BoundaryAlpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptMeshOffsetOptions, OffsetDistance) == 0, "Offset mismatch for FGeometryScriptMeshOffsetOptions::OffsetDistance");
static_assert(offsetof(FGeometryScriptMeshOffsetOptions, bFixedBoundary) == 4, "Offset mismatch for FGeometryScriptMeshOffsetOptions::bFixedBoundary");
static_assert(offsetof(FGeometryScriptMeshOffsetOptions, SolveSteps) == 8, "Offset mismatch for FGeometryScriptMeshOffsetOptions::SolveSteps");
static_assert(offsetof(FGeometryScriptMeshOffsetOptions, SmoothAlpha) == 12, "Offset mismatch for FGeometryScriptMeshOffsetOptions::SmoothAlpha");
static_assert(offsetof(FGeometryScriptMeshOffsetOptions, bReprojectDuringSmoothing) == 16, "Offset mismatch for FGeometryScriptMeshOffsetOptions::bReprojectDuringSmoothing");
static_assert(offsetof(FGeometryScriptMeshOffsetOptions, BoundaryAlpha) == 20, "Offset mismatch for FGeometryScriptMeshOffsetOptions::BoundaryAlpha");

// /Script/GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshPlaneCutOptions
{
public:
    std::uint8_t bFillHoles; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t HoleFillMaterialID; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bFillSpans; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipCutSide; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000A
    float UVWorldDimension; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptMeshPlaneCutOptions, bFillHoles) == 0, "Offset mismatch for FGeometryScriptMeshPlaneCutOptions::bFillHoles");
static_assert(offsetof(FGeometryScriptMeshPlaneCutOptions, HoleFillMaterialID) == 4, "Offset mismatch for FGeometryScriptMeshPlaneCutOptions::HoleFillMaterialID");
static_assert(offsetof(FGeometryScriptMeshPlaneCutOptions, bFillSpans) == 8, "Offset mismatch for FGeometryScriptMeshPlaneCutOptions::bFillSpans");
static_assert(offsetof(FGeometryScriptMeshPlaneCutOptions, bFlipCutSide) == 9, "Offset mismatch for FGeometryScriptMeshPlaneCutOptions::bFlipCutSide");
static_assert(offsetof(FGeometryScriptMeshPlaneCutOptions, UVWorldDimension) == 12, "Offset mismatch for FGeometryScriptMeshPlaneCutOptions::UVWorldDimension");

// /Script/GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshPlaneSliceOptions
{
public:
    std::uint8_t bFillHoles; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t HoleFillMaterialID; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bFillSpans; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float GapWidth; // 0x000C (Size: 0x4, Type: FloatProperty)
    float UVWorldDimension; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptMeshPlaneSliceOptions, bFillHoles) == 0, "Offset mismatch for FGeometryScriptMeshPlaneSliceOptions::bFillHoles");
static_assert(offsetof(FGeometryScriptMeshPlaneSliceOptions, HoleFillMaterialID) == 4, "Offset mismatch for FGeometryScriptMeshPlaneSliceOptions::HoleFillMaterialID");
static_assert(offsetof(FGeometryScriptMeshPlaneSliceOptions, bFillSpans) == 8, "Offset mismatch for FGeometryScriptMeshPlaneSliceOptions::bFillSpans");
static_assert(offsetof(FGeometryScriptMeshPlaneSliceOptions, GapWidth) == 12, "Offset mismatch for FGeometryScriptMeshPlaneSliceOptions::GapWidth");
static_assert(offsetof(FGeometryScriptMeshPlaneSliceOptions, UVWorldDimension) == 16, "Offset mismatch for FGeometryScriptMeshPlaneSliceOptions::UVWorldDimension");

// /Script/GeometryScriptingCore.GeometryScriptMeshPointSamplingOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshPointSamplingOptions
{
public:
    float SamplingRadius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumSamples; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t RandomSeed; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    double SubSampleDensity; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::int32_t SamplingMethodVersion; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptMeshPointSamplingOptions, SamplingRadius) == 0, "Offset mismatch for FGeometryScriptMeshPointSamplingOptions::SamplingRadius");
static_assert(offsetof(FGeometryScriptMeshPointSamplingOptions, MaxNumSamples) == 4, "Offset mismatch for FGeometryScriptMeshPointSamplingOptions::MaxNumSamples");
static_assert(offsetof(FGeometryScriptMeshPointSamplingOptions, RandomSeed) == 8, "Offset mismatch for FGeometryScriptMeshPointSamplingOptions::RandomSeed");
static_assert(offsetof(FGeometryScriptMeshPointSamplingOptions, SubSampleDensity) == 16, "Offset mismatch for FGeometryScriptMeshPointSamplingOptions::SubSampleDensity");
static_assert(offsetof(FGeometryScriptMeshPointSamplingOptions, SamplingMethodVersion) == 24, "Offset mismatch for FGeometryScriptMeshPointSamplingOptions::SamplingMethodVersion");

// /Script/GeometryScriptingCore.GeometryScriptMeshProjectionSettings
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshProjectionSettings
{
public:
    std::uint8_t bProcessAllIfEmptySelection; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ProjectionRangeMax; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ProjectionRangeMin; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetUVsForUnmatched; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptMeshProjectionSettings, bProcessAllIfEmptySelection) == 0, "Offset mismatch for FGeometryScriptMeshProjectionSettings::bProcessAllIfEmptySelection");
static_assert(offsetof(FGeometryScriptMeshProjectionSettings, ProjectionRangeMax) == 4, "Offset mismatch for FGeometryScriptMeshProjectionSettings::ProjectionRangeMax");
static_assert(offsetof(FGeometryScriptMeshProjectionSettings, ProjectionRangeMin) == 8, "Offset mismatch for FGeometryScriptMeshProjectionSettings::ProjectionRangeMin");
static_assert(offsetof(FGeometryScriptMeshProjectionSettings, bResetUVsForUnmatched) == 12, "Offset mismatch for FGeometryScriptMeshProjectionSettings::bResetUVsForUnmatched");

// /Script/GeometryScriptingCore.GeometryScriptMeshReadLOD
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshReadLOD
{
public:
    std::uint8_t LODType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t LODIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptMeshReadLOD, LODType) == 0, "Offset mismatch for FGeometryScriptMeshReadLOD::LODType");
static_assert(offsetof(FGeometryScriptMeshReadLOD, LODIndex) == 4, "Offset mismatch for FGeometryScriptMeshReadLOD::LODIndex");

// /Script/GeometryScriptingCore.GeometryScriptMeshSelection
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshSelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshSelfUnionOptions
{
public:
    std::uint8_t bFillHoles; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTrimFlaps; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSimplifyOutput; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float SimplifyPlanarTolerance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float WindingThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptMeshSelfUnionOptions, bFillHoles) == 0, "Offset mismatch for FGeometryScriptMeshSelfUnionOptions::bFillHoles");
static_assert(offsetof(FGeometryScriptMeshSelfUnionOptions, bTrimFlaps) == 1, "Offset mismatch for FGeometryScriptMeshSelfUnionOptions::bTrimFlaps");
static_assert(offsetof(FGeometryScriptMeshSelfUnionOptions, bSimplifyOutput) == 2, "Offset mismatch for FGeometryScriptMeshSelfUnionOptions::bSimplifyOutput");
static_assert(offsetof(FGeometryScriptMeshSelfUnionOptions, SimplifyPlanarTolerance) == 4, "Offset mismatch for FGeometryScriptMeshSelfUnionOptions::SimplifyPlanarTolerance");
static_assert(offsetof(FGeometryScriptMeshSelfUnionOptions, WindingThreshold) == 8, "Offset mismatch for FGeometryScriptMeshSelfUnionOptions::WindingThreshold");

// /Script/GeometryScriptingCore.GeometryScriptMeshWriteLOD
// Kind: ScriptStruct; super: none
struct FGeometryScriptMeshWriteLOD
{
public:
    std::uint8_t bWriteHiResSource; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t LODIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptMeshWriteLOD, bWriteHiResSource) == 0, "Offset mismatch for FGeometryScriptMeshWriteLOD::bWriteHiResSource");
static_assert(offsetof(FGeometryScriptMeshWriteLOD, LODIndex) == 4, "Offset mismatch for FGeometryScriptMeshWriteLOD::LODIndex");

// /Script/GeometryScriptingCore.GeometryScriptMorphologyOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptMorphologyOptions
{
public:
    std::uint8_t SDFGridParameters[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseSeparateMeshGrid; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t MeshGridParameters[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomBounds[0x38]; // 0x0020 (Size: 0x38, Type: StructProperty)
    std::uint8_t Operation; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    float Distance; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptMorphologyOptions, SDFGridParameters) == 0, "Offset mismatch for FGeometryScriptMorphologyOptions::SDFGridParameters");
static_assert(offsetof(FGeometryScriptMorphologyOptions, bUseSeparateMeshGrid) == 12, "Offset mismatch for FGeometryScriptMorphologyOptions::bUseSeparateMeshGrid");
static_assert(offsetof(FGeometryScriptMorphologyOptions, MeshGridParameters) == 16, "Offset mismatch for FGeometryScriptMorphologyOptions::MeshGridParameters");
static_assert(offsetof(FGeometryScriptMorphologyOptions, CustomBounds) == 32, "Offset mismatch for FGeometryScriptMorphologyOptions::CustomBounds");
static_assert(offsetof(FGeometryScriptMorphologyOptions, Operation) == 88, "Offset mismatch for FGeometryScriptMorphologyOptions::Operation");
static_assert(offsetof(FGeometryScriptMorphologyOptions, Distance) == 92, "Offset mismatch for FGeometryScriptMorphologyOptions::Distance");

// /Script/GeometryScriptingCore.GeometryScriptNaniteOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptNaniteOptions
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float FallbackPercentTriangles; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FallbackRelativeError; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptNaniteOptions, bEnabled) == 0, "Offset mismatch for FGeometryScriptNaniteOptions::bEnabled");
static_assert(offsetof(FGeometryScriptNaniteOptions, FallbackPercentTriangles) == 4, "Offset mismatch for FGeometryScriptNaniteOptions::FallbackPercentTriangles");
static_assert(offsetof(FGeometryScriptNaniteOptions, FallbackRelativeError) == 8, "Offset mismatch for FGeometryScriptNaniteOptions::FallbackRelativeError");

// /Script/GeometryScriptingCore.GeometryScriptNonUniformPointSamplingOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptNonUniformPointSamplingOptions
{
public:
    float MaxSamplingRadius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SizeDistribution; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    double SizeDistributionPower; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t WeightMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvertWeights; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptNonUniformPointSamplingOptions, MaxSamplingRadius) == 0, "Offset mismatch for FGeometryScriptNonUniformPointSamplingOptions::MaxSamplingRadius");
static_assert(offsetof(FGeometryScriptNonUniformPointSamplingOptions, SizeDistribution) == 4, "Offset mismatch for FGeometryScriptNonUniformPointSamplingOptions::SizeDistribution");
static_assert(offsetof(FGeometryScriptNonUniformPointSamplingOptions, SizeDistributionPower) == 8, "Offset mismatch for FGeometryScriptNonUniformPointSamplingOptions::SizeDistributionPower");
static_assert(offsetof(FGeometryScriptNonUniformPointSamplingOptions, WeightMode) == 16, "Offset mismatch for FGeometryScriptNonUniformPointSamplingOptions::WeightMode");
static_assert(offsetof(FGeometryScriptNonUniformPointSamplingOptions, bInvertWeights) == 17, "Offset mismatch for FGeometryScriptNonUniformPointSamplingOptions::bInvertWeights");

// /Script/GeometryScriptingCore.GeometryScriptOpenPathOffsetOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptOpenPathOffsetOptions
{
public:
    std::uint8_t JoinType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double MiterLimit; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t EndType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    double StepsPerRadianScale; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double MaximumStepsPerRadian; // 0x0020 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FGeometryScriptOpenPathOffsetOptions, JoinType) == 0, "Offset mismatch for FGeometryScriptOpenPathOffsetOptions::JoinType");
static_assert(offsetof(FGeometryScriptOpenPathOffsetOptions, MiterLimit) == 8, "Offset mismatch for FGeometryScriptOpenPathOffsetOptions::MiterLimit");
static_assert(offsetof(FGeometryScriptOpenPathOffsetOptions, EndType) == 16, "Offset mismatch for FGeometryScriptOpenPathOffsetOptions::EndType");
static_assert(offsetof(FGeometryScriptOpenPathOffsetOptions, StepsPerRadianScale) == 24, "Offset mismatch for FGeometryScriptOpenPathOffsetOptions::StepsPerRadianScale");
static_assert(offsetof(FGeometryScriptOpenPathOffsetOptions, MaximumStepsPerRadian) == 32, "Offset mismatch for FGeometryScriptOpenPathOffsetOptions::MaximumStepsPerRadian");

// /Script/GeometryScriptingCore.GeometryScriptPNTessellateOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPNTessellateOptions
{
public:
    std::uint8_t bRecomputeNormals; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptPNTessellateOptions, bRecomputeNormals) == 0, "Offset mismatch for FGeometryScriptPNTessellateOptions::bRecomputeNormals");

// /Script/GeometryScriptingCore.GeometryScriptPatchBuilderOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPatchBuilderOptions
{
public:
    std::int32_t InitialPatchCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MinPatchSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    float PatchCurvatureAlignmentWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PatchMergingMetricThresh; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PatchMergingAngleThresh; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExpMapOptions[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::uint8_t bRespectInputGroups; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x001D
    std::uint8_t GroupLayer[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAutoPack; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t PackingOptions[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptPatchBuilderOptions, InitialPatchCount) == 0, "Offset mismatch for FGeometryScriptPatchBuilderOptions::InitialPatchCount");
static_assert(offsetof(FGeometryScriptPatchBuilderOptions, MinPatchSize) == 4, "Offset mismatch for FGeometryScriptPatchBuilderOptions::MinPatchSize");
static_assert(offsetof(FGeometryScriptPatchBuilderOptions, PatchCurvatureAlignmentWeight) == 8, "Offset mismatch for FGeometryScriptPatchBuilderOptions::PatchCurvatureAlignmentWeight");
static_assert(offsetof(FGeometryScriptPatchBuilderOptions, PatchMergingMetricThresh) == 12, "Offset mismatch for FGeometryScriptPatchBuilderOptions::PatchMergingMetricThresh");
static_assert(offsetof(FGeometryScriptPatchBuilderOptions, PatchMergingAngleThresh) == 16, "Offset mismatch for FGeometryScriptPatchBuilderOptions::PatchMergingAngleThresh");
static_assert(offsetof(FGeometryScriptPatchBuilderOptions, ExpMapOptions) == 20, "Offset mismatch for FGeometryScriptPatchBuilderOptions::ExpMapOptions");
static_assert(offsetof(FGeometryScriptPatchBuilderOptions, bRespectInputGroups) == 28, "Offset mismatch for FGeometryScriptPatchBuilderOptions::bRespectInputGroups");
static_assert(offsetof(FGeometryScriptPatchBuilderOptions, GroupLayer) == 32, "Offset mismatch for FGeometryScriptPatchBuilderOptions::GroupLayer");
static_assert(offsetof(FGeometryScriptPatchBuilderOptions, bAutoPack) == 40, "Offset mismatch for FGeometryScriptPatchBuilderOptions::bAutoPack");
static_assert(offsetof(FGeometryScriptPatchBuilderOptions, PackingOptions) == 44, "Offset mismatch for FGeometryScriptPatchBuilderOptions::PackingOptions");

// /Script/GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPerlinNoiseLayerOptions
{
public:
    float Magnitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FrequencyShift[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::int32_t RandomSeed; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptPerlinNoiseLayerOptions, Magnitude) == 0, "Offset mismatch for FGeometryScriptPerlinNoiseLayerOptions::Magnitude");
static_assert(offsetof(FGeometryScriptPerlinNoiseLayerOptions, Frequency) == 4, "Offset mismatch for FGeometryScriptPerlinNoiseLayerOptions::Frequency");
static_assert(offsetof(FGeometryScriptPerlinNoiseLayerOptions, FrequencyShift) == 8, "Offset mismatch for FGeometryScriptPerlinNoiseLayerOptions::FrequencyShift");
static_assert(offsetof(FGeometryScriptPerlinNoiseLayerOptions, RandomSeed) == 32, "Offset mismatch for FGeometryScriptPerlinNoiseLayerOptions::RandomSeed");

// /Script/GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPerlinNoiseOptions
{
public:
    std::uint8_t BaseLayer[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t bApplyAlongNormal; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NormalSource; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EmptyBehavior; // 0x002A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptPerlinNoiseOptions, BaseLayer) == 0, "Offset mismatch for FGeometryScriptPerlinNoiseOptions::BaseLayer");
static_assert(offsetof(FGeometryScriptPerlinNoiseOptions, bApplyAlongNormal) == 40, "Offset mismatch for FGeometryScriptPerlinNoiseOptions::bApplyAlongNormal");
static_assert(offsetof(FGeometryScriptPerlinNoiseOptions, NormalSource) == 41, "Offset mismatch for FGeometryScriptPerlinNoiseOptions::NormalSource");
static_assert(offsetof(FGeometryScriptPerlinNoiseOptions, EmptyBehavior) == 42, "Offset mismatch for FGeometryScriptPerlinNoiseOptions::EmptyBehavior");

// /Script/GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPlanarSimplifyOptions
{
public:
    float AngleThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutoCompact; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptPlanarSimplifyOptions, AngleThreshold) == 0, "Offset mismatch for FGeometryScriptPlanarSimplifyOptions::AngleThreshold");
static_assert(offsetof(FGeometryScriptPlanarSimplifyOptions, bAutoCompact) == 4, "Offset mismatch for FGeometryScriptPlanarSimplifyOptions::bAutoCompact");

// /Script/GeometryScriptingCore.GeometryScriptPointClusteringOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPointClusteringOptions
{
public:
    TArray<void*> InitialClusterCenters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t TargetNumClusters; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t InitializeMethod; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    std::int32_t RandomSeed; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxIterations; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptPointClusteringOptions, InitialClusterCenters) == 0, "Offset mismatch for FGeometryScriptPointClusteringOptions::InitialClusterCenters");
static_assert(offsetof(FGeometryScriptPointClusteringOptions, TargetNumClusters) == 16, "Offset mismatch for FGeometryScriptPointClusteringOptions::TargetNumClusters");
static_assert(offsetof(FGeometryScriptPointClusteringOptions, InitializeMethod) == 20, "Offset mismatch for FGeometryScriptPointClusteringOptions::InitializeMethod");
static_assert(offsetof(FGeometryScriptPointClusteringOptions, RandomSeed) == 24, "Offset mismatch for FGeometryScriptPointClusteringOptions::RandomSeed");
static_assert(offsetof(FGeometryScriptPointClusteringOptions, MaxIterations) == 28, "Offset mismatch for FGeometryScriptPointClusteringOptions::MaxIterations");

// /Script/GeometryScriptingCore.GeometryScriptPointFlatteningOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPointFlatteningOptions
{
public:
    std::uint8_t Frame[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t DropAxis; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptPointFlatteningOptions, Frame) == 0, "Offset mismatch for FGeometryScriptPointFlatteningOptions::Frame");
static_assert(offsetof(FGeometryScriptPointFlatteningOptions, DropAxis) == 96, "Offset mismatch for FGeometryScriptPointFlatteningOptions::DropAxis");

// /Script/GeometryScriptingCore.GeometryScriptPointPriorityOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPointPriorityOptions
{
public:
    TArray<void*> OptionalPriorityWeights; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUniformSpacing; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptPointPriorityOptions, OptionalPriorityWeights) == 0, "Offset mismatch for FGeometryScriptPointPriorityOptions::OptionalPriorityWeights");
static_assert(offsetof(FGeometryScriptPointPriorityOptions, bUniformSpacing) == 16, "Offset mismatch for FGeometryScriptPointPriorityOptions::bUniformSpacing");

// /Script/GeometryScriptingCore.GeometryScriptPolyPath
// Kind: ScriptStruct; super: none
struct FGeometryScriptPolyPath
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bClosedLoop; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptPolyPath, bClosedLoop) == 16, "Offset mismatch for FGeometryScriptPolyPath::bClosedLoop");

// /Script/GeometryScriptingCore.GeometryScriptPolygonOffsetOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPolygonOffsetOptions
{
public:
    std::uint8_t JoinType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double MiterLimit; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bOffsetBothSides; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    double StepsPerRadianScale; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double MaximumStepsPerRadian; // 0x0020 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FGeometryScriptPolygonOffsetOptions, JoinType) == 0, "Offset mismatch for FGeometryScriptPolygonOffsetOptions::JoinType");
static_assert(offsetof(FGeometryScriptPolygonOffsetOptions, MiterLimit) == 8, "Offset mismatch for FGeometryScriptPolygonOffsetOptions::MiterLimit");
static_assert(offsetof(FGeometryScriptPolygonOffsetOptions, bOffsetBothSides) == 16, "Offset mismatch for FGeometryScriptPolygonOffsetOptions::bOffsetBothSides");
static_assert(offsetof(FGeometryScriptPolygonOffsetOptions, StepsPerRadianScale) == 24, "Offset mismatch for FGeometryScriptPolygonOffsetOptions::StepsPerRadianScale");
static_assert(offsetof(FGeometryScriptPolygonOffsetOptions, MaximumStepsPerRadian) == 32, "Offset mismatch for FGeometryScriptPolygonOffsetOptions::MaximumStepsPerRadian");

// /Script/GeometryScriptingCore.GeometryScriptPolygonsTriangulationOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPolygonsTriangulationOptions
{
public:
    std::uint8_t bStillAppendOnTriangulationError; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptPolygonsTriangulationOptions, bStillAppendOnTriangulationError) == 0, "Offset mismatch for FGeometryScriptPolygonsTriangulationOptions::bStillAppendOnTriangulationError");

// /Script/GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPolygroupSimplifyOptions
{
public:
    float AngleThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutoCompact; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptPolygroupSimplifyOptions, AngleThreshold) == 0, "Offset mismatch for FGeometryScriptPolygroupSimplifyOptions::AngleThreshold");
static_assert(offsetof(FGeometryScriptPolygroupSimplifyOptions, bAutoCompact) == 4, "Offset mismatch for FGeometryScriptPolygroupSimplifyOptions::bAutoCompact");

// /Script/GeometryScriptingCore.GeometryScriptPrimitiveOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPrimitiveOptions
{
public:
    std::uint8_t PolygroupMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFlipOrientation; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UVMode; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t MaterialID; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptPrimitiveOptions, PolygroupMode) == 0, "Offset mismatch for FGeometryScriptPrimitiveOptions::PolygroupMode");
static_assert(offsetof(FGeometryScriptPrimitiveOptions, bFlipOrientation) == 1, "Offset mismatch for FGeometryScriptPrimitiveOptions::bFlipOrientation");
static_assert(offsetof(FGeometryScriptPrimitiveOptions, UVMode) == 2, "Offset mismatch for FGeometryScriptPrimitiveOptions::UVMode");
static_assert(offsetof(FGeometryScriptPrimitiveOptions, MaterialID) == 4, "Offset mismatch for FGeometryScriptPrimitiveOptions::MaterialID");

// /Script/GeometryScriptingCore.GeometryScriptPruneBoneWeightsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptPruneBoneWeightsOptions
{
public:
    std::uint8_t ReassignmentType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnoredInvalidBones; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptPruneBoneWeightsOptions, ReassignmentType) == 0, "Offset mismatch for FGeometryScriptPruneBoneWeightsOptions::ReassignmentType");
static_assert(offsetof(FGeometryScriptPruneBoneWeightsOptions, bIgnoredInvalidBones) == 1, "Offset mismatch for FGeometryScriptPruneBoneWeightsOptions::bIgnoredInvalidBones");

// /Script/GeometryScriptingCore.GeometryScriptRayHitResult
// Kind: ScriptStruct; super: none
struct FGeometryScriptRayHitResult
{
public:
    std::uint8_t bHit; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float RayParameter; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t HitTriangleID; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t HitPosition[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitBaryCoords[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptRayHitResult, bHit) == 0, "Offset mismatch for FGeometryScriptRayHitResult::bHit");
static_assert(offsetof(FGeometryScriptRayHitResult, RayParameter) == 4, "Offset mismatch for FGeometryScriptRayHitResult::RayParameter");
static_assert(offsetof(FGeometryScriptRayHitResult, HitTriangleID) == 8, "Offset mismatch for FGeometryScriptRayHitResult::HitTriangleID");
static_assert(offsetof(FGeometryScriptRayHitResult, HitPosition) == 16, "Offset mismatch for FGeometryScriptRayHitResult::HitPosition");
static_assert(offsetof(FGeometryScriptRayHitResult, HitBaryCoords) == 40, "Offset mismatch for FGeometryScriptRayHitResult::HitBaryCoords");

// /Script/GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptRecomputeUVsOptions
{
public:
    std::uint8_t Method; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IslandSource; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t ExpMapOptions[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t SpectralConformalOptions[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t GroupLayer[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAutoAlignIslandsWithAxes; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptRecomputeUVsOptions, Method) == 0, "Offset mismatch for FGeometryScriptRecomputeUVsOptions::Method");
static_assert(offsetof(FGeometryScriptRecomputeUVsOptions, IslandSource) == 1, "Offset mismatch for FGeometryScriptRecomputeUVsOptions::IslandSource");
static_assert(offsetof(FGeometryScriptRecomputeUVsOptions, ExpMapOptions) == 4, "Offset mismatch for FGeometryScriptRecomputeUVsOptions::ExpMapOptions");
static_assert(offsetof(FGeometryScriptRecomputeUVsOptions, SpectralConformalOptions) == 12, "Offset mismatch for FGeometryScriptRecomputeUVsOptions::SpectralConformalOptions");
static_assert(offsetof(FGeometryScriptRecomputeUVsOptions, GroupLayer) == 16, "Offset mismatch for FGeometryScriptRecomputeUVsOptions::GroupLayer");
static_assert(offsetof(FGeometryScriptRecomputeUVsOptions, bAutoAlignIslandsWithAxes) == 24, "Offset mismatch for FGeometryScriptRecomputeUVsOptions::bAutoAlignIslandsWithAxes");

// /Script/GeometryScriptingCore.GeometryScriptRemeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptRemeshOptions
{
public:
    std::uint8_t bDiscardAttributes; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReprojectToInputMesh; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SmoothingType; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float SmoothingRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MeshBoundaryConstraint; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GroupBoundaryConstraint; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MaterialBoundaryConstraint; // 0x000A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowFlips; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowSplits; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowCollapses; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreventNormalFlips; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreventTinyTriangles; // 0x000F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseFullRemeshPasses; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::int32_t RemeshIterations; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutoCompact; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptRemeshOptions, bDiscardAttributes) == 0, "Offset mismatch for FGeometryScriptRemeshOptions::bDiscardAttributes");
static_assert(offsetof(FGeometryScriptRemeshOptions, bReprojectToInputMesh) == 1, "Offset mismatch for FGeometryScriptRemeshOptions::bReprojectToInputMesh");
static_assert(offsetof(FGeometryScriptRemeshOptions, SmoothingType) == 2, "Offset mismatch for FGeometryScriptRemeshOptions::SmoothingType");
static_assert(offsetof(FGeometryScriptRemeshOptions, SmoothingRate) == 4, "Offset mismatch for FGeometryScriptRemeshOptions::SmoothingRate");
static_assert(offsetof(FGeometryScriptRemeshOptions, MeshBoundaryConstraint) == 8, "Offset mismatch for FGeometryScriptRemeshOptions::MeshBoundaryConstraint");
static_assert(offsetof(FGeometryScriptRemeshOptions, GroupBoundaryConstraint) == 9, "Offset mismatch for FGeometryScriptRemeshOptions::GroupBoundaryConstraint");
static_assert(offsetof(FGeometryScriptRemeshOptions, MaterialBoundaryConstraint) == 10, "Offset mismatch for FGeometryScriptRemeshOptions::MaterialBoundaryConstraint");
static_assert(offsetof(FGeometryScriptRemeshOptions, bAllowFlips) == 11, "Offset mismatch for FGeometryScriptRemeshOptions::bAllowFlips");
static_assert(offsetof(FGeometryScriptRemeshOptions, bAllowSplits) == 12, "Offset mismatch for FGeometryScriptRemeshOptions::bAllowSplits");
static_assert(offsetof(FGeometryScriptRemeshOptions, bAllowCollapses) == 13, "Offset mismatch for FGeometryScriptRemeshOptions::bAllowCollapses");
static_assert(offsetof(FGeometryScriptRemeshOptions, bPreventNormalFlips) == 14, "Offset mismatch for FGeometryScriptRemeshOptions::bPreventNormalFlips");
static_assert(offsetof(FGeometryScriptRemeshOptions, bPreventTinyTriangles) == 15, "Offset mismatch for FGeometryScriptRemeshOptions::bPreventTinyTriangles");
static_assert(offsetof(FGeometryScriptRemeshOptions, bUseFullRemeshPasses) == 16, "Offset mismatch for FGeometryScriptRemeshOptions::bUseFullRemeshPasses");
static_assert(offsetof(FGeometryScriptRemeshOptions, RemeshIterations) == 20, "Offset mismatch for FGeometryScriptRemeshOptions::RemeshIterations");
static_assert(offsetof(FGeometryScriptRemeshOptions, bAutoCompact) == 24, "Offset mismatch for FGeometryScriptRemeshOptions::bAutoCompact");

// /Script/GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptRemoveHiddenTrianglesOptions
{
public:
    std::uint8_t Method; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t SamplesPerTriangle; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ShrinkSelection; // 0x0008 (Size: 0x4, Type: IntProperty)
    float WindingIsoValue; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::int32_t RaysPerSample; // 0x0010 (Size: 0x4, Type: IntProperty)
    float NormalOffset; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCompactResult; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptRemoveHiddenTrianglesOptions, Method) == 0, "Offset mismatch for FGeometryScriptRemoveHiddenTrianglesOptions::Method");
static_assert(offsetof(FGeometryScriptRemoveHiddenTrianglesOptions, SamplesPerTriangle) == 4, "Offset mismatch for FGeometryScriptRemoveHiddenTrianglesOptions::SamplesPerTriangle");
static_assert(offsetof(FGeometryScriptRemoveHiddenTrianglesOptions, ShrinkSelection) == 8, "Offset mismatch for FGeometryScriptRemoveHiddenTrianglesOptions::ShrinkSelection");
static_assert(offsetof(FGeometryScriptRemoveHiddenTrianglesOptions, WindingIsoValue) == 12, "Offset mismatch for FGeometryScriptRemoveHiddenTrianglesOptions::WindingIsoValue");
static_assert(offsetof(FGeometryScriptRemoveHiddenTrianglesOptions, RaysPerSample) == 16, "Offset mismatch for FGeometryScriptRemoveHiddenTrianglesOptions::RaysPerSample");
static_assert(offsetof(FGeometryScriptRemoveHiddenTrianglesOptions, NormalOffset) == 20, "Offset mismatch for FGeometryScriptRemoveHiddenTrianglesOptions::NormalOffset");
static_assert(offsetof(FGeometryScriptRemoveHiddenTrianglesOptions, bCompactResult) == 24, "Offset mismatch for FGeometryScriptRemoveHiddenTrianglesOptions::bCompactResult");

// /Script/GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptRemoveSmallComponentOptions
{
public:
    float MinVolume; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinArea; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinTriangleCount; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptRemoveSmallComponentOptions, MinVolume) == 0, "Offset mismatch for FGeometryScriptRemoveSmallComponentOptions::MinVolume");
static_assert(offsetof(FGeometryScriptRemoveSmallComponentOptions, MinArea) == 4, "Offset mismatch for FGeometryScriptRemoveSmallComponentOptions::MinArea");
static_assert(offsetof(FGeometryScriptRemoveSmallComponentOptions, MinTriangleCount) == 8, "Offset mismatch for FGeometryScriptRemoveSmallComponentOptions::MinTriangleCount");

// /Script/GeometryScriptingCore.GeometryScriptRenderCaptureCamera
// Kind: ScriptStruct; super: none
struct FGeometryScriptRenderCaptureCamera
{
public:
    std::int32_t Resolution; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double FieldOfViewDegrees; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ViewPosition[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t ViewDirection[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    double NearPlaneDist; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FGeometryScriptRenderCaptureCamera, Resolution) == 0, "Offset mismatch for FGeometryScriptRenderCaptureCamera::Resolution");
static_assert(offsetof(FGeometryScriptRenderCaptureCamera, FieldOfViewDegrees) == 8, "Offset mismatch for FGeometryScriptRenderCaptureCamera::FieldOfViewDegrees");
static_assert(offsetof(FGeometryScriptRenderCaptureCamera, ViewPosition) == 16, "Offset mismatch for FGeometryScriptRenderCaptureCamera::ViewPosition");
static_assert(offsetof(FGeometryScriptRenderCaptureCamera, ViewDirection) == 40, "Offset mismatch for FGeometryScriptRenderCaptureCamera::ViewDirection");
static_assert(offsetof(FGeometryScriptRenderCaptureCamera, NearPlaneDist) == 64, "Offset mismatch for FGeometryScriptRenderCaptureCamera::NearPlaneDist");

// /Script/GeometryScriptingCore.GeometryScriptRenderCaptureCamerasForBoxOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptRenderCaptureCamerasForBoxOptions
{
public:
    std::int32_t Resolution; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double FieldOfViewDegrees; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bViewFromBoxFaces; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bViewFromUpperCorners; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bViewFromLowerCorners; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bViewFromUpperEdges; // 0x0013 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bViewFromLowerEdges; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bViewFromSideEdges; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    TArray<void*> ExtraViewFromPositions; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryScriptRenderCaptureCamerasForBoxOptions, Resolution) == 0, "Offset mismatch for FGeometryScriptRenderCaptureCamerasForBoxOptions::Resolution");
static_assert(offsetof(FGeometryScriptRenderCaptureCamerasForBoxOptions, FieldOfViewDegrees) == 8, "Offset mismatch for FGeometryScriptRenderCaptureCamerasForBoxOptions::FieldOfViewDegrees");
static_assert(offsetof(FGeometryScriptRenderCaptureCamerasForBoxOptions, bViewFromBoxFaces) == 16, "Offset mismatch for FGeometryScriptRenderCaptureCamerasForBoxOptions::bViewFromBoxFaces");
static_assert(offsetof(FGeometryScriptRenderCaptureCamerasForBoxOptions, bViewFromUpperCorners) == 17, "Offset mismatch for FGeometryScriptRenderCaptureCamerasForBoxOptions::bViewFromUpperCorners");
static_assert(offsetof(FGeometryScriptRenderCaptureCamerasForBoxOptions, bViewFromLowerCorners) == 18, "Offset mismatch for FGeometryScriptRenderCaptureCamerasForBoxOptions::bViewFromLowerCorners");
static_assert(offsetof(FGeometryScriptRenderCaptureCamerasForBoxOptions, bViewFromUpperEdges) == 19, "Offset mismatch for FGeometryScriptRenderCaptureCamerasForBoxOptions::bViewFromUpperEdges");
static_assert(offsetof(FGeometryScriptRenderCaptureCamerasForBoxOptions, bViewFromLowerEdges) == 20, "Offset mismatch for FGeometryScriptRenderCaptureCamerasForBoxOptions::bViewFromLowerEdges");
static_assert(offsetof(FGeometryScriptRenderCaptureCamerasForBoxOptions, bViewFromSideEdges) == 21, "Offset mismatch for FGeometryScriptRenderCaptureCamerasForBoxOptions::bViewFromSideEdges");
static_assert(offsetof(FGeometryScriptRenderCaptureCamerasForBoxOptions, ExtraViewFromPositions) == 24, "Offset mismatch for FGeometryScriptRenderCaptureCamerasForBoxOptions::ExtraViewFromPositions");

// /Script/GeometryScriptingCore.GeometryScriptRenderCaptureTextures
// Kind: ScriptStruct; super: none
struct FGeometryScriptRenderCaptureTextures
{
public:
    void* BaseColorMap; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasBaseColorMap; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    void* NormalMap; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasNormalMap; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    void* PackedMRSMap; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasPackedMRSMap; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0029
    void* MetallicMap; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasMetallicMap; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0039
    void* RoughnessMap; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasRoughnessMap; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0049
    void* SpecularMap; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasSpecularMap; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0059
    void* EmissiveMap; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasEmissiveMap; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0069
    void* OpacityMap; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasOpacityMap; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0079
    void* SubsurfaceColorMap; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasSubsurfaceColorMap; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptRenderCaptureTextures, BaseColorMap) == 0, "Offset mismatch for FGeometryScriptRenderCaptureTextures::BaseColorMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, bHasBaseColorMap) == 8, "Offset mismatch for FGeometryScriptRenderCaptureTextures::bHasBaseColorMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, NormalMap) == 16, "Offset mismatch for FGeometryScriptRenderCaptureTextures::NormalMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, bHasNormalMap) == 24, "Offset mismatch for FGeometryScriptRenderCaptureTextures::bHasNormalMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, PackedMRSMap) == 32, "Offset mismatch for FGeometryScriptRenderCaptureTextures::PackedMRSMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, bHasPackedMRSMap) == 40, "Offset mismatch for FGeometryScriptRenderCaptureTextures::bHasPackedMRSMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, MetallicMap) == 48, "Offset mismatch for FGeometryScriptRenderCaptureTextures::MetallicMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, bHasMetallicMap) == 56, "Offset mismatch for FGeometryScriptRenderCaptureTextures::bHasMetallicMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, RoughnessMap) == 64, "Offset mismatch for FGeometryScriptRenderCaptureTextures::RoughnessMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, bHasRoughnessMap) == 72, "Offset mismatch for FGeometryScriptRenderCaptureTextures::bHasRoughnessMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, SpecularMap) == 80, "Offset mismatch for FGeometryScriptRenderCaptureTextures::SpecularMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, bHasSpecularMap) == 88, "Offset mismatch for FGeometryScriptRenderCaptureTextures::bHasSpecularMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, EmissiveMap) == 96, "Offset mismatch for FGeometryScriptRenderCaptureTextures::EmissiveMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, bHasEmissiveMap) == 104, "Offset mismatch for FGeometryScriptRenderCaptureTextures::bHasEmissiveMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, OpacityMap) == 112, "Offset mismatch for FGeometryScriptRenderCaptureTextures::OpacityMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, bHasOpacityMap) == 120, "Offset mismatch for FGeometryScriptRenderCaptureTextures::bHasOpacityMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, SubsurfaceColorMap) == 128, "Offset mismatch for FGeometryScriptRenderCaptureTextures::SubsurfaceColorMap");
static_assert(offsetof(FGeometryScriptRenderCaptureTextures, bHasSubsurfaceColorMap) == 136, "Offset mismatch for FGeometryScriptRenderCaptureTextures::bHasSubsurfaceColorMap");

// /Script/GeometryScriptingCore.GeometryScriptRepackUVsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptRepackUVsOptions
{
public:
    std::int32_t TargetImageWidth; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOptimizeIslandRotation; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptRepackUVsOptions, TargetImageWidth) == 0, "Offset mismatch for FGeometryScriptRepackUVsOptions::TargetImageWidth");
static_assert(offsetof(FGeometryScriptRepackUVsOptions, bOptimizeIslandRotation) == 4, "Offset mismatch for FGeometryScriptRepackUVsOptions::bOptimizeIslandRotation");

// /Script/GeometryScriptingCore.GeometryScriptResolveTJunctionOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptResolveTJunctionOptions
{
public:
    float Tolerance; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptResolveTJunctionOptions, Tolerance) == 0, "Offset mismatch for FGeometryScriptResolveTJunctionOptions::Tolerance");

// /Script/GeometryScriptingCore.GeometryScriptRevolveOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptRevolveOptions
{
public:
    float RevolveDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DegreeOffset; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReverseDirection; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHardNormals; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000A
    float HardNormalAngle; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bProfileAtMidpoint; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFillPartialRevolveEndcaps; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptRevolveOptions, RevolveDegrees) == 0, "Offset mismatch for FGeometryScriptRevolveOptions::RevolveDegrees");
static_assert(offsetof(FGeometryScriptRevolveOptions, DegreeOffset) == 4, "Offset mismatch for FGeometryScriptRevolveOptions::DegreeOffset");
static_assert(offsetof(FGeometryScriptRevolveOptions, bReverseDirection) == 8, "Offset mismatch for FGeometryScriptRevolveOptions::bReverseDirection");
static_assert(offsetof(FGeometryScriptRevolveOptions, bHardNormals) == 9, "Offset mismatch for FGeometryScriptRevolveOptions::bHardNormals");
static_assert(offsetof(FGeometryScriptRevolveOptions, HardNormalAngle) == 12, "Offset mismatch for FGeometryScriptRevolveOptions::HardNormalAngle");
static_assert(offsetof(FGeometryScriptRevolveOptions, bProfileAtMidpoint) == 16, "Offset mismatch for FGeometryScriptRevolveOptions::bProfileAtMidpoint");
static_assert(offsetof(FGeometryScriptRevolveOptions, bFillPartialRevolveEndcaps) == 17, "Offset mismatch for FGeometryScriptRevolveOptions::bFillPartialRevolveEndcaps");

// /Script/GeometryScriptingCore.GeometryScriptSampleTextureOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSampleTextureOptions
{
public:
    std::uint8_t SamplingMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWrap; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t UVScale[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t UVOffset[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptSampleTextureOptions, SamplingMethod) == 0, "Offset mismatch for FGeometryScriptSampleTextureOptions::SamplingMethod");
static_assert(offsetof(FGeometryScriptSampleTextureOptions, bWrap) == 1, "Offset mismatch for FGeometryScriptSampleTextureOptions::bWrap");
static_assert(offsetof(FGeometryScriptSampleTextureOptions, UVScale) == 8, "Offset mismatch for FGeometryScriptSampleTextureOptions::UVScale");
static_assert(offsetof(FGeometryScriptSampleTextureOptions, UVOffset) == 24, "Offset mismatch for FGeometryScriptSampleTextureOptions::UVOffset");

// /Script/GeometryScriptingCore.GeometryScriptScalarList
// Kind: ScriptStruct; super: none
struct FGeometryScriptScalarList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptSculptLayerUpdateOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSculptLayerUpdateOptions
{
public:
    std::uint8_t bRecomputeNormals; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptSculptLayerUpdateOptions, bRecomputeNormals) == 0, "Offset mismatch for FGeometryScriptSculptLayerUpdateOptions::bRecomputeNormals");

// /Script/GeometryScriptingCore.GeometryScriptSelectHiddenTrianglesFromOutsideOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSelectHiddenTrianglesFromOutsideOptions
{
public:
    double SampleSpacing; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bDoubleSided; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t NumSearchDirections; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bPerPolyGroup; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    TArray<void*> RestrictToViewDirections; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    double ViewDirectionAngleRange; // 0x0028 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FGeometryScriptSelectHiddenTrianglesFromOutsideOptions, SampleSpacing) == 0, "Offset mismatch for FGeometryScriptSelectHiddenTrianglesFromOutsideOptions::SampleSpacing");
static_assert(offsetof(FGeometryScriptSelectHiddenTrianglesFromOutsideOptions, bDoubleSided) == 8, "Offset mismatch for FGeometryScriptSelectHiddenTrianglesFromOutsideOptions::bDoubleSided");
static_assert(offsetof(FGeometryScriptSelectHiddenTrianglesFromOutsideOptions, NumSearchDirections) == 12, "Offset mismatch for FGeometryScriptSelectHiddenTrianglesFromOutsideOptions::NumSearchDirections");
static_assert(offsetof(FGeometryScriptSelectHiddenTrianglesFromOutsideOptions, bPerPolyGroup) == 16, "Offset mismatch for FGeometryScriptSelectHiddenTrianglesFromOutsideOptions::bPerPolyGroup");
static_assert(offsetof(FGeometryScriptSelectHiddenTrianglesFromOutsideOptions, RestrictToViewDirections) == 24, "Offset mismatch for FGeometryScriptSelectHiddenTrianglesFromOutsideOptions::RestrictToViewDirections");
static_assert(offsetof(FGeometryScriptSelectHiddenTrianglesFromOutsideOptions, ViewDirectionAngleRange) == 40, "Offset mismatch for FGeometryScriptSelectHiddenTrianglesFromOutsideOptions::ViewDirectionAngleRange");

// /Script/GeometryScriptingCore.GeometryScriptSelectiveTessellateOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSelectiveTessellateOptions
{
public:
    std::uint8_t bEnableMultithreading; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EmptyBehavior; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGeometryScriptSelectiveTessellateOptions, bEnableMultithreading) == 0, "Offset mismatch for FGeometryScriptSelectiveTessellateOptions::bEnableMultithreading");
static_assert(offsetof(FGeometryScriptSelectiveTessellateOptions, EmptyBehavior) == 1, "Offset mismatch for FGeometryScriptSelectiveTessellateOptions::EmptyBehavior");

// /Script/GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSetSimpleCollisionOptions
{
public:
    std::uint8_t bEmitTransaction; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptSetSimpleCollisionOptions, bEmitTransaction) == 0, "Offset mismatch for FGeometryScriptSetSimpleCollisionOptions::bEmitTransaction");

// /Script/GeometryScriptingCore.GeometryScriptSetStaticMeshCollisionOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSetStaticMeshCollisionOptions
{
public:
    std::uint8_t bMarkAsCustomized; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptSetStaticMeshCollisionOptions, bMarkAsCustomized) == 0, "Offset mismatch for FGeometryScriptSetStaticMeshCollisionOptions::bMarkAsCustomized");

// /Script/GeometryScriptingCore.GeometryScriptSimpleCollision
// Kind: ScriptStruct; super: none
struct FGeometryScriptSimpleCollision
{
public:
    std::uint8_t AggGeom[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptSimpleCollision, AggGeom) == 0, "Offset mismatch for FGeometryScriptSimpleCollision::AggGeom");

// /Script/GeometryScriptingCore.GeometryScriptSimpleCollisionTriangulationOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSimpleCollisionTriangulationOptions
{
public:
    std::int32_t SphereStepsPerSide; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t CapsuleHemisphereSteps; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t CapsuleCircleSteps; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bApproximateLevelSetsWithCubes; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptSimpleCollisionTriangulationOptions, SphereStepsPerSide) == 0, "Offset mismatch for FGeometryScriptSimpleCollisionTriangulationOptions::SphereStepsPerSide");
static_assert(offsetof(FGeometryScriptSimpleCollisionTriangulationOptions, CapsuleHemisphereSteps) == 4, "Offset mismatch for FGeometryScriptSimpleCollisionTriangulationOptions::CapsuleHemisphereSteps");
static_assert(offsetof(FGeometryScriptSimpleCollisionTriangulationOptions, CapsuleCircleSteps) == 8, "Offset mismatch for FGeometryScriptSimpleCollisionTriangulationOptions::CapsuleCircleSteps");
static_assert(offsetof(FGeometryScriptSimpleCollisionTriangulationOptions, bApproximateLevelSetsWithCubes) == 12, "Offset mismatch for FGeometryScriptSimpleCollisionTriangulationOptions::bApproximateLevelSetsWithCubes");

// /Script/GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
// Kind: ScriptStruct; super: none
struct FGeometryScriptSimpleMeshBuffers
{
public:
    TArray<void*> Vertices; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Normals; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UV0; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UV1; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UV2; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UV3; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UV4; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UV5; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UV6; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UV7; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VertexColors; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Triangles; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TriGroupIDs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, Vertices) == 0, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::Vertices");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, Normals) == 16, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::Normals");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, UV0) == 32, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::UV0");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, UV1) == 48, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::UV1");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, UV2) == 64, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::UV2");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, UV3) == 80, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::UV3");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, UV4) == 96, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::UV4");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, UV5) == 112, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::UV5");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, UV6) == 128, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::UV6");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, UV7) == 144, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::UV7");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, VertexColors) == 160, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::VertexColors");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, Triangles) == 176, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::Triangles");
static_assert(offsetof(FGeometryScriptSimpleMeshBuffers, TriGroupIDs) == 192, "Offset mismatch for FGeometryScriptSimpleMeshBuffers::TriGroupIDs");

// /Script/GeometryScriptingCore.GeometryScriptSimplePolygon
// Kind: ScriptStruct; super: none
struct FGeometryScriptSimplePolygon
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSimplifyMeshOptions
{
public:
    std::uint8_t Method; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowSeamCollapse; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowSeamSmoothing; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowSeamSplits; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreserveVertexPositions; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRetainQuadricMemory; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::uint8_t EdgeLengthWeightMap[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t GeometricToleranceWeightMap[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t QuadricErrorWeightMap[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    float RegularizeWeight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutoCompact; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t QuadricVariant; // 0x0025 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0026
    float NormalAttributeWeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float TangentAttributeWeight; // 0x002C (Size: 0x4, Type: FloatProperty)
    float ColorAttributeWeight; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float TexCoordAttributeWeight; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float ScaleCorrection; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, Method) == 0, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::Method");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, bAllowSeamCollapse) == 1, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::bAllowSeamCollapse");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, bAllowSeamSmoothing) == 2, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::bAllowSeamSmoothing");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, bAllowSeamSplits) == 3, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::bAllowSeamSplits");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, bPreserveVertexPositions) == 4, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::bPreserveVertexPositions");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, bRetainQuadricMemory) == 5, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::bRetainQuadricMemory");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, EdgeLengthWeightMap) == 8, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::EdgeLengthWeightMap");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, GeometricToleranceWeightMap) == 16, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::GeometricToleranceWeightMap");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, QuadricErrorWeightMap) == 24, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::QuadricErrorWeightMap");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, RegularizeWeight) == 32, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::RegularizeWeight");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, bAutoCompact) == 36, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::bAutoCompact");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, QuadricVariant) == 37, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::QuadricVariant");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, NormalAttributeWeight) == 40, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::NormalAttributeWeight");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, TangentAttributeWeight) == 44, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::TangentAttributeWeight");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, ColorAttributeWeight) == 48, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::ColorAttributeWeight");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, TexCoordAttributeWeight) == 52, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::TexCoordAttributeWeight");
static_assert(offsetof(FGeometryScriptSimplifyMeshOptions, ScaleCorrection) == 56, "Offset mismatch for FGeometryScriptSimplifyMeshOptions::ScaleCorrection");

// /Script/GeometryScriptingCore.GeometryScriptSmoothBoneWeightsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSmoothBoneWeightsOptions
{
public:
    std::uint8_t DistanceWeighingType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Stiffness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxInfluences; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t VoxelResolution; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptSmoothBoneWeightsOptions, DistanceWeighingType) == 0, "Offset mismatch for FGeometryScriptSmoothBoneWeightsOptions::DistanceWeighingType");
static_assert(offsetof(FGeometryScriptSmoothBoneWeightsOptions, Stiffness) == 4, "Offset mismatch for FGeometryScriptSmoothBoneWeightsOptions::Stiffness");
static_assert(offsetof(FGeometryScriptSmoothBoneWeightsOptions, MaxInfluences) == 8, "Offset mismatch for FGeometryScriptSmoothBoneWeightsOptions::MaxInfluences");
static_assert(offsetof(FGeometryScriptSmoothBoneWeightsOptions, VoxelResolution) == 12, "Offset mismatch for FGeometryScriptSmoothBoneWeightsOptions::VoxelResolution");

// /Script/GeometryScriptingCore.GeometryScriptSnapBoundariesOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSnapBoundariesOptions
{
public:
    float Tolerance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSnapToEdges; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t MaxIterations; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptSnapBoundariesOptions, Tolerance) == 0, "Offset mismatch for FGeometryScriptSnapBoundariesOptions::Tolerance");
static_assert(offsetof(FGeometryScriptSnapBoundariesOptions, bSnapToEdges) == 4, "Offset mismatch for FGeometryScriptSnapBoundariesOptions::bSnapToEdges");
static_assert(offsetof(FGeometryScriptSnapBoundariesOptions, MaxIterations) == 8, "Offset mismatch for FGeometryScriptSnapBoundariesOptions::MaxIterations");

// /Script/GeometryScriptingCore.GeometryScriptSolidifyOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSolidifyOptions
{
public:
    std::uint8_t GridParameters[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomBounds[0x38]; // 0x0010 (Size: 0x38, Type: StructProperty)
    float WindingThreshold; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSolidAtBoundaries; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x004D
    float ExtendBounds; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::int32_t SurfaceSearchSteps; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t bThickenShells; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    double ShellThickness; // 0x0060 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FGeometryScriptSolidifyOptions, GridParameters) == 0, "Offset mismatch for FGeometryScriptSolidifyOptions::GridParameters");
static_assert(offsetof(FGeometryScriptSolidifyOptions, CustomBounds) == 16, "Offset mismatch for FGeometryScriptSolidifyOptions::CustomBounds");
static_assert(offsetof(FGeometryScriptSolidifyOptions, WindingThreshold) == 72, "Offset mismatch for FGeometryScriptSolidifyOptions::WindingThreshold");
static_assert(offsetof(FGeometryScriptSolidifyOptions, bSolidAtBoundaries) == 76, "Offset mismatch for FGeometryScriptSolidifyOptions::bSolidAtBoundaries");
static_assert(offsetof(FGeometryScriptSolidifyOptions, ExtendBounds) == 80, "Offset mismatch for FGeometryScriptSolidifyOptions::ExtendBounds");
static_assert(offsetof(FGeometryScriptSolidifyOptions, SurfaceSearchSteps) == 84, "Offset mismatch for FGeometryScriptSolidifyOptions::SurfaceSearchSteps");
static_assert(offsetof(FGeometryScriptSolidifyOptions, bThickenShells) == 88, "Offset mismatch for FGeometryScriptSolidifyOptions::bThickenShells");
static_assert(offsetof(FGeometryScriptSolidifyOptions, ShellThickness) == 96, "Offset mismatch for FGeometryScriptSolidifyOptions::ShellThickness");

// /Script/GeometryScriptingCore.GeometryScriptSpatialQueryOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSpatialQueryOptions
{
public:
    float MaxDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowUnsafeModifiedQueries; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float WindingIsoThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptSpatialQueryOptions, MaxDistance) == 0, "Offset mismatch for FGeometryScriptSpatialQueryOptions::MaxDistance");
static_assert(offsetof(FGeometryScriptSpatialQueryOptions, bAllowUnsafeModifiedQueries) == 4, "Offset mismatch for FGeometryScriptSpatialQueryOptions::bAllowUnsafeModifiedQueries");
static_assert(offsetof(FGeometryScriptSpatialQueryOptions, WindingIsoThreshold) == 8, "Offset mismatch for FGeometryScriptSpatialQueryOptions::WindingIsoThreshold");

// /Script/GeometryScriptingCore.GeometryScriptSpectralConformalUVOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSpectralConformalUVOptions
{
public:
    std::uint8_t bPreserveIrregularity; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptSpectralConformalUVOptions, bPreserveIrregularity) == 0, "Offset mismatch for FGeometryScriptSpectralConformalUVOptions::bPreserveIrregularity");

// /Script/GeometryScriptingCore.GeometryScriptSphereCovering
// Kind: ScriptStruct; super: none
struct FGeometryScriptSphereCovering
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptSplineSamplingOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSplineSamplingOptions
{
public:
    std::int32_t NumSamples; // 0x0000 (Size: 0x4, Type: IntProperty)
    float ErrorTolerance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SampleSpacing; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CoordinateSpace; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RangeMethod; // 0x000A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x000B
    float RangeStart; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RangeEnd; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptSplineSamplingOptions, NumSamples) == 0, "Offset mismatch for FGeometryScriptSplineSamplingOptions::NumSamples");
static_assert(offsetof(FGeometryScriptSplineSamplingOptions, ErrorTolerance) == 4, "Offset mismatch for FGeometryScriptSplineSamplingOptions::ErrorTolerance");
static_assert(offsetof(FGeometryScriptSplineSamplingOptions, SampleSpacing) == 8, "Offset mismatch for FGeometryScriptSplineSamplingOptions::SampleSpacing");
static_assert(offsetof(FGeometryScriptSplineSamplingOptions, CoordinateSpace) == 9, "Offset mismatch for FGeometryScriptSplineSamplingOptions::CoordinateSpace");
static_assert(offsetof(FGeometryScriptSplineSamplingOptions, RangeMethod) == 10, "Offset mismatch for FGeometryScriptSplineSamplingOptions::RangeMethod");
static_assert(offsetof(FGeometryScriptSplineSamplingOptions, RangeStart) == 12, "Offset mismatch for FGeometryScriptSplineSamplingOptions::RangeStart");
static_assert(offsetof(FGeometryScriptSplineSamplingOptions, RangeEnd) == 16, "Offset mismatch for FGeometryScriptSplineSamplingOptions::RangeEnd");

// /Script/GeometryScriptingCore.GeometryScriptSplitNormalsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSplitNormalsOptions
{
public:
    std::uint8_t bSplitByOpeningAngle; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float OpeningAngleDeg; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSplitByFaceGroup; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t GroupLayer[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptSplitNormalsOptions, bSplitByOpeningAngle) == 0, "Offset mismatch for FGeometryScriptSplitNormalsOptions::bSplitByOpeningAngle");
static_assert(offsetof(FGeometryScriptSplitNormalsOptions, OpeningAngleDeg) == 4, "Offset mismatch for FGeometryScriptSplitNormalsOptions::OpeningAngleDeg");
static_assert(offsetof(FGeometryScriptSplitNormalsOptions, bSplitByFaceGroup) == 8, "Offset mismatch for FGeometryScriptSplitNormalsOptions::bSplitByFaceGroup");
static_assert(offsetof(FGeometryScriptSplitNormalsOptions, GroupLayer) == 12, "Offset mismatch for FGeometryScriptSplitNormalsOptions::GroupLayer");

// /Script/GeometryScriptingCore.GeometryScriptSweptHullOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptSweptHullOptions
{
public:
    std::uint8_t bPrefilterVertices; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t PrefilterGridResolution; // 0x0004 (Size: 0x4, Type: IntProperty)
    float MinThickness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSimplify; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    float MinEdgeLength; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SimplifyTolerance; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptSweptHullOptions, bPrefilterVertices) == 0, "Offset mismatch for FGeometryScriptSweptHullOptions::bPrefilterVertices");
static_assert(offsetof(FGeometryScriptSweptHullOptions, PrefilterGridResolution) == 4, "Offset mismatch for FGeometryScriptSweptHullOptions::PrefilterGridResolution");
static_assert(offsetof(FGeometryScriptSweptHullOptions, MinThickness) == 8, "Offset mismatch for FGeometryScriptSweptHullOptions::MinThickness");
static_assert(offsetof(FGeometryScriptSweptHullOptions, bSimplify) == 12, "Offset mismatch for FGeometryScriptSweptHullOptions::bSimplify");
static_assert(offsetof(FGeometryScriptSweptHullOptions, MinEdgeLength) == 16, "Offset mismatch for FGeometryScriptSweptHullOptions::MinEdgeLength");
static_assert(offsetof(FGeometryScriptSweptHullOptions, SimplifyTolerance) == 20, "Offset mismatch for FGeometryScriptSweptHullOptions::SimplifyTolerance");

// /Script/GeometryScriptingCore.GeometryScriptTangentsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptTangentsOptions
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t UVLayer; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptTangentsOptions, Type) == 0, "Offset mismatch for FGeometryScriptTangentsOptions::Type");
static_assert(offsetof(FGeometryScriptTangentsOptions, UVLayer) == 4, "Offset mismatch for FGeometryScriptTangentsOptions::UVLayer");

// /Script/GeometryScriptingCore.GeometryScriptTransferBoneWeightsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptTransferBoneWeightsOptions
{
public:
    std::uint8_t TransferMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OutputTargetMeshBones; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t SourceProfile[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t TargetProfile[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    double RadiusPercentage; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double NormalThreshold; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LayeredMeshSupport; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    std::int32_t NumSmoothingIterations; // 0x0024 (Size: 0x4, Type: IntProperty)
    float SmoothingStrength; // 0x0028 (Size: 0x4, Type: FloatProperty)
    FName InpaintMask; // 0x002C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, TransferMethod) == 0, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::TransferMethod");
static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, OutputTargetMeshBones) == 1, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::OutputTargetMeshBones");
static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, SourceProfile) == 4, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::SourceProfile");
static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, TargetProfile) == 8, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::TargetProfile");
static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, RadiusPercentage) == 16, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::RadiusPercentage");
static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, NormalThreshold) == 24, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::NormalThreshold");
static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, LayeredMeshSupport) == 32, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::LayeredMeshSupport");
static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, NumSmoothingIterations) == 36, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::NumSmoothingIterations");
static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, SmoothingStrength) == 40, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::SmoothingStrength");
static_assert(offsetof(FGeometryScriptTransferBoneWeightsOptions, InpaintMask) == 44, "Offset mismatch for FGeometryScriptTransferBoneWeightsOptions::InpaintMask");

// /Script/GeometryScriptingCore.GeometryScriptTransferMeshVertexColorsOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptTransferMeshVertexColorsOptions
{
public:
    std::uint8_t TransferMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double RadiusPercentage; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double NormalThreshold; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LayeredMeshSupport; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    std::int32_t NumSmoothingIterations; // 0x001C (Size: 0x4, Type: IntProperty)
    float SmoothingStrength; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHardEdges; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0025
    float BiasRatio; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptTransferMeshVertexColorsOptions, TransferMethod) == 0, "Offset mismatch for FGeometryScriptTransferMeshVertexColorsOptions::TransferMethod");
static_assert(offsetof(FGeometryScriptTransferMeshVertexColorsOptions, RadiusPercentage) == 8, "Offset mismatch for FGeometryScriptTransferMeshVertexColorsOptions::RadiusPercentage");
static_assert(offsetof(FGeometryScriptTransferMeshVertexColorsOptions, NormalThreshold) == 16, "Offset mismatch for FGeometryScriptTransferMeshVertexColorsOptions::NormalThreshold");
static_assert(offsetof(FGeometryScriptTransferMeshVertexColorsOptions, LayeredMeshSupport) == 24, "Offset mismatch for FGeometryScriptTransferMeshVertexColorsOptions::LayeredMeshSupport");
static_assert(offsetof(FGeometryScriptTransferMeshVertexColorsOptions, NumSmoothingIterations) == 28, "Offset mismatch for FGeometryScriptTransferMeshVertexColorsOptions::NumSmoothingIterations");
static_assert(offsetof(FGeometryScriptTransferMeshVertexColorsOptions, SmoothingStrength) == 32, "Offset mismatch for FGeometryScriptTransferMeshVertexColorsOptions::SmoothingStrength");
static_assert(offsetof(FGeometryScriptTransferMeshVertexColorsOptions, bHardEdges) == 36, "Offset mismatch for FGeometryScriptTransferMeshVertexColorsOptions::bHardEdges");
static_assert(offsetof(FGeometryScriptTransferMeshVertexColorsOptions, BiasRatio) == 40, "Offset mismatch for FGeometryScriptTransferMeshVertexColorsOptions::BiasRatio");

// /Script/GeometryScriptingCore.GeometryScriptTransformCollisionOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptTransformCollisionOptions
{
public:
    std::uint8_t bWarnOnInvalidTransforms; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCenterTransformPivotPerShape; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptTransformCollisionOptions, bWarnOnInvalidTransforms) == 0, "Offset mismatch for FGeometryScriptTransformCollisionOptions::bWarnOnInvalidTransforms");
static_assert(offsetof(FGeometryScriptTransformCollisionOptions, bCenterTransformPivotPerShape) == 1, "Offset mismatch for FGeometryScriptTransformCollisionOptions::bCenterTransformPivotPerShape");

// /Script/GeometryScriptingCore.GeometryScriptTriangle
// Kind: ScriptStruct; super: none
struct FGeometryScriptTriangle
{
public:
    std::uint8_t Vector0[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Vector1[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t vector2[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptTriangle, Vector0) == 0, "Offset mismatch for FGeometryScriptTriangle::Vector0");
static_assert(offsetof(FGeometryScriptTriangle, Vector1) == 24, "Offset mismatch for FGeometryScriptTriangle::Vector1");
static_assert(offsetof(FGeometryScriptTriangle, vector2) == 48, "Offset mismatch for FGeometryScriptTriangle::vector2");

// /Script/GeometryScriptingCore.GeometryScriptTriangleList
// Kind: ScriptStruct; super: none
struct FGeometryScriptTriangleList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptTrianglePoint
// Kind: ScriptStruct; super: none
struct FGeometryScriptTrianglePoint
{
public:
    std::uint8_t bValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t TriangleID; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t Position[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t BaryCoords[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptTrianglePoint, bValid) == 0, "Offset mismatch for FGeometryScriptTrianglePoint::bValid");
static_assert(offsetof(FGeometryScriptTrianglePoint, TriangleID) == 4, "Offset mismatch for FGeometryScriptTrianglePoint::TriangleID");
static_assert(offsetof(FGeometryScriptTrianglePoint, Position) == 8, "Offset mismatch for FGeometryScriptTrianglePoint::Position");
static_assert(offsetof(FGeometryScriptTrianglePoint, BaryCoords) == 32, "Offset mismatch for FGeometryScriptTrianglePoint::BaryCoords");

// /Script/GeometryScriptingCore.GeometryScriptTwistWarpOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptTwistWarpOptions
{
public:
    std::uint8_t bSymmetricExtents; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LowerExtent; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBidirectional; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptTwistWarpOptions, bSymmetricExtents) == 0, "Offset mismatch for FGeometryScriptTwistWarpOptions::bSymmetricExtents");
static_assert(offsetof(FGeometryScriptTwistWarpOptions, LowerExtent) == 4, "Offset mismatch for FGeometryScriptTwistWarpOptions::LowerExtent");
static_assert(offsetof(FGeometryScriptTwistWarpOptions, bBidirectional) == 8, "Offset mismatch for FGeometryScriptTwistWarpOptions::bBidirectional");

// /Script/GeometryScriptingCore.GeometryScriptUVList
// Kind: ScriptStruct; super: none
struct FGeometryScriptUVList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptUVTexelDensityOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptUVTexelDensityOptions
{
public:
    std::uint8_t TexelDensityMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float TargetWorldUnits; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TargetPixelCount; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TextureResolution; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableUDIMLayout; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    TMap<void*, void*> UDIMResolutions; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FGeometryScriptUVTexelDensityOptions, TexelDensityMode) == 0, "Offset mismatch for FGeometryScriptUVTexelDensityOptions::TexelDensityMode");
static_assert(offsetof(FGeometryScriptUVTexelDensityOptions, TargetWorldUnits) == 4, "Offset mismatch for FGeometryScriptUVTexelDensityOptions::TargetWorldUnits");
static_assert(offsetof(FGeometryScriptUVTexelDensityOptions, TargetPixelCount) == 8, "Offset mismatch for FGeometryScriptUVTexelDensityOptions::TargetPixelCount");
static_assert(offsetof(FGeometryScriptUVTexelDensityOptions, TextureResolution) == 12, "Offset mismatch for FGeometryScriptUVTexelDensityOptions::TextureResolution");
static_assert(offsetof(FGeometryScriptUVTexelDensityOptions, bEnableUDIMLayout) == 16, "Offset mismatch for FGeometryScriptUVTexelDensityOptions::bEnableUDIMLayout");
static_assert(offsetof(FGeometryScriptUVTexelDensityOptions, UDIMResolutions) == 24, "Offset mismatch for FGeometryScriptUVTexelDensityOptions::UDIMResolutions");

// /Script/GeometryScriptingCore.GeometryScriptUVTriangle
// Kind: ScriptStruct; super: none
struct FGeometryScriptUVTriangle
{
public:
    std::uint8_t UV0[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t UV1[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t UV2[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeometryScriptUVTriangle, UV0) == 0, "Offset mismatch for FGeometryScriptUVTriangle::UV0");
static_assert(offsetof(FGeometryScriptUVTriangle, UV1) == 16, "Offset mismatch for FGeometryScriptUVTriangle::UV1");
static_assert(offsetof(FGeometryScriptUVTriangle, UV2) == 32, "Offset mismatch for FGeometryScriptUVTriangle::UV2");

// /Script/GeometryScriptingCore.GeometryScriptUniformRemeshOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptUniformRemeshOptions
{
public:
    std::uint8_t TargetType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t TargetTriangleCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    float TargetEdgeLength; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptUniformRemeshOptions, TargetType) == 0, "Offset mismatch for FGeometryScriptUniformRemeshOptions::TargetType");
static_assert(offsetof(FGeometryScriptUniformRemeshOptions, TargetTriangleCount) == 4, "Offset mismatch for FGeometryScriptUniformRemeshOptions::TargetTriangleCount");
static_assert(offsetof(FGeometryScriptUniformRemeshOptions, TargetEdgeLength) == 8, "Offset mismatch for FGeometryScriptUniformRemeshOptions::TargetEdgeLength");

// /Script/GeometryScriptingCore.GeometryScriptVectorList
// Kind: ScriptStruct; super: none
struct FGeometryScriptVectorList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptVoronoiOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptVoronoiOptions
{
public:
    float BoundsExpand; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Bounds[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    TArray<void*> CreateCells; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIncludeBoundary; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptVoronoiOptions, BoundsExpand) == 0, "Offset mismatch for FGeometryScriptVoronoiOptions::BoundsExpand");
static_assert(offsetof(FGeometryScriptVoronoiOptions, Bounds) == 8, "Offset mismatch for FGeometryScriptVoronoiOptions::Bounds");
static_assert(offsetof(FGeometryScriptVoronoiOptions, CreateCells) == 64, "Offset mismatch for FGeometryScriptVoronoiOptions::CreateCells");
static_assert(offsetof(FGeometryScriptVoronoiOptions, bIncludeBoundary) == 80, "Offset mismatch for FGeometryScriptVoronoiOptions::bIncludeBoundary");

// /Script/GeometryScriptingCore.GeometryScriptWeightMapDensity
// Kind: ScriptStruct; super: none
struct FGeometryScriptWeightMapDensity
{
public:
    std::uint8_t Handle[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float RelativeDensity; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryScriptWeightMapDensity, Handle) == 0, "Offset mismatch for FGeometryScriptWeightMapDensity::Handle");
static_assert(offsetof(FGeometryScriptWeightMapDensity, RelativeDensity) == 4, "Offset mismatch for FGeometryScriptWeightMapDensity::RelativeDensity");

// /Script/GeometryScriptingCore.GeometryScriptWeightMapHandle
// Kind: ScriptStruct; super: none
struct FGeometryScriptWeightMapHandle
{
public:
    std::int32_t WeightMapAttributeLayerIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptWeightMapHandle, WeightMapAttributeLayerIndex) == 0, "Offset mismatch for FGeometryScriptWeightMapHandle::WeightMapAttributeLayerIndex");

// /Script/GeometryScriptingCore.GeometryScriptWeldEdgesOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptWeldEdgesOptions
{
public:
    float Tolerance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOnlyUniquePairs; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryScriptWeldEdgesOptions, Tolerance) == 0, "Offset mismatch for FGeometryScriptWeldEdgesOptions::Tolerance");
static_assert(offsetof(FGeometryScriptWeldEdgesOptions, bOnlyUniquePairs) == 4, "Offset mismatch for FGeometryScriptWeldEdgesOptions::bOnlyUniquePairs");

// /Script/GeometryScriptingCore.GeometryScriptXAtlasOptions
// Kind: ScriptStruct; super: none
struct FGeometryScriptXAtlasOptions
{
public:
    std::int32_t MaxIterations; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryScriptXAtlasOptions, MaxIterations) == 0, "Offset mismatch for FGeometryScriptXAtlasOptions::MaxIterations");

// /Script/GeometryScriptingCore.NavigableConvexDecompositionOptions
// Kind: ScriptStruct; super: none
struct FNavigableConvexDecompositionOptions
{
public:
    double MinRadius; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Tolerance; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIgnoreUnreachableInternalSpace; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    TArray<void*> CustomNavigablePositions; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnreachablePlanes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ToleranceDirectionalScales; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNavigableConvexDecompositionOptions, MinRadius) == 0, "Offset mismatch for FNavigableConvexDecompositionOptions::MinRadius");
static_assert(offsetof(FNavigableConvexDecompositionOptions, Tolerance) == 8, "Offset mismatch for FNavigableConvexDecompositionOptions::Tolerance");
static_assert(offsetof(FNavigableConvexDecompositionOptions, bIgnoreUnreachableInternalSpace) == 16, "Offset mismatch for FNavigableConvexDecompositionOptions::bIgnoreUnreachableInternalSpace");
static_assert(offsetof(FNavigableConvexDecompositionOptions, CustomNavigablePositions) == 24, "Offset mismatch for FNavigableConvexDecompositionOptions::CustomNavigablePositions");
static_assert(offsetof(FNavigableConvexDecompositionOptions, UnreachablePlanes) == 40, "Offset mismatch for FNavigableConvexDecompositionOptions::UnreachablePlanes");
static_assert(offsetof(FNavigableConvexDecompositionOptions, ToleranceDirectionalScales) == 56, "Offset mismatch for FNavigableConvexDecompositionOptions::ToleranceDirectionalScales");

// /Script/GeometryScriptingCore.NegativeSpaceDirectionalToleranceScale
// Kind: ScriptStruct; super: none
struct FNegativeSpaceDirectionalToleranceScale
{
public:
    std::uint8_t Direction[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    double AngleRange; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double ScaleFactor; // 0x0020 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FNegativeSpaceDirectionalToleranceScale, Direction) == 0, "Offset mismatch for FNegativeSpaceDirectionalToleranceScale::Direction");
static_assert(offsetof(FNegativeSpaceDirectionalToleranceScale, AngleRange) == 24, "Offset mismatch for FNegativeSpaceDirectionalToleranceScale::AngleRange");
static_assert(offsetof(FNegativeSpaceDirectionalToleranceScale, ScaleFactor) == 32, "Offset mismatch for FNegativeSpaceDirectionalToleranceScale::ScaleFactor");

// /Script/GeometryScriptingCore.GeometryScriptDebug
// Kind: Class; super: Object
class UGeometryScriptDebug
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Messages; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGeometryScriptDebug, Messages) == 40, "Offset mismatch for UGeometryScriptDebug::Messages");

// /Script/GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_BoxFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_CollisionFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_ContainmentFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_ListUtilityFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshBakeFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshBasicEditFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshBoneWeightFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshBooleanFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshComparisonFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshDecompositionFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshDeformFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshGeodesicFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshMaterialFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshModelingFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshNormalsFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshPolygroupFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPoolFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshPoolFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshPrimitiveFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshQueryFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshRepairFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshSamplingFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSculptLayersFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshSculptLayersFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshSelectionFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshSelectionQueryFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshSimplifyFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshSpatial
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshSubdivideFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshTransformFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshUVFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshVertexColorFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshVoxelFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_MeshWeightMapFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_MeshWeightMapFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_OrientedBoxFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_OrientedBoxFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_PointSetSamplingFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_PointSetSamplingFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_PolyPathFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_PolygonListFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_RayFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_RemeshingFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_SceneUtilityFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_SimplePolygonFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_StaticMeshFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_TextureMapFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_TransformFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_VectorMathFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryScriptingCore.GeometryScriptLibrary_VolumeTextureBakeFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryScriptLibrary_VolumeTextureBakeFunctions
{
public:
    std::uint8_t Opaque[1];
};
