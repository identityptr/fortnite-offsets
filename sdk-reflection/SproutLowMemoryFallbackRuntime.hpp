#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutLowMemoryFallbackRuntime
{
    struct SproutLowMemoryFallbackWorldSubsystem
    {
        static constexpr std::string_view Name = "SproutLowMemoryFallbackWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoLowMemoryFallbackWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PluginName = 0x38;
            static constexpr std::uintptr_t Thresholds = 0x48;
            static constexpr std::uintptr_t ThresholdStates = 0x58;
            static constexpr std::uintptr_t MemoryRollingAverageSamples = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PluginName", 0x38, "StrProperty"},
            {"Thresholds", 0x48, "ArrayProperty"},
            {"ThresholdStates", 0x58, "ArrayProperty"},
            {"MemoryRollingAverageSamples", 0x94, "IntProperty"},
        }};
    };

    struct SproutSOStreamingDistance_LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "SproutSOStreamingDistance_LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceMultiplier = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DistanceMultiplier", 0x38, "FloatProperty"},
        }};
    };

    struct SproutUseAMUThrottling_LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "SproutUseAMUThrottling_LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t FriendlyNameForAnalytics = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FriendlyNameForAnalytics", 0x28, "StrProperty"},
        }};
    };

}
