#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BattlePassBase
{
    struct FortBattlePassLevelCount
    {
        static constexpr std::string_view Name = "FortBattlePassLevelCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_LevelCount = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text_LevelCount", 0x308, "ObjectProperty"},
        }};
    };

}
