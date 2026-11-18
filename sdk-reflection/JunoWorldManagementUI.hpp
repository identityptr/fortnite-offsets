#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoWorldManagementUI
{
    struct JunoMatchmakingSettingsUI
    {
        static constexpr std::string_view Name = "JunoMatchmakingSettingsUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MatchmakingSettingsOverrideUI";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchmakingSettingsModal = 0x28;
            static constexpr std::uintptr_t ProductLogoWidget = 0x48;
            static constexpr std::uintptr_t MatchFoundWidget = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MatchmakingSettingsModal", 0x28, "SoftClassProperty"},
            {"ProductLogoWidget", 0x48, "SoftClassProperty"},
            {"MatchFoundWidget", 0x68, "SoftClassProperty"},
        }};
    };

}
