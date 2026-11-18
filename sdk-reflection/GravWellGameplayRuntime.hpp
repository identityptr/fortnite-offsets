#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GravWellGameplayRuntime
{
    struct GravWellProjectileMovementComponent
    {
        static constexpr std::string_view Name = "GravWellProjectileMovementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileMovementComponent_FloorSnapped";
        struct Offsets
        {
            static constexpr std::uintptr_t OnIsSlidingChanged = 0x450;
            static constexpr std::uintptr_t OnSteepSlopeWasHit = 0x460;
            static constexpr std::uintptr_t PhaseThroughActorsTagQuery = 0x470;
            static constexpr std::uintptr_t MaxClimbableSlope = 0x4B8;
            static constexpr std::uintptr_t GravityScaleAfterTouchedFloor = 0x4E0;
            static constexpr std::uintptr_t MaxPenetrationDepthAllowedForSliding = 0x508;
            static constexpr std::uintptr_t NumFramesBeforeHandleStoppedDeflecting = 0x50C;
            static constexpr std::uintptr_t ReplicatedGravity = 0x510;
            static constexpr std::uintptr_t CorrectionDuration = 0x514;
            static constexpr std::uintptr_t CorrectionUpSpeed = 0x518;
            static constexpr std::uintptr_t FloatAwayFromSurfaceDistance = 0x520;
            static constexpr std::uintptr_t bNeedsCorrection = 0x548;
            static constexpr std::uintptr_t bWaitingForDeflectionStop = 0x549;
            static constexpr std::uintptr_t NumFramesNotMoved = 0x54C;
            static constexpr std::uintptr_t NumFramesSinceDeflection = 0x550;
            static constexpr std::uintptr_t NumFramesNotMovedToConsiderStuck = 0x554;
            static constexpr std::uintptr_t LastRecordedLocation = 0x558;
            static constexpr std::uintptr_t TimeElapsedSinceCorrectionStarted = 0x570;
            static constexpr std::uintptr_t DebugCorrectionDrawingTimerHandle = 0x578;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"OnIsSlidingChanged", 0x450, "MulticastInlineDelegateProperty"},
            {"OnSteepSlopeWasHit", 0x460, "MulticastInlineDelegateProperty"},
            {"PhaseThroughActorsTagQuery", 0x470, "StructProperty"},
            {"MaxClimbableSlope", 0x4B8, "StructProperty"},
            {"GravityScaleAfterTouchedFloor", 0x4E0, "StructProperty"},
            {"MaxPenetrationDepthAllowedForSliding", 0x508, "FloatProperty"},
            {"NumFramesBeforeHandleStoppedDeflecting", 0x50C, "IntProperty"},
            {"ReplicatedGravity", 0x510, "FloatProperty"},
            {"CorrectionDuration", 0x514, "FloatProperty"},
            {"CorrectionUpSpeed", 0x518, "FloatProperty"},
            {"FloatAwayFromSurfaceDistance", 0x520, "StructProperty"},
            {"bNeedsCorrection", 0x548, "BoolProperty"},
            {"bWaitingForDeflectionStop", 0x549, "BoolProperty"},
            {"NumFramesNotMoved", 0x54C, "IntProperty"},
            {"NumFramesSinceDeflection", 0x550, "IntProperty"},
            {"NumFramesNotMovedToConsiderStuck", 0x554, "IntProperty"},
            {"LastRecordedLocation", 0x558, "StructProperty"},
            {"TimeElapsedSinceCorrectionStarted", 0x570, "FloatProperty"},
            {"DebugCorrectionDrawingTimerHandle", 0x578, "StructProperty"},
        }};
    };

    struct GravWellShield
    {
        static constexpr std::string_view Name = "GravWellShield";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ShieldMaximumSpeed = 0x940;
            static constexpr std::uintptr_t ProjectileMovementComponentFloor = 0x968;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShieldMaximumSpeed", 0x940, "StructProperty"},
            {"ProjectileMovementComponentFloor", 0x968, "ObjectProperty"},
        }};
    };

    struct GravWellWeapon
    {
        static constexpr std::string_view Name = "GravWellWeapon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnedTagsThatIndicateFiring = 0x1A70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnedTagsThatIndicateFiring", 0x1A70, "StructProperty"},
        }};
    };

    struct PolarityLayerAnimInstance
    {
        static constexpr std::string_view Name = "PolarityLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LeapAngle = 0x1180;
            static constexpr std::uintptr_t FallTime = 0x1184;
            static constexpr std::uintptr_t bLaunchAbilityActive = 0x1188;
            static constexpr std::uintptr_t bHoldShieldActive = 0x1189;
            static constexpr std::uintptr_t bCanExitLeapFall = 0x118A;
            static constexpr std::uintptr_t bCanEnterLeap = 0x118B;
            static constexpr std::uintptr_t bIsFiring = 0x118C;
            static constexpr std::uintptr_t InitialWorldSpaceDodgeDirection = 0x1190;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"LeapAngle", 0x1180, "FloatProperty"},
            {"FallTime", 0x1184, "FloatProperty"},
            {"bLaunchAbilityActive", 0x1188, "BoolProperty"},
            {"bHoldShieldActive", 0x1189, "BoolProperty"},
            {"bCanExitLeapFall", 0x118A, "BoolProperty"},
            {"bCanEnterLeap", 0x118B, "BoolProperty"},
            {"bIsFiring", 0x118C, "BoolProperty"},
            {"InitialWorldSpaceDodgeDirection", 0x1190, "StructProperty"},
        }};
    };

    struct PolarityWeaponInterface
    {
        static constexpr std::string_view Name = "PolarityWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
