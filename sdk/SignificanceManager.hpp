#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SignificanceManager
{
    struct SignificanceManager
    {
        static constexpr std::string_view Name = "SignificanceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SignificanceManagerClassName = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SignificanceManagerClassName", 0xA0, "StructProperty"},
        }};
    };

}
