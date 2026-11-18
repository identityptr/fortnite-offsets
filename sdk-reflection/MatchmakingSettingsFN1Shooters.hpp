#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MatchmakingSettingsFN1Shooters
{
    struct FortMatchmakingSettingFN1ShooterTeamSizeVM
    {
        static constexpr std::string_view Name = "FortMatchmakingSettingFN1ShooterTeamSizeVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMatchmakingSettingDiscreteEnumVM";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMatchmakingSettingRankedVM
    {
        static constexpr std::string_view Name = "FortMatchmakingSettingRankedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMatchmakingSettingDiscreteEnumVM";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
