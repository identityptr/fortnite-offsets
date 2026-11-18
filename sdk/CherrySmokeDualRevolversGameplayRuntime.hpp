#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CherrySmokeDualRevolversGameplayRuntime
{
    struct CherrySmokeDualRevolverLayerAnimInstance
    {
        static constexpr std::string_view Name = "CherrySmokeDualRevolverLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditiveLoopPlayRate = 0x1180;
            static constexpr std::uintptr_t DodgeAngleRadians = 0x1188;
            static constexpr std::uintptr_t bIsHangtimeActive = 0x1190;
            static constexpr std::uintptr_t bDidRebound = 0x1191;
            static constexpr std::uintptr_t bIncompatibleMovement = 0x1192;
            static constexpr std::uintptr_t bReloading = 0x1193;
            static constexpr std::uintptr_t bAirDodgeActive = 0x1194;
            static constexpr std::uintptr_t bDoubleJumpActive = 0x1195;
            static constexpr std::uintptr_t bIsLeftDodgeSpace = 0x1196;
            static constexpr std::uintptr_t bCanEnterDodgeStart = 0x1197;
            static constexpr std::uintptr_t bIsLastHandFireLeft = 0x1198;
            static constexpr std::uintptr_t bCanFall = 0x1199;
            static constexpr std::uintptr_t bCanEnterDoubleJump = 0x119A;
            static constexpr std::uintptr_t CurrentWorldSpaceDodgeDirection = 0x11A0;
            static constexpr std::uintptr_t InitialDodgeDirection = 0x11B8;
            static constexpr std::uintptr_t LastDodgeDirection = 0x11D0;
            static constexpr std::uintptr_t InAirTime = 0x11D8;
            static constexpr std::uintptr_t IncompatibleMovementTags = 0x11E0;
            static constexpr std::uintptr_t HangtimeAnimationRate = 0x1200;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"AdditiveLoopPlayRate", 0x1180, "DoubleProperty"},
            {"DodgeAngleRadians", 0x1188, "DoubleProperty"},
            {"bIsHangtimeActive", 0x1190, "BoolProperty"},
            {"bDidRebound", 0x1191, "BoolProperty"},
            {"bIncompatibleMovement", 0x1192, "BoolProperty"},
            {"bReloading", 0x1193, "BoolProperty"},
            {"bAirDodgeActive", 0x1194, "BoolProperty"},
            {"bDoubleJumpActive", 0x1195, "BoolProperty"},
            {"bIsLeftDodgeSpace", 0x1196, "BoolProperty"},
            {"bCanEnterDodgeStart", 0x1197, "BoolProperty"},
            {"bIsLastHandFireLeft", 0x1198, "BoolProperty"},
            {"bCanFall", 0x1199, "BoolProperty"},
            {"bCanEnterDoubleJump", 0x119A, "BoolProperty"},
            {"CurrentWorldSpaceDodgeDirection", 0x11A0, "StructProperty"},
            {"InitialDodgeDirection", 0x11B8, "StructProperty"},
            {"LastDodgeDirection", 0x11D0, "FloatProperty"},
            {"InAirTime", 0x11D8, "DoubleProperty"},
            {"IncompatibleMovementTags", 0x11E0, "StructProperty"},
            {"HangtimeAnimationRate", 0x1200, "DoubleProperty"},
        }};
    };

    struct CherrySmokeDualRevolverPawnComponentAnimInterface
    {
        static constexpr std::string_view Name = "CherrySmokeDualRevolverPawnComponentAnimInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CherrySmokeDualRevolverWeaponAnimInterface
    {
        static constexpr std::string_view Name = "CherrySmokeDualRevolverWeaponAnimInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMovementMode_HangTime
    {
        static constexpr std::string_view Name = "FortMovementMode_HangTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeDilationScale = 0x1B8;
            static constexpr std::uintptr_t MaximumDurationSeconds = 0x1E0;
            static constexpr std::uintptr_t ExtraVelocityUpwards = 0x208;
            static constexpr std::uintptr_t BlendInSeconds = 0x230;
            static constexpr std::uintptr_t BlendInCurve = 0x258;
            static constexpr std::uintptr_t BlendOutNonDilatedTimeToGroundSeconds = 0x260;
            static constexpr std::uintptr_t BlendOutCurve = 0x288;
            static constexpr std::uintptr_t ConstantVelocityOffset = 0x290;
            static constexpr std::uintptr_t CachedMaximumDurationSeconds = 0x2A8;
            static constexpr std::uintptr_t CachedTimeDilationScale = 0x2AC;
            static constexpr std::uintptr_t CachedBlendInSeconds = 0x2B0;
            static constexpr std::uintptr_t CachedBlendOutNonDilatedTimeToGroundSeconds = 0x2B4;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"TimeDilationScale", 0x1B8, "StructProperty"},
            {"MaximumDurationSeconds", 0x1E0, "StructProperty"},
            {"ExtraVelocityUpwards", 0x208, "StructProperty"},
            {"BlendInSeconds", 0x230, "StructProperty"},
            {"BlendInCurve", 0x258, "ObjectProperty"},
            {"BlendOutNonDilatedTimeToGroundSeconds", 0x260, "StructProperty"},
            {"BlendOutCurve", 0x288, "ObjectProperty"},
            {"ConstantVelocityOffset", 0x290, "StructProperty"},
            {"CachedMaximumDurationSeconds", 0x2A8, "FloatProperty"},
            {"CachedTimeDilationScale", 0x2AC, "FloatProperty"},
            {"CachedBlendInSeconds", 0x2B0, "FloatProperty"},
            {"CachedBlendOutNonDilatedTimeToGroundSeconds", 0x2B4, "FloatProperty"},
        }};
    };

    struct FortMovementMode_HangTimeDilatedMotion
    {
        static constexpr std::string_view Name = "FortMovementMode_HangTimeDilatedMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtGuidedMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t GuideMode = 0x1B8;
            static constexpr std::uintptr_t Priority = 0x1BC;
            static constexpr std::uintptr_t bSetNewMovementMode = 0x1C0;
            static constexpr std::uintptr_t bSetFallingOnLift = 0x1C1;
            static constexpr std::uintptr_t MovementModeToSetOnStart = 0x1C2;
            static constexpr std::uintptr_t bRestoreOldMovementModeOnDeactivate = 0x1C3;
            static constexpr std::uintptr_t DurationType = 0x1C4;
            static constexpr std::uintptr_t MaxDuration = 0x1C8;
            static constexpr std::uintptr_t VerifyMaxDurationOverride = 0x1F4;
            static constexpr std::uintptr_t VerifyWorldCeilingHeightOverride = 0x1FC;
            static constexpr std::uintptr_t PathOffsetCurve = 0x208;
            static constexpr std::uintptr_t TimeMappingCurve = 0x210;
            static constexpr std::uintptr_t bIsAdditive = 0x218;
            static constexpr std::uintptr_t bSmoothOutTransitionToFinish = 0x219;
            static constexpr std::uintptr_t FinishVelocityMode = 0x21A;
            static constexpr std::uintptr_t FinishVelocityToSet = 0x220;
            static constexpr std::uintptr_t FinishVelocityToClamp = 0x238;
            static constexpr std::uintptr_t bEndOnLaunchCharacter = 0x264;
            static constexpr std::uintptr_t OptionalBoolConfiguration = 0x268;
            static constexpr std::uintptr_t OptionalFloatConfiguration = 0x278;
            static constexpr std::uintptr_t CalculateFinishVelocityConfig = 0x288;
            static constexpr std::uintptr_t MovementDelta = 0x378;
            static constexpr std::uintptr_t MaxSpeed = 0x390;
            static constexpr std::uintptr_t TargetLerpSpeedHorizontalCurve = 0x3C0;
            static constexpr std::uintptr_t TargetLerpSpeedVerticalCurve = 0x3C8;
            static constexpr std::uintptr_t TargetOffsetType = 0x3D0;
            static constexpr std::uintptr_t TargetOffsetX = 0x3D8;
            static constexpr std::uintptr_t TargetOffsetY = 0x408;
            static constexpr std::uintptr_t TargetOffsetZ = 0x438;
            static constexpr std::uintptr_t DefaultTargetLerpSpeedHorizontal = 0x464;
            static constexpr std::uintptr_t DefaultTargetLerpSpeedVerticle = 0x468;
            static constexpr std::uintptr_t bRestrictSpeedToExpected = 0x46C;
            static constexpr std::uintptr_t MoveToTargetErrorAllowance = 0x470;
            static constexpr std::uintptr_t MaxMoveToTargetDistance = 0x478;
            static constexpr std::uintptr_t MaxMoveToTargetDistanceTraveled = 0x4A8;
            static constexpr std::uintptr_t MaxMoveToInvalidTargetDistance = 0x4D8;
            static constexpr std::uintptr_t Strength = 0x508;
            static constexpr std::uintptr_t StrengthOverTime = 0x538;
            static constexpr std::uintptr_t bUseAveragesForStrengthOverTime = 0x540;
            static constexpr std::uintptr_t Direction = 0x548;
            static constexpr std::uintptr_t bEnableGravity = 0x560;
            static constexpr std::uintptr_t bEnforceHeightAboveGround = 0x561;
            static constexpr std::uintptr_t HeightAboveGround = 0x568;
            static constexpr std::uintptr_t MaxHeightCorrectionSpeedMultiplier = 0x594;
            static constexpr std::uintptr_t bUseNewBPAdjustRootMotionVelocity = 0x599;
        };

        inline static constexpr std::array<PropertyInfo, 45> Properties{{
            {"GuideMode", 0x1B8, "EnumProperty"},
            {"Priority", 0x1BC, "IntProperty"},
            {"bSetNewMovementMode", 0x1C0, "BoolProperty"},
            {"bSetFallingOnLift", 0x1C1, "BoolProperty"},
            {"MovementModeToSetOnStart", 0x1C2, "ByteProperty"},
            {"bRestoreOldMovementModeOnDeactivate", 0x1C3, "BoolProperty"},
            {"DurationType", 0x1C4, "EnumProperty"},
            {"MaxDuration", 0x1C8, "StructProperty"},
            {"VerifyMaxDurationOverride", 0x1F4, "OptionalProperty"},
            {"VerifyWorldCeilingHeightOverride", 0x1FC, "OptionalProperty"},
            {"PathOffsetCurve", 0x208, "ObjectProperty"},
            {"TimeMappingCurve", 0x210, "ObjectProperty"},
            {"bIsAdditive", 0x218, "BoolProperty"},
            {"bSmoothOutTransitionToFinish", 0x219, "BoolProperty"},
            {"FinishVelocityMode", 0x21A, "EnumProperty"},
            {"FinishVelocityToSet", 0x220, "StructProperty"},
            {"FinishVelocityToClamp", 0x238, "StructProperty"},
            {"bEndOnLaunchCharacter", 0x264, "BoolProperty"},
            {"OptionalBoolConfiguration", 0x268, "ArrayProperty"},
            {"OptionalFloatConfiguration", 0x278, "ArrayProperty"},
            {"CalculateFinishVelocityConfig", 0x288, "StructProperty"},
            {"MovementDelta", 0x378, "StructProperty"},
            {"MaxSpeed", 0x390, "StructProperty"},
            {"TargetLerpSpeedHorizontalCurve", 0x3C0, "ObjectProperty"},
            {"TargetLerpSpeedVerticalCurve", 0x3C8, "ObjectProperty"},
            {"TargetOffsetType", 0x3D0, "EnumProperty"},
            {"TargetOffsetX", 0x3D8, "StructProperty"},
            {"TargetOffsetY", 0x408, "StructProperty"},
            {"TargetOffsetZ", 0x438, "StructProperty"},
            {"DefaultTargetLerpSpeedHorizontal", 0x464, "FloatProperty"},
            {"DefaultTargetLerpSpeedVerticle", 0x468, "FloatProperty"},
            {"bRestrictSpeedToExpected", 0x46C, "BoolProperty"},
            {"MoveToTargetErrorAllowance", 0x470, "FloatProperty"},
            {"MaxMoveToTargetDistance", 0x478, "StructProperty"},
            {"MaxMoveToTargetDistanceTraveled", 0x4A8, "StructProperty"},
            {"MaxMoveToInvalidTargetDistance", 0x4D8, "StructProperty"},
            {"Strength", 0x508, "StructProperty"},
            {"StrengthOverTime", 0x538, "ObjectProperty"},
            {"bUseAveragesForStrengthOverTime", 0x540, "BoolProperty"},
            {"Direction", 0x548, "StructProperty"},
            {"bEnableGravity", 0x560, "BoolProperty"},
            {"bEnforceHeightAboveGround", 0x561, "BoolProperty"},
            {"HeightAboveGround", 0x568, "StructProperty"},
            {"MaxHeightCorrectionSpeedMultiplier", 0x594, "FloatProperty"},
            {"bUseNewBPAdjustRootMotionVelocity", 0x599, "BoolProperty"},
        }};
    };

    struct FortMovementMode_HangTimeRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_HangTimeRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortWeaponCherrySmokeDualRevolvers
    {
        static constexpr std::string_view Name = "FortWeaponCherrySmokeDualRevolvers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged_DualWieldable";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFireFailed = 0x2AE8;
            static constexpr std::uintptr_t bGateFireCall = 0x2B11;
            static constexpr std::uintptr_t IsFiringGameplayTag = 0x2B14;
            static constexpr std::uintptr_t MuzzleLocationOffset = 0x2B18;
            static constexpr std::uintptr_t ReloadingTag = 0x2B30;
            static constexpr std::uintptr_t ReloadAbilityEventTag = 0x2B34;
            static constexpr std::uintptr_t FireAbilityEventTag = 0x2B38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnFireFailed", 0x2AE8, "MulticastInlineDelegateProperty"},
            {"bGateFireCall", 0x2B11, "BoolProperty"},
            {"IsFiringGameplayTag", 0x2B14, "StructProperty"},
            {"MuzzleLocationOffset", 0x2B18, "StructProperty"},
            {"ReloadingTag", 0x2B30, "StructProperty"},
            {"ReloadAbilityEventTag", 0x2B34, "StructProperty"},
            {"FireAbilityEventTag", 0x2B38, "StructProperty"},
        }};
    };

}
