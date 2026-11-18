#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CoffeePuffGameplayRuntime
{
    struct CoffeePuffLayerAnimInstance
    {
        static constexpr std::string_view Name = "CoffeePuffLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t HookShotMontage = 0x1180;
            static constexpr std::uintptr_t EquipBlendOut = 0x11A0;
            static constexpr std::uintptr_t IdleAdditiveAlpha = 0x11A8;
            static constexpr std::uintptr_t HipOffsetVertical = 0x11B0;
            static constexpr std::uintptr_t LowerBodyAdditiveLoopSlopeDampFactor = 0x11B8;
            static constexpr std::uintptr_t CustomPelvisTwist = 0x11C0;
            static constexpr std::uintptr_t bHookShot_PullFail = 0x11C8;
            static constexpr std::uintptr_t bHookShot_PullSuccess = 0x11C9;
            static constexpr std::uintptr_t bApplyLowerBodyCorrective = 0x11CA;
            static constexpr std::uintptr_t bIsFiring = 0x11CB;
            static constexpr std::uintptr_t bHookShot_Throw = 0x11CC;
            static constexpr std::uintptr_t bHookShot_HitSuccess = 0x11CD;
            static constexpr std::uintptr_t bAdditiveLoopBlend = 0x11CE;
            static constexpr std::uintptr_t bEquipAdditiveToPassThrough = 0x11CF;
            static constexpr std::uintptr_t bEquipAdditiveToCorrectiveAdditive = 0x11D0;
            static constexpr std::uintptr_t bPassThroughToEquipCorrective = 0x11D1;
            static constexpr std::uintptr_t bEquipCorrectiveToPassThrough = 0x11D2;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"HookShotMontage", 0x1180, "SoftObjectProperty"},
            {"EquipBlendOut", 0x11A0, "FloatProperty"},
            {"IdleAdditiveAlpha", 0x11A8, "DoubleProperty"},
            {"HipOffsetVertical", 0x11B0, "DoubleProperty"},
            {"LowerBodyAdditiveLoopSlopeDampFactor", 0x11B8, "DoubleProperty"},
            {"CustomPelvisTwist", 0x11C0, "DoubleProperty"},
            {"bHookShot_PullFail", 0x11C8, "BoolProperty"},
            {"bHookShot_PullSuccess", 0x11C9, "BoolProperty"},
            {"bApplyLowerBodyCorrective", 0x11CA, "BoolProperty"},
            {"bIsFiring", 0x11CB, "BoolProperty"},
            {"bHookShot_Throw", 0x11CC, "BoolProperty"},
            {"bHookShot_HitSuccess", 0x11CD, "BoolProperty"},
            {"bAdditiveLoopBlend", 0x11CE, "BoolProperty"},
            {"bEquipAdditiveToPassThrough", 0x11CF, "BoolProperty"},
            {"bEquipAdditiveToCorrectiveAdditive", 0x11D0, "BoolProperty"},
            {"bPassThroughToEquipCorrective", 0x11D1, "BoolProperty"},
            {"bEquipCorrectiveToPassThrough", 0x11D2, "BoolProperty"},
        }};
    };

    struct FortMovementMode_CoffeePuffPullRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_CoffeePuffPullRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t NetPullingActor = 0x38;
            static constexpr std::uintptr_t bNetPullStarted = 0x40;
            static constexpr std::uintptr_t LocalStartElapsedTime = 0x44;
            static constexpr std::uintptr_t LocalEndElapsedTime = 0x48;
            static constexpr std::uintptr_t LocalKnockbackSpeed = 0x4C;
            static constexpr std::uintptr_t LocalInvalidPullStartTime = 0x50;
            static constexpr std::uintptr_t bLocalLineOfSight = 0x54;
            static constexpr std::uintptr_t bLocalMovementBlocked = 0x55;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"NetPullingActor", 0x38, "WeakObjectProperty"},
            {"bNetPullStarted", 0x40, "BoolProperty"},
            {"LocalStartElapsedTime", 0x44, "FloatProperty"},
            {"LocalEndElapsedTime", 0x48, "FloatProperty"},
            {"LocalKnockbackSpeed", 0x4C, "FloatProperty"},
            {"LocalInvalidPullStartTime", 0x50, "FloatProperty"},
            {"bLocalLineOfSight", 0x54, "BoolProperty"},
            {"bLocalMovementBlocked", 0x55, "BoolProperty"},
        }};
    };

    struct FortMovementMode_ExtCoffeePuffPull
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtCoffeePuffPull";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t IgnorePendingLaunchForInitialDuration = 0x1B8;
            static constexpr std::uintptr_t KnockbackDuration = 0x1E8;
            static constexpr std::uintptr_t KnockbackDistance = 0x218;
            static constexpr std::uintptr_t PostKnockbackDelay = 0x248;
            static constexpr std::uintptr_t KnockbackGravityMultiplier = 0x278;
            static constexpr std::uintptr_t KnockbackKickUpStrength = 0x2A8;
            static constexpr std::uintptr_t KnockbackKickUpDuration = 0x2D8;
            static constexpr std::uintptr_t PullSpeed = 0x308;
            static constexpr std::uintptr_t PullTargetOffset = 0x338;
            static constexpr std::uintptr_t bForceOffsetDistance = 0x368;
            static constexpr std::uintptr_t PullTargetOffsetMargin = 0x398;
            static constexpr std::uintptr_t PullMaxDuration = 0x3C8;
            static constexpr std::uintptr_t PullMinDuration = 0x3F8;
            static constexpr std::uintptr_t MinImpactDotProduct = 0x428;
            static constexpr std::uintptr_t SurfaceSlideUnderOverForce = 0x458;
            static constexpr std::uintptr_t MaxInvalidPullTime = 0x488;
            static constexpr std::uintptr_t InterruptClampedSpeed = 0x4B8;
            static constexpr std::uintptr_t LineOfSightDelay = 0x4E8;
            static constexpr std::uintptr_t bCheckLineOfSight = 0x518;
            static constexpr std::uintptr_t LineOfSightHeightOffset = 0x548;
            static constexpr std::uintptr_t DisconnectProtectionUpdateRate = 0x578;
            static constexpr std::uintptr_t KnockbackEndEventTag = 0x5A8;
            static constexpr std::uintptr_t PullStartEventTag = 0x5AC;
            static constexpr std::uintptr_t PullInvalidatedEventTag = 0x5B0;
            static constexpr std::uintptr_t HookshotActiveTag = 0x5B4;
            static constexpr std::uintptr_t LineOfSightCollisionProfile = 0x5B8;
            static constexpr std::uintptr_t LineOfSightIgnoreTags = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"IgnorePendingLaunchForInitialDuration", 0x1B8, "StructProperty"},
            {"KnockbackDuration", 0x1E8, "StructProperty"},
            {"KnockbackDistance", 0x218, "StructProperty"},
            {"PostKnockbackDelay", 0x248, "StructProperty"},
            {"KnockbackGravityMultiplier", 0x278, "StructProperty"},
            {"KnockbackKickUpStrength", 0x2A8, "StructProperty"},
            {"KnockbackKickUpDuration", 0x2D8, "StructProperty"},
            {"PullSpeed", 0x308, "StructProperty"},
            {"PullTargetOffset", 0x338, "StructProperty"},
            {"bForceOffsetDistance", 0x368, "StructProperty"},
            {"PullTargetOffsetMargin", 0x398, "StructProperty"},
            {"PullMaxDuration", 0x3C8, "StructProperty"},
            {"PullMinDuration", 0x3F8, "StructProperty"},
            {"MinImpactDotProduct", 0x428, "StructProperty"},
            {"SurfaceSlideUnderOverForce", 0x458, "StructProperty"},
            {"MaxInvalidPullTime", 0x488, "StructProperty"},
            {"InterruptClampedSpeed", 0x4B8, "StructProperty"},
            {"LineOfSightDelay", 0x4E8, "StructProperty"},
            {"bCheckLineOfSight", 0x518, "StructProperty"},
            {"LineOfSightHeightOffset", 0x548, "StructProperty"},
            {"DisconnectProtectionUpdateRate", 0x578, "StructProperty"},
            {"KnockbackEndEventTag", 0x5A8, "StructProperty"},
            {"PullStartEventTag", 0x5AC, "StructProperty"},
            {"PullInvalidatedEventTag", 0x5B0, "StructProperty"},
            {"HookshotActiveTag", 0x5B4, "StructProperty"},
            {"LineOfSightCollisionProfile", 0x5B8, "StructProperty"},
            {"LineOfSightIgnoreTags", 0x5C0, "StructProperty"},
        }};
    };

}
