#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CubeSurfingRuntime
{
    struct FortAnimInstanceProxy_CubeSurfing
    {
        static constexpr std::string_view Name = "FortAnimInstanceProxy_CubeSurfing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t BoostingTag = 0x1180;
            static constexpr std::uintptr_t CubeSurfingTag = 0x1184;
            static constexpr std::uintptr_t TacSprintTag = 0x1188;
            static constexpr std::uintptr_t WalkingTag = 0x118C;
            static constexpr std::uintptr_t ClamberingTag = 0x1190;
            static constexpr std::uintptr_t FallingTag = 0x1194;
            static constexpr std::uintptr_t AirborneTag = 0x1198;
            static constexpr std::uintptr_t PreBoostTag = 0x119C;
            static constexpr std::uintptr_t HurdlingTag = 0x11A0;
            static constexpr std::uintptr_t ActivateMontage = 0x11A8;
            static constexpr std::uintptr_t MaxHardTurnValue = 0x11B0;
            static constexpr std::uintptr_t MinHardTurnValue = 0x11B4;
            static constexpr std::uintptr_t AttachLocation = 0x11B8;
            static constexpr std::uintptr_t InputLeftRight = 0x11D0;
            static constexpr std::uintptr_t InputFrontBack = 0x11D4;
            static constexpr std::uintptr_t ZVelocity = 0x11D8;
            static constexpr std::uintptr_t NoiseAlpha = 0x11DC;
            static constexpr std::uintptr_t NoiseRate = 0x11E0;
            static constexpr std::uintptr_t StanceAdjustValue = 0x11E4;
            static constexpr std::uintptr_t ReactAlpha = 0x11E8;
            static constexpr std::uintptr_t SharpTurnAlphaFast = 0x11EC;
            static constexpr std::uintptr_t SharpTurnAlphaSlow = 0x11F0;
            static constexpr std::uintptr_t SpringStiffnessXY = 0x11F4;
            static constexpr std::uintptr_t SpringStiffnessZ = 0x11F8;
            static constexpr std::uintptr_t SpringDampingXY = 0x11FC;
            static constexpr std::uintptr_t SpringDampingZ = 0x1200;
            static constexpr std::uintptr_t bIsSurfing = 0x1204;
            static constexpr std::uintptr_t bIsBoost = 0x1205;
            static constexpr std::uintptr_t bIsWalking = 0x1206;
            static constexpr std::uintptr_t bIsTacSprint = 0x1207;
            static constexpr std::uintptr_t bIsPreBoost = 0x1208;
            static constexpr std::uintptr_t bIsActivateMontage = 0x1209;
            static constexpr std::uintptr_t bIsClambering = 0x120A;
            static constexpr std::uintptr_t bActorHiddenInGame = 0x120B;
            static constexpr std::uintptr_t bIsPreLand = 0x120C;
            static constexpr std::uintptr_t bIsLanding = 0x120D;
            static constexpr std::uintptr_t bIsFall = 0x120E;
            static constexpr std::uintptr_t bBypassArmAdditive = 0x120F;
            static constexpr std::uintptr_t RootRotInterp = 0x1210;
            static constexpr std::uintptr_t ChangeInDirection = 0x1228;
            static constexpr std::uintptr_t PreviousTurn = 0x122C;
            static constexpr std::uintptr_t ZVelocityInterp = 0x1230;
            static constexpr std::uintptr_t SlopePitch = 0x1234;
            static constexpr std::uintptr_t bIsTurn = 0x1238;
            static constexpr std::uintptr_t bIsTurnLeft = 0x1239;
            static constexpr std::uintptr_t bIsTurnLeft180 = 0x123A;
            static constexpr std::uintptr_t bIsTurnRight = 0x123B;
            static constexpr std::uintptr_t bIsTurnRight180 = 0x123C;
            static constexpr std::uintptr_t bIsStanceAdjustGateOpen = 0x123D;
            static constexpr std::uintptr_t bResetOpenStanceAdjustGateAftterDelayDoOnce = 0x123E;
            static constexpr std::uintptr_t bIsDoorBashing = 0x123F;
        };

        inline static constexpr std::array<PropertyInfo, 51> Properties{{
            {"BoostingTag", 0x1180, "StructProperty"},
            {"CubeSurfingTag", 0x1184, "StructProperty"},
            {"TacSprintTag", 0x1188, "StructProperty"},
            {"WalkingTag", 0x118C, "StructProperty"},
            {"ClamberingTag", 0x1190, "StructProperty"},
            {"FallingTag", 0x1194, "StructProperty"},
            {"AirborneTag", 0x1198, "StructProperty"},
            {"PreBoostTag", 0x119C, "StructProperty"},
            {"HurdlingTag", 0x11A0, "StructProperty"},
            {"ActivateMontage", 0x11A8, "ObjectProperty"},
            {"MaxHardTurnValue", 0x11B0, "FloatProperty"},
            {"MinHardTurnValue", 0x11B4, "FloatProperty"},
            {"AttachLocation", 0x11B8, "StructProperty"},
            {"InputLeftRight", 0x11D0, "FloatProperty"},
            {"InputFrontBack", 0x11D4, "FloatProperty"},
            {"ZVelocity", 0x11D8, "FloatProperty"},
            {"NoiseAlpha", 0x11DC, "FloatProperty"},
            {"NoiseRate", 0x11E0, "FloatProperty"},
            {"StanceAdjustValue", 0x11E4, "FloatProperty"},
            {"ReactAlpha", 0x11E8, "FloatProperty"},
            {"SharpTurnAlphaFast", 0x11EC, "FloatProperty"},
            {"SharpTurnAlphaSlow", 0x11F0, "FloatProperty"},
            {"SpringStiffnessXY", 0x11F4, "FloatProperty"},
            {"SpringStiffnessZ", 0x11F8, "FloatProperty"},
            {"SpringDampingXY", 0x11FC, "FloatProperty"},
            {"SpringDampingZ", 0x1200, "FloatProperty"},
            {"bIsSurfing", 0x1204, "BoolProperty"},
            {"bIsBoost", 0x1205, "BoolProperty"},
            {"bIsWalking", 0x1206, "BoolProperty"},
            {"bIsTacSprint", 0x1207, "BoolProperty"},
            {"bIsPreBoost", 0x1208, "BoolProperty"},
            {"bIsActivateMontage", 0x1209, "BoolProperty"},
            {"bIsClambering", 0x120A, "BoolProperty"},
            {"bActorHiddenInGame", 0x120B, "BoolProperty"},
            {"bIsPreLand", 0x120C, "BoolProperty"},
            {"bIsLanding", 0x120D, "BoolProperty"},
            {"bIsFall", 0x120E, "BoolProperty"},
            {"bBypassArmAdditive", 0x120F, "BoolProperty"},
            {"RootRotInterp", 0x1210, "StructProperty"},
            {"ChangeInDirection", 0x1228, "FloatProperty"},
            {"PreviousTurn", 0x122C, "FloatProperty"},
            {"ZVelocityInterp", 0x1230, "FloatProperty"},
            {"SlopePitch", 0x1234, "FloatProperty"},
            {"bIsTurn", 0x1238, "BoolProperty"},
            {"bIsTurnLeft", 0x1239, "BoolProperty"},
            {"bIsTurnLeft180", 0x123A, "BoolProperty"},
            {"bIsTurnRight", 0x123B, "BoolProperty"},
            {"bIsTurnRight180", 0x123C, "BoolProperty"},
            {"bIsStanceAdjustGateOpen", 0x123D, "BoolProperty"},
            {"bResetOpenStanceAdjustGateAftterDelayDoOnce", 0x123E, "BoolProperty"},
            {"bIsDoorBashing", 0x123F, "BoolProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicCubeSurfing
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicCubeSurfing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ItemActivated";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTags = 0x3A0;
            static constexpr std::uintptr_t OverWaterTag = 0x3B0;
            static constexpr std::uintptr_t MovementRampUpTime = 0x3B8;
            static constexpr std::uintptr_t BoostReadyDelay = 0x3E0;
            static constexpr std::uintptr_t MovementInputRecoveryTimeStart = 0x408;
            static constexpr std::uintptr_t MovementInputRecoveryTimeEnd = 0x430;
            static constexpr std::uintptr_t GlobalSpeedLimit = 0x458;
            static constexpr std::uintptr_t ApplyForcesRelativeToGroundNormal = 0x480;
            static constexpr std::uintptr_t DownwardVelocityCancelHeight = 0x4A8;
            static constexpr std::uintptr_t RampUpThrustData = 0x4D0;
            static constexpr std::uintptr_t GroundedThrustData = 0x5C0;
            static constexpr std::uintptr_t GroundedNeutralThrustData = 0x6B0;
            static constexpr std::uintptr_t GroundedBrakingThrustData = 0x7A0;
            static constexpr std::uintptr_t CuttingThrustData = 0x890;
            static constexpr std::uintptr_t PreBoostThrustData = 0x980;
            static constexpr std::uintptr_t BoostingThrustData = 0xA70;
            static constexpr std::uintptr_t TurnInputMode = 0xB60;
            static constexpr std::uintptr_t MaxStrafeAngleDegrees = 0xB68;
            static constexpr std::uintptr_t TurnDampeningMultiplier = 0xB90;
            static constexpr std::uintptr_t TurnDampeningStartAngleDegrees = 0xBB8;
            static constexpr std::uintptr_t MinSlopeAngleDegrees = 0xBE0;
            static constexpr std::uintptr_t MaxSlopeAngleDegrees = 0xC08;
            static constexpr std::uintptr_t ApplySlopeForceWhileMovingDownSlopes = 0xC30;
            static constexpr std::uintptr_t SlopeForce = 0xC58;
            static constexpr std::uintptr_t SlopeForceRight = 0xC80;
            static constexpr std::uintptr_t MaxTurnAroundForwardAngle = 0xCA8;
            static constexpr std::uintptr_t DefaultHoverData = 0xCD0;
            static constexpr std::uintptr_t Gravity = 0xDF0;
            static constexpr std::uintptr_t HoverMaxUpdateRate = 0xE18;
            static constexpr std::uintptr_t HoverMaxUpwardVelocity = 0xE40;
            static constexpr std::uintptr_t JumpMode = 0xE68;
            static constexpr std::uintptr_t DoubleJumpExitTime = 0xE70;
            static constexpr std::uintptr_t JumpSpeed = 0xE98;
            static constexpr std::uintptr_t MaxJumpSpeed = 0xEC0;
            static constexpr std::uintptr_t JumpSpeedIsMinimum = 0xEE8;
            static constexpr std::uintptr_t CanJumpOnSteepSlopes = 0xF10;
            static constexpr std::uintptr_t MaxSlopeJumpAngleDegrees = 0xF38;
            static constexpr std::uintptr_t CanBoostWithSprint = 0xF60;
            static constexpr std::uintptr_t CanBoostWithSecondary = 0xF88;
            static constexpr std::uintptr_t BoostActivationMode = 0xFB0;
            static constexpr std::uintptr_t BoostMode = 0xFB1;
            static constexpr std::uintptr_t BoostFullChargeTime = 0xFB8;
            static constexpr std::uintptr_t BoostAutoChargeTime = 0xFE0;
            static constexpr std::uintptr_t BoostRetentionTimeStart = 0x1008;
            static constexpr std::uintptr_t BoostRetentionTimeEnd = 0x1030;
            static constexpr std::uintptr_t MaxBoostDuration = 0x1058;
            static constexpr std::uintptr_t MinBoostDuration = 0x1080;
            static constexpr std::uintptr_t PreBoostDuration = 0x10A8;
            static constexpr std::uintptr_t MinTimeBetweenBoosts = 0x10D0;
            static constexpr std::uintptr_t BoostGrantsFlight = 0x10F8;
            static constexpr std::uintptr_t BoostImmediatelyToMaxSpeed = 0x1120;
            static constexpr std::uintptr_t BoostPopUpTime = 0x1148;
            static constexpr std::uintptr_t BoostPopUpMinUpDirection = 0x1170;
            static constexpr std::uintptr_t FlyingCameraUpDirectionMagnification = 0x1198;
            static constexpr std::uintptr_t FlyingJumpMinUpDirection = 0x11C0;
            static constexpr std::uintptr_t FlyingCrouchMaxUpDirection = 0x11E8;
            static constexpr std::uintptr_t OnCubeSurfingBoostCooldownCompleted = 0x12C8;
            static constexpr std::uintptr_t OnCubeSurfingBoostCharging = 0x12D8;
            static constexpr std::uintptr_t OnCubeSurfingBoost = 0x12E8;
            static constexpr std::uintptr_t OnCubeSurfingBoostEnd = 0x12F8;
            static constexpr std::uintptr_t OnCubeSurfingFailedBoost = 0x1308;
            static constexpr std::uintptr_t OnCubeSurfingBeginRaiseWave = 0x1318;
            static constexpr std::uintptr_t OnCubeSurfingEndRaiseWave = 0x1328;
            static constexpr std::uintptr_t OnCubeSurfingLanded = 0x1338;
            static constexpr std::uintptr_t OnCubeSurfingAirborne = 0x1348;
            static constexpr std::uintptr_t OnCubeSurfingJump = 0x1358;
            static constexpr std::uintptr_t OnWaterActorChanged = 0x1368;
            static constexpr std::uintptr_t OnCrashLanding = 0x1378;
        };

        inline static constexpr std::array<PropertyInfo, 68> Properties{{
            {"StateTags", 0x3A0, "MapProperty"},
            {"OverWaterTag", 0x3B0, "StructProperty"},
            {"MovementRampUpTime", 0x3B8, "StructProperty"},
            {"BoostReadyDelay", 0x3E0, "StructProperty"},
            {"MovementInputRecoveryTimeStart", 0x408, "StructProperty"},
            {"MovementInputRecoveryTimeEnd", 0x430, "StructProperty"},
            {"GlobalSpeedLimit", 0x458, "StructProperty"},
            {"ApplyForcesRelativeToGroundNormal", 0x480, "StructProperty"},
            {"DownwardVelocityCancelHeight", 0x4A8, "StructProperty"},
            {"RampUpThrustData", 0x4D0, "StructProperty"},
            {"GroundedThrustData", 0x5C0, "StructProperty"},
            {"GroundedNeutralThrustData", 0x6B0, "StructProperty"},
            {"GroundedBrakingThrustData", 0x7A0, "StructProperty"},
            {"CuttingThrustData", 0x890, "StructProperty"},
            {"PreBoostThrustData", 0x980, "StructProperty"},
            {"BoostingThrustData", 0xA70, "StructProperty"},
            {"TurnInputMode", 0xB60, "EnumProperty"},
            {"MaxStrafeAngleDegrees", 0xB68, "StructProperty"},
            {"TurnDampeningMultiplier", 0xB90, "StructProperty"},
            {"TurnDampeningStartAngleDegrees", 0xBB8, "StructProperty"},
            {"MinSlopeAngleDegrees", 0xBE0, "StructProperty"},
            {"MaxSlopeAngleDegrees", 0xC08, "StructProperty"},
            {"ApplySlopeForceWhileMovingDownSlopes", 0xC30, "StructProperty"},
            {"SlopeForce", 0xC58, "StructProperty"},
            {"SlopeForceRight", 0xC80, "StructProperty"},
            {"MaxTurnAroundForwardAngle", 0xCA8, "StructProperty"},
            {"DefaultHoverData", 0xCD0, "StructProperty"},
            {"Gravity", 0xDF0, "StructProperty"},
            {"HoverMaxUpdateRate", 0xE18, "StructProperty"},
            {"HoverMaxUpwardVelocity", 0xE40, "StructProperty"},
            {"JumpMode", 0xE68, "EnumProperty"},
            {"DoubleJumpExitTime", 0xE70, "StructProperty"},
            {"JumpSpeed", 0xE98, "StructProperty"},
            {"MaxJumpSpeed", 0xEC0, "StructProperty"},
            {"JumpSpeedIsMinimum", 0xEE8, "StructProperty"},
            {"CanJumpOnSteepSlopes", 0xF10, "StructProperty"},
            {"MaxSlopeJumpAngleDegrees", 0xF38, "StructProperty"},
            {"CanBoostWithSprint", 0xF60, "StructProperty"},
            {"CanBoostWithSecondary", 0xF88, "StructProperty"},
            {"BoostActivationMode", 0xFB0, "EnumProperty"},
            {"BoostMode", 0xFB1, "EnumProperty"},
            {"BoostFullChargeTime", 0xFB8, "StructProperty"},
            {"BoostAutoChargeTime", 0xFE0, "StructProperty"},
            {"BoostRetentionTimeStart", 0x1008, "StructProperty"},
            {"BoostRetentionTimeEnd", 0x1030, "StructProperty"},
            {"MaxBoostDuration", 0x1058, "StructProperty"},
            {"MinBoostDuration", 0x1080, "StructProperty"},
            {"PreBoostDuration", 0x10A8, "StructProperty"},
            {"MinTimeBetweenBoosts", 0x10D0, "StructProperty"},
            {"BoostGrantsFlight", 0x10F8, "StructProperty"},
            {"BoostImmediatelyToMaxSpeed", 0x1120, "StructProperty"},
            {"BoostPopUpTime", 0x1148, "StructProperty"},
            {"BoostPopUpMinUpDirection", 0x1170, "StructProperty"},
            {"FlyingCameraUpDirectionMagnification", 0x1198, "StructProperty"},
            {"FlyingJumpMinUpDirection", 0x11C0, "StructProperty"},
            {"FlyingCrouchMaxUpDirection", 0x11E8, "StructProperty"},
            {"OnCubeSurfingBoostCooldownCompleted", 0x12C8, "MulticastInlineDelegateProperty"},
            {"OnCubeSurfingBoostCharging", 0x12D8, "MulticastInlineDelegateProperty"},
            {"OnCubeSurfingBoost", 0x12E8, "MulticastInlineDelegateProperty"},
            {"OnCubeSurfingBoostEnd", 0x12F8, "MulticastInlineDelegateProperty"},
            {"OnCubeSurfingFailedBoost", 0x1308, "MulticastInlineDelegateProperty"},
            {"OnCubeSurfingBeginRaiseWave", 0x1318, "MulticastInlineDelegateProperty"},
            {"OnCubeSurfingEndRaiseWave", 0x1328, "MulticastInlineDelegateProperty"},
            {"OnCubeSurfingLanded", 0x1338, "MulticastInlineDelegateProperty"},
            {"OnCubeSurfingAirborne", 0x1348, "MulticastInlineDelegateProperty"},
            {"OnCubeSurfingJump", 0x1358, "MulticastInlineDelegateProperty"},
            {"OnWaterActorChanged", 0x1368, "MulticastInlineDelegateProperty"},
            {"OnCrashLanding", 0x1378, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortMovementMode_RuntimeDataCubeSurfing
    {
        static constexpr std::string_view Name = "FortMovementMode_RuntimeDataCubeSurfing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ItemActivatedRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingSimProxyWaterBody = 0x80;
            static constexpr std::uintptr_t WaterBody = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PendingSimProxyWaterBody", 0x80, "WeakObjectProperty"},
            {"WaterBody", 0xE0, "WeakObjectProperty"},
        }};
    };

}
