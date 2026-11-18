#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::KeysAndLocksUI
{
    struct KeyPlayerInfoWidget
    {
        static constexpr std::string_view Name = "KeyPlayerInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyStatusTag = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"KeyStatusTag", 0x378, "StructProperty"},
        }};
    };

}
