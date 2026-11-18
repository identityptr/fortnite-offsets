#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutMatchmakingSettingsButton
{
    struct SproutMatchmakingSettingsButtonOverride
    {
        static constexpr std::string_view Name = "SproutMatchmakingSettingsButtonOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MatchmakingSettingsOverrideUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductLogoWidget = 0x28;
            static constexpr std::uintptr_t MatchFoundWidget = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProductLogoWidget", 0x28, "SoftClassProperty"},
            {"MatchFoundWidget", 0x48, "SoftClassProperty"},
        }};
    };

}
