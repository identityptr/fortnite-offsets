#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DeveloperSettings
{
    struct DeveloperSettings
    {
        static constexpr std::string_view Name = "DeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DeveloperSettingsBackedByCVars
    {
        static constexpr std::string_view Name = "DeveloperSettingsBackedByCVars";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PerPlatformSettings
    {
        static constexpr std::string_view Name = "PerPlatformSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x0, "ArrayProperty"},
        }};
    };

    struct PlatformSettings
    {
        static constexpr std::string_view Name = "PlatformSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlatformSettingsInstances
    {
        static constexpr std::string_view Name = "PlatformSettingsInstances";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlatformInstance = 0x0;
            static constexpr std::uintptr_t OtherPlatforms = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlatformInstance", 0x0, "ObjectProperty"},
            {"OtherPlatforms", 0x8, "MapProperty"},
        }};
    };

    struct PlatformSettingsManager
    {
        static constexpr std::string_view Name = "PlatformSettingsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingsMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SettingsMap", 0x28, "MapProperty"},
        }};
    };

}
