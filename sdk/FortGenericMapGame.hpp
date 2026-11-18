#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortGenericMapGame
{
    struct FortControllerComponent_GenericMapMarker
    {
        static constexpr std::string_view Name = "FortControllerComponent_GenericMapMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NeedsRefinementTag = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NeedsRefinementTag", 0xC8, "StructProperty"},
        }};
    };

    struct FortGenericMapFunctionLibrary
    {
        static constexpr std::string_view Name = "FortGenericMapFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGenericMapManager
    {
        static constexpr std::string_view Name = "FortGenericMapManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TileSize = 0x278;
            static constexpr std::uintptr_t LayerNameToIDs = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TileSize", 0x278, "FloatProperty"},
            {"LayerNameToIDs", 0x280, "MapProperty"},
        }};
    };

    struct PlayspaceComponent_FortGenericMapManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_FortGenericMapManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bSpawnMapManagerOnBeginPlay = 0xC0;
            static constexpr std::uintptr_t MapManagerClass = 0xC8;
            static constexpr std::uintptr_t MapManager = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bSpawnMapManagerOnBeginPlay", 0xC0, "BoolProperty"},
            {"MapManagerClass", 0xC8, "ClassProperty"},
            {"MapManager", 0xD0, "ObjectProperty"},
        }};
    };

}
