#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LiveLinkAnimationCore
{
    struct LiveLinkInstance
    {
        static constexpr std::string_view Name = "LiveLinkInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentRetargetAsset = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentRetargetAsset", 0x260, "ObjectProperty"},
        }};
    };

    struct LiveLinkRemapAsset
    {
        static constexpr std::string_view Name = "LiveLinkRemapAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkRetargetAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkRetargetAsset
    {
        static constexpr std::string_view Name = "LiveLinkRetargetAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
