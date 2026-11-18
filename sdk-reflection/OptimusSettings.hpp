#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OptimusSettings
{
    struct OptimusSettings
    {
        static constexpr std::string_view Name = "OptimusSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultMode = 0x30;
            static constexpr std::uintptr_t DefaultDeformer = 0x38;
            static constexpr std::uintptr_t DefaultRecomputeTangentDeformer = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultMode", 0x30, "EnumProperty"},
            {"DefaultDeformer", 0x38, "SoftObjectProperty"},
            {"DefaultRecomputeTangentDeformer", 0x58, "SoftObjectProperty"},
        }};
    };

}
