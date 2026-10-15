/**
 * decamp dumper generated SDK
 * Package: /Script/AudioCapture
 */
#pragma once
#include "Basic.h"

// /Script/AudioCapture.AudioCaptureDeviceInfo
// Kind: ScriptStruct; super: none
struct FAudioCaptureDeviceInfo
{
public:
    std::uint8_t DeviceName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t NumInputChannels; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t SampleRate; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAudioCaptureDeviceInfo, DeviceName) == 0, "Offset mismatch for FAudioCaptureDeviceInfo::DeviceName");
static_assert(offsetof(FAudioCaptureDeviceInfo, NumInputChannels) == 4, "Offset mismatch for FAudioCaptureDeviceInfo::NumInputChannels");
static_assert(offsetof(FAudioCaptureDeviceInfo, SampleRate) == 8, "Offset mismatch for FAudioCaptureDeviceInfo::SampleRate");

// /Script/AudioCapture.AudioInputDeviceInfo
// Kind: ScriptStruct; super: none
struct FAudioInputDeviceInfo
{
public:
    FString DeviceName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString DeviceID; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t InputChannels; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t PreferredSampleRate; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSupportsHardwareAEC; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAudioInputDeviceInfo, DeviceName) == 0, "Offset mismatch for FAudioInputDeviceInfo::DeviceName");
static_assert(offsetof(FAudioInputDeviceInfo, DeviceID) == 16, "Offset mismatch for FAudioInputDeviceInfo::DeviceID");
static_assert(offsetof(FAudioInputDeviceInfo, InputChannels) == 32, "Offset mismatch for FAudioInputDeviceInfo::InputChannels");
static_assert(offsetof(FAudioInputDeviceInfo, PreferredSampleRate) == 36, "Offset mismatch for FAudioInputDeviceInfo::PreferredSampleRate");
static_assert(offsetof(FAudioInputDeviceInfo, bSupportsHardwareAEC) == 40, "Offset mismatch for FAudioInputDeviceInfo::bSupportsHardwareAEC");

// /Script/AudioCapture.AudioCapture
// Kind: Class; super: AudioGenerator
class UAudioCapture
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioCapture.AudioCaptureBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAudioCaptureBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioCapture.AudioCaptureComponent
// Kind: Class; super: SynthComponent
class UAudioCaptureComponent
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    std::int32_t JitterLatencyFrames; // 0x0620 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UAudioCaptureComponent, JitterLatencyFrames) == 1568, "Offset mismatch for UAudioCaptureComponent::JitterLatencyFrames");

// /Script/AudioCapture.AudioCaptureFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAudioCaptureFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
