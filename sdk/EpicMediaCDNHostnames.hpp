#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicMediaCDNHostnames
{
    struct EpicMediaCDNHostnames
    {
        static constexpr std::string_view Name = "EpicMediaCDNHostnames";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CDNDistribution = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CDNDistribution", 0x28, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetHostnames",
            "GetSelectedHostName",
        }};
    };

}
