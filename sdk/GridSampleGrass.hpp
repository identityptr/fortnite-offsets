#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GridSampleGrass
{
    struct GridSampleGrassActor
    {
        static constexpr std::string_view Name = "GridSampleGrassActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t GrassComponent = 0x278;
            static constexpr std::uintptr_t CoverageSpline = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GrassComponent", 0x278, "ObjectProperty"},
            {"CoverageSpline", 0x280, "ObjectProperty"},
        }};
    };

    struct GridSampleGrassComponent
    {
        static constexpr std::string_view Name = "GridSampleGrassComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Tuning = 0x560;
            static constexpr std::uintptr_t PlaneHalfExtentCm = 0x670;
            static constexpr std::uintptr_t CoverageSpline = 0x680;
            static constexpr std::uintptr_t SplineMaskTexture = 0x688;
            static constexpr std::uintptr_t PreviousSplineMaskTexture = 0x690;
            static constexpr std::uintptr_t BladeMID = 0x6B8;
            static constexpr std::uintptr_t ImpostorMID = 0x6C0;
            static constexpr std::uintptr_t ImpostorAtlasRT = 0x6C8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Tuning", 0x560, "StructProperty"},
            {"PlaneHalfExtentCm", 0x670, "StructProperty"},
            {"CoverageSpline", 0x680, "ObjectProperty"},
            {"SplineMaskTexture", 0x688, "ObjectProperty"},
            {"PreviousSplineMaskTexture", 0x690, "ObjectProperty"},
            {"BladeMID", 0x6B8, "ObjectProperty"},
            {"ImpostorMID", 0x6C0, "ObjectProperty"},
            {"ImpostorAtlasRT", 0x6C8, "ObjectProperty"},
        }};
    };

    struct GridSampleGrassInteractorComponent
    {
        static constexpr std::string_view Name = "GridSampleGrassInteractorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RadiusCm = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RadiusCm", 0x240, "FloatProperty"},
        }};
    };

}
