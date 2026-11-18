#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BRPlaylistsRuntime
{
    struct FortAIMovementModifier_ZeroBuild
    {
        static constexpr std::string_view Name = "FortAIMovementModifier_ZeroBuild";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIMovementModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SlopeThresholdDeg = 0x38;
            static constexpr std::uintptr_t PickaxeSlapTagQuery = 0x60;
            static constexpr std::uintptr_t CachedSlopeThresholdSin = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SlopeThresholdDeg", 0x38, "StructProperty"},
            {"PickaxeSlapTagQuery", 0x60, "StructProperty"},
            {"CachedSlopeThresholdSin", 0xA8, "FloatProperty"},
        }};
    };

    struct FortAIWeaponModifier_ZeroBuild
    {
        static constexpr std::string_view Name = "FortAIWeaponModifier_ZeroBuild";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIWeaponModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PickaxeSlapTagQuery = 0x38;
            static constexpr std::uintptr_t InfiniteAmmoDelay = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PickaxeSlapTagQuery", 0x38, "StructProperty"},
            {"InfiniteAmmoDelay", 0x80, "StructProperty"},
        }};
    };

}
