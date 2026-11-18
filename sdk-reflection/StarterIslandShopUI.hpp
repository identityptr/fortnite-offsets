#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StarterIslandShopUI
{
    struct ShopOfferDisplayComponent
    {
        static constexpr std::string_view Name = "ShopOfferDisplayComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredTimeForActorUnderReticleInSeconds = 0xC4;
            static constexpr std::uintptr_t MaxUIDisplayDistance = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RequiredTimeForActorUnderReticleInSeconds", 0xC4, "FloatProperty"},
            {"MaxUIDisplayDistance", 0xC8, "FloatProperty"},
        }};
    };

    struct StarterIslandShopViewModel
    {
        static constexpr std::string_view Name = "StarterIslandShopViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
