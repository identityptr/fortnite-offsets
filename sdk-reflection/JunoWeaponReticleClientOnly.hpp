#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoWeaponReticleClientOnly
{
    struct JunoReticleWidget
    {
        static constexpr std::string_view Name = "JunoReticleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ChargeTag = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChargeTag", 0x370, "StructProperty"},
        }};
    };

}
