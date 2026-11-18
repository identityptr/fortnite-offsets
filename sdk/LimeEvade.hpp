#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LimeEvade
{
    struct FortUserOptionComponent_LimeEvade
    {
        static constexpr std::string_view Name = "FortUserOptionComponent_LimeEvade";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowEvade = 0x158;
            static constexpr std::uintptr_t AllowEvade_DataRegistry = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAllowEvade", 0x158, "BoolProperty"},
            {"AllowEvade_DataRegistry", 0x160, "StructProperty"},
        }};
    };

}
