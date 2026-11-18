#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SunRoseZeusGameplayRuntime
{
    struct BuildingGameplayActorZeusThunderstorm
    {
        static constexpr std::string_view Name = "BuildingGameplayActorZeusThunderstorm";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t Row_TelegraphDuration = 0x940;
            static constexpr std::uintptr_t Row_LightningStrikeFXDelay = 0x968;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Row_TelegraphDuration", 0x940, "StructProperty"},
            {"Row_LightningStrikeFXDelay", 0x968, "StructProperty"},
        }};
    };

    struct FortProjectileSunRoseLightning
    {
        static constexpr std::string_view Name = "FortProjectileSunRoseLightning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExplosionDamageGEs = 0xAF8;
            static constexpr std::uintptr_t ExplosionGELevel = 0xB08;
            static constexpr std::uintptr_t ExplosionTraceChannel = 0xB0C;
            static constexpr std::uintptr_t MaxHitsPerFrame = 0xB10;
            static constexpr std::uintptr_t ExplosionAsyncLOSTargetingHandle = 0xD38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExplosionDamageGEs", 0xAF8, "ArrayProperty"},
            {"ExplosionGELevel", 0xB08, "FloatProperty"},
            {"ExplosionTraceChannel", 0xB0C, "ByteProperty"},
            {"MaxHitsPerFrame", 0xB10, "StructProperty"},
            {"ExplosionAsyncLOSTargetingHandle", 0xD38, "StructProperty"},
        }};
    };

    struct SunRose_Zeus_Player_LayerAnimInstance
    {
        static constexpr std::string_view Name = "SunRose_Zeus_Player_LayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsThrowActive = 0x1180;
            static constexpr std::uintptr_t LightningAbilityActiveTag = 0x1184;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsThrowActive", 0x1180, "BoolProperty"},
            {"LightningAbilityActiveTag", 0x1184, "StructProperty"},
        }};
    };

    struct SunRose_Zeus_Weapon_Hand_AnimInstance
    {
        static constexpr std::string_view Name = "SunRose_Zeus_Weapon_Hand_AnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsThrow = 0x370;
            static constexpr std::uintptr_t LightningThrowMontageName = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsThrow", 0x370, "BoolProperty"},
            {"LightningThrowMontageName", 0x378, "StrProperty"},
        }};
    };

}
