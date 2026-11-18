#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PCGExternalDataInterop
{
    struct PCGLoadAlembicSettings
    {
        static constexpr std::string_view Name = "PCGLoadAlembicSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExternalDataSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AlembicFilePath = 0xB8;
            static constexpr std::uintptr_t ConversionScale = 0xC8;
            static constexpr std::uintptr_t ConversionRotation = 0xE0;
            static constexpr std::uintptr_t bConversionFlipHandedness = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AlembicFilePath", 0xB8, "StructProperty"},
            {"ConversionScale", 0xC8, "StructProperty"},
            {"ConversionRotation", 0xE0, "StructProperty"},
            {"bConversionFlipHandedness", 0xF8, "BoolProperty"},
        }};
    };

}
