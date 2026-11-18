#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PlayAsVillainUI
{
    struct PlayAsVillainHUDPortraitVM
    {
        static constexpr std::string_view Name = "PlayAsVillainHUDPortraitVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PortraitTexture = 0x78;
            static constexpr std::uintptr_t WeakPlayerState = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PortraitTexture", 0x78, "SoftObjectProperty"},
            {"WeakPlayerState", 0x98, "WeakObjectProperty"},
        }};
    };

}
