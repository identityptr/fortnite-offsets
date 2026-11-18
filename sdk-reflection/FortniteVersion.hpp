#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteVersion
{
    struct FortReleaseVersion
    {
        static constexpr std::string_view Name = "FortReleaseVersion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VersionName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VersionName", 0x0, "NameProperty"},
        }};
    };

    struct FortReleaseVersionRange
    {
        static constexpr std::string_view Name = "FortReleaseVersionRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InclusiveMin = 0x0;
            static constexpr std::uintptr_t ExclusiveMax = 0x4;
            static constexpr std::uintptr_t VersionMax = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InclusiveMin", 0x0, "StructProperty"},
            {"ExclusiveMax", 0x4, "StructProperty"},
            {"VersionMax", 0x8, "StructProperty"},
        }};
    };

}
