/**
 * decamp dumper generated SDK
 * Package: /Script/VLACaptureRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VLACaptureRuntime.VLACaptureOverrides
// Kind: ScriptStruct; super: none
struct FVLACaptureOverrides
{
public:
    std::int32_t FPS; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Width; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Height; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t bitrate; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t KeyframeInterval; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxRecordingDuration; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputFormat; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ImageFormat; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x001A
    std::int32_t ImageQuality; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVLACaptureOverrides, FPS) == 0, "Offset mismatch for FVLACaptureOverrides::FPS");
static_assert(offsetof(FVLACaptureOverrides, Width) == 4, "Offset mismatch for FVLACaptureOverrides::Width");
static_assert(offsetof(FVLACaptureOverrides, Height) == 8, "Offset mismatch for FVLACaptureOverrides::Height");
static_assert(offsetof(FVLACaptureOverrides, bitrate) == 12, "Offset mismatch for FVLACaptureOverrides::bitrate");
static_assert(offsetof(FVLACaptureOverrides, KeyframeInterval) == 16, "Offset mismatch for FVLACaptureOverrides::KeyframeInterval");
static_assert(offsetof(FVLACaptureOverrides, MaxRecordingDuration) == 20, "Offset mismatch for FVLACaptureOverrides::MaxRecordingDuration");
static_assert(offsetof(FVLACaptureOverrides, OutputFormat) == 24, "Offset mismatch for FVLACaptureOverrides::OutputFormat");
static_assert(offsetof(FVLACaptureOverrides, ImageFormat) == 25, "Offset mismatch for FVLACaptureOverrides::ImageFormat");
static_assert(offsetof(FVLACaptureOverrides, ImageQuality) == 28, "Offset mismatch for FVLACaptureOverrides::ImageQuality");

// /Script/VLACaptureRuntime.VLACaptureSettings
// Kind: Class; super: DeveloperSettings
class UVLACaptureSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t CaptureWidth; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t CaptureHeight; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetFPS; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    FString OutputDirectory; // 0x0040 (Size: 0x10, Type: StrProperty)
    std::int32_t MaxRecordingDurationSeconds; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t EncoderBitrate; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::int32_t KeyframeInterval; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncoderProfile; // 0x005C (Size: 0x1, Type: EnumProperty)
    std::uint8_t EntropyCoding; // 0x005D (Size: 0x1, Type: EnumProperty)
    std::uint8_t EncoderPreset; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t bLogFrameCapture; // 0x005F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLogInputCapture; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVLACaptureSettings, CaptureWidth) == 48, "Offset mismatch for UVLACaptureSettings::CaptureWidth");
static_assert(offsetof(UVLACaptureSettings, CaptureHeight) == 52, "Offset mismatch for UVLACaptureSettings::CaptureHeight");
static_assert(offsetof(UVLACaptureSettings, TargetFPS) == 56, "Offset mismatch for UVLACaptureSettings::TargetFPS");
static_assert(offsetof(UVLACaptureSettings, OutputDirectory) == 64, "Offset mismatch for UVLACaptureSettings::OutputDirectory");
static_assert(offsetof(UVLACaptureSettings, MaxRecordingDurationSeconds) == 80, "Offset mismatch for UVLACaptureSettings::MaxRecordingDurationSeconds");
static_assert(offsetof(UVLACaptureSettings, EncoderBitrate) == 84, "Offset mismatch for UVLACaptureSettings::EncoderBitrate");
static_assert(offsetof(UVLACaptureSettings, KeyframeInterval) == 88, "Offset mismatch for UVLACaptureSettings::KeyframeInterval");
static_assert(offsetof(UVLACaptureSettings, EncoderProfile) == 92, "Offset mismatch for UVLACaptureSettings::EncoderProfile");
static_assert(offsetof(UVLACaptureSettings, EntropyCoding) == 93, "Offset mismatch for UVLACaptureSettings::EntropyCoding");
static_assert(offsetof(UVLACaptureSettings, EncoderPreset) == 94, "Offset mismatch for UVLACaptureSettings::EncoderPreset");
static_assert(offsetof(UVLACaptureSettings, bLogFrameCapture) == 95, "Offset mismatch for UVLACaptureSettings::bLogFrameCapture");
static_assert(offsetof(UVLACaptureSettings, bLogInputCapture) == 96, "Offset mismatch for UVLACaptureSettings::bLogInputCapture");

// /Script/VLACaptureRuntime.VLACaptureSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UVLACaptureSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate OnCaptureStateChanged; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFrameCaptured; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UVLACaptureSubsystem, OnCaptureStateChanged) == 56, "Offset mismatch for UVLACaptureSubsystem::OnCaptureStateChanged");
static_assert(offsetof(UVLACaptureSubsystem, OnFrameCaptured) == 72, "Offset mismatch for UVLACaptureSubsystem::OnFrameCaptured");
