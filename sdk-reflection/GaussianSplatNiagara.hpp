#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GaussianSplatNiagara
{
    struct NiagaraDataInterfaceGaussianSplatReader
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGaussianSplatReader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GaussianSplat = 0x38;
            static constexpr std::uintptr_t MaxSHDegree = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GaussianSplat", 0x38, "ObjectProperty"},
            {"MaxSHDegree", 0x40, "OptionalProperty"},
        }};
    };

    struct NiagaraDataInterfaceGaussianSplatWriter
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGaussianSplatWriter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NumSplats = 0x38;
            static constexpr std::uintptr_t SHDegree = 0x40;
            static constexpr std::uintptr_t SHCoordinateSpace = 0x48;
            static constexpr std::uintptr_t PositionBounds = 0x50;
            static constexpr std::uintptr_t MaxScale = 0x88;
            static constexpr std::uintptr_t MaxSHCoefficient = 0x90;
            static constexpr std::uintptr_t SplatScale = 0x98;
            static constexpr std::uintptr_t OpacityScale = 0x9C;
            static constexpr std::uintptr_t bInvertToneCurve = 0xA0;
            static constexpr std::uintptr_t InverseToneCurveStrength = 0xA4;
            static constexpr std::uintptr_t bInvertExpandGamut = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"NumSplats", 0x38, "OptionalProperty"},
            {"SHDegree", 0x40, "OptionalProperty"},
            {"SHCoordinateSpace", 0x48, "OptionalProperty"},
            {"PositionBounds", 0x50, "OptionalProperty"},
            {"MaxScale", 0x88, "OptionalProperty"},
            {"MaxSHCoefficient", 0x90, "OptionalProperty"},
            {"SplatScale", 0x98, "FloatProperty"},
            {"OpacityScale", 0x9C, "FloatProperty"},
            {"bInvertToneCurve", 0xA0, "BoolProperty"},
            {"InverseToneCurveStrength", 0xA4, "FloatProperty"},
            {"bInvertExpandGamut", 0xA8, "BoolProperty"},
        }};
    };

    struct NiagaraSplatRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraSplatRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraRendererProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t SplatScale = 0x98;
            static constexpr std::uintptr_t OpacityScale = 0x9C;
            static constexpr std::uintptr_t bInvertToneCurve = 0xA0;
            static constexpr std::uintptr_t InverseToneCurveStrength = 0xA4;
            static constexpr std::uintptr_t bInvertExpandGamut = 0xA8;
            static constexpr std::uintptr_t RendererVisibility = 0xAC;
            static constexpr std::uintptr_t PositionBinding = 0xB0;
            static constexpr std::uintptr_t ScaleBinding = 0xC4;
            static constexpr std::uintptr_t RotationBinding = 0xD8;
            static constexpr std::uintptr_t ColorBinding = 0xEC;
            static constexpr std::uintptr_t RendererVisibilityTagBinding = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SplatScale", 0x98, "FloatProperty"},
            {"OpacityScale", 0x9C, "FloatProperty"},
            {"bInvertToneCurve", 0xA0, "BoolProperty"},
            {"InverseToneCurveStrength", 0xA4, "FloatProperty"},
            {"bInvertExpandGamut", 0xA8, "BoolProperty"},
            {"RendererVisibility", 0xAC, "IntProperty"},
            {"PositionBinding", 0xB0, "StructProperty"},
            {"ScaleBinding", 0xC4, "StructProperty"},
            {"RotationBinding", 0xD8, "StructProperty"},
            {"ColorBinding", 0xEC, "StructProperty"},
            {"RendererVisibilityTagBinding", 0x100, "StructProperty"},
        }};
    };

}
