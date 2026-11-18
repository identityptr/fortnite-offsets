#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpritePityRuntime
{
    struct FortGameStateComponent_SpritePityContainerLoot
    {
        static constexpr std::string_view Name = "FortGameStateComponent_SpritePityContainerLoot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PityTrackerClass = 0xC8;
            static constexpr std::uintptr_t ContainerTagQuery = 0xD0;
            static constexpr std::uintptr_t PityLootTierGroup = 0x118;
            static constexpr std::uintptr_t EnablePity = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PityTrackerClass", 0xC8, "ClassProperty"},
            {"ContainerTagQuery", 0xD0, "StructProperty"},
            {"PityLootTierGroup", 0x118, "NameProperty"},
            {"EnablePity", 0x120, "StructProperty"},
        }};
    };

    struct FortPlayerStateComponent_SpritePityScore
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_SpritePityScore";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PityScoreThreshold = 0xC0;
            static constexpr std::uintptr_t DefaultPityIncrementOnMiss = 0xF0;
            static constexpr std::uintptr_t ScoreModifierOnOwnedRareDrop = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PityScoreThreshold", 0xC0, "StructProperty"},
            {"DefaultPityIncrementOnMiss", 0xF0, "StructProperty"},
            {"ScoreModifierOnOwnedRareDrop", 0x120, "StructProperty"},
        }};
    };

    struct FortSpritePityUtilInterface
    {
        static constexpr std::string_view Name = "FortSpritePityUtilInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
