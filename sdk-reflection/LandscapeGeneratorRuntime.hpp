#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LandscapeGeneratorRuntime
{
    struct LandscapeGeneratorSplineMeshComponent
    {
        static constexpr std::string_view Name = "LandscapeGeneratorSplineMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x560;
            static constexpr std::uintptr_t NumSegments = 0x568;
            static constexpr std::uintptr_t SplineParams = 0x570;
            static constexpr std::uintptr_t SplineUpDir = 0x620;
            static constexpr std::uintptr_t SplineBoundaryMin = 0x638;
            static constexpr std::uintptr_t SplineBoundaryMax = 0x63C;
            static constexpr std::uintptr_t ForwardAxis = 0x640;
            static constexpr std::uintptr_t bSmoothInterpRollScale = 0x641;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Material", 0x560, "ObjectProperty"},
            {"NumSegments", 0x568, "IntProperty"},
            {"SplineParams", 0x570, "StructProperty"},
            {"SplineUpDir", 0x620, "StructProperty"},
            {"SplineBoundaryMin", 0x638, "FloatProperty"},
            {"SplineBoundaryMax", 0x63C, "FloatProperty"},
            {"ForwardAxis", 0x640, "ByteProperty"},
            {"bSmoothInterpRollScale", 0x641, "BoolProperty"},
        }};
    };

}
