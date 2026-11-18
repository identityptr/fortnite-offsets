#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::KeepScoreRuntime
{
    struct FortWeaponKeepScore
    {
        static constexpr std::string_view Name = "FortWeaponKeepScore";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFireFailed = 0x2A98;
            static constexpr std::uintptr_t bCurrentAttackOffhand = 0x2AA8;
            static constexpr std::uintptr_t BulletPatternNumber = 0x2ACC;
            static constexpr std::uintptr_t bGateFireCall = 0x2AD0;
            static constexpr std::uintptr_t IsFiringGameplayTag = 0x2AD4;
            static constexpr std::uintptr_t MuzzleLocationOffset = 0x2AD8;
            static constexpr std::uintptr_t ReloadingTag = 0x2AF0;
            static constexpr std::uintptr_t ReloadAbilityEventTag = 0x2AF4;
            static constexpr std::uintptr_t FireAbilityEventTag = 0x2AF8;
            static constexpr std::uintptr_t bAllowAutoReload = 0x2B00;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnFireFailed", 0x2A98, "MulticastInlineDelegateProperty"},
            {"bCurrentAttackOffhand", 0x2AA8, "BoolProperty"},
            {"BulletPatternNumber", 0x2ACC, "IntProperty"},
            {"bGateFireCall", 0x2AD0, "BoolProperty"},
            {"IsFiringGameplayTag", 0x2AD4, "StructProperty"},
            {"MuzzleLocationOffset", 0x2AD8, "StructProperty"},
            {"ReloadingTag", 0x2AF0, "StructProperty"},
            {"ReloadAbilityEventTag", 0x2AF4, "StructProperty"},
            {"FireAbilityEventTag", 0x2AF8, "StructProperty"},
            {"bAllowAutoReload", 0x2B00, "StructProperty"},
        }};
    };

    struct TiredPanda_PlayerAnimInstance
    {
        static constexpr std::string_view Name = "TiredPanda_PlayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t AimPoseAlpha = 0x1180;
            static constexpr std::uintptr_t SquatAdditiveAlpha = 0x1184;
            static constexpr std::uintptr_t WaterReloadBlendAlpha = 0x1188;
            static constexpr std::uintptr_t bIsLeftHandAttack = 0x118C;
            static constexpr std::uintptr_t bIsSquatAdditive = 0x118C;
            static constexpr std::uintptr_t bIsWaterReload = 0x118C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AimPoseAlpha", 0x1180, "FloatProperty"},
            {"SquatAdditiveAlpha", 0x1184, "FloatProperty"},
            {"WaterReloadBlendAlpha", 0x1188, "FloatProperty"},
            {"bIsLeftHandAttack", 0x118C, "BoolProperty"},
            {"bIsSquatAdditive", 0x118C, "BoolProperty"},
            {"bIsWaterReload", 0x118C, "BoolProperty"},
        }};
    };

}
