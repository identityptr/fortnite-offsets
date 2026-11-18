#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarCharacterCosmetics
{
    struct DelMarDriverCosmeticPlayerComponent
    {
        static constexpr std::string_view Name = "DelMarDriverCosmeticPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceBindingTags = 0xD8;
            static constexpr std::uintptr_t CosmeticData = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SequenceBindingTags", 0xD8, "ArrayProperty"},
            {"CosmeticData", 0xE8, "StructProperty"},
        }};
    };

}
