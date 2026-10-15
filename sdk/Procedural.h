/**
 * decamp dumper generated SDK
 * Package: /Script/Procedural
 */
#pragma once
#include "Basic.h"

// /Script/Procedural.ProceduralContentVariationMap
// Kind: ScriptStruct; super: none
struct FProceduralContentVariationMap
{
public:
    std::int32_t VariationIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* Map; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float Weight; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FProceduralContentVariationMap, VariationIndex) == 0, "Offset mismatch for FProceduralContentVariationMap::VariationIndex");
static_assert(offsetof(FProceduralContentVariationMap, Map) == 8, "Offset mismatch for FProceduralContentVariationMap::Map");
static_assert(offsetof(FProceduralContentVariationMap, Weight) == 16, "Offset mismatch for FProceduralContentVariationMap::Weight");

// /Script/Procedural.ProceduralContentVariationsModifiers
// Kind: ScriptStruct; super: none
struct FProceduralContentVariationsModifiers
{
public:
    TArray<void*> Modifiers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FProceduralContentVariationsModifiers, Modifiers) == 0, "Offset mismatch for FProceduralContentVariationsModifiers::Modifiers");

// /Script/Procedural.ProceduralDebugSettings
// Kind: ScriptStruct; super: none
struct FProceduralDebugSettings
{
public:
    std::uint8_t bShowDebugPointCloud; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t DebugPointColor[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    float DebugCullingDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FProceduralDebugSettings, bShowDebugPointCloud) == 0, "Offset mismatch for FProceduralDebugSettings::bShowDebugPointCloud");
static_assert(offsetof(FProceduralDebugSettings, DebugPointColor) == 4, "Offset mismatch for FProceduralDebugSettings::DebugPointColor");
static_assert(offsetof(FProceduralDebugSettings, DebugCullingDistance) == 8, "Offset mismatch for FProceduralDebugSettings::DebugCullingDistance");

// /Script/Procedural.ProceduralDensityModifiers
// Kind: ScriptStruct; super: none
struct FProceduralDensityModifiers
{
public:
    TArray<void*> Modifiers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FProceduralDensityModifiers, Modifiers) == 0, "Offset mismatch for FProceduralDensityModifiers::Modifiers");

// /Script/Procedural.ProceduralGenerationStackElement
// Kind: ScriptStruct; super: none
struct FProceduralGenerationStackElement
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Generator; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FProceduralGenerationStackElement, bEnabled) == 0, "Offset mismatch for FProceduralGenerationStackElement::bEnabled");
static_assert(offsetof(FProceduralGenerationStackElement, Generator) == 8, "Offset mismatch for FProceduralGenerationStackElement::Generator");

// /Script/Procedural.ProceduralHitPoint
// Kind: ScriptStruct; super: none
struct FProceduralHitPoint
{
public:
    std::uint8_t bIsTraceDone; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Position[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Component; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FProceduralHitPoint, bIsTraceDone) == 0, "Offset mismatch for FProceduralHitPoint::bIsTraceDone");
static_assert(offsetof(FProceduralHitPoint, Position) == 8, "Offset mismatch for FProceduralHitPoint::Position");
static_assert(offsetof(FProceduralHitPoint, Normal) == 32, "Offset mismatch for FProceduralHitPoint::Normal");
static_assert(offsetof(FProceduralHitPoint, Component) == 56, "Offset mismatch for FProceduralHitPoint::Component");

// /Script/Procedural.ProceduralPointCloudPoint
// Kind: ScriptStruct; super: none
struct FProceduralPointCloudPoint
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t SurfaceNormal[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    void* SurfaceObject; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* Object; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ObjectVariation; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x008C
    TArray<void*> Tags; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    float CollisionRadius; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float SourcePointGeneratorIndex; // 0x00A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FProceduralPointCloudPoint, Transform) == 0, "Offset mismatch for FProceduralPointCloudPoint::Transform");
static_assert(offsetof(FProceduralPointCloudPoint, SurfaceNormal) == 96, "Offset mismatch for FProceduralPointCloudPoint::SurfaceNormal");
static_assert(offsetof(FProceduralPointCloudPoint, SurfaceObject) == 120, "Offset mismatch for FProceduralPointCloudPoint::SurfaceObject");
static_assert(offsetof(FProceduralPointCloudPoint, Object) == 128, "Offset mismatch for FProceduralPointCloudPoint::Object");
static_assert(offsetof(FProceduralPointCloudPoint, ObjectVariation) == 136, "Offset mismatch for FProceduralPointCloudPoint::ObjectVariation");
static_assert(offsetof(FProceduralPointCloudPoint, Tags) == 144, "Offset mismatch for FProceduralPointCloudPoint::Tags");
static_assert(offsetof(FProceduralPointCloudPoint, CollisionRadius) == 160, "Offset mismatch for FProceduralPointCloudPoint::CollisionRadius");
static_assert(offsetof(FProceduralPointCloudPoint, SourcePointGeneratorIndex) == 164, "Offset mismatch for FProceduralPointCloudPoint::SourcePointGeneratorIndex");

// /Script/Procedural.ProceduralRemapFloatCurve
// Kind: ScriptStruct; super: none
struct FProceduralRemapFloatCurve
{
public:
    std::uint8_t RemapCurve[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProceduralRemapFloatCurve, RemapCurve) == 0, "Offset mismatch for FProceduralRemapFloatCurve::RemapCurve");

// /Script/Procedural.ProceduralRemapVectorCurve
// Kind: ScriptStruct; super: none
struct FProceduralRemapVectorCurve
{
public:
    std::uint8_t RemapCurve[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProceduralRemapVectorCurve, RemapCurve) == 0, "Offset mismatch for FProceduralRemapVectorCurve::RemapCurve");

// /Script/Procedural.ProceduralRotationModifiers
// Kind: ScriptStruct; super: none
struct FProceduralRotationModifiers
{
public:
    TArray<void*> Modifiers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FProceduralRotationModifiers, Modifiers) == 0, "Offset mismatch for FProceduralRotationModifiers::Modifiers");

// /Script/Procedural.ProceduralScaleModifiers
// Kind: ScriptStruct; super: none
struct FProceduralScaleModifiers
{
public:
    std::uint8_t bRandomScaleEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t RandomScale[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    TArray<void*> Modifiers; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FProceduralScaleModifiers, bRandomScaleEnabled) == 0, "Offset mismatch for FProceduralScaleModifiers::bRandomScaleEnabled");
static_assert(offsetof(FProceduralScaleModifiers, RandomScale) == 4, "Offset mismatch for FProceduralScaleModifiers::RandomScale");
static_assert(offsetof(FProceduralScaleModifiers, Modifiers) == 16, "Offset mismatch for FProceduralScaleModifiers::Modifiers");

// /Script/Procedural.ProceduralScatter2DPoint
// Kind: ScriptStruct; super: none
struct FProceduralScatter2DPoint
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Scale; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    void* ScatterSettings; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaxAABB[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    float CollisionRadius; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBlocker; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0055
    std::int32_t RandomNumber; // 0x0058 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FProceduralScatter2DPoint, Location) == 0, "Offset mismatch for FProceduralScatter2DPoint::Location");
static_assert(offsetof(FProceduralScatter2DPoint, Scale) == 24, "Offset mismatch for FProceduralScatter2DPoint::Scale");
static_assert(offsetof(FProceduralScatter2DPoint, ScatterSettings) == 32, "Offset mismatch for FProceduralScatter2DPoint::ScatterSettings");
static_assert(offsetof(FProceduralScatter2DPoint, MaxAABB) == 40, "Offset mismatch for FProceduralScatter2DPoint::MaxAABB");
static_assert(offsetof(FProceduralScatter2DPoint, CollisionRadius) == 80, "Offset mismatch for FProceduralScatter2DPoint::CollisionRadius");
static_assert(offsetof(FProceduralScatter2DPoint, bBlocker) == 84, "Offset mismatch for FProceduralScatter2DPoint::bBlocker");
static_assert(offsetof(FProceduralScatter2DPoint, RandomNumber) == 88, "Offset mismatch for FProceduralScatter2DPoint::RandomNumber");

// /Script/Procedural.ProceduralScatterDebugSettings
// Kind: ScriptStruct; super: none
struct FProceduralScatterDebugSettings
{
public:
    std::uint8_t bShowDebugPlane; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDebugTrace; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDebugFootprint; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDebugHitNormal; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDebugPoints; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDebugPivots; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    float DebugMaxCullingDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugPlane) == 0, "Offset mismatch for FProceduralScatterDebugSettings::bShowDebugPlane");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugTrace) == 1, "Offset mismatch for FProceduralScatterDebugSettings::bShowDebugTrace");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugFootprint) == 2, "Offset mismatch for FProceduralScatterDebugSettings::bShowDebugFootprint");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugHitNormal) == 3, "Offset mismatch for FProceduralScatterDebugSettings::bShowDebugHitNormal");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugPoints) == 4, "Offset mismatch for FProceduralScatterDebugSettings::bShowDebugPoints");
static_assert(offsetof(FProceduralScatterDebugSettings, bShowDebugPivots) == 5, "Offset mismatch for FProceduralScatterDebugSettings::bShowDebugPivots");
static_assert(offsetof(FProceduralScatterDebugSettings, DebugMaxCullingDistance) == 8, "Offset mismatch for FProceduralScatterDebugSettings::DebugMaxCullingDistance");

// /Script/Procedural.ProceduralScatterPoint
// Kind: ScriptStruct; super: none
struct FProceduralScatterPoint
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float Scale; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0034
    void* ScatterSettings; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::int32_t VariationIdx; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t GenerationLocation[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitPoint[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProceduralScatterPoint, Location) == 0, "Offset mismatch for FProceduralScatterPoint::Location");
static_assert(offsetof(FProceduralScatterPoint, Rotation) == 24, "Offset mismatch for FProceduralScatterPoint::Rotation");
static_assert(offsetof(FProceduralScatterPoint, Scale) == 48, "Offset mismatch for FProceduralScatterPoint::Scale");
static_assert(offsetof(FProceduralScatterPoint, ScatterSettings) == 56, "Offset mismatch for FProceduralScatterPoint::ScatterSettings");
static_assert(offsetof(FProceduralScatterPoint, VariationIdx) == 64, "Offset mismatch for FProceduralScatterPoint::VariationIdx");
static_assert(offsetof(FProceduralScatterPoint, GenerationLocation) == 72, "Offset mismatch for FProceduralScatterPoint::GenerationLocation");
static_assert(offsetof(FProceduralScatterPoint, HitPoint) == 96, "Offset mismatch for FProceduralScatterPoint::HitPoint");

// /Script/Procedural.ProceduralScatterProjectionPoint
// Kind: ScriptStruct; super: none
struct FProceduralScatterProjectionPoint
{
public:
    std::uint8_t GenerationLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float Scale; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0034
    void* ScatterSettings; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::int32_t VariationIdx; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t StartTrace[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndTrace[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitPoint[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProceduralScatterProjectionPoint, GenerationLocation) == 0, "Offset mismatch for FProceduralScatterProjectionPoint::GenerationLocation");
static_assert(offsetof(FProceduralScatterProjectionPoint, Rotation) == 24, "Offset mismatch for FProceduralScatterProjectionPoint::Rotation");
static_assert(offsetof(FProceduralScatterProjectionPoint, Scale) == 48, "Offset mismatch for FProceduralScatterProjectionPoint::Scale");
static_assert(offsetof(FProceduralScatterProjectionPoint, ScatterSettings) == 56, "Offset mismatch for FProceduralScatterProjectionPoint::ScatterSettings");
static_assert(offsetof(FProceduralScatterProjectionPoint, VariationIdx) == 64, "Offset mismatch for FProceduralScatterProjectionPoint::VariationIdx");
static_assert(offsetof(FProceduralScatterProjectionPoint, StartTrace) == 72, "Offset mismatch for FProceduralScatterProjectionPoint::StartTrace");
static_assert(offsetof(FProceduralScatterProjectionPoint, EndTrace) == 96, "Offset mismatch for FProceduralScatterProjectionPoint::EndTrace");
static_assert(offsetof(FProceduralScatterProjectionPoint, HitPoint) == 120, "Offset mismatch for FProceduralScatterProjectionPoint::HitPoint");

// /Script/Procedural.ProceduralScatterSettingsElement
// Kind: ScriptStruct; super: none
struct FProceduralScatterSettingsElement
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ScatterSettings; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxPoints; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FProceduralScatterSettingsElement, bEnabled) == 0, "Offset mismatch for FProceduralScatterSettingsElement::bEnabled");
static_assert(offsetof(FProceduralScatterSettingsElement, ScatterSettings) == 8, "Offset mismatch for FProceduralScatterSettingsElement::ScatterSettings");
static_assert(offsetof(FProceduralScatterSettingsElement, MaxPoints) == 16, "Offset mismatch for FProceduralScatterSettingsElement::MaxPoints");

// /Script/Procedural.ProceduralScatterTargetSurface
// Kind: ScriptStruct; super: none
struct FProceduralScatterTargetSurface
{
public:
    std::uint8_t bAllowLandscape; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowBSP; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowStaticMesh; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowTranslucent; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> AllowedActorTags; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisallowedActorTags; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllowedComponentTags; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisallowedComponentTags; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FProceduralScatterTargetSurface, bAllowLandscape) == 0, "Offset mismatch for FProceduralScatterTargetSurface::bAllowLandscape");
static_assert(offsetof(FProceduralScatterTargetSurface, bAllowBSP) == 1, "Offset mismatch for FProceduralScatterTargetSurface::bAllowBSP");
static_assert(offsetof(FProceduralScatterTargetSurface, bAllowStaticMesh) == 2, "Offset mismatch for FProceduralScatterTargetSurface::bAllowStaticMesh");
static_assert(offsetof(FProceduralScatterTargetSurface, bAllowTranslucent) == 3, "Offset mismatch for FProceduralScatterTargetSurface::bAllowTranslucent");
static_assert(offsetof(FProceduralScatterTargetSurface, AllowedActorTags) == 8, "Offset mismatch for FProceduralScatterTargetSurface::AllowedActorTags");
static_assert(offsetof(FProceduralScatterTargetSurface, DisallowedActorTags) == 24, "Offset mismatch for FProceduralScatterTargetSurface::DisallowedActorTags");
static_assert(offsetof(FProceduralScatterTargetSurface, AllowedComponentTags) == 40, "Offset mismatch for FProceduralScatterTargetSurface::AllowedComponentTags");
static_assert(offsetof(FProceduralScatterTargetSurface, DisallowedComponentTags) == 56, "Offset mismatch for FProceduralScatterTargetSurface::DisallowedComponentTags");

// /Script/Procedural.ProceduralScatterTileSettings
// Kind: ScriptStruct; super: none
struct FProceduralScatterTileSettings
{
public:
    std::int32_t NumUniqueTiles; // 0x0000 (Size: 0x4, Type: IntProperty)
    float TileSize; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TileOverlapPercentage; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinimumQuadTreeSize; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RandomGenerator; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FProceduralScatterTileSettings, NumUniqueTiles) == 0, "Offset mismatch for FProceduralScatterTileSettings::NumUniqueTiles");
static_assert(offsetof(FProceduralScatterTileSettings, TileSize) == 4, "Offset mismatch for FProceduralScatterTileSettings::TileSize");
static_assert(offsetof(FProceduralScatterTileSettings, TileOverlapPercentage) == 8, "Offset mismatch for FProceduralScatterTileSettings::TileOverlapPercentage");
static_assert(offsetof(FProceduralScatterTileSettings, MinimumQuadTreeSize) == 12, "Offset mismatch for FProceduralScatterTileSettings::MinimumQuadTreeSize");
static_assert(offsetof(FProceduralScatterTileSettings, RandomGenerator) == 16, "Offset mismatch for FProceduralScatterTileSettings::RandomGenerator");

// /Script/Procedural.ProceduralTextureSource
// Kind: ScriptStruct; super: none
struct FProceduralTextureSource
{
public:
    std::uint8_t bUseRenderTarget; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Texture; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* RenderTarget; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* RenderTargetMaterial; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bStretchToFit; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    float TexelSize; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float XOffset; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float YOffset; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Rotation; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FProceduralTextureSource, bUseRenderTarget) == 0, "Offset mismatch for FProceduralTextureSource::bUseRenderTarget");
static_assert(offsetof(FProceduralTextureSource, Texture) == 8, "Offset mismatch for FProceduralTextureSource::Texture");
static_assert(offsetof(FProceduralTextureSource, RenderTarget) == 16, "Offset mismatch for FProceduralTextureSource::RenderTarget");
static_assert(offsetof(FProceduralTextureSource, RenderTargetMaterial) == 24, "Offset mismatch for FProceduralTextureSource::RenderTargetMaterial");
static_assert(offsetof(FProceduralTextureSource, bStretchToFit) == 32, "Offset mismatch for FProceduralTextureSource::bStretchToFit");
static_assert(offsetof(FProceduralTextureSource, TexelSize) == 36, "Offset mismatch for FProceduralTextureSource::TexelSize");
static_assert(offsetof(FProceduralTextureSource, XOffset) == 40, "Offset mismatch for FProceduralTextureSource::XOffset");
static_assert(offsetof(FProceduralTextureSource, YOffset) == 44, "Offset mismatch for FProceduralTextureSource::YOffset");
static_assert(offsetof(FProceduralTextureSource, Rotation) == 48, "Offset mismatch for FProceduralTextureSource::Rotation");

// /Script/Procedural.ScatteredPointCloud
// Kind: ScriptStruct; super: none
struct FScatteredPointCloud
{
public:
    TArray<void*> Points; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FScatteredPointCloud, Points) == 0, "Offset mismatch for FScatteredPointCloud::Points");

// /Script/Procedural.SourcePointGenerator
// Kind: ScriptStruct; super: none
struct FSourcePointGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Procedural.HISMBuilderSettings
// Kind: Class; super: Object
class UHISMBuilderSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Mobility; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t CullDistance[0x8]; // 0x002C (Size: 0x8, Type: StructProperty)
    float LODDistanceScale; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAffectDistanceFieldLighting; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x0038 BoolProperty bCastDynamicShadow (shared storage)
    // 0x0038 BoolProperty bCastShadow (shared storage)
    // 0x0038 BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x0038 BoolProperty bCastStaticShadow (shared storage)
    // 0x0038 BoolProperty bOverrideLightMapRes (shared storage)
    // 0x0038 BoolProperty bReceivesDecals (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0039
    std::int32_t OverriddenLightMapRes; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t LightmapType; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0041
    std::uint8_t bUseAsOccluder; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0045
    std::uint8_t BodyInstance[0x1A8]; // 0x0048 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t CustomNavigableGeometry; // 0x01F0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x3]; // 0x01F1 (Size: 0x3, Type: StructProperty)
    std::uint8_t bRenderCustomDepth; // 0x01F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x01F5
    std::uint8_t CustomDepthStencilWriteMask; // 0x01F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x01F9
    std::int32_t CustomDepthStencilValue; // 0x01FC (Size: 0x4, Type: IntProperty)
    std::int32_t TranslucencySortPriority; // 0x0200 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableDensityScaling; // 0x0204 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0205
    TArray<void*> RuntimeVirtualTextures; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    std::int32_t VirtualTextureCullMips; // 0x0218 (Size: 0x4, Type: IntProperty)
    std::uint8_t VirtualTextureRenderPassType; // 0x021C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UHISMBuilderSettings, Mobility) == 40, "Offset mismatch for UHISMBuilderSettings::Mobility");
static_assert(offsetof(UHISMBuilderSettings, CullDistance) == 44, "Offset mismatch for UHISMBuilderSettings::CullDistance");
static_assert(offsetof(UHISMBuilderSettings, LODDistanceScale) == 52, "Offset mismatch for UHISMBuilderSettings::LODDistanceScale");
static_assert(offsetof(UHISMBuilderSettings, bAffectDistanceFieldLighting) == 56, "Offset mismatch for UHISMBuilderSettings::bAffectDistanceFieldLighting");
static_assert(offsetof(UHISMBuilderSettings, OverriddenLightMapRes) == 60, "Offset mismatch for UHISMBuilderSettings::OverriddenLightMapRes");
static_assert(offsetof(UHISMBuilderSettings, LightmapType) == 64, "Offset mismatch for UHISMBuilderSettings::LightmapType");
static_assert(offsetof(UHISMBuilderSettings, bUseAsOccluder) == 68, "Offset mismatch for UHISMBuilderSettings::bUseAsOccluder");
static_assert(offsetof(UHISMBuilderSettings, BodyInstance) == 72, "Offset mismatch for UHISMBuilderSettings::BodyInstance");
static_assert(offsetof(UHISMBuilderSettings, CustomNavigableGeometry) == 496, "Offset mismatch for UHISMBuilderSettings::CustomNavigableGeometry");
static_assert(offsetof(UHISMBuilderSettings, LightingChannels) == 497, "Offset mismatch for UHISMBuilderSettings::LightingChannels");
static_assert(offsetof(UHISMBuilderSettings, bRenderCustomDepth) == 500, "Offset mismatch for UHISMBuilderSettings::bRenderCustomDepth");
static_assert(offsetof(UHISMBuilderSettings, CustomDepthStencilWriteMask) == 504, "Offset mismatch for UHISMBuilderSettings::CustomDepthStencilWriteMask");
static_assert(offsetof(UHISMBuilderSettings, CustomDepthStencilValue) == 508, "Offset mismatch for UHISMBuilderSettings::CustomDepthStencilValue");
static_assert(offsetof(UHISMBuilderSettings, TranslucencySortPriority) == 512, "Offset mismatch for UHISMBuilderSettings::TranslucencySortPriority");
static_assert(offsetof(UHISMBuilderSettings, bEnableDensityScaling) == 516, "Offset mismatch for UHISMBuilderSettings::bEnableDensityScaling");
static_assert(offsetof(UHISMBuilderSettings, RuntimeVirtualTextures) == 520, "Offset mismatch for UHISMBuilderSettings::RuntimeVirtualTextures");
static_assert(offsetof(UHISMBuilderSettings, VirtualTextureCullMips) == 536, "Offset mismatch for UHISMBuilderSettings::VirtualTextureCullMips");
static_assert(offsetof(UHISMBuilderSettings, VirtualTextureRenderPassType) == 540, "Offset mismatch for UHISMBuilderSettings::VirtualTextureRenderPassType");

// /Script/Procedural.ProceduralContentVariationsWeightsMapModifier
// Kind: Class; super: ProceduralContentVariationsWeightsModifier
class UProceduralContentVariationsWeightsMapModifier
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> VariationsMaps; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralContentVariationsWeightsMapModifier, VariationsMaps) == 56, "Offset mismatch for UProceduralContentVariationsWeightsMapModifier::VariationsMaps");

// /Script/Procedural.ProceduralContentVariationsWeightsModifier
// Kind: Class; super: ProceduralParameterModifier
class UProceduralContentVariationsWeightsModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float Contribution; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UProceduralContentVariationsWeightsModifier, bEnabled) == 40, "Offset mismatch for UProceduralContentVariationsWeightsModifier::bEnabled");
static_assert(offsetof(UProceduralContentVariationsWeightsModifier, Contribution) == 44, "Offset mismatch for UProceduralContentVariationsWeightsModifier::Contribution");
static_assert(offsetof(UProceduralContentVariationsWeightsModifier, BlendMode) == 48, "Offset mismatch for UProceduralContentVariationsWeightsModifier::BlendMode");

// /Script/Procedural.ProceduralCustomGenerator
// Kind: Class; super: ProceduralGenerator
class UProceduralCustomGenerator
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* GeneratorContextClass; // 0x0038 (Size: 0x8, Type: ClassProperty)
    void* GeneratorContext; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralCustomGenerator, GeneratorContextClass) == 56, "Offset mismatch for UProceduralCustomGenerator::GeneratorContextClass");
static_assert(offsetof(UProceduralCustomGenerator, GeneratorContext) == 64, "Offset mismatch for UProceduralCustomGenerator::GeneratorContext");

// /Script/Procedural.ProceduralDataMap
// Kind: Class; super: Object
class UProceduralDataMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bUseRemapCurve; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UProceduralDataMap, bUseRemapCurve) == 40, "Offset mismatch for UProceduralDataMap::bUseRemapCurve");

// /Script/Procedural.ProceduralDensityMapModifier
// Kind: Class; super: ProceduralDensityModifier
class UProceduralDensityMapModifier
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Map; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralDensityMapModifier, Map) == 56, "Offset mismatch for UProceduralDensityMapModifier::Map");

// /Script/Procedural.ProceduralDensityModifier
// Kind: Class; super: ProceduralParameterModifier
class UProceduralDensityModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float Contribution; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UProceduralDensityModifier, bEnabled) == 40, "Offset mismatch for UProceduralDensityModifier::bEnabled");
static_assert(offsetof(UProceduralDensityModifier, Contribution) == 44, "Offset mismatch for UProceduralDensityModifier::Contribution");
static_assert(offsetof(UProceduralDensityModifier, BlendMode) == 48, "Offset mismatch for UProceduralDensityModifier::BlendMode");

// /Script/Procedural.ProceduralFloatDataMap
// Kind: Class; super: ProceduralDataMap
class UProceduralFloatDataMap
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RemapCurve[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralFloatDataMap, RemapCurve) == 48, "Offset mismatch for UProceduralFloatDataMap::RemapCurve");

// /Script/Procedural.ProceduralGenerationBlockingVolume
// Kind: Class; super: Volume
class UProceduralGenerationBlockingVolume
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    TArray<void*> BlockedVolumes; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralGenerationBlockingVolume, BlockedVolumes) == 680, "Offset mismatch for UProceduralGenerationBlockingVolume::BlockedVolumes");

// /Script/Procedural.ProceduralGenerationComponent
// Kind: Class; super: ActorComponent
class UProceduralGenerationComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* Generator; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowDebugVisualization; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    std::uint8_t ProceduralGenerationGuid[0x14]; // 0x00CC (Size: 0x14, Type: StructProperty)
    void* GenerationVolume; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* GenerationContext; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralGenerationComponent, Generator) == 192, "Offset mismatch for UProceduralGenerationComponent::Generator");
static_assert(offsetof(UProceduralGenerationComponent, bShowDebugVisualization) == 200, "Offset mismatch for UProceduralGenerationComponent::bShowDebugVisualization");
static_assert(offsetof(UProceduralGenerationComponent, ProceduralGenerationGuid) == 204, "Offset mismatch for UProceduralGenerationComponent::ProceduralGenerationGuid");
static_assert(offsetof(UProceduralGenerationComponent, GenerationVolume) == 224, "Offset mismatch for UProceduralGenerationComponent::GenerationVolume");
static_assert(offsetof(UProceduralGenerationComponent, GenerationContext) == 232, "Offset mismatch for UProceduralGenerationComponent::GenerationContext");

// /Script/Procedural.ProceduralGenerationContext
// Kind: Class; super: Object
class UProceduralGenerationContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GeneratorContext; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GeneratedContexts; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RegisteredContexts; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> GeneratorContexts; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UProceduralGenerationContext, GeneratorContext) == 40, "Offset mismatch for UProceduralGenerationContext::GeneratorContext");
static_assert(offsetof(UProceduralGenerationContext, GeneratedContexts) == 48, "Offset mismatch for UProceduralGenerationContext::GeneratedContexts");
static_assert(offsetof(UProceduralGenerationContext, RegisteredContexts) == 64, "Offset mismatch for UProceduralGenerationContext::RegisteredContexts");
static_assert(offsetof(UProceduralGenerationContext, GeneratorContexts) == 80, "Offset mismatch for UProceduralGenerationContext::GeneratorContexts");

// /Script/Procedural.ProceduralGenerationVolume
// Kind: Class; super: Volume
class UProceduralGenerationVolume
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    void* ProceduralComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralGenerationVolume, ProceduralComponent) == 680, "Offset mismatch for UProceduralGenerationVolume::ProceduralComponent");

// /Script/Procedural.ProceduralGenerator
// Kind: Class; super: Object
class UProceduralGenerator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DebugSettings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralGenerator, DebugSettings) == 40, "Offset mismatch for UProceduralGenerator::DebugSettings");

// /Script/Procedural.ProceduralGeneratorContext
// Kind: Class; super: Object
class UProceduralGeneratorContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Generator; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* GenerationContext; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* OwnerContext; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GeneratedObjects; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    void* ExportedPointCloud; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralGeneratorContext, Generator) == 40, "Offset mismatch for UProceduralGeneratorContext::Generator");
static_assert(offsetof(UProceduralGeneratorContext, GenerationContext) == 48, "Offset mismatch for UProceduralGeneratorContext::GenerationContext");
static_assert(offsetof(UProceduralGeneratorContext, OwnerContext) == 56, "Offset mismatch for UProceduralGeneratorContext::OwnerContext");
static_assert(offsetof(UProceduralGeneratorContext, GeneratedObjects) == 64, "Offset mismatch for UProceduralGeneratorContext::GeneratedObjects");
static_assert(offsetof(UProceduralGeneratorContext, ExportedPointCloud) == 80, "Offset mismatch for UProceduralGeneratorContext::ExportedPointCloud");

// /Script/Procedural.ProceduralGeneratorStack
// Kind: Class; super: ProceduralGenerator
class UProceduralGeneratorStack
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Generators; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralGeneratorStack, Generators) == 56, "Offset mismatch for UProceduralGeneratorStack::Generators");

// /Script/Procedural.ProceduralGeneratorStackContext
// Kind: Class; super: ProceduralGeneratorContext
class UProceduralGeneratorStackContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Generator; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* GenerationContext; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* OwnerContext; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GeneratedObjects; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    void* ExportedPointCloud; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralGeneratorStackContext, Generator) == 40, "Offset mismatch for UProceduralGeneratorStackContext::Generator");
static_assert(offsetof(UProceduralGeneratorStackContext, GenerationContext) == 48, "Offset mismatch for UProceduralGeneratorStackContext::GenerationContext");
static_assert(offsetof(UProceduralGeneratorStackContext, OwnerContext) == 56, "Offset mismatch for UProceduralGeneratorStackContext::OwnerContext");
static_assert(offsetof(UProceduralGeneratorStackContext, GeneratedObjects) == 64, "Offset mismatch for UProceduralGeneratorStackContext::GeneratedObjects");
static_assert(offsetof(UProceduralGeneratorStackContext, ExportedPointCloud) == 80, "Offset mismatch for UProceduralGeneratorStackContext::ExportedPointCloud");

// /Script/Procedural.ProceduralLandscapeLayerMap
// Kind: Class; super: ProceduralFloatDataMap
class UProceduralLandscapeLayerMap
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LandscapeLayerName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    FName LandscapeEditLayerName; // 0x007C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UProceduralLandscapeLayerMap, LandscapeLayerName) == 120, "Offset mismatch for UProceduralLandscapeLayerMap::LandscapeLayerName");
static_assert(offsetof(UProceduralLandscapeLayerMap, LandscapeEditLayerName) == 124, "Offset mismatch for UProceduralLandscapeLayerMap::LandscapeEditLayerName");

// /Script/Procedural.ProceduralParameterModifier
// Kind: Class; super: Object
class UProceduralParameterModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float Contribution; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UProceduralParameterModifier, bEnabled) == 40, "Offset mismatch for UProceduralParameterModifier::bEnabled");
static_assert(offsetof(UProceduralParameterModifier, Contribution) == 44, "Offset mismatch for UProceduralParameterModifier::Contribution");
static_assert(offsetof(UProceduralParameterModifier, BlendMode) == 48, "Offset mismatch for UProceduralParameterModifier::BlendMode");

// /Script/Procedural.ProceduralPointCloud
// Kind: Class; super: Object
class UProceduralPointCloud
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Points; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralPointCloud, Points) == 40, "Offset mismatch for UProceduralPointCloud::Points");

// /Script/Procedural.ProceduralRotationMapModifier
// Kind: Class; super: ProceduralRotationModifier
class UProceduralRotationMapModifier
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Map; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RotationFormat; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::uint8_t Roll[0x8]; // 0x0044 (Size: 0x8, Type: StructProperty)
    std::uint8_t Pitch[0x8]; // 0x004C (Size: 0x8, Type: StructProperty)
    std::uint8_t Yaw[0x1]; // 0x0054 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralRotationMapModifier, Map) == 56, "Offset mismatch for UProceduralRotationMapModifier::Map");
static_assert(offsetof(UProceduralRotationMapModifier, RotationFormat) == 64, "Offset mismatch for UProceduralRotationMapModifier::RotationFormat");
static_assert(offsetof(UProceduralRotationMapModifier, Roll) == 68, "Offset mismatch for UProceduralRotationMapModifier::Roll");
static_assert(offsetof(UProceduralRotationMapModifier, Pitch) == 76, "Offset mismatch for UProceduralRotationMapModifier::Pitch");
static_assert(offsetof(UProceduralRotationMapModifier, Yaw) == 84, "Offset mismatch for UProceduralRotationMapModifier::Yaw");

// /Script/Procedural.ProceduralRotationModifier
// Kind: Class; super: ProceduralParameterModifier
class UProceduralRotationModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float Contribution; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UProceduralRotationModifier, bEnabled) == 40, "Offset mismatch for UProceduralRotationModifier::bEnabled");
static_assert(offsetof(UProceduralRotationModifier, Contribution) == 44, "Offset mismatch for UProceduralRotationModifier::Contribution");
static_assert(offsetof(UProceduralRotationModifier, BlendMode) == 48, "Offset mismatch for UProceduralRotationModifier::BlendMode");

// /Script/Procedural.ProceduralRotationNoiseModifier
// Kind: Class; super: ProceduralRotationModifier
class UProceduralRotationNoiseModifier
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bRandomRoll; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t RandomRoll[0x8]; // 0x003C (Size: 0x8, Type: StructProperty)
    std::uint8_t bRandomPitch; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    std::uint8_t RandomPitch[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t bRandomYaw; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0051
    std::uint8_t RandomYaw[0x1]; // 0x0054 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralRotationNoiseModifier, bRandomRoll) == 56, "Offset mismatch for UProceduralRotationNoiseModifier::bRandomRoll");
static_assert(offsetof(UProceduralRotationNoiseModifier, RandomRoll) == 60, "Offset mismatch for UProceduralRotationNoiseModifier::RandomRoll");
static_assert(offsetof(UProceduralRotationNoiseModifier, bRandomPitch) == 68, "Offset mismatch for UProceduralRotationNoiseModifier::bRandomPitch");
static_assert(offsetof(UProceduralRotationNoiseModifier, RandomPitch) == 72, "Offset mismatch for UProceduralRotationNoiseModifier::RandomPitch");
static_assert(offsetof(UProceduralRotationNoiseModifier, bRandomYaw) == 80, "Offset mismatch for UProceduralRotationNoiseModifier::bRandomYaw");
static_assert(offsetof(UProceduralRotationNoiseModifier, RandomYaw) == 84, "Offset mismatch for UProceduralRotationNoiseModifier::RandomYaw");

// /Script/Procedural.ProceduralScaleMapModifier
// Kind: Class; super: ProceduralScaleModifier
class UProceduralScaleMapModifier
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bRemapScale; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t RemapScale[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    void* Map; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralScaleMapModifier, bRemapScale) == 56, "Offset mismatch for UProceduralScaleMapModifier::bRemapScale");
static_assert(offsetof(UProceduralScaleMapModifier, RemapScale) == 60, "Offset mismatch for UProceduralScaleMapModifier::RemapScale");
static_assert(offsetof(UProceduralScaleMapModifier, Map) == 72, "Offset mismatch for UProceduralScaleMapModifier::Map");

// /Script/Procedural.ProceduralScaleModifier
// Kind: Class; super: ProceduralParameterModifier
class UProceduralScaleModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float Contribution; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UProceduralScaleModifier, bEnabled) == 40, "Offset mismatch for UProceduralScaleModifier::bEnabled");
static_assert(offsetof(UProceduralScaleModifier, Contribution) == 44, "Offset mismatch for UProceduralScaleModifier::Contribution");
static_assert(offsetof(UProceduralScaleModifier, BlendMode) == 48, "Offset mismatch for UProceduralScaleModifier::BlendMode");

// /Script/Procedural.ProceduralScaleNoiseModifier
// Kind: Class; super: ProceduralScaleModifier
class UProceduralScaleNoiseModifier
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Scale[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralScaleNoiseModifier, Scale) == 56, "Offset mismatch for UProceduralScaleNoiseModifier::Scale");

// /Script/Procedural.ProceduralScatterActorContentSettings
// Kind: Class; super: ProceduralScatterContentSettings
class UProceduralScatterActorContentSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bHideFromWorldOutliner; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UProceduralScatterActorContentSettings, bHideFromWorldOutliner) == 104, "Offset mismatch for UProceduralScatterActorContentSettings::bHideFromWorldOutliner");

// /Script/Procedural.ProceduralScatterActorContentVariation
// Kind: Class; super: ProceduralScatterContentVariation
class UProceduralScatterActorContentVariation
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    void* ActorClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UProceduralScatterActorContentVariation, ActorClass) == 232, "Offset mismatch for UProceduralScatterActorContentVariation::ActorClass");

// /Script/Procedural.ProceduralScatterContentSettings
// Kind: Class; super: Object
class UProceduralScatterContentSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SetActorTags; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Variations; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralScatterContentSettings, SetActorTags) == 40, "Offset mismatch for UProceduralScatterContentSettings::SetActorTags");
static_assert(offsetof(UProceduralScatterContentSettings, Variations) == 56, "Offset mismatch for UProceduralScatterContentSettings::Variations");

// /Script/Procedural.ProceduralScatterContentVariation
// Kind: Class; super: Object
class UProceduralScatterContentVariation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Weight; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PivotMode; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t AdditionalPivotOffset[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float FootprintBoundingBoxRatio; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x004C
    TArray<void*> SetActorTags; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralScatterContentVariation, Weight) == 40, "Offset mismatch for UProceduralScatterContentVariation::Weight");
static_assert(offsetof(UProceduralScatterContentVariation, PivotMode) == 44, "Offset mismatch for UProceduralScatterContentVariation::PivotMode");
static_assert(offsetof(UProceduralScatterContentVariation, AdditionalPivotOffset) == 48, "Offset mismatch for UProceduralScatterContentVariation::AdditionalPivotOffset");
static_assert(offsetof(UProceduralScatterContentVariation, FootprintBoundingBoxRatio) == 72, "Offset mismatch for UProceduralScatterContentVariation::FootprintBoundingBoxRatio");
static_assert(offsetof(UProceduralScatterContentVariation, SetActorTags) == 80, "Offset mismatch for UProceduralScatterContentVariation::SetActorTags");

// /Script/Procedural.ProceduralScatterGenerator
// Kind: Class; super: ProceduralGenerator
class UProceduralScatterGenerator
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ScatterMethod; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t TileSettings[0x14]; // 0x003C (Size: 0x14, Type: StructProperty)
    std::int32_t RandomSeed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t NumUniqueSourcePointPatterns; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t GridSize[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t GridJitter[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    float GridRotation; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x007C
    std::uint8_t GridOffset[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    TArray<void*> ScatterSettingsElements; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlockingActorTags; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllScatterPointsBlocking; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocalDistribution; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x00B2
    TArray<void*> BlockingScatterPointTags; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ScatterDebugSettings[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralScatterGenerator, ScatterMethod) == 56, "Offset mismatch for UProceduralScatterGenerator::ScatterMethod");
static_assert(offsetof(UProceduralScatterGenerator, TileSettings) == 60, "Offset mismatch for UProceduralScatterGenerator::TileSettings");
static_assert(offsetof(UProceduralScatterGenerator, RandomSeed) == 80, "Offset mismatch for UProceduralScatterGenerator::RandomSeed");
static_assert(offsetof(UProceduralScatterGenerator, NumUniqueSourcePointPatterns) == 84, "Offset mismatch for UProceduralScatterGenerator::NumUniqueSourcePointPatterns");
static_assert(offsetof(UProceduralScatterGenerator, GridSize) == 88, "Offset mismatch for UProceduralScatterGenerator::GridSize");
static_assert(offsetof(UProceduralScatterGenerator, GridJitter) == 104, "Offset mismatch for UProceduralScatterGenerator::GridJitter");
static_assert(offsetof(UProceduralScatterGenerator, GridRotation) == 120, "Offset mismatch for UProceduralScatterGenerator::GridRotation");
static_assert(offsetof(UProceduralScatterGenerator, GridOffset) == 128, "Offset mismatch for UProceduralScatterGenerator::GridOffset");
static_assert(offsetof(UProceduralScatterGenerator, ScatterSettingsElements) == 144, "Offset mismatch for UProceduralScatterGenerator::ScatterSettingsElements");
static_assert(offsetof(UProceduralScatterGenerator, BlockingActorTags) == 160, "Offset mismatch for UProceduralScatterGenerator::BlockingActorTags");
static_assert(offsetof(UProceduralScatterGenerator, bAllScatterPointsBlocking) == 176, "Offset mismatch for UProceduralScatterGenerator::bAllScatterPointsBlocking");
static_assert(offsetof(UProceduralScatterGenerator, bLocalDistribution) == 177, "Offset mismatch for UProceduralScatterGenerator::bLocalDistribution");
static_assert(offsetof(UProceduralScatterGenerator, BlockingScatterPointTags) == 184, "Offset mismatch for UProceduralScatterGenerator::BlockingScatterPointTags");
static_assert(offsetof(UProceduralScatterGenerator, ScatterDebugSettings) == 200, "Offset mismatch for UProceduralScatterGenerator::ScatterDebugSettings");

// /Script/Procedural.ProceduralScatterGeneratorContext
// Kind: Class; super: ProceduralGeneratorContext
class UProceduralScatterGeneratorContext
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t ScatteredPointCloud[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    TArray<void*> UniqueTiles; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourcePointGenerators; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProjectionPointCloud; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    void* SourcePointCloud; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* BlockerPointCloud; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* ProjectionVectorMaterial; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralScatterGeneratorContext, ScatteredPointCloud) == 88, "Offset mismatch for UProceduralScatterGeneratorContext::ScatteredPointCloud");
static_assert(offsetof(UProceduralScatterGeneratorContext, UniqueTiles) == 104, "Offset mismatch for UProceduralScatterGeneratorContext::UniqueTiles");
static_assert(offsetof(UProceduralScatterGeneratorContext, SourcePointGenerators) == 120, "Offset mismatch for UProceduralScatterGeneratorContext::SourcePointGenerators");
static_assert(offsetof(UProceduralScatterGeneratorContext, ProjectionPointCloud) == 136, "Offset mismatch for UProceduralScatterGeneratorContext::ProjectionPointCloud");
static_assert(offsetof(UProceduralScatterGeneratorContext, SourcePointCloud) == 152, "Offset mismatch for UProceduralScatterGeneratorContext::SourcePointCloud");
static_assert(offsetof(UProceduralScatterGeneratorContext, BlockerPointCloud) == 160, "Offset mismatch for UProceduralScatterGeneratorContext::BlockerPointCloud");
static_assert(offsetof(UProceduralScatterGeneratorContext, ProjectionVectorMaterial) == 168, "Offset mismatch for UProceduralScatterGeneratorContext::ProjectionVectorMaterial");

// /Script/Procedural.ProceduralScatterGeneratorTile
// Kind: Class; super: Object
class UProceduralScatterGeneratorTile
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Generator; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GeneratedPoints; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralScatterGeneratorTile, Generator) == 40, "Offset mismatch for UProceduralScatterGeneratorTile::Generator");
static_assert(offsetof(UProceduralScatterGeneratorTile, GeneratedPoints) == 48, "Offset mismatch for UProceduralScatterGeneratorTile::GeneratedPoints");

// /Script/Procedural.ProceduralScatterSettings
// Kind: Class; super: Object
class UProceduralScatterSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Content; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bContentVariationsModifiersEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t ContentVariationsModifiers[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    TArray<void*> SetPointTags; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    float CollisionRadius; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutomaticCollisionRadius; // 0x005C (Size: 0x1, Type: BoolProperty)
    // 0x005C BoolProperty bUseSphericalBoundsForAutomaticCollisionRadius (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x005D
    float AutomaticCollisionRadiusScaleFactor; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::int32_t DistributionSeed; // 0x0064 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDensityModifiersEnabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0069
    std::uint8_t DensityModifiers[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    float Density; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0084
    TArray<void*> SourcePointTagIncludes; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourcePointTagExcludes; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceActorTagIncludes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceActorTagExcludes; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceComponentTagIncludes; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceComponentTagExcludes; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SourcePointDistance[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseSourcePointExactNumber; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x00F1
    std::int32_t SourcePointExactNumber; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bScaleModifiersEnabled; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x00F9
    std::uint8_t ScaleModifiers[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t bRotationModifiersEnabled; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0121
    std::uint8_t RotationModifiers[0x10]; // 0x0128 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAlignToNormal; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0139
    float AlignMaxAngle; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TargetSurface[0x48]; // 0x0140 (Size: 0x48, Type: StructProperty)
    std::uint8_t bDetectOverhangingLedge; // 0x0188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x0189
    std::int32_t OverhangingLedgeDetectionRayCount; // 0x018C (Size: 0x4, Type: IntProperty)
    float OverhangingLedgeDetectionLength; // 0x0190 (Size: 0x4, Type: FloatProperty)
    float OverhangingLedgeDetectionVerticalThreshold; // 0x0194 (Size: 0x4, Type: FloatProperty)
    float OverhangingLedgeDetectionRadiusScale; // 0x0198 (Size: 0x4, Type: FloatProperty)
    float FilterMinimumScale; // 0x019C (Size: 0x4, Type: FloatProperty)
    float OverlapPriority; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCollisionWithWorld; // 0x01A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x01A5
    std::uint8_t CollisionScale[0x18]; // 0x01A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DebugColor[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralScatterSettings, Content) == 40, "Offset mismatch for UProceduralScatterSettings::Content");
static_assert(offsetof(UProceduralScatterSettings, bContentVariationsModifiersEnabled) == 48, "Offset mismatch for UProceduralScatterSettings::bContentVariationsModifiersEnabled");
static_assert(offsetof(UProceduralScatterSettings, ContentVariationsModifiers) == 56, "Offset mismatch for UProceduralScatterSettings::ContentVariationsModifiers");
static_assert(offsetof(UProceduralScatterSettings, SetPointTags) == 72, "Offset mismatch for UProceduralScatterSettings::SetPointTags");
static_assert(offsetof(UProceduralScatterSettings, CollisionRadius) == 88, "Offset mismatch for UProceduralScatterSettings::CollisionRadius");
static_assert(offsetof(UProceduralScatterSettings, bAutomaticCollisionRadius) == 92, "Offset mismatch for UProceduralScatterSettings::bAutomaticCollisionRadius");
static_assert(offsetof(UProceduralScatterSettings, AutomaticCollisionRadiusScaleFactor) == 96, "Offset mismatch for UProceduralScatterSettings::AutomaticCollisionRadiusScaleFactor");
static_assert(offsetof(UProceduralScatterSettings, DistributionSeed) == 100, "Offset mismatch for UProceduralScatterSettings::DistributionSeed");
static_assert(offsetof(UProceduralScatterSettings, bDensityModifiersEnabled) == 104, "Offset mismatch for UProceduralScatterSettings::bDensityModifiersEnabled");
static_assert(offsetof(UProceduralScatterSettings, DensityModifiers) == 112, "Offset mismatch for UProceduralScatterSettings::DensityModifiers");
static_assert(offsetof(UProceduralScatterSettings, Density) == 128, "Offset mismatch for UProceduralScatterSettings::Density");
static_assert(offsetof(UProceduralScatterSettings, SourcePointTagIncludes) == 136, "Offset mismatch for UProceduralScatterSettings::SourcePointTagIncludes");
static_assert(offsetof(UProceduralScatterSettings, SourcePointTagExcludes) == 152, "Offset mismatch for UProceduralScatterSettings::SourcePointTagExcludes");
static_assert(offsetof(UProceduralScatterSettings, SourceActorTagIncludes) == 168, "Offset mismatch for UProceduralScatterSettings::SourceActorTagIncludes");
static_assert(offsetof(UProceduralScatterSettings, SourceActorTagExcludes) == 184, "Offset mismatch for UProceduralScatterSettings::SourceActorTagExcludes");
static_assert(offsetof(UProceduralScatterSettings, SourceComponentTagIncludes) == 200, "Offset mismatch for UProceduralScatterSettings::SourceComponentTagIncludes");
static_assert(offsetof(UProceduralScatterSettings, SourceComponentTagExcludes) == 216, "Offset mismatch for UProceduralScatterSettings::SourceComponentTagExcludes");
static_assert(offsetof(UProceduralScatterSettings, SourcePointDistance) == 232, "Offset mismatch for UProceduralScatterSettings::SourcePointDistance");
static_assert(offsetof(UProceduralScatterSettings, bUseSourcePointExactNumber) == 240, "Offset mismatch for UProceduralScatterSettings::bUseSourcePointExactNumber");
static_assert(offsetof(UProceduralScatterSettings, SourcePointExactNumber) == 244, "Offset mismatch for UProceduralScatterSettings::SourcePointExactNumber");
static_assert(offsetof(UProceduralScatterSettings, bScaleModifiersEnabled) == 248, "Offset mismatch for UProceduralScatterSettings::bScaleModifiersEnabled");
static_assert(offsetof(UProceduralScatterSettings, ScaleModifiers) == 256, "Offset mismatch for UProceduralScatterSettings::ScaleModifiers");
static_assert(offsetof(UProceduralScatterSettings, bRotationModifiersEnabled) == 288, "Offset mismatch for UProceduralScatterSettings::bRotationModifiersEnabled");
static_assert(offsetof(UProceduralScatterSettings, RotationModifiers) == 296, "Offset mismatch for UProceduralScatterSettings::RotationModifiers");
static_assert(offsetof(UProceduralScatterSettings, bAlignToNormal) == 312, "Offset mismatch for UProceduralScatterSettings::bAlignToNormal");
static_assert(offsetof(UProceduralScatterSettings, AlignMaxAngle) == 316, "Offset mismatch for UProceduralScatterSettings::AlignMaxAngle");
static_assert(offsetof(UProceduralScatterSettings, TargetSurface) == 320, "Offset mismatch for UProceduralScatterSettings::TargetSurface");
static_assert(offsetof(UProceduralScatterSettings, bDetectOverhangingLedge) == 392, "Offset mismatch for UProceduralScatterSettings::bDetectOverhangingLedge");
static_assert(offsetof(UProceduralScatterSettings, OverhangingLedgeDetectionRayCount) == 396, "Offset mismatch for UProceduralScatterSettings::OverhangingLedgeDetectionRayCount");
static_assert(offsetof(UProceduralScatterSettings, OverhangingLedgeDetectionLength) == 400, "Offset mismatch for UProceduralScatterSettings::OverhangingLedgeDetectionLength");
static_assert(offsetof(UProceduralScatterSettings, OverhangingLedgeDetectionVerticalThreshold) == 404, "Offset mismatch for UProceduralScatterSettings::OverhangingLedgeDetectionVerticalThreshold");
static_assert(offsetof(UProceduralScatterSettings, OverhangingLedgeDetectionRadiusScale) == 408, "Offset mismatch for UProceduralScatterSettings::OverhangingLedgeDetectionRadiusScale");
static_assert(offsetof(UProceduralScatterSettings, FilterMinimumScale) == 412, "Offset mismatch for UProceduralScatterSettings::FilterMinimumScale");
static_assert(offsetof(UProceduralScatterSettings, OverlapPriority) == 416, "Offset mismatch for UProceduralScatterSettings::OverlapPriority");
static_assert(offsetof(UProceduralScatterSettings, bCollisionWithWorld) == 420, "Offset mismatch for UProceduralScatterSettings::bCollisionWithWorld");
static_assert(offsetof(UProceduralScatterSettings, CollisionScale) == 424, "Offset mismatch for UProceduralScatterSettings::CollisionScale");
static_assert(offsetof(UProceduralScatterSettings, DebugColor) == 448, "Offset mismatch for UProceduralScatterSettings::DebugColor");

// /Script/Procedural.ProceduralScatterStaticMeshContentSettings
// Kind: Class; super: ProceduralScatterContentSettings
class UProceduralScatterStaticMeshContentSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ComponentClass; // 0x0068 (Size: 0x8, Type: ClassProperty)
    FName ComponentTag; // 0x0070 (Size: 0x8, Type: NameProperty)
    void* VariationsInstancingSettings; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralScatterStaticMeshContentSettings, ComponentClass) == 104, "Offset mismatch for UProceduralScatterStaticMeshContentSettings::ComponentClass");
static_assert(offsetof(UProceduralScatterStaticMeshContentSettings, ComponentTag) == 112, "Offset mismatch for UProceduralScatterStaticMeshContentSettings::ComponentTag");
static_assert(offsetof(UProceduralScatterStaticMeshContentSettings, VariationsInstancingSettings) == 120, "Offset mismatch for UProceduralScatterStaticMeshContentSettings::VariationsInstancingSettings");

// /Script/Procedural.ProceduralScatterStaticMeshContentVariation
// Kind: Class; super: ProceduralScatterContentVariation
class UProceduralScatterStaticMeshContentVariation
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t StaticMeshMode; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    void* Mesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* ActorClass; // 0x00F8 (Size: 0x8, Type: ClassProperty)
    TArray<void*> OverrideMaterials; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    void* OverrideInstancingSettings; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, StaticMeshMode) == 232, "Offset mismatch for UProceduralScatterStaticMeshContentVariation::StaticMeshMode");
static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, Mesh) == 240, "Offset mismatch for UProceduralScatterStaticMeshContentVariation::Mesh");
static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, ActorClass) == 248, "Offset mismatch for UProceduralScatterStaticMeshContentVariation::ActorClass");
static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, OverrideMaterials) == 256, "Offset mismatch for UProceduralScatterStaticMeshContentVariation::OverrideMaterials");
static_assert(offsetof(UProceduralScatterStaticMeshContentVariation, OverrideInstancingSettings) == 272, "Offset mismatch for UProceduralScatterStaticMeshContentVariation::OverrideInstancingSettings");

// /Script/Procedural.ProceduralSurfaceHeightMap
// Kind: Class; super: ProceduralFloatDataMap
class UProceduralSurfaceHeightMap
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bNormalizedHeight; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::uint8_t HeightRange[0x1]; // 0x007C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralSurfaceHeightMap, bNormalizedHeight) == 120, "Offset mismatch for UProceduralSurfaceHeightMap::bNormalizedHeight");
static_assert(offsetof(UProceduralSurfaceHeightMap, HeightRange) == 124, "Offset mismatch for UProceduralSurfaceHeightMap::HeightRange");

// /Script/Procedural.ProceduralSurfaceSlopeAngleMap
// Kind: Class; super: ProceduralFloatDataMap
class UProceduralSurfaceSlopeAngleMap
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bNormalizedSlopeAngle; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::uint8_t SlopeAngleRange[0x1]; // 0x007C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralSurfaceSlopeAngleMap, bNormalizedSlopeAngle) == 120, "Offset mismatch for UProceduralSurfaceSlopeAngleMap::bNormalizedSlopeAngle");
static_assert(offsetof(UProceduralSurfaceSlopeAngleMap, SlopeAngleRange) == 124, "Offset mismatch for UProceduralSurfaceSlopeAngleMap::SlopeAngleRange");

// /Script/Procedural.ProceduralTextureFloatMap
// Kind: Class; super: ProceduralFloatDataMap
class UProceduralTextureFloatMap
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Channel; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    std::uint8_t Source[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralTextureFloatMap, Channel) == 120, "Offset mismatch for UProceduralTextureFloatMap::Channel");
static_assert(offsetof(UProceduralTextureFloatMap, Source) == 128, "Offset mismatch for UProceduralTextureFloatMap::Source");

// /Script/Procedural.ProceduralTextureVectorMap
// Kind: Class; super: ProceduralVectorDataMap
class UProceduralTextureVectorMap
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::uint8_t Source[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralTextureVectorMap, Source) == 312, "Offset mismatch for UProceduralTextureVectorMap::Source");

// /Script/Procedural.ProceduralVectorDataMap
// Kind: Class; super: ProceduralDataMap
class UProceduralVectorDataMap
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RemapCurve[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralVectorDataMap, RemapCurve) == 48, "Offset mismatch for UProceduralVectorDataMap::RemapCurve");

// /Script/Procedural.ProceduralVertexColorMap
// Kind: Class; super: ProceduralFloatDataMap
class UProceduralVertexColorMap
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Channel; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UProceduralVertexColorMap, Channel) == 120, "Offset mismatch for UProceduralVertexColorMap::Channel");
