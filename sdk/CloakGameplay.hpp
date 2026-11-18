#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CloakGameplay
{
    struct FortGameCueNotifyLoop_Cloak
    {
        static constexpr std::string_view Name = "FortGameCueNotifyLoop_Cloak";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPlayer = 0xC58;
            static constexpr std::uintptr_t VisibilityLevel = 0xC60;
            static constexpr std::uintptr_t StationaryVisMult = 0xC64;
            static constexpr std::uintptr_t MaxSpeedVisMult = 0xC68;
            static constexpr std::uintptr_t SpeedForMaxVis = 0xC6C;
            static constexpr std::uintptr_t VisibilityMinFriendly = 0xC70;
            static constexpr std::uintptr_t VisibilityMinNonfriendly = 0xC74;
            static constexpr std::uintptr_t VisibilityLevelChangeRate = 0xC78;
            static constexpr std::uintptr_t CloakModifiersByNameMap = 0xC80;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TargetPlayer", 0xC58, "ObjectProperty"},
            {"VisibilityLevel", 0xC60, "FloatProperty"},
            {"StationaryVisMult", 0xC64, "FloatProperty"},
            {"MaxSpeedVisMult", 0xC68, "FloatProperty"},
            {"SpeedForMaxVis", 0xC6C, "FloatProperty"},
            {"VisibilityMinFriendly", 0xC70, "FloatProperty"},
            {"VisibilityMinNonfriendly", 0xC74, "FloatProperty"},
            {"VisibilityLevelChangeRate", 0xC78, "FloatProperty"},
            {"CloakModifiersByNameMap", 0xC80, "MapProperty"},
        }};
    };

}
