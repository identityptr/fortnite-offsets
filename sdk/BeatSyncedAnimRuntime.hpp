#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BeatSyncedAnimRuntime
{
    struct AnimNotify_BeatMarker
    {
        static constexpr std::string_view Name = "AnimNotify_BeatMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BeatSyncedAnimLibrary
    {
        static constexpr std::string_view Name = "BeatSyncedAnimLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FMBeatTimingUtils
    {
        static constexpr std::string_view Name = "FMBeatTimingUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MontageBeatSyncComponent
    {
        static constexpr std::string_view Name = "MontageBeatSyncComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakMusicClockPtr = 0xE0;
            static constexpr std::uintptr_t WeakMusicEventPtr = 0xE8;
            static constexpr std::uintptr_t bBeatSyncingPermission = 0xF0;
            static constexpr std::uintptr_t OwnerFortPlayerPawn = 0xF8;
            static constexpr std::uintptr_t OwnerSkeletalMeshActor = 0x100;
            static constexpr std::uintptr_t OwnerMeshComponent = 0x108;
            static constexpr std::uintptr_t ActiveMontageInfo = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"WeakMusicClockPtr", 0xE0, "WeakObjectProperty"},
            {"WeakMusicEventPtr", 0xE8, "WeakObjectProperty"},
            {"bBeatSyncingPermission", 0xF0, "BoolProperty"},
            {"OwnerFortPlayerPawn", 0xF8, "ObjectProperty"},
            {"OwnerSkeletalMeshActor", 0x100, "ObjectProperty"},
            {"OwnerMeshComponent", 0x108, "ObjectProperty"},
            {"ActiveMontageInfo", 0x110, "StructProperty"},
        }};
    };

}
