#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VLACaptureRuntime
{
    struct VLACaptureSettings
    {
        static constexpr std::string_view Name = "VLACaptureSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t CaptureWidth = 0x30;
            static constexpr std::uintptr_t CaptureHeight = 0x34;
            static constexpr std::uintptr_t TargetFPS = 0x38;
            static constexpr std::uintptr_t OutputDirectory = 0x40;
            static constexpr std::uintptr_t MaxRecordingDurationSeconds = 0x50;
            static constexpr std::uintptr_t EncoderBitrate = 0x54;
            static constexpr std::uintptr_t KeyframeInterval = 0x58;
            static constexpr std::uintptr_t EncoderProfile = 0x5C;
            static constexpr std::uintptr_t EntropyCoding = 0x5D;
            static constexpr std::uintptr_t EncoderPreset = 0x5E;
            static constexpr std::uintptr_t bLogFrameCapture = 0x5F;
            static constexpr std::uintptr_t bLogInputCapture = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"CaptureWidth", 0x30, "IntProperty"},
            {"CaptureHeight", 0x34, "IntProperty"},
            {"TargetFPS", 0x38, "IntProperty"},
            {"OutputDirectory", 0x40, "StrProperty"},
            {"MaxRecordingDurationSeconds", 0x50, "IntProperty"},
            {"EncoderBitrate", 0x54, "IntProperty"},
            {"KeyframeInterval", 0x58, "IntProperty"},
            {"EncoderProfile", 0x5C, "EnumProperty"},
            {"EntropyCoding", 0x5D, "EnumProperty"},
            {"EncoderPreset", 0x5E, "EnumProperty"},
            {"bLogFrameCapture", 0x5F, "BoolProperty"},
            {"bLogInputCapture", 0x60, "BoolProperty"},
        }};
    };

    struct VLACaptureSubsystem
    {
        static constexpr std::string_view Name = "VLACaptureSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCaptureStateChanged = 0x38;
            static constexpr std::uintptr_t OnFrameCaptured = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnCaptureStateChanged", 0x38, "MulticastInlineDelegateProperty"},
            {"OnFrameCaptured", 0x48, "MulticastInlineDelegateProperty"},
        }};
    };

}
