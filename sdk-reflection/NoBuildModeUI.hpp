#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NoBuildModeUI
{
    struct PocketItemSlotMobileHUDElement
    {
        static constexpr std::string_view Name = "PocketItemSlotMobileHUDElement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileHUDElement";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotSize = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlotSize", 0x3E0, "FloatProperty"},
        }};
    };

}
