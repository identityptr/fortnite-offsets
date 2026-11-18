#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MidMatchObjectivesGameplayRuntime
{
    struct FortGameStateComponent_MidMatchObjectiveParent
    {
        static constexpr std::string_view Name = "FortGameStateComponent_MidMatchObjectiveParent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectiveCompletedStatName = 0xC0;
            static constexpr std::uintptr_t bUseDeferredActivation = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ObjectiveCompletedStatName", 0xC0, "NameProperty"},
            {"bUseDeferredActivation", 0xC4, "BoolProperty"},
        }};
    };

    struct FortGameStateComponent_RandomizedMidMatchObjective
    {
        static constexpr std::string_view Name = "FortGameStateComponent_RandomizedMidMatchObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bActivateMMORandomization = 0xC0;
            static constexpr std::uintptr_t bUniqueRandom = 0xE8;
            static constexpr std::uintptr_t ActivateOnSafeZoneState = 0x110;
            static constexpr std::uintptr_t MMObjWeightMap = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bActivateMMORandomization", 0xC0, "StructProperty"},
            {"bUniqueRandom", 0xE8, "StructProperty"},
            {"ActivateOnSafeZoneState", 0x110, "StructProperty"},
            {"MMObjWeightMap", 0x138, "MapProperty"},
        }};
    };

}
