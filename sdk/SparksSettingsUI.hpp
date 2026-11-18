#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksSettingsUI
{
    struct FortSettingRegistryExtension_Sparks
    {
        static constexpr std::string_view Name = "FortSettingRegistryExtension_Sparks";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameSettingRegistryExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupBase = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MarkupBase", 0x28, "ObjectProperty"},
        }};
    };

    struct SparksSettingsUIGlobals
    {
        static constexpr std::string_view Name = "SparksSettingsUIGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
