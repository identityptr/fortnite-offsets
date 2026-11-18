#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Umbramolt_KipperRuntime
{
    struct Umbramolt_KipperAttributeSet
    {
        static constexpr std::string_view Name = "Umbramolt_KipperAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t DamageMultiplier = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DamageMultiplier", 0x48, "StructProperty"},
        }};
    };

}
