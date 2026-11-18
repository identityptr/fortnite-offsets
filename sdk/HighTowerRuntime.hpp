#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HighTowerRuntime
{
    struct FortAthenaMutator_HighTowerAbilityIntro
    {
        static constexpr std::string_view Name = "FortAthenaMutator_HighTowerAbilityIntro";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ShowAbilityIntroTag = 0x410;
            static constexpr std::uintptr_t bPlayOnlyOnce = 0x414;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShowAbilityIntroTag", 0x410, "StructProperty"},
            {"bPlayOnlyOnce", 0x414, "BoolProperty"},
        }};
    };

    struct FortProjectileAthena_HighTowerDateCombo
    {
        static constexpr std::string_view Name = "FortProjectileAthena_HighTowerDateCombo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticsContainer = 0xBA0;
            static constexpr std::uintptr_t CosmeticStartingOffset = 0xBA8;
            static constexpr std::uintptr_t CosmeticLerpDuration = 0xBB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CosmeticsContainer", 0xBA0, "ObjectProperty"},
            {"CosmeticStartingOffset", 0xBA8, "FloatProperty"},
            {"CosmeticLerpDuration", 0xBB0, "StructProperty"},
        }};
    };

    struct HighTowerDateLayerAnimInstance
    {
        static constexpr std::string_view Name = "HighTowerDateLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsFiringLeft = 0x1180;
            static constexpr std::uintptr_t bIsFiringRight = 0x1181;
            static constexpr std::uintptr_t bShouldPlayCustomJumpLand = 0x1182;
            static constexpr std::uintptr_t bMontageActive = 0x1183;
            static constexpr std::uintptr_t bIsBoostJumping = 0x1184;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsFiringLeft", 0x1180, "BoolProperty"},
            {"bIsFiringRight", 0x1181, "BoolProperty"},
            {"bShouldPlayCustomJumpLand", 0x1182, "BoolProperty"},
            {"bMontageActive", 0x1183, "BoolProperty"},
            {"bIsBoostJumping", 0x1184, "BoolProperty"},
        }};
    };

}
