#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CurveExpression
{
    struct CurveExpressionsDataAsset
    {
        static constexpr std::string_view Name = "CurveExpressionsDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t NamedConstants = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NamedConstants", 0x28, "ArrayProperty"},
        }};
    };

}
