#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeQuickOptionsTab
{
    struct FortCreativeQuickOptionsTab
    {
        static constexpr std::string_view Name = "FortCreativeQuickOptionsTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MapScreenContainerTabInfo = 0x4D0;
            static constexpr std::uintptr_t QuickOptionsTabNameId = 0x510;
            static constexpr std::uintptr_t TabButtonLabelInfo = 0x520;
            static constexpr std::uintptr_t bIsDefaultActiveTab = 0x610;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MapScreenContainerTabInfo", 0x4D0, "StructProperty"},
            {"QuickOptionsTabNameId", 0x510, "NameProperty"},
            {"TabButtonLabelInfo", 0x520, "StructProperty"},
            {"bIsDefaultActiveTab", 0x610, "BoolProperty"},
        }};
    };

}
