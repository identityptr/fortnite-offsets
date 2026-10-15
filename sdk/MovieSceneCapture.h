/**
 * decamp dumper generated SDK
 * Package: /Script/MovieSceneCapture
 */
#pragma once
#include "Basic.h"

// /Script/MovieSceneCapture.CaptureResolution
// Kind: ScriptStruct; super: none
struct FCaptureResolution
{
public:
    std::int32_t resx; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t resy; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCaptureResolution, resx) == 0, "Offset mismatch for FCaptureResolution::resx");
static_assert(offsetof(FCaptureResolution, resy) == 4, "Offset mismatch for FCaptureResolution::resy");

// /Script/MovieSceneCapture.CapturedPixels
// Kind: ScriptStruct; super: none
struct FCapturedPixels
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneCapture.CapturedPixelsID
// Kind: ScriptStruct; super: none
struct FCapturedPixelsID
{
public:
    TMap<void*, void*> Identifiers; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCapturedPixelsID, Identifiers) == 0, "Offset mismatch for FCapturedPixelsID::Identifiers");

// /Script/MovieSceneCapture.CompositionGraphCapturePasses
// Kind: ScriptStruct; super: none
struct FCompositionGraphCapturePasses
{
public:
    TArray<void*> Value; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCompositionGraphCapturePasses, Value) == 0, "Offset mismatch for FCompositionGraphCapturePasses::Value");

// /Script/MovieSceneCapture.FrameMetrics
// Kind: ScriptStruct; super: none
struct FFrameMetrics
{
public:
    float TotalElapsedTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FrameDelta; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t FrameNumber; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t NumDroppedFrames; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFrameMetrics, TotalElapsedTime) == 0, "Offset mismatch for FFrameMetrics::TotalElapsedTime");
static_assert(offsetof(FFrameMetrics, FrameDelta) == 4, "Offset mismatch for FFrameMetrics::FrameDelta");
static_assert(offsetof(FFrameMetrics, FrameNumber) == 8, "Offset mismatch for FFrameMetrics::FrameNumber");
static_assert(offsetof(FFrameMetrics, NumDroppedFrames) == 12, "Offset mismatch for FFrameMetrics::NumDroppedFrames");

// /Script/MovieSceneCapture.MovieSceneCaptureSettings
// Kind: ScriptStruct; super: none
struct FMovieSceneCaptureSettings
{
public:
    std::uint8_t OutputDirectory[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* GameModeOverride; // 0x0010 (Size: 0x8, Type: ClassProperty)
    FString OutputFormat; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bOverwriteExisting; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRelativeFrameNumbers; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x002A
    std::int32_t HandleFrames; // 0x002C (Size: 0x4, Type: IntProperty)
    FString MovieExtension; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t ZeroPadFrameNumbers; // 0x0040 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::uint8_t FrameRate[0x8]; // 0x0044 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseCustomFrameRate; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    std::uint8_t CustomFrameRate[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t Resolution[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t bEnableTextureStreaming; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCinematicEngineScalability; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCinematicMode; // 0x0062 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMovement; // 0x0063 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowTurning; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowPlayer; // 0x0065 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowHUD; // 0x0066 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePathTracer; // 0x0067 (Size: 0x1, Type: BoolProperty)
    std::int32_t PathTracerSamplePerPixel; // 0x0068 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneCaptureSettings, OutputDirectory) == 0, "Offset mismatch for FMovieSceneCaptureSettings::OutputDirectory");
static_assert(offsetof(FMovieSceneCaptureSettings, GameModeOverride) == 16, "Offset mismatch for FMovieSceneCaptureSettings::GameModeOverride");
static_assert(offsetof(FMovieSceneCaptureSettings, OutputFormat) == 24, "Offset mismatch for FMovieSceneCaptureSettings::OutputFormat");
static_assert(offsetof(FMovieSceneCaptureSettings, bOverwriteExisting) == 40, "Offset mismatch for FMovieSceneCaptureSettings::bOverwriteExisting");
static_assert(offsetof(FMovieSceneCaptureSettings, bUseRelativeFrameNumbers) == 41, "Offset mismatch for FMovieSceneCaptureSettings::bUseRelativeFrameNumbers");
static_assert(offsetof(FMovieSceneCaptureSettings, HandleFrames) == 44, "Offset mismatch for FMovieSceneCaptureSettings::HandleFrames");
static_assert(offsetof(FMovieSceneCaptureSettings, MovieExtension) == 48, "Offset mismatch for FMovieSceneCaptureSettings::MovieExtension");
static_assert(offsetof(FMovieSceneCaptureSettings, ZeroPadFrameNumbers) == 64, "Offset mismatch for FMovieSceneCaptureSettings::ZeroPadFrameNumbers");
static_assert(offsetof(FMovieSceneCaptureSettings, FrameRate) == 68, "Offset mismatch for FMovieSceneCaptureSettings::FrameRate");
static_assert(offsetof(FMovieSceneCaptureSettings, bUseCustomFrameRate) == 76, "Offset mismatch for FMovieSceneCaptureSettings::bUseCustomFrameRate");
static_assert(offsetof(FMovieSceneCaptureSettings, CustomFrameRate) == 80, "Offset mismatch for FMovieSceneCaptureSettings::CustomFrameRate");
static_assert(offsetof(FMovieSceneCaptureSettings, Resolution) == 88, "Offset mismatch for FMovieSceneCaptureSettings::Resolution");
static_assert(offsetof(FMovieSceneCaptureSettings, bEnableTextureStreaming) == 96, "Offset mismatch for FMovieSceneCaptureSettings::bEnableTextureStreaming");
static_assert(offsetof(FMovieSceneCaptureSettings, bCinematicEngineScalability) == 97, "Offset mismatch for FMovieSceneCaptureSettings::bCinematicEngineScalability");
static_assert(offsetof(FMovieSceneCaptureSettings, bCinematicMode) == 98, "Offset mismatch for FMovieSceneCaptureSettings::bCinematicMode");
static_assert(offsetof(FMovieSceneCaptureSettings, bAllowMovement) == 99, "Offset mismatch for FMovieSceneCaptureSettings::bAllowMovement");
static_assert(offsetof(FMovieSceneCaptureSettings, bAllowTurning) == 100, "Offset mismatch for FMovieSceneCaptureSettings::bAllowTurning");
static_assert(offsetof(FMovieSceneCaptureSettings, bShowPlayer) == 101, "Offset mismatch for FMovieSceneCaptureSettings::bShowPlayer");
static_assert(offsetof(FMovieSceneCaptureSettings, bShowHUD) == 102, "Offset mismatch for FMovieSceneCaptureSettings::bShowHUD");
static_assert(offsetof(FMovieSceneCaptureSettings, bUsePathTracer) == 103, "Offset mismatch for FMovieSceneCaptureSettings::bUsePathTracer");
static_assert(offsetof(FMovieSceneCaptureSettings, PathTracerSamplePerPixel) == 104, "Offset mismatch for FMovieSceneCaptureSettings::PathTracerSamplePerPixel");

// /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
// Kind: Class; super: MovieSceneImageCaptureProtocolBase
class UCompositionGraphCaptureProtocol
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t IncludeRenderPasses[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCaptureFramesInHDR; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t HDRCompressionQuality; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t CaptureGamut; // 0x0070 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0071
    std::uint8_t PostProcessingMaterial[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDisableScreenPercentage; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0091
    void* PostProcessingMaterialPtr; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCompositionGraphCaptureProtocol, IncludeRenderPasses) == 88, "Offset mismatch for UCompositionGraphCaptureProtocol::IncludeRenderPasses");
static_assert(offsetof(UCompositionGraphCaptureProtocol, bCaptureFramesInHDR) == 104, "Offset mismatch for UCompositionGraphCaptureProtocol::bCaptureFramesInHDR");
static_assert(offsetof(UCompositionGraphCaptureProtocol, HDRCompressionQuality) == 108, "Offset mismatch for UCompositionGraphCaptureProtocol::HDRCompressionQuality");
static_assert(offsetof(UCompositionGraphCaptureProtocol, CaptureGamut) == 112, "Offset mismatch for UCompositionGraphCaptureProtocol::CaptureGamut");
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterial) == 120, "Offset mismatch for UCompositionGraphCaptureProtocol::PostProcessingMaterial");
static_assert(offsetof(UCompositionGraphCaptureProtocol, bDisableScreenPercentage) == 144, "Offset mismatch for UCompositionGraphCaptureProtocol::bDisableScreenPercentage");
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr) == 152, "Offset mismatch for UCompositionGraphCaptureProtocol::PostProcessingMaterialPtr");

// /Script/MovieSceneCapture.CompressedImageSequenceProtocol
// Kind: Class; super: ImageSequenceProtocol
class UCompressedImageSequenceProtocol
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::int32_t CompressionQuality; // 0x0098 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCompressedImageSequenceProtocol, CompressionQuality) == 152, "Offset mismatch for UCompressedImageSequenceProtocol::CompressionQuality");

// /Script/MovieSceneCapture.FrameGrabberProtocol
// Kind: Class; super: MovieSceneImageCaptureProtocolBase
class UFrameGrabberProtocol
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t State; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFrameGrabberProtocol, State) == 80, "Offset mismatch for UFrameGrabberProtocol::State");

// /Script/MovieSceneCapture.ImageSequenceProtocol
// Kind: Class; super: FrameGrabberProtocol
class UImageSequenceProtocol
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t State; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UImageSequenceProtocol, State) == 80, "Offset mismatch for UImageSequenceProtocol::State");

// /Script/MovieSceneCapture.ImageSequenceProtocol_BMP
// Kind: Class; super: ImageSequenceProtocol
class UImageSequenceProtocol_BMP
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t State; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UImageSequenceProtocol_BMP, State) == 80, "Offset mismatch for UImageSequenceProtocol_BMP::State");

// /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
// Kind: Class; super: ImageSequenceProtocol
class UImageSequenceProtocol_EXR
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t bCompressed; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CaptureGamut; // 0x0099 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UImageSequenceProtocol_EXR, bCompressed) == 152, "Offset mismatch for UImageSequenceProtocol_EXR::bCompressed");
static_assert(offsetof(UImageSequenceProtocol_EXR, CaptureGamut) == 153, "Offset mismatch for UImageSequenceProtocol_EXR::CaptureGamut");

// /Script/MovieSceneCapture.ImageSequenceProtocol_JPG
// Kind: Class; super: CompressedImageSequenceProtocol
class UImageSequenceProtocol_JPG
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::int32_t CompressionQuality; // 0x0098 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UImageSequenceProtocol_JPG, CompressionQuality) == 152, "Offset mismatch for UImageSequenceProtocol_JPG::CompressionQuality");

// /Script/MovieSceneCapture.ImageSequenceProtocol_PNG
// Kind: Class; super: CompressedImageSequenceProtocol
class UImageSequenceProtocol_PNG
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::int32_t CompressionQuality; // 0x0098 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UImageSequenceProtocol_PNG, CompressionQuality) == 152, "Offset mismatch for UImageSequenceProtocol_PNG::CompressionQuality");

// /Script/MovieSceneCapture.LevelCapture
// Kind: Class; super: MovieSceneCapture
class ULevelCapture
{
public:
    std::uint8_t Pad_0000[0x1E8]; // 0x0000
    std::uint8_t bAutoStartCapture; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x01E9
    std::uint8_t PrerequisiteActorId[0x1]; // 0x01F4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULevelCapture, bAutoStartCapture) == 488, "Offset mismatch for ULevelCapture::bAutoStartCapture");
static_assert(offsetof(ULevelCapture, PrerequisiteActorId) == 500, "Offset mismatch for ULevelCapture::PrerequisiteActorId");

// /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Kind: Class; super: MovieSceneAudioCaptureProtocolBase
class UMasterAudioSubmixCaptureProtocol
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    FString Filename; // 0x0058 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMasterAudioSubmixCaptureProtocol, Filename) == 88, "Offset mismatch for UMasterAudioSubmixCaptureProtocol::Filename");

// /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Kind: Class; super: MovieSceneCaptureProtocolBase
class UMovieSceneAudioCaptureProtocolBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t State; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneAudioCaptureProtocolBase, State) == 80, "Offset mismatch for UMovieSceneAudioCaptureProtocolBase::State");

// /Script/MovieSceneCapture.MovieSceneCapture
// Kind: Class; super: Object
class UMovieSceneCapture
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ImageCaptureProtocolType[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t AudioCaptureProtocolType[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    void* ImageCaptureProtocol; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* AudioCaptureProtocol; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Settings[0x70]; // 0x0078 (Size: 0x70, Type: StructProperty)
    std::uint8_t bUseSeparateProcess; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCloseEditorWhenCaptureStarts; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00EA
    FString AdditionalCommandLineArguments; // 0x00F0 (Size: 0x10, Type: StrProperty)
    FString InheritedCommandLineArguments; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocolType) == 56, "Offset mismatch for UMovieSceneCapture::ImageCaptureProtocolType");
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocolType) == 80, "Offset mismatch for UMovieSceneCapture::AudioCaptureProtocolType");
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocol) == 104, "Offset mismatch for UMovieSceneCapture::ImageCaptureProtocol");
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocol) == 112, "Offset mismatch for UMovieSceneCapture::AudioCaptureProtocol");
static_assert(offsetof(UMovieSceneCapture, Settings) == 120, "Offset mismatch for UMovieSceneCapture::Settings");
static_assert(offsetof(UMovieSceneCapture, bUseSeparateProcess) == 232, "Offset mismatch for UMovieSceneCapture::bUseSeparateProcess");
static_assert(offsetof(UMovieSceneCapture, bCloseEditorWhenCaptureStarts) == 233, "Offset mismatch for UMovieSceneCapture::bCloseEditorWhenCaptureStarts");
static_assert(offsetof(UMovieSceneCapture, AdditionalCommandLineArguments) == 240, "Offset mismatch for UMovieSceneCapture::AdditionalCommandLineArguments");
static_assert(offsetof(UMovieSceneCapture, InheritedCommandLineArguments) == 256, "Offset mismatch for UMovieSceneCapture::InheritedCommandLineArguments");

// /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
// Kind: Class; super: Object
class UMovieSceneCaptureEnvironment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneCapture.MovieSceneCaptureInterface
// Kind: Class; super: Interface
class UMovieSceneCaptureInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
// Kind: Class; super: Object
class UMovieSceneCaptureProtocolBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t State; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneCaptureProtocolBase, State) == 80, "Offset mismatch for UMovieSceneCaptureProtocolBase::State");

// /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Kind: Class; super: MovieSceneCaptureProtocolBase
class UMovieSceneImageCaptureProtocolBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t State; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneImageCaptureProtocolBase, State) == 80, "Offset mismatch for UMovieSceneImageCaptureProtocolBase::State");

// /Script/MovieSceneCapture.NullAudioCaptureProtocol
// Kind: Class; super: MovieSceneAudioCaptureProtocolBase
class UNullAudioCaptureProtocol
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t State; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNullAudioCaptureProtocol, State) == 80, "Offset mismatch for UNullAudioCaptureProtocol::State");

// /Script/MovieSceneCapture.UserDefinedCaptureProtocol
// Kind: Class; super: MovieSceneImageCaptureProtocolBase
class UUserDefinedCaptureProtocol
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* World; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUserDefinedCaptureProtocol, World) == 88, "Offset mismatch for UUserDefinedCaptureProtocol::World");

// /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
// Kind: Class; super: UserDefinedCaptureProtocol
class UUserDefinedImageCaptureProtocol
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Format; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableCompression; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x009A
    std::int32_t CompressionQuality; // 0x009C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UUserDefinedImageCaptureProtocol, Format) == 152, "Offset mismatch for UUserDefinedImageCaptureProtocol::Format");
static_assert(offsetof(UUserDefinedImageCaptureProtocol, bEnableCompression) == 153, "Offset mismatch for UUserDefinedImageCaptureProtocol::bEnableCompression");
static_assert(offsetof(UUserDefinedImageCaptureProtocol, CompressionQuality) == 156, "Offset mismatch for UUserDefinedImageCaptureProtocol::CompressionQuality");

// /Script/MovieSceneCapture.VideoCaptureProtocol
// Kind: Class; super: FrameGrabberProtocol
class UVideoCaptureProtocol
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bUseCompression; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float CompressionQuality; // 0x006C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVideoCaptureProtocol, bUseCompression) == 104, "Offset mismatch for UVideoCaptureProtocol::bUseCompression");
static_assert(offsetof(UVideoCaptureProtocol, CompressionQuality) == 108, "Offset mismatch for UVideoCaptureProtocol::CompressionQuality");
