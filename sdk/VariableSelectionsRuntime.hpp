#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VariableSelectionsRuntime
{
    struct VariableSelectionsWorldConditionSchema
    {
        static constexpr std::string_view Name = "VariableSelectionsWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

}
