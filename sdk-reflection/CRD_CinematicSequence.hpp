#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_CinematicSequence
{
    struct CinematicSequenceDeviceBase
    {
        static constexpr std::string_view Name = "CinematicSequenceDeviceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t AISpawnerDeviceClassPath = 0xB98;
            static constexpr std::uintptr_t Sequence = 0xBB0;
            static constexpr std::uintptr_t LevelSequenceActor = 0xBB8;
            static constexpr std::uintptr_t InstigatingController = 0xBC0;
            static constexpr std::uintptr_t InstigatingTeam = 0xBC8;
            static constexpr std::uintptr_t bAutoPlay = 0xBCC;
            static constexpr std::uintptr_t bLoopPlayback = 0xBCC;
            static constexpr std::uintptr_t bOverrideReplicationBehavior = 0xBCC;
            static constexpr std::uintptr_t EnabledOnPhase = 0xBD0;
            static constexpr std::uintptr_t Visibility = 0xBD1;
            static constexpr std::uintptr_t bLevelSequenceActorAlwaysRelevant = 0xBD2;
            static constexpr std::uintptr_t PlayRate = 0xBD4;
            static constexpr std::uintptr_t ShowHUDDuringCinematic = 0xBD8;
            static constexpr std::uintptr_t DisablePlayerInput = 0xBD9;
            static constexpr std::uintptr_t FinishCompletionStateOverride = 0xBDA;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"AISpawnerDeviceClassPath", 0xB98, "StructProperty"},
            {"Sequence", 0xBB0, "ObjectProperty"},
            {"LevelSequenceActor", 0xBB8, "ObjectProperty"},
            {"InstigatingController", 0xBC0, "ObjectProperty"},
            {"InstigatingTeam", 0xBC8, "ByteProperty"},
            {"bAutoPlay", 0xBCC, "BoolProperty"},
            {"bLoopPlayback", 0xBCC, "BoolProperty"},
            {"bOverrideReplicationBehavior", 0xBCC, "BoolProperty"},
            {"EnabledOnPhase", 0xBD0, "EnumProperty"},
            {"Visibility", 0xBD1, "EnumProperty"},
            {"bLevelSequenceActorAlwaysRelevant", 0xBD2, "BoolProperty"},
            {"PlayRate", 0xBD4, "FloatProperty"},
            {"ShowHUDDuringCinematic", 0xBD8, "EnumProperty"},
            {"DisablePlayerInput", 0xBD9, "EnumProperty"},
            {"FinishCompletionStateOverride", 0xBDA, "EnumProperty"},
        }};
    };

}
