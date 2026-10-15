/**
 * decamp dumper generated SDK
 * Package: /Script/Landmass
 */
#pragma once
#include "Basic.h"

// /Script/Landmass.BrushEffectBlurring
// Kind: ScriptStruct; super: none
struct FBrushEffectBlurring
{
public:
    std::uint8_t bBlurShape; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t Radius; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBrushEffectBlurring, bBlurShape) == 0, "Offset mismatch for FBrushEffectBlurring::bBlurShape");
static_assert(offsetof(FBrushEffectBlurring, Radius) == 4, "Offset mismatch for FBrushEffectBlurring::Radius");

// /Script/Landmass.BrushEffectCurlNoise
// Kind: ScriptStruct; super: none
struct FBrushEffectCurlNoise
{
public:
    float Curl1Amount; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Curl2Amount; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Curl1Tiling; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Curl2Tiling; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBrushEffectCurlNoise, Curl1Amount) == 0, "Offset mismatch for FBrushEffectCurlNoise::Curl1Amount");
static_assert(offsetof(FBrushEffectCurlNoise, Curl2Amount) == 4, "Offset mismatch for FBrushEffectCurlNoise::Curl2Amount");
static_assert(offsetof(FBrushEffectCurlNoise, Curl1Tiling) == 8, "Offset mismatch for FBrushEffectCurlNoise::Curl1Tiling");
static_assert(offsetof(FBrushEffectCurlNoise, Curl2Tiling) == 12, "Offset mismatch for FBrushEffectCurlNoise::Curl2Tiling");

// /Script/Landmass.BrushEffectCurves
// Kind: ScriptStruct; super: none
struct FBrushEffectCurves
{
public:
    std::uint8_t bUseCurveChannel; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ElevationCurveAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float ChannelEdgeOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ChannelDepth; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CurveRampWidth; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBrushEffectCurves, bUseCurveChannel) == 0, "Offset mismatch for FBrushEffectCurves::bUseCurveChannel");
static_assert(offsetof(FBrushEffectCurves, ElevationCurveAsset) == 8, "Offset mismatch for FBrushEffectCurves::ElevationCurveAsset");
static_assert(offsetof(FBrushEffectCurves, ChannelEdgeOffset) == 16, "Offset mismatch for FBrushEffectCurves::ChannelEdgeOffset");
static_assert(offsetof(FBrushEffectCurves, ChannelDepth) == 20, "Offset mismatch for FBrushEffectCurves::ChannelDepth");
static_assert(offsetof(FBrushEffectCurves, CurveRampWidth) == 24, "Offset mismatch for FBrushEffectCurves::CurveRampWidth");

// /Script/Landmass.BrushEffectDisplacement
// Kind: ScriptStruct; super: none
struct FBrushEffectDisplacement
{
public:
    float DisplacementHeight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DisplacementTiling; // 0x0004 (Size: 0x4, Type: FloatProperty)
    void* Texture; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float Midpoint; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Channel[0x10]; // 0x0014 (Size: 0x10, Type: StructProperty)
    float WeightmapInfluence; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBrushEffectDisplacement, DisplacementHeight) == 0, "Offset mismatch for FBrushEffectDisplacement::DisplacementHeight");
static_assert(offsetof(FBrushEffectDisplacement, DisplacementTiling) == 4, "Offset mismatch for FBrushEffectDisplacement::DisplacementTiling");
static_assert(offsetof(FBrushEffectDisplacement, Texture) == 8, "Offset mismatch for FBrushEffectDisplacement::Texture");
static_assert(offsetof(FBrushEffectDisplacement, Midpoint) == 16, "Offset mismatch for FBrushEffectDisplacement::Midpoint");
static_assert(offsetof(FBrushEffectDisplacement, Channel) == 20, "Offset mismatch for FBrushEffectDisplacement::Channel");
static_assert(offsetof(FBrushEffectDisplacement, WeightmapInfluence) == 36, "Offset mismatch for FBrushEffectDisplacement::WeightmapInfluence");

// /Script/Landmass.BrushEffectSmoothBlending
// Kind: ScriptStruct; super: none
struct FBrushEffectSmoothBlending
{
public:
    float InnerSmoothDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float OuterSmoothDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBrushEffectSmoothBlending, InnerSmoothDistance) == 0, "Offset mismatch for FBrushEffectSmoothBlending::InnerSmoothDistance");
static_assert(offsetof(FBrushEffectSmoothBlending, OuterSmoothDistance) == 4, "Offset mismatch for FBrushEffectSmoothBlending::OuterSmoothDistance");

// /Script/Landmass.BrushEffectTerracing
// Kind: ScriptStruct; super: none
struct FBrushEffectTerracing
{
public:
    float TerraceAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TerraceSpacing; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TerraceSmoothness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaskLength; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaskStartOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBrushEffectTerracing, TerraceAlpha) == 0, "Offset mismatch for FBrushEffectTerracing::TerraceAlpha");
static_assert(offsetof(FBrushEffectTerracing, TerraceSpacing) == 4, "Offset mismatch for FBrushEffectTerracing::TerraceSpacing");
static_assert(offsetof(FBrushEffectTerracing, TerraceSmoothness) == 8, "Offset mismatch for FBrushEffectTerracing::TerraceSmoothness");
static_assert(offsetof(FBrushEffectTerracing, MaskLength) == 12, "Offset mismatch for FBrushEffectTerracing::MaskLength");
static_assert(offsetof(FBrushEffectTerracing, MaskStartOffset) == 16, "Offset mismatch for FBrushEffectTerracing::MaskStartOffset");

// /Script/Landmass.LandmassBrushEffectsList
// Kind: ScriptStruct; super: none
struct FLandmassBrushEffectsList
{
public:
    std::uint8_t Blurring[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t CurlNoise[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Displacement[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t SmoothBlending[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    std::uint8_t Terracing[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLandmassBrushEffectsList, Blurring) == 0, "Offset mismatch for FLandmassBrushEffectsList::Blurring");
static_assert(offsetof(FLandmassBrushEffectsList, CurlNoise) == 8, "Offset mismatch for FLandmassBrushEffectsList::CurlNoise");
static_assert(offsetof(FLandmassBrushEffectsList, Displacement) == 24, "Offset mismatch for FLandmassBrushEffectsList::Displacement");
static_assert(offsetof(FLandmassBrushEffectsList, SmoothBlending) == 64, "Offset mismatch for FLandmassBrushEffectsList::SmoothBlending");
static_assert(offsetof(FLandmassBrushEffectsList, Terracing) == 72, "Offset mismatch for FLandmassBrushEffectsList::Terracing");

// /Script/Landmass.LandmassFalloffSettings
// Kind: ScriptStruct; super: none
struct FLandmassFalloffSettings
{
public:
    std::uint8_t FalloffMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float FalloffAngle; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FalloffWidth; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float EdgeOffset; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ZOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLandmassFalloffSettings, FalloffMode) == 0, "Offset mismatch for FLandmassFalloffSettings::FalloffMode");
static_assert(offsetof(FLandmassFalloffSettings, FalloffAngle) == 4, "Offset mismatch for FLandmassFalloffSettings::FalloffAngle");
static_assert(offsetof(FLandmassFalloffSettings, FalloffWidth) == 8, "Offset mismatch for FLandmassFalloffSettings::FalloffWidth");
static_assert(offsetof(FLandmassFalloffSettings, EdgeOffset) == 12, "Offset mismatch for FLandmassFalloffSettings::EdgeOffset");
static_assert(offsetof(FLandmassFalloffSettings, ZOffset) == 16, "Offset mismatch for FLandmassFalloffSettings::ZOffset");

// /Script/Landmass.LandmassTerrainCarvingSettings
// Kind: ScriptStruct; super: none
struct FLandmassTerrainCarvingSettings
{
public:
    std::uint8_t BlendMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvertShape; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t FalloffSettings[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    std::uint8_t Effects[0x60]; // 0x0018 (Size: 0x60, Type: StructProperty)
    std::int32_t Priority; // 0x0078 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLandmassTerrainCarvingSettings, BlendMode) == 0, "Offset mismatch for FLandmassTerrainCarvingSettings::BlendMode");
static_assert(offsetof(FLandmassTerrainCarvingSettings, bInvertShape) == 1, "Offset mismatch for FLandmassTerrainCarvingSettings::bInvertShape");
static_assert(offsetof(FLandmassTerrainCarvingSettings, FalloffSettings) == 4, "Offset mismatch for FLandmassTerrainCarvingSettings::FalloffSettings");
static_assert(offsetof(FLandmassTerrainCarvingSettings, Effects) == 24, "Offset mismatch for FLandmassTerrainCarvingSettings::Effects");
static_assert(offsetof(FLandmassTerrainCarvingSettings, Priority) == 120, "Offset mismatch for FLandmassTerrainCarvingSettings::Priority");
