#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MidMatchAssignedGameplayRuntime
{
    struct FortGameStateComponent_AssignedObjective
    {
        static constexpr std::string_view Name = "FortGameStateComponent_AssignedObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_MidMatchObjectiveParent";
        struct Offsets
        {
            static constexpr std::uintptr_t IdealNumSquadsPerObjective = 0xC8;
            static constexpr std::uintptr_t bAllowUnopposedSquads = 0xF0;
            static constexpr std::uintptr_t MinPairedSquadDistForUnopposed = 0x118;
            static constexpr std::uintptr_t UnopposedSquad_FakeSquadMaxSafeZonePct = 0x140;
            static constexpr std::uintptr_t UnopposedSquad_FakeSquadMinDistToSquad = 0x168;
            static constexpr std::uintptr_t SpawnObjectivesInsideSafeZonePct = 0x190;
            static constexpr std::uintptr_t AssignedObjectiveLocationEnvQuery = 0x1B8;
            static constexpr std::uintptr_t AssignedObjectives = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"IdealNumSquadsPerObjective", 0xC8, "StructProperty"},
            {"bAllowUnopposedSquads", 0xF0, "StructProperty"},
            {"MinPairedSquadDistForUnopposed", 0x118, "StructProperty"},
            {"UnopposedSquad_FakeSquadMaxSafeZonePct", 0x140, "StructProperty"},
            {"UnopposedSquad_FakeSquadMinDistToSquad", 0x168, "StructProperty"},
            {"SpawnObjectivesInsideSafeZonePct", 0x190, "StructProperty"},
            {"AssignedObjectiveLocationEnvQuery", 0x1B8, "SoftObjectProperty"},
            {"AssignedObjectives", 0x1D8, "ArrayProperty"},
        }};
    };

    struct FortQueryContext_SpawnedObjectiveLocations
    {
        static constexpr std::string_view Name = "FortQueryContext_SpawnedObjectiveLocations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_SquadAvgLocationsForObjective
    {
        static constexpr std::string_view Name = "FortQueryContext_SquadAvgLocationsForObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryTest_ClosestPlayersToObjectiveDeltaDistance
    {
        static constexpr std::string_view Name = "FortQueryTest_ClosestPlayersToObjectiveDeltaDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDistance2D = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseDistance2D", 0x1F8, "BoolProperty"},
        }};
    };

}
