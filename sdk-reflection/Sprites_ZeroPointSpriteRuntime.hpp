#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Sprites_ZeroPointSpriteRuntime
{
    struct ZeroPointSpriteAttributeSet
    {
        static constexpr std::string_view Name = "ZeroPointSpriteAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentCharges = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentCharges", 0x48, "StructProperty"},
        }};
    };

}
