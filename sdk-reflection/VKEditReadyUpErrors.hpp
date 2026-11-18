#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VKEditReadyUpErrors
{
    struct VKEditReadyUpErrorsExtension
    {
        static constexpr std::string_view Name = "VKEditReadyUpErrorsExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorsExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
