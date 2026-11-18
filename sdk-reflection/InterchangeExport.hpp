#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InterchangeExport
{
    struct InterchangeTextureWriter
    {
        static constexpr std::string_view Name = "InterchangeTextureWriter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeWriterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
