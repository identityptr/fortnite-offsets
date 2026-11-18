#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CompeteOldUI
{
    struct FortUIGameFeatureAction_CompeteOldUI
    {
        static constexpr std::string_view Name = "FortUIGameFeatureAction_CompeteOldUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t TournamentModalClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TournamentModalClass", 0x28, "SoftClassProperty"},
        }};
    };

}
