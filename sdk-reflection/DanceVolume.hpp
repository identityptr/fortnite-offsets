#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DanceVolume
{
    struct DanceSynchronizerComponent
    {
        static constexpr std::string_view Name = "DanceSynchronizerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldHalfOrDoubleTimeDances = 0xC0;
            static constexpr std::uintptr_t BeatInfo = 0xC4;
            static constexpr std::uintptr_t SyncMode = 0xCC;
            static constexpr std::uintptr_t Tempo = 0xD0;
            static constexpr std::uintptr_t OwnerPlayerPawn = 0xD8;
            static constexpr std::uintptr_t OwnerMeshComponent = 0xE0;
            static constexpr std::uintptr_t LeaderMeshComponent = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bShouldHalfOrDoubleTimeDances", 0xC0, "BoolProperty"},
            {"BeatInfo", 0xC4, "StructProperty"},
            {"SyncMode", 0xCC, "EnumProperty"},
            {"Tempo", 0xD0, "FloatProperty"},
            {"OwnerPlayerPawn", 0xD8, "ObjectProperty"},
            {"OwnerMeshComponent", 0xE0, "ObjectProperty"},
            {"LeaderMeshComponent", 0xE8, "ObjectProperty"},
        }};
    };

    struct DanceVolumeLibrary
    {
        static constexpr std::string_view Name = "DanceVolumeLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
