#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BlueprintContext
{
    struct BlueprintContextBase
    {
        static constexpr std::string_view Name = "BlueprintContextBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Subsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BlueprintContextLibrary
    {
        static constexpr std::string_view Name = "BlueprintContextLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetContext",
        }};
    };

}
