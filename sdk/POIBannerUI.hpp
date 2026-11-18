#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::POIBannerUI
{
    struct POIBannerToastSocialAvatar
    {
        static constexpr std::string_view Name = "POIBannerToastSocialAvatar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Icon_SocialAvatar = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Icon_SocialAvatar", 0x370, "ObjectProperty"},
        }};
    };

    struct POIBannerToastWidgetBase
    {
        static constexpr std::string_view Name = "POIBannerToastWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PrioritizationData = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrioritizationData", 0x3B0, "StructProperty"},
        }};
    };

}
