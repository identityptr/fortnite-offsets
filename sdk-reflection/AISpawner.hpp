#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AISpawner
{
    struct AISpawnerPreviewCosmeticDownloadComponent
    {
        static constexpr std::string_view Name = "AISpawnerPreviewCosmeticDownloadComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CandidateComponent = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CandidateComponent", 0xC0, "ObjectProperty"},
        }};
    };

    struct AISpawnerPreviewerComponent
    {
        static constexpr std::string_view Name = "AISpawnerPreviewerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerMannequinClass = 0x290;
            static constexpr std::uintptr_t AIPawnPreviewClass = 0x298;
            static constexpr std::uintptr_t DefaultCustomAnimationBPClass = 0x2A0;
            static constexpr std::uintptr_t RotationWhenFacingY = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerMannequinClass", 0x290, "ClassProperty"},
            {"AIPawnPreviewClass", 0x298, "ClassProperty"},
            {"DefaultCustomAnimationBPClass", 0x2A0, "ClassProperty"},
            {"RotationWhenFacingY", 0x2A8, "FloatProperty"},
        }};
    };

    struct CreaturePreviewActor
    {
        static constexpr std::string_view Name = "CreaturePreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewAssets = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviewAssets", 0x278, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_AISpawner
    {
        static constexpr std::string_view Name = "FortAthenaMutator_AISpawner";
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

    struct FortGameFeatureAction_AddSpawnerDeviceBindingTrack
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddSpawnerDeviceBindingTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnerDeviceClassPath = 0x28;
            static constexpr std::uintptr_t BindingTrackClassPath = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawnerDeviceClassPath", 0x28, "StructProperty"},
            {"BindingTrackClassPath", 0x40, "StructProperty"},
        }};
    };

}
