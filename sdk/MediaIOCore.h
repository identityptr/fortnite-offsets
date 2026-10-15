/**
 * decamp dumper generated SDK
 * Package: /Script/MediaIOCore
 */
#pragma once
#include "Basic.h"

// /Script/MediaIOCore.MediaCaptureOptions
// Kind: ScriptStruct; super: none
struct FMediaCaptureOptions
{
public:
    std::uint8_t bAutoRestartOnSourceSizeChange; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OverrunAction; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Crop; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t ColorConversionSettings[0xA0]; // 0x0008 (Size: 0xA0, Type: StructProperty)
    std::uint8_t CustomCapturePoint[0x8]; // 0x00A8 (Size: 0x8, Type: StructProperty)
    std::uint8_t ResizeMethod; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSkipFrameWhenRunningExpensiveTasks; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertToDesiredPixelFormat; // 0x00B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceAlphaToOneOnConversion; // 0x00B3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableEditorSpritesDuringCapture; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyLinearToSRGBConversion; // 0x00B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutostopOnCapture; // 0x00B6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00B7
    std::int32_t NumberOfFramesToCapture; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t CapturePhase; // 0x00BC (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMediaCaptureOptions, bAutoRestartOnSourceSizeChange) == 0, "Offset mismatch for FMediaCaptureOptions::bAutoRestartOnSourceSizeChange");
static_assert(offsetof(FMediaCaptureOptions, OverrunAction) == 1, "Offset mismatch for FMediaCaptureOptions::OverrunAction");
static_assert(offsetof(FMediaCaptureOptions, Crop) == 2, "Offset mismatch for FMediaCaptureOptions::Crop");
static_assert(offsetof(FMediaCaptureOptions, ColorConversionSettings) == 8, "Offset mismatch for FMediaCaptureOptions::ColorConversionSettings");
static_assert(offsetof(FMediaCaptureOptions, CustomCapturePoint) == 168, "Offset mismatch for FMediaCaptureOptions::CustomCapturePoint");
static_assert(offsetof(FMediaCaptureOptions, ResizeMethod) == 176, "Offset mismatch for FMediaCaptureOptions::ResizeMethod");
static_assert(offsetof(FMediaCaptureOptions, bSkipFrameWhenRunningExpensiveTasks) == 177, "Offset mismatch for FMediaCaptureOptions::bSkipFrameWhenRunningExpensiveTasks");
static_assert(offsetof(FMediaCaptureOptions, bConvertToDesiredPixelFormat) == 178, "Offset mismatch for FMediaCaptureOptions::bConvertToDesiredPixelFormat");
static_assert(offsetof(FMediaCaptureOptions, bForceAlphaToOneOnConversion) == 179, "Offset mismatch for FMediaCaptureOptions::bForceAlphaToOneOnConversion");
static_assert(offsetof(FMediaCaptureOptions, bDisableEditorSpritesDuringCapture) == 180, "Offset mismatch for FMediaCaptureOptions::bDisableEditorSpritesDuringCapture");
static_assert(offsetof(FMediaCaptureOptions, bApplyLinearToSRGBConversion) == 181, "Offset mismatch for FMediaCaptureOptions::bApplyLinearToSRGBConversion");
static_assert(offsetof(FMediaCaptureOptions, bAutostopOnCapture) == 182, "Offset mismatch for FMediaCaptureOptions::bAutostopOnCapture");
static_assert(offsetof(FMediaCaptureOptions, NumberOfFramesToCapture) == 184, "Offset mismatch for FMediaCaptureOptions::NumberOfFramesToCapture");
static_assert(offsetof(FMediaCaptureOptions, CapturePhase) == 188, "Offset mismatch for FMediaCaptureOptions::CapturePhase");

// /Script/MediaIOCore.MediaCaptureTransform
// Kind: ScriptStruct; super: none
struct FMediaCaptureTransform
{
public:
    std::uint8_t Rotation; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFlipHorizontal; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipVertical; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMediaCaptureTransform, Rotation) == 0, "Offset mismatch for FMediaCaptureTransform::Rotation");
static_assert(offsetof(FMediaCaptureTransform, bFlipHorizontal) == 1, "Offset mismatch for FMediaCaptureTransform::bFlipHorizontal");
static_assert(offsetof(FMediaCaptureTransform, bFlipVertical) == 2, "Offset mismatch for FMediaCaptureTransform::bFlipVertical");

// /Script/MediaIOCore.MediaIOAutoDetectableTimecodeFormat_Backup
// Kind: ScriptStruct; super: none
struct FMediaIOAutoDetectableTimecodeFormat_Backup
{
public:
    std::uint8_t TimecodeFormat; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t bAutoDetect; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMediaIOAutoDetectableTimecodeFormat_Backup, TimecodeFormat) == 0, "Offset mismatch for FMediaIOAutoDetectableTimecodeFormat_Backup::TimecodeFormat");
static_assert(offsetof(FMediaIOAutoDetectableTimecodeFormat_Backup, bAutoDetect) == 4, "Offset mismatch for FMediaIOAutoDetectableTimecodeFormat_Backup::bAutoDetect");

// /Script/MediaIOCore.MediaIOConfiguration
// Kind: ScriptStruct; super: none
struct FMediaIOConfiguration
{
public:
    std::uint8_t bIsInput; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t MediaConnection[0x18]; // 0x0004 (Size: 0x18, Type: StructProperty)
    std::uint8_t MediaMode[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMediaIOConfiguration, bIsInput) == 0, "Offset mismatch for FMediaIOConfiguration::bIsInput");
static_assert(offsetof(FMediaIOConfiguration, MediaConnection) == 4, "Offset mismatch for FMediaIOConfiguration::MediaConnection");
static_assert(offsetof(FMediaIOConfiguration, MediaMode) == 28, "Offset mismatch for FMediaIOConfiguration::MediaMode");

// /Script/MediaIOCore.MediaIOConnection
// Kind: ScriptStruct; super: none
struct FMediaIOConnection
{
public:
    std::uint8_t Device[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t protocol[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t TransportType; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t QuadTransportType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::int32_t PortIdentifier; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMediaIOConnection, Device) == 0, "Offset mismatch for FMediaIOConnection::Device");
static_assert(offsetof(FMediaIOConnection, protocol) == 8, "Offset mismatch for FMediaIOConnection::protocol");
static_assert(offsetof(FMediaIOConnection, TransportType) == 12, "Offset mismatch for FMediaIOConnection::TransportType");
static_assert(offsetof(FMediaIOConnection, QuadTransportType) == 16, "Offset mismatch for FMediaIOConnection::QuadTransportType");
static_assert(offsetof(FMediaIOConnection, PortIdentifier) == 20, "Offset mismatch for FMediaIOConnection::PortIdentifier");

// /Script/MediaIOCore.MediaIODevice
// Kind: ScriptStruct; super: none
struct FMediaIODevice
{
public:
    std::uint8_t DeviceName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t DeviceIdentifier; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMediaIODevice, DeviceName) == 0, "Offset mismatch for FMediaIODevice::DeviceName");
static_assert(offsetof(FMediaIODevice, DeviceIdentifier) == 4, "Offset mismatch for FMediaIODevice::DeviceIdentifier");

// /Script/MediaIOCore.MediaIOInputConfiguration
// Kind: ScriptStruct; super: none
struct FMediaIOInputConfiguration
{
public:
    std::uint8_t MediaConfiguration[0x34]; // 0x0000 (Size: 0x34, Type: StructProperty)
    std::uint8_t InputType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0035
    std::int32_t KeyPortIdentifier; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMediaIOInputConfiguration, MediaConfiguration) == 0, "Offset mismatch for FMediaIOInputConfiguration::MediaConfiguration");
static_assert(offsetof(FMediaIOInputConfiguration, InputType) == 52, "Offset mismatch for FMediaIOInputConfiguration::InputType");
static_assert(offsetof(FMediaIOInputConfiguration, KeyPortIdentifier) == 56, "Offset mismatch for FMediaIOInputConfiguration::KeyPortIdentifier");

// /Script/MediaIOCore.MediaIOMode
// Kind: ScriptStruct; super: none
struct FMediaIOMode
{
public:
    std::uint8_t FrameRate[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Resolution[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t standard; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t DeviceModeIdentifier; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMediaIOMode, FrameRate) == 0, "Offset mismatch for FMediaIOMode::FrameRate");
static_assert(offsetof(FMediaIOMode, Resolution) == 8, "Offset mismatch for FMediaIOMode::Resolution");
static_assert(offsetof(FMediaIOMode, standard) == 16, "Offset mismatch for FMediaIOMode::standard");
static_assert(offsetof(FMediaIOMode, DeviceModeIdentifier) == 20, "Offset mismatch for FMediaIOMode::DeviceModeIdentifier");

// /Script/MediaIOCore.MediaIOOutputConfiguration
// Kind: ScriptStruct; super: none
struct FMediaIOOutputConfiguration
{
public:
    std::uint8_t MediaConfiguration[0x34]; // 0x0000 (Size: 0x34, Type: StructProperty)
    std::uint8_t OutputType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0035
    std::int32_t KeyPortIdentifier; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputReference; // 0x003C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x003D
    std::int32_t ReferencePortIdentifier; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMediaIOOutputConfiguration, MediaConfiguration) == 0, "Offset mismatch for FMediaIOOutputConfiguration::MediaConfiguration");
static_assert(offsetof(FMediaIOOutputConfiguration, OutputType) == 52, "Offset mismatch for FMediaIOOutputConfiguration::OutputType");
static_assert(offsetof(FMediaIOOutputConfiguration, KeyPortIdentifier) == 56, "Offset mismatch for FMediaIOOutputConfiguration::KeyPortIdentifier");
static_assert(offsetof(FMediaIOOutputConfiguration, OutputReference) == 60, "Offset mismatch for FMediaIOOutputConfiguration::OutputReference");
static_assert(offsetof(FMediaIOOutputConfiguration, ReferencePortIdentifier) == 64, "Offset mismatch for FMediaIOOutputConfiguration::ReferencePortIdentifier");

// /Script/MediaIOCore.MediaIOVideoTimecodeConfiguration
// Kind: ScriptStruct; super: none
struct FMediaIOVideoTimecodeConfiguration
{
public:
    std::uint8_t MediaConfiguration[0x34]; // 0x0000 (Size: 0x34, Type: StructProperty)
    std::uint8_t TimecodeFormat; // 0x0034 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMediaIOVideoTimecodeConfiguration, MediaConfiguration) == 0, "Offset mismatch for FMediaIOVideoTimecodeConfiguration::MediaConfiguration");
static_assert(offsetof(FMediaIOVideoTimecodeConfiguration, TimecodeFormat) == 52, "Offset mismatch for FMediaIOVideoTimecodeConfiguration::TimecodeFormat");

// /Script/MediaIOCore.BlendDeinterlacer
// Kind: Class; super: VideoDeinterlacer
class UBlendDeinterlacer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaIOCore.BobDeinterlacer
// Kind: Class; super: VideoDeinterlacer
class UBobDeinterlacer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaIOCore.CaptureCardMediaSource
// Kind: Class; super: TimeSynchronizableMediaSource
class UCaptureCardMediaSource
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t bRenderJIT; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFramelock; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EvaluationType; // 0x0062 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0063
    void* Deinterlacer; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InterlaceFieldOrder; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0071
    std::uint8_t ColorConversionSettings[0xA0]; // 0x0078 (Size: 0xA0, Type: StructProperty)
    std::uint8_t SourceColorSettings[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCaptureCardMediaSource, bRenderJIT) == 96, "Offset mismatch for UCaptureCardMediaSource::bRenderJIT");
static_assert(offsetof(UCaptureCardMediaSource, bFramelock) == 97, "Offset mismatch for UCaptureCardMediaSource::bFramelock");
static_assert(offsetof(UCaptureCardMediaSource, EvaluationType) == 98, "Offset mismatch for UCaptureCardMediaSource::EvaluationType");
static_assert(offsetof(UCaptureCardMediaSource, Deinterlacer) == 104, "Offset mismatch for UCaptureCardMediaSource::Deinterlacer");
static_assert(offsetof(UCaptureCardMediaSource, InterlaceFieldOrder) == 112, "Offset mismatch for UCaptureCardMediaSource::InterlaceFieldOrder");
static_assert(offsetof(UCaptureCardMediaSource, ColorConversionSettings) == 120, "Offset mismatch for UCaptureCardMediaSource::ColorConversionSettings");
static_assert(offsetof(UCaptureCardMediaSource, SourceColorSettings) == 280, "Offset mismatch for UCaptureCardMediaSource::SourceColorSettings");

// /Script/MediaIOCore.DiscardDeinterlacer
// Kind: Class; super: VideoDeinterlacer
class UDiscardDeinterlacer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaIOCore.FileMediaCapture
// Kind: Class; super: MediaCapture
class UFileMediaCapture
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnStateChanged; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0038
    void* MediaOutput; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFileMediaCapture, OnStateChanged) == 40, "Offset mismatch for UFileMediaCapture::OnStateChanged");
static_assert(offsetof(UFileMediaCapture, MediaOutput) == 96, "Offset mismatch for UFileMediaCapture::MediaOutput");

// /Script/MediaIOCore.FileMediaOutput
// Kind: Class; super: MediaOutput
class UFileMediaOutput
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t WriteOptions[0x50]; // 0x0030 (Size: 0x50, Type: StructProperty)
    std::uint8_t FilePath[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    FString BaseFileName; // 0x0090 (Size: 0x10, Type: StrProperty)
    std::uint8_t bOverrideDesiredSize; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A1
    std::uint8_t DesiredSize[0x8]; // 0x00A4 (Size: 0x8, Type: StructProperty)
    std::uint8_t bOverridePixelFormat; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00AD
    std::uint8_t DesiredPixelFormat; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00B1
    std::uint8_t bInvertAlpha; // 0x00B4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFileMediaOutput, WriteOptions) == 48, "Offset mismatch for UFileMediaOutput::WriteOptions");
static_assert(offsetof(UFileMediaOutput, FilePath) == 128, "Offset mismatch for UFileMediaOutput::FilePath");
static_assert(offsetof(UFileMediaOutput, BaseFileName) == 144, "Offset mismatch for UFileMediaOutput::BaseFileName");
static_assert(offsetof(UFileMediaOutput, bOverrideDesiredSize) == 160, "Offset mismatch for UFileMediaOutput::bOverrideDesiredSize");
static_assert(offsetof(UFileMediaOutput, DesiredSize) == 164, "Offset mismatch for UFileMediaOutput::DesiredSize");
static_assert(offsetof(UFileMediaOutput, bOverridePixelFormat) == 172, "Offset mismatch for UFileMediaOutput::bOverridePixelFormat");
static_assert(offsetof(UFileMediaOutput, DesiredPixelFormat) == 176, "Offset mismatch for UFileMediaOutput::DesiredPixelFormat");
static_assert(offsetof(UFileMediaOutput, bInvertAlpha) == 180, "Offset mismatch for UFileMediaOutput::bInvertAlpha");

// /Script/MediaIOCore.MediaCapture
// Kind: Class; super: Object
class UMediaCapture
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnStateChanged; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0038
    void* MediaOutput; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMediaCapture, OnStateChanged) == 40, "Offset mismatch for UMediaCapture::OnStateChanged");
static_assert(offsetof(UMediaCapture, MediaOutput) == 96, "Offset mismatch for UMediaCapture::MediaOutput");

// /Script/MediaIOCore.MediaIOCoreSubsystem
// Kind: Class; super: EngineSubsystem
class UMediaIOCoreSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaIOCore.MediaOutput
// Kind: Class; super: Object
class UMediaOutput
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumberOfTextureBuffers; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMediaOutput, NumberOfTextureBuffers) == 40, "Offset mismatch for UMediaOutput::NumberOfTextureBuffers");

// /Script/MediaIOCore.RenderTargetMediaCapture
// Kind: Class; super: MediaCapture
class URenderTargetMediaCapture
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    void* RenderTarget; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URenderTargetMediaCapture, RenderTarget) == 704, "Offset mismatch for URenderTargetMediaCapture::RenderTarget");

// /Script/MediaIOCore.RenderTargetMediaOutput
// Kind: Class; super: MediaOutput
class URenderTargetMediaOutput
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bInvertAlpha; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TSoftObjectPtr<void> RenderTarget; // 0x0038 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(URenderTargetMediaOutput, bInvertAlpha) == 48, "Offset mismatch for URenderTargetMediaOutput::bInvertAlpha");
static_assert(offsetof(URenderTargetMediaOutput, RenderTarget) == 56, "Offset mismatch for URenderTargetMediaOutput::RenderTarget");

// /Script/MediaIOCore.VideoDeinterlacer
// Kind: Class; super: Object
class UVideoDeinterlacer
{
public:
    std::uint8_t Opaque[1];
};
