#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ImageCore
{
    struct SharedImageConstRefBlueprint
    {
        static constexpr std::string_view Name = "SharedImageConstRefBlueprint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SharedImageConstRefBlueprintFns
    {
        static constexpr std::string_view Name = "SharedImageConstRefBlueprintFns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetHeight",
            "GetPixelLinearColor",
            "GetPixelValue",
            "GetSize",
            "GetWidth",
            "IsValid",
        }};
    };

}
