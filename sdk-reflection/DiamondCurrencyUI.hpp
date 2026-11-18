#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DiamondCurrencyUI
{
    struct FortDiamondHUDWidget
    {
        static constexpr std::string_view Name = "FortDiamondHUDWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Panel_BoundVisibility = 0x370;
            static constexpr std::uintptr_t ResourceItemDefinition = 0x378;
            static constexpr std::uintptr_t DiamondSpendablesActorTags = 0x380;
            static constexpr std::uintptr_t OverlapDiamondSpendableSphereRadius = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Panel_BoundVisibility", 0x370, "ObjectProperty"},
            {"ResourceItemDefinition", 0x378, "ObjectProperty"},
            {"DiamondSpendablesActorTags", 0x380, "StructProperty"},
            {"OverlapDiamondSpendableSphereRadius", 0x3A0, "FloatProperty"},
        }};
    };

}
