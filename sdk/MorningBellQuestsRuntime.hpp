#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MorningBellQuestsRuntime
{
    struct FortQuestDefinitionComponent_DailyLogin
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_DailyLogin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsDaySpecial = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsDaySpecial", 0x40, "BoolProperty"},
        }};
    };

}
