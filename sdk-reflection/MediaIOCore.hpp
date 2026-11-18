#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MediaIOCore
{
    struct BlendDeinterlacer
    {
        static constexpr std::string_view Name = "BlendDeinterlacer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VideoDeinterlacer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BobDeinterlacer
    {
        static constexpr std::string_view Name = "BobDeinterlacer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VideoDeinterlacer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CaptureCardMediaSource
    {
        static constexpr std::string_view Name = "CaptureCardMediaSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TimeSynchronizableMediaSource";
        struct Offsets
        {
            static constexpr std::uintptr_t bRenderJIT = 0x60;
            static constexpr std::uintptr_t bFramelock = 0x61;
            static constexpr std::uintptr_t EvaluationType = 0x62;
            static constexpr std::uintptr_t Deinterlacer = 0x68;
            static constexpr std::uintptr_t InterlaceFieldOrder = 0x70;
            static constexpr std::uintptr_t ColorConversionSettings = 0x78;
            static constexpr std::uintptr_t SourceColorSettings = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bRenderJIT", 0x60, "BoolProperty"},
            {"bFramelock", 0x61, "BoolProperty"},
            {"EvaluationType", 0x62, "EnumProperty"},
            {"Deinterlacer", 0x68, "ObjectProperty"},
            {"InterlaceFieldOrder", 0x70, "EnumProperty"},
            {"ColorConversionSettings", 0x78, "StructProperty"},
            {"SourceColorSettings", 0x118, "StructProperty"},
        }};
    };

    struct DiscardDeinterlacer
    {
        static constexpr std::string_view Name = "DiscardDeinterlacer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VideoDeinterlacer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FileMediaCapture
    {
        static constexpr std::string_view Name = "FileMediaCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaCapture";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateChanged = 0x28;
            static constexpr std::uintptr_t MediaOutput = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnStateChanged", 0x28, "MulticastInlineDelegateProperty"},
            {"MediaOutput", 0x60, "ObjectProperty"},
        }};
    };

    struct FileMediaOutput
    {
        static constexpr std::string_view Name = "FileMediaOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t WriteOptions = 0x30;
            static constexpr std::uintptr_t FilePath = 0x80;
            static constexpr std::uintptr_t BaseFileName = 0x90;
            static constexpr std::uintptr_t bOverrideDesiredSize = 0xA0;
            static constexpr std::uintptr_t DesiredSize = 0xA4;
            static constexpr std::uintptr_t bOverridePixelFormat = 0xAC;
            static constexpr std::uintptr_t DesiredPixelFormat = 0xB0;
            static constexpr std::uintptr_t bInvertAlpha = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"WriteOptions", 0x30, "StructProperty"},
            {"FilePath", 0x80, "StructProperty"},
            {"BaseFileName", 0x90, "StrProperty"},
            {"bOverrideDesiredSize", 0xA0, "BoolProperty"},
            {"DesiredSize", 0xA4, "StructProperty"},
            {"bOverridePixelFormat", 0xAC, "BoolProperty"},
            {"DesiredPixelFormat", 0xB0, "EnumProperty"},
            {"bInvertAlpha", 0xB4, "BoolProperty"},
        }};
    };

    struct MediaCapture
    {
        static constexpr std::string_view Name = "MediaCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateChanged = 0x28;
            static constexpr std::uintptr_t MediaOutput = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnStateChanged", 0x28, "MulticastInlineDelegateProperty"},
            {"MediaOutput", 0x60, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "CaptureActiveSceneViewport",
            "CaptureMediaTexture",
            "CaptureTextureRenderTarget2D",
            "GetDesiredPixelFormat",
            "GetDesiredSize",
            "GetState",
            "SetMediaOutput",
            "StopCapture",
            "UpdateTextureRenderTarget2D",
        }};
    };

    struct MediaCaptureOptions
    {
        static constexpr std::string_view Name = "MediaCaptureOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoRestartOnSourceSizeChange = 0x0;
            static constexpr std::uintptr_t OverrunAction = 0x1;
            static constexpr std::uintptr_t Crop = 0x2;
            static constexpr std::uintptr_t ColorConversionSettings = 0x8;
            static constexpr std::uintptr_t CustomCapturePoint = 0xA8;
            static constexpr std::uintptr_t ResizeMethod = 0xB0;
            static constexpr std::uintptr_t bSkipFrameWhenRunningExpensiveTasks = 0xB1;
            static constexpr std::uintptr_t bConvertToDesiredPixelFormat = 0xB2;
            static constexpr std::uintptr_t bForceAlphaToOneOnConversion = 0xB3;
            static constexpr std::uintptr_t bDisableEditorSpritesDuringCapture = 0xB4;
            static constexpr std::uintptr_t bApplyLinearToSRGBConversion = 0xB5;
            static constexpr std::uintptr_t bAutostopOnCapture = 0xB6;
            static constexpr std::uintptr_t NumberOfFramesToCapture = 0xB8;
            static constexpr std::uintptr_t CapturePhase = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bAutoRestartOnSourceSizeChange", 0x0, "BoolProperty"},
            {"OverrunAction", 0x1, "EnumProperty"},
            {"Crop", 0x2, "EnumProperty"},
            {"ColorConversionSettings", 0x8, "StructProperty"},
            {"CustomCapturePoint", 0xA8, "StructProperty"},
            {"ResizeMethod", 0xB0, "EnumProperty"},
            {"bSkipFrameWhenRunningExpensiveTasks", 0xB1, "BoolProperty"},
            {"bConvertToDesiredPixelFormat", 0xB2, "BoolProperty"},
            {"bForceAlphaToOneOnConversion", 0xB3, "BoolProperty"},
            {"bDisableEditorSpritesDuringCapture", 0xB4, "BoolProperty"},
            {"bApplyLinearToSRGBConversion", 0xB5, "BoolProperty"},
            {"bAutostopOnCapture", 0xB6, "BoolProperty"},
            {"NumberOfFramesToCapture", 0xB8, "IntProperty"},
            {"CapturePhase", 0xBC, "EnumProperty"},
        }};
    };

    struct MediaCaptureTransform
    {
        static constexpr std::string_view Name = "MediaCaptureTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x0;
            static constexpr std::uintptr_t bFlipHorizontal = 0x1;
            static constexpr std::uintptr_t bFlipVertical = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Rotation", 0x0, "EnumProperty"},
            {"bFlipHorizontal", 0x1, "BoolProperty"},
            {"bFlipVertical", 0x2, "BoolProperty"},
        }};
    };

    struct MediaIOAutoDetectableTimecodeFormat_Backup
    {
        static constexpr std::string_view Name = "MediaIOAutoDetectableTimecodeFormat_Backup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TimecodeFormat = 0x0;
            static constexpr std::uintptr_t bAutoDetect = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TimecodeFormat", 0x0, "EnumProperty"},
            {"bAutoDetect", 0x4, "BoolProperty"},
        }};
    };

    struct MediaIOConfiguration
    {
        static constexpr std::string_view Name = "MediaIOConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInput = 0x0;
            static constexpr std::uintptr_t MediaConnection = 0x4;
            static constexpr std::uintptr_t MediaMode = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsInput", 0x0, "BoolProperty"},
            {"MediaConnection", 0x4, "StructProperty"},
            {"MediaMode", 0x1C, "StructProperty"},
        }};
    };

    struct MediaIOConnection
    {
        static constexpr std::string_view Name = "MediaIOConnection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Device = 0x0;
            static constexpr std::uintptr_t protocol = 0x8;
            static constexpr std::uintptr_t TransportType = 0xC;
            static constexpr std::uintptr_t QuadTransportType = 0x10;
            static constexpr std::uintptr_t PortIdentifier = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Device", 0x0, "StructProperty"},
            {"protocol", 0x8, "NameProperty"},
            {"TransportType", 0xC, "EnumProperty"},
            {"QuadTransportType", 0x10, "EnumProperty"},
            {"PortIdentifier", 0x14, "IntProperty"},
        }};
    };

    struct MediaIOCoreSubsystem
    {
        static constexpr std::string_view Name = "MediaIOCoreSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MediaIODevice
    {
        static constexpr std::string_view Name = "MediaIODevice";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceName = 0x0;
            static constexpr std::uintptr_t DeviceIdentifier = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DeviceName", 0x0, "NameProperty"},
            {"DeviceIdentifier", 0x4, "IntProperty"},
        }};
    };

    struct MediaIOInputConfiguration
    {
        static constexpr std::string_view Name = "MediaIOInputConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaConfiguration = 0x0;
            static constexpr std::uintptr_t InputType = 0x34;
            static constexpr std::uintptr_t KeyPortIdentifier = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MediaConfiguration", 0x0, "StructProperty"},
            {"InputType", 0x34, "EnumProperty"},
            {"KeyPortIdentifier", 0x38, "IntProperty"},
        }};
    };

    struct MediaIOMode
    {
        static constexpr std::string_view Name = "MediaIOMode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameRate = 0x0;
            static constexpr std::uintptr_t Resolution = 0x8;
            static constexpr std::uintptr_t standard = 0x10;
            static constexpr std::uintptr_t DeviceModeIdentifier = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FrameRate", 0x0, "StructProperty"},
            {"Resolution", 0x8, "StructProperty"},
            {"standard", 0x10, "EnumProperty"},
            {"DeviceModeIdentifier", 0x14, "IntProperty"},
        }};
    };

    struct MediaIOOutputConfiguration
    {
        static constexpr std::string_view Name = "MediaIOOutputConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaConfiguration = 0x0;
            static constexpr std::uintptr_t OutputType = 0x34;
            static constexpr std::uintptr_t KeyPortIdentifier = 0x38;
            static constexpr std::uintptr_t OutputReference = 0x3C;
            static constexpr std::uintptr_t ReferencePortIdentifier = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MediaConfiguration", 0x0, "StructProperty"},
            {"OutputType", 0x34, "EnumProperty"},
            {"KeyPortIdentifier", 0x38, "IntProperty"},
            {"OutputReference", 0x3C, "EnumProperty"},
            {"ReferencePortIdentifier", 0x40, "IntProperty"},
        }};
    };

    struct MediaIOVideoTimecodeConfiguration
    {
        static constexpr std::string_view Name = "MediaIOVideoTimecodeConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaConfiguration = 0x0;
            static constexpr std::uintptr_t TimecodeFormat = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MediaConfiguration", 0x0, "StructProperty"},
            {"TimecodeFormat", 0x34, "EnumProperty"},
        }};
    };

    struct MediaOutput
    {
        static constexpr std::string_view Name = "MediaOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NumberOfTextureBuffers = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumberOfTextureBuffers", 0x28, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CreateMediaCapture",
            "Validate",
        }};
    };

    struct RenderTargetMediaCapture
    {
        static constexpr std::string_view Name = "RenderTargetMediaCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaCapture";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderTarget = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RenderTarget", 0x2C0, "ObjectProperty"},
        }};
    };

    struct RenderTargetMediaOutput
    {
        static constexpr std::string_view Name = "RenderTargetMediaOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvertAlpha = 0x30;
            static constexpr std::uintptr_t RenderTarget = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInvertAlpha", 0x30, "BoolProperty"},
            {"RenderTarget", 0x38, "SoftObjectProperty"},
        }};
    };

    struct VideoDeinterlacer
    {
        static constexpr std::string_view Name = "VideoDeinterlacer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
