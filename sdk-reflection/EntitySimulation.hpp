#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EntitySimulation
{
    struct LocalizableMessageParameterAgent
    {
        static constexpr std::string_view Name = "LocalizableMessageParameterAgent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t PawnNetGuid = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"PawnNetGuid", 0x30, "UInt64Property"},
        }};
    };

    struct VerseSimulationSubsystem
    {
        static constexpr std::string_view Name = "VerseSimulationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackedAgents = 0x68;
            static constexpr std::uintptr_t TrackedAgentsByID = 0x78;
            static constexpr std::uintptr_t TrackedUsers = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TrackedAgents", 0x68, "MapProperty"},
            {"TrackedAgentsByID", 0x78, "MapProperty"},
            {"TrackedUsers", 0x88, "MapProperty"},
        }};
    };

}
