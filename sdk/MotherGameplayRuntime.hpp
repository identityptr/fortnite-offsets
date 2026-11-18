#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MotherGameplayRuntime
{
    struct FortBaseAnimInstance_CageSaddle
    {
        static constexpr std::string_view Name = "FortBaseAnimInstance_CageSaddle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AsFortSphericalVehicle = 0x340;
            static constexpr std::uintptr_t bIsOnGround = 0x348;
            static constexpr std::uintptr_t RemappedPitch = 0x34C;
            static constexpr std::uintptr_t CurrentRoll = 0x350;
            static constexpr std::uintptr_t LockedRoll = 0x354;
            static constexpr std::uintptr_t bHeadShouldBend = 0x358;
            static constexpr std::uintptr_t bFootShouldBend = 0x359;
            static constexpr std::uintptr_t BodyGroundOffset = 0x360;
            static constexpr std::uintptr_t MinClampPitchInRange = 0x378;
            static constexpr std::uintptr_t MinClampPitchOutRange = 0x388;
            static constexpr std::uintptr_t MaxClampPitchInRange = 0x398;
            static constexpr std::uintptr_t MaxClampPitchOutRange = 0x3A8;
            static constexpr std::uintptr_t HeadAlphaInterpSpeed = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"AsFortSphericalVehicle", 0x340, "ObjectProperty"},
            {"bIsOnGround", 0x348, "BoolProperty"},
            {"RemappedPitch", 0x34C, "FloatProperty"},
            {"CurrentRoll", 0x350, "FloatProperty"},
            {"LockedRoll", 0x354, "FloatProperty"},
            {"bHeadShouldBend", 0x358, "BoolProperty"},
            {"bFootShouldBend", 0x359, "BoolProperty"},
            {"BodyGroundOffset", 0x360, "StructProperty"},
            {"MinClampPitchInRange", 0x378, "StructProperty"},
            {"MinClampPitchOutRange", 0x388, "StructProperty"},
            {"MaxClampPitchInRange", 0x398, "StructProperty"},
            {"MaxClampPitchOutRange", 0x3A8, "StructProperty"},
            {"HeadAlphaInterpSpeed", 0x3B8, "FloatProperty"},
        }};
    };

    struct FortCabbageIglooVehicle
    {
        static constexpr std::string_view Name = "FortCabbageIglooVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortOctopusVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheDriverCameraShake = 0x2090;
            static constexpr std::uintptr_t BounceContactRepulsionForce = 0x2098;
            static constexpr std::uintptr_t BoostForce = 0x209C;
            static constexpr std::uintptr_t MaxVerticalBoostForce = 0x20A0;
            static constexpr std::uintptr_t BoostSpeedKmh = 0x20A4;
            static constexpr std::uintptr_t BaseSphericalDriveParams = 0x20A8;
            static constexpr std::uintptr_t BaseTowhookParams = 0x20F0;
            static constexpr std::uintptr_t TowhookSpringDeformationRateOnGround = 0x21C0;
            static constexpr std::uintptr_t bAutoRetractGrapple = 0x21C4;
            static constexpr std::uintptr_t bCanHoldGrapple = 0x21C5;
            static constexpr std::uintptr_t TowhookInterpSpeed = 0x21C8;
            static constexpr std::uintptr_t TowhookInterpMaxPercentPerSecond = 0x21CC;
            static constexpr std::uintptr_t TowhookMaxInvalidateTargetAngleDeg = 0x21D0;
            static constexpr std::uintptr_t TowhookMaxInvalidateTargetDot = 0x21D4;
            static constexpr std::uintptr_t InternalBlockerCollisionName = 0x21D8;
            static constexpr std::uintptr_t ShellRotationInterpSpeed = 0x21DC;
            static constexpr std::uintptr_t BoostBounceAction = 0x21E0;
            static constexpr std::uintptr_t ProjectileTraceChannel = 0x22BC;
            static constexpr std::uintptr_t ProjectileSpeedKmh = 0x22C0;
            static constexpr std::uintptr_t OnTowhookShot = 0x22C8;
            static constexpr std::uintptr_t OnTowhookAttached = 0x22D8;
            static constexpr std::uintptr_t OnTowhookDetached = 0x22E8;
            static constexpr std::uintptr_t OnTowhookMissed = 0x22F8;
            static constexpr std::uintptr_t OnTowhookHolstered = 0x2308;
            static constexpr std::uintptr_t OnTowhookYanked = 0x2318;
            static constexpr std::uintptr_t OnExtendToggled = 0x2328;
            static constexpr std::uintptr_t ReplicatedAttachState = 0x2338;
            static constexpr std::uintptr_t FortOctopusVehicleConfigs = 0x23A8;
            static constexpr std::uintptr_t ShellRotation = 0x2530;
            static constexpr std::uintptr_t CachedCameraDir = 0x2590;
            static constexpr std::uintptr_t TowhookModel = 0x2678;
            static constexpr std::uintptr_t TowhookAimDir = 0x2AC0;
            static constexpr std::uintptr_t NetTowhookAimDir = 0x2B80;
            static constexpr std::uintptr_t CachedContactPoints = 0x2B98;
            static constexpr std::uintptr_t CacheCoilIdleTopR = 0x2BA8;
            static constexpr std::uintptr_t CacheCoilIdleTopL = 0x2BB0;
            static constexpr std::uintptr_t CacheCoilIdleBottomR = 0x2BB8;
            static constexpr std::uintptr_t CacheCoilIdleBottomL = 0x2BC0;
            static constexpr std::uintptr_t CacheBoostFX = 0x2BC8;
            static constexpr std::uintptr_t CacheDustFX = 0x2BD0;
            static constexpr std::uintptr_t CacheAudioMovement = 0x2BD8;
            static constexpr std::uintptr_t CacheAudioWind = 0x2BE0;
            static constexpr std::uintptr_t CacheAudioTowCable = 0x2BE8;
        };

        inline static constexpr std::array<PropertyInfo, 43> Properties{{
            {"CacheDriverCameraShake", 0x2090, "ObjectProperty"},
            {"BounceContactRepulsionForce", 0x2098, "FloatProperty"},
            {"BoostForce", 0x209C, "FloatProperty"},
            {"MaxVerticalBoostForce", 0x20A0, "FloatProperty"},
            {"BoostSpeedKmh", 0x20A4, "FloatProperty"},
            {"BaseSphericalDriveParams", 0x20A8, "StructProperty"},
            {"BaseTowhookParams", 0x20F0, "StructProperty"},
            {"TowhookSpringDeformationRateOnGround", 0x21C0, "FloatProperty"},
            {"bAutoRetractGrapple", 0x21C4, "BoolProperty"},
            {"bCanHoldGrapple", 0x21C5, "BoolProperty"},
            {"TowhookInterpSpeed", 0x21C8, "FloatProperty"},
            {"TowhookInterpMaxPercentPerSecond", 0x21CC, "FloatProperty"},
            {"TowhookMaxInvalidateTargetAngleDeg", 0x21D0, "FloatProperty"},
            {"TowhookMaxInvalidateTargetDot", 0x21D4, "FloatProperty"},
            {"InternalBlockerCollisionName", 0x21D8, "NameProperty"},
            {"ShellRotationInterpSpeed", 0x21DC, "FloatProperty"},
            {"BoostBounceAction", 0x21E0, "StructProperty"},
            {"ProjectileTraceChannel", 0x22BC, "ByteProperty"},
            {"ProjectileSpeedKmh", 0x22C0, "FloatProperty"},
            {"OnTowhookShot", 0x22C8, "MulticastInlineDelegateProperty"},
            {"OnTowhookAttached", 0x22D8, "MulticastInlineDelegateProperty"},
            {"OnTowhookDetached", 0x22E8, "MulticastInlineDelegateProperty"},
            {"OnTowhookMissed", 0x22F8, "MulticastInlineDelegateProperty"},
            {"OnTowhookHolstered", 0x2308, "MulticastInlineDelegateProperty"},
            {"OnTowhookYanked", 0x2318, "MulticastInlineDelegateProperty"},
            {"OnExtendToggled", 0x2328, "MulticastInlineDelegateProperty"},
            {"ReplicatedAttachState", 0x2338, "StructProperty"},
            {"FortOctopusVehicleConfigs", 0x23A8, "ObjectProperty"},
            {"ShellRotation", 0x2530, "StructProperty"},
            {"CachedCameraDir", 0x2590, "StructProperty"},
            {"TowhookModel", 0x2678, "StructProperty"},
            {"TowhookAimDir", 0x2AC0, "StructProperty"},
            {"NetTowhookAimDir", 0x2B80, "StructProperty"},
            {"CachedContactPoints", 0x2B98, "ArrayProperty"},
            {"CacheCoilIdleTopR", 0x2BA8, "ObjectProperty"},
            {"CacheCoilIdleTopL", 0x2BB0, "ObjectProperty"},
            {"CacheCoilIdleBottomR", 0x2BB8, "ObjectProperty"},
            {"CacheCoilIdleBottomL", 0x2BC0, "ObjectProperty"},
            {"CacheBoostFX", 0x2BC8, "ObjectProperty"},
            {"CacheDustFX", 0x2BD0, "ObjectProperty"},
            {"CacheAudioMovement", 0x2BD8, "ObjectProperty"},
            {"CacheAudioWind", 0x2BE0, "ObjectProperty"},
            {"CacheAudioTowCable", 0x2BE8, "ObjectProperty"},
        }};
    };

    struct FortGameplayCueNotifyLoop_Goop
    {
        static constexpr std::string_view Name = "FortGameplayCueNotifyLoop_Goop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedParamName = 0xC58;
            static constexpr std::uintptr_t IsFallingParamName = 0xC5C;
            static constexpr std::uintptr_t SpeedMapRangeClamped = 0xC60;
            static constexpr std::uintptr_t InterpSpeed = 0xC80;
            static constexpr std::uintptr_t LoopingAudioComponent = 0xC88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SpeedParamName", 0xC58, "NameProperty"},
            {"IsFallingParamName", 0xC5C, "NameProperty"},
            {"SpeedMapRangeClamped", 0xC60, "StructProperty"},
            {"InterpSpeed", 0xC80, "FloatProperty"},
            {"LoopingAudioComponent", 0xC88, "ObjectProperty"},
        }};
    };

    struct GravityGunTargetTrackingComponent
    {
        static constexpr std::string_view Name = "GravityGunTargetTrackingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowLargeObjects = 0xC0;
            static constexpr std::uintptr_t AllowMultipleGrabbers = 0xE8;
            static constexpr std::uintptr_t AllowVehicles = 0x110;
            static constexpr std::uintptr_t AllowPickups = 0x138;
            static constexpr std::uintptr_t AllowProjectiles = 0x160;
            static constexpr std::uintptr_t AllowForay = 0x188;
            static constexpr std::uintptr_t AllowWhileInVehicle = 0x1B0;
            static constexpr std::uintptr_t GrabbedByGravityGunTagName = 0x1D8;
            static constexpr std::uintptr_t InvalidTargetTags = 0x1E0;
            static constexpr std::uintptr_t TargetIsPlayerTag = 0x200;
            static constexpr std::uintptr_t TargetIsAlreadyGrabbedTag = 0x220;
            static constexpr std::uintptr_t TargetIsOwnVehicleTag = 0x240;
            static constexpr std::uintptr_t FoundTargetDelegate = 0x260;
            static constexpr std::uintptr_t DeactivateReticleDelegate = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"AllowLargeObjects", 0xC0, "StructProperty"},
            {"AllowMultipleGrabbers", 0xE8, "StructProperty"},
            {"AllowVehicles", 0x110, "StructProperty"},
            {"AllowPickups", 0x138, "StructProperty"},
            {"AllowProjectiles", 0x160, "StructProperty"},
            {"AllowForay", 0x188, "StructProperty"},
            {"AllowWhileInVehicle", 0x1B0, "StructProperty"},
            {"GrabbedByGravityGunTagName", 0x1D8, "NameProperty"},
            {"InvalidTargetTags", 0x1E0, "StructProperty"},
            {"TargetIsPlayerTag", 0x200, "StructProperty"},
            {"TargetIsAlreadyGrabbedTag", 0x220, "StructProperty"},
            {"TargetIsOwnVehicleTag", 0x240, "StructProperty"},
            {"FoundTargetDelegate", 0x260, "MulticastInlineDelegateProperty"},
            {"DeactivateReticleDelegate", 0x270, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PropGunFunctionLibrary
    {
        static constexpr std::string_view Name = "PropGunFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReactorGradeGameplayCue_ChargeUp
    {
        static constexpr std::string_view Name = "ReactorGradeGameplayCue_ChargeUp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t Pawn = 0xC58;
            static constexpr std::uintptr_t CachedAimLocationComponent = 0xC60;
            static constexpr std::uintptr_t FoundEndPoint = 0xC68;
            static constexpr std::uintptr_t MinHitDistance = 0xC80;
            static constexpr std::uintptr_t HitObjectsLimit = 0xCA8;
            static constexpr std::uintptr_t TraceChannel = 0xCD4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Pawn", 0xC58, "ObjectProperty"},
            {"CachedAimLocationComponent", 0xC60, "ObjectProperty"},
            {"FoundEndPoint", 0xC68, "StructProperty"},
            {"MinHitDistance", 0xC80, "StructProperty"},
            {"HitObjectsLimit", 0xCA8, "StructProperty"},
            {"TraceChannel", 0xCD4, "ByteProperty"},
        }};
    };

}
