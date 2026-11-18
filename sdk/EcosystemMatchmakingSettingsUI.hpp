#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EcosystemMatchmakingSettingsUI
{
    struct EcosystemMatchmakingSettingsUI
    {
        static constexpr std::string_view Name = "EcosystemMatchmakingSettingsUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MatchmakingSettingsOverrideUI";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchmakingSettingsModal = 0x28;
            static constexpr std::uintptr_t MatchFoundWidgetsForProductTagEntries = 0x48;
            static constexpr std::uintptr_t DefaultMatchFoundWidget = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MatchmakingSettingsModal", 0x28, "SoftClassProperty"},
            {"MatchFoundWidgetsForProductTagEntries", 0x48, "ArrayProperty"},
            {"DefaultMatchFoundWidget", 0x58, "SoftClassProperty"},
        }};
    };

}
