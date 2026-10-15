/**
 * decamp dumper generated SDK
 * Package: /Script/Water
 */
#pragma once
#include "Basic.h"

// /Script/Water.BuoyancyData
// Kind: ScriptStruct; super: none
struct FBuoyancyData
{
public:
    TArray<void*> Pontoons; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCenterPontoonsOnCOM; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float BuoyancyCoefficient; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float BuoyancyDamp; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float BuoyancyDamp2; // 0x001C (Size: 0x4, Type: FloatProperty)
    float BuoyancyRampMinVelocity; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float BuoyancyRampMaxVelocity; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float BuoyancyRampMax; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MaxBuoyantForce; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyDragForcesInWater; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float DragCoefficient; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DragCoefficient2; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float AngularDragCoefficient; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MaxDragSpeed; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyRiverForces; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    std::int32_t RiverPontoonIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
    float WaterShorePushFactor; // 0x004C (Size: 0x4, Type: FloatProperty)
    float RiverTraversalPathWidth; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float MaxShorePushForce; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float WaterVelocityStrength; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MaxWaterForce; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAlwaysAllowLateralPush; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowCurrentWhenMovingFastUpstream; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyDownstreamAngularRotation; // 0x0062 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x5]; // 0x0063
    std::uint8_t DownstreamAxisOfRotation[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    float DownstreamRotationStrength; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float DownstreamRotationStiffness; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float DownstreamRotationAngularDamping; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float DownstreamMaxAcceleration; // 0x008C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBuoyancyData, Pontoons) == 0, "Offset mismatch for FBuoyancyData::Pontoons");
static_assert(offsetof(FBuoyancyData, bCenterPontoonsOnCOM) == 16, "Offset mismatch for FBuoyancyData::bCenterPontoonsOnCOM");
static_assert(offsetof(FBuoyancyData, BuoyancyCoefficient) == 20, "Offset mismatch for FBuoyancyData::BuoyancyCoefficient");
static_assert(offsetof(FBuoyancyData, BuoyancyDamp) == 24, "Offset mismatch for FBuoyancyData::BuoyancyDamp");
static_assert(offsetof(FBuoyancyData, BuoyancyDamp2) == 28, "Offset mismatch for FBuoyancyData::BuoyancyDamp2");
static_assert(offsetof(FBuoyancyData, BuoyancyRampMinVelocity) == 32, "Offset mismatch for FBuoyancyData::BuoyancyRampMinVelocity");
static_assert(offsetof(FBuoyancyData, BuoyancyRampMaxVelocity) == 36, "Offset mismatch for FBuoyancyData::BuoyancyRampMaxVelocity");
static_assert(offsetof(FBuoyancyData, BuoyancyRampMax) == 40, "Offset mismatch for FBuoyancyData::BuoyancyRampMax");
static_assert(offsetof(FBuoyancyData, MaxBuoyantForce) == 44, "Offset mismatch for FBuoyancyData::MaxBuoyantForce");
static_assert(offsetof(FBuoyancyData, bApplyDragForcesInWater) == 48, "Offset mismatch for FBuoyancyData::bApplyDragForcesInWater");
static_assert(offsetof(FBuoyancyData, DragCoefficient) == 52, "Offset mismatch for FBuoyancyData::DragCoefficient");
static_assert(offsetof(FBuoyancyData, DragCoefficient2) == 56, "Offset mismatch for FBuoyancyData::DragCoefficient2");
static_assert(offsetof(FBuoyancyData, AngularDragCoefficient) == 60, "Offset mismatch for FBuoyancyData::AngularDragCoefficient");
static_assert(offsetof(FBuoyancyData, MaxDragSpeed) == 64, "Offset mismatch for FBuoyancyData::MaxDragSpeed");
static_assert(offsetof(FBuoyancyData, bApplyRiverForces) == 68, "Offset mismatch for FBuoyancyData::bApplyRiverForces");
static_assert(offsetof(FBuoyancyData, RiverPontoonIndex) == 72, "Offset mismatch for FBuoyancyData::RiverPontoonIndex");
static_assert(offsetof(FBuoyancyData, WaterShorePushFactor) == 76, "Offset mismatch for FBuoyancyData::WaterShorePushFactor");
static_assert(offsetof(FBuoyancyData, RiverTraversalPathWidth) == 80, "Offset mismatch for FBuoyancyData::RiverTraversalPathWidth");
static_assert(offsetof(FBuoyancyData, MaxShorePushForce) == 84, "Offset mismatch for FBuoyancyData::MaxShorePushForce");
static_assert(offsetof(FBuoyancyData, WaterVelocityStrength) == 88, "Offset mismatch for FBuoyancyData::WaterVelocityStrength");
static_assert(offsetof(FBuoyancyData, MaxWaterForce) == 92, "Offset mismatch for FBuoyancyData::MaxWaterForce");
static_assert(offsetof(FBuoyancyData, bAlwaysAllowLateralPush) == 96, "Offset mismatch for FBuoyancyData::bAlwaysAllowLateralPush");
static_assert(offsetof(FBuoyancyData, bAllowCurrentWhenMovingFastUpstream) == 97, "Offset mismatch for FBuoyancyData::bAllowCurrentWhenMovingFastUpstream");
static_assert(offsetof(FBuoyancyData, bApplyDownstreamAngularRotation) == 98, "Offset mismatch for FBuoyancyData::bApplyDownstreamAngularRotation");
static_assert(offsetof(FBuoyancyData, DownstreamAxisOfRotation) == 104, "Offset mismatch for FBuoyancyData::DownstreamAxisOfRotation");
static_assert(offsetof(FBuoyancyData, DownstreamRotationStrength) == 128, "Offset mismatch for FBuoyancyData::DownstreamRotationStrength");
static_assert(offsetof(FBuoyancyData, DownstreamRotationStiffness) == 132, "Offset mismatch for FBuoyancyData::DownstreamRotationStiffness");
static_assert(offsetof(FBuoyancyData, DownstreamRotationAngularDamping) == 136, "Offset mismatch for FBuoyancyData::DownstreamRotationAngularDamping");
static_assert(offsetof(FBuoyancyData, DownstreamMaxAcceleration) == 140, "Offset mismatch for FBuoyancyData::DownstreamMaxAcceleration");

// /Script/Water.GerstnerWave
// Kind: ScriptStruct; super: none
struct FGerstnerWave
{
public:
    float Wavelength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Amplitude; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Steepness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t Direction[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveVector[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float WaveSpeed; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float WKA; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Q; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float PhaseOffset; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGerstnerWave, Wavelength) == 0, "Offset mismatch for FGerstnerWave::Wavelength");
static_assert(offsetof(FGerstnerWave, Amplitude) == 4, "Offset mismatch for FGerstnerWave::Amplitude");
static_assert(offsetof(FGerstnerWave, Steepness) == 8, "Offset mismatch for FGerstnerWave::Steepness");
static_assert(offsetof(FGerstnerWave, Direction) == 16, "Offset mismatch for FGerstnerWave::Direction");
static_assert(offsetof(FGerstnerWave, WaveVector) == 40, "Offset mismatch for FGerstnerWave::WaveVector");
static_assert(offsetof(FGerstnerWave, WaveSpeed) == 56, "Offset mismatch for FGerstnerWave::WaveSpeed");
static_assert(offsetof(FGerstnerWave, WKA) == 60, "Offset mismatch for FGerstnerWave::WKA");
static_assert(offsetof(FGerstnerWave, Q) == 64, "Offset mismatch for FGerstnerWave::Q");
static_assert(offsetof(FGerstnerWave, PhaseOffset) == 68, "Offset mismatch for FGerstnerWave::PhaseOffset");

// /Script/Water.GerstnerWaveOctave
// Kind: ScriptStruct; super: none
struct FGerstnerWaveOctave
{
public:
    std::int32_t NumWaves; // 0x0000 (Size: 0x4, Type: IntProperty)
    float AmplitudeScale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MainDirection; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SpreadAngle; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUniformSpread; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGerstnerWaveOctave, NumWaves) == 0, "Offset mismatch for FGerstnerWaveOctave::NumWaves");
static_assert(offsetof(FGerstnerWaveOctave, AmplitudeScale) == 4, "Offset mismatch for FGerstnerWaveOctave::AmplitudeScale");
static_assert(offsetof(FGerstnerWaveOctave, MainDirection) == 8, "Offset mismatch for FGerstnerWaveOctave::MainDirection");
static_assert(offsetof(FGerstnerWaveOctave, SpreadAngle) == 12, "Offset mismatch for FGerstnerWaveOctave::SpreadAngle");
static_assert(offsetof(FGerstnerWaveOctave, bUniformSpread) == 16, "Offset mismatch for FGerstnerWaveOctave::bUniformSpread");

// /Script/Water.ShallowWaterSimulationGrid_DEPRECATED
// Kind: ScriptStruct; super: none
struct FShallowWaterSimulationGrid_DEPRECATED
{
public:
    TArray<void*> ArrayValues; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NumCells[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Size[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t Dx[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    void* BakedTexture; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FShallowWaterSimulationGrid_DEPRECATED, ArrayValues) == 0, "Offset mismatch for FShallowWaterSimulationGrid_DEPRECATED::ArrayValues");
static_assert(offsetof(FShallowWaterSimulationGrid_DEPRECATED, NumCells) == 16, "Offset mismatch for FShallowWaterSimulationGrid_DEPRECATED::NumCells");
static_assert(offsetof(FShallowWaterSimulationGrid_DEPRECATED, Position) == 24, "Offset mismatch for FShallowWaterSimulationGrid_DEPRECATED::Position");
static_assert(offsetof(FShallowWaterSimulationGrid_DEPRECATED, Size) == 48, "Offset mismatch for FShallowWaterSimulationGrid_DEPRECATED::Size");
static_assert(offsetof(FShallowWaterSimulationGrid_DEPRECATED, Dx) == 64, "Offset mismatch for FShallowWaterSimulationGrid_DEPRECATED::Dx");
static_assert(offsetof(FShallowWaterSimulationGrid_DEPRECATED, BakedTexture) == 80, "Offset mismatch for FShallowWaterSimulationGrid_DEPRECATED::BakedTexture");

// /Script/Water.SphericalPontoon
// Kind: ScriptStruct; super: none
struct FSphericalPontoon
{
public:
    FName CenterSocket; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t RelativeLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFXEnabled; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    std::uint8_t LocalForce[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t CenterLocation[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t SocketRotation[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t Offset[0x1C]; // 0x0080 (Size: 0x1C, Type: StructProperty)
    float WaterHeight; // 0x009C (Size: 0x4, Type: FloatProperty)
    float WaterDepth; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float ImmersionDepth; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WaterPlaneLocation[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaterPlaneNormal[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaterSurfacePosition[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaterVelocity[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::int32_t WaterBodyIndex; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsInWater; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xAB]; // 0x010D
    void* CurrentWaterBodyComponent; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSphericalPontoon, CenterSocket) == 0, "Offset mismatch for FSphericalPontoon::CenterSocket");
static_assert(offsetof(FSphericalPontoon, RelativeLocation) == 8, "Offset mismatch for FSphericalPontoon::RelativeLocation");
static_assert(offsetof(FSphericalPontoon, Radius) == 32, "Offset mismatch for FSphericalPontoon::Radius");
static_assert(offsetof(FSphericalPontoon, bFXEnabled) == 36, "Offset mismatch for FSphericalPontoon::bFXEnabled");
static_assert(offsetof(FSphericalPontoon, LocalForce) == 40, "Offset mismatch for FSphericalPontoon::LocalForce");
static_assert(offsetof(FSphericalPontoon, CenterLocation) == 64, "Offset mismatch for FSphericalPontoon::CenterLocation");
static_assert(offsetof(FSphericalPontoon, SocketRotation) == 96, "Offset mismatch for FSphericalPontoon::SocketRotation");
static_assert(offsetof(FSphericalPontoon, Offset) == 128, "Offset mismatch for FSphericalPontoon::Offset");
static_assert(offsetof(FSphericalPontoon, WaterHeight) == 156, "Offset mismatch for FSphericalPontoon::WaterHeight");
static_assert(offsetof(FSphericalPontoon, WaterDepth) == 160, "Offset mismatch for FSphericalPontoon::WaterDepth");
static_assert(offsetof(FSphericalPontoon, ImmersionDepth) == 164, "Offset mismatch for FSphericalPontoon::ImmersionDepth");
static_assert(offsetof(FSphericalPontoon, WaterPlaneLocation) == 168, "Offset mismatch for FSphericalPontoon::WaterPlaneLocation");
static_assert(offsetof(FSphericalPontoon, WaterPlaneNormal) == 192, "Offset mismatch for FSphericalPontoon::WaterPlaneNormal");
static_assert(offsetof(FSphericalPontoon, WaterSurfacePosition) == 216, "Offset mismatch for FSphericalPontoon::WaterSurfacePosition");
static_assert(offsetof(FSphericalPontoon, WaterVelocity) == 240, "Offset mismatch for FSphericalPontoon::WaterVelocity");
static_assert(offsetof(FSphericalPontoon, WaterBodyIndex) == 264, "Offset mismatch for FSphericalPontoon::WaterBodyIndex");
static_assert(offsetof(FSphericalPontoon, bIsInWater) == 268, "Offset mismatch for FSphericalPontoon::bIsInWater");
static_assert(offsetof(FSphericalPontoon, CurrentWaterBodyComponent) == 440, "Offset mismatch for FSphericalPontoon::CurrentWaterBodyComponent");

// /Script/Water.UnderwaterPostProcessSettings
// Kind: ScriptStruct; super: none
struct FUnderwaterPostProcessSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Priority; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BlendRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BlendWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PostProcessSettings[0x7B0]; // 0x0010 (Size: 0x7B0, Type: StructProperty)
    void* UnderwaterPostProcessMaterial; // 0x07C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUnderwaterPostProcessSettings, bEnabled) == 0, "Offset mismatch for FUnderwaterPostProcessSettings::bEnabled");
static_assert(offsetof(FUnderwaterPostProcessSettings, Priority) == 4, "Offset mismatch for FUnderwaterPostProcessSettings::Priority");
static_assert(offsetof(FUnderwaterPostProcessSettings, BlendRadius) == 8, "Offset mismatch for FUnderwaterPostProcessSettings::BlendRadius");
static_assert(offsetof(FUnderwaterPostProcessSettings, BlendWeight) == 12, "Offset mismatch for FUnderwaterPostProcessSettings::BlendWeight");
static_assert(offsetof(FUnderwaterPostProcessSettings, PostProcessSettings) == 16, "Offset mismatch for FUnderwaterPostProcessSettings::PostProcessSettings");
static_assert(offsetof(FUnderwaterPostProcessSettings, UnderwaterPostProcessMaterial) == 1984, "Offset mismatch for FUnderwaterPostProcessSettings::UnderwaterPostProcessMaterial");

// /Script/Water.WaterBodyHeightmapSettings
// Kind: ScriptStruct; super: none
struct FWaterBodyHeightmapSettings
{
public:
    std::uint8_t BlendMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t FalloffSettings[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    std::uint8_t Effects[0x78]; // 0x0018 (Size: 0x78, Type: StructProperty)
    std::uint8_t bInvertShape; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0091
    std::int32_t Priority; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FWaterBodyHeightmapSettings, BlendMode) == 0, "Offset mismatch for FWaterBodyHeightmapSettings::BlendMode");
static_assert(offsetof(FWaterBodyHeightmapSettings, FalloffSettings) == 4, "Offset mismatch for FWaterBodyHeightmapSettings::FalloffSettings");
static_assert(offsetof(FWaterBodyHeightmapSettings, Effects) == 24, "Offset mismatch for FWaterBodyHeightmapSettings::Effects");
static_assert(offsetof(FWaterBodyHeightmapSettings, bInvertShape) == 144, "Offset mismatch for FWaterBodyHeightmapSettings::bInvertShape");
static_assert(offsetof(FWaterBodyHeightmapSettings, Priority) == 148, "Offset mismatch for FWaterBodyHeightmapSettings::Priority");

// /Script/Water.WaterBodyStaticMeshSettings
// Kind: ScriptStruct; super: none
struct FWaterBodyStaticMeshSettings
{
public:
    std::uint8_t bEnableWaterBodyStaticMesh; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSectionWaterBodyStaticMesh; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    double SectionSize; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FWaterBodyStaticMeshSettings, bEnableWaterBodyStaticMesh) == 0, "Offset mismatch for FWaterBodyStaticMeshSettings::bEnableWaterBodyStaticMesh");
static_assert(offsetof(FWaterBodyStaticMeshSettings, bSectionWaterBodyStaticMesh) == 1, "Offset mismatch for FWaterBodyStaticMeshSettings::bSectionWaterBodyStaticMesh");
static_assert(offsetof(FWaterBodyStaticMeshSettings, SectionSize) == 8, "Offset mismatch for FWaterBodyStaticMeshSettings::SectionSize");

// /Script/Water.WaterBodyWeightmapSettings
// Kind: ScriptStruct; super: none
struct FWaterBodyWeightmapSettings
{
public:
    float FalloffWidth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float EdgeOffset; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ModulationTexture[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    float TextureTiling; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float TextureInfluence; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Midpoint; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float FinalOpacity; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaterBodyWeightmapSettings, FalloffWidth) == 0, "Offset mismatch for FWaterBodyWeightmapSettings::FalloffWidth");
static_assert(offsetof(FWaterBodyWeightmapSettings, EdgeOffset) == 4, "Offset mismatch for FWaterBodyWeightmapSettings::EdgeOffset");
static_assert(offsetof(FWaterBodyWeightmapSettings, ModulationTexture) == 8, "Offset mismatch for FWaterBodyWeightmapSettings::ModulationTexture");
static_assert(offsetof(FWaterBodyWeightmapSettings, TextureTiling) == 40, "Offset mismatch for FWaterBodyWeightmapSettings::TextureTiling");
static_assert(offsetof(FWaterBodyWeightmapSettings, TextureInfluence) == 44, "Offset mismatch for FWaterBodyWeightmapSettings::TextureInfluence");
static_assert(offsetof(FWaterBodyWeightmapSettings, Midpoint) == 48, "Offset mismatch for FWaterBodyWeightmapSettings::Midpoint");
static_assert(offsetof(FWaterBodyWeightmapSettings, FinalOpacity) == 52, "Offset mismatch for FWaterBodyWeightmapSettings::FinalOpacity");

// /Script/Water.WaterBrushEffectBlurring
// Kind: ScriptStruct; super: none
struct FWaterBrushEffectBlurring
{
public:
    std::uint8_t bBlurShape; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t Radius; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FWaterBrushEffectBlurring, bBlurShape) == 0, "Offset mismatch for FWaterBrushEffectBlurring::bBlurShape");
static_assert(offsetof(FWaterBrushEffectBlurring, Radius) == 4, "Offset mismatch for FWaterBrushEffectBlurring::Radius");

// /Script/Water.WaterBrushEffectCurlNoise
// Kind: ScriptStruct; super: none
struct FWaterBrushEffectCurlNoise
{
public:
    float Curl1Amount; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Curl2Amount; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Curl1Tiling; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Curl2Tiling; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaterBrushEffectCurlNoise, Curl1Amount) == 0, "Offset mismatch for FWaterBrushEffectCurlNoise::Curl1Amount");
static_assert(offsetof(FWaterBrushEffectCurlNoise, Curl2Amount) == 4, "Offset mismatch for FWaterBrushEffectCurlNoise::Curl2Amount");
static_assert(offsetof(FWaterBrushEffectCurlNoise, Curl1Tiling) == 8, "Offset mismatch for FWaterBrushEffectCurlNoise::Curl1Tiling");
static_assert(offsetof(FWaterBrushEffectCurlNoise, Curl2Tiling) == 12, "Offset mismatch for FWaterBrushEffectCurlNoise::Curl2Tiling");

// /Script/Water.WaterBrushEffectCurves
// Kind: ScriptStruct; super: none
struct FWaterBrushEffectCurves
{
public:
    std::uint8_t bUseCurveChannel; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ElevationCurveAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float ChannelEdgeOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ChannelDepth; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CurveRampWidth; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaterBrushEffectCurves, bUseCurveChannel) == 0, "Offset mismatch for FWaterBrushEffectCurves::bUseCurveChannel");
static_assert(offsetof(FWaterBrushEffectCurves, ElevationCurveAsset) == 8, "Offset mismatch for FWaterBrushEffectCurves::ElevationCurveAsset");
static_assert(offsetof(FWaterBrushEffectCurves, ChannelEdgeOffset) == 16, "Offset mismatch for FWaterBrushEffectCurves::ChannelEdgeOffset");
static_assert(offsetof(FWaterBrushEffectCurves, ChannelDepth) == 20, "Offset mismatch for FWaterBrushEffectCurves::ChannelDepth");
static_assert(offsetof(FWaterBrushEffectCurves, CurveRampWidth) == 24, "Offset mismatch for FWaterBrushEffectCurves::CurveRampWidth");

// /Script/Water.WaterBrushEffectDisplacement
// Kind: ScriptStruct; super: none
struct FWaterBrushEffectDisplacement
{
public:
    float DisplacementHeight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DisplacementTiling; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Texture[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    float Midpoint; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Channel[0x10]; // 0x002C (Size: 0x10, Type: StructProperty)
    float WeightmapInfluence; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaterBrushEffectDisplacement, DisplacementHeight) == 0, "Offset mismatch for FWaterBrushEffectDisplacement::DisplacementHeight");
static_assert(offsetof(FWaterBrushEffectDisplacement, DisplacementTiling) == 4, "Offset mismatch for FWaterBrushEffectDisplacement::DisplacementTiling");
static_assert(offsetof(FWaterBrushEffectDisplacement, Texture) == 8, "Offset mismatch for FWaterBrushEffectDisplacement::Texture");
static_assert(offsetof(FWaterBrushEffectDisplacement, Midpoint) == 40, "Offset mismatch for FWaterBrushEffectDisplacement::Midpoint");
static_assert(offsetof(FWaterBrushEffectDisplacement, Channel) == 44, "Offset mismatch for FWaterBrushEffectDisplacement::Channel");
static_assert(offsetof(FWaterBrushEffectDisplacement, WeightmapInfluence) == 60, "Offset mismatch for FWaterBrushEffectDisplacement::WeightmapInfluence");

// /Script/Water.WaterBrushEffectSmoothBlending
// Kind: ScriptStruct; super: none
struct FWaterBrushEffectSmoothBlending
{
public:
    float InnerSmoothDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float OuterSmoothDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaterBrushEffectSmoothBlending, InnerSmoothDistance) == 0, "Offset mismatch for FWaterBrushEffectSmoothBlending::InnerSmoothDistance");
static_assert(offsetof(FWaterBrushEffectSmoothBlending, OuterSmoothDistance) == 4, "Offset mismatch for FWaterBrushEffectSmoothBlending::OuterSmoothDistance");

// /Script/Water.WaterBrushEffectTerracing
// Kind: ScriptStruct; super: none
struct FWaterBrushEffectTerracing
{
public:
    float TerraceAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TerraceSpacing; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TerraceSmoothness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaskLength; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaskStartOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaterBrushEffectTerracing, TerraceAlpha) == 0, "Offset mismatch for FWaterBrushEffectTerracing::TerraceAlpha");
static_assert(offsetof(FWaterBrushEffectTerracing, TerraceSpacing) == 4, "Offset mismatch for FWaterBrushEffectTerracing::TerraceSpacing");
static_assert(offsetof(FWaterBrushEffectTerracing, TerraceSmoothness) == 8, "Offset mismatch for FWaterBrushEffectTerracing::TerraceSmoothness");
static_assert(offsetof(FWaterBrushEffectTerracing, MaskLength) == 12, "Offset mismatch for FWaterBrushEffectTerracing::MaskLength");
static_assert(offsetof(FWaterBrushEffectTerracing, MaskStartOffset) == 16, "Offset mismatch for FWaterBrushEffectTerracing::MaskStartOffset");

// /Script/Water.WaterBrushEffects
// Kind: ScriptStruct; super: none
struct FWaterBrushEffects
{
public:
    std::uint8_t Blurring[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t CurlNoise[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Displacement[0x40]; // 0x0018 (Size: 0x40, Type: StructProperty)
    std::uint8_t SmoothBlending[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t Terracing[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWaterBrushEffects, Blurring) == 0, "Offset mismatch for FWaterBrushEffects::Blurring");
static_assert(offsetof(FWaterBrushEffects, CurlNoise) == 8, "Offset mismatch for FWaterBrushEffects::CurlNoise");
static_assert(offsetof(FWaterBrushEffects, Displacement) == 24, "Offset mismatch for FWaterBrushEffects::Displacement");
static_assert(offsetof(FWaterBrushEffects, SmoothBlending) == 88, "Offset mismatch for FWaterBrushEffects::SmoothBlending");
static_assert(offsetof(FWaterBrushEffects, Terracing) == 96, "Offset mismatch for FWaterBrushEffects::Terracing");

// /Script/Water.WaterCurveSettings
// Kind: ScriptStruct; super: none
struct FWaterCurveSettings
{
public:
    std::uint8_t bUseCurveChannel; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ElevationCurveAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float ChannelEdgeOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ChannelDepth; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CurveRampWidth; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaterCurveSettings, bUseCurveChannel) == 0, "Offset mismatch for FWaterCurveSettings::bUseCurveChannel");
static_assert(offsetof(FWaterCurveSettings, ElevationCurveAsset) == 8, "Offset mismatch for FWaterCurveSettings::ElevationCurveAsset");
static_assert(offsetof(FWaterCurveSettings, ChannelEdgeOffset) == 16, "Offset mismatch for FWaterCurveSettings::ChannelEdgeOffset");
static_assert(offsetof(FWaterCurveSettings, ChannelDepth) == 20, "Offset mismatch for FWaterCurveSettings::ChannelDepth");
static_assert(offsetof(FWaterCurveSettings, CurveRampWidth) == 24, "Offset mismatch for FWaterCurveSettings::CurveRampWidth");

// /Script/Water.WaterFalloffSettings
// Kind: ScriptStruct; super: none
struct FWaterFalloffSettings
{
public:
    std::uint8_t FalloffMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float FalloffAngle; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FalloffWidth; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float EdgeOffset; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ZOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaterFalloffSettings, FalloffMode) == 0, "Offset mismatch for FWaterFalloffSettings::FalloffMode");
static_assert(offsetof(FWaterFalloffSettings, FalloffAngle) == 4, "Offset mismatch for FWaterFalloffSettings::FalloffAngle");
static_assert(offsetof(FWaterFalloffSettings, FalloffWidth) == 8, "Offset mismatch for FWaterFalloffSettings::FalloffWidth");
static_assert(offsetof(FWaterFalloffSettings, EdgeOffset) == 12, "Offset mismatch for FWaterFalloffSettings::EdgeOffset");
static_assert(offsetof(FWaterFalloffSettings, ZOffset) == 16, "Offset mismatch for FWaterFalloffSettings::ZOffset");

// /Script/Water.WaterSplineCurveDefaults
// Kind: ScriptStruct; super: none
struct FWaterSplineCurveDefaults
{
public:
    float DefaultDepth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DefaultWidth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DefaultVelocity; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DefaultAudioIntensity; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaterSplineCurveDefaults, DefaultDepth) == 0, "Offset mismatch for FWaterSplineCurveDefaults::DefaultDepth");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultWidth) == 4, "Offset mismatch for FWaterSplineCurveDefaults::DefaultWidth");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultVelocity) == 8, "Offset mismatch for FWaterSplineCurveDefaults::DefaultVelocity");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultAudioIntensity) == 12, "Offset mismatch for FWaterSplineCurveDefaults::DefaultAudioIntensity");

// /Script/Water.BakedShallowWaterSimulationComponent
// Kind: Class; super: PrimitiveComponent
class UBakedShallowWaterSimulationComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* BakedSimulationData; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    TSet<void*> WaterBodies; // 0x0578 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UBakedShallowWaterSimulationComponent, BakedSimulationData) == 1392, "Offset mismatch for UBakedShallowWaterSimulationComponent::BakedSimulationData");
static_assert(offsetof(UBakedShallowWaterSimulationComponent, WaterBodies) == 1400, "Offset mismatch for UBakedShallowWaterSimulationComponent::WaterBodies");

// /Script/Water.BuoyancyComponent
// Kind: Class; super: ActorComponent
class UBuoyancyComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> Pontoons; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnEnteredWaterDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnExitedWaterDelegate; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t BuoyancyData[0x90]; // 0x00F0 (Size: 0x90, Type: StructProperty)
    TArray<void*> CurrentWaterBodyComponents; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    void* SimulatingComponent; // 0x0190 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBuoyancyComponent, Pontoons) == 192, "Offset mismatch for UBuoyancyComponent::Pontoons");
static_assert(offsetof(UBuoyancyComponent, OnEnteredWaterDelegate) == 208, "Offset mismatch for UBuoyancyComponent::OnEnteredWaterDelegate");
static_assert(offsetof(UBuoyancyComponent, OnExitedWaterDelegate) == 224, "Offset mismatch for UBuoyancyComponent::OnExitedWaterDelegate");
static_assert(offsetof(UBuoyancyComponent, BuoyancyData) == 240, "Offset mismatch for UBuoyancyComponent::BuoyancyData");
static_assert(offsetof(UBuoyancyComponent, CurrentWaterBodyComponents) == 384, "Offset mismatch for UBuoyancyComponent::CurrentWaterBodyComponents");
static_assert(offsetof(UBuoyancyComponent, SimulatingComponent) == 400, "Offset mismatch for UBuoyancyComponent::SimulatingComponent");

// /Script/Water.BuoyancyManager
// Kind: Class; super: Actor
class UBuoyancyManager
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    TArray<void*> BuoyancyComponents; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBuoyancyManager, BuoyancyComponents) == 640, "Offset mismatch for UBuoyancyManager::BuoyancyComponents");

// /Script/Water.CustomMeshGenerator
// Kind: Class; super: WaterBodyGenerator
class UCustomMeshGenerator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MeshComp; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomMeshGenerator, MeshComp) == 40, "Offset mismatch for UCustomMeshGenerator::MeshComp");

// /Script/Water.EnvQueryTest_InsideWaterBody
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_InsideWaterBody
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bIncludeWaves; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSimpleWaves; // 0x01F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreExclusionVolumes; // 0x01FA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQueryTest_InsideWaterBody, bIncludeWaves) == 504, "Offset mismatch for UEnvQueryTest_InsideWaterBody::bIncludeWaves");
static_assert(offsetof(UEnvQueryTest_InsideWaterBody, bSimpleWaves) == 505, "Offset mismatch for UEnvQueryTest_InsideWaterBody::bSimpleWaves");
static_assert(offsetof(UEnvQueryTest_InsideWaterBody, bIgnoreExclusionVolumes) == 506, "Offset mismatch for UEnvQueryTest_InsideWaterBody::bIgnoreExclusionVolumes");

// /Script/Water.GerstnerWaterWaveGeneratorBase
// Kind: Class; super: Object
class UGerstnerWaterWaveGeneratorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Water.GerstnerWaterWaveGeneratorSimple
// Kind: Class; super: GerstnerWaterWaveGeneratorBase
class UGerstnerWaterWaveGeneratorSimple
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumWaves; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t Seed; // 0x002C (Size: 0x4, Type: IntProperty)
    float Randomness; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MinWavelength; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MaxWavelength; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float WavelengthFalloff; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MinAmplitude; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float MaxAmplitude; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float AmplitudeFalloff; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float WindAngleDeg; // 0x004C (Size: 0x4, Type: FloatProperty)
    float DirectionAngularSpreadDeg; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float SmallWaveSteepness; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float LargeWaveSteepness; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float SteepnessFalloff; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, NumWaves) == 40, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::NumWaves");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, Seed) == 44, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::Seed");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, Randomness) == 48, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::Randomness");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, MinWavelength) == 52, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::MinWavelength");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, MaxWavelength) == 56, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::MaxWavelength");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, WavelengthFalloff) == 60, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::WavelengthFalloff");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, MinAmplitude) == 64, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::MinAmplitude");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, MaxAmplitude) == 68, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::MaxAmplitude");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, AmplitudeFalloff) == 72, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::AmplitudeFalloff");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, WindAngleDeg) == 76, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::WindAngleDeg");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, DirectionAngularSpreadDeg) == 80, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::DirectionAngularSpreadDeg");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, SmallWaveSteepness) == 84, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::SmallWaveSteepness");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, LargeWaveSteepness) == 88, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::LargeWaveSteepness");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, SteepnessFalloff) == 92, "Offset mismatch for UGerstnerWaterWaveGeneratorSimple::SteepnessFalloff");

// /Script/Water.GerstnerWaterWaveGeneratorSpectrum
// Kind: Class; super: GerstnerWaterWaveGeneratorBase
class UGerstnerWaterWaveGeneratorSpectrum
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SpectrumType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> Octaves; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGerstnerWaterWaveGeneratorSpectrum, SpectrumType) == 40, "Offset mismatch for UGerstnerWaterWaveGeneratorSpectrum::SpectrumType");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSpectrum, Octaves) == 48, "Offset mismatch for UGerstnerWaterWaveGeneratorSpectrum::Octaves");

// /Script/Water.GerstnerWaterWaveSubsystem
// Kind: Class; super: EngineSubsystem
class UGerstnerWaterWaveSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Water.GerstnerWaterWaves
// Kind: Class; super: WaterWaves
class UGerstnerWaterWaves
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GerstnerWaveGenerator; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GerstnerWaves; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    float MaxWaveHeight; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGerstnerWaterWaves, GerstnerWaveGenerator) == 40, "Offset mismatch for UGerstnerWaterWaves::GerstnerWaveGenerator");
static_assert(offsetof(UGerstnerWaterWaves, GerstnerWaves) == 48, "Offset mismatch for UGerstnerWaterWaves::GerstnerWaves");
static_assert(offsetof(UGerstnerWaterWaves, MaxWaveHeight) == 64, "Offset mismatch for UGerstnerWaterWaves::MaxWaveHeight");

// /Script/Water.LakeCollisionComponent
// Kind: Class; super: PrimitiveComponent
class ULakeCollisionComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* CachedBodySetup; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoxExtent[0x1]; // 0x0578 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULakeCollisionComponent, CachedBodySetup) == 1392, "Offset mismatch for ULakeCollisionComponent::CachedBodySetup");
static_assert(offsetof(ULakeCollisionComponent, BoxExtent) == 1400, "Offset mismatch for ULakeCollisionComponent::BoxExtent");

// /Script/Water.LakeGenerator
// Kind: Class; super: WaterBodyGenerator
class ULakeGenerator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* LakeMeshComp; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* LakeCollisionComp; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* LakeCollision; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULakeGenerator, LakeMeshComp) == 40, "Offset mismatch for ULakeGenerator::LakeMeshComp");
static_assert(offsetof(ULakeGenerator, LakeCollisionComp) == 48, "Offset mismatch for ULakeGenerator::LakeCollisionComp");
static_assert(offsetof(ULakeGenerator, LakeCollision) == 56, "Offset mismatch for ULakeGenerator::LakeCollision");

// /Script/Water.NiagaraDataInterfaceWater
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceWater
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bFindWaterBodyOnSpawn; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEvaluateSystemDepth; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEvaluateSystemDepthPerFrame; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x003B
    TSoftObjectPtr<void> SourceBodyComponent; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceWater, bFindWaterBodyOnSpawn) == 56, "Offset mismatch for UNiagaraDataInterfaceWater::bFindWaterBodyOnSpawn");
static_assert(offsetof(UNiagaraDataInterfaceWater, bEvaluateSystemDepth) == 57, "Offset mismatch for UNiagaraDataInterfaceWater::bEvaluateSystemDepth");
static_assert(offsetof(UNiagaraDataInterfaceWater, bEvaluateSystemDepthPerFrame) == 58, "Offset mismatch for UNiagaraDataInterfaceWater::bEvaluateSystemDepthPerFrame");
static_assert(offsetof(UNiagaraDataInterfaceWater, SourceBodyComponent) == 64, "Offset mismatch for UNiagaraDataInterfaceWater::SourceBodyComponent");

// /Script/Water.NiagaraWaterFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UNiagaraWaterFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Water.OceanBoxCollisionComponent
// Kind: Class; super: BoxComponent
class UOceanBoxCollisionComponent
{
public:
    std::uint8_t Pad_0000[0x590]; // 0x0000
    std::uint8_t BoxExtent[0x1]; // 0x0590 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOceanBoxCollisionComponent, BoxExtent) == 1424, "Offset mismatch for UOceanBoxCollisionComponent::BoxExtent");

// /Script/Water.OceanCollisionComponent
// Kind: Class; super: PrimitiveComponent
class UOceanCollisionComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* CachedBodySetup; // 0x0570 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOceanCollisionComponent, CachedBodySetup) == 1392, "Offset mismatch for UOceanCollisionComponent::CachedBodySetup");

// /Script/Water.OceanGenerator
// Kind: Class; super: WaterBodyGenerator
class UOceanGenerator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CollisionBoxes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionHullSets; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOceanGenerator, CollisionBoxes) == 40, "Offset mismatch for UOceanGenerator::CollisionBoxes");
static_assert(offsetof(UOceanGenerator, CollisionHullSets) == 56, "Offset mismatch for UOceanGenerator::CollisionHullSets");

// /Script/Water.RiverGenerator
// Kind: Class; super: WaterBodyGenerator
class URiverGenerator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SplineMeshComponents; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URiverGenerator, SplineMeshComponents) == 40, "Offset mismatch for URiverGenerator::SplineMeshComponents");

// /Script/Water.ShallowWaterSimulationData
// Kind: Class; super: ShallowWaterSimulationDataBase
class UShallowWaterSimulationData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> ArrayValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UShallowWaterSimulationData, ArrayValues) == 96, "Offset mismatch for UShallowWaterSimulationData::ArrayValues");

// /Script/Water.ShallowWaterSimulationData16
// Kind: Class; super: ShallowWaterSimulationDataBase
class UShallowWaterSimulationData16
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> ArrayValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UShallowWaterSimulationData16, ArrayValues) == 96, "Offset mismatch for UShallowWaterSimulationData16::ArrayValues");

// /Script/Water.ShallowWaterSimulationDataBase
// Kind: Class; super: Object
class UShallowWaterSimulationDataBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NumCells[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Size[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    void* BakedTexture; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UShallowWaterSimulationDataBase, NumCells) == 40, "Offset mismatch for UShallowWaterSimulationDataBase::NumCells");
static_assert(offsetof(UShallowWaterSimulationDataBase, Position) == 48, "Offset mismatch for UShallowWaterSimulationDataBase::Position");
static_assert(offsetof(UShallowWaterSimulationDataBase, Size) == 72, "Offset mismatch for UShallowWaterSimulationDataBase::Size");
static_assert(offsetof(UShallowWaterSimulationDataBase, BakedTexture) == 88, "Offset mismatch for UShallowWaterSimulationDataBase::BakedTexture");

// /Script/Water.ShallowWaterSimulationDataSparse
// Kind: Class; super: ShallowWaterSimulationDataBase
class UShallowWaterSimulationDataSparse
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> BlockValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> GridIndexToBlockIndex; // 0x0070 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UShallowWaterSimulationDataSparse, BlockValues) == 96, "Offset mismatch for UShallowWaterSimulationDataSparse::BlockValues");
static_assert(offsetof(UShallowWaterSimulationDataSparse, GridIndexToBlockIndex) == 112, "Offset mismatch for UShallowWaterSimulationDataSparse::GridIndexToBlockIndex");

// /Script/Water.UnderwaterPostProcessVolume
// Kind: Class; super: Object
class UUnderwaterPostProcessVolume
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Water.WaterBody
// Kind: Class; super: Actor
class UWaterBody
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* SplineComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* WaterSplineMetadata; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* WaterBodyComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WaterBodyIndex; // 0x0290 (Size: 0x4, Type: IntProperty)
    std::uint8_t WaterBodyType; // 0x0294 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0295
    void* WaterWaves; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* WaterInfoMeshComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* DilatedWaterInfoMeshComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WaterBodyStaticMeshComponents; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    void* WaterBodyRiverComponentClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyLakeComponentClass; // 0x02C8 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyOceanComponentClass; // 0x02D0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyCustomComponentClass; // 0x02D8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UWaterBody, SplineComp) == 632, "Offset mismatch for UWaterBody::SplineComp");
static_assert(offsetof(UWaterBody, WaterSplineMetadata) == 640, "Offset mismatch for UWaterBody::WaterSplineMetadata");
static_assert(offsetof(UWaterBody, WaterBodyComponent) == 648, "Offset mismatch for UWaterBody::WaterBodyComponent");
static_assert(offsetof(UWaterBody, WaterBodyIndex) == 656, "Offset mismatch for UWaterBody::WaterBodyIndex");
static_assert(offsetof(UWaterBody, WaterBodyType) == 660, "Offset mismatch for UWaterBody::WaterBodyType");
static_assert(offsetof(UWaterBody, WaterWaves) == 664, "Offset mismatch for UWaterBody::WaterWaves");
static_assert(offsetof(UWaterBody, WaterInfoMeshComponent) == 672, "Offset mismatch for UWaterBody::WaterInfoMeshComponent");
static_assert(offsetof(UWaterBody, DilatedWaterInfoMeshComponent) == 680, "Offset mismatch for UWaterBody::DilatedWaterInfoMeshComponent");
static_assert(offsetof(UWaterBody, WaterBodyStaticMeshComponents) == 688, "Offset mismatch for UWaterBody::WaterBodyStaticMeshComponents");
static_assert(offsetof(UWaterBody, WaterBodyRiverComponentClass) == 704, "Offset mismatch for UWaterBody::WaterBodyRiverComponentClass");
static_assert(offsetof(UWaterBody, WaterBodyLakeComponentClass) == 712, "Offset mismatch for UWaterBody::WaterBodyLakeComponentClass");
static_assert(offsetof(UWaterBody, WaterBodyOceanComponentClass) == 720, "Offset mismatch for UWaterBody::WaterBodyOceanComponentClass");
static_assert(offsetof(UWaterBody, WaterBodyCustomComponentClass) == 728, "Offset mismatch for UWaterBody::WaterBodyCustomComponentClass");

// /Script/Water.WaterBodyComponent
// Kind: Class; super: PrimitiveComponent
class UWaterBodyComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    float TargetWaveMaskDepth; // 0x0570 (Size: 0x4, Type: FloatProperty)
    float MaxWaveHeightOffset; // 0x0574 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0578
    std::uint8_t UnderwaterPostProcessSettings[0x7D0]; // 0x0580 (Size: 0x7D0, Type: StructProperty)
    std::uint8_t CurveSettings[0x20]; // 0x0D50 (Size: 0x20, Type: StructProperty)
    void* WaterMaterial; // 0x0D70 (Size: 0x8, Type: ObjectProperty)
    void* WaterHLODMaterial; // 0x0D78 (Size: 0x8, Type: ObjectProperty)
    void* WaterStaticMeshMaterial; // 0x0D80 (Size: 0x8, Type: ObjectProperty)
    void* UnderwaterPostProcessMaterial; // 0x0D88 (Size: 0x8, Type: ObjectProperty)
    void* WaterInfoMaterial; // 0x0D90 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WaterHeightmapSettings[0x98]; // 0x0D98 (Size: 0x98, Type: StructProperty)
    TMap<void*, void*> LayerWeightmapSettings; // 0x0E30 (Size: 0x10, Type: MapProperty)
    float ShapeDilation; // 0x0E40 (Size: 0x4, Type: FloatProperty)
    float CollisionHeightOffset; // 0x0E44 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAffectsLandscape; // 0x0E48 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0E49
    std::uint8_t StaticMeshSettings[0x10]; // 0x0E50 (Size: 0x10, Type: StructProperty)
    std::int32_t WaterBodyIndex; // 0x0E60 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0E64
    void* WaterMeshOverride; // 0x0E68 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAlwaysGenerateWaterMeshTiles; // 0x0E70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0E71
    std::int32_t OverlapMaterialPriority; // 0x0E74 (Size: 0x4, Type: IntProperty)
    void* WaterSplineMetadata; // 0x0E78 (Size: 0x8, Type: ObjectProperty)
    void* WaterMID; // 0x0E80 (Size: 0x8, Type: ObjectProperty)
    void* WaterStaticMeshMID; // 0x0E88 (Size: 0x8, Type: ObjectProperty)
    void* UnderwaterPostProcessMID; // 0x0E90 (Size: 0x8, Type: ObjectProperty)
    void* WaterInfoMID; // 0x0E98 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WaterBodyIslands; // 0x0EA0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WaterBodyExclusionVolumes; // 0x0EB0 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> Landscape; // 0x0EC0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t OwningWaterZone[0x20]; // 0x0EC8 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> WaterZoneOverride; // 0x0EE8 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t CurrentPostProcessSettings[0x7B0]; // 0x0F10 (Size: 0x7B0, Type: StructProperty)
    void* WaterNavAreaClass; // 0x16C0 (Size: 0x8, Type: ClassProperty)
    double FixedWaterDepth; // 0x16C8 (Size: 0x8, Type: DoubleProperty)
    TWeakObjectPtr<void> BakedShallowWaterSim; // 0x16D0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bUseBakedSimForQueriesAndPhysics; // 0x16D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWaterBodyComponent, TargetWaveMaskDepth) == 1392, "Offset mismatch for UWaterBodyComponent::TargetWaveMaskDepth");
static_assert(offsetof(UWaterBodyComponent, MaxWaveHeightOffset) == 1396, "Offset mismatch for UWaterBodyComponent::MaxWaveHeightOffset");
static_assert(offsetof(UWaterBodyComponent, UnderwaterPostProcessSettings) == 1408, "Offset mismatch for UWaterBodyComponent::UnderwaterPostProcessSettings");
static_assert(offsetof(UWaterBodyComponent, CurveSettings) == 3408, "Offset mismatch for UWaterBodyComponent::CurveSettings");
static_assert(offsetof(UWaterBodyComponent, WaterMaterial) == 3440, "Offset mismatch for UWaterBodyComponent::WaterMaterial");
static_assert(offsetof(UWaterBodyComponent, WaterHLODMaterial) == 3448, "Offset mismatch for UWaterBodyComponent::WaterHLODMaterial");
static_assert(offsetof(UWaterBodyComponent, WaterStaticMeshMaterial) == 3456, "Offset mismatch for UWaterBodyComponent::WaterStaticMeshMaterial");
static_assert(offsetof(UWaterBodyComponent, UnderwaterPostProcessMaterial) == 3464, "Offset mismatch for UWaterBodyComponent::UnderwaterPostProcessMaterial");
static_assert(offsetof(UWaterBodyComponent, WaterInfoMaterial) == 3472, "Offset mismatch for UWaterBodyComponent::WaterInfoMaterial");
static_assert(offsetof(UWaterBodyComponent, WaterHeightmapSettings) == 3480, "Offset mismatch for UWaterBodyComponent::WaterHeightmapSettings");
static_assert(offsetof(UWaterBodyComponent, LayerWeightmapSettings) == 3632, "Offset mismatch for UWaterBodyComponent::LayerWeightmapSettings");
static_assert(offsetof(UWaterBodyComponent, ShapeDilation) == 3648, "Offset mismatch for UWaterBodyComponent::ShapeDilation");
static_assert(offsetof(UWaterBodyComponent, CollisionHeightOffset) == 3652, "Offset mismatch for UWaterBodyComponent::CollisionHeightOffset");
static_assert(offsetof(UWaterBodyComponent, bAffectsLandscape) == 3656, "Offset mismatch for UWaterBodyComponent::bAffectsLandscape");
static_assert(offsetof(UWaterBodyComponent, StaticMeshSettings) == 3664, "Offset mismatch for UWaterBodyComponent::StaticMeshSettings");
static_assert(offsetof(UWaterBodyComponent, WaterBodyIndex) == 3680, "Offset mismatch for UWaterBodyComponent::WaterBodyIndex");
static_assert(offsetof(UWaterBodyComponent, WaterMeshOverride) == 3688, "Offset mismatch for UWaterBodyComponent::WaterMeshOverride");
static_assert(offsetof(UWaterBodyComponent, bAlwaysGenerateWaterMeshTiles) == 3696, "Offset mismatch for UWaterBodyComponent::bAlwaysGenerateWaterMeshTiles");
static_assert(offsetof(UWaterBodyComponent, OverlapMaterialPriority) == 3700, "Offset mismatch for UWaterBodyComponent::OverlapMaterialPriority");
static_assert(offsetof(UWaterBodyComponent, WaterSplineMetadata) == 3704, "Offset mismatch for UWaterBodyComponent::WaterSplineMetadata");
static_assert(offsetof(UWaterBodyComponent, WaterMID) == 3712, "Offset mismatch for UWaterBodyComponent::WaterMID");
static_assert(offsetof(UWaterBodyComponent, WaterStaticMeshMID) == 3720, "Offset mismatch for UWaterBodyComponent::WaterStaticMeshMID");
static_assert(offsetof(UWaterBodyComponent, UnderwaterPostProcessMID) == 3728, "Offset mismatch for UWaterBodyComponent::UnderwaterPostProcessMID");
static_assert(offsetof(UWaterBodyComponent, WaterInfoMID) == 3736, "Offset mismatch for UWaterBodyComponent::WaterInfoMID");
static_assert(offsetof(UWaterBodyComponent, WaterBodyIslands) == 3744, "Offset mismatch for UWaterBodyComponent::WaterBodyIslands");
static_assert(offsetof(UWaterBodyComponent, WaterBodyExclusionVolumes) == 3760, "Offset mismatch for UWaterBodyComponent::WaterBodyExclusionVolumes");
static_assert(offsetof(UWaterBodyComponent, Landscape) == 3776, "Offset mismatch for UWaterBodyComponent::Landscape");
static_assert(offsetof(UWaterBodyComponent, OwningWaterZone) == 3784, "Offset mismatch for UWaterBodyComponent::OwningWaterZone");
static_assert(offsetof(UWaterBodyComponent, WaterZoneOverride) == 3816, "Offset mismatch for UWaterBodyComponent::WaterZoneOverride");
static_assert(offsetof(UWaterBodyComponent, CurrentPostProcessSettings) == 3856, "Offset mismatch for UWaterBodyComponent::CurrentPostProcessSettings");
static_assert(offsetof(UWaterBodyComponent, WaterNavAreaClass) == 5824, "Offset mismatch for UWaterBodyComponent::WaterNavAreaClass");
static_assert(offsetof(UWaterBodyComponent, FixedWaterDepth) == 5832, "Offset mismatch for UWaterBodyComponent::FixedWaterDepth");
static_assert(offsetof(UWaterBodyComponent, BakedShallowWaterSim) == 5840, "Offset mismatch for UWaterBodyComponent::BakedShallowWaterSim");
static_assert(offsetof(UWaterBodyComponent, bUseBakedSimForQueriesAndPhysics) == 5848, "Offset mismatch for UWaterBodyComponent::bUseBakedSimForQueriesAndPhysics");

// /Script/Water.WaterBodyCustom
// Kind: Class; super: WaterBody
class UWaterBodyCustom
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* SplineComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* WaterSplineMetadata; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* WaterBodyComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WaterBodyIndex; // 0x0290 (Size: 0x4, Type: IntProperty)
    std::uint8_t WaterBodyType; // 0x0294 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0295
    void* WaterWaves; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* WaterInfoMeshComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* DilatedWaterInfoMeshComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WaterBodyStaticMeshComponents; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    void* WaterBodyRiverComponentClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyLakeComponentClass; // 0x02C8 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyOceanComponentClass; // 0x02D0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyCustomComponentClass; // 0x02D8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UWaterBodyCustom, SplineComp) == 632, "Offset mismatch for UWaterBodyCustom::SplineComp");
static_assert(offsetof(UWaterBodyCustom, WaterSplineMetadata) == 640, "Offset mismatch for UWaterBodyCustom::WaterSplineMetadata");
static_assert(offsetof(UWaterBodyCustom, WaterBodyComponent) == 648, "Offset mismatch for UWaterBodyCustom::WaterBodyComponent");
static_assert(offsetof(UWaterBodyCustom, WaterBodyIndex) == 656, "Offset mismatch for UWaterBodyCustom::WaterBodyIndex");
static_assert(offsetof(UWaterBodyCustom, WaterBodyType) == 660, "Offset mismatch for UWaterBodyCustom::WaterBodyType");
static_assert(offsetof(UWaterBodyCustom, WaterWaves) == 664, "Offset mismatch for UWaterBodyCustom::WaterWaves");
static_assert(offsetof(UWaterBodyCustom, WaterInfoMeshComponent) == 672, "Offset mismatch for UWaterBodyCustom::WaterInfoMeshComponent");
static_assert(offsetof(UWaterBodyCustom, DilatedWaterInfoMeshComponent) == 680, "Offset mismatch for UWaterBodyCustom::DilatedWaterInfoMeshComponent");
static_assert(offsetof(UWaterBodyCustom, WaterBodyStaticMeshComponents) == 688, "Offset mismatch for UWaterBodyCustom::WaterBodyStaticMeshComponents");
static_assert(offsetof(UWaterBodyCustom, WaterBodyRiverComponentClass) == 704, "Offset mismatch for UWaterBodyCustom::WaterBodyRiverComponentClass");
static_assert(offsetof(UWaterBodyCustom, WaterBodyLakeComponentClass) == 712, "Offset mismatch for UWaterBodyCustom::WaterBodyLakeComponentClass");
static_assert(offsetof(UWaterBodyCustom, WaterBodyOceanComponentClass) == 720, "Offset mismatch for UWaterBodyCustom::WaterBodyOceanComponentClass");
static_assert(offsetof(UWaterBodyCustom, WaterBodyCustomComponentClass) == 728, "Offset mismatch for UWaterBodyCustom::WaterBodyCustomComponentClass");

// /Script/Water.WaterBodyCustomComponent
// Kind: Class; super: WaterBodyComponent
class UWaterBodyCustomComponent
{
public:
    std::uint8_t Pad_0000[0x16E0]; // 0x0000
    void* MeshComp; // 0x16E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWaterBodyCustomComponent, MeshComp) == 5856, "Offset mismatch for UWaterBodyCustomComponent::MeshComp");

// /Script/Water.WaterBodyExclusionVolume
// Kind: Class; super: PhysicsVolume
class UWaterBodyExclusionVolume
{
public:
    std::uint8_t Pad_0000[0x2B8]; // 0x0000
    std::uint8_t ExclusionMode; // 0x02B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02B9
    TArray<void*> WaterBodies; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWaterBodyExclusionVolume, ExclusionMode) == 696, "Offset mismatch for UWaterBodyExclusionVolume::ExclusionMode");
static_assert(offsetof(UWaterBodyExclusionVolume, WaterBodies) == 704, "Offset mismatch for UWaterBodyExclusionVolume::WaterBodies");

// /Script/Water.WaterBodyGenerator
// Kind: Class; super: Object
class UWaterBodyGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Water.WaterBodyHLODBuilder
// Kind: Class; super: HLODBuilder
class UWaterBodyHLODBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Water.WaterBodyInfoMeshComponent
// Kind: Class; super: WaterBodyMeshComponent
class UWaterBodyInfoMeshComponent
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    std::uint8_t bIsDilatedMesh; // 0x06B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsConservativeRasterCompatible; // 0x06B1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWaterBodyInfoMeshComponent, bIsDilatedMesh) == 1712, "Offset mismatch for UWaterBodyInfoMeshComponent::bIsDilatedMesh");
static_assert(offsetof(UWaterBodyInfoMeshComponent, bIsConservativeRasterCompatible) == 1713, "Offset mismatch for UWaterBodyInfoMeshComponent::bIsConservativeRasterCompatible");

// /Script/Water.WaterBodyIsland
// Kind: Class; super: Actor
class UWaterBodyIsland
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t WaterCurveSettings[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    std::uint8_t WaterHeightmapSettings[0x98]; // 0x0298 (Size: 0x98, Type: StructProperty)
    TMap<void*, void*> WaterWeightmapSettings; // 0x0330 (Size: 0x10, Type: MapProperty)
    void* SplineComp; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWaterBodyIsland, WaterCurveSettings) == 632, "Offset mismatch for UWaterBodyIsland::WaterCurveSettings");
static_assert(offsetof(UWaterBodyIsland, WaterHeightmapSettings) == 664, "Offset mismatch for UWaterBodyIsland::WaterHeightmapSettings");
static_assert(offsetof(UWaterBodyIsland, WaterWeightmapSettings) == 816, "Offset mismatch for UWaterBodyIsland::WaterWeightmapSettings");
static_assert(offsetof(UWaterBodyIsland, SplineComp) == 832, "Offset mismatch for UWaterBodyIsland::SplineComp");

// /Script/Water.WaterBodyLake
// Kind: Class; super: WaterBody
class UWaterBodyLake
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* SplineComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* WaterSplineMetadata; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* WaterBodyComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WaterBodyIndex; // 0x0290 (Size: 0x4, Type: IntProperty)
    std::uint8_t WaterBodyType; // 0x0294 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0295
    void* WaterWaves; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* WaterInfoMeshComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* DilatedWaterInfoMeshComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WaterBodyStaticMeshComponents; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    void* WaterBodyRiverComponentClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyLakeComponentClass; // 0x02C8 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyOceanComponentClass; // 0x02D0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyCustomComponentClass; // 0x02D8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UWaterBodyLake, SplineComp) == 632, "Offset mismatch for UWaterBodyLake::SplineComp");
static_assert(offsetof(UWaterBodyLake, WaterSplineMetadata) == 640, "Offset mismatch for UWaterBodyLake::WaterSplineMetadata");
static_assert(offsetof(UWaterBodyLake, WaterBodyComponent) == 648, "Offset mismatch for UWaterBodyLake::WaterBodyComponent");
static_assert(offsetof(UWaterBodyLake, WaterBodyIndex) == 656, "Offset mismatch for UWaterBodyLake::WaterBodyIndex");
static_assert(offsetof(UWaterBodyLake, WaterBodyType) == 660, "Offset mismatch for UWaterBodyLake::WaterBodyType");
static_assert(offsetof(UWaterBodyLake, WaterWaves) == 664, "Offset mismatch for UWaterBodyLake::WaterWaves");
static_assert(offsetof(UWaterBodyLake, WaterInfoMeshComponent) == 672, "Offset mismatch for UWaterBodyLake::WaterInfoMeshComponent");
static_assert(offsetof(UWaterBodyLake, DilatedWaterInfoMeshComponent) == 680, "Offset mismatch for UWaterBodyLake::DilatedWaterInfoMeshComponent");
static_assert(offsetof(UWaterBodyLake, WaterBodyStaticMeshComponents) == 688, "Offset mismatch for UWaterBodyLake::WaterBodyStaticMeshComponents");
static_assert(offsetof(UWaterBodyLake, WaterBodyRiverComponentClass) == 704, "Offset mismatch for UWaterBodyLake::WaterBodyRiverComponentClass");
static_assert(offsetof(UWaterBodyLake, WaterBodyLakeComponentClass) == 712, "Offset mismatch for UWaterBodyLake::WaterBodyLakeComponentClass");
static_assert(offsetof(UWaterBodyLake, WaterBodyOceanComponentClass) == 720, "Offset mismatch for UWaterBodyLake::WaterBodyOceanComponentClass");
static_assert(offsetof(UWaterBodyLake, WaterBodyCustomComponentClass) == 728, "Offset mismatch for UWaterBodyLake::WaterBodyCustomComponentClass");

// /Script/Water.WaterBodyLakeComponent
// Kind: Class; super: WaterBodyComponent
class UWaterBodyLakeComponent
{
public:
    std::uint8_t Pad_0000[0x16E0]; // 0x0000
    void* LakeMeshComp; // 0x16E0 (Size: 0x8, Type: ObjectProperty)
    void* LakeCollision; // 0x16E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWaterBodyLakeComponent, LakeMeshComp) == 5856, "Offset mismatch for UWaterBodyLakeComponent::LakeMeshComp");
static_assert(offsetof(UWaterBodyLakeComponent, LakeCollision) == 5864, "Offset mismatch for UWaterBodyLakeComponent::LakeCollision");

// /Script/Water.WaterBodyMeshComponent
// Kind: Class; super: StaticMeshComponent
class UWaterBodyMeshComponent
{
public:
    std::uint8_t Pad_0000[0x5D8]; // 0x0000
    std::int32_t ForcedLodModel; // 0x05D8 (Size: 0x4, Type: IntProperty)
    std::int32_t MinLOD; // 0x05DC (Size: 0x4, Type: IntProperty)
    std::int32_t SubDivisionStepSize; // 0x05E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t WireframeColorOverride[0x4]; // 0x05E4 (Size: 0x4, Type: StructProperty)
    void* StaticMesh; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WorldPositionOffsetDisableDistance; // 0x05F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDisallowNanite; // 0x05F4 (Size: 0x1, Type: BoolProperty)
    // 0x05F4 BoolProperty bEvaluateWorldPositionOffset (shared storage)
    // 0x05F4 BoolProperty bEvaluateWorldPositionOffsetInRayTracing (shared storage)
    // 0x05F4 BoolProperty bForceDisableNanite (shared storage)
    // 0x05F4 BoolProperty bForceNaniteForMasked (shared storage)
    // 0x05F4 BoolProperty bWorldPositionOffsetWritesVelocity (shared storage)
    std::uint8_t bForceNavigationObstacle; // 0x05F5 (Size: 0x1, Type: BoolProperty)
    // 0x05F5 BoolProperty bOverrideMinLOD (shared storage)
    // 0x05F5 BoolProperty bOverrideNavAreaClass (shared storage)
    // 0x05F5 BoolProperty bOverrideNavigationExport (shared storage)
    // 0x05F5 BoolProperty bOverrideWireframeColor (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x05F6
    void* NavAreaClass; // 0x05F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bCastDistanceFieldIndirectShadow; // 0x0600 (Size: 0x1, Type: BoolProperty)
    // 0x0600 BoolProperty bDisallowMeshPaintPerInstance (shared storage)
    // 0x0600 BoolProperty bIgnoreInstanceForTextureStreaming (shared storage)
    // 0x0600 BoolProperty bOverrideDistanceFieldSelfShadowBias (shared storage)
    // 0x0600 BoolProperty bOverrideLightMapRes (shared storage)
    // 0x0600 BoolProperty bSortTriangles (shared storage)
    // 0x0600 BoolProperty bUseDefaultCollision (shared storage)
    // 0x0600 BoolProperty bUseSubDivisions (shared storage)
    std::uint8_t bEnableTextureColorMeshPainting; // 0x0601 (Size: 0x1, Type: BoolProperty)
    // 0x0601 BoolProperty bEnableVertexColorMeshPainting (shared storage)
    // 0x0601 BoolProperty bOverrideMeshPaintTextureCoordinateIndex (shared storage)
    // 0x0601 BoolProperty bOverrideMeshPaintTextureResolution (shared storage)
    // 0x0601 BoolProperty bReverseCulling (shared storage)
    // 0x0601 BoolProperty bWritesToMaterialCache (shared storage)
    std::uint8_t Pad_0002[0x2]; // 0x0602
    std::int32_t OverriddenMeshPaintTextureCoordinateIndex; // 0x0604 (Size: 0x4, Type: IntProperty)
    std::int32_t OverriddenMeshPaintTextureResolution; // 0x0608 (Size: 0x4, Type: IntProperty)
    std::int32_t OverriddenLightMapRes; // 0x060C (Size: 0x4, Type: IntProperty)
    void* MeshPaintTextureCooked; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* MeshPaintTextureOverride; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialCacheTileCount[0x8]; // 0x0620 (Size: 0x8, Type: StructProperty)
    std::uint8_t MaterialCacheUVRegion[0x14]; // 0x0628 (Size: 0x14, Type: StructProperty)
    std::int32_t MaterialCacheUVCoordinateIndex; // 0x063C (Size: 0x4, Type: IntProperty)
    TArray<void*> MaterialCacheTextures; // 0x0640 (Size: 0x10, Type: ArrayProperty)
    float DistanceFieldIndirectShadowMinVisibility; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float DistanceFieldSelfShadowBias; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float StreamingDistanceMultiplier; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float NanitePixelProgrammableDistance; // 0x065C (Size: 0x4, Type: FloatProperty)
    TArray<void*> LODData; // 0x0660 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StreamingTextureData; // 0x0670 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LightmassSettings[0x1]; // 0x0680 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWaterBodyMeshComponent, ForcedLodModel) == 1496, "Offset mismatch for UWaterBodyMeshComponent::ForcedLodModel");
static_assert(offsetof(UWaterBodyMeshComponent, MinLOD) == 1500, "Offset mismatch for UWaterBodyMeshComponent::MinLOD");
static_assert(offsetof(UWaterBodyMeshComponent, SubDivisionStepSize) == 1504, "Offset mismatch for UWaterBodyMeshComponent::SubDivisionStepSize");
static_assert(offsetof(UWaterBodyMeshComponent, WireframeColorOverride) == 1508, "Offset mismatch for UWaterBodyMeshComponent::WireframeColorOverride");
static_assert(offsetof(UWaterBodyMeshComponent, StaticMesh) == 1512, "Offset mismatch for UWaterBodyMeshComponent::StaticMesh");
static_assert(offsetof(UWaterBodyMeshComponent, WorldPositionOffsetDisableDistance) == 1520, "Offset mismatch for UWaterBodyMeshComponent::WorldPositionOffsetDisableDistance");
static_assert(offsetof(UWaterBodyMeshComponent, bDisallowNanite) == 1524, "Offset mismatch for UWaterBodyMeshComponent::bDisallowNanite");
static_assert(offsetof(UWaterBodyMeshComponent, bForceNavigationObstacle) == 1525, "Offset mismatch for UWaterBodyMeshComponent::bForceNavigationObstacle");
static_assert(offsetof(UWaterBodyMeshComponent, NavAreaClass) == 1528, "Offset mismatch for UWaterBodyMeshComponent::NavAreaClass");
static_assert(offsetof(UWaterBodyMeshComponent, bCastDistanceFieldIndirectShadow) == 1536, "Offset mismatch for UWaterBodyMeshComponent::bCastDistanceFieldIndirectShadow");
static_assert(offsetof(UWaterBodyMeshComponent, bEnableTextureColorMeshPainting) == 1537, "Offset mismatch for UWaterBodyMeshComponent::bEnableTextureColorMeshPainting");
static_assert(offsetof(UWaterBodyMeshComponent, OverriddenMeshPaintTextureCoordinateIndex) == 1540, "Offset mismatch for UWaterBodyMeshComponent::OverriddenMeshPaintTextureCoordinateIndex");
static_assert(offsetof(UWaterBodyMeshComponent, OverriddenMeshPaintTextureResolution) == 1544, "Offset mismatch for UWaterBodyMeshComponent::OverriddenMeshPaintTextureResolution");
static_assert(offsetof(UWaterBodyMeshComponent, OverriddenLightMapRes) == 1548, "Offset mismatch for UWaterBodyMeshComponent::OverriddenLightMapRes");
static_assert(offsetof(UWaterBodyMeshComponent, MeshPaintTextureCooked) == 1552, "Offset mismatch for UWaterBodyMeshComponent::MeshPaintTextureCooked");
static_assert(offsetof(UWaterBodyMeshComponent, MeshPaintTextureOverride) == 1560, "Offset mismatch for UWaterBodyMeshComponent::MeshPaintTextureOverride");
static_assert(offsetof(UWaterBodyMeshComponent, MaterialCacheTileCount) == 1568, "Offset mismatch for UWaterBodyMeshComponent::MaterialCacheTileCount");
static_assert(offsetof(UWaterBodyMeshComponent, MaterialCacheUVRegion) == 1576, "Offset mismatch for UWaterBodyMeshComponent::MaterialCacheUVRegion");
static_assert(offsetof(UWaterBodyMeshComponent, MaterialCacheUVCoordinateIndex) == 1596, "Offset mismatch for UWaterBodyMeshComponent::MaterialCacheUVCoordinateIndex");
static_assert(offsetof(UWaterBodyMeshComponent, MaterialCacheTextures) == 1600, "Offset mismatch for UWaterBodyMeshComponent::MaterialCacheTextures");
static_assert(offsetof(UWaterBodyMeshComponent, DistanceFieldIndirectShadowMinVisibility) == 1616, "Offset mismatch for UWaterBodyMeshComponent::DistanceFieldIndirectShadowMinVisibility");
static_assert(offsetof(UWaterBodyMeshComponent, DistanceFieldSelfShadowBias) == 1620, "Offset mismatch for UWaterBodyMeshComponent::DistanceFieldSelfShadowBias");
static_assert(offsetof(UWaterBodyMeshComponent, StreamingDistanceMultiplier) == 1624, "Offset mismatch for UWaterBodyMeshComponent::StreamingDistanceMultiplier");
static_assert(offsetof(UWaterBodyMeshComponent, NanitePixelProgrammableDistance) == 1628, "Offset mismatch for UWaterBodyMeshComponent::NanitePixelProgrammableDistance");
static_assert(offsetof(UWaterBodyMeshComponent, LODData) == 1632, "Offset mismatch for UWaterBodyMeshComponent::LODData");
static_assert(offsetof(UWaterBodyMeshComponent, StreamingTextureData) == 1648, "Offset mismatch for UWaterBodyMeshComponent::StreamingTextureData");
static_assert(offsetof(UWaterBodyMeshComponent, LightmassSettings) == 1664, "Offset mismatch for UWaterBodyMeshComponent::LightmassSettings");

// /Script/Water.WaterBodyOcean
// Kind: Class; super: WaterBody
class UWaterBodyOcean
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* SplineComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* WaterSplineMetadata; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* WaterBodyComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WaterBodyIndex; // 0x0290 (Size: 0x4, Type: IntProperty)
    std::uint8_t WaterBodyType; // 0x0294 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0295
    void* WaterWaves; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* WaterInfoMeshComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* DilatedWaterInfoMeshComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WaterBodyStaticMeshComponents; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    void* WaterBodyRiverComponentClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyLakeComponentClass; // 0x02C8 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyOceanComponentClass; // 0x02D0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyCustomComponentClass; // 0x02D8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UWaterBodyOcean, SplineComp) == 632, "Offset mismatch for UWaterBodyOcean::SplineComp");
static_assert(offsetof(UWaterBodyOcean, WaterSplineMetadata) == 640, "Offset mismatch for UWaterBodyOcean::WaterSplineMetadata");
static_assert(offsetof(UWaterBodyOcean, WaterBodyComponent) == 648, "Offset mismatch for UWaterBodyOcean::WaterBodyComponent");
static_assert(offsetof(UWaterBodyOcean, WaterBodyIndex) == 656, "Offset mismatch for UWaterBodyOcean::WaterBodyIndex");
static_assert(offsetof(UWaterBodyOcean, WaterBodyType) == 660, "Offset mismatch for UWaterBodyOcean::WaterBodyType");
static_assert(offsetof(UWaterBodyOcean, WaterWaves) == 664, "Offset mismatch for UWaterBodyOcean::WaterWaves");
static_assert(offsetof(UWaterBodyOcean, WaterInfoMeshComponent) == 672, "Offset mismatch for UWaterBodyOcean::WaterInfoMeshComponent");
static_assert(offsetof(UWaterBodyOcean, DilatedWaterInfoMeshComponent) == 680, "Offset mismatch for UWaterBodyOcean::DilatedWaterInfoMeshComponent");
static_assert(offsetof(UWaterBodyOcean, WaterBodyStaticMeshComponents) == 688, "Offset mismatch for UWaterBodyOcean::WaterBodyStaticMeshComponents");
static_assert(offsetof(UWaterBodyOcean, WaterBodyRiverComponentClass) == 704, "Offset mismatch for UWaterBodyOcean::WaterBodyRiverComponentClass");
static_assert(offsetof(UWaterBodyOcean, WaterBodyLakeComponentClass) == 712, "Offset mismatch for UWaterBodyOcean::WaterBodyLakeComponentClass");
static_assert(offsetof(UWaterBodyOcean, WaterBodyOceanComponentClass) == 720, "Offset mismatch for UWaterBodyOcean::WaterBodyOceanComponentClass");
static_assert(offsetof(UWaterBodyOcean, WaterBodyCustomComponentClass) == 728, "Offset mismatch for UWaterBodyOcean::WaterBodyCustomComponentClass");

// /Script/Water.WaterBodyOceanComponent
// Kind: Class; super: WaterBodyComponent
class UWaterBodyOceanComponent
{
public:
    std::uint8_t Pad_0000[0x16E0]; // 0x0000
    TArray<void*> CollisionBoxes; // 0x16E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionHullSets; // 0x16F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CollisionExtents[0x18]; // 0x1700 (Size: 0x18, Type: StructProperty)
    std::uint8_t OceanExtents[0x10]; // 0x1718 (Size: 0x10, Type: StructProperty)
    std::uint8_t SavedZoneLocation[0x10]; // 0x1728 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCenterOnWaterZone; // 0x1738 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1739
    float HeightOffset; // 0x173C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UWaterBodyOceanComponent, CollisionBoxes) == 5856, "Offset mismatch for UWaterBodyOceanComponent::CollisionBoxes");
static_assert(offsetof(UWaterBodyOceanComponent, CollisionHullSets) == 5872, "Offset mismatch for UWaterBodyOceanComponent::CollisionHullSets");
static_assert(offsetof(UWaterBodyOceanComponent, CollisionExtents) == 5888, "Offset mismatch for UWaterBodyOceanComponent::CollisionExtents");
static_assert(offsetof(UWaterBodyOceanComponent, OceanExtents) == 5912, "Offset mismatch for UWaterBodyOceanComponent::OceanExtents");
static_assert(offsetof(UWaterBodyOceanComponent, SavedZoneLocation) == 5928, "Offset mismatch for UWaterBodyOceanComponent::SavedZoneLocation");
static_assert(offsetof(UWaterBodyOceanComponent, bCenterOnWaterZone) == 5944, "Offset mismatch for UWaterBodyOceanComponent::bCenterOnWaterZone");
static_assert(offsetof(UWaterBodyOceanComponent, HeightOffset) == 5948, "Offset mismatch for UWaterBodyOceanComponent::HeightOffset");

// /Script/Water.WaterBodyRiver
// Kind: Class; super: WaterBody
class UWaterBodyRiver
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* SplineComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* WaterSplineMetadata; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* WaterBodyComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WaterBodyIndex; // 0x0290 (Size: 0x4, Type: IntProperty)
    std::uint8_t WaterBodyType; // 0x0294 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0295
    void* WaterWaves; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* WaterInfoMeshComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* DilatedWaterInfoMeshComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WaterBodyStaticMeshComponents; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    void* WaterBodyRiverComponentClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyLakeComponentClass; // 0x02C8 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyOceanComponentClass; // 0x02D0 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyCustomComponentClass; // 0x02D8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UWaterBodyRiver, SplineComp) == 632, "Offset mismatch for UWaterBodyRiver::SplineComp");
static_assert(offsetof(UWaterBodyRiver, WaterSplineMetadata) == 640, "Offset mismatch for UWaterBodyRiver::WaterSplineMetadata");
static_assert(offsetof(UWaterBodyRiver, WaterBodyComponent) == 648, "Offset mismatch for UWaterBodyRiver::WaterBodyComponent");
static_assert(offsetof(UWaterBodyRiver, WaterBodyIndex) == 656, "Offset mismatch for UWaterBodyRiver::WaterBodyIndex");
static_assert(offsetof(UWaterBodyRiver, WaterBodyType) == 660, "Offset mismatch for UWaterBodyRiver::WaterBodyType");
static_assert(offsetof(UWaterBodyRiver, WaterWaves) == 664, "Offset mismatch for UWaterBodyRiver::WaterWaves");
static_assert(offsetof(UWaterBodyRiver, WaterInfoMeshComponent) == 672, "Offset mismatch for UWaterBodyRiver::WaterInfoMeshComponent");
static_assert(offsetof(UWaterBodyRiver, DilatedWaterInfoMeshComponent) == 680, "Offset mismatch for UWaterBodyRiver::DilatedWaterInfoMeshComponent");
static_assert(offsetof(UWaterBodyRiver, WaterBodyStaticMeshComponents) == 688, "Offset mismatch for UWaterBodyRiver::WaterBodyStaticMeshComponents");
static_assert(offsetof(UWaterBodyRiver, WaterBodyRiverComponentClass) == 704, "Offset mismatch for UWaterBodyRiver::WaterBodyRiverComponentClass");
static_assert(offsetof(UWaterBodyRiver, WaterBodyLakeComponentClass) == 712, "Offset mismatch for UWaterBodyRiver::WaterBodyLakeComponentClass");
static_assert(offsetof(UWaterBodyRiver, WaterBodyOceanComponentClass) == 720, "Offset mismatch for UWaterBodyRiver::WaterBodyOceanComponentClass");
static_assert(offsetof(UWaterBodyRiver, WaterBodyCustomComponentClass) == 728, "Offset mismatch for UWaterBodyRiver::WaterBodyCustomComponentClass");

// /Script/Water.WaterBodyRiverComponent
// Kind: Class; super: WaterBodyComponent
class UWaterBodyRiverComponent
{
public:
    std::uint8_t Pad_0000[0x16E0]; // 0x0000
    TArray<void*> SplineMeshComponents; // 0x16E0 (Size: 0x10, Type: ArrayProperty)
    void* LakeTransitionMaterial; // 0x16F0 (Size: 0x8, Type: ObjectProperty)
    void* LakeTransitionMID; // 0x16F8 (Size: 0x8, Type: ObjectProperty)
    void* OceanTransitionMaterial; // 0x1700 (Size: 0x8, Type: ObjectProperty)
    void* OceanTransitionMID; // 0x1708 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bExternalCollisionActive; // 0x1710 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWaterBodyRiverComponent, SplineMeshComponents) == 5856, "Offset mismatch for UWaterBodyRiverComponent::SplineMeshComponents");
static_assert(offsetof(UWaterBodyRiverComponent, LakeTransitionMaterial) == 5872, "Offset mismatch for UWaterBodyRiverComponent::LakeTransitionMaterial");
static_assert(offsetof(UWaterBodyRiverComponent, LakeTransitionMID) == 5880, "Offset mismatch for UWaterBodyRiverComponent::LakeTransitionMID");
static_assert(offsetof(UWaterBodyRiverComponent, OceanTransitionMaterial) == 5888, "Offset mismatch for UWaterBodyRiverComponent::OceanTransitionMaterial");
static_assert(offsetof(UWaterBodyRiverComponent, OceanTransitionMID) == 5896, "Offset mismatch for UWaterBodyRiverComponent::OceanTransitionMID");
static_assert(offsetof(UWaterBodyRiverComponent, bExternalCollisionActive) == 5904, "Offset mismatch for UWaterBodyRiverComponent::bExternalCollisionActive");

// /Script/Water.WaterBodyStaticMeshComponent
// Kind: Class; super: WaterBodyMeshComponent
class UWaterBodyStaticMeshComponent
{
public:
    std::uint8_t Pad_0000[0x5D8]; // 0x0000
    std::int32_t ForcedLodModel; // 0x05D8 (Size: 0x4, Type: IntProperty)
    std::int32_t MinLOD; // 0x05DC (Size: 0x4, Type: IntProperty)
    std::int32_t SubDivisionStepSize; // 0x05E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t WireframeColorOverride[0x4]; // 0x05E4 (Size: 0x4, Type: StructProperty)
    void* StaticMesh; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WorldPositionOffsetDisableDistance; // 0x05F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDisallowNanite; // 0x05F4 (Size: 0x1, Type: BoolProperty)
    // 0x05F4 BoolProperty bEvaluateWorldPositionOffset (shared storage)
    // 0x05F4 BoolProperty bEvaluateWorldPositionOffsetInRayTracing (shared storage)
    // 0x05F4 BoolProperty bForceDisableNanite (shared storage)
    // 0x05F4 BoolProperty bForceNaniteForMasked (shared storage)
    // 0x05F4 BoolProperty bWorldPositionOffsetWritesVelocity (shared storage)
    std::uint8_t bForceNavigationObstacle; // 0x05F5 (Size: 0x1, Type: BoolProperty)
    // 0x05F5 BoolProperty bOverrideMinLOD (shared storage)
    // 0x05F5 BoolProperty bOverrideNavAreaClass (shared storage)
    // 0x05F5 BoolProperty bOverrideNavigationExport (shared storage)
    // 0x05F5 BoolProperty bOverrideWireframeColor (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x05F6
    void* NavAreaClass; // 0x05F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bCastDistanceFieldIndirectShadow; // 0x0600 (Size: 0x1, Type: BoolProperty)
    // 0x0600 BoolProperty bDisallowMeshPaintPerInstance (shared storage)
    // 0x0600 BoolProperty bIgnoreInstanceForTextureStreaming (shared storage)
    // 0x0600 BoolProperty bOverrideDistanceFieldSelfShadowBias (shared storage)
    // 0x0600 BoolProperty bOverrideLightMapRes (shared storage)
    // 0x0600 BoolProperty bSortTriangles (shared storage)
    // 0x0600 BoolProperty bUseDefaultCollision (shared storage)
    // 0x0600 BoolProperty bUseSubDivisions (shared storage)
    std::uint8_t bEnableTextureColorMeshPainting; // 0x0601 (Size: 0x1, Type: BoolProperty)
    // 0x0601 BoolProperty bEnableVertexColorMeshPainting (shared storage)
    // 0x0601 BoolProperty bOverrideMeshPaintTextureCoordinateIndex (shared storage)
    // 0x0601 BoolProperty bOverrideMeshPaintTextureResolution (shared storage)
    // 0x0601 BoolProperty bReverseCulling (shared storage)
    // 0x0601 BoolProperty bWritesToMaterialCache (shared storage)
    std::uint8_t Pad_0002[0x2]; // 0x0602
    std::int32_t OverriddenMeshPaintTextureCoordinateIndex; // 0x0604 (Size: 0x4, Type: IntProperty)
    std::int32_t OverriddenMeshPaintTextureResolution; // 0x0608 (Size: 0x4, Type: IntProperty)
    std::int32_t OverriddenLightMapRes; // 0x060C (Size: 0x4, Type: IntProperty)
    void* MeshPaintTextureCooked; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* MeshPaintTextureOverride; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialCacheTileCount[0x8]; // 0x0620 (Size: 0x8, Type: StructProperty)
    std::uint8_t MaterialCacheUVRegion[0x14]; // 0x0628 (Size: 0x14, Type: StructProperty)
    std::int32_t MaterialCacheUVCoordinateIndex; // 0x063C (Size: 0x4, Type: IntProperty)
    TArray<void*> MaterialCacheTextures; // 0x0640 (Size: 0x10, Type: ArrayProperty)
    float DistanceFieldIndirectShadowMinVisibility; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float DistanceFieldSelfShadowBias; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float StreamingDistanceMultiplier; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float NanitePixelProgrammableDistance; // 0x065C (Size: 0x4, Type: FloatProperty)
    TArray<void*> LODData; // 0x0660 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StreamingTextureData; // 0x0670 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LightmassSettings[0x1]; // 0x0680 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWaterBodyStaticMeshComponent, ForcedLodModel) == 1496, "Offset mismatch for UWaterBodyStaticMeshComponent::ForcedLodModel");
static_assert(offsetof(UWaterBodyStaticMeshComponent, MinLOD) == 1500, "Offset mismatch for UWaterBodyStaticMeshComponent::MinLOD");
static_assert(offsetof(UWaterBodyStaticMeshComponent, SubDivisionStepSize) == 1504, "Offset mismatch for UWaterBodyStaticMeshComponent::SubDivisionStepSize");
static_assert(offsetof(UWaterBodyStaticMeshComponent, WireframeColorOverride) == 1508, "Offset mismatch for UWaterBodyStaticMeshComponent::WireframeColorOverride");
static_assert(offsetof(UWaterBodyStaticMeshComponent, StaticMesh) == 1512, "Offset mismatch for UWaterBodyStaticMeshComponent::StaticMesh");
static_assert(offsetof(UWaterBodyStaticMeshComponent, WorldPositionOffsetDisableDistance) == 1520, "Offset mismatch for UWaterBodyStaticMeshComponent::WorldPositionOffsetDisableDistance");
static_assert(offsetof(UWaterBodyStaticMeshComponent, bDisallowNanite) == 1524, "Offset mismatch for UWaterBodyStaticMeshComponent::bDisallowNanite");
static_assert(offsetof(UWaterBodyStaticMeshComponent, bForceNavigationObstacle) == 1525, "Offset mismatch for UWaterBodyStaticMeshComponent::bForceNavigationObstacle");
static_assert(offsetof(UWaterBodyStaticMeshComponent, NavAreaClass) == 1528, "Offset mismatch for UWaterBodyStaticMeshComponent::NavAreaClass");
static_assert(offsetof(UWaterBodyStaticMeshComponent, bCastDistanceFieldIndirectShadow) == 1536, "Offset mismatch for UWaterBodyStaticMeshComponent::bCastDistanceFieldIndirectShadow");
static_assert(offsetof(UWaterBodyStaticMeshComponent, bEnableTextureColorMeshPainting) == 1537, "Offset mismatch for UWaterBodyStaticMeshComponent::bEnableTextureColorMeshPainting");
static_assert(offsetof(UWaterBodyStaticMeshComponent, OverriddenMeshPaintTextureCoordinateIndex) == 1540, "Offset mismatch for UWaterBodyStaticMeshComponent::OverriddenMeshPaintTextureCoordinateIndex");
static_assert(offsetof(UWaterBodyStaticMeshComponent, OverriddenMeshPaintTextureResolution) == 1544, "Offset mismatch for UWaterBodyStaticMeshComponent::OverriddenMeshPaintTextureResolution");
static_assert(offsetof(UWaterBodyStaticMeshComponent, OverriddenLightMapRes) == 1548, "Offset mismatch for UWaterBodyStaticMeshComponent::OverriddenLightMapRes");
static_assert(offsetof(UWaterBodyStaticMeshComponent, MeshPaintTextureCooked) == 1552, "Offset mismatch for UWaterBodyStaticMeshComponent::MeshPaintTextureCooked");
static_assert(offsetof(UWaterBodyStaticMeshComponent, MeshPaintTextureOverride) == 1560, "Offset mismatch for UWaterBodyStaticMeshComponent::MeshPaintTextureOverride");
static_assert(offsetof(UWaterBodyStaticMeshComponent, MaterialCacheTileCount) == 1568, "Offset mismatch for UWaterBodyStaticMeshComponent::MaterialCacheTileCount");
static_assert(offsetof(UWaterBodyStaticMeshComponent, MaterialCacheUVRegion) == 1576, "Offset mismatch for UWaterBodyStaticMeshComponent::MaterialCacheUVRegion");
static_assert(offsetof(UWaterBodyStaticMeshComponent, MaterialCacheUVCoordinateIndex) == 1596, "Offset mismatch for UWaterBodyStaticMeshComponent::MaterialCacheUVCoordinateIndex");
static_assert(offsetof(UWaterBodyStaticMeshComponent, MaterialCacheTextures) == 1600, "Offset mismatch for UWaterBodyStaticMeshComponent::MaterialCacheTextures");
static_assert(offsetof(UWaterBodyStaticMeshComponent, DistanceFieldIndirectShadowMinVisibility) == 1616, "Offset mismatch for UWaterBodyStaticMeshComponent::DistanceFieldIndirectShadowMinVisibility");
static_assert(offsetof(UWaterBodyStaticMeshComponent, DistanceFieldSelfShadowBias) == 1620, "Offset mismatch for UWaterBodyStaticMeshComponent::DistanceFieldSelfShadowBias");
static_assert(offsetof(UWaterBodyStaticMeshComponent, StreamingDistanceMultiplier) == 1624, "Offset mismatch for UWaterBodyStaticMeshComponent::StreamingDistanceMultiplier");
static_assert(offsetof(UWaterBodyStaticMeshComponent, NanitePixelProgrammableDistance) == 1628, "Offset mismatch for UWaterBodyStaticMeshComponent::NanitePixelProgrammableDistance");
static_assert(offsetof(UWaterBodyStaticMeshComponent, LODData) == 1632, "Offset mismatch for UWaterBodyStaticMeshComponent::LODData");
static_assert(offsetof(UWaterBodyStaticMeshComponent, StreamingTextureData) == 1648, "Offset mismatch for UWaterBodyStaticMeshComponent::StreamingTextureData");
static_assert(offsetof(UWaterBodyStaticMeshComponent, LightmassSettings) == 1664, "Offset mismatch for UWaterBodyStaticMeshComponent::LightmassSettings");

// /Script/Water.WaterBrushActorInterface
// Kind: Class; super: Interface
class UWaterBrushActorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Water.WaterMeshComponent
// Kind: Class; super: MeshComponent
class UWaterMeshComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    std::int32_t ForceCollapseDensityLevel; // 0x05D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x05D4
    void* FarDistanceMaterial; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    float FarDistanceMeshExtent; // 0x05E0 (Size: 0x4, Type: FloatProperty)
    float TileSize; // 0x05E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t QuadTreeResolution[0x160]; // 0x05E8 (Size: 0x160, Type: StructProperty)
    std::uint8_t UsedMaterials[0x10]; // 0x0748 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> MaterialToMID; // 0x0758 (Size: 0x10, Type: MapProperty)
    std::uint8_t bUseFarMeshWithoutOcean; // 0x0768 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0769
    double FarDistanceMeshHeightWithoutOcean; // 0x0770 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0778
    std::int32_t TessellationFactor; // 0x0788 (Size: 0x4, Type: IntProperty)
    float LODScale; // 0x078C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UWaterMeshComponent, ForceCollapseDensityLevel) == 1488, "Offset mismatch for UWaterMeshComponent::ForceCollapseDensityLevel");
static_assert(offsetof(UWaterMeshComponent, FarDistanceMaterial) == 1496, "Offset mismatch for UWaterMeshComponent::FarDistanceMaterial");
static_assert(offsetof(UWaterMeshComponent, FarDistanceMeshExtent) == 1504, "Offset mismatch for UWaterMeshComponent::FarDistanceMeshExtent");
static_assert(offsetof(UWaterMeshComponent, TileSize) == 1508, "Offset mismatch for UWaterMeshComponent::TileSize");
static_assert(offsetof(UWaterMeshComponent, QuadTreeResolution) == 1512, "Offset mismatch for UWaterMeshComponent::QuadTreeResolution");
static_assert(offsetof(UWaterMeshComponent, UsedMaterials) == 1864, "Offset mismatch for UWaterMeshComponent::UsedMaterials");
static_assert(offsetof(UWaterMeshComponent, MaterialToMID) == 1880, "Offset mismatch for UWaterMeshComponent::MaterialToMID");
static_assert(offsetof(UWaterMeshComponent, bUseFarMeshWithoutOcean) == 1896, "Offset mismatch for UWaterMeshComponent::bUseFarMeshWithoutOcean");
static_assert(offsetof(UWaterMeshComponent, FarDistanceMeshHeightWithoutOcean) == 1904, "Offset mismatch for UWaterMeshComponent::FarDistanceMeshHeightWithoutOcean");
static_assert(offsetof(UWaterMeshComponent, TessellationFactor) == 1928, "Offset mismatch for UWaterMeshComponent::TessellationFactor");
static_assert(offsetof(UWaterMeshComponent, LODScale) == 1932, "Offset mismatch for UWaterMeshComponent::LODScale");

// /Script/Water.WaterRuntimeSettings
// Kind: Class; super: DeveloperSettings
class UWaterRuntimeSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t CollisionChannelForWaterTraces; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t MaterialParameterCollection[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    float WaterBodyIconWorldZOffset; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultWaterCollisionProfileName[0x4]; // 0x005C (Size: 0x4, Type: NameProperty)
    std::uint8_t DefaultWaterInfoMaterial[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    void* WaterBodyRiverComponentClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyLakeComponentClass; // 0x0088 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyOceanComponentClass; // 0x0090 (Size: 0x8, Type: ClassProperty)
    void* WaterBodyCustomComponentClass; // 0x0098 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bWarnOnMismatchOceanExtent; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWaterRuntimeSettings, CollisionChannelForWaterTraces) == 48, "Offset mismatch for UWaterRuntimeSettings::CollisionChannelForWaterTraces");
static_assert(offsetof(UWaterRuntimeSettings, MaterialParameterCollection) == 56, "Offset mismatch for UWaterRuntimeSettings::MaterialParameterCollection");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyIconWorldZOffset) == 88, "Offset mismatch for UWaterRuntimeSettings::WaterBodyIconWorldZOffset");
static_assert(offsetof(UWaterRuntimeSettings, DefaultWaterCollisionProfileName) == 92, "Offset mismatch for UWaterRuntimeSettings::DefaultWaterCollisionProfileName");
static_assert(offsetof(UWaterRuntimeSettings, DefaultWaterInfoMaterial) == 96, "Offset mismatch for UWaterRuntimeSettings::DefaultWaterInfoMaterial");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyRiverComponentClass) == 128, "Offset mismatch for UWaterRuntimeSettings::WaterBodyRiverComponentClass");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyLakeComponentClass) == 136, "Offset mismatch for UWaterRuntimeSettings::WaterBodyLakeComponentClass");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyOceanComponentClass) == 144, "Offset mismatch for UWaterRuntimeSettings::WaterBodyOceanComponentClass");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyCustomComponentClass) == 152, "Offset mismatch for UWaterRuntimeSettings::WaterBodyCustomComponentClass");
static_assert(offsetof(UWaterRuntimeSettings, bWarnOnMismatchOceanExtent) == 160, "Offset mismatch for UWaterRuntimeSettings::bWarnOnMismatchOceanExtent");

// /Script/Water.WaterSplineComponent
// Kind: Class; super: SplineComponent
class UWaterSplineComponent
{
public:
    std::uint8_t Pad_0000[0x6D0]; // 0x0000
    std::uint8_t WaterSplineDefaults[0x10]; // 0x06D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PreviousWaterSplineDefaults[0x1]; // 0x06E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWaterSplineComponent, WaterSplineDefaults) == 1744, "Offset mismatch for UWaterSplineComponent::WaterSplineDefaults");
static_assert(offsetof(UWaterSplineComponent, PreviousWaterSplineDefaults) == 1760, "Offset mismatch for UWaterSplineComponent::PreviousWaterSplineDefaults");

// /Script/Water.WaterSplineMetadata
// Kind: Class; super: SplineMetadata
class UWaterSplineMetadata
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Depth[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaterVelocityScalar[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t RiverWidth[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t AudioIntensity[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaterVelocity[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWaterSplineMetadata, Depth) == 40, "Offset mismatch for UWaterSplineMetadata::Depth");
static_assert(offsetof(UWaterSplineMetadata, WaterVelocityScalar) == 64, "Offset mismatch for UWaterSplineMetadata::WaterVelocityScalar");
static_assert(offsetof(UWaterSplineMetadata, RiverWidth) == 88, "Offset mismatch for UWaterSplineMetadata::RiverWidth");
static_assert(offsetof(UWaterSplineMetadata, AudioIntensity) == 112, "Offset mismatch for UWaterSplineMetadata::AudioIntensity");
static_assert(offsetof(UWaterSplineMetadata, WaterVelocity) == 136, "Offset mismatch for UWaterSplineMetadata::WaterVelocity");

// /Script/Water.WaterSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UWaterSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* BuoyancyManager; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnCameraUnderwaterStateChanged; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWaterScalabilityChanged; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* DefaultRiverMesh; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* DefaultLakeMesh; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0080
    void* MaterialParameterCollection; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* UnderwaterPostProcessVolume; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWaterSubsystem, BuoyancyManager) == 72, "Offset mismatch for UWaterSubsystem::BuoyancyManager");
static_assert(offsetof(UWaterSubsystem, OnCameraUnderwaterStateChanged) == 80, "Offset mismatch for UWaterSubsystem::OnCameraUnderwaterStateChanged");
static_assert(offsetof(UWaterSubsystem, OnWaterScalabilityChanged) == 96, "Offset mismatch for UWaterSubsystem::OnWaterScalabilityChanged");
static_assert(offsetof(UWaterSubsystem, DefaultRiverMesh) == 112, "Offset mismatch for UWaterSubsystem::DefaultRiverMesh");
static_assert(offsetof(UWaterSubsystem, DefaultLakeMesh) == 120, "Offset mismatch for UWaterSubsystem::DefaultLakeMesh");
static_assert(offsetof(UWaterSubsystem, MaterialParameterCollection) == 168, "Offset mismatch for UWaterSubsystem::MaterialParameterCollection");
static_assert(offsetof(UWaterSubsystem, UnderwaterPostProcessVolume) == 176, "Offset mismatch for UWaterSubsystem::UnderwaterPostProcessVolume");

// /Script/Water.WaterTerrainComponent
// Kind: Class; super: ActorComponent
class UWaterTerrainComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TSoftObjectPtr<void> WaterZoneOverride; // 0x00C0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UWaterTerrainComponent, WaterZoneOverride) == 192, "Offset mismatch for UWaterTerrainComponent::WaterZoneOverride");

// /Script/Water.WaterWaves
// Kind: Class; super: WaterWavesBase
class UWaterWaves
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Water.WaterWavesAsset
// Kind: Class; super: Object
class UWaterWavesAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* WaterWaves; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWaterWavesAsset, WaterWaves) == 40, "Offset mismatch for UWaterWavesAsset::WaterWaves");

// /Script/Water.WaterWavesAssetReference
// Kind: Class; super: WaterWavesBase
class UWaterWavesAssetReference
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* WaterWavesAsset; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWaterWavesAssetReference, WaterWavesAsset) == 40, "Offset mismatch for UWaterWavesAssetReference::WaterWavesAsset");

// /Script/Water.WaterWavesBase
// Kind: Class; super: Object
class UWaterWavesBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Water.WaterZone
// Kind: Class; super: Actor
class UWaterZone
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* WaterInfoTextureArray; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WaterInfoTextureArrayNumSlices; // 0x0278 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x027C
    TArray<void*> OwnedWaterBodies; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RenderTargetResolution[0x8]; // 0x0290 (Size: 0x8, Type: StructProperty)
    void* WaterMesh; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ZoneExtent[0x10]; // 0x02A0 (Size: 0x10, Type: StructProperty)
    float CaptureZOffset; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHalfPrecisionTexture; // 0x02B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02B5
    std::int32_t VelocityBlurRadius; // 0x02B8 (Size: 0x4, Type: IntProperty)
    std::int32_t OverlapPriority; // 0x02BC (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableLocalOnlyTessellation; // 0x02C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x02C1
    std::uint8_t LocalTessellationExtent[0x18]; // 0x02C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAutoIncludeLandscapesAsTerrain; // 0x02E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x02E1
    std::int32_t WaterZoneIndex; // 0x02F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x02F4
    FMulticastInlineDelegate OnWaterInfoTextureArrayCreated; // 0x02F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWaterZone, WaterInfoTextureArray) == 624, "Offset mismatch for UWaterZone::WaterInfoTextureArray");
static_assert(offsetof(UWaterZone, WaterInfoTextureArrayNumSlices) == 632, "Offset mismatch for UWaterZone::WaterInfoTextureArrayNumSlices");
static_assert(offsetof(UWaterZone, OwnedWaterBodies) == 640, "Offset mismatch for UWaterZone::OwnedWaterBodies");
static_assert(offsetof(UWaterZone, RenderTargetResolution) == 656, "Offset mismatch for UWaterZone::RenderTargetResolution");
static_assert(offsetof(UWaterZone, WaterMesh) == 664, "Offset mismatch for UWaterZone::WaterMesh");
static_assert(offsetof(UWaterZone, ZoneExtent) == 672, "Offset mismatch for UWaterZone::ZoneExtent");
static_assert(offsetof(UWaterZone, CaptureZOffset) == 688, "Offset mismatch for UWaterZone::CaptureZOffset");
static_assert(offsetof(UWaterZone, bHalfPrecisionTexture) == 692, "Offset mismatch for UWaterZone::bHalfPrecisionTexture");
static_assert(offsetof(UWaterZone, VelocityBlurRadius) == 696, "Offset mismatch for UWaterZone::VelocityBlurRadius");
static_assert(offsetof(UWaterZone, OverlapPriority) == 700, "Offset mismatch for UWaterZone::OverlapPriority");
static_assert(offsetof(UWaterZone, bEnableLocalOnlyTessellation) == 704, "Offset mismatch for UWaterZone::bEnableLocalOnlyTessellation");
static_assert(offsetof(UWaterZone, LocalTessellationExtent) == 712, "Offset mismatch for UWaterZone::LocalTessellationExtent");
static_assert(offsetof(UWaterZone, bAutoIncludeLandscapesAsTerrain) == 736, "Offset mismatch for UWaterZone::bAutoIncludeLandscapesAsTerrain");
static_assert(offsetof(UWaterZone, WaterZoneIndex) == 752, "Offset mismatch for UWaterZone::WaterZoneIndex");
static_assert(offsetof(UWaterZone, OnWaterInfoTextureArrayCreated) == 760, "Offset mismatch for UWaterZone::OnWaterInfoTextureArrayCreated");
