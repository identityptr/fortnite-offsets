#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RenderTrace
{
    struct MaterialExpressionPhysicalMaterialOutput
    {
        static constexpr std::string_view Name = "MaterialExpressionPhysicalMaterialOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionCustomOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t Inputs = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Inputs", 0xB0, "ArrayProperty"},
        }};
    };

    struct PhysicalMaterialTraceInput
    {
        static constexpr std::string_view Name = "PhysicalMaterialTraceInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicalMaterial = 0x0;
            static constexpr std::uintptr_t Input = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PhysicalMaterial", 0x0, "ObjectProperty"},
            {"Input", 0x8, "StructProperty"},
        }};
    };

}
