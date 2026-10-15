/**
 * decamp dumper generated SDK
 * Package: /Script/CascadeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CascadeRuntime.BeamModifierOptions
// Kind: ScriptStruct; super: none
struct FBeamModifierOptions
{
public:
    std::uint8_t Block; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bModify (shared storage)
    // 0x0000 BoolProperty bScale (shared storage)
};

static_assert(offsetof(FBeamModifierOptions, Block) == 0, "Offset mismatch for FBeamModifierOptions::Block");

// /Script/CascadeRuntime.BeamTargetData
// Kind: ScriptStruct; super: none
struct FBeamTargetData
{
public:
    std::uint8_t TargetName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float TargetPercentage; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeamTargetData, TargetName) == 0, "Offset mismatch for FBeamTargetData::TargetName");
static_assert(offsetof(FBeamTargetData, TargetPercentage) == 4, "Offset mismatch for FBeamTargetData::TargetPercentage");

// /Script/CascadeRuntime.EmitterDynamicParameter
// Kind: ScriptStruct; super: none
struct FEmitterDynamicParameter
{
public:
    std::uint8_t ParamName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSpawnTimeOnly; // 0x0004 (Size: 0x1, Type: BoolProperty)
    // 0x0004 BoolProperty bUseEmitterTime (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t ValueMethod; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t bScaleVelocityByParamValue; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x000D
    std::uint8_t ParamValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEmitterDynamicParameter, ParamName) == 0, "Offset mismatch for FEmitterDynamicParameter::ParamName");
static_assert(offsetof(FEmitterDynamicParameter, bSpawnTimeOnly) == 4, "Offset mismatch for FEmitterDynamicParameter::bSpawnTimeOnly");
static_assert(offsetof(FEmitterDynamicParameter, ValueMethod) == 8, "Offset mismatch for FEmitterDynamicParameter::ValueMethod");
static_assert(offsetof(FEmitterDynamicParameter, bScaleVelocityByParamValue) == 12, "Offset mismatch for FEmitterDynamicParameter::bScaleVelocityByParamValue");
static_assert(offsetof(FEmitterDynamicParameter, ParamValue) == 16, "Offset mismatch for FEmitterDynamicParameter::ParamValue");

// /Script/CascadeRuntime.GPUSpriteEmitterInfo
// Kind: ScriptStruct; super: none
struct FGPUSpriteEmitterInfo
{
public:
    void* RequiredModule; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SpawnModule; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* SpawnPerUnitModule; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SpawnModules; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0028
    std::uint8_t LocalVectorField[0xD0]; // 0x0030 (Size: 0xD0, Type: StructProperty)
    std::uint8_t VectorFieldScale[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t DragCoefficient[0x20]; // 0x0120 (Size: 0x20, Type: StructProperty)
    std::uint8_t PointAttractorStrength[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    std::uint8_t Resilience[0x20]; // 0x0160 (Size: 0x20, Type: StructProperty)
    std::uint8_t ConstantAcceleration[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t PointAttractorPosition[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    float PointAttractorRadiusSq; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01B4
    std::uint8_t OrbitOffsetBase[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrbitOffsetRange[0x18]; // 0x01D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t InvMaxSize[0x10]; // 0x01E8 (Size: 0x10, Type: StructProperty)
    float InvRotationRateScale; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float MaxLifetime; // 0x01FC (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxParticleCount; // 0x0200 (Size: 0x4, Type: IntProperty)
    std::uint8_t ScreenAlignment; // 0x0204 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LockAxisFlag; // 0x0205 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0206
    std::uint8_t bEnableCollision; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0209
    std::uint8_t CollisionMode; // 0x020C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x020D
    std::uint8_t bRemoveHMDRoll; // 0x0210 (Size: 0x1, Type: BoolProperty)
    // 0x0210 BoolProperty bUseVelocityForMotionBlur (shared storage)
    std::uint8_t Pad_0005[0x3]; // 0x0211
    float MinFacingCameraBlendDistance; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float MaxFacingCameraBlendDistance; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x021C
    std::uint8_t DynamicColor[0x60]; // 0x0220 (Size: 0x60, Type: StructProperty)
    std::uint8_t DynamicAlpha[0x30]; // 0x0280 (Size: 0x30, Type: StructProperty)
    std::uint8_t DynamicColorScale[0x60]; // 0x02B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t DynamicAlphaScale[0x1]; // 0x0310 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGPUSpriteEmitterInfo, RequiredModule) == 0, "Offset mismatch for FGPUSpriteEmitterInfo::RequiredModule");
static_assert(offsetof(FGPUSpriteEmitterInfo, SpawnModule) == 8, "Offset mismatch for FGPUSpriteEmitterInfo::SpawnModule");
static_assert(offsetof(FGPUSpriteEmitterInfo, SpawnPerUnitModule) == 16, "Offset mismatch for FGPUSpriteEmitterInfo::SpawnPerUnitModule");
static_assert(offsetof(FGPUSpriteEmitterInfo, SpawnModules) == 24, "Offset mismatch for FGPUSpriteEmitterInfo::SpawnModules");
static_assert(offsetof(FGPUSpriteEmitterInfo, LocalVectorField) == 48, "Offset mismatch for FGPUSpriteEmitterInfo::LocalVectorField");
static_assert(offsetof(FGPUSpriteEmitterInfo, VectorFieldScale) == 256, "Offset mismatch for FGPUSpriteEmitterInfo::VectorFieldScale");
static_assert(offsetof(FGPUSpriteEmitterInfo, DragCoefficient) == 288, "Offset mismatch for FGPUSpriteEmitterInfo::DragCoefficient");
static_assert(offsetof(FGPUSpriteEmitterInfo, PointAttractorStrength) == 320, "Offset mismatch for FGPUSpriteEmitterInfo::PointAttractorStrength");
static_assert(offsetof(FGPUSpriteEmitterInfo, Resilience) == 352, "Offset mismatch for FGPUSpriteEmitterInfo::Resilience");
static_assert(offsetof(FGPUSpriteEmitterInfo, ConstantAcceleration) == 384, "Offset mismatch for FGPUSpriteEmitterInfo::ConstantAcceleration");
static_assert(offsetof(FGPUSpriteEmitterInfo, PointAttractorPosition) == 408, "Offset mismatch for FGPUSpriteEmitterInfo::PointAttractorPosition");
static_assert(offsetof(FGPUSpriteEmitterInfo, PointAttractorRadiusSq) == 432, "Offset mismatch for FGPUSpriteEmitterInfo::PointAttractorRadiusSq");
static_assert(offsetof(FGPUSpriteEmitterInfo, OrbitOffsetBase) == 440, "Offset mismatch for FGPUSpriteEmitterInfo::OrbitOffsetBase");
static_assert(offsetof(FGPUSpriteEmitterInfo, OrbitOffsetRange) == 464, "Offset mismatch for FGPUSpriteEmitterInfo::OrbitOffsetRange");
static_assert(offsetof(FGPUSpriteEmitterInfo, InvMaxSize) == 488, "Offset mismatch for FGPUSpriteEmitterInfo::InvMaxSize");
static_assert(offsetof(FGPUSpriteEmitterInfo, InvRotationRateScale) == 504, "Offset mismatch for FGPUSpriteEmitterInfo::InvRotationRateScale");
static_assert(offsetof(FGPUSpriteEmitterInfo, MaxLifetime) == 508, "Offset mismatch for FGPUSpriteEmitterInfo::MaxLifetime");
static_assert(offsetof(FGPUSpriteEmitterInfo, MaxParticleCount) == 512, "Offset mismatch for FGPUSpriteEmitterInfo::MaxParticleCount");
static_assert(offsetof(FGPUSpriteEmitterInfo, ScreenAlignment) == 516, "Offset mismatch for FGPUSpriteEmitterInfo::ScreenAlignment");
static_assert(offsetof(FGPUSpriteEmitterInfo, LockAxisFlag) == 517, "Offset mismatch for FGPUSpriteEmitterInfo::LockAxisFlag");
static_assert(offsetof(FGPUSpriteEmitterInfo, bEnableCollision) == 520, "Offset mismatch for FGPUSpriteEmitterInfo::bEnableCollision");
static_assert(offsetof(FGPUSpriteEmitterInfo, CollisionMode) == 524, "Offset mismatch for FGPUSpriteEmitterInfo::CollisionMode");
static_assert(offsetof(FGPUSpriteEmitterInfo, bRemoveHMDRoll) == 528, "Offset mismatch for FGPUSpriteEmitterInfo::bRemoveHMDRoll");
static_assert(offsetof(FGPUSpriteEmitterInfo, MinFacingCameraBlendDistance) == 532, "Offset mismatch for FGPUSpriteEmitterInfo::MinFacingCameraBlendDistance");
static_assert(offsetof(FGPUSpriteEmitterInfo, MaxFacingCameraBlendDistance) == 536, "Offset mismatch for FGPUSpriteEmitterInfo::MaxFacingCameraBlendDistance");
static_assert(offsetof(FGPUSpriteEmitterInfo, DynamicColor) == 544, "Offset mismatch for FGPUSpriteEmitterInfo::DynamicColor");
static_assert(offsetof(FGPUSpriteEmitterInfo, DynamicAlpha) == 640, "Offset mismatch for FGPUSpriteEmitterInfo::DynamicAlpha");
static_assert(offsetof(FGPUSpriteEmitterInfo, DynamicColorScale) == 688, "Offset mismatch for FGPUSpriteEmitterInfo::DynamicColorScale");
static_assert(offsetof(FGPUSpriteEmitterInfo, DynamicAlphaScale) == 784, "Offset mismatch for FGPUSpriteEmitterInfo::DynamicAlphaScale");

// /Script/CascadeRuntime.GPUSpriteLocalVectorFieldInfo
// Kind: ScriptStruct; super: none
struct FGPUSpriteLocalVectorFieldInfo
{
public:
    void* Field; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t MinInitialRotation[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxInitialRotation[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationRate[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    float Intensity; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float Tightness; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreComponentTransform; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    // 0x00C0 BoolProperty bTileX (shared storage)
    // 0x00C0 BoolProperty bTileY (shared storage)
    // 0x00C0 BoolProperty bTileZ (shared storage)
    // 0x00C0 BoolProperty bUseFixDT (shared storage)
};

static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, Field) == 0, "Offset mismatch for FGPUSpriteLocalVectorFieldInfo::Field");
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, Transform) == 16, "Offset mismatch for FGPUSpriteLocalVectorFieldInfo::Transform");
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, MinInitialRotation) == 112, "Offset mismatch for FGPUSpriteLocalVectorFieldInfo::MinInitialRotation");
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, MaxInitialRotation) == 136, "Offset mismatch for FGPUSpriteLocalVectorFieldInfo::MaxInitialRotation");
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, RotationRate) == 160, "Offset mismatch for FGPUSpriteLocalVectorFieldInfo::RotationRate");
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, Intensity) == 184, "Offset mismatch for FGPUSpriteLocalVectorFieldInfo::Intensity");
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, Tightness) == 188, "Offset mismatch for FGPUSpriteLocalVectorFieldInfo::Tightness");
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, bIgnoreComponentTransform) == 192, "Offset mismatch for FGPUSpriteLocalVectorFieldInfo::bIgnoreComponentTransform");

// /Script/CascadeRuntime.GPUSpriteResourceData
// Kind: ScriptStruct; super: none
struct FGPUSpriteResourceData
{
public:
    TArray<void*> QuantizedColorSamples; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QuantizedMiscSamples; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QuantizedSimulationAttrSamples; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ColorScale[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t ColorBias[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::uint8_t MiscScale[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t MiscBias[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    std::uint8_t SimulationAttrCurveScale[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SimulationAttrCurveBias[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SubImageSize[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SizeBySpeed[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t ConstantAcceleration[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrbitOffsetBase[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrbitOffsetRange[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrbitFrequencyBase[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrbitFrequencyRange[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrbitPhaseBase[0x18]; // 0x01A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrbitPhaseRange[0x18]; // 0x01C0 (Size: 0x18, Type: StructProperty)
    float GlobalVectorFieldScale; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    float GlobalVectorFieldTightness; // 0x01DC (Size: 0x4, Type: FloatProperty)
    float PerParticleVectorFieldScale; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    float PerParticleVectorFieldBias; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    float DragCoefficientScale; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    float DragCoefficientBias; // 0x01EC (Size: 0x4, Type: FloatProperty)
    float ResilienceScale; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float ResilienceBias; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    float CollisionRadiusScale; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float CollisionRadiusBias; // 0x01FC (Size: 0x4, Type: FloatProperty)
    float CollisionTimeBias; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float CollisionRandomSpread; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float CollisionRandomDistribution; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float OneMinusFriction; // 0x020C (Size: 0x4, Type: FloatProperty)
    float RotationRateScale; // 0x0210 (Size: 0x4, Type: FloatProperty)
    float CameraMotionBlurAmount; // 0x0214 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScreenAlignment; // 0x0218 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LockAxisFlag; // 0x0219 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x6]; // 0x021A
    std::uint8_t PivotOffset[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRemoveHMDRoll; // 0x0230 (Size: 0x1, Type: BoolProperty)
    // 0x0230 BoolProperty bUseVelocityForMotionBlur (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0231
    float MinFacingCameraBlendDistance; // 0x0234 (Size: 0x4, Type: FloatProperty)
    float MaxFacingCameraBlendDistance; // 0x0238 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGPUSpriteResourceData, QuantizedColorSamples) == 0, "Offset mismatch for FGPUSpriteResourceData::QuantizedColorSamples");
static_assert(offsetof(FGPUSpriteResourceData, QuantizedMiscSamples) == 16, "Offset mismatch for FGPUSpriteResourceData::QuantizedMiscSamples");
static_assert(offsetof(FGPUSpriteResourceData, QuantizedSimulationAttrSamples) == 32, "Offset mismatch for FGPUSpriteResourceData::QuantizedSimulationAttrSamples");
static_assert(offsetof(FGPUSpriteResourceData, ColorScale) == 48, "Offset mismatch for FGPUSpriteResourceData::ColorScale");
static_assert(offsetof(FGPUSpriteResourceData, ColorBias) == 80, "Offset mismatch for FGPUSpriteResourceData::ColorBias");
static_assert(offsetof(FGPUSpriteResourceData, MiscScale) == 112, "Offset mismatch for FGPUSpriteResourceData::MiscScale");
static_assert(offsetof(FGPUSpriteResourceData, MiscBias) == 144, "Offset mismatch for FGPUSpriteResourceData::MiscBias");
static_assert(offsetof(FGPUSpriteResourceData, SimulationAttrCurveScale) == 176, "Offset mismatch for FGPUSpriteResourceData::SimulationAttrCurveScale");
static_assert(offsetof(FGPUSpriteResourceData, SimulationAttrCurveBias) == 208, "Offset mismatch for FGPUSpriteResourceData::SimulationAttrCurveBias");
static_assert(offsetof(FGPUSpriteResourceData, SubImageSize) == 240, "Offset mismatch for FGPUSpriteResourceData::SubImageSize");
static_assert(offsetof(FGPUSpriteResourceData, SizeBySpeed) == 272, "Offset mismatch for FGPUSpriteResourceData::SizeBySpeed");
static_assert(offsetof(FGPUSpriteResourceData, ConstantAcceleration) == 304, "Offset mismatch for FGPUSpriteResourceData::ConstantAcceleration");
static_assert(offsetof(FGPUSpriteResourceData, OrbitOffsetBase) == 328, "Offset mismatch for FGPUSpriteResourceData::OrbitOffsetBase");
static_assert(offsetof(FGPUSpriteResourceData, OrbitOffsetRange) == 352, "Offset mismatch for FGPUSpriteResourceData::OrbitOffsetRange");
static_assert(offsetof(FGPUSpriteResourceData, OrbitFrequencyBase) == 376, "Offset mismatch for FGPUSpriteResourceData::OrbitFrequencyBase");
static_assert(offsetof(FGPUSpriteResourceData, OrbitFrequencyRange) == 400, "Offset mismatch for FGPUSpriteResourceData::OrbitFrequencyRange");
static_assert(offsetof(FGPUSpriteResourceData, OrbitPhaseBase) == 424, "Offset mismatch for FGPUSpriteResourceData::OrbitPhaseBase");
static_assert(offsetof(FGPUSpriteResourceData, OrbitPhaseRange) == 448, "Offset mismatch for FGPUSpriteResourceData::OrbitPhaseRange");
static_assert(offsetof(FGPUSpriteResourceData, GlobalVectorFieldScale) == 472, "Offset mismatch for FGPUSpriteResourceData::GlobalVectorFieldScale");
static_assert(offsetof(FGPUSpriteResourceData, GlobalVectorFieldTightness) == 476, "Offset mismatch for FGPUSpriteResourceData::GlobalVectorFieldTightness");
static_assert(offsetof(FGPUSpriteResourceData, PerParticleVectorFieldScale) == 480, "Offset mismatch for FGPUSpriteResourceData::PerParticleVectorFieldScale");
static_assert(offsetof(FGPUSpriteResourceData, PerParticleVectorFieldBias) == 484, "Offset mismatch for FGPUSpriteResourceData::PerParticleVectorFieldBias");
static_assert(offsetof(FGPUSpriteResourceData, DragCoefficientScale) == 488, "Offset mismatch for FGPUSpriteResourceData::DragCoefficientScale");
static_assert(offsetof(FGPUSpriteResourceData, DragCoefficientBias) == 492, "Offset mismatch for FGPUSpriteResourceData::DragCoefficientBias");
static_assert(offsetof(FGPUSpriteResourceData, ResilienceScale) == 496, "Offset mismatch for FGPUSpriteResourceData::ResilienceScale");
static_assert(offsetof(FGPUSpriteResourceData, ResilienceBias) == 500, "Offset mismatch for FGPUSpriteResourceData::ResilienceBias");
static_assert(offsetof(FGPUSpriteResourceData, CollisionRadiusScale) == 504, "Offset mismatch for FGPUSpriteResourceData::CollisionRadiusScale");
static_assert(offsetof(FGPUSpriteResourceData, CollisionRadiusBias) == 508, "Offset mismatch for FGPUSpriteResourceData::CollisionRadiusBias");
static_assert(offsetof(FGPUSpriteResourceData, CollisionTimeBias) == 512, "Offset mismatch for FGPUSpriteResourceData::CollisionTimeBias");
static_assert(offsetof(FGPUSpriteResourceData, CollisionRandomSpread) == 516, "Offset mismatch for FGPUSpriteResourceData::CollisionRandomSpread");
static_assert(offsetof(FGPUSpriteResourceData, CollisionRandomDistribution) == 520, "Offset mismatch for FGPUSpriteResourceData::CollisionRandomDistribution");
static_assert(offsetof(FGPUSpriteResourceData, OneMinusFriction) == 524, "Offset mismatch for FGPUSpriteResourceData::OneMinusFriction");
static_assert(offsetof(FGPUSpriteResourceData, RotationRateScale) == 528, "Offset mismatch for FGPUSpriteResourceData::RotationRateScale");
static_assert(offsetof(FGPUSpriteResourceData, CameraMotionBlurAmount) == 532, "Offset mismatch for FGPUSpriteResourceData::CameraMotionBlurAmount");
static_assert(offsetof(FGPUSpriteResourceData, ScreenAlignment) == 536, "Offset mismatch for FGPUSpriteResourceData::ScreenAlignment");
static_assert(offsetof(FGPUSpriteResourceData, LockAxisFlag) == 537, "Offset mismatch for FGPUSpriteResourceData::LockAxisFlag");
static_assert(offsetof(FGPUSpriteResourceData, PivotOffset) == 544, "Offset mismatch for FGPUSpriteResourceData::PivotOffset");
static_assert(offsetof(FGPUSpriteResourceData, bRemoveHMDRoll) == 560, "Offset mismatch for FGPUSpriteResourceData::bRemoveHMDRoll");
static_assert(offsetof(FGPUSpriteResourceData, MinFacingCameraBlendDistance) == 564, "Offset mismatch for FGPUSpriteResourceData::MinFacingCameraBlendDistance");
static_assert(offsetof(FGPUSpriteResourceData, MaxFacingCameraBlendDistance) == 568, "Offset mismatch for FGPUSpriteResourceData::MaxFacingCameraBlendDistance");

// /Script/CascadeRuntime.LODSoloTrack
// Kind: ScriptStruct; super: none
struct FLODSoloTrack
{
public:
    TArray<void*> SoloEnableSetting; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLODSoloTrack, SoloEnableSetting) == 0, "Offset mismatch for FLODSoloTrack::SoloEnableSetting");

// /Script/CascadeRuntime.LocationBoneSocketInfo
// Kind: ScriptStruct; super: none
struct FLocationBoneSocketInfo
{
public:
    FName BoneSocketName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Offset[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLocationBoneSocketInfo, BoneSocketName) == 0, "Offset mismatch for FLocationBoneSocketInfo::BoneSocketName");
static_assert(offsetof(FLocationBoneSocketInfo, Offset) == 8, "Offset mismatch for FLocationBoneSocketInfo::Offset");

// /Script/CascadeRuntime.NamedEmitterMaterial
// Kind: ScriptStruct; super: none
struct FNamedEmitterMaterial
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Material; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNamedEmitterMaterial, Name) == 0, "Offset mismatch for FNamedEmitterMaterial::Name");
static_assert(offsetof(FNamedEmitterMaterial, Material) == 8, "Offset mismatch for FNamedEmitterMaterial::Material");

// /Script/CascadeRuntime.OrbitOptions
// Kind: ScriptStruct; super: none
struct FOrbitOptions
{
public:
    std::uint8_t bProcessDuringSpawn; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bProcessDuringUpdate (shared storage)
    // 0x0000 BoolProperty bUseEmitterTime (shared storage)
};

static_assert(offsetof(FOrbitOptions, bProcessDuringSpawn) == 0, "Offset mismatch for FOrbitOptions::bProcessDuringSpawn");

// /Script/CascadeRuntime.PSCPool
// Kind: ScriptStruct; super: none
struct FPSCPool
{
public:
    TArray<void*> FreeElements; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPSCPool, FreeElements) == 0, "Offset mismatch for FPSCPool::FreeElements");

// /Script/CascadeRuntime.PSCPoolElem
// Kind: ScriptStruct; super: none
struct FPSCPoolElem
{
public:
    void* PSC; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPSCPoolElem, PSC) == 0, "Offset mismatch for FPSCPoolElem::PSC");

// /Script/CascadeRuntime.ParticleBurst
// Kind: ScriptStruct; super: none
struct FParticleBurst
{
public:
    std::int32_t Count; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t CountLow; // 0x0004 (Size: 0x4, Type: IntProperty)
    float time; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FParticleBurst, Count) == 0, "Offset mismatch for FParticleBurst::Count");
static_assert(offsetof(FParticleBurst, CountLow) == 4, "Offset mismatch for FParticleBurst::CountLow");
static_assert(offsetof(FParticleBurst, time) == 8, "Offset mismatch for FParticleBurst::time");

// /Script/CascadeRuntime.ParticleCurvePair
// Kind: ScriptStruct; super: none
struct FParticleCurvePair
{
public:
    FString CurveName; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* CurveObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FParticleCurvePair, CurveName) == 0, "Offset mismatch for FParticleCurvePair::CurveName");
static_assert(offsetof(FParticleCurvePair, CurveObject) == 16, "Offset mismatch for FParticleCurvePair::CurveObject");

// /Script/CascadeRuntime.ParticleEmitterReplayFrame
// Kind: ScriptStruct; super: none
struct FParticleEmitterReplayFrame
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CascadeRuntime.ParticleEvent_GenerateInfo
// Kind: ScriptStruct; super: none
struct FParticleEvent_GenerateInfo
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t Frequency; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ParticleFrequency; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t FirstTimeOnly; // 0x000C (Size: 0x1, Type: BoolProperty)
    // 0x000C BoolProperty LastTimeOnly (shared storage)
    // 0x000C BoolProperty UseReflectedImpactVector (shared storage)
    // 0x000C BoolProperty bUseOrbitOffset (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    FName CustomName; // 0x0010 (Size: 0x8, Type: NameProperty)
    TArray<void*> ParticleModuleEventsToSendToGame; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FParticleEvent_GenerateInfo, Type) == 0, "Offset mismatch for FParticleEvent_GenerateInfo::Type");
static_assert(offsetof(FParticleEvent_GenerateInfo, Frequency) == 4, "Offset mismatch for FParticleEvent_GenerateInfo::Frequency");
static_assert(offsetof(FParticleEvent_GenerateInfo, ParticleFrequency) == 8, "Offset mismatch for FParticleEvent_GenerateInfo::ParticleFrequency");
static_assert(offsetof(FParticleEvent_GenerateInfo, FirstTimeOnly) == 12, "Offset mismatch for FParticleEvent_GenerateInfo::FirstTimeOnly");
static_assert(offsetof(FParticleEvent_GenerateInfo, CustomName) == 16, "Offset mismatch for FParticleEvent_GenerateInfo::CustomName");
static_assert(offsetof(FParticleEvent_GenerateInfo, ParticleModuleEventsToSendToGame) == 24, "Offset mismatch for FParticleEvent_GenerateInfo::ParticleModuleEventsToSendToGame");

// /Script/CascadeRuntime.ParticleRandomSeedInfo
// Kind: ScriptStruct; super: none
struct FParticleRandomSeedInfo
{
public:
    std::uint8_t ParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bGetSeedFromInstance; // 0x0004 (Size: 0x1, Type: BoolProperty)
    // 0x0004 BoolProperty bInstanceSeedIsIndex (shared storage)
    // 0x0004 BoolProperty bRandomlySelectSeedArray (shared storage)
    // 0x0004 BoolProperty bResetSeedOnEmitterLooping (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TArray<void*> RandomSeeds; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FParticleRandomSeedInfo, ParameterName) == 0, "Offset mismatch for FParticleRandomSeedInfo::ParameterName");
static_assert(offsetof(FParticleRandomSeedInfo, bGetSeedFromInstance) == 4, "Offset mismatch for FParticleRandomSeedInfo::bGetSeedFromInstance");
static_assert(offsetof(FParticleRandomSeedInfo, RandomSeeds) == 8, "Offset mismatch for FParticleRandomSeedInfo::RandomSeeds");

// /Script/CascadeRuntime.ParticleSysParam
// Kind: ScriptStruct; super: none
struct FParticleSysParam
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParamType; // 0x0004 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float Scalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Scalar_Low; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Vector[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t Vector_Low[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Color[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    void* Actor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* Material; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FParticleSysParam, Name) == 0, "Offset mismatch for FParticleSysParam::Name");
static_assert(offsetof(FParticleSysParam, ParamType) == 4, "Offset mismatch for FParticleSysParam::ParamType");
static_assert(offsetof(FParticleSysParam, Scalar) == 8, "Offset mismatch for FParticleSysParam::Scalar");
static_assert(offsetof(FParticleSysParam, Scalar_Low) == 12, "Offset mismatch for FParticleSysParam::Scalar_Low");
static_assert(offsetof(FParticleSysParam, Vector) == 16, "Offset mismatch for FParticleSysParam::Vector");
static_assert(offsetof(FParticleSysParam, Vector_Low) == 40, "Offset mismatch for FParticleSysParam::Vector_Low");
static_assert(offsetof(FParticleSysParam, Color) == 64, "Offset mismatch for FParticleSysParam::Color");
static_assert(offsetof(FParticleSysParam, Actor) == 72, "Offset mismatch for FParticleSysParam::Actor");
static_assert(offsetof(FParticleSysParam, Material) == 80, "Offset mismatch for FParticleSysParam::Material");

// /Script/CascadeRuntime.ParticleSystemLOD
// Kind: ScriptStruct; super: none
struct FParticleSystemLOD
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CascadeRuntime.ParticleSystemReplayFrame
// Kind: ScriptStruct; super: none
struct FParticleSystemReplayFrame
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CascadeRuntime.ParticleSystemWorldManagerTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FParticleSystemWorldManagerTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FParticleSystemWorldManagerTickFunction, TickGroup) == 8, "Offset mismatch for FParticleSystemWorldManagerTickFunction::TickGroup");
static_assert(offsetof(FParticleSystemWorldManagerTickFunction, EndTickGroup) == 9, "Offset mismatch for FParticleSystemWorldManagerTickFunction::EndTickGroup");
static_assert(offsetof(FParticleSystemWorldManagerTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FParticleSystemWorldManagerTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FParticleSystemWorldManagerTickFunction, TickInterval) == 12, "Offset mismatch for FParticleSystemWorldManagerTickFunction::TickInterval");

// /Script/CascadeRuntime.WorldPSCPool
// Kind: ScriptStruct; super: none
struct FWorldPSCPool
{
public:
    TMap<void*, void*> WorldParticleSystemPools; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FWorldPSCPool, WorldParticleSystemPools) == 0, "Offset mismatch for FWorldPSCPool::WorldParticleSystemPools");

// /Script/CascadeRuntime.AnimNotifyState_TimedParticleEffect
// Kind: Class; super: AnimNotifyState
class UAnimNotifyState_TimedParticleEffect
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* PSTemplate; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FName SocketName; // 0x0038 (Size: 0x8, Type: NameProperty)
    std::uint8_t LocationOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDestroyAtEnd; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAnimNotifyState_TimedParticleEffect, PSTemplate) == 48, "Offset mismatch for UAnimNotifyState_TimedParticleEffect::PSTemplate");
static_assert(offsetof(UAnimNotifyState_TimedParticleEffect, SocketName) == 56, "Offset mismatch for UAnimNotifyState_TimedParticleEffect::SocketName");
static_assert(offsetof(UAnimNotifyState_TimedParticleEffect, LocationOffset) == 64, "Offset mismatch for UAnimNotifyState_TimedParticleEffect::LocationOffset");
static_assert(offsetof(UAnimNotifyState_TimedParticleEffect, RotationOffset) == 88, "Offset mismatch for UAnimNotifyState_TimedParticleEffect::RotationOffset");
static_assert(offsetof(UAnimNotifyState_TimedParticleEffect, bDestroyAtEnd) == 112, "Offset mismatch for UAnimNotifyState_TimedParticleEffect::bDestroyAtEnd");

// /Script/CascadeRuntime.AnimNotifyState_Trail
// Kind: Class; super: AnimNotifyState
class UAnimNotifyState_Trail
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* PSTemplate; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FirstSocketName[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t SecondSocketName[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    std::uint8_t WidthScaleMode; // 0x0040 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::uint8_t WidthScaleCurve[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    std::uint8_t bRecycleSpawnedSystems; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAnimNotifyState_Trail, PSTemplate) == 48, "Offset mismatch for UAnimNotifyState_Trail::PSTemplate");
static_assert(offsetof(UAnimNotifyState_Trail, FirstSocketName) == 56, "Offset mismatch for UAnimNotifyState_Trail::FirstSocketName");
static_assert(offsetof(UAnimNotifyState_Trail, SecondSocketName) == 60, "Offset mismatch for UAnimNotifyState_Trail::SecondSocketName");
static_assert(offsetof(UAnimNotifyState_Trail, WidthScaleMode) == 64, "Offset mismatch for UAnimNotifyState_Trail::WidthScaleMode");
static_assert(offsetof(UAnimNotifyState_Trail, WidthScaleCurve) == 68, "Offset mismatch for UAnimNotifyState_Trail::WidthScaleCurve");
static_assert(offsetof(UAnimNotifyState_Trail, bRecycleSpawnedSystems) == 72, "Offset mismatch for UAnimNotifyState_Trail::bRecycleSpawnedSystems");

// /Script/CascadeRuntime.AnimNotify_PlayParticleEffect
// Kind: Class; super: AnimNotify
class UAnimNotify_PlayParticleEffect
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* PSTemplate; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocationOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x40]; // 0x0070 (Size: 0x40, Type: StructProperty)
    std::uint8_t Attached; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    FName SocketName; // 0x00B4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UAnimNotify_PlayParticleEffect, PSTemplate) == 56, "Offset mismatch for UAnimNotify_PlayParticleEffect::PSTemplate");
static_assert(offsetof(UAnimNotify_PlayParticleEffect, LocationOffset) == 64, "Offset mismatch for UAnimNotify_PlayParticleEffect::LocationOffset");
static_assert(offsetof(UAnimNotify_PlayParticleEffect, RotationOffset) == 88, "Offset mismatch for UAnimNotify_PlayParticleEffect::RotationOffset");
static_assert(offsetof(UAnimNotify_PlayParticleEffect, Scale) == 112, "Offset mismatch for UAnimNotify_PlayParticleEffect::Scale");
static_assert(offsetof(UAnimNotify_PlayParticleEffect, Attached) == 176, "Offset mismatch for UAnimNotify_PlayParticleEffect::Attached");
static_assert(offsetof(UAnimNotify_PlayParticleEffect, SocketName) == 180, "Offset mismatch for UAnimNotify_PlayParticleEffect::SocketName");

// /Script/CascadeRuntime.CascadeFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCascadeFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CascadeRuntime.DistributionFloatParticleParameter
// Kind: Class; super: DistributionFloatParameterBase
class UDistributionFloatParticleParameter
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t ParameterName[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    float MinInput; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MaxInput; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float MinOutput; // 0x004C (Size: 0x4, Type: FloatProperty)
    float MaxOutput; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ParamMode; // 0x0054 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UDistributionFloatParticleParameter, ParameterName) == 64, "Offset mismatch for UDistributionFloatParticleParameter::ParameterName");
static_assert(offsetof(UDistributionFloatParticleParameter, MinInput) == 68, "Offset mismatch for UDistributionFloatParticleParameter::MinInput");
static_assert(offsetof(UDistributionFloatParticleParameter, MaxInput) == 72, "Offset mismatch for UDistributionFloatParticleParameter::MaxInput");
static_assert(offsetof(UDistributionFloatParticleParameter, MinOutput) == 76, "Offset mismatch for UDistributionFloatParticleParameter::MinOutput");
static_assert(offsetof(UDistributionFloatParticleParameter, MaxOutput) == 80, "Offset mismatch for UDistributionFloatParticleParameter::MaxOutput");
static_assert(offsetof(UDistributionFloatParticleParameter, ParamMode) == 84, "Offset mismatch for UDistributionFloatParticleParameter::ParamMode");

// /Script/CascadeRuntime.DistributionVectorParticleParameter
// Kind: Class; super: DistributionVectorParameterBase
class UDistributionVectorParticleParameter
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    FName ParameterName; // 0x0058 (Size: 0x8, Type: NameProperty)
    std::uint8_t MinInput[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxInput[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinOutput[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxOutput[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ParamModes; // 0x00C0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UDistributionVectorParticleParameter, ParameterName) == 88, "Offset mismatch for UDistributionVectorParticleParameter::ParameterName");
static_assert(offsetof(UDistributionVectorParticleParameter, MinInput) == 96, "Offset mismatch for UDistributionVectorParticleParameter::MinInput");
static_assert(offsetof(UDistributionVectorParticleParameter, MaxInput) == 120, "Offset mismatch for UDistributionVectorParticleParameter::MaxInput");
static_assert(offsetof(UDistributionVectorParticleParameter, MinOutput) == 144, "Offset mismatch for UDistributionVectorParticleParameter::MinOutput");
static_assert(offsetof(UDistributionVectorParticleParameter, MaxOutput) == 168, "Offset mismatch for UDistributionVectorParticleParameter::MaxOutput");
static_assert(offsetof(UDistributionVectorParticleParameter, ParamModes) == 192, "Offset mismatch for UDistributionVectorParticleParameter::ParamModes");

// /Script/CascadeRuntime.Emitter
// Kind: Class; super: Actor
class UEmitter
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ParticleSystemComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCurrentlyActive; // 0x0278 (Size: 0x1, Type: BoolProperty)
    // 0x0278 BoolProperty bDestroyOnSystemFinish (shared storage)
    // 0x0278 BoolProperty bPostUpdateTickGroup (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0279
    FMulticastInlineDelegate OnParticleSpawn; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnParticleBurst; // 0x0290 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnParticleDeath; // 0x02A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnParticleCollide; // 0x02B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UEmitter, ParticleSystemComponent) == 624, "Offset mismatch for UEmitter::ParticleSystemComponent");
static_assert(offsetof(UEmitter, bCurrentlyActive) == 632, "Offset mismatch for UEmitter::bCurrentlyActive");
static_assert(offsetof(UEmitter, OnParticleSpawn) == 640, "Offset mismatch for UEmitter::OnParticleSpawn");
static_assert(offsetof(UEmitter, OnParticleBurst) == 656, "Offset mismatch for UEmitter::OnParticleBurst");
static_assert(offsetof(UEmitter, OnParticleDeath) == 672, "Offset mismatch for UEmitter::OnParticleDeath");
static_assert(offsetof(UEmitter, OnParticleCollide) == 688, "Offset mismatch for UEmitter::OnParticleCollide");

// /Script/CascadeRuntime.EmitterCameraLensEffectBase
// Kind: Class; super: Emitter
class UEmitterCameraLensEffectBase
{
public:
    std::uint8_t Pad_0000[0x2C8]; // 0x0000
    void* PS_CameraEffect; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* BaseCamera; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x02D8
    std::uint8_t RelativeTransform[0x60]; // 0x02E0 (Size: 0x60, Type: StructProperty)
    float BaseFOV; // 0x0340 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowMultipleInstances; // 0x0344 (Size: 0x1, Type: BoolProperty)
    // 0x0344 BoolProperty bResetWhenRetriggered (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0345
    TArray<void*> EmittersToTreatAsSame; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    float DistFromCamera; // 0x0358 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UEmitterCameraLensEffectBase, PS_CameraEffect) == 712, "Offset mismatch for UEmitterCameraLensEffectBase::PS_CameraEffect");
static_assert(offsetof(UEmitterCameraLensEffectBase, BaseCamera) == 720, "Offset mismatch for UEmitterCameraLensEffectBase::BaseCamera");
static_assert(offsetof(UEmitterCameraLensEffectBase, RelativeTransform) == 736, "Offset mismatch for UEmitterCameraLensEffectBase::RelativeTransform");
static_assert(offsetof(UEmitterCameraLensEffectBase, BaseFOV) == 832, "Offset mismatch for UEmitterCameraLensEffectBase::BaseFOV");
static_assert(offsetof(UEmitterCameraLensEffectBase, bAllowMultipleInstances) == 836, "Offset mismatch for UEmitterCameraLensEffectBase::bAllowMultipleInstances");
static_assert(offsetof(UEmitterCameraLensEffectBase, EmittersToTreatAsSame) == 840, "Offset mismatch for UEmitterCameraLensEffectBase::EmittersToTreatAsSame");
static_assert(offsetof(UEmitterCameraLensEffectBase, DistFromCamera) == 856, "Offset mismatch for UEmitterCameraLensEffectBase::DistFromCamera");

// /Script/CascadeRuntime.ParticleEmitter
// Kind: Class; super: Object
class UParticleEmitter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EmitterName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::int32_t SubUVDataOffset; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t EmitterRenderMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SignificanceLevel; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0032
    std::uint8_t ConvertedModules; // 0x0033 (Size: 0x1, Type: BoolProperty)
    // 0x0033 BoolProperty bCookedOut (shared storage)
    // 0x0033 BoolProperty bDisabledLODsKeepEmitterAlive (shared storage)
    // 0x0033 BoolProperty bIsSoloing (shared storage)
    // 0x0033 BoolProperty bUseLegacySpawningBehavior (shared storage)
    std::uint8_t bDisableWhenInsignficant; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    TArray<void*> LODLevels; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PeakActiveParticles; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t InitialAllocationCount; // 0x004C (Size: 0x4, Type: IntProperty)
    float QualityLevelSpawnRateScale; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint32_t DetailModeBitmask; // 0x0054 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UParticleEmitter, EmitterName) == 40, "Offset mismatch for UParticleEmitter::EmitterName");
static_assert(offsetof(UParticleEmitter, SubUVDataOffset) == 44, "Offset mismatch for UParticleEmitter::SubUVDataOffset");
static_assert(offsetof(UParticleEmitter, EmitterRenderMode) == 48, "Offset mismatch for UParticleEmitter::EmitterRenderMode");
static_assert(offsetof(UParticleEmitter, SignificanceLevel) == 49, "Offset mismatch for UParticleEmitter::SignificanceLevel");
static_assert(offsetof(UParticleEmitter, ConvertedModules) == 51, "Offset mismatch for UParticleEmitter::ConvertedModules");
static_assert(offsetof(UParticleEmitter, bDisableWhenInsignficant) == 52, "Offset mismatch for UParticleEmitter::bDisableWhenInsignficant");
static_assert(offsetof(UParticleEmitter, LODLevels) == 56, "Offset mismatch for UParticleEmitter::LODLevels");
static_assert(offsetof(UParticleEmitter, PeakActiveParticles) == 72, "Offset mismatch for UParticleEmitter::PeakActiveParticles");
static_assert(offsetof(UParticleEmitter, InitialAllocationCount) == 76, "Offset mismatch for UParticleEmitter::InitialAllocationCount");
static_assert(offsetof(UParticleEmitter, QualityLevelSpawnRateScale) == 80, "Offset mismatch for UParticleEmitter::QualityLevelSpawnRateScale");
static_assert(offsetof(UParticleEmitter, DetailModeBitmask) == 84, "Offset mismatch for UParticleEmitter::DetailModeBitmask");

// /Script/CascadeRuntime.ParticleEventManager
// Kind: Class; super: Actor
class UParticleEventManager
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

static_assert(offsetof(UParticleEventManager, PrimaryActorTick) == 40, "Offset mismatch for UParticleEventManager::PrimaryActorTick");
static_assert(offsetof(UParticleEventManager, bAlwaysRelevant) == 88, "Offset mismatch for UParticleEventManager::bAlwaysRelevant");
static_assert(offsetof(UParticleEventManager, bExchangedRoles) == 89, "Offset mismatch for UParticleEventManager::bExchangedRoles");
static_assert(offsetof(UParticleEventManager, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UParticleEventManager::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UParticleEventManager, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UParticleEventManager::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UParticleEventManager, bActorEnableCollision) == 93, "Offset mismatch for UParticleEventManager::bActorEnableCollision");
static_assert(offsetof(UParticleEventManager, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UParticleEventManager::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UParticleEventManager, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UParticleEventManager::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UParticleEventManager, RemoteRole) == 96, "Offset mismatch for UParticleEventManager::RemoteRole");
static_assert(offsetof(UParticleEventManager, InitialLifeSpan) == 100, "Offset mismatch for UParticleEventManager::InitialLifeSpan");
static_assert(offsetof(UParticleEventManager, CustomTimeDilation) == 104, "Offset mismatch for UParticleEventManager::CustomTimeDilation");
static_assert(offsetof(UParticleEventManager, RayTracingGroupId) == 108, "Offset mismatch for UParticleEventManager::RayTracingGroupId");
static_assert(offsetof(UParticleEventManager, AttachmentReplication) == 112, "Offset mismatch for UParticleEventManager::AttachmentReplication");
static_assert(offsetof(UParticleEventManager, ReplicatedMovement) == 208, "Offset mismatch for UParticleEventManager::ReplicatedMovement");
static_assert(offsetof(UParticleEventManager, Owner) == 344, "Offset mismatch for UParticleEventManager::Owner");
static_assert(offsetof(UParticleEventManager, NetDriverName) == 352, "Offset mismatch for UParticleEventManager::NetDriverName");
static_assert(offsetof(UParticleEventManager, Role) == 356, "Offset mismatch for UParticleEventManager::Role");
static_assert(offsetof(UParticleEventManager, NetDormancy) == 357, "Offset mismatch for UParticleEventManager::NetDormancy");
static_assert(offsetof(UParticleEventManager, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UParticleEventManager::SpawnCollisionHandlingMethod");
static_assert(offsetof(UParticleEventManager, AutoReceiveInput) == 359, "Offset mismatch for UParticleEventManager::AutoReceiveInput");
static_assert(offsetof(UParticleEventManager, InputPriority) == 360, "Offset mismatch for UParticleEventManager::InputPriority");
static_assert(offsetof(UParticleEventManager, InputComponent) == 368, "Offset mismatch for UParticleEventManager::InputComponent");
static_assert(offsetof(UParticleEventManager, NetTag) == 376, "Offset mismatch for UParticleEventManager::NetTag");
static_assert(offsetof(UParticleEventManager, NetCullDistanceSquared) == 380, "Offset mismatch for UParticleEventManager::NetCullDistanceSquared");
static_assert(offsetof(UParticleEventManager, NetUpdateFrequency) == 384, "Offset mismatch for UParticleEventManager::NetUpdateFrequency");
static_assert(offsetof(UParticleEventManager, MinNetUpdateFrequency) == 388, "Offset mismatch for UParticleEventManager::MinNetUpdateFrequency");
static_assert(offsetof(UParticleEventManager, NetPriority) == 392, "Offset mismatch for UParticleEventManager::NetPriority");
static_assert(offsetof(UParticleEventManager, PhysicsReplicationMode) == 396, "Offset mismatch for UParticleEventManager::PhysicsReplicationMode");
static_assert(offsetof(UParticleEventManager, Instigator) == 408, "Offset mismatch for UParticleEventManager::Instigator");
static_assert(offsetof(UParticleEventManager, Children) == 416, "Offset mismatch for UParticleEventManager::Children");
static_assert(offsetof(UParticleEventManager, RootComponent) == 432, "Offset mismatch for UParticleEventManager::RootComponent");
static_assert(offsetof(UParticleEventManager, HLODLayer) == 448, "Offset mismatch for UParticleEventManager::HLODLayer");
static_assert(offsetof(UParticleEventManager, Layers) == 456, "Offset mismatch for UParticleEventManager::Layers");
static_assert(offsetof(UParticleEventManager, ParentComponent) == 472, "Offset mismatch for UParticleEventManager::ParentComponent");
static_assert(offsetof(UParticleEventManager, Tags) == 496, "Offset mismatch for UParticleEventManager::Tags");
static_assert(offsetof(UParticleEventManager, OnTakeAnyDamage) == 512, "Offset mismatch for UParticleEventManager::OnTakeAnyDamage");
static_assert(offsetof(UParticleEventManager, OnTakePointDamage) == 513, "Offset mismatch for UParticleEventManager::OnTakePointDamage");
static_assert(offsetof(UParticleEventManager, OnTakeRadialDamage) == 514, "Offset mismatch for UParticleEventManager::OnTakeRadialDamage");
static_assert(offsetof(UParticleEventManager, OnActorBeginOverlap) == 515, "Offset mismatch for UParticleEventManager::OnActorBeginOverlap");
static_assert(offsetof(UParticleEventManager, OnActorEndOverlap) == 516, "Offset mismatch for UParticleEventManager::OnActorEndOverlap");
static_assert(offsetof(UParticleEventManager, OnBeginCursorOver) == 517, "Offset mismatch for UParticleEventManager::OnBeginCursorOver");
static_assert(offsetof(UParticleEventManager, OnEndCursorOver) == 518, "Offset mismatch for UParticleEventManager::OnEndCursorOver");
static_assert(offsetof(UParticleEventManager, OnClicked) == 519, "Offset mismatch for UParticleEventManager::OnClicked");
static_assert(offsetof(UParticleEventManager, OnReleased) == 520, "Offset mismatch for UParticleEventManager::OnReleased");
static_assert(offsetof(UParticleEventManager, OnInputTouchBegin) == 521, "Offset mismatch for UParticleEventManager::OnInputTouchBegin");
static_assert(offsetof(UParticleEventManager, OnInputTouchEnd) == 522, "Offset mismatch for UParticleEventManager::OnInputTouchEnd");
static_assert(offsetof(UParticleEventManager, OnInputTouchEnter) == 523, "Offset mismatch for UParticleEventManager::OnInputTouchEnter");
static_assert(offsetof(UParticleEventManager, OnInputTouchLeave) == 524, "Offset mismatch for UParticleEventManager::OnInputTouchLeave");
static_assert(offsetof(UParticleEventManager, OnActorHit) == 525, "Offset mismatch for UParticleEventManager::OnActorHit");
static_assert(offsetof(UParticleEventManager, OnDestroyed) == 526, "Offset mismatch for UParticleEventManager::OnDestroyed");
static_assert(offsetof(UParticleEventManager, OnEndPlay) == 527, "Offset mismatch for UParticleEventManager::OnEndPlay");
static_assert(offsetof(UParticleEventManager, InstanceComponents) == 592, "Offset mismatch for UParticleEventManager::InstanceComponents");
static_assert(offsetof(UParticleEventManager, BlueprintCreatedComponents) == 608, "Offset mismatch for UParticleEventManager::BlueprintCreatedComponents");

// /Script/CascadeRuntime.ParticleLODLevel
// Kind: Class; super: Object
class UParticleLODLevel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t Level; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnabled; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    void* RequiredModule; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Modules; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    void* TypeDataModule; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* SpawnModule; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* EventGenerator; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SpawningModules; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnModules; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UpdateModules; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OrbitModules; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventReceiverModules; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConvertedModules; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B1
    std::int32_t PeakActiveParticles; // 0x00B4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UParticleLODLevel, Level) == 40, "Offset mismatch for UParticleLODLevel::Level");
static_assert(offsetof(UParticleLODLevel, bEnabled) == 44, "Offset mismatch for UParticleLODLevel::bEnabled");
static_assert(offsetof(UParticleLODLevel, RequiredModule) == 48, "Offset mismatch for UParticleLODLevel::RequiredModule");
static_assert(offsetof(UParticleLODLevel, Modules) == 56, "Offset mismatch for UParticleLODLevel::Modules");
static_assert(offsetof(UParticleLODLevel, TypeDataModule) == 72, "Offset mismatch for UParticleLODLevel::TypeDataModule");
static_assert(offsetof(UParticleLODLevel, SpawnModule) == 80, "Offset mismatch for UParticleLODLevel::SpawnModule");
static_assert(offsetof(UParticleLODLevel, EventGenerator) == 88, "Offset mismatch for UParticleLODLevel::EventGenerator");
static_assert(offsetof(UParticleLODLevel, SpawningModules) == 96, "Offset mismatch for UParticleLODLevel::SpawningModules");
static_assert(offsetof(UParticleLODLevel, SpawnModules) == 112, "Offset mismatch for UParticleLODLevel::SpawnModules");
static_assert(offsetof(UParticleLODLevel, UpdateModules) == 128, "Offset mismatch for UParticleLODLevel::UpdateModules");
static_assert(offsetof(UParticleLODLevel, OrbitModules) == 144, "Offset mismatch for UParticleLODLevel::OrbitModules");
static_assert(offsetof(UParticleLODLevel, EventReceiverModules) == 160, "Offset mismatch for UParticleLODLevel::EventReceiverModules");
static_assert(offsetof(UParticleLODLevel, ConvertedModules) == 176, "Offset mismatch for UParticleLODLevel::ConvertedModules");
static_assert(offsetof(UParticleLODLevel, PeakActiveParticles) == 180, "Offset mismatch for UParticleLODLevel::PeakActiveParticles");

// /Script/CascadeRuntime.ParticleModule
// Kind: Class; super: Object
class UParticleModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModule, b3DDrawMode) == 40, "Offset mismatch for UParticleModule::b3DDrawMode");
static_assert(offsetof(UParticleModule, LODDuplicate) == 41, "Offset mismatch for UParticleModule::LODDuplicate");
static_assert(offsetof(UParticleModule, LODValidity) == 42, "Offset mismatch for UParticleModule::LODValidity");

// /Script/CascadeRuntime.ParticleModuleAcceleration
// Kind: Class; super: ParticleModuleAccelerationBase
class UParticleModuleAcceleration
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Acceleration[0x60]; // 0x0038 (Size: 0x60, Type: StructProperty)
    std::uint8_t bApplyOwnerScale; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleAcceleration, Acceleration) == 56, "Offset mismatch for UParticleModuleAcceleration::Acceleration");
static_assert(offsetof(UParticleModuleAcceleration, bApplyOwnerScale) == 152, "Offset mismatch for UParticleModuleAcceleration::bApplyOwnerScale");

// /Script/CascadeRuntime.ParticleModuleAccelerationBase
// Kind: Class; super: ParticleModule
class UParticleModuleAccelerationBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bAlwaysInWorldSpace; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleAccelerationBase, bAlwaysInWorldSpace) == 48, "Offset mismatch for UParticleModuleAccelerationBase::bAlwaysInWorldSpace");

// /Script/CascadeRuntime.ParticleModuleAccelerationConstant
// Kind: Class; super: ParticleModuleAccelerationBase
class UParticleModuleAccelerationConstant
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Acceleration[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleAccelerationConstant, Acceleration) == 56, "Offset mismatch for UParticleModuleAccelerationConstant::Acceleration");

// /Script/CascadeRuntime.ParticleModuleAccelerationDrag
// Kind: Class; super: ParticleModuleAccelerationBase
class UParticleModuleAccelerationDrag
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* DragCoefficient; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DragCoefficientRaw[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleAccelerationDrag, DragCoefficient) == 56, "Offset mismatch for UParticleModuleAccelerationDrag::DragCoefficient");
static_assert(offsetof(UParticleModuleAccelerationDrag, DragCoefficientRaw) == 64, "Offset mismatch for UParticleModuleAccelerationDrag::DragCoefficientRaw");

// /Script/CascadeRuntime.ParticleModuleAccelerationDragScaleOverLife
// Kind: Class; super: ParticleModuleAccelerationBase
class UParticleModuleAccelerationDragScaleOverLife
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* DragScale; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DragScaleRaw[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleAccelerationDragScaleOverLife, DragScale) == 56, "Offset mismatch for UParticleModuleAccelerationDragScaleOverLife::DragScale");
static_assert(offsetof(UParticleModuleAccelerationDragScaleOverLife, DragScaleRaw) == 64, "Offset mismatch for UParticleModuleAccelerationDragScaleOverLife::DragScaleRaw");

// /Script/CascadeRuntime.ParticleModuleAccelerationOverLifetime
// Kind: Class; super: ParticleModuleAccelerationBase
class UParticleModuleAccelerationOverLifetime
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AccelOverLife[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleAccelerationOverLifetime, AccelOverLife) == 56, "Offset mismatch for UParticleModuleAccelerationOverLifetime::AccelOverLife");

// /Script/CascadeRuntime.ParticleModuleAttractorBase
// Kind: Class; super: ParticleModule
class UParticleModuleAttractorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleAttractorBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleAttractorBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleAttractorBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleAttractorBase::LODDuplicate");
static_assert(offsetof(UParticleModuleAttractorBase, LODValidity) == 42, "Offset mismatch for UParticleModuleAttractorBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleAttractorLine
// Kind: Class; super: ParticleModuleAttractorBase
class UParticleModuleAttractorLine
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EndPoint0[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndPoint1[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t Range[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    std::uint8_t Strength[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleAttractorLine, EndPoint0) == 48, "Offset mismatch for UParticleModuleAttractorLine::EndPoint0");
static_assert(offsetof(UParticleModuleAttractorLine, EndPoint1) == 72, "Offset mismatch for UParticleModuleAttractorLine::EndPoint1");
static_assert(offsetof(UParticleModuleAttractorLine, Range) == 96, "Offset mismatch for UParticleModuleAttractorLine::Range");
static_assert(offsetof(UParticleModuleAttractorLine, Strength) == 144, "Offset mismatch for UParticleModuleAttractorLine::Strength");

// /Script/CascadeRuntime.ParticleModuleAttractorParticle
// Kind: Class; super: ParticleModuleAttractorBase
class UParticleModuleAttractorParticle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName EmitterName; // 0x0030 (Size: 0x8, Type: NameProperty)
    std::uint8_t Range[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t bStrengthByDistance; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t Strength[0x30]; // 0x0070 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAffectBaseVelocity; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00A1
    std::uint8_t SelectionMethod; // 0x00A4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00A5
    std::uint8_t bInheritSourceVel; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    // 0x00A8 BoolProperty bRenewSource (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x00A9
    std::int32_t LastSelIndex; // 0x00AC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UParticleModuleAttractorParticle, EmitterName) == 48, "Offset mismatch for UParticleModuleAttractorParticle::EmitterName");
static_assert(offsetof(UParticleModuleAttractorParticle, Range) == 56, "Offset mismatch for UParticleModuleAttractorParticle::Range");
static_assert(offsetof(UParticleModuleAttractorParticle, bStrengthByDistance) == 104, "Offset mismatch for UParticleModuleAttractorParticle::bStrengthByDistance");
static_assert(offsetof(UParticleModuleAttractorParticle, Strength) == 112, "Offset mismatch for UParticleModuleAttractorParticle::Strength");
static_assert(offsetof(UParticleModuleAttractorParticle, bAffectBaseVelocity) == 160, "Offset mismatch for UParticleModuleAttractorParticle::bAffectBaseVelocity");
static_assert(offsetof(UParticleModuleAttractorParticle, SelectionMethod) == 164, "Offset mismatch for UParticleModuleAttractorParticle::SelectionMethod");
static_assert(offsetof(UParticleModuleAttractorParticle, bInheritSourceVel) == 168, "Offset mismatch for UParticleModuleAttractorParticle::bInheritSourceVel");
static_assert(offsetof(UParticleModuleAttractorParticle, LastSelIndex) == 172, "Offset mismatch for UParticleModuleAttractorParticle::LastSelIndex");

// /Script/CascadeRuntime.ParticleModuleAttractorPoint
// Kind: Class; super: ParticleModuleAttractorBase
class UParticleModuleAttractorPoint
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Position[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t Range[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t Strength[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Negative_X; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    // 0x00F0 BoolProperty Positive_X (shared storage)
    // 0x00F0 BoolProperty Positive_Y (shared storage)
    // 0x00F0 BoolProperty Positive_Z (shared storage)
    // 0x00F0 BoolProperty StrengthByDistance (shared storage)
    // 0x00F0 BoolProperty bAffectBaseVelocity (shared storage)
    // 0x00F0 BoolProperty bOverrideVelocity (shared storage)
    // 0x00F0 BoolProperty bUseWorldSpacePosition (shared storage)
    std::uint8_t Negative_Y; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    // 0x00F1 BoolProperty Negative_Z (shared storage)
};

static_assert(offsetof(UParticleModuleAttractorPoint, Position) == 48, "Offset mismatch for UParticleModuleAttractorPoint::Position");
static_assert(offsetof(UParticleModuleAttractorPoint, Range) == 144, "Offset mismatch for UParticleModuleAttractorPoint::Range");
static_assert(offsetof(UParticleModuleAttractorPoint, Strength) == 192, "Offset mismatch for UParticleModuleAttractorPoint::Strength");
static_assert(offsetof(UParticleModuleAttractorPoint, Negative_X) == 240, "Offset mismatch for UParticleModuleAttractorPoint::Negative_X");
static_assert(offsetof(UParticleModuleAttractorPoint, Negative_Y) == 241, "Offset mismatch for UParticleModuleAttractorPoint::Negative_Y");

// /Script/CascadeRuntime.ParticleModuleAttractorPointGravity
// Kind: Class; super: ParticleModuleAttractorBase
class UParticleModuleAttractorPointGravity
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Position[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    void* Strength; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StrengthRaw[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleAttractorPointGravity, Position) == 48, "Offset mismatch for UParticleModuleAttractorPointGravity::Position");
static_assert(offsetof(UParticleModuleAttractorPointGravity, Radius) == 72, "Offset mismatch for UParticleModuleAttractorPointGravity::Radius");
static_assert(offsetof(UParticleModuleAttractorPointGravity, Strength) == 80, "Offset mismatch for UParticleModuleAttractorPointGravity::Strength");
static_assert(offsetof(UParticleModuleAttractorPointGravity, StrengthRaw) == 88, "Offset mismatch for UParticleModuleAttractorPointGravity::StrengthRaw");

// /Script/CascadeRuntime.ParticleModuleBeamBase
// Kind: Class; super: ParticleModule
class UParticleModuleBeamBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleBeamBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleBeamBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleBeamBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleBeamBase::LODDuplicate");
static_assert(offsetof(UParticleModuleBeamBase, LODValidity) == 42, "Offset mismatch for UParticleModuleBeamBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleBeamModifier
// Kind: Class; super: ParticleModuleBeamBase
class UParticleModuleBeamModifier
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ModifierType; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t PositionOptions[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    std::uint8_t Position[0x60]; // 0x0038 (Size: 0x60, Type: StructProperty)
    std::uint8_t TangentOptions[0x8]; // 0x0098 (Size: 0x8, Type: StructProperty)
    std::uint8_t Tangent[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bAbsoluteTangent; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0101
    std::uint8_t StrengthOptions[0x4]; // 0x0104 (Size: 0x4, Type: StructProperty)
    std::uint8_t Strength[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleBeamModifier, ModifierType) == 48, "Offset mismatch for UParticleModuleBeamModifier::ModifierType");
static_assert(offsetof(UParticleModuleBeamModifier, PositionOptions) == 52, "Offset mismatch for UParticleModuleBeamModifier::PositionOptions");
static_assert(offsetof(UParticleModuleBeamModifier, Position) == 56, "Offset mismatch for UParticleModuleBeamModifier::Position");
static_assert(offsetof(UParticleModuleBeamModifier, TangentOptions) == 152, "Offset mismatch for UParticleModuleBeamModifier::TangentOptions");
static_assert(offsetof(UParticleModuleBeamModifier, Tangent) == 160, "Offset mismatch for UParticleModuleBeamModifier::Tangent");
static_assert(offsetof(UParticleModuleBeamModifier, bAbsoluteTangent) == 256, "Offset mismatch for UParticleModuleBeamModifier::bAbsoluteTangent");
static_assert(offsetof(UParticleModuleBeamModifier, StrengthOptions) == 260, "Offset mismatch for UParticleModuleBeamModifier::StrengthOptions");
static_assert(offsetof(UParticleModuleBeamModifier, Strength) == 264, "Offset mismatch for UParticleModuleBeamModifier::Strength");

// /Script/CascadeRuntime.ParticleModuleBeamNoise
// Kind: Class; super: ParticleModuleBeamBase
class UParticleModuleBeamNoise
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bLowFreq_Enabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::int32_t Frequency; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t Frequency_LowRange; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x003C
    std::uint8_t NoiseRange[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t NoiseRangeScale[0x30]; // 0x00A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bNRScaleEmitterTime; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00D1
    std::uint8_t NoiseSpeed[0x60]; // 0x00D8 (Size: 0x60, Type: StructProperty)
    std::uint8_t bSmooth; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0139
    float NoiseLockRadius; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNoiseLock; // 0x0140 (Size: 0x1, Type: BoolProperty)
    // 0x0140 BoolProperty bOscillate (shared storage)
    std::uint8_t Pad_0005[0x3]; // 0x0141
    float NoiseLockTime; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float NoiseTension; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseNoiseTangents; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x014D
    std::uint8_t NoiseTangentStrength[0x30]; // 0x0150 (Size: 0x30, Type: StructProperty)
    std::int32_t NoiseTessellation; // 0x0180 (Size: 0x4, Type: IntProperty)
    std::uint8_t bTargetNoise; // 0x0184 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0185
    float FrequencyDistance; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyNoiseScale; // 0x018C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x018D
    std::uint8_t NoiseScale[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleBeamNoise, bLowFreq_Enabled) == 48, "Offset mismatch for UParticleModuleBeamNoise::bLowFreq_Enabled");
static_assert(offsetof(UParticleModuleBeamNoise, Frequency) == 52, "Offset mismatch for UParticleModuleBeamNoise::Frequency");
static_assert(offsetof(UParticleModuleBeamNoise, Frequency_LowRange) == 56, "Offset mismatch for UParticleModuleBeamNoise::Frequency_LowRange");
static_assert(offsetof(UParticleModuleBeamNoise, NoiseRange) == 64, "Offset mismatch for UParticleModuleBeamNoise::NoiseRange");
static_assert(offsetof(UParticleModuleBeamNoise, NoiseRangeScale) == 160, "Offset mismatch for UParticleModuleBeamNoise::NoiseRangeScale");
static_assert(offsetof(UParticleModuleBeamNoise, bNRScaleEmitterTime) == 208, "Offset mismatch for UParticleModuleBeamNoise::bNRScaleEmitterTime");
static_assert(offsetof(UParticleModuleBeamNoise, NoiseSpeed) == 216, "Offset mismatch for UParticleModuleBeamNoise::NoiseSpeed");
static_assert(offsetof(UParticleModuleBeamNoise, bSmooth) == 312, "Offset mismatch for UParticleModuleBeamNoise::bSmooth");
static_assert(offsetof(UParticleModuleBeamNoise, NoiseLockRadius) == 316, "Offset mismatch for UParticleModuleBeamNoise::NoiseLockRadius");
static_assert(offsetof(UParticleModuleBeamNoise, bNoiseLock) == 320, "Offset mismatch for UParticleModuleBeamNoise::bNoiseLock");
static_assert(offsetof(UParticleModuleBeamNoise, NoiseLockTime) == 324, "Offset mismatch for UParticleModuleBeamNoise::NoiseLockTime");
static_assert(offsetof(UParticleModuleBeamNoise, NoiseTension) == 328, "Offset mismatch for UParticleModuleBeamNoise::NoiseTension");
static_assert(offsetof(UParticleModuleBeamNoise, bUseNoiseTangents) == 332, "Offset mismatch for UParticleModuleBeamNoise::bUseNoiseTangents");
static_assert(offsetof(UParticleModuleBeamNoise, NoiseTangentStrength) == 336, "Offset mismatch for UParticleModuleBeamNoise::NoiseTangentStrength");
static_assert(offsetof(UParticleModuleBeamNoise, NoiseTessellation) == 384, "Offset mismatch for UParticleModuleBeamNoise::NoiseTessellation");
static_assert(offsetof(UParticleModuleBeamNoise, bTargetNoise) == 388, "Offset mismatch for UParticleModuleBeamNoise::bTargetNoise");
static_assert(offsetof(UParticleModuleBeamNoise, FrequencyDistance) == 392, "Offset mismatch for UParticleModuleBeamNoise::FrequencyDistance");
static_assert(offsetof(UParticleModuleBeamNoise, bApplyNoiseScale) == 396, "Offset mismatch for UParticleModuleBeamNoise::bApplyNoiseScale");
static_assert(offsetof(UParticleModuleBeamNoise, NoiseScale) == 400, "Offset mismatch for UParticleModuleBeamNoise::NoiseScale");

// /Script/CascadeRuntime.ParticleModuleBeamSource
// Kind: Class; super: ParticleModuleBeamBase
class UParticleModuleBeamSource
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SourceMethod; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t SourceName[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSourceAbsolute; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    std::uint8_t Source[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t bLockSource; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00A1
    std::uint8_t SourceTangentMethod; // 0x00A4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00A5
    std::uint8_t SourceTangent[0x60]; // 0x00A8 (Size: 0x60, Type: StructProperty)
    std::uint8_t bLockSourceTangent; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0109
    std::uint8_t SourceStrength[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t bLockSourceStength; // 0x0140 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleBeamSource, SourceMethod) == 48, "Offset mismatch for UParticleModuleBeamSource::SourceMethod");
static_assert(offsetof(UParticleModuleBeamSource, SourceName) == 52, "Offset mismatch for UParticleModuleBeamSource::SourceName");
static_assert(offsetof(UParticleModuleBeamSource, bSourceAbsolute) == 56, "Offset mismatch for UParticleModuleBeamSource::bSourceAbsolute");
static_assert(offsetof(UParticleModuleBeamSource, Source) == 64, "Offset mismatch for UParticleModuleBeamSource::Source");
static_assert(offsetof(UParticleModuleBeamSource, bLockSource) == 160, "Offset mismatch for UParticleModuleBeamSource::bLockSource");
static_assert(offsetof(UParticleModuleBeamSource, SourceTangentMethod) == 164, "Offset mismatch for UParticleModuleBeamSource::SourceTangentMethod");
static_assert(offsetof(UParticleModuleBeamSource, SourceTangent) == 168, "Offset mismatch for UParticleModuleBeamSource::SourceTangent");
static_assert(offsetof(UParticleModuleBeamSource, bLockSourceTangent) == 264, "Offset mismatch for UParticleModuleBeamSource::bLockSourceTangent");
static_assert(offsetof(UParticleModuleBeamSource, SourceStrength) == 272, "Offset mismatch for UParticleModuleBeamSource::SourceStrength");
static_assert(offsetof(UParticleModuleBeamSource, bLockSourceStength) == 320, "Offset mismatch for UParticleModuleBeamSource::bLockSourceStength");

// /Script/CascadeRuntime.ParticleModuleBeamTarget
// Kind: Class; super: ParticleModuleBeamBase
class UParticleModuleBeamTarget
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t TargetMethod; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t TargetName[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    std::uint8_t Target[0x60]; // 0x0038 (Size: 0x60, Type: StructProperty)
    std::uint8_t bLockTarget; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bTargetAbsolute (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    std::uint8_t TargetTangentMethod; // 0x009C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x009D
    std::uint8_t TargetTangent[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bLockTargetTangent; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0101
    std::uint8_t TargetStrength[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t bLockTargetStength; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0139
    float LockRadius; // 0x013C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UParticleModuleBeamTarget, TargetMethod) == 48, "Offset mismatch for UParticleModuleBeamTarget::TargetMethod");
static_assert(offsetof(UParticleModuleBeamTarget, TargetName) == 52, "Offset mismatch for UParticleModuleBeamTarget::TargetName");
static_assert(offsetof(UParticleModuleBeamTarget, Target) == 56, "Offset mismatch for UParticleModuleBeamTarget::Target");
static_assert(offsetof(UParticleModuleBeamTarget, bLockTarget) == 152, "Offset mismatch for UParticleModuleBeamTarget::bLockTarget");
static_assert(offsetof(UParticleModuleBeamTarget, TargetTangentMethod) == 156, "Offset mismatch for UParticleModuleBeamTarget::TargetTangentMethod");
static_assert(offsetof(UParticleModuleBeamTarget, TargetTangent) == 160, "Offset mismatch for UParticleModuleBeamTarget::TargetTangent");
static_assert(offsetof(UParticleModuleBeamTarget, bLockTargetTangent) == 256, "Offset mismatch for UParticleModuleBeamTarget::bLockTargetTangent");
static_assert(offsetof(UParticleModuleBeamTarget, TargetStrength) == 264, "Offset mismatch for UParticleModuleBeamTarget::TargetStrength");
static_assert(offsetof(UParticleModuleBeamTarget, bLockTargetStength) == 312, "Offset mismatch for UParticleModuleBeamTarget::bLockTargetStength");
static_assert(offsetof(UParticleModuleBeamTarget, LockRadius) == 316, "Offset mismatch for UParticleModuleBeamTarget::LockRadius");

// /Script/CascadeRuntime.ParticleModuleCameraBase
// Kind: Class; super: ParticleModule
class UParticleModuleCameraBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleCameraBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleCameraBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleCameraBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleCameraBase::LODDuplicate");
static_assert(offsetof(UParticleModuleCameraBase, LODValidity) == 42, "Offset mismatch for UParticleModuleCameraBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleCameraOffset
// Kind: Class; super: ParticleModuleCameraBase
class UParticleModuleCameraOffset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t CameraOffset[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSpawnTimeOnly; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::uint8_t UpdateMethod; // 0x0064 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleCameraOffset, CameraOffset) == 48, "Offset mismatch for UParticleModuleCameraOffset::CameraOffset");
static_assert(offsetof(UParticleModuleCameraOffset, bSpawnTimeOnly) == 96, "Offset mismatch for UParticleModuleCameraOffset::bSpawnTimeOnly");
static_assert(offsetof(UParticleModuleCameraOffset, UpdateMethod) == 100, "Offset mismatch for UParticleModuleCameraOffset::UpdateMethod");

// /Script/CascadeRuntime.ParticleModuleCollision
// Kind: Class; super: ParticleModuleCollisionBase
class UParticleModuleCollision
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DampingFactor[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t DampingFactorRotation[0x60]; // 0x0090 (Size: 0x60, Type: StructProperty)
    std::uint8_t MaxCollisions[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t CollisionCompletionOption; // 0x0120 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> CollisionTypes; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0138
    std::uint8_t bApplyPhysics; // 0x0148 (Size: 0x1, Type: BoolProperty)
    // 0x0148 BoolProperty bIgnoreTriggerVolumes (shared storage)
    std::uint8_t Pad_0003[0x7]; // 0x0149
    std::uint8_t ParticleMass[0x30]; // 0x0150 (Size: 0x30, Type: StructProperty)
    float DirScalar; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOnlyVerticalNormalsDecrementCount; // 0x0184 (Size: 0x1, Type: BoolProperty)
    // 0x0184 BoolProperty bPawnsDoNotDecrementCount (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x0185
    float VerticalFudgeFactor; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x018C
    std::uint8_t DelayAmount[0x30]; // 0x0190 (Size: 0x30, Type: StructProperty)
    std::uint8_t bCollideOnlyIfVisible; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    // 0x01C0 BoolProperty bIgnoreSourceActor (shared storage)
    std::uint8_t Pad_0006[0x3]; // 0x01C1
    float MaxCollisionDistance; // 0x01C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UParticleModuleCollision, DampingFactor) == 48, "Offset mismatch for UParticleModuleCollision::DampingFactor");
static_assert(offsetof(UParticleModuleCollision, DampingFactorRotation) == 144, "Offset mismatch for UParticleModuleCollision::DampingFactorRotation");
static_assert(offsetof(UParticleModuleCollision, MaxCollisions) == 240, "Offset mismatch for UParticleModuleCollision::MaxCollisions");
static_assert(offsetof(UParticleModuleCollision, CollisionCompletionOption) == 288, "Offset mismatch for UParticleModuleCollision::CollisionCompletionOption");
static_assert(offsetof(UParticleModuleCollision, CollisionTypes) == 296, "Offset mismatch for UParticleModuleCollision::CollisionTypes");
static_assert(offsetof(UParticleModuleCollision, bApplyPhysics) == 328, "Offset mismatch for UParticleModuleCollision::bApplyPhysics");
static_assert(offsetof(UParticleModuleCollision, ParticleMass) == 336, "Offset mismatch for UParticleModuleCollision::ParticleMass");
static_assert(offsetof(UParticleModuleCollision, DirScalar) == 384, "Offset mismatch for UParticleModuleCollision::DirScalar");
static_assert(offsetof(UParticleModuleCollision, bOnlyVerticalNormalsDecrementCount) == 388, "Offset mismatch for UParticleModuleCollision::bOnlyVerticalNormalsDecrementCount");
static_assert(offsetof(UParticleModuleCollision, VerticalFudgeFactor) == 392, "Offset mismatch for UParticleModuleCollision::VerticalFudgeFactor");
static_assert(offsetof(UParticleModuleCollision, DelayAmount) == 400, "Offset mismatch for UParticleModuleCollision::DelayAmount");
static_assert(offsetof(UParticleModuleCollision, bCollideOnlyIfVisible) == 448, "Offset mismatch for UParticleModuleCollision::bCollideOnlyIfVisible");
static_assert(offsetof(UParticleModuleCollision, MaxCollisionDistance) == 452, "Offset mismatch for UParticleModuleCollision::MaxCollisionDistance");

// /Script/CascadeRuntime.ParticleModuleCollisionBase
// Kind: Class; super: ParticleModule
class UParticleModuleCollisionBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleCollisionBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleCollisionBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleCollisionBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleCollisionBase::LODDuplicate");
static_assert(offsetof(UParticleModuleCollisionBase, LODValidity) == 42, "Offset mismatch for UParticleModuleCollisionBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleCollisionGPU
// Kind: Class; super: ParticleModuleCollisionBase
class UParticleModuleCollisionGPU
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Resilience[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t ResilienceScaleOverLife[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    float Friction; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float RandomSpread; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float RandomDistribution; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float RadiusScale; // 0x009C (Size: 0x4, Type: FloatProperty)
    float RadiusBias; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Response; // 0x00A4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CollisionMode; // 0x00A5 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleCollisionGPU, Resilience) == 48, "Offset mismatch for UParticleModuleCollisionGPU::Resilience");
static_assert(offsetof(UParticleModuleCollisionGPU, ResilienceScaleOverLife) == 96, "Offset mismatch for UParticleModuleCollisionGPU::ResilienceScaleOverLife");
static_assert(offsetof(UParticleModuleCollisionGPU, Friction) == 144, "Offset mismatch for UParticleModuleCollisionGPU::Friction");
static_assert(offsetof(UParticleModuleCollisionGPU, RandomSpread) == 148, "Offset mismatch for UParticleModuleCollisionGPU::RandomSpread");
static_assert(offsetof(UParticleModuleCollisionGPU, RandomDistribution) == 152, "Offset mismatch for UParticleModuleCollisionGPU::RandomDistribution");
static_assert(offsetof(UParticleModuleCollisionGPU, RadiusScale) == 156, "Offset mismatch for UParticleModuleCollisionGPU::RadiusScale");
static_assert(offsetof(UParticleModuleCollisionGPU, RadiusBias) == 160, "Offset mismatch for UParticleModuleCollisionGPU::RadiusBias");
static_assert(offsetof(UParticleModuleCollisionGPU, Response) == 164, "Offset mismatch for UParticleModuleCollisionGPU::Response");
static_assert(offsetof(UParticleModuleCollisionGPU, CollisionMode) == 165, "Offset mismatch for UParticleModuleCollisionGPU::CollisionMode");

// /Script/CascadeRuntime.ParticleModuleColor
// Kind: Class; super: ParticleModuleColorBase
class UParticleModuleColor
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartColor[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t StartAlpha[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t bClampAlpha; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleColor, StartColor) == 48, "Offset mismatch for UParticleModuleColor::StartColor");
static_assert(offsetof(UParticleModuleColor, StartAlpha) == 144, "Offset mismatch for UParticleModuleColor::StartAlpha");
static_assert(offsetof(UParticleModuleColor, bClampAlpha) == 192, "Offset mismatch for UParticleModuleColor::bClampAlpha");

// /Script/CascadeRuntime.ParticleModuleColorBase
// Kind: Class; super: ParticleModule
class UParticleModuleColorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleColorBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleColorBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleColorBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleColorBase::LODDuplicate");
static_assert(offsetof(UParticleModuleColorBase, LODValidity) == 42, "Offset mismatch for UParticleModuleColorBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleColorOverLife
// Kind: Class; super: ParticleModuleColorBase
class UParticleModuleColorOverLife
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ColorOverLife[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t AlphaOverLife[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t bClampAlpha; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleColorOverLife, ColorOverLife) == 48, "Offset mismatch for UParticleModuleColorOverLife::ColorOverLife");
static_assert(offsetof(UParticleModuleColorOverLife, AlphaOverLife) == 144, "Offset mismatch for UParticleModuleColorOverLife::AlphaOverLife");
static_assert(offsetof(UParticleModuleColorOverLife, bClampAlpha) == 192, "Offset mismatch for UParticleModuleColorOverLife::bClampAlpha");

// /Script/CascadeRuntime.ParticleModuleColorScaleOverLife
// Kind: Class; super: ParticleModuleColorBase
class UParticleModuleColorScaleOverLife
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ColorScaleOverLife[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t AlphaScaleOverLife[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t bEmitterTime; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleColorScaleOverLife, ColorScaleOverLife) == 48, "Offset mismatch for UParticleModuleColorScaleOverLife::ColorScaleOverLife");
static_assert(offsetof(UParticleModuleColorScaleOverLife, AlphaScaleOverLife) == 144, "Offset mismatch for UParticleModuleColorScaleOverLife::AlphaScaleOverLife");
static_assert(offsetof(UParticleModuleColorScaleOverLife, bEmitterTime) == 192, "Offset mismatch for UParticleModuleColorScaleOverLife::bEmitterTime");

// /Script/CascadeRuntime.ParticleModuleColor_Seeded
// Kind: Class; super: ParticleModuleColor
class UParticleModuleColor_Seeded
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleColor_Seeded, RandomSeedInfo) == 200, "Offset mismatch for UParticleModuleColor_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleEventBase
// Kind: Class; super: ParticleModule
class UParticleModuleEventBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleEventBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleEventBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleEventBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleEventBase::LODDuplicate");
static_assert(offsetof(UParticleModuleEventBase, LODValidity) == 42, "Offset mismatch for UParticleModuleEventBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleEventGenerator
// Kind: Class; super: ParticleModuleEventBase
class UParticleModuleEventGenerator
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Events; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UParticleModuleEventGenerator, Events) == 48, "Offset mismatch for UParticleModuleEventGenerator::Events");

// /Script/CascadeRuntime.ParticleModuleEventReceiverBase
// Kind: Class; super: ParticleModuleEventBase
class UParticleModuleEventReceiverBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EventGeneratorType; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    FName EventName; // 0x0034 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UParticleModuleEventReceiverBase, EventGeneratorType) == 48, "Offset mismatch for UParticleModuleEventReceiverBase::EventGeneratorType");
static_assert(offsetof(UParticleModuleEventReceiverBase, EventName) == 52, "Offset mismatch for UParticleModuleEventReceiverBase::EventName");

// /Script/CascadeRuntime.ParticleModuleEventReceiverKillParticles
// Kind: Class; super: ParticleModuleEventReceiverBase
class UParticleModuleEventReceiverKillParticles
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bStopSpawning; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleEventReceiverKillParticles, bStopSpawning) == 56, "Offset mismatch for UParticleModuleEventReceiverKillParticles::bStopSpawning");

// /Script/CascadeRuntime.ParticleModuleEventReceiverSpawn
// Kind: Class; super: ParticleModuleEventReceiverBase
class UParticleModuleEventReceiverSpawn
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SpawnCount[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t bInheritVelocity; // 0x0068 (Size: 0x1, Type: BoolProperty)
    // 0x0068 BoolProperty bUsePSysLocation (shared storage)
    // 0x0068 BoolProperty bUseParticleTime (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t InheritVelocityScale[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    TArray<void*> PhysicalMaterials; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bBanPhysicalMaterials; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleEventReceiverSpawn, SpawnCount) == 56, "Offset mismatch for UParticleModuleEventReceiverSpawn::SpawnCount");
static_assert(offsetof(UParticleModuleEventReceiverSpawn, bInheritVelocity) == 104, "Offset mismatch for UParticleModuleEventReceiverSpawn::bInheritVelocity");
static_assert(offsetof(UParticleModuleEventReceiverSpawn, InheritVelocityScale) == 112, "Offset mismatch for UParticleModuleEventReceiverSpawn::InheritVelocityScale");
static_assert(offsetof(UParticleModuleEventReceiverSpawn, PhysicalMaterials) == 208, "Offset mismatch for UParticleModuleEventReceiverSpawn::PhysicalMaterials");
static_assert(offsetof(UParticleModuleEventReceiverSpawn, bBanPhysicalMaterials) == 224, "Offset mismatch for UParticleModuleEventReceiverSpawn::bBanPhysicalMaterials");

// /Script/CascadeRuntime.ParticleModuleEventSendToGame
// Kind: Class; super: Object
class UParticleModuleEventSendToGame
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CascadeRuntime.ParticleModuleKillBase
// Kind: Class; super: ParticleModule
class UParticleModuleKillBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleKillBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleKillBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleKillBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleKillBase::LODDuplicate");
static_assert(offsetof(UParticleModuleKillBase, LODValidity) == 42, "Offset mismatch for UParticleModuleKillBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleKillBox
// Kind: Class; super: ParticleModuleKillBase
class UParticleModuleKillBox
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LowerLeftCorner[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t UpperRightCorner[0x60]; // 0x0090 (Size: 0x60, Type: StructProperty)
    std::uint8_t bAbsolute; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    // 0x00F0 BoolProperty bAxisAlignedAndFixedSize (shared storage)
    // 0x00F0 BoolProperty bKillInside (shared storage)
};

static_assert(offsetof(UParticleModuleKillBox, LowerLeftCorner) == 48, "Offset mismatch for UParticleModuleKillBox::LowerLeftCorner");
static_assert(offsetof(UParticleModuleKillBox, UpperRightCorner) == 144, "Offset mismatch for UParticleModuleKillBox::UpperRightCorner");
static_assert(offsetof(UParticleModuleKillBox, bAbsolute) == 240, "Offset mismatch for UParticleModuleKillBox::bAbsolute");

// /Script/CascadeRuntime.ParticleModuleKillHeight
// Kind: Class; super: ParticleModuleKillBase
class UParticleModuleKillHeight
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Height[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAbsolute; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bApplyPSysScale (shared storage)
    // 0x0060 BoolProperty bFloor (shared storage)
};

static_assert(offsetof(UParticleModuleKillHeight, Height) == 48, "Offset mismatch for UParticleModuleKillHeight::Height");
static_assert(offsetof(UParticleModuleKillHeight, bAbsolute) == 96, "Offset mismatch for UParticleModuleKillHeight::bAbsolute");

// /Script/CascadeRuntime.ParticleModuleLifetime
// Kind: Class; super: ParticleModuleLifetimeBase
class UParticleModuleLifetime
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Lifetime[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLifetime, Lifetime) == 48, "Offset mismatch for UParticleModuleLifetime::Lifetime");

// /Script/CascadeRuntime.ParticleModuleLifetimeBase
// Kind: Class; super: ParticleModule
class UParticleModuleLifetimeBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleLifetimeBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleLifetimeBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleLifetimeBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleLifetimeBase::LODDuplicate");
static_assert(offsetof(UParticleModuleLifetimeBase, LODValidity) == 42, "Offset mismatch for UParticleModuleLifetimeBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleLifetime_Seeded
// Kind: Class; super: ParticleModuleLifetime
class UParticleModuleLifetime_Seeded
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLifetime_Seeded, RandomSeedInfo) == 96, "Offset mismatch for UParticleModuleLifetime_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleLight
// Kind: Class; super: ParticleModuleLightBase
class UParticleModuleLight
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bUseInverseSquaredFalloff; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAffectsTranslucency; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    std::uint8_t bOverrideInverseExposureBlend; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    std::uint8_t bPreviewLightRadius; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0039
    float SpawnFraction; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ColorScaleOverLife[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t BrightnessOverLife[0x30]; // 0x00A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t RadiusScale[0x30]; // 0x00D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t LightExponent[0x30]; // 0x0100 (Size: 0x30, Type: StructProperty)
    float InverseExposureBlend; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LightingChannels[0x4]; // 0x0134 (Size: 0x4, Type: StructProperty)
    float VolumetricScatteringIntensity; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHighQualityLights; // 0x013C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShadowCastingLights; // 0x013D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleLight, bUseInverseSquaredFalloff) == 48, "Offset mismatch for UParticleModuleLight::bUseInverseSquaredFalloff");
static_assert(offsetof(UParticleModuleLight, bAffectsTranslucency) == 49, "Offset mismatch for UParticleModuleLight::bAffectsTranslucency");
static_assert(offsetof(UParticleModuleLight, bOverrideInverseExposureBlend) == 52, "Offset mismatch for UParticleModuleLight::bOverrideInverseExposureBlend");
static_assert(offsetof(UParticleModuleLight, bPreviewLightRadius) == 56, "Offset mismatch for UParticleModuleLight::bPreviewLightRadius");
static_assert(offsetof(UParticleModuleLight, SpawnFraction) == 60, "Offset mismatch for UParticleModuleLight::SpawnFraction");
static_assert(offsetof(UParticleModuleLight, ColorScaleOverLife) == 64, "Offset mismatch for UParticleModuleLight::ColorScaleOverLife");
static_assert(offsetof(UParticleModuleLight, BrightnessOverLife) == 160, "Offset mismatch for UParticleModuleLight::BrightnessOverLife");
static_assert(offsetof(UParticleModuleLight, RadiusScale) == 208, "Offset mismatch for UParticleModuleLight::RadiusScale");
static_assert(offsetof(UParticleModuleLight, LightExponent) == 256, "Offset mismatch for UParticleModuleLight::LightExponent");
static_assert(offsetof(UParticleModuleLight, InverseExposureBlend) == 304, "Offset mismatch for UParticleModuleLight::InverseExposureBlend");
static_assert(offsetof(UParticleModuleLight, LightingChannels) == 308, "Offset mismatch for UParticleModuleLight::LightingChannels");
static_assert(offsetof(UParticleModuleLight, VolumetricScatteringIntensity) == 312, "Offset mismatch for UParticleModuleLight::VolumetricScatteringIntensity");
static_assert(offsetof(UParticleModuleLight, bHighQualityLights) == 316, "Offset mismatch for UParticleModuleLight::bHighQualityLights");
static_assert(offsetof(UParticleModuleLight, bShadowCastingLights) == 317, "Offset mismatch for UParticleModuleLight::bShadowCastingLights");

// /Script/CascadeRuntime.ParticleModuleLightBase
// Kind: Class; super: ParticleModule
class UParticleModuleLightBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleLightBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleLightBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleLightBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleLightBase::LODDuplicate");
static_assert(offsetof(UParticleModuleLightBase, LODValidity) == 42, "Offset mismatch for UParticleModuleLightBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleLight_Seeded
// Kind: Class; super: ParticleModuleLight
class UParticleModuleLight_Seeded
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLight_Seeded, RandomSeedInfo) == 320, "Offset mismatch for UParticleModuleLight_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleLocation
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModuleLocation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartLocation[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    float DistributeOverNPoints; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float DistributeThreshold; // 0x0094 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UParticleModuleLocation, StartLocation) == 48, "Offset mismatch for UParticleModuleLocation::StartLocation");
static_assert(offsetof(UParticleModuleLocation, DistributeOverNPoints) == 144, "Offset mismatch for UParticleModuleLocation::DistributeOverNPoints");
static_assert(offsetof(UParticleModuleLocation, DistributeThreshold) == 148, "Offset mismatch for UParticleModuleLocation::DistributeThreshold");

// /Script/CascadeRuntime.ParticleModuleLocationBase
// Kind: Class; super: ParticleModule
class UParticleModuleLocationBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleLocationBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleLocationBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleLocationBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleLocationBase::LODDuplicate");
static_assert(offsetof(UParticleModuleLocationBase, LODValidity) == 42, "Offset mismatch for UParticleModuleLocationBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleLocationBoneSocket
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModuleLocationBoneSocket
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SourceType; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t UniversalOffset[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    TArray<void*> SourceLocations; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SelectionMethod; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    std::uint8_t bInheritBoneVelocity; // 0x0064 (Size: 0x1, Type: BoolProperty)
    // 0x0064 BoolProperty bOrientMeshEmitters (shared storage)
    // 0x0064 BoolProperty bUpdatePositionEachFrame (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x0065
    float InheritVelocityScale; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SkelMeshActorParamName[0x4]; // 0x006C (Size: 0x4, Type: NameProperty)
    std::int32_t NumPreSelectedIndices; // 0x0070 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UParticleModuleLocationBoneSocket, SourceType) == 48, "Offset mismatch for UParticleModuleLocationBoneSocket::SourceType");
static_assert(offsetof(UParticleModuleLocationBoneSocket, UniversalOffset) == 56, "Offset mismatch for UParticleModuleLocationBoneSocket::UniversalOffset");
static_assert(offsetof(UParticleModuleLocationBoneSocket, SourceLocations) == 80, "Offset mismatch for UParticleModuleLocationBoneSocket::SourceLocations");
static_assert(offsetof(UParticleModuleLocationBoneSocket, SelectionMethod) == 96, "Offset mismatch for UParticleModuleLocationBoneSocket::SelectionMethod");
static_assert(offsetof(UParticleModuleLocationBoneSocket, bInheritBoneVelocity) == 100, "Offset mismatch for UParticleModuleLocationBoneSocket::bInheritBoneVelocity");
static_assert(offsetof(UParticleModuleLocationBoneSocket, InheritVelocityScale) == 104, "Offset mismatch for UParticleModuleLocationBoneSocket::InheritVelocityScale");
static_assert(offsetof(UParticleModuleLocationBoneSocket, SkelMeshActorParamName) == 108, "Offset mismatch for UParticleModuleLocationBoneSocket::SkelMeshActorParamName");
static_assert(offsetof(UParticleModuleLocationBoneSocket, NumPreSelectedIndices) == 112, "Offset mismatch for UParticleModuleLocationBoneSocket::NumPreSelectedIndices");

// /Script/CascadeRuntime.ParticleModuleLocationDirect
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModuleLocationDirect
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Location[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocationOffset[0x60]; // 0x0090 (Size: 0x60, Type: StructProperty)
    std::uint8_t ScaleFactor[0x60]; // 0x00F0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Direction[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLocationDirect, Location) == 48, "Offset mismatch for UParticleModuleLocationDirect::Location");
static_assert(offsetof(UParticleModuleLocationDirect, LocationOffset) == 144, "Offset mismatch for UParticleModuleLocationDirect::LocationOffset");
static_assert(offsetof(UParticleModuleLocationDirect, ScaleFactor) == 240, "Offset mismatch for UParticleModuleLocationDirect::ScaleFactor");
static_assert(offsetof(UParticleModuleLocationDirect, Direction) == 336, "Offset mismatch for UParticleModuleLocationDirect::Direction");

// /Script/CascadeRuntime.ParticleModuleLocationEmitter
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModuleLocationEmitter
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EmitterName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t SelectionMethod; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::uint8_t InheritSourceVelocity; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0039
    float InheritSourceVelocityScale; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInheritSourceRotation; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0041
    float InheritSourceRotationScale; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UParticleModuleLocationEmitter, EmitterName) == 48, "Offset mismatch for UParticleModuleLocationEmitter::EmitterName");
static_assert(offsetof(UParticleModuleLocationEmitter, SelectionMethod) == 52, "Offset mismatch for UParticleModuleLocationEmitter::SelectionMethod");
static_assert(offsetof(UParticleModuleLocationEmitter, InheritSourceVelocity) == 56, "Offset mismatch for UParticleModuleLocationEmitter::InheritSourceVelocity");
static_assert(offsetof(UParticleModuleLocationEmitter, InheritSourceVelocityScale) == 60, "Offset mismatch for UParticleModuleLocationEmitter::InheritSourceVelocityScale");
static_assert(offsetof(UParticleModuleLocationEmitter, bInheritSourceRotation) == 64, "Offset mismatch for UParticleModuleLocationEmitter::bInheritSourceRotation");
static_assert(offsetof(UParticleModuleLocationEmitter, InheritSourceRotationScale) == 68, "Offset mismatch for UParticleModuleLocationEmitter::InheritSourceRotationScale");

// /Script/CascadeRuntime.ParticleModuleLocationEmitterDirect
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModuleLocationEmitterDirect
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName EmitterName; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UParticleModuleLocationEmitterDirect, EmitterName) == 48, "Offset mismatch for UParticleModuleLocationEmitterDirect::EmitterName");

// /Script/CascadeRuntime.ParticleModuleLocationPrimitiveBase
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModuleLocationPrimitiveBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Negative_X; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty Negative_Y (shared storage)
    // 0x0030 BoolProperty Negative_Z (shared storage)
    // 0x0030 BoolProperty Positive_X (shared storage)
    // 0x0030 BoolProperty Positive_Y (shared storage)
    // 0x0030 BoolProperty Positive_Z (shared storage)
    // 0x0030 BoolProperty SurfaceOnly (shared storage)
    // 0x0030 BoolProperty Velocity (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t VelocityScale[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t StartLocation[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLocationPrimitiveBase, Negative_X) == 48, "Offset mismatch for UParticleModuleLocationPrimitiveBase::Negative_X");
static_assert(offsetof(UParticleModuleLocationPrimitiveBase, VelocityScale) == 56, "Offset mismatch for UParticleModuleLocationPrimitiveBase::VelocityScale");
static_assert(offsetof(UParticleModuleLocationPrimitiveBase, StartLocation) == 104, "Offset mismatch for UParticleModuleLocationPrimitiveBase::StartLocation");

// /Script/CascadeRuntime.ParticleModuleLocationPrimitiveCylinder
// Kind: Class; super: ParticleModuleLocationPrimitiveBase
class UParticleModuleLocationPrimitiveCylinder
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t RadialVelocity; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    std::uint8_t StartRadius[0x30]; // 0x00D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t StartHeight[0x30]; // 0x0100 (Size: 0x30, Type: StructProperty)
    std::uint8_t HeightAxis; // 0x0130 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleLocationPrimitiveCylinder, RadialVelocity) == 200, "Offset mismatch for UParticleModuleLocationPrimitiveCylinder::RadialVelocity");
static_assert(offsetof(UParticleModuleLocationPrimitiveCylinder, StartRadius) == 208, "Offset mismatch for UParticleModuleLocationPrimitiveCylinder::StartRadius");
static_assert(offsetof(UParticleModuleLocationPrimitiveCylinder, StartHeight) == 256, "Offset mismatch for UParticleModuleLocationPrimitiveCylinder::StartHeight");
static_assert(offsetof(UParticleModuleLocationPrimitiveCylinder, HeightAxis) == 304, "Offset mismatch for UParticleModuleLocationPrimitiveCylinder::HeightAxis");

// /Script/CascadeRuntime.ParticleModuleLocationPrimitiveCylinder_Seeded
// Kind: Class; super: ParticleModuleLocationPrimitiveCylinder
class UParticleModuleLocationPrimitiveCylinder_Seeded
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLocationPrimitiveCylinder_Seeded, RandomSeedInfo) == 312, "Offset mismatch for UParticleModuleLocationPrimitiveCylinder_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleLocationPrimitiveSphere
// Kind: Class; super: ParticleModuleLocationPrimitiveBase
class UParticleModuleLocationPrimitiveSphere
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t StartRadius[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLocationPrimitiveSphere, StartRadius) == 200, "Offset mismatch for UParticleModuleLocationPrimitiveSphere::StartRadius");

// /Script/CascadeRuntime.ParticleModuleLocationPrimitiveSphere_Seeded
// Kind: Class; super: ParticleModuleLocationPrimitiveSphere
class UParticleModuleLocationPrimitiveSphere_Seeded
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLocationPrimitiveSphere_Seeded, RandomSeedInfo) == 248, "Offset mismatch for UParticleModuleLocationPrimitiveSphere_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleLocationPrimitiveTriangle
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModuleLocationPrimitiveTriangle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartOffset[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t Height[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t Angle[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Thickness[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLocationPrimitiveTriangle, StartOffset) == 48, "Offset mismatch for UParticleModuleLocationPrimitiveTriangle::StartOffset");
static_assert(offsetof(UParticleModuleLocationPrimitiveTriangle, Height) == 144, "Offset mismatch for UParticleModuleLocationPrimitiveTriangle::Height");
static_assert(offsetof(UParticleModuleLocationPrimitiveTriangle, Angle) == 192, "Offset mismatch for UParticleModuleLocationPrimitiveTriangle::Angle");
static_assert(offsetof(UParticleModuleLocationPrimitiveTriangle, Thickness) == 240, "Offset mismatch for UParticleModuleLocationPrimitiveTriangle::Thickness");

// /Script/CascadeRuntime.ParticleModuleLocationSkelVertSurface
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModuleLocationSkelVertSurface
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SourceType; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t UniversalOffset[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bInheritBoneVelocity; // 0x0050 (Size: 0x1, Type: BoolProperty)
    // 0x0050 BoolProperty bOrientMeshEmitters (shared storage)
    // 0x0050 BoolProperty bUpdatePositionEachFrame (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0051
    float InheritVelocityScale; // 0x0054 (Size: 0x4, Type: FloatProperty)
    FName SkelMeshActorParamName; // 0x0058 (Size: 0x8, Type: NameProperty)
    TArray<void*> ValidAssociatedBones; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnforceNormalCheck; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0071
    std::uint8_t NormalToCompare[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    float NormalCheckToleranceDegrees; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float NormalCheckTolerance; // 0x0094 (Size: 0x4, Type: FloatProperty)
    TArray<void*> ValidMaterialIndices; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bInheritUV; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    // 0x00A8 BoolProperty bInheritVertexColor (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x00A9
    std::uint32_t InheritUVChannel; // 0x00AC (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UParticleModuleLocationSkelVertSurface, SourceType) == 48, "Offset mismatch for UParticleModuleLocationSkelVertSurface::SourceType");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, UniversalOffset) == 56, "Offset mismatch for UParticleModuleLocationSkelVertSurface::UniversalOffset");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, bInheritBoneVelocity) == 80, "Offset mismatch for UParticleModuleLocationSkelVertSurface::bInheritBoneVelocity");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, InheritVelocityScale) == 84, "Offset mismatch for UParticleModuleLocationSkelVertSurface::InheritVelocityScale");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, SkelMeshActorParamName) == 88, "Offset mismatch for UParticleModuleLocationSkelVertSurface::SkelMeshActorParamName");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, ValidAssociatedBones) == 96, "Offset mismatch for UParticleModuleLocationSkelVertSurface::ValidAssociatedBones");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, bEnforceNormalCheck) == 112, "Offset mismatch for UParticleModuleLocationSkelVertSurface::bEnforceNormalCheck");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, NormalToCompare) == 120, "Offset mismatch for UParticleModuleLocationSkelVertSurface::NormalToCompare");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, NormalCheckToleranceDegrees) == 144, "Offset mismatch for UParticleModuleLocationSkelVertSurface::NormalCheckToleranceDegrees");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, NormalCheckTolerance) == 148, "Offset mismatch for UParticleModuleLocationSkelVertSurface::NormalCheckTolerance");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, ValidMaterialIndices) == 152, "Offset mismatch for UParticleModuleLocationSkelVertSurface::ValidMaterialIndices");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, bInheritUV) == 168, "Offset mismatch for UParticleModuleLocationSkelVertSurface::bInheritUV");
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, InheritUVChannel) == 172, "Offset mismatch for UParticleModuleLocationSkelVertSurface::InheritUVChannel");

// /Script/CascadeRuntime.ParticleModuleLocationWorldOffset
// Kind: Class; super: ParticleModuleLocation
class UParticleModuleLocationWorldOffset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartLocation[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    float DistributeOverNPoints; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float DistributeThreshold; // 0x0094 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UParticleModuleLocationWorldOffset, StartLocation) == 48, "Offset mismatch for UParticleModuleLocationWorldOffset::StartLocation");
static_assert(offsetof(UParticleModuleLocationWorldOffset, DistributeOverNPoints) == 144, "Offset mismatch for UParticleModuleLocationWorldOffset::DistributeOverNPoints");
static_assert(offsetof(UParticleModuleLocationWorldOffset, DistributeThreshold) == 148, "Offset mismatch for UParticleModuleLocationWorldOffset::DistributeThreshold");

// /Script/CascadeRuntime.ParticleModuleLocationWorldOffset_Seeded
// Kind: Class; super: ParticleModuleLocationWorldOffset
class UParticleModuleLocationWorldOffset_Seeded
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLocationWorldOffset_Seeded, RandomSeedInfo) == 152, "Offset mismatch for UParticleModuleLocationWorldOffset_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleLocation_Seeded
// Kind: Class; super: ParticleModuleLocation
class UParticleModuleLocation_Seeded
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleLocation_Seeded, RandomSeedInfo) == 152, "Offset mismatch for UParticleModuleLocation_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleMaterialBase
// Kind: Class; super: ParticleModule
class UParticleModuleMaterialBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleMaterialBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleMaterialBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleMaterialBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleMaterialBase::LODDuplicate");
static_assert(offsetof(UParticleModuleMaterialBase, LODValidity) == 42, "Offset mismatch for UParticleModuleMaterialBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleMeshMaterial
// Kind: Class; super: ParticleModuleMaterialBase
class UParticleModuleMeshMaterial
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> MeshMaterials; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UParticleModuleMeshMaterial, MeshMaterials) == 48, "Offset mismatch for UParticleModuleMeshMaterial::MeshMaterials");

// /Script/CascadeRuntime.ParticleModuleMeshRotation
// Kind: Class; super: ParticleModuleRotationBase
class UParticleModuleMeshRotation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartRotation[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t bInheritParent; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleMeshRotation, StartRotation) == 48, "Offset mismatch for UParticleModuleMeshRotation::StartRotation");
static_assert(offsetof(UParticleModuleMeshRotation, bInheritParent) == 144, "Offset mismatch for UParticleModuleMeshRotation::bInheritParent");

// /Script/CascadeRuntime.ParticleModuleMeshRotationRate
// Kind: Class; super: ParticleModuleRotationRateBase
class UParticleModuleMeshRotationRate
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartRotationRate[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleMeshRotationRate, StartRotationRate) == 48, "Offset mismatch for UParticleModuleMeshRotationRate::StartRotationRate");

// /Script/CascadeRuntime.ParticleModuleMeshRotationRateMultiplyLife
// Kind: Class; super: ParticleModuleRotationRateBase
class UParticleModuleMeshRotationRateMultiplyLife
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LifeMultiplier[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleMeshRotationRateMultiplyLife, LifeMultiplier) == 48, "Offset mismatch for UParticleModuleMeshRotationRateMultiplyLife::LifeMultiplier");

// /Script/CascadeRuntime.ParticleModuleMeshRotationRateOverLife
// Kind: Class; super: ParticleModuleRotationRateBase
class UParticleModuleMeshRotationRateOverLife
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RotRate[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t bScaleRotRate; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleMeshRotationRateOverLife, RotRate) == 48, "Offset mismatch for UParticleModuleMeshRotationRateOverLife::RotRate");
static_assert(offsetof(UParticleModuleMeshRotationRateOverLife, bScaleRotRate) == 144, "Offset mismatch for UParticleModuleMeshRotationRateOverLife::bScaleRotRate");

// /Script/CascadeRuntime.ParticleModuleMeshRotationRate_Seeded
// Kind: Class; super: ParticleModuleMeshRotationRate
class UParticleModuleMeshRotationRate_Seeded
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleMeshRotationRate_Seeded, RandomSeedInfo) == 144, "Offset mismatch for UParticleModuleMeshRotationRate_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleMeshRotation_Seeded
// Kind: Class; super: ParticleModuleMeshRotation
class UParticleModuleMeshRotation_Seeded
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleMeshRotation_Seeded, RandomSeedInfo) == 152, "Offset mismatch for UParticleModuleMeshRotation_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleOrbit
// Kind: Class; super: ParticleModuleOrbitBase
class UParticleModuleOrbit
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ChainMode; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t OffsetAmount[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t OffsetOptions[0x8]; // 0x00A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t RotationAmount[0x60]; // 0x00A8 (Size: 0x60, Type: StructProperty)
    std::uint8_t RotationOptions[0x8]; // 0x0108 (Size: 0x8, Type: StructProperty)
    std::uint8_t RotationRateAmount[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    std::uint8_t RotationRateOptions[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleOrbit, ChainMode) == 56, "Offset mismatch for UParticleModuleOrbit::ChainMode");
static_assert(offsetof(UParticleModuleOrbit, OffsetAmount) == 64, "Offset mismatch for UParticleModuleOrbit::OffsetAmount");
static_assert(offsetof(UParticleModuleOrbit, OffsetOptions) == 160, "Offset mismatch for UParticleModuleOrbit::OffsetOptions");
static_assert(offsetof(UParticleModuleOrbit, RotationAmount) == 168, "Offset mismatch for UParticleModuleOrbit::RotationAmount");
static_assert(offsetof(UParticleModuleOrbit, RotationOptions) == 264, "Offset mismatch for UParticleModuleOrbit::RotationOptions");
static_assert(offsetof(UParticleModuleOrbit, RotationRateAmount) == 272, "Offset mismatch for UParticleModuleOrbit::RotationRateAmount");
static_assert(offsetof(UParticleModuleOrbit, RotationRateOptions) == 368, "Offset mismatch for UParticleModuleOrbit::RotationRateOptions");

// /Script/CascadeRuntime.ParticleModuleOrbitBase
// Kind: Class; super: ParticleModule
class UParticleModuleOrbitBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bUseEmitterTime; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleOrbitBase, bUseEmitterTime) == 48, "Offset mismatch for UParticleModuleOrbitBase::bUseEmitterTime");

// /Script/CascadeRuntime.ParticleModuleOrientationAxisLock
// Kind: Class; super: ParticleModuleOrientationBase
class UParticleModuleOrientationAxisLock
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LockAxisFlags; // 0x0030 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleOrientationAxisLock, LockAxisFlags) == 48, "Offset mismatch for UParticleModuleOrientationAxisLock::LockAxisFlags");

// /Script/CascadeRuntime.ParticleModuleOrientationBase
// Kind: Class; super: ParticleModule
class UParticleModuleOrientationBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleOrientationBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleOrientationBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleOrientationBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleOrientationBase::LODDuplicate");
static_assert(offsetof(UParticleModuleOrientationBase, LODValidity) == 42, "Offset mismatch for UParticleModuleOrientationBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleParameterBase
// Kind: Class; super: ParticleModule
class UParticleModuleParameterBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleParameterBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleParameterBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleParameterBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleParameterBase::LODDuplicate");
static_assert(offsetof(UParticleModuleParameterBase, LODValidity) == 42, "Offset mismatch for UParticleModuleParameterBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleParameterDynamic
// Kind: Class; super: ParticleModuleParameterBase
class UParticleModuleParameterDynamic
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> DynamicParams; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::int32_t UpdateFlags; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUsesVelocity; // 0x0044 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleParameterDynamic, DynamicParams) == 48, "Offset mismatch for UParticleModuleParameterDynamic::DynamicParams");
static_assert(offsetof(UParticleModuleParameterDynamic, UpdateFlags) == 64, "Offset mismatch for UParticleModuleParameterDynamic::UpdateFlags");
static_assert(offsetof(UParticleModuleParameterDynamic, bUsesVelocity) == 68, "Offset mismatch for UParticleModuleParameterDynamic::bUsesVelocity");

// /Script/CascadeRuntime.ParticleModuleParameterDynamic_Seeded
// Kind: Class; super: ParticleModuleParameterDynamic
class UParticleModuleParameterDynamic_Seeded
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleParameterDynamic_Seeded, RandomSeedInfo) == 72, "Offset mismatch for UParticleModuleParameterDynamic_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModulePivotOffset
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModulePivotOffset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PivotOffset[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModulePivotOffset, PivotOffset) == 48, "Offset mismatch for UParticleModulePivotOffset::PivotOffset");

// /Script/CascadeRuntime.ParticleModuleRequired
// Kind: Class; super: ParticleModule
class UParticleModuleRequired
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Material; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float MinFacingCameraBlendDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float MaxFacingCameraBlendDistance; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t EmitterOrigin[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t EmitterRotation[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScreenAlignment; // 0x0070 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bKillOnCompleted; // 0x0071 (Size: 0x1, Type: BoolProperty)
    // 0x0071 BoolProperty bKillOnDeactivate (shared storage)
    // 0x0071 BoolProperty bUseLocalSpace (shared storage)
    std::uint8_t SortMode; // 0x0072 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bEmitterDurationUseRange; // 0x0073 (Size: 0x1, Type: BoolProperty)
    // 0x0073 BoolProperty bOverrideUseVelocityForMotionBlur (shared storage)
    // 0x0073 BoolProperty bRemoveHMDRoll (shared storage)
    // 0x0073 BoolProperty bSupportLargeWorldCoordinates (shared storage)
    // 0x0073 BoolProperty bUseLegacyEmitterTime (shared storage)
    // 0x0073 BoolProperty bUseVelocityForMotionBlur (shared storage)
    float EmitterDuration; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpawnRate[0x30]; // 0x0078 (Size: 0x30, Type: StructProperty)
    TArray<void*> BurstList; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    float EmitterDelay; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float EmitterDelayLow; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDelayFirstLoopOnly; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InterpolationMethod; // 0x00C1 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bEmitterDelayUseRange; // 0x00C2 (Size: 0x1, Type: BoolProperty)
    // 0x00C2 BoolProperty bScaleUV (shared storage)
    std::uint8_t ParticleBurstMethod; // 0x00C3 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bOverrideSystemMacroUV; // 0x00C4 (Size: 0x1, Type: BoolProperty)
    // 0x00C4 BoolProperty bUseMaxDrawCount (shared storage)
    std::uint8_t OpacitySourceMode; // 0x00C5 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EmitterNormalsMode; // 0x00C6 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bOrbitModuleAffectsVelocityAlignment; // 0x00C7 (Size: 0x1, Type: BoolProperty)
    std::int32_t SubImages_Horizontal; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::int32_t SubImages_Vertical; // 0x00CC (Size: 0x4, Type: IntProperty)
    float RandomImageTime; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomImageChanges; // 0x00D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t MacroUVPosition[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    float MacroUVRadius; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UVFlippingMode; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BoundingMode; // 0x00F5 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bDurationRecalcEachLoop; // 0x00F6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00F7
    std::uint8_t NormalsSphereCenter[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    float AlphaThreshold; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::int32_t EmitterLoops; // 0x0114 (Size: 0x4, Type: IntProperty)
    void* CutoutTexture; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxDrawCount; // 0x0120 (Size: 0x4, Type: IntProperty)
    float EmitterDurationLow; // 0x0124 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NormalsCylinderDirection[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    TArray<void*> NamedMaterialOverrides; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UParticleModuleRequired, Material) == 48, "Offset mismatch for UParticleModuleRequired::Material");
static_assert(offsetof(UParticleModuleRequired, MinFacingCameraBlendDistance) == 56, "Offset mismatch for UParticleModuleRequired::MinFacingCameraBlendDistance");
static_assert(offsetof(UParticleModuleRequired, MaxFacingCameraBlendDistance) == 60, "Offset mismatch for UParticleModuleRequired::MaxFacingCameraBlendDistance");
static_assert(offsetof(UParticleModuleRequired, EmitterOrigin) == 64, "Offset mismatch for UParticleModuleRequired::EmitterOrigin");
static_assert(offsetof(UParticleModuleRequired, EmitterRotation) == 88, "Offset mismatch for UParticleModuleRequired::EmitterRotation");
static_assert(offsetof(UParticleModuleRequired, ScreenAlignment) == 112, "Offset mismatch for UParticleModuleRequired::ScreenAlignment");
static_assert(offsetof(UParticleModuleRequired, bKillOnCompleted) == 113, "Offset mismatch for UParticleModuleRequired::bKillOnCompleted");
static_assert(offsetof(UParticleModuleRequired, SortMode) == 114, "Offset mismatch for UParticleModuleRequired::SortMode");
static_assert(offsetof(UParticleModuleRequired, bEmitterDurationUseRange) == 115, "Offset mismatch for UParticleModuleRequired::bEmitterDurationUseRange");
static_assert(offsetof(UParticleModuleRequired, EmitterDuration) == 116, "Offset mismatch for UParticleModuleRequired::EmitterDuration");
static_assert(offsetof(UParticleModuleRequired, SpawnRate) == 120, "Offset mismatch for UParticleModuleRequired::SpawnRate");
static_assert(offsetof(UParticleModuleRequired, BurstList) == 168, "Offset mismatch for UParticleModuleRequired::BurstList");
static_assert(offsetof(UParticleModuleRequired, EmitterDelay) == 184, "Offset mismatch for UParticleModuleRequired::EmitterDelay");
static_assert(offsetof(UParticleModuleRequired, EmitterDelayLow) == 188, "Offset mismatch for UParticleModuleRequired::EmitterDelayLow");
static_assert(offsetof(UParticleModuleRequired, bDelayFirstLoopOnly) == 192, "Offset mismatch for UParticleModuleRequired::bDelayFirstLoopOnly");
static_assert(offsetof(UParticleModuleRequired, InterpolationMethod) == 193, "Offset mismatch for UParticleModuleRequired::InterpolationMethod");
static_assert(offsetof(UParticleModuleRequired, bEmitterDelayUseRange) == 194, "Offset mismatch for UParticleModuleRequired::bEmitterDelayUseRange");
static_assert(offsetof(UParticleModuleRequired, ParticleBurstMethod) == 195, "Offset mismatch for UParticleModuleRequired::ParticleBurstMethod");
static_assert(offsetof(UParticleModuleRequired, bOverrideSystemMacroUV) == 196, "Offset mismatch for UParticleModuleRequired::bOverrideSystemMacroUV");
static_assert(offsetof(UParticleModuleRequired, OpacitySourceMode) == 197, "Offset mismatch for UParticleModuleRequired::OpacitySourceMode");
static_assert(offsetof(UParticleModuleRequired, EmitterNormalsMode) == 198, "Offset mismatch for UParticleModuleRequired::EmitterNormalsMode");
static_assert(offsetof(UParticleModuleRequired, bOrbitModuleAffectsVelocityAlignment) == 199, "Offset mismatch for UParticleModuleRequired::bOrbitModuleAffectsVelocityAlignment");
static_assert(offsetof(UParticleModuleRequired, SubImages_Horizontal) == 200, "Offset mismatch for UParticleModuleRequired::SubImages_Horizontal");
static_assert(offsetof(UParticleModuleRequired, SubImages_Vertical) == 204, "Offset mismatch for UParticleModuleRequired::SubImages_Vertical");
static_assert(offsetof(UParticleModuleRequired, RandomImageTime) == 208, "Offset mismatch for UParticleModuleRequired::RandomImageTime");
static_assert(offsetof(UParticleModuleRequired, RandomImageChanges) == 212, "Offset mismatch for UParticleModuleRequired::RandomImageChanges");
static_assert(offsetof(UParticleModuleRequired, MacroUVPosition) == 216, "Offset mismatch for UParticleModuleRequired::MacroUVPosition");
static_assert(offsetof(UParticleModuleRequired, MacroUVRadius) == 240, "Offset mismatch for UParticleModuleRequired::MacroUVRadius");
static_assert(offsetof(UParticleModuleRequired, UVFlippingMode) == 244, "Offset mismatch for UParticleModuleRequired::UVFlippingMode");
static_assert(offsetof(UParticleModuleRequired, BoundingMode) == 245, "Offset mismatch for UParticleModuleRequired::BoundingMode");
static_assert(offsetof(UParticleModuleRequired, bDurationRecalcEachLoop) == 246, "Offset mismatch for UParticleModuleRequired::bDurationRecalcEachLoop");
static_assert(offsetof(UParticleModuleRequired, NormalsSphereCenter) == 248, "Offset mismatch for UParticleModuleRequired::NormalsSphereCenter");
static_assert(offsetof(UParticleModuleRequired, AlphaThreshold) == 272, "Offset mismatch for UParticleModuleRequired::AlphaThreshold");
static_assert(offsetof(UParticleModuleRequired, EmitterLoops) == 276, "Offset mismatch for UParticleModuleRequired::EmitterLoops");
static_assert(offsetof(UParticleModuleRequired, CutoutTexture) == 280, "Offset mismatch for UParticleModuleRequired::CutoutTexture");
static_assert(offsetof(UParticleModuleRequired, MaxDrawCount) == 288, "Offset mismatch for UParticleModuleRequired::MaxDrawCount");
static_assert(offsetof(UParticleModuleRequired, EmitterDurationLow) == 292, "Offset mismatch for UParticleModuleRequired::EmitterDurationLow");
static_assert(offsetof(UParticleModuleRequired, NormalsCylinderDirection) == 296, "Offset mismatch for UParticleModuleRequired::NormalsCylinderDirection");
static_assert(offsetof(UParticleModuleRequired, NamedMaterialOverrides) == 320, "Offset mismatch for UParticleModuleRequired::NamedMaterialOverrides");

// /Script/CascadeRuntime.ParticleModuleRotation
// Kind: Class; super: ParticleModuleRotationBase
class UParticleModuleRotation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartRotation[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleRotation, StartRotation) == 48, "Offset mismatch for UParticleModuleRotation::StartRotation");

// /Script/CascadeRuntime.ParticleModuleRotationBase
// Kind: Class; super: ParticleModule
class UParticleModuleRotationBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleRotationBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleRotationBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleRotationBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleRotationBase::LODDuplicate");
static_assert(offsetof(UParticleModuleRotationBase, LODValidity) == 42, "Offset mismatch for UParticleModuleRotationBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleRotationOverLifetime
// Kind: Class; super: ParticleModuleRotationBase
class UParticleModuleRotationOverLifetime
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RotationOverLife[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t Scale; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleRotationOverLifetime, RotationOverLife) == 48, "Offset mismatch for UParticleModuleRotationOverLifetime::RotationOverLife");
static_assert(offsetof(UParticleModuleRotationOverLifetime, Scale) == 96, "Offset mismatch for UParticleModuleRotationOverLifetime::Scale");

// /Script/CascadeRuntime.ParticleModuleRotationRate
// Kind: Class; super: ParticleModuleRotationRateBase
class UParticleModuleRotationRate
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartRotationRate[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleRotationRate, StartRotationRate) == 48, "Offset mismatch for UParticleModuleRotationRate::StartRotationRate");

// /Script/CascadeRuntime.ParticleModuleRotationRateBase
// Kind: Class; super: ParticleModule
class UParticleModuleRotationRateBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleRotationRateBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleRotationRateBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleRotationRateBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleRotationRateBase::LODDuplicate");
static_assert(offsetof(UParticleModuleRotationRateBase, LODValidity) == 42, "Offset mismatch for UParticleModuleRotationRateBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleRotationRateMultiplyLife
// Kind: Class; super: ParticleModuleRotationRateBase
class UParticleModuleRotationRateMultiplyLife
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LifeMultiplier[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleRotationRateMultiplyLife, LifeMultiplier) == 48, "Offset mismatch for UParticleModuleRotationRateMultiplyLife::LifeMultiplier");

// /Script/CascadeRuntime.ParticleModuleRotationRate_Seeded
// Kind: Class; super: ParticleModuleRotationRate
class UParticleModuleRotationRate_Seeded
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleRotationRate_Seeded, RandomSeedInfo) == 96, "Offset mismatch for UParticleModuleRotationRate_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleRotation_Seeded
// Kind: Class; super: ParticleModuleRotation
class UParticleModuleRotation_Seeded
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleRotation_Seeded, RandomSeedInfo) == 96, "Offset mismatch for UParticleModuleRotation_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleSize
// Kind: Class; super: ParticleModuleSizeBase
class UParticleModuleSize
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartSize[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleSize, StartSize) == 48, "Offset mismatch for UParticleModuleSize::StartSize");

// /Script/CascadeRuntime.ParticleModuleSizeBase
// Kind: Class; super: ParticleModule
class UParticleModuleSizeBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleSizeBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleSizeBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleSizeBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleSizeBase::LODDuplicate");
static_assert(offsetof(UParticleModuleSizeBase, LODValidity) == 42, "Offset mismatch for UParticleModuleSizeBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleSizeMultiplyLife
// Kind: Class; super: ParticleModuleSizeBase
class UParticleModuleSizeMultiplyLife
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LifeMultiplier[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t MultiplyX; // 0x0090 (Size: 0x1, Type: BoolProperty)
    // 0x0090 BoolProperty MultiplyY (shared storage)
    // 0x0090 BoolProperty MultiplyZ (shared storage)
};

static_assert(offsetof(UParticleModuleSizeMultiplyLife, LifeMultiplier) == 48, "Offset mismatch for UParticleModuleSizeMultiplyLife::LifeMultiplier");
static_assert(offsetof(UParticleModuleSizeMultiplyLife, MultiplyX) == 144, "Offset mismatch for UParticleModuleSizeMultiplyLife::MultiplyX");

// /Script/CascadeRuntime.ParticleModuleSizeScale
// Kind: Class; super: ParticleModuleSizeBase
class UParticleModuleSizeScale
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SizeScale[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t EnableX; // 0x0090 (Size: 0x1, Type: BoolProperty)
    // 0x0090 BoolProperty EnableY (shared storage)
    // 0x0090 BoolProperty EnableZ (shared storage)
};

static_assert(offsetof(UParticleModuleSizeScale, SizeScale) == 48, "Offset mismatch for UParticleModuleSizeScale::SizeScale");
static_assert(offsetof(UParticleModuleSizeScale, EnableX) == 144, "Offset mismatch for UParticleModuleSizeScale::EnableX");

// /Script/CascadeRuntime.ParticleModuleSizeScaleBySpeed
// Kind: Class; super: ParticleModuleSizeBase
class UParticleModuleSizeScaleBySpeed
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SpeedScale[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxScale[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleSizeScaleBySpeed, SpeedScale) == 48, "Offset mismatch for UParticleModuleSizeScaleBySpeed::SpeedScale");
static_assert(offsetof(UParticleModuleSizeScaleBySpeed, MaxScale) == 64, "Offset mismatch for UParticleModuleSizeScaleBySpeed::MaxScale");

// /Script/CascadeRuntime.ParticleModuleSize_Seeded
// Kind: Class; super: ParticleModuleSize
class UParticleModuleSize_Seeded
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleSize_Seeded, RandomSeedInfo) == 144, "Offset mismatch for UParticleModuleSize_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleModuleSourceMovement
// Kind: Class; super: ParticleModuleLocationBase
class UParticleModuleSourceMovement
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SourceMovementScale[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleSourceMovement, SourceMovementScale) == 48, "Offset mismatch for UParticleModuleSourceMovement::SourceMovementScale");

// /Script/CascadeRuntime.ParticleModuleSpawn
// Kind: Class; super: ParticleModuleSpawnBase
class UParticleModuleSpawn
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Rate[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t RateScale[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    TArray<void*> BurstList; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BurstScale[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t ParticleBurstMethod; // 0x00D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D9
    std::uint8_t bApplyGlobalSpawnRateScale; // 0x00DC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleSpawn, Rate) == 56, "Offset mismatch for UParticleModuleSpawn::Rate");
static_assert(offsetof(UParticleModuleSpawn, RateScale) == 104, "Offset mismatch for UParticleModuleSpawn::RateScale");
static_assert(offsetof(UParticleModuleSpawn, BurstList) == 152, "Offset mismatch for UParticleModuleSpawn::BurstList");
static_assert(offsetof(UParticleModuleSpawn, BurstScale) == 168, "Offset mismatch for UParticleModuleSpawn::BurstScale");
static_assert(offsetof(UParticleModuleSpawn, ParticleBurstMethod) == 216, "Offset mismatch for UParticleModuleSpawn::ParticleBurstMethod");
static_assert(offsetof(UParticleModuleSpawn, bApplyGlobalSpawnRateScale) == 220, "Offset mismatch for UParticleModuleSpawn::bApplyGlobalSpawnRateScale");

// /Script/CascadeRuntime.ParticleModuleSpawnBase
// Kind: Class; super: ParticleModule
class UParticleModuleSpawnBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bProcessBurstList; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bProcessSpawnRate (shared storage)
};

static_assert(offsetof(UParticleModuleSpawnBase, bProcessBurstList) == 48, "Offset mismatch for UParticleModuleSpawnBase::bProcessBurstList");

// /Script/CascadeRuntime.ParticleModuleSpawnPerUnit
// Kind: Class; super: ParticleModuleSpawnBase
class UParticleModuleSpawnPerUnit
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float UnitScalar; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float MovementTolerance; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpawnPerUnit[0x30]; // 0x0040 (Size: 0x30, Type: StructProperty)
    float MaxFrameDistance; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreMovementAlongX; // 0x0074 (Size: 0x1, Type: BoolProperty)
    // 0x0074 BoolProperty bIgnoreMovementAlongY (shared storage)
    // 0x0074 BoolProperty bIgnoreMovementAlongZ (shared storage)
    // 0x0074 BoolProperty bIgnoreSpawnRateWhenMoving (shared storage)
};

static_assert(offsetof(UParticleModuleSpawnPerUnit, UnitScalar) == 56, "Offset mismatch for UParticleModuleSpawnPerUnit::UnitScalar");
static_assert(offsetof(UParticleModuleSpawnPerUnit, MovementTolerance) == 60, "Offset mismatch for UParticleModuleSpawnPerUnit::MovementTolerance");
static_assert(offsetof(UParticleModuleSpawnPerUnit, SpawnPerUnit) == 64, "Offset mismatch for UParticleModuleSpawnPerUnit::SpawnPerUnit");
static_assert(offsetof(UParticleModuleSpawnPerUnit, MaxFrameDistance) == 112, "Offset mismatch for UParticleModuleSpawnPerUnit::MaxFrameDistance");
static_assert(offsetof(UParticleModuleSpawnPerUnit, bIgnoreMovementAlongX) == 116, "Offset mismatch for UParticleModuleSpawnPerUnit::bIgnoreMovementAlongX");

// /Script/CascadeRuntime.ParticleModuleSubUV
// Kind: Class; super: ParticleModuleSubUVBase
class UParticleModuleSubUV
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Animation; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SubImageIndex[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseRealTime; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleSubUV, Animation) == 48, "Offset mismatch for UParticleModuleSubUV::Animation");
static_assert(offsetof(UParticleModuleSubUV, SubImageIndex) == 56, "Offset mismatch for UParticleModuleSubUV::SubImageIndex");
static_assert(offsetof(UParticleModuleSubUV, bUseRealTime) == 104, "Offset mismatch for UParticleModuleSubUV::bUseRealTime");

// /Script/CascadeRuntime.ParticleModuleSubUVBase
// Kind: Class; super: ParticleModule
class UParticleModuleSubUVBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleSubUVBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleSubUVBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleSubUVBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleSubUVBase::LODDuplicate");
static_assert(offsetof(UParticleModuleSubUVBase, LODValidity) == 42, "Offset mismatch for UParticleModuleSubUVBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleSubUVMovie
// Kind: Class; super: ParticleModuleSubUV
class UParticleModuleSubUVMovie
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bUseEmitterTime; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    std::uint8_t FrameRate[0x30]; // 0x0078 (Size: 0x30, Type: StructProperty)
    std::int32_t StartingFrame; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UParticleModuleSubUVMovie, bUseEmitterTime) == 112, "Offset mismatch for UParticleModuleSubUVMovie::bUseEmitterTime");
static_assert(offsetof(UParticleModuleSubUVMovie, FrameRate) == 120, "Offset mismatch for UParticleModuleSubUVMovie::FrameRate");
static_assert(offsetof(UParticleModuleSubUVMovie, StartingFrame) == 168, "Offset mismatch for UParticleModuleSubUVMovie::StartingFrame");

// /Script/CascadeRuntime.ParticleModuleTrailBase
// Kind: Class; super: ParticleModule
class UParticleModuleTrailBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleTrailBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleTrailBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleTrailBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleTrailBase::LODDuplicate");
static_assert(offsetof(UParticleModuleTrailBase, LODValidity) == 42, "Offset mismatch for UParticleModuleTrailBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleTrailSource
// Kind: Class; super: ParticleModuleTrailBase
class UParticleModuleTrailSource
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SourceMethod; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t SourceName[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    std::uint8_t SourceStrength[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t bLockSourceStength; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0069
    std::int32_t SourceOffsetCount; // 0x006C (Size: 0x4, Type: IntProperty)
    TArray<void*> SourceOffsetDefaults; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SelectionMethod; // 0x0080 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0081
    std::uint8_t bInheritRotation; // 0x0084 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleTrailSource, SourceMethod) == 48, "Offset mismatch for UParticleModuleTrailSource::SourceMethod");
static_assert(offsetof(UParticleModuleTrailSource, SourceName) == 52, "Offset mismatch for UParticleModuleTrailSource::SourceName");
static_assert(offsetof(UParticleModuleTrailSource, SourceStrength) == 56, "Offset mismatch for UParticleModuleTrailSource::SourceStrength");
static_assert(offsetof(UParticleModuleTrailSource, bLockSourceStength) == 104, "Offset mismatch for UParticleModuleTrailSource::bLockSourceStength");
static_assert(offsetof(UParticleModuleTrailSource, SourceOffsetCount) == 108, "Offset mismatch for UParticleModuleTrailSource::SourceOffsetCount");
static_assert(offsetof(UParticleModuleTrailSource, SourceOffsetDefaults) == 112, "Offset mismatch for UParticleModuleTrailSource::SourceOffsetDefaults");
static_assert(offsetof(UParticleModuleTrailSource, SelectionMethod) == 128, "Offset mismatch for UParticleModuleTrailSource::SelectionMethod");
static_assert(offsetof(UParticleModuleTrailSource, bInheritRotation) == 132, "Offset mismatch for UParticleModuleTrailSource::bInheritRotation");

// /Script/CascadeRuntime.ParticleModuleTypeDataAnimTrail
// Kind: Class; super: ParticleModuleTypeDataBase
class UParticleModuleTypeDataAnimTrail
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bDeadTrailsOnDeactivate; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bEnablePreviousTangentRecalculation (shared storage)
    // 0x0030 BoolProperty bTangentRecalculationEveryFrame (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float TilingDistance; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DistanceTessellationStepSize; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float TangentTessellationStepSize; // 0x003C (Size: 0x4, Type: FloatProperty)
    float WidthTessellationStepSize; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UParticleModuleTypeDataAnimTrail, bDeadTrailsOnDeactivate) == 48, "Offset mismatch for UParticleModuleTypeDataAnimTrail::bDeadTrailsOnDeactivate");
static_assert(offsetof(UParticleModuleTypeDataAnimTrail, TilingDistance) == 52, "Offset mismatch for UParticleModuleTypeDataAnimTrail::TilingDistance");
static_assert(offsetof(UParticleModuleTypeDataAnimTrail, DistanceTessellationStepSize) == 56, "Offset mismatch for UParticleModuleTypeDataAnimTrail::DistanceTessellationStepSize");
static_assert(offsetof(UParticleModuleTypeDataAnimTrail, TangentTessellationStepSize) == 60, "Offset mismatch for UParticleModuleTypeDataAnimTrail::TangentTessellationStepSize");
static_assert(offsetof(UParticleModuleTypeDataAnimTrail, WidthTessellationStepSize) == 64, "Offset mismatch for UParticleModuleTypeDataAnimTrail::WidthTessellationStepSize");

// /Script/CascadeRuntime.ParticleModuleTypeDataBase
// Kind: Class; super: ParticleModule
class UParticleModuleTypeDataBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleTypeDataBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleTypeDataBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleTypeDataBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleTypeDataBase::LODDuplicate");
static_assert(offsetof(UParticleModuleTypeDataBase, LODValidity) == 42, "Offset mismatch for UParticleModuleTypeDataBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleTypeDataBeam2
// Kind: Class; super: ParticleModuleTypeDataBase
class UParticleModuleTypeDataBeam2
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t BeamMethod; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::int32_t TextureTile; // 0x0034 (Size: 0x4, Type: IntProperty)
    float TextureTileDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::int32_t Sheets; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxBeamCount; // 0x0040 (Size: 0x4, Type: IntProperty)
    float Speed; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::int32_t InterpolationPoints; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAlwaysOn; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    std::int32_t UpVectorStepSize; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t BranchParentName[0x4]; // 0x0054 (Size: 0x4, Type: NameProperty)
    std::uint8_t Distance[0x30]; // 0x0058 (Size: 0x30, Type: StructProperty)
    std::uint8_t TaperMethod; // 0x0088 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0089
    std::uint8_t TaperFactor[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t TaperScale[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t RenderDirectLine; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    // 0x00F0 BoolProperty RenderGeometry (shared storage)
    // 0x00F0 BoolProperty RenderLines (shared storage)
    // 0x00F0 BoolProperty RenderTessellation (shared storage)
};

static_assert(offsetof(UParticleModuleTypeDataBeam2, BeamMethod) == 48, "Offset mismatch for UParticleModuleTypeDataBeam2::BeamMethod");
static_assert(offsetof(UParticleModuleTypeDataBeam2, TextureTile) == 52, "Offset mismatch for UParticleModuleTypeDataBeam2::TextureTile");
static_assert(offsetof(UParticleModuleTypeDataBeam2, TextureTileDistance) == 56, "Offset mismatch for UParticleModuleTypeDataBeam2::TextureTileDistance");
static_assert(offsetof(UParticleModuleTypeDataBeam2, Sheets) == 60, "Offset mismatch for UParticleModuleTypeDataBeam2::Sheets");
static_assert(offsetof(UParticleModuleTypeDataBeam2, MaxBeamCount) == 64, "Offset mismatch for UParticleModuleTypeDataBeam2::MaxBeamCount");
static_assert(offsetof(UParticleModuleTypeDataBeam2, Speed) == 68, "Offset mismatch for UParticleModuleTypeDataBeam2::Speed");
static_assert(offsetof(UParticleModuleTypeDataBeam2, InterpolationPoints) == 72, "Offset mismatch for UParticleModuleTypeDataBeam2::InterpolationPoints");
static_assert(offsetof(UParticleModuleTypeDataBeam2, bAlwaysOn) == 76, "Offset mismatch for UParticleModuleTypeDataBeam2::bAlwaysOn");
static_assert(offsetof(UParticleModuleTypeDataBeam2, UpVectorStepSize) == 80, "Offset mismatch for UParticleModuleTypeDataBeam2::UpVectorStepSize");
static_assert(offsetof(UParticleModuleTypeDataBeam2, BranchParentName) == 84, "Offset mismatch for UParticleModuleTypeDataBeam2::BranchParentName");
static_assert(offsetof(UParticleModuleTypeDataBeam2, Distance) == 88, "Offset mismatch for UParticleModuleTypeDataBeam2::Distance");
static_assert(offsetof(UParticleModuleTypeDataBeam2, TaperMethod) == 136, "Offset mismatch for UParticleModuleTypeDataBeam2::TaperMethod");
static_assert(offsetof(UParticleModuleTypeDataBeam2, TaperFactor) == 144, "Offset mismatch for UParticleModuleTypeDataBeam2::TaperFactor");
static_assert(offsetof(UParticleModuleTypeDataBeam2, TaperScale) == 192, "Offset mismatch for UParticleModuleTypeDataBeam2::TaperScale");
static_assert(offsetof(UParticleModuleTypeDataBeam2, RenderDirectLine) == 240, "Offset mismatch for UParticleModuleTypeDataBeam2::RenderDirectLine");

// /Script/CascadeRuntime.ParticleModuleTypeDataGpu
// Kind: Class; super: ParticleModuleTypeDataBase
class UParticleModuleTypeDataGpu
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EmitterInfo[0x350]; // 0x0030 (Size: 0x350, Type: StructProperty)
    std::uint8_t ResourceData[0x240]; // 0x0380 (Size: 0x240, Type: StructProperty)
    float CameraMotionBlurAmount; // 0x05C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClearExistingParticlesOnInit; // 0x05C4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleTypeDataGpu, EmitterInfo) == 48, "Offset mismatch for UParticleModuleTypeDataGpu::EmitterInfo");
static_assert(offsetof(UParticleModuleTypeDataGpu, ResourceData) == 896, "Offset mismatch for UParticleModuleTypeDataGpu::ResourceData");
static_assert(offsetof(UParticleModuleTypeDataGpu, CameraMotionBlurAmount) == 1472, "Offset mismatch for UParticleModuleTypeDataGpu::CameraMotionBlurAmount");
static_assert(offsetof(UParticleModuleTypeDataGpu, bClearExistingParticlesOnInit) == 1476, "Offset mismatch for UParticleModuleTypeDataGpu::bClearExistingParticlesOnInit");

// /Script/CascadeRuntime.ParticleModuleTypeDataMesh
// Kind: Class; super: ParticleModuleTypeDataBase
class UParticleModuleTypeDataMesh
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Mesh; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    float LODSizeScale; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CastShadows; // 0x0044 (Size: 0x1, Type: BoolProperty)
    // 0x0044 BoolProperty DoCollisions (shared storage)
    // 0x0044 BoolProperty bUseStaticMeshLODs (shared storage)
    std::uint8_t MeshAlignment; // 0x0045 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bEnableMotionBlur; // 0x0046 (Size: 0x1, Type: BoolProperty)
    // 0x0046 BoolProperty bOverrideDefaultMotionBlurSettings (shared storage)
    // 0x0046 BoolProperty bOverrideMaterial (shared storage)
    std::uint8_t Pad_0002[0x1]; // 0x0047
    std::uint8_t RollPitchYawRange[0x60]; // 0x0048 (Size: 0x60, Type: StructProperty)
    std::uint8_t AxisLockOption; // 0x00A8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bCameraFacing; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CameraFacingUpAxisOption; // 0x00AA (Size: 0x1, Type: ByteProperty)
    std::uint8_t CameraFacingOption; // 0x00AB (Size: 0x1, Type: ByteProperty)
    std::uint8_t bApplyParticleRotationAsSpin; // 0x00AC (Size: 0x1, Type: BoolProperty)
    // 0x00AC BoolProperty bCollisionsConsiderPartilceSize (shared storage)
    // 0x00AC BoolProperty bFaceCameraDirectionRatherThanPosition (shared storage)
};

static_assert(offsetof(UParticleModuleTypeDataMesh, Mesh) == 48, "Offset mismatch for UParticleModuleTypeDataMesh::Mesh");
static_assert(offsetof(UParticleModuleTypeDataMesh, LODSizeScale) == 64, "Offset mismatch for UParticleModuleTypeDataMesh::LODSizeScale");
static_assert(offsetof(UParticleModuleTypeDataMesh, CastShadows) == 68, "Offset mismatch for UParticleModuleTypeDataMesh::CastShadows");
static_assert(offsetof(UParticleModuleTypeDataMesh, MeshAlignment) == 69, "Offset mismatch for UParticleModuleTypeDataMesh::MeshAlignment");
static_assert(offsetof(UParticleModuleTypeDataMesh, bEnableMotionBlur) == 70, "Offset mismatch for UParticleModuleTypeDataMesh::bEnableMotionBlur");
static_assert(offsetof(UParticleModuleTypeDataMesh, RollPitchYawRange) == 72, "Offset mismatch for UParticleModuleTypeDataMesh::RollPitchYawRange");
static_assert(offsetof(UParticleModuleTypeDataMesh, AxisLockOption) == 168, "Offset mismatch for UParticleModuleTypeDataMesh::AxisLockOption");
static_assert(offsetof(UParticleModuleTypeDataMesh, bCameraFacing) == 169, "Offset mismatch for UParticleModuleTypeDataMesh::bCameraFacing");
static_assert(offsetof(UParticleModuleTypeDataMesh, CameraFacingUpAxisOption) == 170, "Offset mismatch for UParticleModuleTypeDataMesh::CameraFacingUpAxisOption");
static_assert(offsetof(UParticleModuleTypeDataMesh, CameraFacingOption) == 171, "Offset mismatch for UParticleModuleTypeDataMesh::CameraFacingOption");
static_assert(offsetof(UParticleModuleTypeDataMesh, bApplyParticleRotationAsSpin) == 172, "Offset mismatch for UParticleModuleTypeDataMesh::bApplyParticleRotationAsSpin");

// /Script/CascadeRuntime.ParticleModuleTypeDataRibbon
// Kind: Class; super: ParticleModuleTypeDataBase
class UParticleModuleTypeDataRibbon
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t MaxTessellationBetweenParticles; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t SheetsPerTrail; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxTrailCount; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxParticleInTrailCount; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t bClipSourceSegement; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bDeadTrailsOnDeactivate (shared storage)
    // 0x0040 BoolProperty bDeadTrailsOnSourceLoss (shared storage)
    // 0x0040 BoolProperty bEnablePreviousTangentRecalculation (shared storage)
    // 0x0040 BoolProperty bSpawnInitialParticle (shared storage)
    // 0x0040 BoolProperty bTangentRecalculationEveryFrame (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::uint8_t RenderAxis; // 0x0044 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    float TangentSpawningScalar; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRenderGeometry; // 0x004C (Size: 0x1, Type: BoolProperty)
    // 0x004C BoolProperty bRenderSpawnPoints (shared storage)
    // 0x004C BoolProperty bRenderTangents (shared storage)
    // 0x004C BoolProperty bRenderTessellation (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x004D
    float TilingDistance; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float DistanceTessellationStepSize; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableTangentDiffInterpScale; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0059
    float TangentTessellationScalar; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UParticleModuleTypeDataRibbon, MaxTessellationBetweenParticles) == 48, "Offset mismatch for UParticleModuleTypeDataRibbon::MaxTessellationBetweenParticles");
static_assert(offsetof(UParticleModuleTypeDataRibbon, SheetsPerTrail) == 52, "Offset mismatch for UParticleModuleTypeDataRibbon::SheetsPerTrail");
static_assert(offsetof(UParticleModuleTypeDataRibbon, MaxTrailCount) == 56, "Offset mismatch for UParticleModuleTypeDataRibbon::MaxTrailCount");
static_assert(offsetof(UParticleModuleTypeDataRibbon, MaxParticleInTrailCount) == 60, "Offset mismatch for UParticleModuleTypeDataRibbon::MaxParticleInTrailCount");
static_assert(offsetof(UParticleModuleTypeDataRibbon, bClipSourceSegement) == 64, "Offset mismatch for UParticleModuleTypeDataRibbon::bClipSourceSegement");
static_assert(offsetof(UParticleModuleTypeDataRibbon, RenderAxis) == 68, "Offset mismatch for UParticleModuleTypeDataRibbon::RenderAxis");
static_assert(offsetof(UParticleModuleTypeDataRibbon, TangentSpawningScalar) == 72, "Offset mismatch for UParticleModuleTypeDataRibbon::TangentSpawningScalar");
static_assert(offsetof(UParticleModuleTypeDataRibbon, bRenderGeometry) == 76, "Offset mismatch for UParticleModuleTypeDataRibbon::bRenderGeometry");
static_assert(offsetof(UParticleModuleTypeDataRibbon, TilingDistance) == 80, "Offset mismatch for UParticleModuleTypeDataRibbon::TilingDistance");
static_assert(offsetof(UParticleModuleTypeDataRibbon, DistanceTessellationStepSize) == 84, "Offset mismatch for UParticleModuleTypeDataRibbon::DistanceTessellationStepSize");
static_assert(offsetof(UParticleModuleTypeDataRibbon, bEnableTangentDiffInterpScale) == 88, "Offset mismatch for UParticleModuleTypeDataRibbon::bEnableTangentDiffInterpScale");
static_assert(offsetof(UParticleModuleTypeDataRibbon, TangentTessellationScalar) == 92, "Offset mismatch for UParticleModuleTypeDataRibbon::TangentTessellationScalar");

// /Script/CascadeRuntime.ParticleModuleVectorFieldBase
// Kind: Class; super: ParticleModule
class UParticleModuleVectorFieldBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t b3DDrawMode; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bCurvesAsColor (shared storage)
    // 0x0028 BoolProperty bEnabled (shared storage)
    // 0x0028 BoolProperty bFinalUpdateModule (shared storage)
    // 0x0028 BoolProperty bSpawnModule (shared storage)
    // 0x0028 BoolProperty bSupported3DDrawMode (shared storage)
    // 0x0028 BoolProperty bUpdateForGPUEmitter (shared storage)
    // 0x0028 BoolProperty bUpdateModule (shared storage)
    std::uint8_t LODDuplicate; // 0x0029 (Size: 0x1, Type: BoolProperty)
    // 0x0029 BoolProperty bEditable (shared storage)
    // 0x0029 BoolProperty bRequiresLoopingNotification (shared storage)
    // 0x0029 BoolProperty bSupportsRandomSeed (shared storage)
    std::uint8_t LODValidity; // 0x002A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UParticleModuleVectorFieldBase, b3DDrawMode) == 40, "Offset mismatch for UParticleModuleVectorFieldBase::b3DDrawMode");
static_assert(offsetof(UParticleModuleVectorFieldBase, LODDuplicate) == 41, "Offset mismatch for UParticleModuleVectorFieldBase::LODDuplicate");
static_assert(offsetof(UParticleModuleVectorFieldBase, LODValidity) == 42, "Offset mismatch for UParticleModuleVectorFieldBase::LODValidity");

// /Script/CascadeRuntime.ParticleModuleVectorFieldGlobal
// Kind: Class; super: ParticleModuleVectorFieldBase
class UParticleModuleVectorFieldGlobal
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bOverrideGlobalVectorFieldTightness; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float GlobalVectorFieldScale; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float GlobalVectorFieldTightness; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UParticleModuleVectorFieldGlobal, bOverrideGlobalVectorFieldTightness) == 48, "Offset mismatch for UParticleModuleVectorFieldGlobal::bOverrideGlobalVectorFieldTightness");
static_assert(offsetof(UParticleModuleVectorFieldGlobal, GlobalVectorFieldScale) == 52, "Offset mismatch for UParticleModuleVectorFieldGlobal::GlobalVectorFieldScale");
static_assert(offsetof(UParticleModuleVectorFieldGlobal, GlobalVectorFieldTightness) == 56, "Offset mismatch for UParticleModuleVectorFieldGlobal::GlobalVectorFieldTightness");

// /Script/CascadeRuntime.ParticleModuleVectorFieldLocal
// Kind: Class; super: ParticleModuleVectorFieldBase
class UParticleModuleVectorFieldLocal
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* VectorField; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RelativeTranslation[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeRotation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeScale3D[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    float Intensity; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Tightness; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreComponentTransform; // 0x0088 (Size: 0x1, Type: BoolProperty)
    // 0x0088 BoolProperty bTileX (shared storage)
    // 0x0088 BoolProperty bTileY (shared storage)
    // 0x0088 BoolProperty bTileZ (shared storage)
    // 0x0088 BoolProperty bUseFixDT (shared storage)
};

static_assert(offsetof(UParticleModuleVectorFieldLocal, VectorField) == 48, "Offset mismatch for UParticleModuleVectorFieldLocal::VectorField");
static_assert(offsetof(UParticleModuleVectorFieldLocal, RelativeTranslation) == 56, "Offset mismatch for UParticleModuleVectorFieldLocal::RelativeTranslation");
static_assert(offsetof(UParticleModuleVectorFieldLocal, RelativeRotation) == 80, "Offset mismatch for UParticleModuleVectorFieldLocal::RelativeRotation");
static_assert(offsetof(UParticleModuleVectorFieldLocal, RelativeScale3D) == 104, "Offset mismatch for UParticleModuleVectorFieldLocal::RelativeScale3D");
static_assert(offsetof(UParticleModuleVectorFieldLocal, Intensity) == 128, "Offset mismatch for UParticleModuleVectorFieldLocal::Intensity");
static_assert(offsetof(UParticleModuleVectorFieldLocal, Tightness) == 132, "Offset mismatch for UParticleModuleVectorFieldLocal::Tightness");
static_assert(offsetof(UParticleModuleVectorFieldLocal, bIgnoreComponentTransform) == 136, "Offset mismatch for UParticleModuleVectorFieldLocal::bIgnoreComponentTransform");

// /Script/CascadeRuntime.ParticleModuleVectorFieldRotation
// Kind: Class; super: ParticleModuleVectorFieldBase
class UParticleModuleVectorFieldRotation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MinInitialRotation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxInitialRotation[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleVectorFieldRotation, MinInitialRotation) == 48, "Offset mismatch for UParticleModuleVectorFieldRotation::MinInitialRotation");
static_assert(offsetof(UParticleModuleVectorFieldRotation, MaxInitialRotation) == 72, "Offset mismatch for UParticleModuleVectorFieldRotation::MaxInitialRotation");

// /Script/CascadeRuntime.ParticleModuleVectorFieldRotationRate
// Kind: Class; super: ParticleModuleVectorFieldBase
class UParticleModuleVectorFieldRotationRate
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RotationRate[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleVectorFieldRotationRate, RotationRate) == 48, "Offset mismatch for UParticleModuleVectorFieldRotationRate::RotationRate");

// /Script/CascadeRuntime.ParticleModuleVectorFieldScale
// Kind: Class; super: ParticleModuleVectorFieldBase
class UParticleModuleVectorFieldScale
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* VectorFieldScale; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VectorFieldScaleRaw[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleVectorFieldScale, VectorFieldScale) == 48, "Offset mismatch for UParticleModuleVectorFieldScale::VectorFieldScale");
static_assert(offsetof(UParticleModuleVectorFieldScale, VectorFieldScaleRaw) == 56, "Offset mismatch for UParticleModuleVectorFieldScale::VectorFieldScaleRaw");

// /Script/CascadeRuntime.ParticleModuleVectorFieldScaleOverLife
// Kind: Class; super: ParticleModuleVectorFieldBase
class UParticleModuleVectorFieldScaleOverLife
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* VectorFieldScaleOverLife; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VectorFieldScaleOverLifeRaw[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLife) == 48, "Offset mismatch for UParticleModuleVectorFieldScaleOverLife::VectorFieldScaleOverLife");
static_assert(offsetof(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLifeRaw) == 56, "Offset mismatch for UParticleModuleVectorFieldScaleOverLife::VectorFieldScaleOverLifeRaw");

// /Script/CascadeRuntime.ParticleModuleVelocity
// Kind: Class; super: ParticleModuleVelocityBase
class UParticleModuleVelocity
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t StartVelocity[0x60]; // 0x0038 (Size: 0x60, Type: StructProperty)
    std::uint8_t StartVelocityRadial[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleVelocity, StartVelocity) == 56, "Offset mismatch for UParticleModuleVelocity::StartVelocity");
static_assert(offsetof(UParticleModuleVelocity, StartVelocityRadial) == 152, "Offset mismatch for UParticleModuleVelocity::StartVelocityRadial");

// /Script/CascadeRuntime.ParticleModuleVelocityBase
// Kind: Class; super: ParticleModule
class UParticleModuleVelocityBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bApplyOwnerScale; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bInWorldSpace (shared storage)
};

static_assert(offsetof(UParticleModuleVelocityBase, bApplyOwnerScale) == 48, "Offset mismatch for UParticleModuleVelocityBase::bApplyOwnerScale");

// /Script/CascadeRuntime.ParticleModuleVelocityCone
// Kind: Class; super: ParticleModuleVelocityBase
class UParticleModuleVelocityCone
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Angle[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t Velocity[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t Direction[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleVelocityCone, Angle) == 56, "Offset mismatch for UParticleModuleVelocityCone::Angle");
static_assert(offsetof(UParticleModuleVelocityCone, Velocity) == 104, "Offset mismatch for UParticleModuleVelocityCone::Velocity");
static_assert(offsetof(UParticleModuleVelocityCone, Direction) == 152, "Offset mismatch for UParticleModuleVelocityCone::Direction");

// /Script/CascadeRuntime.ParticleModuleVelocityInheritParent
// Kind: Class; super: ParticleModuleVelocityBase
class UParticleModuleVelocityInheritParent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Scale[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleVelocityInheritParent, Scale) == 56, "Offset mismatch for UParticleModuleVelocityInheritParent::Scale");

// /Script/CascadeRuntime.ParticleModuleVelocityOverLifetime
// Kind: Class; super: ParticleModuleVelocityBase
class UParticleModuleVelocityOverLifetime
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t VelOverLife[0x60]; // 0x0038 (Size: 0x60, Type: StructProperty)
    std::uint8_t Absolute; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UParticleModuleVelocityOverLifetime, VelOverLife) == 56, "Offset mismatch for UParticleModuleVelocityOverLifetime::VelOverLife");
static_assert(offsetof(UParticleModuleVelocityOverLifetime, Absolute) == 152, "Offset mismatch for UParticleModuleVelocityOverLifetime::Absolute");

// /Script/CascadeRuntime.ParticleModuleVelocity_Seeded
// Kind: Class; super: ParticleModuleVelocity
class UParticleModuleVelocity_Seeded
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t RandomSeedInfo[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParticleModuleVelocity_Seeded, RandomSeedInfo) == 200, "Offset mismatch for UParticleModuleVelocity_Seeded::RandomSeedInfo");

// /Script/CascadeRuntime.ParticleSpriteEmitter
// Kind: Class; super: ParticleEmitter
class UParticleSpriteEmitter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EmitterName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::int32_t SubUVDataOffset; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t EmitterRenderMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SignificanceLevel; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0032
    std::uint8_t ConvertedModules; // 0x0033 (Size: 0x1, Type: BoolProperty)
    // 0x0033 BoolProperty bCookedOut (shared storage)
    // 0x0033 BoolProperty bDisabledLODsKeepEmitterAlive (shared storage)
    // 0x0033 BoolProperty bIsSoloing (shared storage)
    // 0x0033 BoolProperty bUseLegacySpawningBehavior (shared storage)
    std::uint8_t bDisableWhenInsignficant; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    TArray<void*> LODLevels; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PeakActiveParticles; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t InitialAllocationCount; // 0x004C (Size: 0x4, Type: IntProperty)
    float QualityLevelSpawnRateScale; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint32_t DetailModeBitmask; // 0x0054 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UParticleSpriteEmitter, EmitterName) == 40, "Offset mismatch for UParticleSpriteEmitter::EmitterName");
static_assert(offsetof(UParticleSpriteEmitter, SubUVDataOffset) == 44, "Offset mismatch for UParticleSpriteEmitter::SubUVDataOffset");
static_assert(offsetof(UParticleSpriteEmitter, EmitterRenderMode) == 48, "Offset mismatch for UParticleSpriteEmitter::EmitterRenderMode");
static_assert(offsetof(UParticleSpriteEmitter, SignificanceLevel) == 49, "Offset mismatch for UParticleSpriteEmitter::SignificanceLevel");
static_assert(offsetof(UParticleSpriteEmitter, ConvertedModules) == 51, "Offset mismatch for UParticleSpriteEmitter::ConvertedModules");
static_assert(offsetof(UParticleSpriteEmitter, bDisableWhenInsignficant) == 52, "Offset mismatch for UParticleSpriteEmitter::bDisableWhenInsignficant");
static_assert(offsetof(UParticleSpriteEmitter, LODLevels) == 56, "Offset mismatch for UParticleSpriteEmitter::LODLevels");
static_assert(offsetof(UParticleSpriteEmitter, PeakActiveParticles) == 72, "Offset mismatch for UParticleSpriteEmitter::PeakActiveParticles");
static_assert(offsetof(UParticleSpriteEmitter, InitialAllocationCount) == 76, "Offset mismatch for UParticleSpriteEmitter::InitialAllocationCount");
static_assert(offsetof(UParticleSpriteEmitter, QualityLevelSpawnRateScale) == 80, "Offset mismatch for UParticleSpriteEmitter::QualityLevelSpawnRateScale");
static_assert(offsetof(UParticleSpriteEmitter, DetailModeBitmask) == 84, "Offset mismatch for UParticleSpriteEmitter::DetailModeBitmask");

// /Script/CascadeRuntime.ParticleSystem
// Kind: Class; super: FXSystemAsset
class UParticleSystem
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float UpdateTime_FPS; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float UpdateTime_Delta; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float WarmupTime; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float WarmupTickRate; // 0x006C (Size: 0x4, Type: FloatProperty)
    TArray<void*> Emitters; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    void* PreviewComponent; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* CurveEdSetup; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    float LODDistanceCheckTime; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float MacroUVRadius; // 0x0094 (Size: 0x4, Type: FloatProperty)
    TArray<void*> LODDistances; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LODSettings; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FixedRelativeBoundingBox[0x38]; // 0x00B8 (Size: 0x38, Type: StructProperty)
    float SecondsBeforeInactive; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float Delay; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float DelayLow; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ThumbnailImageOutOfDate; // 0x00FC (Size: 0x1, Type: BoolProperty)
    // 0x00FC BoolProperty bHasPhysics (shared storage)
    // 0x00FC BoolProperty bOrientZAxisTowardCamera (shared storage)
    // 0x00FC BoolProperty bShouldResetPeakCounts (shared storage)
    // 0x00FC BoolProperty bUseFixedRelativeBoundingBox (shared storage)
    // 0x00FC BoolProperty bUseRealtimeThumbnail (shared storage)
    std::uint8_t bAllowManagedTicking; // 0x00FD (Size: 0x1, Type: BoolProperty)
    // 0x00FD BoolProperty bAutoDeactivate (shared storage)
    // 0x00FD BoolProperty bRegenerateLODDuplicate (shared storage)
    // 0x00FD BoolProperty bUseDelayRange (shared storage)
    std::uint8_t SystemUpdateMode; // 0x00FE (Size: 0x1, Type: ByteProperty)
    std::uint8_t LODMethod; // 0x00FF (Size: 0x1, Type: ByteProperty)
    std::uint8_t InsignificantReaction; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OcclusionBoundsMethod; // 0x0101 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0102
    std::uint8_t MaxSignificanceLevel; // 0x0103 (Size: 0x1, Type: EnumProperty)
    std::uint32_t MinTimeBetweenTicks; // 0x0104 (Size: 0x4, Type: UInt32Property)
    float InsignificanceDelay; // 0x0108 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x010C
    std::uint8_t MacroUVPosition[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t CustomOcclusionBounds[0x38]; // 0x0128 (Size: 0x38, Type: StructProperty)
    TArray<void*> SoloTracking; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NamedMaterialSlots; // 0x0170 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UParticleSystem, UpdateTime_FPS) == 96, "Offset mismatch for UParticleSystem::UpdateTime_FPS");
static_assert(offsetof(UParticleSystem, UpdateTime_Delta) == 100, "Offset mismatch for UParticleSystem::UpdateTime_Delta");
static_assert(offsetof(UParticleSystem, WarmupTime) == 104, "Offset mismatch for UParticleSystem::WarmupTime");
static_assert(offsetof(UParticleSystem, WarmupTickRate) == 108, "Offset mismatch for UParticleSystem::WarmupTickRate");
static_assert(offsetof(UParticleSystem, Emitters) == 112, "Offset mismatch for UParticleSystem::Emitters");
static_assert(offsetof(UParticleSystem, PreviewComponent) == 128, "Offset mismatch for UParticleSystem::PreviewComponent");
static_assert(offsetof(UParticleSystem, CurveEdSetup) == 136, "Offset mismatch for UParticleSystem::CurveEdSetup");
static_assert(offsetof(UParticleSystem, LODDistanceCheckTime) == 144, "Offset mismatch for UParticleSystem::LODDistanceCheckTime");
static_assert(offsetof(UParticleSystem, MacroUVRadius) == 148, "Offset mismatch for UParticleSystem::MacroUVRadius");
static_assert(offsetof(UParticleSystem, LODDistances) == 152, "Offset mismatch for UParticleSystem::LODDistances");
static_assert(offsetof(UParticleSystem, LODSettings) == 168, "Offset mismatch for UParticleSystem::LODSettings");
static_assert(offsetof(UParticleSystem, FixedRelativeBoundingBox) == 184, "Offset mismatch for UParticleSystem::FixedRelativeBoundingBox");
static_assert(offsetof(UParticleSystem, SecondsBeforeInactive) == 240, "Offset mismatch for UParticleSystem::SecondsBeforeInactive");
static_assert(offsetof(UParticleSystem, Delay) == 244, "Offset mismatch for UParticleSystem::Delay");
static_assert(offsetof(UParticleSystem, DelayLow) == 248, "Offset mismatch for UParticleSystem::DelayLow");
static_assert(offsetof(UParticleSystem, ThumbnailImageOutOfDate) == 252, "Offset mismatch for UParticleSystem::ThumbnailImageOutOfDate");
static_assert(offsetof(UParticleSystem, bAllowManagedTicking) == 253, "Offset mismatch for UParticleSystem::bAllowManagedTicking");
static_assert(offsetof(UParticleSystem, SystemUpdateMode) == 254, "Offset mismatch for UParticleSystem::SystemUpdateMode");
static_assert(offsetof(UParticleSystem, LODMethod) == 255, "Offset mismatch for UParticleSystem::LODMethod");
static_assert(offsetof(UParticleSystem, InsignificantReaction) == 256, "Offset mismatch for UParticleSystem::InsignificantReaction");
static_assert(offsetof(UParticleSystem, OcclusionBoundsMethod) == 257, "Offset mismatch for UParticleSystem::OcclusionBoundsMethod");
static_assert(offsetof(UParticleSystem, MaxSignificanceLevel) == 259, "Offset mismatch for UParticleSystem::MaxSignificanceLevel");
static_assert(offsetof(UParticleSystem, MinTimeBetweenTicks) == 260, "Offset mismatch for UParticleSystem::MinTimeBetweenTicks");
static_assert(offsetof(UParticleSystem, InsignificanceDelay) == 264, "Offset mismatch for UParticleSystem::InsignificanceDelay");
static_assert(offsetof(UParticleSystem, MacroUVPosition) == 272, "Offset mismatch for UParticleSystem::MacroUVPosition");
static_assert(offsetof(UParticleSystem, CustomOcclusionBounds) == 296, "Offset mismatch for UParticleSystem::CustomOcclusionBounds");
static_assert(offsetof(UParticleSystem, SoloTracking) == 352, "Offset mismatch for UParticleSystem::SoloTracking");
static_assert(offsetof(UParticleSystem, NamedMaterialSlots) == 368, "Offset mismatch for UParticleSystem::NamedMaterialSlots");

// /Script/CascadeRuntime.ParticleSystemComponent
// Kind: Class; super: FXSystemComponent
class UParticleSystemComponent
{
public:
    std::uint8_t Pad_0000[0x580]; // 0x0000
    void* Template; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EmitterMaterials; // 0x0588 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkelMeshComponents; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x1]; // 0x05A8
    std::uint8_t bAllowRecycling; // 0x05A9 (Size: 0x1, Type: BoolProperty)
    // 0x05A9 BoolProperty bAutoAttachWeldSimulatedBodies (shared storage)
    // 0x05A9 BoolProperty bAutoManageAttachment (shared storage)
    // 0x05A9 BoolProperty bResetOnDetach (shared storage)
    // 0x05A9 BoolProperty bUpdateOnDedicatedServer (shared storage)
    std::uint8_t bOverrideLODMethod; // 0x05AA (Size: 0x1, Type: BoolProperty)
    // 0x05AA BoolProperty bSkipUpdateDynamicDataDuringTick (shared storage)
    // 0x05AA BoolProperty bWarmingUp (shared storage)
    std::uint8_t Pad_0002[0xA]; // 0x05AB
    std::uint8_t LODMethod; // 0x05B5 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RequiredSignificance; // 0x05B6 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x05B7
    TArray<void*> InstanceParameters; // 0x05B8 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnParticleSpawn; // 0x05C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnParticleBurst; // 0x05D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnParticleDeath; // 0x05E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnParticleCollide; // 0x05F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bOldPositionValid; // 0x0608 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0609
    std::uint8_t OldPosition[0x18]; // 0x0610 (Size: 0x18, Type: StructProperty)
    std::uint8_t PartSysVelocity[0x18]; // 0x0628 (Size: 0x18, Type: StructProperty)
    float WarmupTime; // 0x0640 (Size: 0x4, Type: FloatProperty)
    float WarmupTickRate; // 0x0644 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0648
    float SecondsBeforeInactive; // 0x064C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0650
    float MaxTimeBeforeForceUpdateTransform; // 0x0654 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x20]; // 0x0658
    TArray<void*> ReplayClips; // 0x0678 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0008[0x8]; // 0x0688
    float CustomTimeDilation; // 0x0690 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0009[0x54]; // 0x0694
    TWeakObjectPtr<void> AutoAttachParent; // 0x06E8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t AutoAttachSocketName[0x4]; // 0x06F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AutoAttachLocationRule; // 0x06F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoAttachRotationRule; // 0x06F5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoAttachScaleRule; // 0x06F6 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x51]; // 0x06F7
    FMulticastInlineDelegate OnSystemFinished; // 0x0748 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UParticleSystemComponent, Template) == 1408, "Offset mismatch for UParticleSystemComponent::Template");
static_assert(offsetof(UParticleSystemComponent, EmitterMaterials) == 1416, "Offset mismatch for UParticleSystemComponent::EmitterMaterials");
static_assert(offsetof(UParticleSystemComponent, SkelMeshComponents) == 1432, "Offset mismatch for UParticleSystemComponent::SkelMeshComponents");
static_assert(offsetof(UParticleSystemComponent, bAllowRecycling) == 1449, "Offset mismatch for UParticleSystemComponent::bAllowRecycling");
static_assert(offsetof(UParticleSystemComponent, bOverrideLODMethod) == 1450, "Offset mismatch for UParticleSystemComponent::bOverrideLODMethod");
static_assert(offsetof(UParticleSystemComponent, LODMethod) == 1461, "Offset mismatch for UParticleSystemComponent::LODMethod");
static_assert(offsetof(UParticleSystemComponent, RequiredSignificance) == 1462, "Offset mismatch for UParticleSystemComponent::RequiredSignificance");
static_assert(offsetof(UParticleSystemComponent, InstanceParameters) == 1464, "Offset mismatch for UParticleSystemComponent::InstanceParameters");
static_assert(offsetof(UParticleSystemComponent, OnParticleSpawn) == 1480, "Offset mismatch for UParticleSystemComponent::OnParticleSpawn");
static_assert(offsetof(UParticleSystemComponent, OnParticleBurst) == 1496, "Offset mismatch for UParticleSystemComponent::OnParticleBurst");
static_assert(offsetof(UParticleSystemComponent, OnParticleDeath) == 1512, "Offset mismatch for UParticleSystemComponent::OnParticleDeath");
static_assert(offsetof(UParticleSystemComponent, OnParticleCollide) == 1528, "Offset mismatch for UParticleSystemComponent::OnParticleCollide");
static_assert(offsetof(UParticleSystemComponent, bOldPositionValid) == 1544, "Offset mismatch for UParticleSystemComponent::bOldPositionValid");
static_assert(offsetof(UParticleSystemComponent, OldPosition) == 1552, "Offset mismatch for UParticleSystemComponent::OldPosition");
static_assert(offsetof(UParticleSystemComponent, PartSysVelocity) == 1576, "Offset mismatch for UParticleSystemComponent::PartSysVelocity");
static_assert(offsetof(UParticleSystemComponent, WarmupTime) == 1600, "Offset mismatch for UParticleSystemComponent::WarmupTime");
static_assert(offsetof(UParticleSystemComponent, WarmupTickRate) == 1604, "Offset mismatch for UParticleSystemComponent::WarmupTickRate");
static_assert(offsetof(UParticleSystemComponent, SecondsBeforeInactive) == 1612, "Offset mismatch for UParticleSystemComponent::SecondsBeforeInactive");
static_assert(offsetof(UParticleSystemComponent, MaxTimeBeforeForceUpdateTransform) == 1620, "Offset mismatch for UParticleSystemComponent::MaxTimeBeforeForceUpdateTransform");
static_assert(offsetof(UParticleSystemComponent, ReplayClips) == 1656, "Offset mismatch for UParticleSystemComponent::ReplayClips");
static_assert(offsetof(UParticleSystemComponent, CustomTimeDilation) == 1680, "Offset mismatch for UParticleSystemComponent::CustomTimeDilation");
static_assert(offsetof(UParticleSystemComponent, AutoAttachParent) == 1768, "Offset mismatch for UParticleSystemComponent::AutoAttachParent");
static_assert(offsetof(UParticleSystemComponent, AutoAttachSocketName) == 1776, "Offset mismatch for UParticleSystemComponent::AutoAttachSocketName");
static_assert(offsetof(UParticleSystemComponent, AutoAttachLocationRule) == 1780, "Offset mismatch for UParticleSystemComponent::AutoAttachLocationRule");
static_assert(offsetof(UParticleSystemComponent, AutoAttachRotationRule) == 1781, "Offset mismatch for UParticleSystemComponent::AutoAttachRotationRule");
static_assert(offsetof(UParticleSystemComponent, AutoAttachScaleRule) == 1782, "Offset mismatch for UParticleSystemComponent::AutoAttachScaleRule");
static_assert(offsetof(UParticleSystemComponent, OnSystemFinished) == 1864, "Offset mismatch for UParticleSystemComponent::OnSystemFinished");

// /Script/CascadeRuntime.ParticleSystemReplay
// Kind: Class; super: Object
class UParticleSystemReplay
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t ClipIDNumber; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UParticleSystemReplay, ClipIDNumber) == 40, "Offset mismatch for UParticleSystemReplay::ClipIDNumber");

// /Script/CascadeRuntime.SubUVAnimation
// Kind: Class; super: Object
class USubUVAnimation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SubUVTexture; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SubImages_Horizontal; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t SubImages_Vertical; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::uint8_t BoundingMode; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t OpacitySourceMode; // 0x0039 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003A
    float AlphaThreshold; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USubUVAnimation, SubUVTexture) == 40, "Offset mismatch for USubUVAnimation::SubUVTexture");
static_assert(offsetof(USubUVAnimation, SubImages_Horizontal) == 48, "Offset mismatch for USubUVAnimation::SubImages_Horizontal");
static_assert(offsetof(USubUVAnimation, SubImages_Vertical) == 52, "Offset mismatch for USubUVAnimation::SubImages_Vertical");
static_assert(offsetof(USubUVAnimation, BoundingMode) == 56, "Offset mismatch for USubUVAnimation::BoundingMode");
static_assert(offsetof(USubUVAnimation, OpacitySourceMode) == 57, "Offset mismatch for USubUVAnimation::OpacitySourceMode");
static_assert(offsetof(USubUVAnimation, AlphaThreshold) == 60, "Offset mismatch for USubUVAnimation::AlphaThreshold");
