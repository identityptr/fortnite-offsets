#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortOcclusionNetRelevancy
{
    struct FortOcclusionClientStatsComponent
    {
        static constexpr std::string_view Name = "FortOcclusionClientStatsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NumPawnsWithinRelevancyRange = 0xC0;
            static constexpr std::uintptr_t NumPawnsCulled = 0xC4;
            static constexpr std::uintptr_t bServerSystemEnabled = 0xC8;
            static constexpr std::uintptr_t bServerUsingOcclusionFilter = 0xC9;
            static constexpr std::uintptr_t OccludedLocations = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NumPawnsWithinRelevancyRange", 0xC0, "IntProperty"},
            {"NumPawnsCulled", 0xC4, "IntProperty"},
            {"bServerSystemEnabled", 0xC8, "BoolProperty"},
            {"bServerUsingOcclusionFilter", 0xC9, "BoolProperty"},
            {"OccludedLocations", 0xD0, "ArrayProperty"},
        }};
    };

    struct FortOcclusionNetRelevancyServerDebug
    {
        static constexpr std::string_view Name = "FortOcclusionNetRelevancyServerDebug";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerCurrentStats = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ServerCurrentStats", 0x278, "StructProperty"},
        }};
    };

    struct FortOcclusionNetRelevancyWorldSubsystem
    {
        static constexpr std::string_view Name = "FortOcclusionNetRelevancyWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AllPawns = 0xA8;
            static constexpr std::uintptr_t PawnClass = 0xB8;
            static constexpr std::uintptr_t PawnClassLoaded = 0xD8;
            static constexpr std::uintptr_t CollisionChannelForOcclusionTraces = 0xE0;
            static constexpr std::uintptr_t ServerDebugActor = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AllPawns", 0xA8, "ArrayProperty"},
            {"PawnClass", 0xB8, "SoftClassProperty"},
            {"PawnClassLoaded", 0xD8, "ClassProperty"},
            {"CollisionChannelForOcclusionTraces", 0xE0, "ByteProperty"},
            {"ServerDebugActor", 0xE8, "ObjectProperty"},
        }};
    };

    struct NetObjectGridOcclusionFilter
    {
        static constexpr std::string_view Name = "NetObjectGridOcclusionFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectGridWorldLocFilter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
