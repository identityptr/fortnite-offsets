#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SecretFacilityGameplayRuntime
{
    struct FortGameplayAbility_SecretFacility_InVortex
    {
        static constexpr std::string_view Name = "FortGameplayAbility_SecretFacility_InVortex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t VortexOverrideParams = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VortexOverrideParams", 0xB40, "StructProperty"},
        }};
    };

}
