#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FabricSettingsUI
{
    struct FortGameSettingRegistryExtension_Fabric
    {
        static constexpr std::string_view Name = "FortGameSettingRegistryExtension_Fabric";
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

    struct FortSettingEditCondition_FabricEnabledForLinkEntry
    {
        static constexpr std::string_view Name = "FortSettingEditCondition_FabricEnabledForLinkEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingEditCondition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
