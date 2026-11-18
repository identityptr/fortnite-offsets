#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GaussianSplat
{
    struct GaussianSplat
    {
        static constexpr std::string_view Name = "GaussianSplat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Bounds = 0x28;
            static constexpr std::uintptr_t NumSplats = 0x44;
            static constexpr std::uintptr_t SHDegree = 0x48;
            static constexpr std::uintptr_t SHCoordinateSpace = 0x4C;
            static constexpr std::uintptr_t MinLOD = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Bounds", 0x28, "StructProperty"},
            {"NumSplats", 0x44, "IntProperty"},
            {"SHDegree", 0x48, "IntProperty"},
            {"SHCoordinateSpace", 0x4C, "EnumProperty"},
            {"MinLOD", 0x50, "StructProperty"},
        }};
    };

    struct GaussianSplatActor
    {
        static constexpr std::string_view Name = "GaussianSplatActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t GaussianSplatComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GaussianSplatComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct GaussianSplatComponent
    {
        static constexpr std::string_view Name = "GaussianSplatComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x240;
            static constexpr std::uintptr_t PointScaleFactor = 0x248;
            static constexpr std::uintptr_t OpacityScale = 0x24C;
            static constexpr std::uintptr_t bInvertToneCurve = 0x250;
            static constexpr std::uintptr_t InverseToneCurveStrength = 0x254;
            static constexpr std::uintptr_t bInvertExpandGamut = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Asset", 0x240, "ObjectProperty"},
            {"PointScaleFactor", 0x248, "FloatProperty"},
            {"OpacityScale", 0x24C, "FloatProperty"},
            {"bInvertToneCurve", 0x250, "BoolProperty"},
            {"InverseToneCurveStrength", 0x254, "FloatProperty"},
            {"bInvertExpandGamut", 0x258, "BoolProperty"},
        }};
    };

}
