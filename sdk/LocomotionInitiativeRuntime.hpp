#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LocomotionInitiativeRuntime
{
    struct FortLocomotionLayerMaskDataAsset
    {
        static constexpr std::string_view Name = "FortLocomotionLayerMaskDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MaskingHeadTorsoAlpha = 0x28;
            static constexpr std::uintptr_t MaskingLeftArmAlpha = 0x2C;
            static constexpr std::uintptr_t MaskingRightArmAlpha = 0x30;
            static constexpr std::uintptr_t MaskingWeaponAlpha = 0x34;
            static constexpr std::uintptr_t MutingHeadTorsoAlpha = 0x38;
            static constexpr std::uintptr_t MutingLeftArmAlpha = 0x3C;
            static constexpr std::uintptr_t MutingRightArmAlpha = 0x40;
            static constexpr std::uintptr_t MutingWeaponAlpha = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MaskingHeadTorsoAlpha", 0x28, "FloatProperty"},
            {"MaskingLeftArmAlpha", 0x2C, "FloatProperty"},
            {"MaskingRightArmAlpha", 0x30, "FloatProperty"},
            {"MaskingWeaponAlpha", 0x34, "FloatProperty"},
            {"MutingHeadTorsoAlpha", 0x38, "FloatProperty"},
            {"MutingLeftArmAlpha", 0x3C, "FloatProperty"},
            {"MutingRightArmAlpha", 0x40, "FloatProperty"},
            {"MutingWeaponAlpha", 0x44, "FloatProperty"},
        }};
    };

    struct FortPlayerMotionMatchingLocomotionAnimInstance
    {
        static constexpr std::string_view Name = "FortPlayerMotionMatchingLocomotionAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t MotionMatchingSearchContext = 0x1180;
            static constexpr std::uintptr_t HipCorrections = 0x11F0;
            static constexpr std::uintptr_t FutureRootMotionVelocity = 0x1200;
            static constexpr std::uintptr_t TestConfig = 0x1218;
            static constexpr std::uintptr_t LowEndTestConfig = 0x1260;
            static constexpr std::uintptr_t HighEndConfig = 0x12A8;
            static constexpr std::uintptr_t LowEndConfig = 0x12F0;
            static constexpr std::uintptr_t CurrentLODConfig = 0x1338;
            static constexpr std::uintptr_t CustomMotionMatchingDataProxyTable = 0x1380;
            static constexpr std::uintptr_t CustomMotionMatchingPoseSearchProxyAsset = 0x1388;
            static constexpr std::uintptr_t CustomMotionMatchingConfigProxyAsset = 0x1390;
            static constexpr std::uintptr_t CustomMotionMatchingConfig = 0x1398;
            static constexpr std::uintptr_t StandIdleOverride = 0x13A0;
            static constexpr std::uintptr_t bHasStandIdleOverride = 0x13A8;
            static constexpr std::uintptr_t SelectedIdleBreak = 0x13B0;
            static constexpr std::uintptr_t MotionMatchingLODProxyAsset = 0x13B8;
            static constexpr std::uintptr_t MotionMatchingLOD = 0x13C0;
            static constexpr std::uintptr_t MotionMatchingBlendInfo = 0x13C4;
            static constexpr std::uintptr_t StopBranchOutWindowNotifyClass = 0x13D0;
            static constexpr std::uintptr_t LocomotionState = 0x13D8;
            static constexpr std::uintptr_t StartToLoopSearchDelaySeconds = 0x13DC;
            static constexpr std::uintptr_t PivotToLoopSearchDelaySeconds = 0x13E0;
            static constexpr std::uintptr_t PivotSpeedThreshold = 0x13E4;
            static constexpr std::uintptr_t LargePivotAngleThreshold = 0x13E8;
            static constexpr std::uintptr_t bIsLargePivot = 0x13EC;
            static constexpr std::uintptr_t MinSpeedToSkipStartOnForwardConeLanding = 0x13F0;
            static constexpr std::uintptr_t PivotDotProductThresholdWalk = 0x13F4;
            static constexpr std::uintptr_t PivotDotProductThresholdJog = 0x13F8;
            static constexpr std::uintptr_t PivotDotProductThresholdRun = 0x13FC;
            static constexpr std::uintptr_t PivotDotProductThresholdSprint = 0x1400;
            static constexpr std::uintptr_t DiagonalDetectionThreshold = 0x1404;
            static constexpr std::uintptr_t LocomotionStateTime = 0x1408;
            static constexpr std::uintptr_t VelocityDirection = 0x140C;
            static constexpr std::uintptr_t MotionMatchingWeight = 0x1410;
            static constexpr std::uintptr_t DatabaseSearchInterruptMode = 0x1414;
            static constexpr std::uintptr_t PelvisRotationAdjustment = 0x1418;
            static constexpr std::uintptr_t CurrentHipFireHipCorrection = 0x1430;
            static constexpr std::uintptr_t bUseOrientationWarping = 0x1434;
            static constexpr std::uintptr_t OrientationWarpingAlpha = 0x1438;
            static constexpr std::uintptr_t bUseFutureForOrientationWarping = 0x143C;
            static constexpr std::uintptr_t bIsLowEnd = 0x143D;
            static constexpr std::uintptr_t bWasLowEnd = 0x143E;
            static constexpr std::uintptr_t bUseLocomotionBlendspace = 0x143F;
            static constexpr std::uintptr_t bShouldPlayIdle = 0x1440;
            static constexpr std::uintptr_t bShouldPlayIdleBreak = 0x1441;
            static constexpr std::uintptr_t bShouldExitIdleBreak = 0x1442;
            static constexpr std::uintptr_t bShouldExitIdleBreakSlow = 0x1443;
            static constexpr std::uintptr_t IdleTransitionTimer = 0x1444;
            static constexpr std::uintptr_t IdleBreakTimer = 0x1448;
            static constexpr std::uintptr_t bBothHandsIKInHandSpace = 0x144C;
            static constexpr std::uintptr_t bIsCrouchedTransition = 0x144D;
            static constexpr std::uintptr_t bWasCrouching = 0x144E;
            static constexpr std::uintptr_t bShouldPlayStandToCrouchTransition = 0x144F;
            static constexpr std::uintptr_t bShouldPlayCrouchToStandTransition = 0x1450;
            static constexpr std::uintptr_t bShouldExitCrouchTransition = 0x1451;
            static constexpr std::uintptr_t bIsLocallyControlled = 0x1452;
            static constexpr std::uintptr_t bEnableHipCorrection = 0x1453;
            static constexpr std::uintptr_t HipFiringStanceTimeStamp = 0x1454;
            static constexpr std::uintptr_t CameraSpamYawThreshold = 0x1458;
            static constexpr std::uintptr_t CameraSpamCoolDownSeconds = 0x145C;
            static constexpr std::uintptr_t CameraSpamSearchThrottleTime = 0x1460;
            static constexpr std::uintptr_t DefaultSearchThrottleTime = 0x1464;
            static constexpr std::uintptr_t PlayRateMultiplier = 0x1468;
            static constexpr std::uintptr_t SearchThrottleTime = 0x146C;
            static constexpr std::uintptr_t bShouldExecuteMotionMatchingSearch = 0x1470;
            static constexpr std::uintptr_t MaximumLeanAngle = 0x1474;
            static constexpr std::uintptr_t AdditiveLeanAlpha = 0x1478;
            static constexpr std::uintptr_t bDisableArcs = 0x147C;
            static constexpr std::uintptr_t bDisableDiamonds = 0x147C;
            static constexpr std::uintptr_t bEnableAdditiveLeans = 0x147C;
            static constexpr std::uintptr_t bEnableAdditiveRunLeans = 0x147C;
            static constexpr std::uintptr_t bIdleToMotionMatchingCrouchTransition = 0x147C;
            static constexpr std::uintptr_t bIdleToMotionMatchingNoInertialization = 0x147C;
            static constexpr std::uintptr_t bIsMelee = 0x147C;
            static constexpr std::uintptr_t bRelaxedStateChanged = 0x147C;
            static constexpr std::uintptr_t bIsJogging = 0x147D;
            static constexpr std::uintptr_t bIsJoggingInForwardCone = 0x147D;
            static constexpr std::uintptr_t bIsRunning = 0x147D;
            static constexpr std::uintptr_t bIsWalking = 0x147D;
            static constexpr std::uintptr_t bPlayJogToRunTransition = 0x147D;
            static constexpr std::uintptr_t bPlayRunToJogTransition = 0x147D;
            static constexpr std::uintptr_t bPlayRunToSprintTransition = 0x147D;
            static constexpr std::uintptr_t bUseRelaxedMotionMatchingData = 0x147D;
            static constexpr std::uintptr_t bUseLowLODLocomotion = 0x147E;
            static constexpr std::uintptr_t PreviousLocalVelocityYawAngle = 0x1480;
            static constexpr std::uintptr_t Trajectory = 0x1488;
            static constexpr std::uintptr_t TrajectorySamplingData = 0x1498;
            static constexpr std::uintptr_t CharacterTrajectoryData = 0x14C0;
            static constexpr std::uintptr_t TrajectorySpeedMultiplier = 0x1650;
            static constexpr std::uintptr_t LowFrictionCustomMaxSpeed = 0x1654;
            static constexpr std::uintptr_t LowFrictionMeleeTwistCustomMaxSpeed = 0x1658;
            static constexpr std::uintptr_t LowFrictionCrouchMeleeTwistCustomMaxSpeed = 0x165C;
            static constexpr std::uintptr_t MeleeTwistBlendSpacePawnSpeed = 0x1660;
            static constexpr std::uintptr_t LowFrictionCustomBrakingDeceleration = 0x1664;
            static constexpr std::uintptr_t LowFrictionCustomFriction = 0x1668;
            static constexpr std::uintptr_t AccelerationSpamTracker = 0x1670;
            static constexpr std::uintptr_t Velocity = 0x16C8;
            static constexpr std::uintptr_t PrevVelocity = 0x16E0;
            static constexpr std::uintptr_t Acceleration = 0x16F8;
            static constexpr std::uintptr_t SmoothedAcceleration = 0x1710;
            static constexpr std::uintptr_t PawnFacing = 0x1728;
            static constexpr std::uintptr_t FortMovementStyle = 0x1750;
            static constexpr std::uintptr_t bIsPlayingIdleBreak = 0x1753;
            static constexpr std::uintptr_t LastUpdateFrame = 0x1760;
            static constexpr std::uintptr_t LastMotionMatchingUpdateFrame = 0x1764;
            static constexpr std::uintptr_t bIsPlayingInterruptibleStop = 0x1768;
            static constexpr std::uintptr_t bIsPlayingIdleDatabase = 0x1769;
            static constexpr std::uintptr_t bIsPlayingStopDatabase = 0x176A;
            static constexpr std::uintptr_t bHasReachedIdle = 0x176B;
            static constexpr std::uintptr_t bWasInAir = 0x176C;
            static constexpr std::uintptr_t DefaultBendVelocityTowardsAcceleration = 0x1770;
            static constexpr std::uintptr_t bActiveLastFrame = 0x1774;
        };

        inline static constexpr std::array<PropertyInfo, 112> Properties{{
            {"MotionMatchingSearchContext", 0x1180, "StructProperty"},
            {"HipCorrections", 0x11F0, "ArrayProperty"},
            {"FutureRootMotionVelocity", 0x1200, "StructProperty"},
            {"TestConfig", 0x1218, "StructProperty"},
            {"LowEndTestConfig", 0x1260, "StructProperty"},
            {"HighEndConfig", 0x12A8, "StructProperty"},
            {"LowEndConfig", 0x12F0, "StructProperty"},
            {"CurrentLODConfig", 0x1338, "StructProperty"},
            {"CustomMotionMatchingDataProxyTable", 0x1380, "ObjectProperty"},
            {"CustomMotionMatchingPoseSearchProxyAsset", 0x1388, "ObjectProperty"},
            {"CustomMotionMatchingConfigProxyAsset", 0x1390, "ObjectProperty"},
            {"CustomMotionMatchingConfig", 0x1398, "ObjectProperty"},
            {"StandIdleOverride", 0x13A0, "ObjectProperty"},
            {"bHasStandIdleOverride", 0x13A8, "BoolProperty"},
            {"SelectedIdleBreak", 0x13B0, "ObjectProperty"},
            {"MotionMatchingLODProxyAsset", 0x13B8, "ObjectProperty"},
            {"MotionMatchingLOD", 0x13C0, "IntProperty"},
            {"MotionMatchingBlendInfo", 0x13C4, "StructProperty"},
            {"StopBranchOutWindowNotifyClass", 0x13D0, "ClassProperty"},
            {"LocomotionState", 0x13D8, "EnumProperty"},
            {"StartToLoopSearchDelaySeconds", 0x13DC, "FloatProperty"},
            {"PivotToLoopSearchDelaySeconds", 0x13E0, "FloatProperty"},
            {"PivotSpeedThreshold", 0x13E4, "FloatProperty"},
            {"LargePivotAngleThreshold", 0x13E8, "FloatProperty"},
            {"bIsLargePivot", 0x13EC, "BoolProperty"},
            {"MinSpeedToSkipStartOnForwardConeLanding", 0x13F0, "FloatProperty"},
            {"PivotDotProductThresholdWalk", 0x13F4, "FloatProperty"},
            {"PivotDotProductThresholdJog", 0x13F8, "FloatProperty"},
            {"PivotDotProductThresholdRun", 0x13FC, "FloatProperty"},
            {"PivotDotProductThresholdSprint", 0x1400, "FloatProperty"},
            {"DiagonalDetectionThreshold", 0x1404, "FloatProperty"},
            {"LocomotionStateTime", 0x1408, "FloatProperty"},
            {"VelocityDirection", 0x140C, "FloatProperty"},
            {"MotionMatchingWeight", 0x1410, "FloatProperty"},
            {"DatabaseSearchInterruptMode", 0x1414, "EnumProperty"},
            {"PelvisRotationAdjustment", 0x1418, "StructProperty"},
            {"CurrentHipFireHipCorrection", 0x1430, "FloatProperty"},
            {"bUseOrientationWarping", 0x1434, "BoolProperty"},
            {"OrientationWarpingAlpha", 0x1438, "FloatProperty"},
            {"bUseFutureForOrientationWarping", 0x143C, "BoolProperty"},
            {"bIsLowEnd", 0x143D, "BoolProperty"},
            {"bWasLowEnd", 0x143E, "BoolProperty"},
            {"bUseLocomotionBlendspace", 0x143F, "BoolProperty"},
            {"bShouldPlayIdle", 0x1440, "BoolProperty"},
            {"bShouldPlayIdleBreak", 0x1441, "BoolProperty"},
            {"bShouldExitIdleBreak", 0x1442, "BoolProperty"},
            {"bShouldExitIdleBreakSlow", 0x1443, "BoolProperty"},
            {"IdleTransitionTimer", 0x1444, "FloatProperty"},
            {"IdleBreakTimer", 0x1448, "FloatProperty"},
            {"bBothHandsIKInHandSpace", 0x144C, "BoolProperty"},
            {"bIsCrouchedTransition", 0x144D, "BoolProperty"},
            {"bWasCrouching", 0x144E, "BoolProperty"},
            {"bShouldPlayStandToCrouchTransition", 0x144F, "BoolProperty"},
            {"bShouldPlayCrouchToStandTransition", 0x1450, "BoolProperty"},
            {"bShouldExitCrouchTransition", 0x1451, "BoolProperty"},
            {"bIsLocallyControlled", 0x1452, "BoolProperty"},
            {"bEnableHipCorrection", 0x1453, "BoolProperty"},
            {"HipFiringStanceTimeStamp", 0x1454, "FloatProperty"},
            {"CameraSpamYawThreshold", 0x1458, "FloatProperty"},
            {"CameraSpamCoolDownSeconds", 0x145C, "FloatProperty"},
            {"CameraSpamSearchThrottleTime", 0x1460, "FloatProperty"},
            {"DefaultSearchThrottleTime", 0x1464, "FloatProperty"},
            {"PlayRateMultiplier", 0x1468, "FloatProperty"},
            {"SearchThrottleTime", 0x146C, "FloatProperty"},
            {"bShouldExecuteMotionMatchingSearch", 0x1470, "BoolProperty"},
            {"MaximumLeanAngle", 0x1474, "FloatProperty"},
            {"AdditiveLeanAlpha", 0x1478, "FloatProperty"},
            {"bDisableArcs", 0x147C, "BoolProperty"},
            {"bDisableDiamonds", 0x147C, "BoolProperty"},
            {"bEnableAdditiveLeans", 0x147C, "BoolProperty"},
            {"bEnableAdditiveRunLeans", 0x147C, "BoolProperty"},
            {"bIdleToMotionMatchingCrouchTransition", 0x147C, "BoolProperty"},
            {"bIdleToMotionMatchingNoInertialization", 0x147C, "BoolProperty"},
            {"bIsMelee", 0x147C, "BoolProperty"},
            {"bRelaxedStateChanged", 0x147C, "BoolProperty"},
            {"bIsJogging", 0x147D, "BoolProperty"},
            {"bIsJoggingInForwardCone", 0x147D, "BoolProperty"},
            {"bIsRunning", 0x147D, "BoolProperty"},
            {"bIsWalking", 0x147D, "BoolProperty"},
            {"bPlayJogToRunTransition", 0x147D, "BoolProperty"},
            {"bPlayRunToJogTransition", 0x147D, "BoolProperty"},
            {"bPlayRunToSprintTransition", 0x147D, "BoolProperty"},
            {"bUseRelaxedMotionMatchingData", 0x147D, "BoolProperty"},
            {"bUseLowLODLocomotion", 0x147E, "BoolProperty"},
            {"PreviousLocalVelocityYawAngle", 0x1480, "FloatProperty"},
            {"Trajectory", 0x1488, "StructProperty"},
            {"TrajectorySamplingData", 0x1498, "StructProperty"},
            {"CharacterTrajectoryData", 0x14C0, "StructProperty"},
            {"TrajectorySpeedMultiplier", 0x1650, "FloatProperty"},
            {"LowFrictionCustomMaxSpeed", 0x1654, "FloatProperty"},
            {"LowFrictionMeleeTwistCustomMaxSpeed", 0x1658, "FloatProperty"},
            {"LowFrictionCrouchMeleeTwistCustomMaxSpeed", 0x165C, "FloatProperty"},
            {"MeleeTwistBlendSpacePawnSpeed", 0x1660, "FloatProperty"},
            {"LowFrictionCustomBrakingDeceleration", 0x1664, "FloatProperty"},
            {"LowFrictionCustomFriction", 0x1668, "FloatProperty"},
            {"AccelerationSpamTracker", 0x1670, "StructProperty"},
            {"Velocity", 0x16C8, "StructProperty"},
            {"PrevVelocity", 0x16E0, "StructProperty"},
            {"Acceleration", 0x16F8, "StructProperty"},
            {"SmoothedAcceleration", 0x1710, "StructProperty"},
            {"PawnFacing", 0x1728, "StructProperty"},
            {"FortMovementStyle", 0x1750, "ByteProperty"},
            {"bIsPlayingIdleBreak", 0x1753, "BoolProperty"},
            {"LastUpdateFrame", 0x1760, "IntProperty"},
            {"LastMotionMatchingUpdateFrame", 0x1764, "IntProperty"},
            {"bIsPlayingInterruptibleStop", 0x1768, "BoolProperty"},
            {"bIsPlayingIdleDatabase", 0x1769, "BoolProperty"},
            {"bIsPlayingStopDatabase", 0x176A, "BoolProperty"},
            {"bHasReachedIdle", 0x176B, "BoolProperty"},
            {"bWasInAir", 0x176C, "BoolProperty"},
            {"DefaultBendVelocityTowardsAcceleration", 0x1770, "FloatProperty"},
            {"bActiveLastFrame", 0x1774, "BoolProperty"},
        }};
    };

    struct LocomotionInitiativeComponent
    {
        static constexpr std::string_view Name = "LocomotionInitiativeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MotionMatchingLocomotionAnimBlueprintClass = 0xC8;
            static constexpr std::uintptr_t RigidBodyPBA_AnimBlueprintClass = 0xD0;
            static constexpr std::uintptr_t IsLocomotionInitiativeEnabled = 0xD8;
            static constexpr std::uintptr_t CrouchShuffleInPlaceAnim = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MotionMatchingLocomotionAnimBlueprintClass", 0xC8, "ClassProperty"},
            {"RigidBodyPBA_AnimBlueprintClass", 0xD0, "ClassProperty"},
            {"IsLocomotionInitiativeEnabled", 0xD8, "StructProperty"},
            {"CrouchShuffleInPlaceAnim", 0x100, "ObjectProperty"},
        }};
    };

    struct LocomotionInitiativeGameFeatureData
    {
        static constexpr std::string_view Name = "LocomotionInitiativeGameFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableRequestedFullBodyPBAByDefault = 0x448;
            static constexpr std::uintptr_t EnableSkydivingFullBodyPBAByDefault = 0x460;
            static constexpr std::uintptr_t EnableDBNOCarriedFullBodyPBAByDefault = 0x478;
            static constexpr std::uintptr_t SkydivingEnablePhysicsBasedAnimationByDefault = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EnableRequestedFullBodyPBAByDefault", 0x448, "StructProperty"},
            {"EnableSkydivingFullBodyPBAByDefault", 0x460, "StructProperty"},
            {"EnableDBNOCarriedFullBodyPBAByDefault", 0x478, "StructProperty"},
            {"SkydivingEnablePhysicsBasedAnimationByDefault", 0x490, "StructProperty"},
        }};
    };

}
