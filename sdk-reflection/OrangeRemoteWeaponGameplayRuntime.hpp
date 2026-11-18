#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OrangeRemoteWeaponGameplayRuntime
{
    struct FortActorComponent_RicochetAimPrediction
    {
        static constexpr std::string_view Name = "FortActorComponent_RicochetAimPrediction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxDistance = 0x1B8;
            static constexpr std::uintptr_t TraceChannel = 0x1BC;
            static constexpr std::uintptr_t OnPredictedAimUpdated = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxDistance", 0x1B8, "FloatProperty"},
            {"TraceChannel", 0x1BC, "ByteProperty"},
            {"OnPredictedAimUpdated", 0x1C0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct OrangeRemoteTripleBarrelShotgunWeaponAnimInstance
    {
        static constexpr std::string_view Name = "OrangeRemoteTripleBarrelShotgunWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bFirePoseToPassThrough = 0x370;
            static constexpr std::uintptr_t TimeSinceLastFired = 0x378;
            static constexpr std::uintptr_t FirePoseTimer = 0x380;
            static constexpr std::uintptr_t bIsFiring = 0x388;
            static constexpr std::uintptr_t ExitWeaponPoseDelay = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bFirePoseToPassThrough", 0x370, "BoolProperty"},
            {"TimeSinceLastFired", 0x378, "DoubleProperty"},
            {"FirePoseTimer", 0x380, "DoubleProperty"},
            {"bIsFiring", 0x388, "BoolProperty"},
            {"ExitWeaponPoseDelay", 0x390, "DoubleProperty"},
        }};
    };

    struct RicochetPistolAnimInterface
    {
        static constexpr std::string_view Name = "RicochetPistolAnimInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RicochetPistolWeaponAnimInstance
    {
        static constexpr std::string_view Name = "RicochetPistolWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t SightAlpha = 0x370;
            static constexpr std::uintptr_t bIsEmpty = 0x378;
            static constexpr std::uintptr_t bIsReloading_BP = 0x379;
            static constexpr std::uintptr_t bIsFired = 0x37A;
            static constexpr std::uintptr_t bIsCharging = 0x37B;
            static constexpr std::uintptr_t bIsChargingMax = 0x37C;
            static constexpr std::uintptr_t bIsLoaded = 0x37D;
            static constexpr std::uintptr_t IsTargetingTagName = 0x380;
            static constexpr std::uintptr_t PistolPlayerLayerClassType = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SightAlpha", 0x370, "DoubleProperty"},
            {"bIsEmpty", 0x378, "BoolProperty"},
            {"bIsReloading_BP", 0x379, "BoolProperty"},
            {"bIsFired", 0x37A, "BoolProperty"},
            {"bIsCharging", 0x37B, "BoolProperty"},
            {"bIsChargingMax", 0x37C, "BoolProperty"},
            {"bIsLoaded", 0x37D, "BoolProperty"},
            {"IsTargetingTagName", 0x380, "StructProperty"},
            {"PistolPlayerLayerClassType", 0x388, "ClassProperty"},
        }};
    };

}
