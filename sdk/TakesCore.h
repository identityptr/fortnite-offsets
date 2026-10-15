/**
 * decamp dumper generated SDK
 * Package: /Script/TakesCore
 */
#pragma once
#include "Basic.h"

// /Script/TakesCore.ActorRecordedProperty
// Kind: ScriptStruct; super: none
struct FActorRecordedProperty
{
public:
    std::uint8_t PropertyName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnabled; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    FText RecorderName; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FActorRecordedProperty, PropertyName) == 0, "Offset mismatch for FActorRecordedProperty::PropertyName");
static_assert(offsetof(FActorRecordedProperty, bEnabled) == 4, "Offset mismatch for FActorRecordedProperty::bEnabled");
static_assert(offsetof(FActorRecordedProperty, RecorderName) == 8, "Offset mismatch for FActorRecordedProperty::RecorderName");

// /Script/TakesCore.AudioInputDeviceChannelProperty
// Kind: ScriptStruct; super: none
struct FAudioInputDeviceChannelProperty
{
public:
    std::int32_t AudioInputDeviceChannel; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAudioInputDeviceChannelProperty, AudioInputDeviceChannel) == 0, "Offset mismatch for FAudioInputDeviceChannelProperty::AudioInputDeviceChannel");

// /Script/TakesCore.AudioInputDeviceInfoProperty
// Kind: ScriptStruct; super: none
struct FAudioInputDeviceInfoProperty
{
public:
    FString DeviceName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString DeviceID; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t InputChannels; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t PreferredSampleRate; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsDefaultDevice; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAudioInputDeviceInfoProperty, DeviceName) == 0, "Offset mismatch for FAudioInputDeviceInfoProperty::DeviceName");
static_assert(offsetof(FAudioInputDeviceInfoProperty, DeviceID) == 16, "Offset mismatch for FAudioInputDeviceInfoProperty::DeviceID");
static_assert(offsetof(FAudioInputDeviceInfoProperty, InputChannels) == 32, "Offset mismatch for FAudioInputDeviceInfoProperty::InputChannels");
static_assert(offsetof(FAudioInputDeviceInfoProperty, PreferredSampleRate) == 36, "Offset mismatch for FAudioInputDeviceInfoProperty::PreferredSampleRate");
static_assert(offsetof(FAudioInputDeviceInfoProperty, bIsDefaultDevice) == 40, "Offset mismatch for FAudioInputDeviceInfoProperty::bIsDefaultDevice");

// /Script/TakesCore.AudioInputDeviceProperty
// Kind: ScriptStruct; super: none
struct FAudioInputDeviceProperty
{
public:
    std::uint8_t bUseSystemDefaultAudioDevice; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> DeviceInfoArray; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    FString DeviceID; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::int32_t AudioInputBufferSize; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAudioInputDeviceProperty, bUseSystemDefaultAudioDevice) == 0, "Offset mismatch for FAudioInputDeviceProperty::bUseSystemDefaultAudioDevice");
static_assert(offsetof(FAudioInputDeviceProperty, DeviceInfoArray) == 8, "Offset mismatch for FAudioInputDeviceProperty::DeviceInfoArray");
static_assert(offsetof(FAudioInputDeviceProperty, DeviceID) == 24, "Offset mismatch for FAudioInputDeviceProperty::DeviceID");
static_assert(offsetof(FAudioInputDeviceProperty, AudioInputBufferSize) == 40, "Offset mismatch for FAudioInputDeviceProperty::AudioInputBufferSize");

// /Script/TakesCore.TakeRecorderTargetRecordClassProperty
// Kind: ScriptStruct; super: none
struct FTakeRecorderTargetRecordClassProperty
{
public:
    TSoftClassPtr<void> TargetRecordClass; // 0x0000 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FTakeRecorderTargetRecordClassProperty, TargetRecordClass) == 0, "Offset mismatch for FTakeRecorderTargetRecordClassProperty::TargetRecordClass");

// /Script/TakesCore.ActorRecorderPropertyMap
// Kind: Class; super: Object
class UActorRecorderPropertyMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RecordedObject[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Properties; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Children; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UActorRecorderPropertyMap, RecordedObject) == 40, "Offset mismatch for UActorRecorderPropertyMap::RecordedObject");
static_assert(offsetof(UActorRecorderPropertyMap, Properties) == 72, "Offset mismatch for UActorRecorderPropertyMap::Properties");
static_assert(offsetof(UActorRecorderPropertyMap, Children) == 88, "Offset mismatch for UActorRecorderPropertyMap::Children");

// /Script/TakesCore.TakeMetaData
// Kind: Class; super: Object
class UTakeMetaData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsLocked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    FString Slate; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::int32_t TakeNumber; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x004C
    std::uint8_t Timestamp[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t TimecodeIn[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t TimecodeOut[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t duration[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t FrameRate[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    FString Description; // 0x0098 (Size: 0x10, Type: StrProperty)
    std::uint8_t PresetOrigin[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bFrameRateFromTimecode; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTakeMetaData, bIsLocked) == 48, "Offset mismatch for UTakeMetaData::bIsLocked");
static_assert(offsetof(UTakeMetaData, Slate) == 56, "Offset mismatch for UTakeMetaData::Slate");
static_assert(offsetof(UTakeMetaData, TakeNumber) == 72, "Offset mismatch for UTakeMetaData::TakeNumber");
static_assert(offsetof(UTakeMetaData, Timestamp) == 80, "Offset mismatch for UTakeMetaData::Timestamp");
static_assert(offsetof(UTakeMetaData, TimecodeIn) == 88, "Offset mismatch for UTakeMetaData::TimecodeIn");
static_assert(offsetof(UTakeMetaData, TimecodeOut) == 112, "Offset mismatch for UTakeMetaData::TimecodeOut");
static_assert(offsetof(UTakeMetaData, duration) == 136, "Offset mismatch for UTakeMetaData::duration");
static_assert(offsetof(UTakeMetaData, FrameRate) == 144, "Offset mismatch for UTakeMetaData::FrameRate");
static_assert(offsetof(UTakeMetaData, Description) == 152, "Offset mismatch for UTakeMetaData::Description");
static_assert(offsetof(UTakeMetaData, PresetOrigin) == 168, "Offset mismatch for UTakeMetaData::PresetOrigin");
static_assert(offsetof(UTakeMetaData, bFrameRateFromTimecode) == 200, "Offset mismatch for UTakeMetaData::bFrameRateFromTimecode");

// /Script/TakesCore.TakePreset
// Kind: Class; super: Object
class UTakePreset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* LevelSequence; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTakePreset, LevelSequence) == 40, "Offset mismatch for UTakePreset::LevelSequence");

// /Script/TakesCore.TakePresetSettings
// Kind: Class; super: Object
class UTakePresetSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TargetRecordClass[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTakePresetSettings, TargetRecordClass) == 40, "Offset mismatch for UTakePresetSettings::TargetRecordClass");

// /Script/TakesCore.TakeRecorderAudioInputSettings
// Kind: Class; super: Object
class UTakeRecorderAudioInputSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakesCore.TakeRecorderNamingTokensContext
// Kind: Class; super: Object
class UTakeRecorderNamingTokensContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> TakeMetaData; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Actor; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t AudioInputDeviceChannel; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UTakeRecorderNamingTokensContext, TakeMetaData) == 40, "Offset mismatch for UTakeRecorderNamingTokensContext::TakeMetaData");
static_assert(offsetof(UTakeRecorderNamingTokensContext, Actor) == 48, "Offset mismatch for UTakeRecorderNamingTokensContext::Actor");
static_assert(offsetof(UTakeRecorderNamingTokensContext, AudioInputDeviceChannel) == 56, "Offset mismatch for UTakeRecorderNamingTokensContext::AudioInputDeviceChannel");

// /Script/TakesCore.TakeRecorderSource
// Kind: Class; super: Object
class UTakeRecorderSource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::int32_t TakeNumber; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t TrackTint[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTakeRecorderSource, bEnabled) == 40, "Offset mismatch for UTakeRecorderSource::bEnabled");
static_assert(offsetof(UTakeRecorderSource, TakeNumber) == 44, "Offset mismatch for UTakeRecorderSource::TakeNumber");
static_assert(offsetof(UTakeRecorderSource, TrackTint) == 48, "Offset mismatch for UTakeRecorderSource::TrackTint");

// /Script/TakesCore.TakeRecorderSources
// Kind: Class; super: Object
class UTakeRecorderSources
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> Sources; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> SourceSubSequenceMap; // 0x0050 (Size: 0x10, Type: MapProperty)
    TArray<void*> ActiveSubSections; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTakeRecorderSources, Sources) == 64, "Offset mismatch for UTakeRecorderSources::Sources");
static_assert(offsetof(UTakeRecorderSources, SourceSubSequenceMap) == 80, "Offset mismatch for UTakeRecorderSources::SourceSubSequenceMap");
static_assert(offsetof(UTakeRecorderSources, ActiveSubSections) == 96, "Offset mismatch for UTakeRecorderSources::ActiveSubSections");

// /Script/TakesCore.TakeRecorderSourcesManager
// Kind: Class; super: Interface
class UTakeRecorderSourcesManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakesCore.TakeRecorderSourcesManagerImpl
// Kind: Class; super: EngineSubsystem
class UTakeRecorderSourcesManagerImpl
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> RuntimeSources; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UTakeRecorderSourcesManagerImpl, RuntimeSources) == 56, "Offset mismatch for UTakeRecorderSourcesManagerImpl::RuntimeSources");

// /Script/TakesCore.TakesCoreBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTakesCoreBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};
