#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StarsoapGameplay
{
    struct StarsoapProximityChatViewModel
    {
        static constexpr std::string_view Name = "StarsoapProximityChatViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t InAreaTag = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InAreaTag", 0x78, "StructProperty"},
        }};
    };

    struct StarsoapTargetPlayerViewModel
    {
        static constexpr std::string_view Name = "StarsoapTargetPlayerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAvatar = 0x90;
            static constexpr std::uintptr_t bIsTargetActive = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedAvatar", 0x90, "ObjectProperty"},
            {"bIsTargetActive", 0x98, "BoolProperty"},
        }};
    };

}
