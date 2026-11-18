#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SeasonPassHub
{
    struct BPUpsellInterstitialVM
    {
        static constexpr std::string_view Name = "BPUpsellInterstitialVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInterstitialVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Config", 0xF0, "StructProperty"},
        }};
    };

    struct MotdBattlePassAction
    {
        static constexpr std::string_view Name = "MotdBattlePassAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MotdActionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MotdGiftPassAction
    {
        static constexpr std::string_view Name = "MotdGiftPassAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MotdActionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SeasonPassHubCrewShopOfferOverride
    {
        static constexpr std::string_view Name = "SeasonPassHubCrewShopOfferOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemShopOfferInspectionScreenOverrideBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
