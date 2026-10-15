/**
 * decamp dumper generated SDK
 * Package: /Script/LFNBase
 */
#pragma once
#include "Basic.h"

// /Script/LFNBase.LFNLightAdvancedProperties
// Kind: ScriptStruct; super: none
struct FLFNLightAdvancedProperties
{
public:
    std::uint8_t bOverrideDiffuseScaleCustom; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bOverrideInverseExposureBlendCustom (shared storage)
    // 0x0000 BoolProperty bOverrideLightFalloffExponentCustom (shared storage)
    // 0x0000 BoolProperty bOverrideShadowBiasCustom (shared storage)
    // 0x0000 BoolProperty bOverrideShadowResolutionScaleCustom (shared storage)
    // 0x0000 BoolProperty bOverrideShadowSlopeBiasCustom (shared storage)
    // 0x0000 BoolProperty bOverrideSpecularScaleCustom (shared storage)
    // 0x0000 BoolProperty bOverrideUseInverseSquaredFalloffCustom (shared storage)
    std::uint8_t bOverrideCastShadowsFromCinematicObjectsOnlyCustom; // 0x0001 (Size: 0x1, Type: BoolProperty)
    // 0x0001 BoolProperty bOverrideCastTranslucentShadowsCustom (shared storage)
    // 0x0001 BoolProperty bOverrideContactShadowCastingIntensityCustom (shared storage)
    // 0x0001 BoolProperty bOverrideContactShadowLengthCustom (shared storage)
    // 0x0001 BoolProperty bOverrideContactShadowLengthInWorldSpaceUnitsCustom (shared storage)
    // 0x0001 BoolProperty bOverrideContactShadowNonCastingIntensityCustom (shared storage)
    // 0x0001 BoolProperty bOverrideForceCachedShadowsForMovablePrimitivesCustom (shared storage)
    // 0x0001 BoolProperty bOverrideShadowFilterSharpenCustom (shared storage)
    std::uint8_t bOverrideAffectTranslucentLightingCustom; // 0x0002 (Size: 0x1, Type: BoolProperty)
    // 0x0002 BoolProperty bOverrideAllowMegaLightsCustom (shared storage)
    // 0x0002 BoolProperty bOverrideCastVolumetricShadowCustom (shared storage)
    // 0x0002 BoolProperty bOverrideLightingChannelsCustom (shared storage)
    // 0x0002 BoolProperty bOverrideMegaLightsShadowMethodCustom (shared storage)
    // 0x0002 BoolProperty bOverrideRayEndBiasCustom (shared storage)
    // 0x0002 BoolProperty bOverrideTransmissionCustom (shared storage)
    // 0x0002 BoolProperty bOverrideViewLightingChannelsCustom (shared storage)
    std::uint8_t bOverrideAffectRayTracingGlobalIlluminationCustom; // 0x0003 (Size: 0x1, Type: BoolProperty)
    // 0x0003 BoolProperty bOverrideAffectRayTracingReflectionsCustom (shared storage)
    // 0x0003 BoolProperty bOverrideCastDeepShadowCustom (shared storage)
    // 0x0003 BoolProperty bOverrideCastRayTracedShadowCustom (shared storage)
    // 0x0003 BoolProperty bOverrideDeepShadowLayerDistributionCustom (shared storage)
    // 0x0003 BoolProperty bUseInverseSquaredFalloffCustom (shared storage)
    float LightFalloffExponentCustom; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float InverseExposureBlendCustom; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SpecularScaleCustom; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DiffuseScaleCustom; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ShadowResolutionScaleCustom; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float ShadowBiasCustom; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ShadowSlopeBiasCustom; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ShadowFilterSharpenCustom; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ContactShadowLengthCustom; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bContactShadowLengthInWorldSpaceUnitsCustom; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    float ContactShadowCastingIntensityCustom; // 0x002C (Size: 0x4, Type: FloatProperty)
    float ContactShadowNonCastingIntensityCustom; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowMegaLightsCustom; // 0x0034 (Size: 0x1, Type: BoolProperty)
    // 0x0034 BoolProperty bCastShadowsFromCinematicObjectsOnlyCustom (shared storage)
    // 0x0034 BoolProperty bCastTranslucentShadowsCustom (shared storage)
    // 0x0034 BoolProperty bForceCachedShadowsForMovablePrimitivesCustom (shared storage)
    std::uint8_t MegaLightsShadowMethodCustom; // 0x0035 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0036
    float RayEndBiasCustom; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LightingChannelsCustom[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
    std::uint8_t ViewLightingChannelsCustom[0x1]; // 0x003D (Size: 0x1, Type: StructProperty)
    std::uint8_t bAffectTranslucentLightingCustom; // 0x003E (Size: 0x1, Type: BoolProperty)
    // 0x003E BoolProperty bCastDeepShadowCustom (shared storage)
    // 0x003E BoolProperty bCastVolumetricShadowCustom (shared storage)
    // 0x003E BoolProperty bTransmissionCustom (shared storage)
    std::uint8_t CastRayTracedShadowCustom; // 0x003F (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAffectRayTracingGlobalIlluminationCustom; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bAffectRayTracingReflectionsCustom (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0041
    float DeepShadowLayerDistributionCustom; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLFNLightAdvancedProperties, bOverrideDiffuseScaleCustom) == 0, "Offset mismatch for FLFNLightAdvancedProperties::bOverrideDiffuseScaleCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, bOverrideCastShadowsFromCinematicObjectsOnlyCustom) == 1, "Offset mismatch for FLFNLightAdvancedProperties::bOverrideCastShadowsFromCinematicObjectsOnlyCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, bOverrideAffectTranslucentLightingCustom) == 2, "Offset mismatch for FLFNLightAdvancedProperties::bOverrideAffectTranslucentLightingCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, bOverrideAffectRayTracingGlobalIlluminationCustom) == 3, "Offset mismatch for FLFNLightAdvancedProperties::bOverrideAffectRayTracingGlobalIlluminationCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, LightFalloffExponentCustom) == 4, "Offset mismatch for FLFNLightAdvancedProperties::LightFalloffExponentCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, InverseExposureBlendCustom) == 8, "Offset mismatch for FLFNLightAdvancedProperties::InverseExposureBlendCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, SpecularScaleCustom) == 12, "Offset mismatch for FLFNLightAdvancedProperties::SpecularScaleCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, DiffuseScaleCustom) == 16, "Offset mismatch for FLFNLightAdvancedProperties::DiffuseScaleCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, ShadowResolutionScaleCustom) == 20, "Offset mismatch for FLFNLightAdvancedProperties::ShadowResolutionScaleCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, ShadowBiasCustom) == 24, "Offset mismatch for FLFNLightAdvancedProperties::ShadowBiasCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, ShadowSlopeBiasCustom) == 28, "Offset mismatch for FLFNLightAdvancedProperties::ShadowSlopeBiasCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, ShadowFilterSharpenCustom) == 32, "Offset mismatch for FLFNLightAdvancedProperties::ShadowFilterSharpenCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, ContactShadowLengthCustom) == 36, "Offset mismatch for FLFNLightAdvancedProperties::ContactShadowLengthCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, bContactShadowLengthInWorldSpaceUnitsCustom) == 40, "Offset mismatch for FLFNLightAdvancedProperties::bContactShadowLengthInWorldSpaceUnitsCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, ContactShadowCastingIntensityCustom) == 44, "Offset mismatch for FLFNLightAdvancedProperties::ContactShadowCastingIntensityCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, ContactShadowNonCastingIntensityCustom) == 48, "Offset mismatch for FLFNLightAdvancedProperties::ContactShadowNonCastingIntensityCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, bAllowMegaLightsCustom) == 52, "Offset mismatch for FLFNLightAdvancedProperties::bAllowMegaLightsCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, MegaLightsShadowMethodCustom) == 53, "Offset mismatch for FLFNLightAdvancedProperties::MegaLightsShadowMethodCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, RayEndBiasCustom) == 56, "Offset mismatch for FLFNLightAdvancedProperties::RayEndBiasCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, LightingChannelsCustom) == 60, "Offset mismatch for FLFNLightAdvancedProperties::LightingChannelsCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, ViewLightingChannelsCustom) == 61, "Offset mismatch for FLFNLightAdvancedProperties::ViewLightingChannelsCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, bAffectTranslucentLightingCustom) == 62, "Offset mismatch for FLFNLightAdvancedProperties::bAffectTranslucentLightingCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, CastRayTracedShadowCustom) == 63, "Offset mismatch for FLFNLightAdvancedProperties::CastRayTracedShadowCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, bAffectRayTracingGlobalIlluminationCustom) == 64, "Offset mismatch for FLFNLightAdvancedProperties::bAffectRayTracingGlobalIlluminationCustom");
static_assert(offsetof(FLFNLightAdvancedProperties, DeepShadowLayerDistributionCustom) == 68, "Offset mismatch for FLFNLightAdvancedProperties::DeepShadowLayerDistributionCustom");

// /Script/LFNBase.LFNLightCompProperties
// Kind: ScriptStruct; super: none
struct FLFNLightCompProperties
{
public:
    std::uint8_t bOverrideAttenuationRadiusCustom; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bOverrideBrickColorCustom (shared storage)
    // 0x0000 BoolProperty bOverrideColorCustom (shared storage)
    // 0x0000 BoolProperty bOverrideIntensityCustom (shared storage)
    // 0x0000 BoolProperty bOverrideSpotlightInnerConeCustom (shared storage)
    // 0x0000 BoolProperty bOverrideSpotlightOuterConeCustom (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float IntensityCustom; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ColorCustom[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::int32_t BrickColorIndexCustom; // 0x0018 (Size: 0x4, Type: IntProperty)
    float AttenuationRadiusCustom; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SpotlightInnerConeCustom; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SpotlightOuterConeCustom; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LightSettings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLFNLightCompProperties, bOverrideAttenuationRadiusCustom) == 0, "Offset mismatch for FLFNLightCompProperties::bOverrideAttenuationRadiusCustom");
static_assert(offsetof(FLFNLightCompProperties, IntensityCustom) == 4, "Offset mismatch for FLFNLightCompProperties::IntensityCustom");
static_assert(offsetof(FLFNLightCompProperties, ColorCustom) == 8, "Offset mismatch for FLFNLightCompProperties::ColorCustom");
static_assert(offsetof(FLFNLightCompProperties, BrickColorIndexCustom) == 24, "Offset mismatch for FLFNLightCompProperties::BrickColorIndexCustom");
static_assert(offsetof(FLFNLightCompProperties, AttenuationRadiusCustom) == 28, "Offset mismatch for FLFNLightCompProperties::AttenuationRadiusCustom");
static_assert(offsetof(FLFNLightCompProperties, SpotlightInnerConeCustom) == 32, "Offset mismatch for FLFNLightCompProperties::SpotlightInnerConeCustom");
static_assert(offsetof(FLFNLightCompProperties, SpotlightOuterConeCustom) == 36, "Offset mismatch for FLFNLightCompProperties::SpotlightOuterConeCustom");
static_assert(offsetof(FLFNLightCompProperties, LightSettings) == 40, "Offset mismatch for FLFNLightCompProperties::LightSettings");

// /Script/LFNBase.LFNLightConeProperties
// Kind: ScriptStruct; super: none
struct FLFNLightConeProperties
{
public:
    void* StaticMesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Material; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float Brightness; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseColorFromParentLightComponent; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    std::uint8_t Color[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    float ConeAngle; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t XYScale[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    float ConeLength; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float StartRadius; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float LightShift; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float NoiseScale; // 0x004C (Size: 0x4, Type: FloatProperty)
    float NoiseContrast; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float EdgeFalloffPower; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLFNLightConeProperties, StaticMesh) == 0, "Offset mismatch for FLFNLightConeProperties::StaticMesh");
static_assert(offsetof(FLFNLightConeProperties, Material) == 8, "Offset mismatch for FLFNLightConeProperties::Material");
static_assert(offsetof(FLFNLightConeProperties, Brightness) == 16, "Offset mismatch for FLFNLightConeProperties::Brightness");
static_assert(offsetof(FLFNLightConeProperties, bUseColorFromParentLightComponent) == 20, "Offset mismatch for FLFNLightConeProperties::bUseColorFromParentLightComponent");
static_assert(offsetof(FLFNLightConeProperties, Color) == 24, "Offset mismatch for FLFNLightConeProperties::Color");
static_assert(offsetof(FLFNLightConeProperties, ConeAngle) == 40, "Offset mismatch for FLFNLightConeProperties::ConeAngle");
static_assert(offsetof(FLFNLightConeProperties, XYScale) == 48, "Offset mismatch for FLFNLightConeProperties::XYScale");
static_assert(offsetof(FLFNLightConeProperties, ConeLength) == 64, "Offset mismatch for FLFNLightConeProperties::ConeLength");
static_assert(offsetof(FLFNLightConeProperties, StartRadius) == 68, "Offset mismatch for FLFNLightConeProperties::StartRadius");
static_assert(offsetof(FLFNLightConeProperties, LightShift) == 72, "Offset mismatch for FLFNLightConeProperties::LightShift");
static_assert(offsetof(FLFNLightConeProperties, NoiseScale) == 76, "Offset mismatch for FLFNLightConeProperties::NoiseScale");
static_assert(offsetof(FLFNLightConeProperties, NoiseContrast) == 80, "Offset mismatch for FLFNLightConeProperties::NoiseContrast");
static_assert(offsetof(FLFNLightConeProperties, EdgeFalloffPower) == 84, "Offset mismatch for FLFNLightConeProperties::EdgeFalloffPower");

// /Script/LFNBase.LFNLightProperties
// Kind: ScriptStruct; super: none
struct FLFNLightProperties
{
public:
    std::uint8_t bOverrideCastShadowsCustom; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bOverrideIntensityUnitsCustom (shared storage)
    // 0x0000 BoolProperty bOverrideLowEndIntensityMultiplierCustom (shared storage)
    // 0x0000 BoolProperty bOverrideSoftSourceRadiusCustom (shared storage)
    // 0x0000 BoolProperty bOverrideSourceLengthCustom (shared storage)
    // 0x0000 BoolProperty bOverrideSourceRadiusCustom (shared storage)
    // 0x0000 BoolProperty bOverrideTemperatureCustom (shared storage)
    // 0x0000 BoolProperty bOverrideUseTemperatureCustom (shared storage)
    std::uint8_t bOverrideIESIntensityScaleCustom; // 0x0001 (Size: 0x1, Type: BoolProperty)
    // 0x0001 BoolProperty bOverrideIESTextureCustom (shared storage)
    // 0x0001 BoolProperty bOverrideIndirectLightingIntensityCustom (shared storage)
    // 0x0001 BoolProperty bOverrideLightMeshFogIntensityMultiplierCustom (shared storage)
    // 0x0001 BoolProperty bOverrideUseIESIntensityCustom (shared storage)
    // 0x0001 BoolProperty bOverrideVolumetricScatteringIntensityCustom (shared storage)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float LowEndIntensityMultiplierCustom; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IntensityUnitsCustom; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float SourceRadiusCustom; // 0x000C (Size: 0x4, Type: FloatProperty)
    float SoftSourceRadiusCustom; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SourceLengthCustom; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseTemperatureCustom; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0019
    float TemperatureCustom; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCastShadowsCustom; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0021
    float IndirectLightingIntensityCustom; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float VolumetricScatteringIntensityCustom; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float LightMeshFogIntensityMultiplierCustom; // 0x002C (Size: 0x4, Type: FloatProperty)
    void* IESTextureCustom; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseIESIntensityCustom; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0039
    float IESIntensityScaleCustom; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Advanced[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLFNLightProperties, bOverrideCastShadowsCustom) == 0, "Offset mismatch for FLFNLightProperties::bOverrideCastShadowsCustom");
static_assert(offsetof(FLFNLightProperties, bOverrideIESIntensityScaleCustom) == 1, "Offset mismatch for FLFNLightProperties::bOverrideIESIntensityScaleCustom");
static_assert(offsetof(FLFNLightProperties, LowEndIntensityMultiplierCustom) == 4, "Offset mismatch for FLFNLightProperties::LowEndIntensityMultiplierCustom");
static_assert(offsetof(FLFNLightProperties, IntensityUnitsCustom) == 8, "Offset mismatch for FLFNLightProperties::IntensityUnitsCustom");
static_assert(offsetof(FLFNLightProperties, SourceRadiusCustom) == 12, "Offset mismatch for FLFNLightProperties::SourceRadiusCustom");
static_assert(offsetof(FLFNLightProperties, SoftSourceRadiusCustom) == 16, "Offset mismatch for FLFNLightProperties::SoftSourceRadiusCustom");
static_assert(offsetof(FLFNLightProperties, SourceLengthCustom) == 20, "Offset mismatch for FLFNLightProperties::SourceLengthCustom");
static_assert(offsetof(FLFNLightProperties, bUseTemperatureCustom) == 24, "Offset mismatch for FLFNLightProperties::bUseTemperatureCustom");
static_assert(offsetof(FLFNLightProperties, TemperatureCustom) == 28, "Offset mismatch for FLFNLightProperties::TemperatureCustom");
static_assert(offsetof(FLFNLightProperties, bCastShadowsCustom) == 32, "Offset mismatch for FLFNLightProperties::bCastShadowsCustom");
static_assert(offsetof(FLFNLightProperties, IndirectLightingIntensityCustom) == 36, "Offset mismatch for FLFNLightProperties::IndirectLightingIntensityCustom");
static_assert(offsetof(FLFNLightProperties, VolumetricScatteringIntensityCustom) == 40, "Offset mismatch for FLFNLightProperties::VolumetricScatteringIntensityCustom");
static_assert(offsetof(FLFNLightProperties, LightMeshFogIntensityMultiplierCustom) == 44, "Offset mismatch for FLFNLightProperties::LightMeshFogIntensityMultiplierCustom");
static_assert(offsetof(FLFNLightProperties, IESTextureCustom) == 48, "Offset mismatch for FLFNLightProperties::IESTextureCustom");
static_assert(offsetof(FLFNLightProperties, bUseIESIntensityCustom) == 56, "Offset mismatch for FLFNLightProperties::bUseIESIntensityCustom");
static_assert(offsetof(FLFNLightProperties, IESIntensityScaleCustom) == 60, "Offset mismatch for FLFNLightProperties::IESIntensityScaleCustom");
static_assert(offsetof(FLFNLightProperties, Advanced) == 64, "Offset mismatch for FLFNLightProperties::Advanced");

// /Script/LFNBase.LFNLightingProperties
// Kind: ScriptStruct; super: none
struct FLFNLightingProperties
{
public:
    std::uint8_t bCastShadows; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bDisableAll (shared storage)
    // 0x0000 BoolProperty bRenderOnlyLightMesh (shared storage)
    // 0x0000 BoolProperty bUseLightMesh (shared storage)
    // 0x0000 BoolProperty bUseLightMeshFog (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LightMaxDrawDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutomaticLightMaxDistanceFadeRange; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float LightMaxDistanceFadeRange; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LightMeshMaxDrawDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LightMeshMaxDistanceFadeRange; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLFNLightingProperties, bCastShadows) == 0, "Offset mismatch for FLFNLightingProperties::bCastShadows");
static_assert(offsetof(FLFNLightingProperties, LightMaxDrawDistance) == 4, "Offset mismatch for FLFNLightingProperties::LightMaxDrawDistance");
static_assert(offsetof(FLFNLightingProperties, bAutomaticLightMaxDistanceFadeRange) == 8, "Offset mismatch for FLFNLightingProperties::bAutomaticLightMaxDistanceFadeRange");
static_assert(offsetof(FLFNLightingProperties, LightMaxDistanceFadeRange) == 12, "Offset mismatch for FLFNLightingProperties::LightMaxDistanceFadeRange");
static_assert(offsetof(FLFNLightingProperties, LightMeshMaxDrawDistance) == 16, "Offset mismatch for FLFNLightingProperties::LightMeshMaxDrawDistance");
static_assert(offsetof(FLFNLightingProperties, LightMeshMaxDistanceFadeRange) == 20, "Offset mismatch for FLFNLightingProperties::LightMeshMaxDistanceFadeRange");

// /Script/LFNBase.LFNLightingQualityLevels
// Kind: ScriptStruct; super: none
struct FLFNLightingQualityLevels
{
public:
    std::uint8_t Low[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Medium[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t High[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Epic[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShowCinematicQualityLevel; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0061
    std::uint8_t Cinematic[0x1]; // 0x0064 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLFNLightingQualityLevels, Low) == 0, "Offset mismatch for FLFNLightingQualityLevels::Low");
static_assert(offsetof(FLFNLightingQualityLevels, Medium) == 24, "Offset mismatch for FLFNLightingQualityLevels::Medium");
static_assert(offsetof(FLFNLightingQualityLevels, High) == 48, "Offset mismatch for FLFNLightingQualityLevels::High");
static_assert(offsetof(FLFNLightingQualityLevels, Epic) == 72, "Offset mismatch for FLFNLightingQualityLevels::Epic");
static_assert(offsetof(FLFNLightingQualityLevels, bShowCinematicQualityLevel) == 96, "Offset mismatch for FLFNLightingQualityLevels::bShowCinematicQualityLevel");
static_assert(offsetof(FLFNLightingQualityLevels, Cinematic) == 100, "Offset mismatch for FLFNLightingQualityLevels::Cinematic");

// /Script/LFNBase.LFNLightingScalability
// Kind: ScriptStruct; super: none
struct FLFNLightingScalability
{
public:
    std::uint8_t bUseScalability; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t QualitySettings[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLFNLightingScalability, bUseScalability) == 0, "Offset mismatch for FLFNLightingScalability::bUseScalability");
static_assert(offsetof(FLFNLightingScalability, QualitySettings) == 4, "Offset mismatch for FLFNLightingScalability::QualitySettings");

// /Script/LFNBase.LFNScalabilitySettings
// Kind: ScriptStruct; super: none
struct FLFNScalabilitySettings
{
public:
    std::uint8_t StaticMeshSettings[0xA8]; // 0x0000 (Size: 0xA8, Type: StructProperty)
    std::uint8_t LightingSettings[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLFNScalabilitySettings, StaticMeshSettings) == 0, "Offset mismatch for FLFNScalabilitySettings::StaticMeshSettings");
static_assert(offsetof(FLFNScalabilitySettings, LightingSettings) == 168, "Offset mismatch for FLFNScalabilitySettings::LightingSettings");

// /Script/LFNBase.LFNStaticMeshProperties
// Kind: ScriptStruct; super: none
struct FLFNStaticMeshProperties
{
public:
    std::uint8_t bCastShadows; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bOverrideMinLOD (shared storage)
    // 0x0000 BoolProperty bVisibility (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t MinLOD; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAffectDistanceFieldLighting; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bEvaluateWorldPositionOffset (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float WorldPositionOffsetDisableDistance; // 0x000C (Size: 0x4, Type: FloatProperty)
    float CullingDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float CommonPartsStartCullDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CommonPartsEndCullDistance; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float InstanceLodScale; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLFNStaticMeshProperties, bCastShadows) == 0, "Offset mismatch for FLFNStaticMeshProperties::bCastShadows");
static_assert(offsetof(FLFNStaticMeshProperties, MinLOD) == 4, "Offset mismatch for FLFNStaticMeshProperties::MinLOD");
static_assert(offsetof(FLFNStaticMeshProperties, bAffectDistanceFieldLighting) == 8, "Offset mismatch for FLFNStaticMeshProperties::bAffectDistanceFieldLighting");
static_assert(offsetof(FLFNStaticMeshProperties, WorldPositionOffsetDisableDistance) == 12, "Offset mismatch for FLFNStaticMeshProperties::WorldPositionOffsetDisableDistance");
static_assert(offsetof(FLFNStaticMeshProperties, CullingDistance) == 16, "Offset mismatch for FLFNStaticMeshProperties::CullingDistance");
static_assert(offsetof(FLFNStaticMeshProperties, CommonPartsStartCullDistance) == 20, "Offset mismatch for FLFNStaticMeshProperties::CommonPartsStartCullDistance");
static_assert(offsetof(FLFNStaticMeshProperties, CommonPartsEndCullDistance) == 24, "Offset mismatch for FLFNStaticMeshProperties::CommonPartsEndCullDistance");
static_assert(offsetof(FLFNStaticMeshProperties, InstanceLodScale) == 28, "Offset mismatch for FLFNStaticMeshProperties::InstanceLodScale");

// /Script/LFNBase.LFNStaticMeshQualityLevels
// Kind: ScriptStruct; super: none
struct FLFNStaticMeshQualityLevels
{
public:
    std::uint8_t Low[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Medium[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t High[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t Epic[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t bShowCinematicQualityLevel; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0081
    std::uint8_t Cinematic[0x1]; // 0x0084 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLFNStaticMeshQualityLevels, Low) == 0, "Offset mismatch for FLFNStaticMeshQualityLevels::Low");
static_assert(offsetof(FLFNStaticMeshQualityLevels, Medium) == 32, "Offset mismatch for FLFNStaticMeshQualityLevels::Medium");
static_assert(offsetof(FLFNStaticMeshQualityLevels, High) == 64, "Offset mismatch for FLFNStaticMeshQualityLevels::High");
static_assert(offsetof(FLFNStaticMeshQualityLevels, Epic) == 96, "Offset mismatch for FLFNStaticMeshQualityLevels::Epic");
static_assert(offsetof(FLFNStaticMeshQualityLevels, bShowCinematicQualityLevel) == 128, "Offset mismatch for FLFNStaticMeshQualityLevels::bShowCinematicQualityLevel");
static_assert(offsetof(FLFNStaticMeshQualityLevels, Cinematic) == 132, "Offset mismatch for FLFNStaticMeshQualityLevels::Cinematic");

// /Script/LFNBase.LFNStaticMeshScalability
// Kind: ScriptStruct; super: none
struct FLFNStaticMeshScalability
{
public:
    std::uint8_t bUseScalability; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t QualitySettings[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLFNStaticMeshScalability, bUseScalability) == 0, "Offset mismatch for FLFNStaticMeshScalability::bUseScalability");
static_assert(offsetof(FLFNStaticMeshScalability, QualitySettings) == 4, "Offset mismatch for FLFNStaticMeshScalability::QualitySettings");

// /Script/LFNBase.LFNBaseActor
// Kind: Class; super: Actor
class ULFNBaseActor
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    std::uint8_t bIncludeOnCellTransformer; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02A1
    std::uint8_t DefaultTags[0x20]; // 0x02A8 (Size: 0x20, Type: StructProperty)
    float SnapGridSize; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    float VertSnapGridSize; // 0x02CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t SnapOffset[0xC]; // 0x02D0 (Size: 0xC, Type: StructProperty)
    std::uint8_t CentroidOffset[0xC]; // 0x02DC (Size: 0xC, Type: StructProperty)
    std::uint8_t BaseLocToPivotOffset[0xC]; // 0x02E8 (Size: 0xC, Type: StructProperty)
    std::uint8_t bAutoAssignNavProperties; // 0x02F4 (Size: 0x1, Type: BoolProperty)
    // 0x02F4 BoolProperty bBeingDragged (shared storage)
    // 0x02F4 BoolProperty bBeingRotated (shared storage)
    // 0x02F4 BoolProperty bBeingTranslated (shared storage)
    // 0x02F4 BoolProperty bCanInteract (shared storage)
    // 0x02F4 BoolProperty bEnableRotationSnap (shared storage)
};

static_assert(offsetof(ULFNBaseActor, bIncludeOnCellTransformer) == 672, "Offset mismatch for ULFNBaseActor::bIncludeOnCellTransformer");
static_assert(offsetof(ULFNBaseActor, DefaultTags) == 680, "Offset mismatch for ULFNBaseActor::DefaultTags");
static_assert(offsetof(ULFNBaseActor, SnapGridSize) == 712, "Offset mismatch for ULFNBaseActor::SnapGridSize");
static_assert(offsetof(ULFNBaseActor, VertSnapGridSize) == 716, "Offset mismatch for ULFNBaseActor::VertSnapGridSize");
static_assert(offsetof(ULFNBaseActor, SnapOffset) == 720, "Offset mismatch for ULFNBaseActor::SnapOffset");
static_assert(offsetof(ULFNBaseActor, CentroidOffset) == 732, "Offset mismatch for ULFNBaseActor::CentroidOffset");
static_assert(offsetof(ULFNBaseActor, BaseLocToPivotOffset) == 744, "Offset mismatch for ULFNBaseActor::BaseLocToPivotOffset");
static_assert(offsetof(ULFNBaseActor, bAutoAssignNavProperties) == 756, "Offset mismatch for ULFNBaseActor::bAutoAssignNavProperties");

// /Script/LFNBase.LFNDynamicRelevancyComponent
// Kind: Class; super: ActorComponent
class ULFNDynamicRelevancyComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UpdateRateInSeconds[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDynamicCullDistance[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDynamicCullDistance[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t DesiredMaxPawnsInRange[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t DynamicCullDistanceStep[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULFNDynamicRelevancyComponent, UpdateRateInSeconds) == 192, "Offset mismatch for ULFNDynamicRelevancyComponent::UpdateRateInSeconds");
static_assert(offsetof(ULFNDynamicRelevancyComponent, MinDynamicCullDistance) == 232, "Offset mismatch for ULFNDynamicRelevancyComponent::MinDynamicCullDistance");
static_assert(offsetof(ULFNDynamicRelevancyComponent, MaxDynamicCullDistance) == 272, "Offset mismatch for ULFNDynamicRelevancyComponent::MaxDynamicCullDistance");
static_assert(offsetof(ULFNDynamicRelevancyComponent, DesiredMaxPawnsInRange) == 312, "Offset mismatch for ULFNDynamicRelevancyComponent::DesiredMaxPawnsInRange");
static_assert(offsetof(ULFNDynamicRelevancyComponent, DynamicCullDistanceStep) == 352, "Offset mismatch for ULFNDynamicRelevancyComponent::DynamicCullDistanceStep");

// /Script/LFNBase.LFNLightConeMeshComponent
// Kind: Class; super: StaticMeshComponent
class ULFNLightConeMeshComponent
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    std::uint8_t bUseLightCone; // 0x06B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x06B9
    std::uint8_t ConeSettings[0x58]; // 0x06C0 (Size: 0x58, Type: StructProperty)
    float MaxDrawDistance; // 0x0718 (Size: 0x4, Type: FloatProperty)
    float FadeSize; // 0x071C (Size: 0x4, Type: FloatProperty)
    std::uint8_t IgnoreTimeOfDayUpdates; // 0x0720 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0721
    void* MID; // 0x0728 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULFNLightConeMeshComponent, bUseLightCone) == 1720, "Offset mismatch for ULFNLightConeMeshComponent::bUseLightCone");
static_assert(offsetof(ULFNLightConeMeshComponent, ConeSettings) == 1728, "Offset mismatch for ULFNLightConeMeshComponent::ConeSettings");
static_assert(offsetof(ULFNLightConeMeshComponent, MaxDrawDistance) == 1816, "Offset mismatch for ULFNLightConeMeshComponent::MaxDrawDistance");
static_assert(offsetof(ULFNLightConeMeshComponent, FadeSize) == 1820, "Offset mismatch for ULFNLightConeMeshComponent::FadeSize");
static_assert(offsetof(ULFNLightConeMeshComponent, IgnoreTimeOfDayUpdates) == 1824, "Offset mismatch for ULFNLightConeMeshComponent::IgnoreTimeOfDayUpdates");
static_assert(offsetof(ULFNLightConeMeshComponent, MID) == 1832, "Offset mismatch for ULFNLightConeMeshComponent::MID");

// /Script/LFNBase.LFNLightMeshComponent
// Kind: Class; super: StaticMeshComponent
class ULFNLightMeshComponent
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    std::uint8_t bShowLightMeshMaterials; // 0x06B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x06B9
    std::uint8_t LightMeshMaterial[0x20]; // 0x06C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LightMeshMaterialWithFog[0x20]; // 0x06E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LightMeshMaterialWithNoiseFog[0x20]; // 0x0700 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LightMeshMaterialIES[0x20]; // 0x0720 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LightMeshMaterialIESWithFog[0x20]; // 0x0740 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LightMeshMaterialIESWithNoiseFog[0x20]; // 0x0760 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bUseMIDOnIESLightMeshMaterials; // 0x0780 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetLightIntensityFromParent; // 0x0781 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0782
    float Intensity; // 0x0784 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bGetLightColorFromParent; // 0x0788 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0789
    std::uint8_t Color[0x10]; // 0x078C (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseTemperature; // 0x079C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x079D
    float Temperature; // 0x07A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bGetLightAttenuationRadiusFromParent; // 0x07A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x07A5
    float AttenuationRadius; // 0x07A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bGetLightFalloffExponentFromParent; // 0x07AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x07AD
    float LightFalloffExponent; // 0x07B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bGetInverseExposureBlendFromParent; // 0x07B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x07B5
    float InverseExposureBlend; // 0x07B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSpotlight; // 0x07BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetSpotlightOuterConeFromParent; // 0x07BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x2]; // 0x07BE
    float SpotlightOuterCone; // 0x07C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bGetSpotlightInnerConeFromParent; // 0x07C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x07C5
    float SpotlightInnerCone; // 0x07C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseFog; // 0x07CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseNoise; // 0x07CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x2]; // 0x07CE
    float LocalFogIntensity; // 0x07D0 (Size: 0x4, Type: FloatProperty)
    float FogIntensity; // 0x07D4 (Size: 0x4, Type: FloatProperty)
    float FogOriginOffset; // 0x07D8 (Size: 0x4, Type: FloatProperty)
    float LightFadeInDistance; // 0x07DC (Size: 0x4, Type: FloatProperty)
    float LightFadeInSize; // 0x07E0 (Size: 0x4, Type: FloatProperty)
    float LightFadeOutDistance; // 0x07E4 (Size: 0x4, Type: FloatProperty)
    float LightFadeOutSize; // 0x07E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULFNLightMeshComponent, bShowLightMeshMaterials) == 1720, "Offset mismatch for ULFNLightMeshComponent::bShowLightMeshMaterials");
static_assert(offsetof(ULFNLightMeshComponent, LightMeshMaterial) == 1728, "Offset mismatch for ULFNLightMeshComponent::LightMeshMaterial");
static_assert(offsetof(ULFNLightMeshComponent, LightMeshMaterialWithFog) == 1760, "Offset mismatch for ULFNLightMeshComponent::LightMeshMaterialWithFog");
static_assert(offsetof(ULFNLightMeshComponent, LightMeshMaterialWithNoiseFog) == 1792, "Offset mismatch for ULFNLightMeshComponent::LightMeshMaterialWithNoiseFog");
static_assert(offsetof(ULFNLightMeshComponent, LightMeshMaterialIES) == 1824, "Offset mismatch for ULFNLightMeshComponent::LightMeshMaterialIES");
static_assert(offsetof(ULFNLightMeshComponent, LightMeshMaterialIESWithFog) == 1856, "Offset mismatch for ULFNLightMeshComponent::LightMeshMaterialIESWithFog");
static_assert(offsetof(ULFNLightMeshComponent, LightMeshMaterialIESWithNoiseFog) == 1888, "Offset mismatch for ULFNLightMeshComponent::LightMeshMaterialIESWithNoiseFog");
static_assert(offsetof(ULFNLightMeshComponent, bUseMIDOnIESLightMeshMaterials) == 1920, "Offset mismatch for ULFNLightMeshComponent::bUseMIDOnIESLightMeshMaterials");
static_assert(offsetof(ULFNLightMeshComponent, bGetLightIntensityFromParent) == 1921, "Offset mismatch for ULFNLightMeshComponent::bGetLightIntensityFromParent");
static_assert(offsetof(ULFNLightMeshComponent, Intensity) == 1924, "Offset mismatch for ULFNLightMeshComponent::Intensity");
static_assert(offsetof(ULFNLightMeshComponent, bGetLightColorFromParent) == 1928, "Offset mismatch for ULFNLightMeshComponent::bGetLightColorFromParent");
static_assert(offsetof(ULFNLightMeshComponent, Color) == 1932, "Offset mismatch for ULFNLightMeshComponent::Color");
static_assert(offsetof(ULFNLightMeshComponent, bUseTemperature) == 1948, "Offset mismatch for ULFNLightMeshComponent::bUseTemperature");
static_assert(offsetof(ULFNLightMeshComponent, Temperature) == 1952, "Offset mismatch for ULFNLightMeshComponent::Temperature");
static_assert(offsetof(ULFNLightMeshComponent, bGetLightAttenuationRadiusFromParent) == 1956, "Offset mismatch for ULFNLightMeshComponent::bGetLightAttenuationRadiusFromParent");
static_assert(offsetof(ULFNLightMeshComponent, AttenuationRadius) == 1960, "Offset mismatch for ULFNLightMeshComponent::AttenuationRadius");
static_assert(offsetof(ULFNLightMeshComponent, bGetLightFalloffExponentFromParent) == 1964, "Offset mismatch for ULFNLightMeshComponent::bGetLightFalloffExponentFromParent");
static_assert(offsetof(ULFNLightMeshComponent, LightFalloffExponent) == 1968, "Offset mismatch for ULFNLightMeshComponent::LightFalloffExponent");
static_assert(offsetof(ULFNLightMeshComponent, bGetInverseExposureBlendFromParent) == 1972, "Offset mismatch for ULFNLightMeshComponent::bGetInverseExposureBlendFromParent");
static_assert(offsetof(ULFNLightMeshComponent, InverseExposureBlend) == 1976, "Offset mismatch for ULFNLightMeshComponent::InverseExposureBlend");
static_assert(offsetof(ULFNLightMeshComponent, bSpotlight) == 1980, "Offset mismatch for ULFNLightMeshComponent::bSpotlight");
static_assert(offsetof(ULFNLightMeshComponent, bGetSpotlightOuterConeFromParent) == 1981, "Offset mismatch for ULFNLightMeshComponent::bGetSpotlightOuterConeFromParent");
static_assert(offsetof(ULFNLightMeshComponent, SpotlightOuterCone) == 1984, "Offset mismatch for ULFNLightMeshComponent::SpotlightOuterCone");
static_assert(offsetof(ULFNLightMeshComponent, bGetSpotlightInnerConeFromParent) == 1988, "Offset mismatch for ULFNLightMeshComponent::bGetSpotlightInnerConeFromParent");
static_assert(offsetof(ULFNLightMeshComponent, SpotlightInnerCone) == 1992, "Offset mismatch for ULFNLightMeshComponent::SpotlightInnerCone");
static_assert(offsetof(ULFNLightMeshComponent, bUseFog) == 1996, "Offset mismatch for ULFNLightMeshComponent::bUseFog");
static_assert(offsetof(ULFNLightMeshComponent, bUseNoise) == 1997, "Offset mismatch for ULFNLightMeshComponent::bUseNoise");
static_assert(offsetof(ULFNLightMeshComponent, LocalFogIntensity) == 2000, "Offset mismatch for ULFNLightMeshComponent::LocalFogIntensity");
static_assert(offsetof(ULFNLightMeshComponent, FogIntensity) == 2004, "Offset mismatch for ULFNLightMeshComponent::FogIntensity");
static_assert(offsetof(ULFNLightMeshComponent, FogOriginOffset) == 2008, "Offset mismatch for ULFNLightMeshComponent::FogOriginOffset");
static_assert(offsetof(ULFNLightMeshComponent, LightFadeInDistance) == 2012, "Offset mismatch for ULFNLightMeshComponent::LightFadeInDistance");
static_assert(offsetof(ULFNLightMeshComponent, LightFadeInSize) == 2016, "Offset mismatch for ULFNLightMeshComponent::LightFadeInSize");
static_assert(offsetof(ULFNLightMeshComponent, LightFadeOutDistance) == 2020, "Offset mismatch for ULFNLightMeshComponent::LightFadeOutDistance");
static_assert(offsetof(ULFNLightMeshComponent, LightFadeOutSize) == 2024, "Offset mismatch for ULFNLightMeshComponent::LightFadeOutSize");

// /Script/LFNBase.LFNLightPresetDataAsset
// Kind: Class; super: PrimaryDataAsset
class ULFNLightPresetDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bOverrideAttenuationRadiusCustom; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bOverrideBrickColorCustom (shared storage)
    // 0x0028 BoolProperty bOverrideColorCustom (shared storage)
    // 0x0028 BoolProperty bOverrideIntensityCustom (shared storage)
    // 0x0028 BoolProperty bOverrideSpotlightInnerConeCustom (shared storage)
    // 0x0028 BoolProperty bOverrideSpotlightOuterConeCustom (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float IntensityCustom; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ColorCustom[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::int32_t BrickColorIndexCustom; // 0x0040 (Size: 0x4, Type: IntProperty)
    float AttenuationRadiusCustom; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float SpotlightInnerConeCustom; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float SpotlightOuterConeCustom; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PresetLightSettings[0x88]; // 0x0050 (Size: 0x88, Type: StructProperty)
    std::uint8_t PresetOutputLightSettings[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULFNLightPresetDataAsset, bOverrideAttenuationRadiusCustom) == 40, "Offset mismatch for ULFNLightPresetDataAsset::bOverrideAttenuationRadiusCustom");
static_assert(offsetof(ULFNLightPresetDataAsset, IntensityCustom) == 44, "Offset mismatch for ULFNLightPresetDataAsset::IntensityCustom");
static_assert(offsetof(ULFNLightPresetDataAsset, ColorCustom) == 48, "Offset mismatch for ULFNLightPresetDataAsset::ColorCustom");
static_assert(offsetof(ULFNLightPresetDataAsset, BrickColorIndexCustom) == 64, "Offset mismatch for ULFNLightPresetDataAsset::BrickColorIndexCustom");
static_assert(offsetof(ULFNLightPresetDataAsset, AttenuationRadiusCustom) == 68, "Offset mismatch for ULFNLightPresetDataAsset::AttenuationRadiusCustom");
static_assert(offsetof(ULFNLightPresetDataAsset, SpotlightInnerConeCustom) == 72, "Offset mismatch for ULFNLightPresetDataAsset::SpotlightInnerConeCustom");
static_assert(offsetof(ULFNLightPresetDataAsset, SpotlightOuterConeCustom) == 76, "Offset mismatch for ULFNLightPresetDataAsset::SpotlightOuterConeCustom");
static_assert(offsetof(ULFNLightPresetDataAsset, PresetLightSettings) == 80, "Offset mismatch for ULFNLightPresetDataAsset::PresetLightSettings");
static_assert(offsetof(ULFNLightPresetDataAsset, PresetOutputLightSettings) == 216, "Offset mismatch for ULFNLightPresetDataAsset::PresetOutputLightSettings");

// /Script/LFNBase.LFNLightingComponent
// Kind: Class; super: ActorComponent
class ULFNLightingComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* MPC; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseGlobalLightIntensityMultiplier; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LightingContext; // 0x00C9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00CA
    TMap<void*, void*> LightingContextIntensityParamNames; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bUseGlobalFogIntensityMultiplier; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E1
    std::uint8_t GlobalFogIntensityMultiplierParamName[0x4]; // 0x00E4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUsePowerOutage; // 0x00E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULFNLightingComponent, MPC) == 192, "Offset mismatch for ULFNLightingComponent::MPC");
static_assert(offsetof(ULFNLightingComponent, bUseGlobalLightIntensityMultiplier) == 200, "Offset mismatch for ULFNLightingComponent::bUseGlobalLightIntensityMultiplier");
static_assert(offsetof(ULFNLightingComponent, LightingContext) == 201, "Offset mismatch for ULFNLightingComponent::LightingContext");
static_assert(offsetof(ULFNLightingComponent, LightingContextIntensityParamNames) == 208, "Offset mismatch for ULFNLightingComponent::LightingContextIntensityParamNames");
static_assert(offsetof(ULFNLightingComponent, bUseGlobalFogIntensityMultiplier) == 224, "Offset mismatch for ULFNLightingComponent::bUseGlobalFogIntensityMultiplier");
static_assert(offsetof(ULFNLightingComponent, GlobalFogIntensityMultiplierParamName) == 228, "Offset mismatch for ULFNLightingComponent::GlobalFogIntensityMultiplierParamName");
static_assert(offsetof(ULFNLightingComponent, bUsePowerOutage) == 232, "Offset mismatch for ULFNLightingComponent::bUsePowerOutage");

// /Script/LFNBase.LFNLightingFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULFNLightingFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LFNBase.LFNLightingInterface
// Kind: Class; super: Interface
class ULFNLightingInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LFNBase.LFNPointLightActor
// Kind: Class; super: Actor
class ULFNPointLightActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* PointLightComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* ScalabilityComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULFNPointLightActor, PointLightComponent) == 624, "Offset mismatch for ULFNPointLightActor::PointLightComponent");
static_assert(offsetof(ULFNPointLightActor, ScalabilityComponent) == 632, "Offset mismatch for ULFNPointLightActor::ScalabilityComponent");

// /Script/LFNBase.LFNPointLightComponent
// Kind: Class; super: PointLightComponent
class ULFNPointLightComponent
{
public:
    std::uint8_t Pad_0000[0x418]; // 0x0000
    float GlobalIntensityMultiplier; // 0x0418 (Size: 0x4, Type: FloatProperty)
    float LocalIntensityMultiplier; // 0x041C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPowerOutageActive; // 0x0420 (Size: 0x1, Type: BoolProperty)
    // 0x0420 BoolProperty bUseLightPreset (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0421
    void* LightPreset; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOverrideAttenuationRadiusCustom; // 0x0430 (Size: 0x1, Type: BoolProperty)
    // 0x0430 BoolProperty bOverrideBrickColorCustom (shared storage)
    // 0x0430 BoolProperty bOverrideColorCustom (shared storage)
    // 0x0430 BoolProperty bOverrideIntensityCustom (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0431
    float IntensityCustom; // 0x0434 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ColorCustom[0x10]; // 0x0438 (Size: 0x10, Type: StructProperty)
    std::int32_t BrickColorIndexCustom; // 0x0448 (Size: 0x4, Type: IntProperty)
    float AttenuationRadiusCustom; // 0x044C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ComponentLightSettings[0x88]; // 0x0450 (Size: 0x88, Type: StructProperty)
    std::uint8_t bShowComputedLightSettings; // 0x04D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x04D9
    std::uint8_t ComputedLightSettings[0xB0]; // 0x04E0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t UpdateBrickLights; // 0x0590 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULFNPointLightComponent, GlobalIntensityMultiplier) == 1048, "Offset mismatch for ULFNPointLightComponent::GlobalIntensityMultiplier");
static_assert(offsetof(ULFNPointLightComponent, LocalIntensityMultiplier) == 1052, "Offset mismatch for ULFNPointLightComponent::LocalIntensityMultiplier");
static_assert(offsetof(ULFNPointLightComponent, bIsPowerOutageActive) == 1056, "Offset mismatch for ULFNPointLightComponent::bIsPowerOutageActive");
static_assert(offsetof(ULFNPointLightComponent, LightPreset) == 1064, "Offset mismatch for ULFNPointLightComponent::LightPreset");
static_assert(offsetof(ULFNPointLightComponent, bOverrideAttenuationRadiusCustom) == 1072, "Offset mismatch for ULFNPointLightComponent::bOverrideAttenuationRadiusCustom");
static_assert(offsetof(ULFNPointLightComponent, IntensityCustom) == 1076, "Offset mismatch for ULFNPointLightComponent::IntensityCustom");
static_assert(offsetof(ULFNPointLightComponent, ColorCustom) == 1080, "Offset mismatch for ULFNPointLightComponent::ColorCustom");
static_assert(offsetof(ULFNPointLightComponent, BrickColorIndexCustom) == 1096, "Offset mismatch for ULFNPointLightComponent::BrickColorIndexCustom");
static_assert(offsetof(ULFNPointLightComponent, AttenuationRadiusCustom) == 1100, "Offset mismatch for ULFNPointLightComponent::AttenuationRadiusCustom");
static_assert(offsetof(ULFNPointLightComponent, ComponentLightSettings) == 1104, "Offset mismatch for ULFNPointLightComponent::ComponentLightSettings");
static_assert(offsetof(ULFNPointLightComponent, bShowComputedLightSettings) == 1240, "Offset mismatch for ULFNPointLightComponent::bShowComputedLightSettings");
static_assert(offsetof(ULFNPointLightComponent, ComputedLightSettings) == 1248, "Offset mismatch for ULFNPointLightComponent::ComputedLightSettings");
static_assert(offsetof(ULFNPointLightComponent, UpdateBrickLights) == 1424, "Offset mismatch for ULFNPointLightComponent::UpdateBrickLights");

// /Script/LFNBase.LFNProfileGo
// Kind: Class; super: FortProfileGo
class ULFNProfileGo
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TMap<void*, void*> CsvNonPersistentMetadata; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CsvMetadata; // 0x0098 (Size: 0x10, Type: MapProperty)
    float DefaultSettleTime; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x364]; // 0x00AC
    TArray<void*> ProfileGoScenarios; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoGeneratedScenarios; // 0x0420 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoCollections; // 0x0430 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoCommands; // 0x0440 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimProfilingAssetsBlacklist; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimProfilingCosmeticsWhitelist; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAthenaCosmeticItemDefinitions; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAthenaCosmeticVariantTokens; // 0x0480 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULFNProfileGo, CsvNonPersistentMetadata) == 136, "Offset mismatch for ULFNProfileGo::CsvNonPersistentMetadata");
static_assert(offsetof(ULFNProfileGo, CsvMetadata) == 152, "Offset mismatch for ULFNProfileGo::CsvMetadata");
static_assert(offsetof(ULFNProfileGo, DefaultSettleTime) == 168, "Offset mismatch for ULFNProfileGo::DefaultSettleTime");
static_assert(offsetof(ULFNProfileGo, ProfileGoScenarios) == 1040, "Offset mismatch for ULFNProfileGo::ProfileGoScenarios");
static_assert(offsetof(ULFNProfileGo, ProfileGoGeneratedScenarios) == 1056, "Offset mismatch for ULFNProfileGo::ProfileGoGeneratedScenarios");
static_assert(offsetof(ULFNProfileGo, ProfileGoCollections) == 1072, "Offset mismatch for ULFNProfileGo::ProfileGoCollections");
static_assert(offsetof(ULFNProfileGo, ProfileGoCommands) == 1088, "Offset mismatch for ULFNProfileGo::ProfileGoCommands");
static_assert(offsetof(ULFNProfileGo, AnimProfilingAssetsBlacklist) == 1104, "Offset mismatch for ULFNProfileGo::AnimProfilingAssetsBlacklist");
static_assert(offsetof(ULFNProfileGo, AnimProfilingCosmeticsWhitelist) == 1120, "Offset mismatch for ULFNProfileGo::AnimProfilingCosmeticsWhitelist");
static_assert(offsetof(ULFNProfileGo, CachedAthenaCosmeticItemDefinitions) == 1136, "Offset mismatch for ULFNProfileGo::CachedAthenaCosmeticItemDefinitions");
static_assert(offsetof(ULFNProfileGo, CachedAthenaCosmeticVariantTokens) == 1152, "Offset mismatch for ULFNProfileGo::CachedAthenaCosmeticVariantTokens");

// /Script/LFNBase.LFNScalabilityComponent
// Kind: Class; super: ActorComponent
class ULFNScalabilityComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t ScalabilitySettings[0x128]; // 0x00D8 (Size: 0x128, Type: StructProperty)
    float LightFadeOverlapRatio; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float LightMeshFadeOverlapRatio; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float LightMeshActivationOffset; // 0x0208 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULFNScalabilityComponent, ScalabilitySettings) == 216, "Offset mismatch for ULFNScalabilityComponent::ScalabilitySettings");
static_assert(offsetof(ULFNScalabilityComponent, LightFadeOverlapRatio) == 512, "Offset mismatch for ULFNScalabilityComponent::LightFadeOverlapRatio");
static_assert(offsetof(ULFNScalabilityComponent, LightMeshFadeOverlapRatio) == 516, "Offset mismatch for ULFNScalabilityComponent::LightMeshFadeOverlapRatio");
static_assert(offsetof(ULFNScalabilityComponent, LightMeshActivationOffset) == 520, "Offset mismatch for ULFNScalabilityComponent::LightMeshActivationOffset");

// /Script/LFNBase.LFNSpotLightActor
// Kind: Class; super: Actor
class ULFNSpotLightActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SpotLightComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* ScalabilityComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULFNSpotLightActor, SpotLightComponent) == 624, "Offset mismatch for ULFNSpotLightActor::SpotLightComponent");
static_assert(offsetof(ULFNSpotLightActor, ScalabilityComponent) == 632, "Offset mismatch for ULFNSpotLightActor::ScalabilityComponent");

// /Script/LFNBase.LFNSpotLightComponent
// Kind: Class; super: SpotLightComponent
class ULFNSpotLightComponent
{
public:
    std::uint8_t Pad_0000[0x428]; // 0x0000
    float GlobalIntensityMultiplier; // 0x0428 (Size: 0x4, Type: FloatProperty)
    float LocalIntensityMultiplier; // 0x042C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPowerOutageActive; // 0x0430 (Size: 0x1, Type: BoolProperty)
    // 0x0430 BoolProperty bUseLightPreset (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0431
    void* LightPreset; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOverrideAttenuationRadiusCustom; // 0x0440 (Size: 0x1, Type: BoolProperty)
    // 0x0440 BoolProperty bOverrideBrickColorCustom (shared storage)
    // 0x0440 BoolProperty bOverrideColorCustom (shared storage)
    // 0x0440 BoolProperty bOverrideIntensityCustom (shared storage)
    // 0x0440 BoolProperty bOverrideSpotlightInnerConeCustom (shared storage)
    // 0x0440 BoolProperty bOverrideSpotlightOuterConeCustom (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0441
    float IntensityCustom; // 0x0444 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ColorCustom[0x10]; // 0x0448 (Size: 0x10, Type: StructProperty)
    std::int32_t BrickColorIndexCustom; // 0x0458 (Size: 0x4, Type: IntProperty)
    float AttenuationRadiusCustom; // 0x045C (Size: 0x4, Type: FloatProperty)
    float SpotlightInnerConeCustom; // 0x0460 (Size: 0x4, Type: FloatProperty)
    float SpotlightOuterConeCustom; // 0x0464 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ComponentLightSettings[0x88]; // 0x0468 (Size: 0x88, Type: StructProperty)
    std::uint8_t bShowComputedLightSettings; // 0x04F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x04F1
    std::uint8_t ComputedLightSettings[0xB0]; // 0x04F8 (Size: 0xB0, Type: StructProperty)
    std::uint8_t UpdateBrickLights; // 0x05A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULFNSpotLightComponent, GlobalIntensityMultiplier) == 1064, "Offset mismatch for ULFNSpotLightComponent::GlobalIntensityMultiplier");
static_assert(offsetof(ULFNSpotLightComponent, LocalIntensityMultiplier) == 1068, "Offset mismatch for ULFNSpotLightComponent::LocalIntensityMultiplier");
static_assert(offsetof(ULFNSpotLightComponent, bIsPowerOutageActive) == 1072, "Offset mismatch for ULFNSpotLightComponent::bIsPowerOutageActive");
static_assert(offsetof(ULFNSpotLightComponent, LightPreset) == 1080, "Offset mismatch for ULFNSpotLightComponent::LightPreset");
static_assert(offsetof(ULFNSpotLightComponent, bOverrideAttenuationRadiusCustom) == 1088, "Offset mismatch for ULFNSpotLightComponent::bOverrideAttenuationRadiusCustom");
static_assert(offsetof(ULFNSpotLightComponent, IntensityCustom) == 1092, "Offset mismatch for ULFNSpotLightComponent::IntensityCustom");
static_assert(offsetof(ULFNSpotLightComponent, ColorCustom) == 1096, "Offset mismatch for ULFNSpotLightComponent::ColorCustom");
static_assert(offsetof(ULFNSpotLightComponent, BrickColorIndexCustom) == 1112, "Offset mismatch for ULFNSpotLightComponent::BrickColorIndexCustom");
static_assert(offsetof(ULFNSpotLightComponent, AttenuationRadiusCustom) == 1116, "Offset mismatch for ULFNSpotLightComponent::AttenuationRadiusCustom");
static_assert(offsetof(ULFNSpotLightComponent, SpotlightInnerConeCustom) == 1120, "Offset mismatch for ULFNSpotLightComponent::SpotlightInnerConeCustom");
static_assert(offsetof(ULFNSpotLightComponent, SpotlightOuterConeCustom) == 1124, "Offset mismatch for ULFNSpotLightComponent::SpotlightOuterConeCustom");
static_assert(offsetof(ULFNSpotLightComponent, ComponentLightSettings) == 1128, "Offset mismatch for ULFNSpotLightComponent::ComponentLightSettings");
static_assert(offsetof(ULFNSpotLightComponent, bShowComputedLightSettings) == 1264, "Offset mismatch for ULFNSpotLightComponent::bShowComputedLightSettings");
static_assert(offsetof(ULFNSpotLightComponent, ComputedLightSettings) == 1272, "Offset mismatch for ULFNSpotLightComponent::ComputedLightSettings");
static_assert(offsetof(ULFNSpotLightComponent, UpdateBrickLights) == 1448, "Offset mismatch for ULFNSpotLightComponent::UpdateBrickLights");
