#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DeluluSpawningRuntime
{
    struct FortAthenaMutator_DeluluGameModeSpawning
    {
        static constexpr std::string_view Name = "FortAthenaMutator_DeluluGameModeSpawning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutomaticallyFinishInitialization = 0x2F0;
            static constexpr std::uintptr_t GameMsg_AircraftPhaseIntroMessage = 0x2F8;
            static constexpr std::uintptr_t Stinger_MatchStart = 0x348;
            static constexpr std::uintptr_t Stinger_MatchEnd = 0x358;
            static constexpr std::uintptr_t Stinger_MatchEndWin = 0x368;
            static constexpr std::uintptr_t Stinger_MatchEndLose = 0x378;
            static constexpr std::uintptr_t StingerAudioComponent = 0x398;
            static constexpr std::uintptr_t StingerEventForwarder = 0x3A0;
            static constexpr std::uintptr_t FortSquadStartActors = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bAutomaticallyFinishInitialization", 0x2F0, "BoolProperty"},
            {"GameMsg_AircraftPhaseIntroMessage", 0x2F8, "StructProperty"},
            {"Stinger_MatchStart", 0x348, "StructProperty"},
            {"Stinger_MatchEnd", 0x358, "StructProperty"},
            {"Stinger_MatchEndWin", 0x368, "StructProperty"},
            {"Stinger_MatchEndLose", 0x378, "StructProperty"},
            {"StingerAudioComponent", 0x398, "ObjectProperty"},
            {"StingerEventForwarder", 0x3A0, "ObjectProperty"},
            {"FortSquadStartActors", 0x3C0, "ArrayProperty"},
        }};
    };

    struct FortAthenaMutator_DeluluSpawning
    {
        static constexpr std::string_view Name = "FortAthenaMutator_DeluluSpawning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bGroupSquadSpawnsTogether = 0x418;
            static constexpr std::uintptr_t StormPhaseIDToUseForSpawning = 0x420;
            static constexpr std::uintptr_t StormPhaseRadiusMultToUseForSpawning = 0x448;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bGroupSquadSpawnsTogether", 0x418, "BoolProperty"},
            {"StormPhaseIDToUseForSpawning", 0x420, "StructProperty"},
            {"StormPhaseRadiusMultToUseForSpawning", 0x448, "StructProperty"},
        }};
    };

    struct FortControllerComponent_DeluluSpawning
    {
        static constexpr std::string_view Name = "FortControllerComponent_DeluluSpawning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnPlayerStart = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnPlayerStart", 0xF8, "ObjectProperty"},
        }};
    };

}
