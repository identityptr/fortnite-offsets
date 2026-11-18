#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeLowMemoryFallbackRuntime
{
    struct CreativeLowMemoryFallbackSettings
    {
        static constexpr std::string_view Name = "CreativeLowMemoryFallbackSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t WarningToastIcon = 0x30;
            static constexpr std::uintptr_t DefaultText = 0x50;
            static constexpr std::uintptr_t PlaylistOverrideThresholds = 0x80;
            static constexpr std::uintptr_t PlaylistOverrideText = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WarningToastIcon", 0x30, "SoftObjectProperty"},
            {"DefaultText", 0x50, "StructProperty"},
            {"PlaylistOverrideThresholds", 0x80, "MapProperty"},
            {"PlaylistOverrideText", 0x90, "MapProperty"},
        }};
    };

    struct CreativeLowMemoryFallbackWorldSubsystem
    {
        static constexpr std::string_view Name = "CreativeLowMemoryFallbackWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentThresholds = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentThresholds", 0x38, "StructProperty"},
        }};
    };

}
