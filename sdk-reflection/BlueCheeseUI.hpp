#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BlueCheeseUI
{
    struct BlueCheeseWidgetBase
    {
        static constexpr std::string_view Name = "BlueCheeseWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LTMWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBlueCheeseMutator = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedBlueCheeseMutator", 0x3E0, "ObjectProperty"},
        }};
    };

}
