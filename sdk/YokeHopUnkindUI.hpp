#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::YokeHopUnkindUI
{
    struct YokeHopUnkindUIComponent_StormLine
    {
        static constexpr std::string_view Name = "YokeHopUnkindUIComponent_StormLine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StormLineMaterial = 0xE0;
            static constexpr std::uintptr_t StormLineMID = 0xE8;
            static constexpr std::uintptr_t MinimapStormLineBrush = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StormLineMaterial", 0xE0, "ObjectProperty"},
            {"StormLineMID", 0xE8, "ObjectProperty"},
            {"MinimapStormLineBrush", 0xF0, "StructProperty"},
        }};
    };

    struct YokeHopUnkindUIComponent_StormShape
    {
        static constexpr std::string_view Name = "YokeHopUnkindUIComponent_StormShape";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StormMaskMaterialOverride = 0x128;
            static constexpr std::uintptr_t StormMaskTextureData = 0x130;
            static constexpr std::uintptr_t DualStormMaskMaterialOverride = 0x190;
            static constexpr std::uintptr_t CurrentStormMaskData = 0x198;
            static constexpr std::uintptr_t FutureStormMaskData = 0x1F8;
            static constexpr std::uintptr_t FallbackStormMaskTextureSize = 0x258;
            static constexpr std::uintptr_t StormMaskTextureSizeByQualityDT = 0x260;
            static constexpr std::uintptr_t NumSplineSegmentSubdivisions = 0x268;
            static constexpr std::uintptr_t SafeZoneOverrideProvider = 0x278;
            static constexpr std::uintptr_t DefaultStormOpacity = 0x280;
            static constexpr std::uintptr_t BlurMaterial = 0x290;
            static constexpr std::uintptr_t BlurMID = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"StormMaskMaterialOverride", 0x128, "ObjectProperty"},
            {"StormMaskTextureData", 0x130, "StructProperty"},
            {"DualStormMaskMaterialOverride", 0x190, "ObjectProperty"},
            {"CurrentStormMaskData", 0x198, "StructProperty"},
            {"FutureStormMaskData", 0x1F8, "StructProperty"},
            {"FallbackStormMaskTextureSize", 0x258, "IntProperty"},
            {"StormMaskTextureSizeByQualityDT", 0x260, "ObjectProperty"},
            {"NumSplineSegmentSubdivisions", 0x268, "IntProperty"},
            {"SafeZoneOverrideProvider", 0x278, "WeakObjectProperty"},
            {"DefaultStormOpacity", 0x280, "FloatProperty"},
            {"BlurMaterial", 0x290, "ObjectProperty"},
            {"BlurMID", 0x298, "ObjectProperty"},
        }};
    };

}
