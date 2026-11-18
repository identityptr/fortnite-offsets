#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoEnemiesHedgeMaltRuntime
{
    struct HedgeMaltAnimationSharingStateProcessor
    {
        static constexpr std::string_view Name = "HedgeMaltAnimationSharingStateProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimationSharingStateProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t IdleVelocityThreshold = 0x48;
            static constexpr std::uintptr_t FallingZVelocityThreshold = 0x4C;
            static constexpr std::uintptr_t AnimStateLoopingGameplayCues = 0x50;
            static constexpr std::uintptr_t AdditiveAnimStates = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"IdleVelocityThreshold", 0x48, "FloatProperty"},
            {"FallingZVelocityThreshold", 0x4C, "FloatProperty"},
            {"AnimStateLoopingGameplayCues", 0x50, "MapProperty"},
            {"AdditiveAnimStates", 0x60, "SetProperty"},
        }};
    };

    struct JunoBTService_HedgeMaltOffNavigationDataDespawn
    {
        static constexpr std::string_view Name = "JunoBTService_HedgeMaltOffNavigationDataDespawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t AgentIsOffNavigationDataKey = 0x70;
            static constexpr std::uintptr_t OffNavigationDespawnTime = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AgentIsOffNavigationDataKey", 0x70, "StructProperty"},
            {"OffNavigationDespawnTime", 0x98, "StructProperty"},
        }};
    };

    struct JunoHedgeMaltDeimosPawnComponent
    {
        static constexpr std::string_view Name = "JunoHedgeMaltDeimosPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DeathCleanupGameplayCueTag = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeathCleanupGameplayCueTag", 0xC8, "StructProperty"},
        }};
    };

}
