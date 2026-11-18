#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AbilitySystemGameFeatureActions
{
    struct GameFeatureAction_AddAttributeDefaults
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddAttributeDefaults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyOnRegister = 0x28;
            static constexpr std::uintptr_t AttribDefaultTableNames = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bApplyOnRegister", 0x28, "BoolProperty"},
            {"AttribDefaultTableNames", 0x30, "ArrayProperty"},
        }};
    };

}
