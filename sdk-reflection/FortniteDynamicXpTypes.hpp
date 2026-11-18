#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteDynamicXpTypes
{
    struct RestedXpUsage
    {
        static constexpr std::string_view Name = "RestedXpUsage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RestedXpUsage = 0x0;
            static constexpr std::uintptr_t FixedRestedXpAmount = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RestedXpUsage", 0x0, "EnumProperty"},
            {"FixedRestedXpAmount", 0x4, "IntProperty"},
        }};
    };

}
