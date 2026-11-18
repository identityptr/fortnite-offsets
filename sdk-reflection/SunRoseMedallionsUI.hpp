#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SunRoseMedallionsUI
{
    struct SunRoseMedallionsInfoWidget
    {
        static constexpr std::string_view Name = "SunRoseMedallionsInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MedallionTag = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MedallionTag", 0x378, "StructProperty"},
        }};
    };

}
