#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MovieSceneCapture
{
    struct CaptureResolution
    {
        static constexpr std::string_view Name = "CaptureResolution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t resx = 0x0;
            static constexpr std::uintptr_t resy = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"resx", 0x0, "IntProperty"},
            {"resy", 0x4, "IntProperty"},
        }};
    };

    struct CapturedPixels
    {
        static constexpr std::string_view Name = "CapturedPixels";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CapturedPixelsID
    {
        static constexpr std::string_view Name = "CapturedPixelsID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Identifiers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Identifiers", 0x0, "MapProperty"},
        }};
    };

    struct CompositionGraphCapturePasses
    {
        static constexpr std::string_view Name = "CompositionGraphCapturePasses";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "ArrayProperty"},
        }};
    };

    struct CompositionGraphCaptureProtocol
    {
        static constexpr std::string_view Name = "CompositionGraphCaptureProtocol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneImageCaptureProtocolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IncludeRenderPasses = 0x58;
            static constexpr std::uintptr_t bCaptureFramesInHDR = 0x68;
            static constexpr std::uintptr_t HDRCompressionQuality = 0x6C;
            static constexpr std::uintptr_t CaptureGamut = 0x70;
            static constexpr std::uintptr_t PostProcessingMaterial = 0x78;
            static constexpr std::uintptr_t bDisableScreenPercentage = 0x90;
            static constexpr std::uintptr_t PostProcessingMaterialPtr = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"IncludeRenderPasses", 0x58, "StructProperty"},
            {"bCaptureFramesInHDR", 0x68, "BoolProperty"},
            {"HDRCompressionQuality", 0x6C, "IntProperty"},
            {"CaptureGamut", 0x70, "ByteProperty"},
            {"PostProcessingMaterial", 0x78, "StructProperty"},
            {"bDisableScreenPercentage", 0x90, "BoolProperty"},
            {"PostProcessingMaterialPtr", 0x98, "ObjectProperty"},
        }};
    };

    struct CompressedImageSequenceProtocol
    {
        static constexpr std::string_view Name = "CompressedImageSequenceProtocol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImageSequenceProtocol";
        struct Offsets
        {
            static constexpr std::uintptr_t CompressionQuality = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CompressionQuality", 0x98, "IntProperty"},
        }};
    };

    struct FrameGrabberProtocol
    {
        static constexpr std::string_view Name = "FrameGrabberProtocol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneImageCaptureProtocolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0x50, "EnumProperty"},
        }};
    };

    struct FrameMetrics
    {
        static constexpr std::string_view Name = "FrameMetrics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TotalElapsedTime = 0x0;
            static constexpr std::uintptr_t FrameDelta = 0x4;
            static constexpr std::uintptr_t FrameNumber = 0x8;
            static constexpr std::uintptr_t NumDroppedFrames = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TotalElapsedTime", 0x0, "FloatProperty"},
            {"FrameDelta", 0x4, "FloatProperty"},
            {"FrameNumber", 0x8, "IntProperty"},
            {"NumDroppedFrames", 0xC, "IntProperty"},
        }};
    };

    struct ImageSequenceProtocol
    {
        static constexpr std::string_view Name = "ImageSequenceProtocol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FrameGrabberProtocol";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0x50, "EnumProperty"},
        }};
    };

    struct ImageSequenceProtocol_BMP
    {
        static constexpr std::string_view Name = "ImageSequenceProtocol_BMP";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImageSequenceProtocol";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0x50, "EnumProperty"},
        }};
    };

    struct ImageSequenceProtocol_EXR
    {
        static constexpr std::string_view Name = "ImageSequenceProtocol_EXR";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImageSequenceProtocol";
        struct Offsets
        {
            static constexpr std::uintptr_t bCompressed = 0x98;
            static constexpr std::uintptr_t CaptureGamut = 0x99;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bCompressed", 0x98, "BoolProperty"},
            {"CaptureGamut", 0x99, "ByteProperty"},
        }};
    };

    struct ImageSequenceProtocol_JPG
    {
        static constexpr std::string_view Name = "ImageSequenceProtocol_JPG";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompressedImageSequenceProtocol";
        struct Offsets
        {
            static constexpr std::uintptr_t CompressionQuality = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CompressionQuality", 0x98, "IntProperty"},
        }};
    };

    struct ImageSequenceProtocol_PNG
    {
        static constexpr std::string_view Name = "ImageSequenceProtocol_PNG";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompressedImageSequenceProtocol";
        struct Offsets
        {
            static constexpr std::uintptr_t CompressionQuality = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CompressionQuality", 0x98, "IntProperty"},
        }};
    };

    struct LevelCapture
    {
        static constexpr std::string_view Name = "LevelCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCapture";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoStartCapture = 0x1E8;
            static constexpr std::uintptr_t PrerequisiteActorId = 0x1F4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAutoStartCapture", 0x1E8, "BoolProperty"},
            {"PrerequisiteActorId", 0x1F4, "StructProperty"},
        }};
    };

    struct MasterAudioSubmixCaptureProtocol
    {
        static constexpr std::string_view Name = "MasterAudioSubmixCaptureProtocol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneAudioCaptureProtocolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Filename = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Filename", 0x58, "StrProperty"},
        }};
    };

    struct MovieSceneAudioCaptureProtocolBase
    {
        static constexpr std::string_view Name = "MovieSceneAudioCaptureProtocolBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCaptureProtocolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0x50, "EnumProperty"},
        }};
    };

    struct MovieSceneCapture
    {
        static constexpr std::string_view Name = "MovieSceneCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ImageCaptureProtocolType = 0x38;
            static constexpr std::uintptr_t AudioCaptureProtocolType = 0x50;
            static constexpr std::uintptr_t ImageCaptureProtocol = 0x68;
            static constexpr std::uintptr_t AudioCaptureProtocol = 0x70;
            static constexpr std::uintptr_t Settings = 0x78;
            static constexpr std::uintptr_t bUseSeparateProcess = 0xE8;
            static constexpr std::uintptr_t bCloseEditorWhenCaptureStarts = 0xE9;
            static constexpr std::uintptr_t AdditionalCommandLineArguments = 0xF0;
            static constexpr std::uintptr_t InheritedCommandLineArguments = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ImageCaptureProtocolType", 0x38, "StructProperty"},
            {"AudioCaptureProtocolType", 0x50, "StructProperty"},
            {"ImageCaptureProtocol", 0x68, "ObjectProperty"},
            {"AudioCaptureProtocol", 0x70, "ObjectProperty"},
            {"Settings", 0x78, "StructProperty"},
            {"bUseSeparateProcess", 0xE8, "BoolProperty"},
            {"bCloseEditorWhenCaptureStarts", 0xE9, "BoolProperty"},
            {"AdditionalCommandLineArguments", 0xF0, "StrProperty"},
            {"InheritedCommandLineArguments", 0x100, "StrProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetAudioCaptureProtocol",
            "GetImageCaptureProtocol",
            "SetAudioCaptureProtocolType",
            "SetImageCaptureProtocolType",
        }};
    };

    struct MovieSceneCaptureEnvironment
    {
        static constexpr std::string_view Name = "MovieSceneCaptureEnvironment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "FindAudioCaptureProtocol",
            "FindImageCaptureProtocol",
            "GetCaptureElapsedTime",
            "GetCaptureFrameNumber",
            "IsCaptureInProgress",
        }};
    };

    struct MovieSceneCaptureInterface
    {
        static constexpr std::string_view Name = "MovieSceneCaptureInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneCaptureProtocolBase
    {
        static constexpr std::string_view Name = "MovieSceneCaptureProtocolBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0x50, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetState",
            "IsCapturing",
        }};
    };

    struct MovieSceneCaptureSettings
    {
        static constexpr std::string_view Name = "MovieSceneCaptureSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputDirectory = 0x0;
            static constexpr std::uintptr_t GameModeOverride = 0x10;
            static constexpr std::uintptr_t OutputFormat = 0x18;
            static constexpr std::uintptr_t bOverwriteExisting = 0x28;
            static constexpr std::uintptr_t bUseRelativeFrameNumbers = 0x29;
            static constexpr std::uintptr_t HandleFrames = 0x2C;
            static constexpr std::uintptr_t MovieExtension = 0x30;
            static constexpr std::uintptr_t ZeroPadFrameNumbers = 0x40;
            static constexpr std::uintptr_t FrameRate = 0x44;
            static constexpr std::uintptr_t bUseCustomFrameRate = 0x4C;
            static constexpr std::uintptr_t CustomFrameRate = 0x50;
            static constexpr std::uintptr_t Resolution = 0x58;
            static constexpr std::uintptr_t bEnableTextureStreaming = 0x60;
            static constexpr std::uintptr_t bCinematicEngineScalability = 0x61;
            static constexpr std::uintptr_t bCinematicMode = 0x62;
            static constexpr std::uintptr_t bAllowMovement = 0x63;
            static constexpr std::uintptr_t bAllowTurning = 0x64;
            static constexpr std::uintptr_t bShowPlayer = 0x65;
            static constexpr std::uintptr_t bShowHUD = 0x66;
            static constexpr std::uintptr_t bUsePathTracer = 0x67;
            static constexpr std::uintptr_t PathTracerSamplePerPixel = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"OutputDirectory", 0x0, "StructProperty"},
            {"GameModeOverride", 0x10, "ClassProperty"},
            {"OutputFormat", 0x18, "StrProperty"},
            {"bOverwriteExisting", 0x28, "BoolProperty"},
            {"bUseRelativeFrameNumbers", 0x29, "BoolProperty"},
            {"HandleFrames", 0x2C, "IntProperty"},
            {"MovieExtension", 0x30, "StrProperty"},
            {"ZeroPadFrameNumbers", 0x40, "ByteProperty"},
            {"FrameRate", 0x44, "StructProperty"},
            {"bUseCustomFrameRate", 0x4C, "BoolProperty"},
            {"CustomFrameRate", 0x50, "StructProperty"},
            {"Resolution", 0x58, "StructProperty"},
            {"bEnableTextureStreaming", 0x60, "BoolProperty"},
            {"bCinematicEngineScalability", 0x61, "BoolProperty"},
            {"bCinematicMode", 0x62, "BoolProperty"},
            {"bAllowMovement", 0x63, "BoolProperty"},
            {"bAllowTurning", 0x64, "BoolProperty"},
            {"bShowPlayer", 0x65, "BoolProperty"},
            {"bShowHUD", 0x66, "BoolProperty"},
            {"bUsePathTracer", 0x67, "BoolProperty"},
            {"PathTracerSamplePerPixel", 0x68, "IntProperty"},
        }};
    };

    struct MovieSceneImageCaptureProtocolBase
    {
        static constexpr std::string_view Name = "MovieSceneImageCaptureProtocolBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCaptureProtocolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0x50, "EnumProperty"},
        }};
    };

    struct NullAudioCaptureProtocol
    {
        static constexpr std::string_view Name = "NullAudioCaptureProtocol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneAudioCaptureProtocolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0x50, "EnumProperty"},
        }};
    };

    struct UserDefinedCaptureProtocol
    {
        static constexpr std::string_view Name = "UserDefinedCaptureProtocol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneImageCaptureProtocolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t World = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"World", 0x58, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "GenerateFilename",
            "GetCurrentFrameMetrics",
            "OnBeginFinalize",
            "OnCanFinalize",
            "OnCaptureFrame",
            "OnFinalize",
            "OnPauseCapture",
            "OnPixelsReceived",
            "OnPreTick",
            "OnSetup",
            "OnStartCapture",
            "OnTick",
            "OnWarmUp",
            "ResolveBuffer",
            "StartCapturingFinalPixels",
            "StopCapturingFinalPixels",
        }};
    };

    struct UserDefinedImageCaptureProtocol
    {
        static constexpr std::string_view Name = "UserDefinedImageCaptureProtocol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserDefinedCaptureProtocol";
        struct Offsets
        {
            static constexpr std::uintptr_t Format = 0x98;
            static constexpr std::uintptr_t bEnableCompression = 0x99;
            static constexpr std::uintptr_t CompressionQuality = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Format", 0x98, "EnumProperty"},
            {"bEnableCompression", 0x99, "BoolProperty"},
            {"CompressionQuality", 0x9C, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GenerateFilenameForBuffer",
            "GenerateFilenameForCurrentFrame",
            "WriteImageToDisk",
        }};
    };

    struct VideoCaptureProtocol
    {
        static constexpr std::string_view Name = "VideoCaptureProtocol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FrameGrabberProtocol";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseCompression = 0x68;
            static constexpr std::uintptr_t CompressionQuality = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseCompression", 0x68, "BoolProperty"},
            {"CompressionQuality", 0x6C, "FloatProperty"},
        }};
    };

}
