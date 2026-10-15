/**
 * decamp dumper generated SDK
 * Package: /Script/AudioExtensions
 */
#pragma once
#include "Basic.h"

// /Script/AudioExtensions.AudioParameter
// Kind: ScriptStruct; super: none
struct FAudioParameter
{
public:
    std::uint8_t ParamName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float FloatParam; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BoolParam; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t IntParam; // 0x000C (Size: 0x4, Type: IntProperty)
    void* ObjectParam; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    FString StringParam; // 0x0018 (Size: 0x10, Type: StrProperty)
    TArray<void*> ArrayFloatParam; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ArrayBoolParam; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ArrayIntParam; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ArrayObjectParam; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ArrayStringParam; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ParamType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    FName TypeName; // 0x007C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAudioParameter, ParamName) == 0, "Offset mismatch for FAudioParameter::ParamName");
static_assert(offsetof(FAudioParameter, FloatParam) == 4, "Offset mismatch for FAudioParameter::FloatParam");
static_assert(offsetof(FAudioParameter, BoolParam) == 8, "Offset mismatch for FAudioParameter::BoolParam");
static_assert(offsetof(FAudioParameter, IntParam) == 12, "Offset mismatch for FAudioParameter::IntParam");
static_assert(offsetof(FAudioParameter, ObjectParam) == 16, "Offset mismatch for FAudioParameter::ObjectParam");
static_assert(offsetof(FAudioParameter, StringParam) == 24, "Offset mismatch for FAudioParameter::StringParam");
static_assert(offsetof(FAudioParameter, ArrayFloatParam) == 40, "Offset mismatch for FAudioParameter::ArrayFloatParam");
static_assert(offsetof(FAudioParameter, ArrayBoolParam) == 56, "Offset mismatch for FAudioParameter::ArrayBoolParam");
static_assert(offsetof(FAudioParameter, ArrayIntParam) == 72, "Offset mismatch for FAudioParameter::ArrayIntParam");
static_assert(offsetof(FAudioParameter, ArrayObjectParam) == 88, "Offset mismatch for FAudioParameter::ArrayObjectParam");
static_assert(offsetof(FAudioParameter, ArrayStringParam) == 104, "Offset mismatch for FAudioParameter::ArrayStringParam");
static_assert(offsetof(FAudioParameter, ParamType) == 120, "Offset mismatch for FAudioParameter::ParamType");
static_assert(offsetof(FAudioParameter, TypeName) == 124, "Offset mismatch for FAudioParameter::TypeName");

// /Script/AudioExtensions.SoundGeneratorOutput
// Kind: ScriptStruct; super: none
struct FSoundGeneratorOutput
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSoundGeneratorOutput, Name) == 0, "Offset mismatch for FSoundGeneratorOutput::Name");

// /Script/AudioExtensions.SoundWaveCloudStreamingPlatformProjectSettings
// Kind: ScriptStruct; super: none
struct FSoundWaveCloudStreamingPlatformProjectSettings
{
public:
    std::uint8_t EnablementSetting; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSoundWaveCloudStreamingPlatformProjectSettings, EnablementSetting) == 0, "Offset mismatch for FSoundWaveCloudStreamingPlatformProjectSettings::EnablementSetting");

// /Script/AudioExtensions.SoundWaveCloudStreamingPlatformSettings
// Kind: ScriptStruct; super: none
struct FSoundWaveCloudStreamingPlatformSettings
{
public:
    std::uint8_t EnablementSetting; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSoundWaveCloudStreamingPlatformSettings, EnablementSetting) == 0, "Offset mismatch for FSoundWaveCloudStreamingPlatformSettings::EnablementSetting");

// /Script/AudioExtensions.SoundWaveCuePoint
// Kind: ScriptStruct; super: none
struct FSoundWaveCuePoint
{
public:
    std::int32_t CuePointID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString Label; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int64_t FramePosition; // 0x0018 (Size: 0x8, Type: Int64Property)
    std::int64_t FrameLength; // 0x0020 (Size: 0x8, Type: Int64Property)
    std::uint8_t bIsLoopRegion; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundWaveCuePoint, CuePointID) == 0, "Offset mismatch for FSoundWaveCuePoint::CuePointID");
static_assert(offsetof(FSoundWaveCuePoint, Label) == 8, "Offset mismatch for FSoundWaveCuePoint::Label");
static_assert(offsetof(FSoundWaveCuePoint, FramePosition) == 24, "Offset mismatch for FSoundWaveCuePoint::FramePosition");
static_assert(offsetof(FSoundWaveCuePoint, FrameLength) == 32, "Offset mismatch for FSoundWaveCuePoint::FrameLength");
static_assert(offsetof(FSoundWaveCuePoint, bIsLoopRegion) == 40, "Offset mismatch for FSoundWaveCuePoint::bIsLoopRegion");

// /Script/AudioExtensions.AudioEndpointSettingsBase
// Kind: Class; super: Object
class UAudioEndpointSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.AudioParameterControllerInterface
// Kind: Class; super: Interface
class UAudioParameterControllerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.AudioPropertiesSheetAssetBase
// Kind: Class; super: Object
class UAudioPropertiesSheetAssetBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.AudioPropertiesSheetAssetUserInterface
// Kind: Class; super: Interface
class UAudioPropertiesSheetAssetUserInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.DummyEndpointSettings
// Kind: Class; super: AudioEndpointSettingsBase
class UDummyEndpointSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
// Kind: Class; super: Object
class UOcclusionPluginSourceSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.ReverbPluginSourceSettingsBase
// Kind: Class; super: Object
class UReverbPluginSourceSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.SoundModulatorBase
// Kind: Class; super: Object
class USoundModulatorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.SoundfieldEffectBase
// Kind: Class; super: Object
class USoundfieldEffectBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Settings; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USoundfieldEffectBase, Settings) == 40, "Offset mismatch for USoundfieldEffectBase::Settings");

// /Script/AudioExtensions.SoundfieldEffectSettingsBase
// Kind: Class; super: Object
class USoundfieldEffectSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.SoundfieldEncodingSettingsBase
// Kind: Class; super: Object
class USoundfieldEncodingSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.SoundfieldEndpointSettingsBase
// Kind: Class; super: Object
class USoundfieldEndpointSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.SourceDataOverridePluginSourceSettingsBase
// Kind: Class; super: Object
class USourceDataOverridePluginSourceSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
// Kind: Class; super: Object
class USpatializationPluginSourceSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.WaveformTransformationBase
// Kind: Class; super: Object
class UWaveformTransformationBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioExtensions.WaveformTransformationChain
// Kind: Class; super: Object
class UWaveformTransformationChain
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Transformations; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWaveformTransformationChain, Transformations) == 40, "Offset mismatch for UWaveformTransformationChain::Transformations");
