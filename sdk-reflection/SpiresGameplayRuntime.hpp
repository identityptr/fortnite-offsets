#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpiresGameplayRuntime
{
    struct FortLWPPredictionComponent
    {
        static constexpr std::string_view Name = "FortLWPPredictionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ConditionCheckTickRate = 0xC0;
            static constexpr std::uintptr_t InitData = 0xE8;
            static constexpr std::uintptr_t PredictionConditionQueryState = 0x160;
            static constexpr std::uintptr_t CurrentState = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ConditionCheckTickRate", 0xC0, "StructProperty"},
            {"InitData", 0xE8, "StructProperty"},
            {"PredictionConditionQueryState", 0x160, "StructProperty"},
            {"CurrentState", 0x190, "EnumProperty"},
        }};
    };

    struct FortLivingWorldSpawnAction_TriggerPrediction
    {
        static constexpr std::string_view Name = "FortLivingWorldSpawnAction_TriggerPrediction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldSpawnAction";
        struct Offsets
        {
            static constexpr std::uintptr_t InitData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InitData", 0x28, "StructProperty"},
        }};
    };

    struct SpireEventPlayerComponent
    {
        static constexpr std::string_view Name = "SpireEventPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStartedParticipatingInSpireEvent = 0xC0;
            static constexpr std::uintptr_t OnStoppedParticipatingInSpireEvent = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnStartedParticipatingInSpireEvent", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnStoppedParticipatingInSpireEvent", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SpirePlayspace
    {
        static constexpr std::string_view Name = "SpirePlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t SpireBGA = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpireBGA", 0x670, "ObjectProperty"},
        }};
    };

}
