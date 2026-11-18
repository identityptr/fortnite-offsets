#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PistolCavalryRuntime
{
    struct FortMovementMode_ExtLogic_ShotHop
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogic_ShotHop";
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

    struct FortMovementMode_RuntimeData_ShotHop
    {
        static constexpr std::string_view Name = "FortMovementMode_RuntimeData_ShotHop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_GuidedMotionRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t HopVelocity = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HopVelocity", 0x240, "StructProperty"},
        }};
    };

}
