#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HumbleMopGameplayRuntime
{
    struct FortCameraModifier_HumbleMop
    {
        static constexpr std::string_view Name = "FortCameraModifier_HumbleMop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModifier_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeForwardPercentCurve = 0x80;
            static constexpr std::uintptr_t NativeSprintingUpOffsetMultiplier = 0x88;
            static constexpr std::uintptr_t NativeBaseUpOffsetMultiplier = 0xB8;
            static constexpr std::uintptr_t NativeLeadInTime = 0xE4;
            static constexpr std::uintptr_t NativeLeanRight = 0xE8;
            static constexpr std::uintptr_t NativeUnNormalizedForwardPercentCurveValueStart = 0xEC;
            static constexpr std::uintptr_t NativeUnNormalizedForwardPercentCurveValueEnd = 0xF0;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYOldRangeX = 0xF4;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYOldRangeY = 0xF8;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYNewRangeX = 0xFC;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYNewRangeY = 0x100;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYMultiplier = 0x104;
            static constexpr std::uintptr_t NativeRemappedUpSpeedABSOldRangeX = 0x108;
            static constexpr std::uintptr_t NativeRemappedUpSpeedABSOldRangeY = 0x10C;
            static constexpr std::uintptr_t NativeRemappedUpSpeedABSNewRangeX = 0x110;
            static constexpr std::uintptr_t NativeRemappedUpSpeedABSNewRangeY = 0x114;
            static constexpr std::uintptr_t NativeCurrentForwardTacticalSprintingAdditive = 0x118;
            static constexpr std::uintptr_t NativeCurrentForwardInterpToSpeed = 0x11C;
            static constexpr std::uintptr_t NativeRemappedRightSpeedOldRangeX = 0x120;
            static constexpr std::uintptr_t NativeRemappedRightSpeedOldRangeY = 0x124;
            static constexpr std::uintptr_t NativeRemappedRightSpeedNewRangeX = 0x128;
            static constexpr std::uintptr_t NativeRemappedRightSpeedNewRangeY = 0x12C;
            static constexpr std::uintptr_t NativeRemappedRightSpeedMultiplierA = 0x130;
            static constexpr std::uintptr_t NativeRemappedRightSpeedMultiplierB = 0x134;
            static constexpr std::uintptr_t NativeCurrentRightRemappedCurrentForwardABSOldRangeX = 0x138;
            static constexpr std::uintptr_t NativeCurrentRightRemappedCurrentForwardABSOldRangeY = 0x13C;
            static constexpr std::uintptr_t NativeCurrentRightRemappedCurrentForwardABSNewRangeX = 0x140;
            static constexpr std::uintptr_t NativeCurrentRightRemappedCurrentForwardABSNewRangeY = 0x144;
            static constexpr std::uintptr_t NativeCurrentRightInterpToSpeed = 0x148;
            static constexpr std::uintptr_t NativeRemappedUpSpeedOldRangeX = 0x14C;
            static constexpr std::uintptr_t NativeRemappedUpSpeedOldRangeY = 0x150;
            static constexpr std::uintptr_t NativeRemappedUpSpeedNewRangeX = 0x154;
            static constexpr std::uintptr_t NativeRemappedUpSpeedNewRangeY = 0x158;
            static constexpr std::uintptr_t NativeCurrentUpRemappedCurrentForwardABSOldRangeX = 0x15C;
            static constexpr std::uintptr_t NativeCurrentUpRemappedCurrentForwardABSOldRangeY = 0x160;
            static constexpr std::uintptr_t NativeCurrentUpRemappedCurrentForwardABSNewRangeX = 0x164;
            static constexpr std::uintptr_t NativeCurrentUpRemappedCurrentForwardABSNewRangeY = 0x168;
            static constexpr std::uintptr_t NativeRemappedUpSpeedMultiplierA = 0x16C;
            static constexpr std::uintptr_t NativeRemappedUpSpeedMultiplierB = 0x170;
            static constexpr std::uintptr_t NativeCurrentUpTacticalSprintingAdditiveA = 0x174;
            static constexpr std::uintptr_t NativeCurrentUpTacticalSprintingAdditiveB = 0x178;
            static constexpr std::uintptr_t NativeCurrentUpInterpToSpeed = 0x17C;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSOldRangeX = 0x180;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSOldRangeY = 0x184;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSNewRangeX = 0x188;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSNewRangeY = 0x18C;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSMultiplier = 0x190;
            static constexpr std::uintptr_t NativeCurrentLeanInterpToTargetOldRangeX = 0x194;
            static constexpr std::uintptr_t NativeCurrentLeanInterpToTargetOldRangeY = 0x198;
            static constexpr std::uintptr_t NativeCurrentLeanInterpToSpeed = 0x19C;
            static constexpr std::uintptr_t NativeCurrentFOVInterpToTargetA = 0x1A0;
            static constexpr std::uintptr_t NativeCurrentFOVInterpToTargetB = 0x1A4;
            static constexpr std::uintptr_t NativeCurrentFOVInterpToSpeed = 0x1A8;
            static constexpr std::uintptr_t NativeRemappedSpeedOldRangeX = 0x1AC;
            static constexpr std::uintptr_t NativeRemappedSpeedOldRangeY = 0x1B0;
            static constexpr std::uintptr_t NativeRemappedSpeedNewRangeX = 0x1B4;
            static constexpr std::uintptr_t NativeRemappedSpeedNewRangeY = 0x1B8;
            static constexpr std::uintptr_t NativeCurrentOffsetInterpToSpeed = 0x1BC;
            static constexpr std::uintptr_t NativeCurrentStraightnessMultiplier = 0x1C0;
            static constexpr std::uintptr_t NativeCurrentUpSubtrahend = 0x1C4;
            static constexpr std::uintptr_t NativeCurrentOffsetVectorInterpToSpeed = 0x1C8;
            static constexpr std::uintptr_t NativeNewViewForwardVectorMultiplier = 0x1CC;
            static constexpr std::uintptr_t NativeNewViewUpVectorMultiplier = 0x1D0;
            static constexpr std::uintptr_t NativeNewViewRightVectorMultiplier = 0x1D4;
        };

        inline static constexpr std::array<PropertyInfo, 64> Properties{{
            {"NativeForwardPercentCurve", 0x80, "ObjectProperty"},
            {"NativeSprintingUpOffsetMultiplier", 0x88, "StructProperty"},
            {"NativeBaseUpOffsetMultiplier", 0xB8, "StructProperty"},
            {"NativeLeadInTime", 0xE4, "FloatProperty"},
            {"NativeLeanRight", 0xE8, "FloatProperty"},
            {"NativeUnNormalizedForwardPercentCurveValueStart", 0xEC, "FloatProperty"},
            {"NativeUnNormalizedForwardPercentCurveValueEnd", 0xF0, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYOldRangeX", 0xF4, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYOldRangeY", 0xF8, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYNewRangeX", 0xFC, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYNewRangeY", 0x100, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYMultiplier", 0x104, "FloatProperty"},
            {"NativeRemappedUpSpeedABSOldRangeX", 0x108, "FloatProperty"},
            {"NativeRemappedUpSpeedABSOldRangeY", 0x10C, "FloatProperty"},
            {"NativeRemappedUpSpeedABSNewRangeX", 0x110, "FloatProperty"},
            {"NativeRemappedUpSpeedABSNewRangeY", 0x114, "FloatProperty"},
            {"NativeCurrentForwardTacticalSprintingAdditive", 0x118, "FloatProperty"},
            {"NativeCurrentForwardInterpToSpeed", 0x11C, "FloatProperty"},
            {"NativeRemappedRightSpeedOldRangeX", 0x120, "FloatProperty"},
            {"NativeRemappedRightSpeedOldRangeY", 0x124, "FloatProperty"},
            {"NativeRemappedRightSpeedNewRangeX", 0x128, "FloatProperty"},
            {"NativeRemappedRightSpeedNewRangeY", 0x12C, "FloatProperty"},
            {"NativeRemappedRightSpeedMultiplierA", 0x130, "FloatProperty"},
            {"NativeRemappedRightSpeedMultiplierB", 0x134, "FloatProperty"},
            {"NativeCurrentRightRemappedCurrentForwardABSOldRangeX", 0x138, "FloatProperty"},
            {"NativeCurrentRightRemappedCurrentForwardABSOldRangeY", 0x13C, "FloatProperty"},
            {"NativeCurrentRightRemappedCurrentForwardABSNewRangeX", 0x140, "FloatProperty"},
            {"NativeCurrentRightRemappedCurrentForwardABSNewRangeY", 0x144, "FloatProperty"},
            {"NativeCurrentRightInterpToSpeed", 0x148, "FloatProperty"},
            {"NativeRemappedUpSpeedOldRangeX", 0x14C, "FloatProperty"},
            {"NativeRemappedUpSpeedOldRangeY", 0x150, "FloatProperty"},
            {"NativeRemappedUpSpeedNewRangeX", 0x154, "FloatProperty"},
            {"NativeRemappedUpSpeedNewRangeY", 0x158, "FloatProperty"},
            {"NativeCurrentUpRemappedCurrentForwardABSOldRangeX", 0x15C, "FloatProperty"},
            {"NativeCurrentUpRemappedCurrentForwardABSOldRangeY", 0x160, "FloatProperty"},
            {"NativeCurrentUpRemappedCurrentForwardABSNewRangeX", 0x164, "FloatProperty"},
            {"NativeCurrentUpRemappedCurrentForwardABSNewRangeY", 0x168, "FloatProperty"},
            {"NativeRemappedUpSpeedMultiplierA", 0x16C, "FloatProperty"},
            {"NativeRemappedUpSpeedMultiplierB", 0x170, "FloatProperty"},
            {"NativeCurrentUpTacticalSprintingAdditiveA", 0x174, "FloatProperty"},
            {"NativeCurrentUpTacticalSprintingAdditiveB", 0x178, "FloatProperty"},
            {"NativeCurrentUpInterpToSpeed", 0x17C, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSOldRangeX", 0x180, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSOldRangeY", 0x184, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSNewRangeX", 0x188, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSNewRangeY", 0x18C, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSMultiplier", 0x190, "FloatProperty"},
            {"NativeCurrentLeanInterpToTargetOldRangeX", 0x194, "FloatProperty"},
            {"NativeCurrentLeanInterpToTargetOldRangeY", 0x198, "FloatProperty"},
            {"NativeCurrentLeanInterpToSpeed", 0x19C, "FloatProperty"},
            {"NativeCurrentFOVInterpToTargetA", 0x1A0, "FloatProperty"},
            {"NativeCurrentFOVInterpToTargetB", 0x1A4, "FloatProperty"},
            {"NativeCurrentFOVInterpToSpeed", 0x1A8, "FloatProperty"},
            {"NativeRemappedSpeedOldRangeX", 0x1AC, "FloatProperty"},
            {"NativeRemappedSpeedOldRangeY", 0x1B0, "FloatProperty"},
            {"NativeRemappedSpeedNewRangeX", 0x1B4, "FloatProperty"},
            {"NativeRemappedSpeedNewRangeY", 0x1B8, "FloatProperty"},
            {"NativeCurrentOffsetInterpToSpeed", 0x1BC, "FloatProperty"},
            {"NativeCurrentStraightnessMultiplier", 0x1C0, "FloatProperty"},
            {"NativeCurrentUpSubtrahend", 0x1C4, "FloatProperty"},
            {"NativeCurrentOffsetVectorInterpToSpeed", 0x1C8, "FloatProperty"},
            {"NativeNewViewForwardVectorMultiplier", 0x1CC, "FloatProperty"},
            {"NativeNewViewUpVectorMultiplier", 0x1D0, "FloatProperty"},
            {"NativeNewViewRightVectorMultiplier", 0x1D4, "FloatProperty"},
        }};
    };

    struct HumbleMopPlayerAnimInstance
    {
        static constexpr std::string_view Name = "HumbleMopPlayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveName_UserCurve01 = 0x1180;
            static constexpr std::uintptr_t CurveName_UserCurve02 = 0x1184;
            static constexpr std::uintptr_t BoneName_Root = 0x1188;
            static constexpr std::uintptr_t MontageString_HumbleMop_SpawnWheel_M = 0x1190;
            static constexpr std::uintptr_t HumbleMopWheelRollingTag = 0x11A0;
            static constexpr std::uintptr_t HumbleMopWheelWindingUpTag = 0x11A4;
            static constexpr std::uintptr_t HumbleMopWheelWindingDownTag = 0x11A8;
            static constexpr std::uintptr_t HumbleMopSuperJumpActiveTag = 0x11AC;
            static constexpr std::uintptr_t GameplayActionPlayerSprintTag = 0x11B0;
            static constexpr std::uintptr_t InterpSpeed = 0x11B4;
            static constexpr std::uintptr_t ExitNoiseInterpSpeed = 0x11B8;
            static constexpr std::uintptr_t ForwardSpeedRemapOldMin = 0x11BC;
            static constexpr std::uintptr_t ForwardSpeedRemapOldMax = 0x11C0;
            static constexpr std::uintptr_t ForwardSpeedRemapNewMin = 0x11C4;
            static constexpr std::uintptr_t ForwardSpeedRemapNewMax = 0x11C8;
            static constexpr std::uintptr_t LateralSpeedRemapOldMin = 0x11CC;
            static constexpr std::uintptr_t LateralSpeedRemapOldMax = 0x11D0;
            static constexpr std::uintptr_t LateralSpeedRemapNewMin = 0x11D4;
            static constexpr std::uintptr_t LateralSpeedRemapNewMax = 0x11D8;
            static constexpr std::uintptr_t NoiseAlphaRemapOldMin = 0x11DC;
            static constexpr std::uintptr_t NoiseAlphaRemapOldMax = 0x11E0;
            static constexpr std::uintptr_t NoiseAlphaRemapNewMin = 0x11E4;
            static constexpr std::uintptr_t NoiseAlphaRemapNewMax = 0x11E8;
            static constexpr std::uintptr_t ForwardSpeedInterpSpeed = 0x11EC;
            static constexpr std::uintptr_t LateralSpeedInterpSpeed = 0x11F0;
            static constexpr std::uintptr_t ExitNoiseAlpha = 0x11F4;
            static constexpr std::uintptr_t InputLeftRight = 0x11F8;
            static constexpr std::uintptr_t InputFrontBack = 0x11FC;
            static constexpr std::uintptr_t ForwardSpeedInterp = 0x1200;
            static constexpr std::uintptr_t LateralSpeedInterp = 0x1204;
            static constexpr std::uintptr_t WheelNoiseAlpha = 0x1208;
            static constexpr std::uintptr_t WindUpPlayRate = 0x120C;
            static constexpr std::uintptr_t bIsWheelActive = 0x1210;
            static constexpr std::uintptr_t bIsWheelJumpLand = 0x1210;
            static constexpr std::uintptr_t bIsWheelJumping = 0x1210;
            static constexpr std::uintptr_t bIsWheelTacSprint = 0x1210;
            static constexpr std::uintptr_t bIsWindingDown = 0x1210;
            static constexpr std::uintptr_t bIsWindingDownOver = 0x1210;
            static constexpr std::uintptr_t bIsWindingUp = 0x1210;
            static constexpr std::uintptr_t bIsWindingUpOver = 0x1210;
            static constexpr std::uintptr_t bIsDolphinWindJump = 0x1211;
            static constexpr std::uintptr_t bIsWindJump = 0x1211;
            static constexpr std::uintptr_t PlayerCurrentRotation = 0x1218;
            static constexpr std::uintptr_t GoalUpVec = 0x1230;
            static constexpr std::uintptr_t RightVec = 0x1248;
            static constexpr std::uintptr_t PlayerGoalRotation = 0x1260;
            static constexpr std::uintptr_t CurrentUpVec = 0x1278;
        };

        inline static constexpr std::array<PropertyInfo, 47> Properties{{
            {"CurveName_UserCurve01", 0x1180, "NameProperty"},
            {"CurveName_UserCurve02", 0x1184, "NameProperty"},
            {"BoneName_Root", 0x1188, "NameProperty"},
            {"MontageString_HumbleMop_SpawnWheel_M", 0x1190, "StrProperty"},
            {"HumbleMopWheelRollingTag", 0x11A0, "StructProperty"},
            {"HumbleMopWheelWindingUpTag", 0x11A4, "StructProperty"},
            {"HumbleMopWheelWindingDownTag", 0x11A8, "StructProperty"},
            {"HumbleMopSuperJumpActiveTag", 0x11AC, "StructProperty"},
            {"GameplayActionPlayerSprintTag", 0x11B0, "StructProperty"},
            {"InterpSpeed", 0x11B4, "FloatProperty"},
            {"ExitNoiseInterpSpeed", 0x11B8, "FloatProperty"},
            {"ForwardSpeedRemapOldMin", 0x11BC, "FloatProperty"},
            {"ForwardSpeedRemapOldMax", 0x11C0, "FloatProperty"},
            {"ForwardSpeedRemapNewMin", 0x11C4, "FloatProperty"},
            {"ForwardSpeedRemapNewMax", 0x11C8, "FloatProperty"},
            {"LateralSpeedRemapOldMin", 0x11CC, "FloatProperty"},
            {"LateralSpeedRemapOldMax", 0x11D0, "FloatProperty"},
            {"LateralSpeedRemapNewMin", 0x11D4, "FloatProperty"},
            {"LateralSpeedRemapNewMax", 0x11D8, "FloatProperty"},
            {"NoiseAlphaRemapOldMin", 0x11DC, "FloatProperty"},
            {"NoiseAlphaRemapOldMax", 0x11E0, "FloatProperty"},
            {"NoiseAlphaRemapNewMin", 0x11E4, "FloatProperty"},
            {"NoiseAlphaRemapNewMax", 0x11E8, "FloatProperty"},
            {"ForwardSpeedInterpSpeed", 0x11EC, "FloatProperty"},
            {"LateralSpeedInterpSpeed", 0x11F0, "FloatProperty"},
            {"ExitNoiseAlpha", 0x11F4, "FloatProperty"},
            {"InputLeftRight", 0x11F8, "FloatProperty"},
            {"InputFrontBack", 0x11FC, "FloatProperty"},
            {"ForwardSpeedInterp", 0x1200, "FloatProperty"},
            {"LateralSpeedInterp", 0x1204, "FloatProperty"},
            {"WheelNoiseAlpha", 0x1208, "FloatProperty"},
            {"WindUpPlayRate", 0x120C, "FloatProperty"},
            {"bIsWheelActive", 0x1210, "BoolProperty"},
            {"bIsWheelJumpLand", 0x1210, "BoolProperty"},
            {"bIsWheelJumping", 0x1210, "BoolProperty"},
            {"bIsWheelTacSprint", 0x1210, "BoolProperty"},
            {"bIsWindingDown", 0x1210, "BoolProperty"},
            {"bIsWindingDownOver", 0x1210, "BoolProperty"},
            {"bIsWindingUp", 0x1210, "BoolProperty"},
            {"bIsWindingUpOver", 0x1210, "BoolProperty"},
            {"bIsDolphinWindJump", 0x1211, "BoolProperty"},
            {"bIsWindJump", 0x1211, "BoolProperty"},
            {"PlayerCurrentRotation", 0x1218, "StructProperty"},
            {"GoalUpVec", 0x1230, "StructProperty"},
            {"RightVec", 0x1248, "StructProperty"},
            {"PlayerGoalRotation", 0x1260, "StructProperty"},
            {"CurrentUpVec", 0x1278, "StructProperty"},
        }};
    };

}
