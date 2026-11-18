#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DeluluReadyUpErrors
{
    struct DeluluReadyUpErrorsExtension
    {
        static constexpr std::string_view Name = "DeluluReadyUpErrorsExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorsExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
