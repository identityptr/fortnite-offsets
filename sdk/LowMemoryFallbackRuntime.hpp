#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LowMemoryFallbackRuntime
{
    struct BootToFrontend_LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "BootToFrontend_LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t Message = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Message", 0x38, "TextProperty"},
        }};
    };

    struct LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FriendlyNameForAnalytics = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FriendlyNameForAnalytics", 0x28, "StrProperty"},
        }};
    };

    struct LowMemoryFallbackWorldSubsystem
    {
        static constexpr std::string_view Name = "LowMemoryFallbackWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
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

    struct Toast_LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "Toast_LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t ToastTitle = 0x38;
            static constexpr std::uintptr_t ToastDescription = 0x48;
            static constexpr std::uintptr_t ToastIcon = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ToastTitle", 0x38, "TextProperty"},
            {"ToastDescription", 0x48, "TextProperty"},
            {"ToastIcon", 0x58, "SoftObjectProperty"},
        }};
    };

}
