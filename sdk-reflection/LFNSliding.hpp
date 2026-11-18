#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNSliding
{
    struct LFNControllerComponent_Sliding
    {
        static constexpr std::string_view Name = "LFNControllerComponent_Sliding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_Sliding";
        struct Offsets
        {
            static constexpr std::uintptr_t StealthTag = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StealthTag", 0x278, "StructProperty"},
        }};
    };

}
