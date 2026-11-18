#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GlobalConfigurationData
{
    struct GlobalConfigurationDataBlueprintLibrary
    {
        static constexpr std::string_view Name = "GlobalConfigurationDataBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "GetConfigDataBool",
            "GetConfigDataBoolWithDefault",
            "GetConfigDataFloat",
            "GetConfigDataFloatWithDefault",
            "GetConfigDataInt",
            "GetConfigDataIntWithDefault",
            "GetConfigDataObject",
            "GetConfigDataString",
            "GetConfigDataStringWithDefault",
            "GetConfigDataStruct",
            "GetConfigDataText",
            "GetConfigDataTextWithDefault",
        }};
    };

}
