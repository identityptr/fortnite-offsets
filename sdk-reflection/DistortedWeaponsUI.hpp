#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DistortedWeaponsUI
{
    struct ChromeWeaponInfoWidget
    {
        static constexpr std::string_view Name = "ChromeWeaponInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HUDContext = 0x370;
            static constexpr std::uintptr_t CurrentXpComponent = 0x378;
            static constexpr std::uintptr_t ItemTierWidget = 0x380;
            static constexpr std::uintptr_t KeyBindWidget = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HUDContext", 0x370, "ObjectProperty"},
            {"CurrentXpComponent", 0x378, "ObjectProperty"},
            {"ItemTierWidget", 0x380, "ObjectProperty"},
            {"KeyBindWidget", 0x388, "ObjectProperty"},
        }};
    };

}
