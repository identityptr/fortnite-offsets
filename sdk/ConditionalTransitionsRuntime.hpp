#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ConditionalTransitionsRuntime
{
    struct ConditionalReplicationFilterObject
    {
        static constexpr std::string_view Name = "ConditionalReplicationFilterObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PhasedTransitions = 0x278;
            static constexpr std::uintptr_t HashedID = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PhasedTransitions", 0x278, "StructProperty"},
            {"HashedID", 0x2E0, "StructProperty"},
        }};
    };

    struct ConditionalTransitionComponent
    {
        static constexpr std::string_view Name = "ConditionalTransitionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistentGuid = 0xC4;
            static constexpr std::uintptr_t ParticipationScope = 0xD8;
            static constexpr std::uintptr_t PersistenceHandling = 0xE8;
            static constexpr std::uintptr_t StartingPhase = 0xF8;
            static constexpr std::uintptr_t Phases = 0x100;
            static constexpr std::uintptr_t RuntimeObjectsToKeepInMemory = 0x110;
            static constexpr std::uintptr_t Client_QueuedPhaseEntries = 0x130;
            static constexpr std::uintptr_t PhaseCountPerTick = 0x150;
            static constexpr std::uintptr_t MaxTransitionsPerTick = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PersistentGuid", 0xC4, "StructProperty"},
            {"ParticipationScope", 0xD8, "StructProperty"},
            {"PersistenceHandling", 0xE8, "StructProperty"},
            {"StartingPhase", 0xF8, "NameProperty"},
            {"Phases", 0x100, "MapProperty"},
            {"RuntimeObjectsToKeepInMemory", 0x110, "ArrayProperty"},
            {"Client_QueuedPhaseEntries", 0x130, "ArrayProperty"},
            {"PhaseCountPerTick", 0x150, "MapProperty"},
            {"MaxTransitionsPerTick", 0x160, "IntProperty"},
        }};
    };

    struct FortConditionalTransitionComponent
    {
        static constexpr std::string_view Name = "FortConditionalTransitionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConditionalTransitionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bBypassZonePhaseCheck = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bBypassZonePhaseCheck", 0x168, "BoolProperty"},
        }};
    };

    struct GameStateComponent_PhaseObservation
    {
        static constexpr std::string_view Name = "GameStateComponent_PhaseObservation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicationObjects = 0xC0;
            static constexpr std::uintptr_t BatchedTransitionQueue = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReplicationObjects", 0xC0, "MapProperty"},
            {"BatchedTransitionQueue", 0xD0, "ArrayProperty"},
        }};
    };

}
