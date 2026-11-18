#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpriteBoonsCh7MSRuntime
{
    struct SpriteBoonGameplayAbility_AmmoLootBonus
    {
        static constexpr std::string_view Name = "SpriteBoonGameplayAbility_AmmoLootBonus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t AmmoBonusMultiplier = 0xB40;
            static constexpr std::uintptr_t ResourceBonusMultiplier = 0xB68;
            static constexpr std::uintptr_t bNotifyPlayerOnBonus = 0xB90;
            static constexpr std::uintptr_t ShareBonusWithMatchingTeammates = 0xB98;
            static constexpr std::uintptr_t WorldLootSourceTypes = 0xBC0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AmmoBonusMultiplier", 0xB40, "StructProperty"},
            {"ResourceBonusMultiplier", 0xB68, "StructProperty"},
            {"bNotifyPlayerOnBonus", 0xB90, "BoolProperty"},
            {"ShareBonusWithMatchingTeammates", 0xB98, "StructProperty"},
            {"WorldLootSourceTypes", 0xBC0, "SetProperty"},
        }};
    };

}
