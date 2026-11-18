#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoTilesTabasco
{
    struct JunoTabascoWorldTileManipulator
    {
        static constexpr std::string_view Name = "JunoTabascoWorldTileManipulator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWorldTileManipulator";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoTilesTabascoEventBuilder
    {
        static constexpr std::string_view Name = "JunoTilesTabascoEventBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWorldTileEventBuilder";
        struct Offsets
        {
            static constexpr std::uintptr_t EventTileSize = 0x278;
            static constexpr std::uintptr_t bIsBespokeEvent = 0x280;
            static constexpr std::uintptr_t bFillWithWater = 0x281;
            static constexpr std::uintptr_t TileExtent = 0x288;
            static constexpr std::uintptr_t TileSize = 0x290;
            static constexpr std::uintptr_t WorldRadius = 0x298;
            static constexpr std::uintptr_t EventRandomStream = 0x2A0;
            static constexpr std::uintptr_t bUsePlayerLocationBuffer = 0x2A8;
            static constexpr std::uintptr_t bPlaceNearLastEvent = 0x2A9;
            static constexpr std::uintptr_t bPlaceNearPlayer = 0x2AA;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"EventTileSize", 0x278, "StructProperty"},
            {"bIsBespokeEvent", 0x280, "BoolProperty"},
            {"bFillWithWater", 0x281, "BoolProperty"},
            {"TileExtent", 0x288, "DoubleProperty"},
            {"TileSize", 0x290, "DoubleProperty"},
            {"WorldRadius", 0x298, "DoubleProperty"},
            {"EventRandomStream", 0x2A0, "StructProperty"},
            {"bUsePlayerLocationBuffer", 0x2A8, "BoolProperty"},
            {"bPlaceNearLastEvent", 0x2A9, "BoolProperty"},
            {"bPlaceNearPlayer", 0x2AA, "BoolProperty"},
        }};
    };

    struct JunoTilesTabascoMaterialGatherer
    {
        static constexpr std::string_view Name = "JunoTilesTabascoMaterialGatherer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTerrainMaterialCollector";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalLayers = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AdditionalLayers", 0x70, "ArrayProperty"},
        }};
    };

}
