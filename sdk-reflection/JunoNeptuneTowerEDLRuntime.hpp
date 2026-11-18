#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoNeptuneTowerEDLRuntime
{
    struct JunoNeptunePOIUGCRequest
    {
        static constexpr std::string_view Name = "JunoNeptunePOIUGCRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTileGenerationUGCRequest";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
