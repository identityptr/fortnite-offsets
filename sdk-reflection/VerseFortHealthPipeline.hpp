#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseFortHealthPipeline
{
    struct FortHealthPipelineWorldSubsystem
    {
        static constexpr std::string_view Name = "FortHealthPipelineWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DamageEffect = 0x40;
            static constexpr std::uintptr_t HealEffect = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DamageEffect", 0x40, "ObjectProperty"},
            {"HealEffect", 0x48, "ObjectProperty"},
        }};
    };

}
