#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreatorRefreshMyIslandUI
{
    struct FortCreativeMyIslandSideNavWidget
    {
        static constexpr std::string_view Name = "FortCreativeMyIslandSideNavWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchInputActionRow = 0x4A0;
            static constexpr std::uintptr_t ClearSearchInputActionRow = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SearchInputActionRow", 0x4A0, "StructProperty"},
            {"ClearSearchInputActionRow", 0x4B0, "StructProperty"},
        }};
    };

}
