/**
 * decamp dumper generated SDK
 * Package: /Script/PointLight
 */
#pragma once
#include "Basic.h"

// /Script/PointLight.PointLightRhythmParameters
// Kind: ScriptStruct; super: none
struct FPointLightRhythmParameters
{
public:
    std::uint8_t LightColor[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* ActiveLight; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* StaticMeshComponent; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ColorBands; // 0x0020 (Size: 0x4, Type: IntProperty)
    float RhythmFrequencyValue; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float WindAmplitudeSpotLight; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float FlashFactor; // 0x002C (Size: 0x4, Type: FloatProperty)
    float SizeBasedIntensity; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LightType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RhythmMode; // 0x0035 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPointLightRhythmParameters, LightColor) == 0, "Offset mismatch for FPointLightRhythmParameters::LightColor");
static_assert(offsetof(FPointLightRhythmParameters, ActiveLight) == 16, "Offset mismatch for FPointLightRhythmParameters::ActiveLight");
static_assert(offsetof(FPointLightRhythmParameters, StaticMeshComponent) == 24, "Offset mismatch for FPointLightRhythmParameters::StaticMeshComponent");
static_assert(offsetof(FPointLightRhythmParameters, ColorBands) == 32, "Offset mismatch for FPointLightRhythmParameters::ColorBands");
static_assert(offsetof(FPointLightRhythmParameters, RhythmFrequencyValue) == 36, "Offset mismatch for FPointLightRhythmParameters::RhythmFrequencyValue");
static_assert(offsetof(FPointLightRhythmParameters, WindAmplitudeSpotLight) == 40, "Offset mismatch for FPointLightRhythmParameters::WindAmplitudeSpotLight");
static_assert(offsetof(FPointLightRhythmParameters, FlashFactor) == 44, "Offset mismatch for FPointLightRhythmParameters::FlashFactor");
static_assert(offsetof(FPointLightRhythmParameters, SizeBasedIntensity) == 48, "Offset mismatch for FPointLightRhythmParameters::SizeBasedIntensity");
static_assert(offsetof(FPointLightRhythmParameters, LightType) == 52, "Offset mismatch for FPointLightRhythmParameters::LightType");
static_assert(offsetof(FPointLightRhythmParameters, RhythmMode) == 53, "Offset mismatch for FPointLightRhythmParameters::RhythmMode");

// /Script/PointLight.PointLightNativeComponent
// Kind: Class; super: ActorComponent
class UPointLightNativeComponent
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    void* ShortCircuitTimelineComponent; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0148
    std::uint8_t FlickerColor[0x10]; // 0x0160 (Size: 0x10, Type: StructProperty)
    float ShortCircuitMinDelay; // 0x0170 (Size: 0x4, Type: FloatProperty)
    float ShortCircuitMaxDelay; // 0x0174 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPointLightNativeComponent, ShortCircuitTimelineComponent) == 320, "Offset mismatch for UPointLightNativeComponent::ShortCircuitTimelineComponent");
static_assert(offsetof(UPointLightNativeComponent, FlickerColor) == 352, "Offset mismatch for UPointLightNativeComponent::FlickerColor");
static_assert(offsetof(UPointLightNativeComponent, ShortCircuitMinDelay) == 368, "Offset mismatch for UPointLightNativeComponent::ShortCircuitMinDelay");
static_assert(offsetof(UPointLightNativeComponent, ShortCircuitMaxDelay) == 372, "Offset mismatch for UPointLightNativeComponent::ShortCircuitMaxDelay");
