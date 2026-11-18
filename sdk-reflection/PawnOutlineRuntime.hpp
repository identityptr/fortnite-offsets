#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PawnOutlineRuntime
{
    struct PawnOutlineComponentBase
    {
        static constexpr std::string_view Name = "PawnOutlineComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BonesAndRelativeTransforms = 0xC8;
            static constexpr std::uintptr_t OutlinePlaneMesh = 0xD8;
            static constexpr std::uintptr_t OutlineMaterial = 0xE0;
            static constexpr std::uintptr_t OutlineColorScale = 0xE8;
            static constexpr std::uintptr_t OutlineColor = 0xEC;
            static constexpr std::uintptr_t bShouldLocalPlayerHaveOutline = 0xFC;
            static constexpr std::uintptr_t GlowPlanes = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BonesAndRelativeTransforms", 0xC8, "MapProperty"},
            {"OutlinePlaneMesh", 0xD8, "ObjectProperty"},
            {"OutlineMaterial", 0xE0, "ObjectProperty"},
            {"OutlineColorScale", 0xE8, "FloatProperty"},
            {"OutlineColor", 0xEC, "StructProperty"},
            {"bShouldLocalPlayerHaveOutline", 0xFC, "BoolProperty"},
            {"GlowPlanes", 0x100, "ArrayProperty"},
        }};
    };

}
