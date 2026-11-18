#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HighTowerUI
{
    struct HighTowerAbilityContainerWidget
    {
        static constexpr std::string_view Name = "HighTowerAbilityContainerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LTMWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ShowAbilityIntroTag = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShowAbilityIntroTag", 0x3E0, "StructProperty"},
        }};
    };

}
