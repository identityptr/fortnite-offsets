#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::STW_HestiaBeautyUI
{
    struct FortHestiaUIRequestsFeatureAction
    {
        static constexpr std::string_view Name = "FortHestiaUIRequestsFeatureAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortUIStateWidget_STWFrontendHB
    {
        static constexpr std::string_view Name = "FortUIStateWidget_STWFrontendHB";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIStateWidget_STWFrontend";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseFrontendMenuActionRowHandle = 0x648;
            static constexpr std::uintptr_t CloseFrontendMenuSRActionRowHandle = 0x660;
            static constexpr std::uintptr_t CloseFrontendMenuDualActionRowHandle = 0x678;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CloseFrontendMenuActionRowHandle", 0x648, "StructProperty"},
            {"CloseFrontendMenuSRActionRowHandle", 0x660, "StructProperty"},
            {"CloseFrontendMenuDualActionRowHandle", 0x678, "StructProperty"},
        }};
    };

}
