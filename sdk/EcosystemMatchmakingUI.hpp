#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EcosystemMatchmakingUI
{
    struct MatchmakingWidgetOverride
    {
        static constexpr std::string_view Name = "MatchmakingWidgetOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchmakingWidgetClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MatchmakingWidgetClass", 0x28, "SoftClassProperty"},
        }};
    };

}
