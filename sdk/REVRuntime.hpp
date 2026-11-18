#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::REVRuntime
{
    struct REVComponent
    {
        static constexpr std::string_view Name = "REVComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Model = 0x628;
            static constexpr std::uintptr_t SimSettings = 0x630;
            static constexpr std::uintptr_t PitchMultiplier = 0x638;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Model", 0x628, "ObjectProperty"},
            {"SimSettings", 0x630, "ObjectProperty"},
            {"PitchMultiplier", 0x638, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "SetRevModel",
            "SetSettings",
            "UpdateParameters",
            "UpdateSimSettings",
        }};
    };

    struct REVModel
    {
        static constexpr std::string_view Name = "REVModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NumChannels = 0x58;
            static constexpr std::uintptr_t SampleRate = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumChannels", 0x58, "IntProperty"},
            {"SampleRate", 0x5C, "FloatProperty"},
        }};
    };

    struct RevSettings
    {
        static constexpr std::string_view Name = "RevSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UpShiftDuration = 0x30;
            static constexpr std::uintptr_t UpShiftAttackDuration = 0x34;
            static constexpr std::uintptr_t UpShiftAttackVolumeSpike = 0x38;
            static constexpr std::uintptr_t UpShiftAttackRPM = 0x3C;
            static constexpr std::uintptr_t UpShiftAttackThrottleTime = 0x40;
            static constexpr std::uintptr_t UpShiftWobbleEnabled = 0x44;
            static constexpr std::uintptr_t UpShiftWobbleDuration = 0x48;
            static constexpr std::uintptr_t UpShiftWobblePitchFreq = 0x4C;
            static constexpr std::uintptr_t UpShiftWobblePitchAmp = 0x50;
            static constexpr std::uintptr_t UpShiftWobbleVolFreq = 0x54;
            static constexpr std::uintptr_t UpShiftWobbleVolAmp = 0x58;
            static constexpr std::uintptr_t DownShiftDuration = 0x5C;
            static constexpr std::uintptr_t PopDuration = 0x60;
            static constexpr std::uintptr_t ClutchRPMSpike = 0x64;
            static constexpr std::uintptr_t ClutchRPMSpikeDuration = 0x68;
            static constexpr std::uintptr_t ClutchRPMMergeTime = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"UpShiftDuration", 0x30, "FloatProperty"},
            {"UpShiftAttackDuration", 0x34, "FloatProperty"},
            {"UpShiftAttackVolumeSpike", 0x38, "FloatProperty"},
            {"UpShiftAttackRPM", 0x3C, "FloatProperty"},
            {"UpShiftAttackThrottleTime", 0x40, "FloatProperty"},
            {"UpShiftWobbleEnabled", 0x44, "BoolProperty"},
            {"UpShiftWobbleDuration", 0x48, "FloatProperty"},
            {"UpShiftWobblePitchFreq", 0x4C, "FloatProperty"},
            {"UpShiftWobblePitchAmp", 0x50, "FloatProperty"},
            {"UpShiftWobbleVolFreq", 0x54, "FloatProperty"},
            {"UpShiftWobbleVolAmp", 0x58, "FloatProperty"},
            {"DownShiftDuration", 0x5C, "FloatProperty"},
            {"PopDuration", 0x60, "FloatProperty"},
            {"ClutchRPMSpike", 0x64, "FloatProperty"},
            {"ClutchRPMSpikeDuration", 0x68, "FloatProperty"},
            {"ClutchRPMMergeTime", 0x6C, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "UpdateSettings",
        }};
    };

}
