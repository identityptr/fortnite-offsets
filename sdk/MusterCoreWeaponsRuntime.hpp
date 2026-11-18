#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MusterCoreWeaponsRuntime
{
    struct FortExCaliberProjectile
    {
        static constexpr std::string_view Name = "FortExCaliberProjectile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t bSimulationRunning = 0xB88;
            static constexpr std::uintptr_t TimeToExplode = 0xB90;
            static constexpr std::uintptr_t bHasStopped = 0xBB8;
            static constexpr std::uintptr_t HitNormal = 0xBC0;
            static constexpr std::uintptr_t SurfaceType = 0xBD8;
            static constexpr std::uintptr_t SwordRevealMaterialParam = 0xBDC;
            static constexpr std::uintptr_t EmissiveColorMaterialParam = 0xBE0;
            static constexpr std::uintptr_t HDRMultiplierMaterialParam = 0xBE4;
            static constexpr std::uintptr_t EmissiveBlueColor = 0xBE8;
            static constexpr std::uintptr_t EmissivePurpleColor = 0xBF8;
            static constexpr std::uintptr_t MinPitchForRotationAdjustment = 0xC08;
            static constexpr std::uintptr_t MaxPitchForRotationAdjustment = 0xC0C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bSimulationRunning", 0xB88, "BoolProperty"},
            {"TimeToExplode", 0xB90, "StructProperty"},
            {"bHasStopped", 0xBB8, "BoolProperty"},
            {"HitNormal", 0xBC0, "StructProperty"},
            {"SurfaceType", 0xBD8, "ByteProperty"},
            {"SwordRevealMaterialParam", 0xBDC, "NameProperty"},
            {"EmissiveColorMaterialParam", 0xBE0, "NameProperty"},
            {"HDRMultiplierMaterialParam", 0xBE4, "NameProperty"},
            {"EmissiveBlueColor", 0xBE8, "StructProperty"},
            {"EmissivePurpleColor", 0xBF8, "StructProperty"},
            {"MinPitchForRotationAdjustment", 0xC08, "FloatProperty"},
            {"MaxPitchForRotationAdjustment", 0xC0C, "FloatProperty"},
        }};
    };

    struct FortMusterExplosiveARProjectile
    {
        static constexpr std::string_view Name = "FortMusterExplosiveARProjectile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t HitLocation = 0xB88;
            static constexpr std::uintptr_t HitRotation = 0xBA0;
            static constexpr std::uintptr_t bHitPlayer = 0xBB8;
            static constexpr std::uintptr_t DrawDistance = 0xBBC;
            static constexpr std::uintptr_t ProjectileTrail = 0xBC0;
            static constexpr std::uintptr_t NS_Explosion = 0xBC8;
            static constexpr std::uintptr_t FeedbackCue = 0xBD0;
            static constexpr std::uintptr_t DecalSize = 0xBD8;
            static constexpr std::uintptr_t DecalLifespan = 0xBF0;
            static constexpr std::uintptr_t TimebeforeDecalFadeOut = 0xBF4;
            static constexpr std::uintptr_t DecalFadeOutDuration = 0xBF8;
            static constexpr std::uintptr_t DecalMaterial = 0xC00;
            static constexpr std::uintptr_t Cue_CloseSound = 0xC08;
            static constexpr std::uintptr_t Cue_DistantSound = 0xC10;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"HitLocation", 0xB88, "StructProperty"},
            {"HitRotation", 0xBA0, "StructProperty"},
            {"bHitPlayer", 0xBB8, "BoolProperty"},
            {"DrawDistance", 0xBBC, "FloatProperty"},
            {"ProjectileTrail", 0xBC0, "ObjectProperty"},
            {"NS_Explosion", 0xBC8, "ObjectProperty"},
            {"FeedbackCue", 0xBD0, "StructProperty"},
            {"DecalSize", 0xBD8, "StructProperty"},
            {"DecalLifespan", 0xBF0, "FloatProperty"},
            {"TimebeforeDecalFadeOut", 0xBF4, "FloatProperty"},
            {"DecalFadeOutDuration", 0xBF8, "FloatProperty"},
            {"DecalMaterial", 0xC00, "ObjectProperty"},
            {"Cue_CloseSound", 0xC08, "ObjectProperty"},
            {"Cue_DistantSound", 0xC10, "ObjectProperty"},
        }};
    };

    struct MusterCoreWeaponsAnimInstance
    {
        static constexpr std::string_view Name = "MusterCoreWeaponsAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningWeapon = 0x260;
            static constexpr std::uintptr_t bIsShotFired = 0x268;
            static constexpr std::uintptr_t LocalAmmoCount = 0x26C;
            static constexpr std::uintptr_t CylinderMaskAlpha = 0x270;
            static constexpr std::uintptr_t bIsAmmoCountTwo = 0x274;
            static constexpr std::uintptr_t bIsAmmoCountOne = 0x275;
            static constexpr std::uintptr_t bStateRuleFromFullToTwoAmmo = 0x276;
            static constexpr std::uintptr_t bStateRuleFromTwoToOneAmmo = 0x277;
            static constexpr std::uintptr_t bStateRuleFromOneToZero = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OwningWeapon", 0x260, "ObjectProperty"},
            {"bIsShotFired", 0x268, "BoolProperty"},
            {"LocalAmmoCount", 0x26C, "IntProperty"},
            {"CylinderMaskAlpha", 0x270, "FloatProperty"},
            {"bIsAmmoCountTwo", 0x274, "BoolProperty"},
            {"bIsAmmoCountOne", 0x275, "BoolProperty"},
            {"bStateRuleFromFullToTwoAmmo", 0x276, "BoolProperty"},
            {"bStateRuleFromTwoToOneAmmo", 0x277, "BoolProperty"},
            {"bStateRuleFromOneToZero", 0x278, "BoolProperty"},
        }};
    };

}
