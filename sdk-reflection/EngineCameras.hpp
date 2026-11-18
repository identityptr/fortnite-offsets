#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EngineCameras
{
    struct ActiveCameraAnimationInfo
    {
        static constexpr std::string_view Name = "ActiveCameraAnimationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x0;
            static constexpr std::uintptr_t Params = 0x8;
            static constexpr std::uintptr_t Handle = 0x50;
            static constexpr std::uintptr_t player = 0x58;
            static constexpr std::uintptr_t CameraStandIn = 0x60;
            static constexpr std::uintptr_t EaseInCurrentTime = 0x68;
            static constexpr std::uintptr_t EaseOutCurrentTime = 0x6C;
            static constexpr std::uintptr_t bIsEasingIn = 0x70;
            static constexpr std::uintptr_t bIsEasingOut = 0x71;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Sequence", 0x0, "ObjectProperty"},
            {"Params", 0x8, "StructProperty"},
            {"Handle", 0x50, "StructProperty"},
            {"player", 0x58, "ObjectProperty"},
            {"CameraStandIn", 0x60, "ObjectProperty"},
            {"EaseInCurrentTime", 0x68, "FloatProperty"},
            {"EaseOutCurrentTime", 0x6C, "FloatProperty"},
            {"bIsEasingIn", 0x70, "BoolProperty"},
            {"bIsEasingOut", 0x71, "BoolProperty"},
        }};
    };

    struct CameraAnimationCameraModifier
    {
        static constexpr std::string_view Name = "CameraAnimationCameraModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveAnimations = 0x48;
            static constexpr std::uintptr_t NextInstanceSerialNumber = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveAnimations", 0x48, "ArrayProperty"},
            {"NextInstanceSerialNumber", 0x58, "UInt16Property"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetCameraAnimationCameraModifier",
            "GetCameraAnimationCameraModifierFromID",
            "GetCameraAnimationCameraModifierFromPlayerController",
            "IsCameraAnimationActive",
            "PlayCameraAnimation",
            "StopAllCameraAnimations",
            "StopAllCameraAnimationsOf",
            "StopCameraAnimation",
        }};
    };

    struct CameraAnimationHandle
    {
        static constexpr std::string_view Name = "CameraAnimationHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CameraAnimationParams
    {
        static constexpr std::string_view Name = "CameraAnimationParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayRate = 0x0;
            static constexpr std::uintptr_t Scale = 0x4;
            static constexpr std::uintptr_t EaseInType = 0x8;
            static constexpr std::uintptr_t EaseInDuration = 0xC;
            static constexpr std::uintptr_t EaseOutType = 0x10;
            static constexpr std::uintptr_t EaseOutDuration = 0x14;
            static constexpr std::uintptr_t bLoop = 0x18;
            static constexpr std::uintptr_t StartOffset = 0x1C;
            static constexpr std::uintptr_t bRandomStartTime = 0x20;
            static constexpr std::uintptr_t DurationOverride = 0x24;
            static constexpr std::uintptr_t Playspace = 0x28;
            static constexpr std::uintptr_t UserPlaySpaceRot = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PlayRate", 0x0, "FloatProperty"},
            {"Scale", 0x4, "FloatProperty"},
            {"EaseInType", 0x8, "EnumProperty"},
            {"EaseInDuration", 0xC, "FloatProperty"},
            {"EaseOutType", 0x10, "EnumProperty"},
            {"EaseOutDuration", 0x14, "FloatProperty"},
            {"bLoop", 0x18, "BoolProperty"},
            {"StartOffset", 0x1C, "IntProperty"},
            {"bRandomStartTime", 0x20, "BoolProperty"},
            {"DurationOverride", 0x24, "FloatProperty"},
            {"Playspace", 0x28, "EnumProperty"},
            {"UserPlaySpaceRot", 0x30, "StructProperty"},
        }};
    };

    struct CompositeCameraShakePattern
    {
        static constexpr std::string_view Name = "CompositeCameraShakePattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraShakePattern";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildPatterns = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChildPatterns", 0x28, "ArrayProperty"},
        }};
    };

    struct ConstantCameraShakePattern
    {
        static constexpr std::string_view Name = "ConstantCameraShakePattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleCameraShakePattern";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationOffset = 0x58;
            static constexpr std::uintptr_t RotationOffset = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocationOffset", 0x58, "StructProperty"},
            {"RotationOffset", 0x70, "StructProperty"},
        }};
    };

    struct DefaultCameraShakeBase
    {
        static constexpr std::string_view Name = "DefaultCameraShakeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraShakeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bSingleInstance = 0x28;
            static constexpr std::uintptr_t ShakeScale = 0x2C;
            static constexpr std::uintptr_t RootShakePattern = 0x30;
            static constexpr std::uintptr_t CameraManager = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bSingleInstance", 0x28, "BoolProperty"},
            {"ShakeScale", 0x2C, "FloatProperty"},
            {"RootShakePattern", 0x30, "ObjectProperty"},
            {"CameraManager", 0x38, "ObjectProperty"},
        }};
    };

    struct EngineCameraAnimationFunctionLibrary
    {
        static constexpr std::string_view Name = "EngineCameraAnimationFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "Conv_CameraAnimationCameraModifier",
            "Conv_CameraAnimationPlaySpace",
            "Conv_CameraShakePlaySpace",
        }};
    };

    struct EngineCamerasSubsystem
    {
        static constexpr std::string_view Name = "EngineCamerasSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "IsCameraAnimationActive",
            "PlayCameraAnimation",
            "StopAllCameraAnimations",
            "StopAllCameraAnimationsOf",
            "StopCameraAnimation",
        }};
    };

    struct FOscillator
    {
        static constexpr std::string_view Name = "FOscillator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Amplitude = 0x0;
            static constexpr std::uintptr_t Frequency = 0x4;
            static constexpr std::uintptr_t InitialOffset = 0x8;
            static constexpr std::uintptr_t Waveform = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Amplitude", 0x0, "FloatProperty"},
            {"Frequency", 0x4, "FloatProperty"},
            {"InitialOffset", 0x8, "ByteProperty"},
            {"Waveform", 0x9, "EnumProperty"},
        }};
    };

    struct LegacyCameraShake
    {
        static constexpr std::string_view Name = "LegacyCameraShake";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraShakeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OscillationDuration = 0xE0;
            static constexpr std::uintptr_t OscillationBlendInTime = 0xE4;
            static constexpr std::uintptr_t OscillationBlendOutTime = 0xE8;
            static constexpr std::uintptr_t RotOscillation = 0xEC;
            static constexpr std::uintptr_t LocOscillation = 0x110;
            static constexpr std::uintptr_t FOVOscillation = 0x134;
            static constexpr std::uintptr_t AnimPlayRate = 0x140;
            static constexpr std::uintptr_t AnimScale = 0x144;
            static constexpr std::uintptr_t AnimBlendInTime = 0x148;
            static constexpr std::uintptr_t AnimBlendOutTime = 0x14C;
            static constexpr std::uintptr_t RandomAnimSegmentDuration = 0x150;
            static constexpr std::uintptr_t AnimSequence = 0x158;
            static constexpr std::uintptr_t bRandomAnimSegment = 0x160;
            static constexpr std::uintptr_t OscillatorTimeRemaining = 0x164;
            static constexpr std::uintptr_t SequenceShakePattern = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"OscillationDuration", 0xE0, "FloatProperty"},
            {"OscillationBlendInTime", 0xE4, "FloatProperty"},
            {"OscillationBlendOutTime", 0xE8, "FloatProperty"},
            {"RotOscillation", 0xEC, "StructProperty"},
            {"LocOscillation", 0x110, "StructProperty"},
            {"FOVOscillation", 0x134, "StructProperty"},
            {"AnimPlayRate", 0x140, "FloatProperty"},
            {"AnimScale", 0x144, "FloatProperty"},
            {"AnimBlendInTime", 0x148, "FloatProperty"},
            {"AnimBlendOutTime", 0x14C, "FloatProperty"},
            {"RandomAnimSegmentDuration", 0x150, "FloatProperty"},
            {"AnimSequence", 0x158, "ObjectProperty"},
            {"bRandomAnimSegment", 0x160, "BoolProperty"},
            {"OscillatorTimeRemaining", 0x164, "FloatProperty"},
            {"SequenceShakePattern", 0x1E0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "BlueprintUpdateCameraShake",
            "ReceiveIsFinished",
            "ReceivePlayShake",
            "ReceiveStopShake",
            "StartLegacyCameraShake",
            "StartLegacyCameraShakeFromSource",
        }};
    };

    struct LegacyCameraShakeFunctionLibrary
    {
        static constexpr std::string_view Name = "LegacyCameraShakeFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Conv_LegacyCameraShake",
        }};
    };

    struct LegacyCameraShakePattern
    {
        static constexpr std::string_view Name = "LegacyCameraShakePattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraShakePattern";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PerlinNoiseCameraShakePattern
    {
        static constexpr std::string_view Name = "PerlinNoiseCameraShakePattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleCameraShakePattern";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationAmplitudeMultiplier = 0x58;
            static constexpr std::uintptr_t LocationFrequencyMultiplier = 0x5C;
            static constexpr std::uintptr_t X = 0x60;
            static constexpr std::uintptr_t Y = 0x68;
            static constexpr std::uintptr_t Z = 0x70;
            static constexpr std::uintptr_t RotationAmplitudeMultiplier = 0x78;
            static constexpr std::uintptr_t RotationFrequencyMultiplier = 0x7C;
            static constexpr std::uintptr_t Pitch = 0x80;
            static constexpr std::uintptr_t Yaw = 0x88;
            static constexpr std::uintptr_t Roll = 0x90;
            static constexpr std::uintptr_t FOV = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"LocationAmplitudeMultiplier", 0x58, "FloatProperty"},
            {"LocationFrequencyMultiplier", 0x5C, "FloatProperty"},
            {"X", 0x60, "StructProperty"},
            {"Y", 0x68, "StructProperty"},
            {"Z", 0x70, "StructProperty"},
            {"RotationAmplitudeMultiplier", 0x78, "FloatProperty"},
            {"RotationFrequencyMultiplier", 0x7C, "FloatProperty"},
            {"Pitch", 0x80, "StructProperty"},
            {"Yaw", 0x88, "StructProperty"},
            {"Roll", 0x90, "StructProperty"},
            {"FOV", 0x98, "StructProperty"},
        }};
    };

    struct PerlinNoiseShaker
    {
        static constexpr std::string_view Name = "PerlinNoiseShaker";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Amplitude = 0x0;
            static constexpr std::uintptr_t Frequency = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Amplitude", 0x0, "FloatProperty"},
            {"Frequency", 0x4, "FloatProperty"},
        }};
    };

    struct ROscillator
    {
        static constexpr std::string_view Name = "ROscillator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Pitch = 0x0;
            static constexpr std::uintptr_t Yaw = 0xC;
            static constexpr std::uintptr_t Roll = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pitch", 0x0, "StructProperty"},
            {"Yaw", 0xC, "StructProperty"},
            {"Roll", 0x18, "StructProperty"},
        }};
    };

    struct SimpleCameraShakePattern
    {
        static constexpr std::string_view Name = "SimpleCameraShakePattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraShakePattern";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
            static constexpr std::uintptr_t BlendInTime = 0x2C;
            static constexpr std::uintptr_t BlendOutTime = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"duration", 0x28, "FloatProperty"},
            {"BlendInTime", 0x2C, "FloatProperty"},
            {"BlendOutTime", 0x30, "FloatProperty"},
        }};
    };

    struct TestCameraShake
    {
        static constexpr std::string_view Name = "TestCameraShake";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraShakeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bSingleInstance = 0x28;
            static constexpr std::uintptr_t ShakeScale = 0x2C;
            static constexpr std::uintptr_t RootShakePattern = 0x30;
            static constexpr std::uintptr_t CameraManager = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bSingleInstance", 0x28, "BoolProperty"},
            {"ShakeScale", 0x2C, "FloatProperty"},
            {"RootShakePattern", 0x30, "ObjectProperty"},
            {"CameraManager", 0x38, "ObjectProperty"},
        }};
    };

    struct VOscillator
    {
        static constexpr std::string_view Name = "VOscillator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0xC;
            static constexpr std::uintptr_t Z = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "StructProperty"},
            {"Y", 0xC, "StructProperty"},
            {"Z", 0x18, "StructProperty"},
        }};
    };

    struct WaveOscillator
    {
        static constexpr std::string_view Name = "WaveOscillator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Amplitude = 0x0;
            static constexpr std::uintptr_t Frequency = 0x4;
            static constexpr std::uintptr_t InitialOffsetType = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Amplitude", 0x0, "FloatProperty"},
            {"Frequency", 0x4, "FloatProperty"},
            {"InitialOffsetType", 0x8, "EnumProperty"},
        }};
    };

    struct WaveOscillatorCameraShakePattern
    {
        static constexpr std::string_view Name = "WaveOscillatorCameraShakePattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleCameraShakePattern";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationAmplitudeMultiplier = 0x58;
            static constexpr std::uintptr_t LocationFrequencyMultiplier = 0x5C;
            static constexpr std::uintptr_t X = 0x60;
            static constexpr std::uintptr_t Y = 0x6C;
            static constexpr std::uintptr_t Z = 0x78;
            static constexpr std::uintptr_t RotationAmplitudeMultiplier = 0x84;
            static constexpr std::uintptr_t RotationFrequencyMultiplier = 0x88;
            static constexpr std::uintptr_t Pitch = 0x8C;
            static constexpr std::uintptr_t Yaw = 0x98;
            static constexpr std::uintptr_t Roll = 0xA4;
            static constexpr std::uintptr_t FOV = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"LocationAmplitudeMultiplier", 0x58, "FloatProperty"},
            {"LocationFrequencyMultiplier", 0x5C, "FloatProperty"},
            {"X", 0x60, "StructProperty"},
            {"Y", 0x6C, "StructProperty"},
            {"Z", 0x78, "StructProperty"},
            {"RotationAmplitudeMultiplier", 0x84, "FloatProperty"},
            {"RotationFrequencyMultiplier", 0x88, "FloatProperty"},
            {"Pitch", 0x8C, "StructProperty"},
            {"Yaw", 0x98, "StructProperty"},
            {"Roll", 0xA4, "StructProperty"},
            {"FOV", 0xB0, "StructProperty"},
        }};
    };

}
