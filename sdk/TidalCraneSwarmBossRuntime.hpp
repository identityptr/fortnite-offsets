#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TidalCraneSwarmBossRuntime
{
    struct TidalCraneSwarmBoss
    {
        static constexpr std::string_view Name = "TidalCraneSwarmBoss";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CanBeSeenOffset = 0x948;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CanBeSeenOffset", 0x948, "StructProperty"},
        }};
    };

    struct TidalCraneSwarmBossAnimInstance
    {
        static constexpr std::string_view Name = "TidalCraneSwarmBossAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t LookAt = 0x4A0;
            static constexpr std::uintptr_t AOAlpha = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LookAt", 0x4A0, "StructProperty"},
            {"AOAlpha", 0x4B8, "FloatProperty"},
        }};
    };

    struct TidalCraneSwarmBossWeaponInterface
    {
        static constexpr std::string_view Name = "TidalCraneSwarmBossWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
