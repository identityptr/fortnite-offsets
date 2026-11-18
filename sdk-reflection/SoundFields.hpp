#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SoundFields
{
    struct AmbisonicsEncodingSettings
    {
        static constexpr std::string_view Name = "AmbisonicsEncodingSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundfieldEncodingSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AmbisonicsOrder = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AmbisonicsOrder", 0x28, "IntProperty"},
        }};
    };

}
