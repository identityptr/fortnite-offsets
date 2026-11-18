#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SGSRTUModule
{
    struct SGSRSettings
    {
        static constexpr std::string_view Name = "SGSRSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x30;
            static constexpr std::uintptr_t UpscalingMethod = 0x34;
            static constexpr std::uintptr_t Halfprecision = 0x38;
            static constexpr std::uintptr_t SUTarget = 0x3C;
            static constexpr std::uintptr_t AutoExposure = 0x40;
            static constexpr std::uintptr_t QualityMode = 0x44;
            static constexpr std::uintptr_t HistoryFormat = 0x48;
            static constexpr std::uintptr_t AdjustMipBias = 0x4C;
            static constexpr std::uintptr_t ForceVertexDeformationOutputsVelocity = 0x4D;
            static constexpr std::uintptr_t PixelLock = 0x4E;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bEnabled", 0x30, "BoolProperty"},
            {"UpscalingMethod", 0x34, "EnumProperty"},
            {"Halfprecision", 0x38, "BoolProperty"},
            {"SUTarget", 0x3C, "EnumProperty"},
            {"AutoExposure", 0x40, "BoolProperty"},
            {"QualityMode", 0x44, "EnumProperty"},
            {"HistoryFormat", 0x48, "EnumProperty"},
            {"AdjustMipBias", 0x4C, "BoolProperty"},
            {"ForceVertexDeformationOutputsVelocity", 0x4D, "BoolProperty"},
            {"PixelLock", 0x4E, "BoolProperty"},
        }};
    };

}
