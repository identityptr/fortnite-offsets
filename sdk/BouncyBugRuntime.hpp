#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BouncyBugRuntime
{
    struct BGA_RolyPolyOnPlayer
    {
        static constexpr std::string_view Name = "BGA_RolyPolyOnPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t KineticEnergyForwardAmount = 0x940;
            static constexpr std::uintptr_t KineticEnergyMagnitude = 0x944;
            static constexpr std::uintptr_t CurrentGroundZ = 0x948;
            static constexpr std::uintptr_t bOnGround = 0x94C;
            static constexpr std::uintptr_t bInWater = 0x94D;
            static constexpr std::uintptr_t LastTouchedWaterTime = 0x950;
            static constexpr std::uintptr_t bReadyToBoost = 0x954;
            static constexpr std::uintptr_t bIsSuckedIn = 0x955;
            static constexpr std::uintptr_t BouncyBugMovementActiveTag = 0x958;
            static constexpr std::uintptr_t BouncyBugSuckedInTag = 0x95C;
            static constexpr std::uintptr_t OnGroundGameplayCueTag = 0x960;
            static constexpr std::uintptr_t InWaterGameplayCueTag = 0x964;
            static constexpr std::uintptr_t BugReadyToBoostGEClass = 0x968;
            static constexpr std::uintptr_t PlayerReadyToBoostGEClass = 0x970;
            static constexpr std::uintptr_t StaticMeshFindGroundLerpSpeed = 0x978;
            static constexpr std::uintptr_t VisualZOffset_Condensed = 0x9A8;
            static constexpr std::uintptr_t VisualZOffset_Inflated = 0x9D8;
            static constexpr std::uintptr_t VisualZOffsetInWater_Condensed = 0xA08;
            static constexpr std::uintptr_t VisualZOffsetInWater_Inflated = 0xA38;
            static constexpr std::uintptr_t WaterSubmergeTime = 0xA68;
            static constexpr std::uintptr_t WaterSubmergeDistance = 0xA98;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"KineticEnergyForwardAmount", 0x940, "FloatProperty"},
            {"KineticEnergyMagnitude", 0x944, "FloatProperty"},
            {"CurrentGroundZ", 0x948, "FloatProperty"},
            {"bOnGround", 0x94C, "BoolProperty"},
            {"bInWater", 0x94D, "BoolProperty"},
            {"LastTouchedWaterTime", 0x950, "FloatProperty"},
            {"bReadyToBoost", 0x954, "BoolProperty"},
            {"bIsSuckedIn", 0x955, "BoolProperty"},
            {"BouncyBugMovementActiveTag", 0x958, "StructProperty"},
            {"BouncyBugSuckedInTag", 0x95C, "StructProperty"},
            {"OnGroundGameplayCueTag", 0x960, "StructProperty"},
            {"InWaterGameplayCueTag", 0x964, "StructProperty"},
            {"BugReadyToBoostGEClass", 0x968, "ClassProperty"},
            {"PlayerReadyToBoostGEClass", 0x970, "ClassProperty"},
            {"StaticMeshFindGroundLerpSpeed", 0x978, "StructProperty"},
            {"VisualZOffset_Condensed", 0x9A8, "StructProperty"},
            {"VisualZOffset_Inflated", 0x9D8, "StructProperty"},
            {"VisualZOffsetInWater_Condensed", 0xA08, "StructProperty"},
            {"VisualZOffsetInWater_Inflated", 0xA38, "StructProperty"},
            {"WaterSubmergeTime", 0xA68, "StructProperty"},
            {"WaterSubmergeDistance", 0xA98, "StructProperty"},
        }};
    };

    struct FortCameraModifier_BouncyBug
    {
        static constexpr std::string_view Name = "FortCameraModifier_BouncyBug";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPawn_Athena = 0x48;
            static constexpr std::uintptr_t BugBGA = 0x50;
            static constexpr std::uintptr_t LeadInTime = 0x68;
            static constexpr std::uintptr_t SF_MaxLeadInForwardOffset = 0x90;
            static constexpr std::uintptr_t SF_CameraZMoveSpeed = 0x108;
            static constexpr std::uintptr_t SF_MaxHeightDisplacement = 0x130;
            static constexpr std::uintptr_t SF_MinPlayerGroundSpeedInfluence = 0x158;
            static constexpr std::uintptr_t SF_MaxPlayerGroundSpeedInfluence = 0x180;
            static constexpr std::uintptr_t SF_CameraMinForwardGroundSpeed = 0x1A8;
            static constexpr std::uintptr_t SF_CameraMaxForwardGroundSpeed = 0x1D0;
            static constexpr std::uintptr_t SF_MinVerticalSpeedInfluence = 0x1F8;
            static constexpr std::uintptr_t SF_MaxVerticalSpeedInfluence = 0x220;
            static constexpr std::uintptr_t SF_MinCameraVerticalSpeed = 0x248;
            static constexpr std::uintptr_t SF_MaxCameraVerticalSpeed = 0x270;
            static constexpr std::uintptr_t SF_SuckedInFollowModifier = 0x298;
            static constexpr std::uintptr_t SF_BouncyFollowModifier = 0x2C0;
            static constexpr std::uintptr_t SF_ForwardInterpSpeed = 0x2E8;
            static constexpr std::uintptr_t SF_MaxPlayerHorizontalInfluenceSpeed = 0x310;
            static constexpr std::uintptr_t SF_MaxCameraHorizontalSpeed = 0x338;
            static constexpr std::uintptr_t SF_RightCameraSpeedModifier = 0x360;
            static constexpr std::uintptr_t SF_LeftCameraSpeedModifier = 0x388;
            static constexpr std::uintptr_t SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeed = 0x3B0;
            static constexpr std::uintptr_t SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeed = 0x3D8;
            static constexpr std::uintptr_t SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeedModifier = 0x400;
            static constexpr std::uintptr_t SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeedModifier = 0x428;
            static constexpr std::uintptr_t SF_CameraRightInterpSpeed = 0x450;
            static constexpr std::uintptr_t SF_CameraMaxVerticalVelocity = 0x478;
            static constexpr std::uintptr_t SF_CameraMinForwardSpeedInfluenceOnVerticalSpeed = 0x4A0;
            static constexpr std::uintptr_t SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeed = 0x4C8;
            static constexpr std::uintptr_t SF_CameraMinForwardSpeedInfluenceOnVerticalSpeedModifier = 0x4F0;
            static constexpr std::uintptr_t SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeedModifier = 0x518;
            static constexpr std::uintptr_t SF_UpCameraSpeedModifier = 0x540;
            static constexpr std::uintptr_t SF_DownCameraSpeedModifier = 0x568;
            static constexpr std::uintptr_t SF_SuckedInUpwardFollowModifier = 0x590;
            static constexpr std::uintptr_t SF_BouncyUpwardFollowModifier = 0x5B8;
            static constexpr std::uintptr_t SF_CameraUpVelocityOffset = 0x5E0;
            static constexpr std::uintptr_t SF_CameraUpwardInterpSpeed = 0x608;
            static constexpr std::uintptr_t SF_BoostedFOV = 0x630;
            static constexpr std::uintptr_t SF_BeginReadyToBoostFOV = 0x658;
            static constexpr std::uintptr_t SF_NonBoostedFOV = 0x680;
            static constexpr std::uintptr_t SF_PreBoostFOVSpeed = 0x6A8;
            static constexpr std::uintptr_t SF_CameraFOVInterpSpeed = 0x6D0;
            static constexpr std::uintptr_t SF_StraightnessModifierInflienceonHorizontalOffset = 0x6F8;
            static constexpr std::uintptr_t SF_RefHeightSurfaceHeightDiffInfleunceOnUpModifier = 0x720;
            static constexpr std::uintptr_t SF_VerticalScalarOffset = 0x748;
            static constexpr std::uintptr_t SF_TotalVelocityOffsetInterpSpeed = 0x770;
            static constexpr std::uintptr_t SF_BaseForwardOffset = 0x798;
            static constexpr std::uintptr_t SF_BaseVerticalOffset = 0x7C0;
            static constexpr std::uintptr_t SF_BaseHorizontalOffset = 0x7E8;
            static constexpr std::uintptr_t MaxZChange_OnGround = 0x810;
            static constexpr std::uintptr_t MaxZChange_InAir = 0x838;
            static constexpr std::uintptr_t MaxZChange_InterpSpeed = 0x860;
            static constexpr std::uintptr_t SF_MinFinalZChange = 0x888;
            static constexpr std::uintptr_t bDeNativize = 0x8CC;
        };

        inline static constexpr std::array<PropertyInfo, 54> Properties{{
            {"PlayerPawn_Athena", 0x48, "ObjectProperty"},
            {"BugBGA", 0x50, "ObjectProperty"},
            {"LeadInTime", 0x68, "StructProperty"},
            {"SF_MaxLeadInForwardOffset", 0x90, "StructProperty"},
            {"SF_CameraZMoveSpeed", 0x108, "StructProperty"},
            {"SF_MaxHeightDisplacement", 0x130, "StructProperty"},
            {"SF_MinPlayerGroundSpeedInfluence", 0x158, "StructProperty"},
            {"SF_MaxPlayerGroundSpeedInfluence", 0x180, "StructProperty"},
            {"SF_CameraMinForwardGroundSpeed", 0x1A8, "StructProperty"},
            {"SF_CameraMaxForwardGroundSpeed", 0x1D0, "StructProperty"},
            {"SF_MinVerticalSpeedInfluence", 0x1F8, "StructProperty"},
            {"SF_MaxVerticalSpeedInfluence", 0x220, "StructProperty"},
            {"SF_MinCameraVerticalSpeed", 0x248, "StructProperty"},
            {"SF_MaxCameraVerticalSpeed", 0x270, "StructProperty"},
            {"SF_SuckedInFollowModifier", 0x298, "StructProperty"},
            {"SF_BouncyFollowModifier", 0x2C0, "StructProperty"},
            {"SF_ForwardInterpSpeed", 0x2E8, "StructProperty"},
            {"SF_MaxPlayerHorizontalInfluenceSpeed", 0x310, "StructProperty"},
            {"SF_MaxCameraHorizontalSpeed", 0x338, "StructProperty"},
            {"SF_RightCameraSpeedModifier", 0x360, "StructProperty"},
            {"SF_LeftCameraSpeedModifier", 0x388, "StructProperty"},
            {"SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeed", 0x3B0, "StructProperty"},
            {"SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeed", 0x3D8, "StructProperty"},
            {"SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeedModifier", 0x400, "StructProperty"},
            {"SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeedModifier", 0x428, "StructProperty"},
            {"SF_CameraRightInterpSpeed", 0x450, "StructProperty"},
            {"SF_CameraMaxVerticalVelocity", 0x478, "StructProperty"},
            {"SF_CameraMinForwardSpeedInfluenceOnVerticalSpeed", 0x4A0, "StructProperty"},
            {"SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeed", 0x4C8, "StructProperty"},
            {"SF_CameraMinForwardSpeedInfluenceOnVerticalSpeedModifier", 0x4F0, "StructProperty"},
            {"SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeedModifier", 0x518, "StructProperty"},
            {"SF_UpCameraSpeedModifier", 0x540, "StructProperty"},
            {"SF_DownCameraSpeedModifier", 0x568, "StructProperty"},
            {"SF_SuckedInUpwardFollowModifier", 0x590, "StructProperty"},
            {"SF_BouncyUpwardFollowModifier", 0x5B8, "StructProperty"},
            {"SF_CameraUpVelocityOffset", 0x5E0, "StructProperty"},
            {"SF_CameraUpwardInterpSpeed", 0x608, "StructProperty"},
            {"SF_BoostedFOV", 0x630, "StructProperty"},
            {"SF_BeginReadyToBoostFOV", 0x658, "StructProperty"},
            {"SF_NonBoostedFOV", 0x680, "StructProperty"},
            {"SF_PreBoostFOVSpeed", 0x6A8, "StructProperty"},
            {"SF_CameraFOVInterpSpeed", 0x6D0, "StructProperty"},
            {"SF_StraightnessModifierInflienceonHorizontalOffset", 0x6F8, "StructProperty"},
            {"SF_RefHeightSurfaceHeightDiffInfleunceOnUpModifier", 0x720, "StructProperty"},
            {"SF_VerticalScalarOffset", 0x748, "StructProperty"},
            {"SF_TotalVelocityOffsetInterpSpeed", 0x770, "StructProperty"},
            {"SF_BaseForwardOffset", 0x798, "StructProperty"},
            {"SF_BaseVerticalOffset", 0x7C0, "StructProperty"},
            {"SF_BaseHorizontalOffset", 0x7E8, "StructProperty"},
            {"MaxZChange_OnGround", 0x810, "StructProperty"},
            {"MaxZChange_InAir", 0x838, "StructProperty"},
            {"MaxZChange_InterpSpeed", 0x860, "StructProperty"},
            {"SF_MinFinalZChange", 0x888, "StructProperty"},
            {"bDeNativize", 0x8CC, "BoolProperty"},
        }};
    };

    struct FortComponent_BouncyBugInstance
    {
        static constexpr std::string_view Name = "FortComponent_BouncyBugInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerBGA = 0xC0;
            static constexpr std::uintptr_t MMEToApply = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnPlayerBGA", 0xC0, "ObjectProperty"},
            {"MMEToApply", 0xC8, "ClassProperty"},
        }};
    };

    struct FortMovementMode_BouncyBugBPExtLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_BouncyBugBPExtLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BPExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeRuntimeDataClass = 0x1D0;
            static constexpr std::uintptr_t bPrimaryFirePressed = 0x1D8;
            static constexpr std::uintptr_t bSecondaryFirePressed = 0x1D9;
            static constexpr std::uintptr_t bUsePressed = 0x1DA;
            static constexpr std::uintptr_t bJumpPressed = 0x1DB;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NativeRuntimeDataClass", 0x1D0, "ClassProperty"},
            {"bPrimaryFirePressed", 0x1D8, "BoolProperty"},
            {"bSecondaryFirePressed", 0x1D9, "BoolProperty"},
            {"bUsePressed", 0x1DA, "BoolProperty"},
            {"bJumpPressed", 0x1DB, "BoolProperty"},
        }};
    };

    struct FortMovementMode_BouncyBugExtLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_BouncyBugExtLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t bPrimaryFirePressed = 0x1B8;
            static constexpr std::uintptr_t bSecondaryFirePressed = 0x1B9;
            static constexpr std::uintptr_t bUsePressed = 0x1BA;
            static constexpr std::uintptr_t bJumpPressed = 0x1BC;
            static constexpr std::uintptr_t AccelerationSettings_GroundCondensed = 0x1F0;
            static constexpr std::uintptr_t AccelerationSettings_GroundInflated = 0x3A8;
            static constexpr std::uintptr_t AccelerationSettings_InAir = 0x560;
            static constexpr std::uintptr_t bMoveFollowFloor = 0x718;
            static constexpr std::uintptr_t bIsMovingOnGround = 0x719;
            static constexpr std::uintptr_t GC_HardenedStateBounceCueTag = 0x724;
            static constexpr std::uintptr_t GC_PerfectBounceCueTag = 0x728;
            static constexpr std::uintptr_t GC_BouncyStateBounceCueTag = 0x72C;
            static constexpr std::uintptr_t GC_BGABouncyStateTag = 0x730;
            static constexpr std::uintptr_t GC_BGAHardenedStateTag = 0x734;
            static constexpr std::uintptr_t GC_Landed = 0x738;
            static constexpr std::uintptr_t GC_BounceFromGround = 0x73C;
            static constexpr std::uintptr_t GE_FallDamageImmunityOnExit = 0x740;
            static constexpr std::uintptr_t GE_TryingToExitMME = 0x748;
            static constexpr std::uintptr_t GE_SuckedIn = 0x750;
            static constexpr std::uintptr_t GE_PlayerBouncyState = 0x758;
            static constexpr std::uintptr_t GE_BGABoostedState = 0x760;
            static constexpr std::uintptr_t GE_PlayerBoostedState = 0x768;
            static constexpr std::uintptr_t CurrentMeshRotation = 0x778;
            static constexpr std::uintptr_t SF_AdditionalGroundBounceForceOnActorHit = 0x910;
            static constexpr std::uintptr_t SF_AdditionalGroundForwardForceOnActorHit = 0x938;
            static constexpr std::uintptr_t SF_AdditionalWallBounceForceOnActorHit = 0x960;
            static constexpr std::uintptr_t SF_AdditionalWallForwardForceOnActorHit = 0x988;
            static constexpr std::uintptr_t SF_InitialLaunch_UpwardAmount = 0x9B0;
            static constexpr std::uintptr_t SF_InitialLaunch_Force = 0x9D8;
            static constexpr std::uintptr_t SF_BounceGroundStickTime = 0xA00;
            static constexpr std::uintptr_t SF_BounceVelocityMaintainTime = 0xA28;
            static constexpr std::uintptr_t SF_RampLaunchVelocityMaintainTime = 0xA50;
            static constexpr std::uintptr_t SF_InitialLaunchVelocityMaintainTime = 0xA78;
            static constexpr std::uintptr_t SF_Dive_BonusGravityTime = 0xAA0;
            static constexpr std::uintptr_t SF_Dive_BonusGravityAmount = 0xAC8;
            static constexpr std::uintptr_t SF_Gravity_Condensed = 0xAF0;
            static constexpr std::uintptr_t SF_Gravity_Inflated = 0xB18;
            static constexpr std::uintptr_t SF_ZVelocityHardMinimum = 0xB40;
            static constexpr std::uintptr_t SF_ZVelocityHardMaximum = 0xB68;
            static constexpr std::uintptr_t SF_ZVelocityToDetectPeak = 0xB90;
            static constexpr std::uintptr_t SF_ForwardBoostStartingValue = 0xBB8;
            static constexpr std::uintptr_t SF_Visuals_BGARotationSpeed = 0xBE0;
            static constexpr std::uintptr_t SF_Visuals_BoostForwardThreshold = 0xC08;
            static constexpr std::uintptr_t SF_StoredLandingVelocityOverrideSquaredMagnitudeThreshold = 0xC30;
            static constexpr std::uintptr_t SF_ForwardBoostChargeSpeed = 0xC58;
            static constexpr std::uintptr_t SF_BounceEnergy_DecayRate = 0xC80;
            static constexpr std::uintptr_t SF_GoalDirectionThreshold = 0xCA8;
            static constexpr std::uintptr_t SF_FractionOfAccelerationMagnitudePerUpdate = 0xCD0;
            static constexpr std::uintptr_t SF_BoostThreshold = 0xCF8;
            static constexpr std::uintptr_t SF_MinimumVelocityDragThreshold = 0xD20;
            static constexpr std::uintptr_t SF_MaximumvelocityDragThreshold = 0xD48;
            static constexpr std::uintptr_t SF_MaxDragOffsetSpeedModifier = 0xD70;
            static constexpr std::uintptr_t SF_BounceForceMinMagnitudeThatAppliesBounceDrag = 0xD98;
            static constexpr std::uintptr_t SF_BounceForceMaxMagnitudeThatAppliesBounceDrag = 0xDC0;
            static constexpr std::uintptr_t SF_BounceForceMaxDragModifier = 0xDE8;
            static constexpr std::uintptr_t SF_PlayerInstigatedBounceForce = 0xE10;
            static constexpr std::uintptr_t SF_BoostedBounce_ForwardForce = 0xE38;
            static constexpr std::uintptr_t SF_KineticEnergyForwardAmountThreshold = 0xE60;
            static constexpr std::uintptr_t SF_BoostingTime = 0xE88;
            static constexpr std::uintptr_t SF_RealVelocitySlopeBoostVelocityThreshold = 0xEB0;
            static constexpr std::uintptr_t SF_CheckForSlopeSphereTraceRadius = 0xED8;
            static constexpr std::uintptr_t SF_TotalTerminalVelocityMagnitude = 0xF00;
            static constexpr std::uintptr_t SF_ZTerminalVelocityMagnitude = 0xF28;
            static constexpr std::uintptr_t SF_MinStoredBounceEnergy = 0xF50;
            static constexpr std::uintptr_t SF_DiveHeightForMaxBounceForce = 0xF78;
            static constexpr std::uintptr_t SF_MinBounceForceFromDiving = 0xFA0;
            static constexpr std::uintptr_t SF_MaxBounceForceFromDiving = 0xFC8;
            static constexpr std::uintptr_t SF_PeakHeightForMaxBounceForce = 0xFF0;
            static constexpr std::uintptr_t SF_MaxBounceForceFromPeak = 0x1018;
            static constexpr std::uintptr_t SF_CalculateFacingDireactionDirectVelocityThreshold = 0x1040;
            static constexpr std::uintptr_t SF_BounceForceForMinSurfaceInfluence = 0x1068;
            static constexpr std::uintptr_t SF_BounceForceForMaxSurfaceInfluence = 0x1090;
            static constexpr std::uintptr_t SF_SlantCoefficientForMaxSurfaceInfluence = 0x10B8;
            static constexpr std::uintptr_t SF_SlantCoefficientForMinSurfaceInfluence = 0x10E0;
            static constexpr std::uintptr_t SF_SurfaceInfluenceModifierOnFlatterLand = 0x1108;
            static constexpr std::uintptr_t SF_SurfaceInfluenceAtFullForwardCharge = 0x1130;
            static constexpr std::uintptr_t SF_RampLaunch_ZMultiplier = 0x1158;
            static constexpr std::uintptr_t SF_RampLaunch_ZAdditive = 0x1180;
            static constexpr std::uintptr_t SF_MinAngleForWallBounce = 0x11A8;
            static constexpr std::uintptr_t SF_SlantCoefficientForMinGroundStickiness = 0x11D0;
            static constexpr std::uintptr_t SF_SlantCoefficientForMaxGroundStickiness = 0x11F8;
            static constexpr std::uintptr_t SF_MinBounceForceToBounceWhenDownHill = 0x1220;
            static constexpr std::uintptr_t SF_MinBounceForceToBounce = 0x1248;
            static constexpr std::uintptr_t SF_BoostedBounceMinimumUpwardForce = 0x1270;
            static constexpr std::uintptr_t SF_BounceForceToForwardSpeedMultiplier = 0x1298;
            static constexpr std::uintptr_t SF_WallImpactHardnessBounceModifier_Hard = 0x12C0;
            static constexpr std::uintptr_t SF_WallImpactHarndessBounceModifier_Soft = 0x12E8;
            static constexpr std::uintptr_t SF_WallImpactFloorModifier_Found = 0x1310;
            static constexpr std::uintptr_t SF_WallImpactFloorModifier_NotFound = 0x1338;
            static constexpr std::uintptr_t SF_PlayerMeshHeightOnExit = 0x1360;
            static constexpr std::uintptr_t SF_SurfaceInfluenceMultiplierWhenGoingUphill = 0x1388;
            static constexpr std::uintptr_t SF_SurfaceInfluenceMultiplierWhenGoingDownhill = 0x13B0;
            static constexpr std::uintptr_t SF_SidewaysInfluenceWhenTryingToBounceForward = 0x13D8;
            static constexpr std::uintptr_t SF_ForceForMinWallBounce_OnGround = 0x1400;
            static constexpr std::uintptr_t SF_ForceForMaxWallBounce_OnGround = 0x1428;
            static constexpr std::uintptr_t SF_ForceForMinWallBounce_InAir = 0x1450;
            static constexpr std::uintptr_t SF_ForceForMaxWallBounce_InAir = 0x1478;
            static constexpr std::uintptr_t SF_Visuals_ZAccelerationTiltModifier_OnGround = 0x14A0;
            static constexpr std::uintptr_t SF_Visuals_ZAccelerationTiltModifier_NotOnGround = 0x14C8;
            static constexpr std::uintptr_t SF_SpeedHardCap_Boosted = 0x14F0;
            static constexpr std::uintptr_t SF_SpeedHardCap_Normal = 0x1518;
            static constexpr std::uintptr_t SF_Cap3DAppliedAcceleration = 0x1540;
            static constexpr std::uintptr_t SF_RampLaunch_UpwardAngleOffset_OnProps = 0x1568;
            static constexpr std::uintptr_t SF_RampLaunch_UpwardAngleOffset = 0x1590;
            static constexpr std::uintptr_t SF_RealVelocity_InterpSpeed = 0x15B8;
            static constexpr std::uintptr_t SF_RampLaunch_AllowLaunchOffProps = 0x15E0;
            static constexpr std::uintptr_t SF_RampLaunch_SlopeTrace_AngleOffset_Normal = 0x1608;
            static constexpr std::uintptr_t SF_RampLaunch_SlopeTrace_AngleOffset_Boosted = 0x1630;
            static constexpr std::uintptr_t SF_RampLaunch_SlopeTrace_Distance = 0x1658;
            static constexpr std::uintptr_t SF_RampLaunch_SlopeTrace_Distance_Boosted = 0x1680;
            static constexpr std::uintptr_t SF_MinimumSuckedOutTime = 0x16A8;
            static constexpr std::uintptr_t SF_AlwaysBounceWhenBoosting = 0x16D0;
            static constexpr std::uintptr_t SF_LaunchOffSurface_Angle = 0x16F8;
            static constexpr std::uintptr_t SF_UseBouncyBoost = 0x1720;
            static constexpr std::uintptr_t SF_ForwardChargeBounceBoostThreshold = 0x1748;
            static constexpr std::uintptr_t SF_BouncyBoost_MinBounceForceMultiplier = 0x1770;
            static constexpr std::uintptr_t SF_BouncyBoost_MinimumBounceForce = 0x1798;
            static constexpr std::uintptr_t SF_BouncyBoost_MaxiumumBounceForce = 0x17C0;
            static constexpr std::uintptr_t SF_DisableSpeedMultiplier = 0x17E8;
            static constexpr std::uintptr_t SF_EnablePlayerBouncesAlongWalls = 0x1818;
            static constexpr std::uintptr_t LastTouchedWaterImpactForce = 0x1848;
            static constexpr std::uintptr_t LastTouchedWaterTime = 0x184C;
            static constexpr std::uintptr_t bDeNativize = 0x1850;
            static constexpr std::uintptr_t DenativizedRuntimeDataClass = 0x1858;
        };

        inline static constexpr std::array<PropertyInfo, 124> Properties{{
            {"bPrimaryFirePressed", 0x1B8, "BoolProperty"},
            {"bSecondaryFirePressed", 0x1B9, "BoolProperty"},
            {"bUsePressed", 0x1BA, "BoolProperty"},
            {"bJumpPressed", 0x1BC, "BoolProperty"},
            {"AccelerationSettings_GroundCondensed", 0x1F0, "StructProperty"},
            {"AccelerationSettings_GroundInflated", 0x3A8, "StructProperty"},
            {"AccelerationSettings_InAir", 0x560, "StructProperty"},
            {"bMoveFollowFloor", 0x718, "BoolProperty"},
            {"bIsMovingOnGround", 0x719, "BoolProperty"},
            {"GC_HardenedStateBounceCueTag", 0x724, "StructProperty"},
            {"GC_PerfectBounceCueTag", 0x728, "StructProperty"},
            {"GC_BouncyStateBounceCueTag", 0x72C, "StructProperty"},
            {"GC_BGABouncyStateTag", 0x730, "StructProperty"},
            {"GC_BGAHardenedStateTag", 0x734, "StructProperty"},
            {"GC_Landed", 0x738, "StructProperty"},
            {"GC_BounceFromGround", 0x73C, "StructProperty"},
            {"GE_FallDamageImmunityOnExit", 0x740, "ClassProperty"},
            {"GE_TryingToExitMME", 0x748, "ClassProperty"},
            {"GE_SuckedIn", 0x750, "ClassProperty"},
            {"GE_PlayerBouncyState", 0x758, "ClassProperty"},
            {"GE_BGABoostedState", 0x760, "ClassProperty"},
            {"GE_PlayerBoostedState", 0x768, "ClassProperty"},
            {"CurrentMeshRotation", 0x778, "StructProperty"},
            {"SF_AdditionalGroundBounceForceOnActorHit", 0x910, "StructProperty"},
            {"SF_AdditionalGroundForwardForceOnActorHit", 0x938, "StructProperty"},
            {"SF_AdditionalWallBounceForceOnActorHit", 0x960, "StructProperty"},
            {"SF_AdditionalWallForwardForceOnActorHit", 0x988, "StructProperty"},
            {"SF_InitialLaunch_UpwardAmount", 0x9B0, "StructProperty"},
            {"SF_InitialLaunch_Force", 0x9D8, "StructProperty"},
            {"SF_BounceGroundStickTime", 0xA00, "StructProperty"},
            {"SF_BounceVelocityMaintainTime", 0xA28, "StructProperty"},
            {"SF_RampLaunchVelocityMaintainTime", 0xA50, "StructProperty"},
            {"SF_InitialLaunchVelocityMaintainTime", 0xA78, "StructProperty"},
            {"SF_Dive_BonusGravityTime", 0xAA0, "StructProperty"},
            {"SF_Dive_BonusGravityAmount", 0xAC8, "StructProperty"},
            {"SF_Gravity_Condensed", 0xAF0, "StructProperty"},
            {"SF_Gravity_Inflated", 0xB18, "StructProperty"},
            {"SF_ZVelocityHardMinimum", 0xB40, "StructProperty"},
            {"SF_ZVelocityHardMaximum", 0xB68, "StructProperty"},
            {"SF_ZVelocityToDetectPeak", 0xB90, "StructProperty"},
            {"SF_ForwardBoostStartingValue", 0xBB8, "StructProperty"},
            {"SF_Visuals_BGARotationSpeed", 0xBE0, "StructProperty"},
            {"SF_Visuals_BoostForwardThreshold", 0xC08, "StructProperty"},
            {"SF_StoredLandingVelocityOverrideSquaredMagnitudeThreshold", 0xC30, "StructProperty"},
            {"SF_ForwardBoostChargeSpeed", 0xC58, "StructProperty"},
            {"SF_BounceEnergy_DecayRate", 0xC80, "StructProperty"},
            {"SF_GoalDirectionThreshold", 0xCA8, "StructProperty"},
            {"SF_FractionOfAccelerationMagnitudePerUpdate", 0xCD0, "StructProperty"},
            {"SF_BoostThreshold", 0xCF8, "StructProperty"},
            {"SF_MinimumVelocityDragThreshold", 0xD20, "StructProperty"},
            {"SF_MaximumvelocityDragThreshold", 0xD48, "StructProperty"},
            {"SF_MaxDragOffsetSpeedModifier", 0xD70, "StructProperty"},
            {"SF_BounceForceMinMagnitudeThatAppliesBounceDrag", 0xD98, "StructProperty"},
            {"SF_BounceForceMaxMagnitudeThatAppliesBounceDrag", 0xDC0, "StructProperty"},
            {"SF_BounceForceMaxDragModifier", 0xDE8, "StructProperty"},
            {"SF_PlayerInstigatedBounceForce", 0xE10, "StructProperty"},
            {"SF_BoostedBounce_ForwardForce", 0xE38, "StructProperty"},
            {"SF_KineticEnergyForwardAmountThreshold", 0xE60, "StructProperty"},
            {"SF_BoostingTime", 0xE88, "StructProperty"},
            {"SF_RealVelocitySlopeBoostVelocityThreshold", 0xEB0, "StructProperty"},
            {"SF_CheckForSlopeSphereTraceRadius", 0xED8, "StructProperty"},
            {"SF_TotalTerminalVelocityMagnitude", 0xF00, "StructProperty"},
            {"SF_ZTerminalVelocityMagnitude", 0xF28, "StructProperty"},
            {"SF_MinStoredBounceEnergy", 0xF50, "StructProperty"},
            {"SF_DiveHeightForMaxBounceForce", 0xF78, "StructProperty"},
            {"SF_MinBounceForceFromDiving", 0xFA0, "StructProperty"},
            {"SF_MaxBounceForceFromDiving", 0xFC8, "StructProperty"},
            {"SF_PeakHeightForMaxBounceForce", 0xFF0, "StructProperty"},
            {"SF_MaxBounceForceFromPeak", 0x1018, "StructProperty"},
            {"SF_CalculateFacingDireactionDirectVelocityThreshold", 0x1040, "StructProperty"},
            {"SF_BounceForceForMinSurfaceInfluence", 0x1068, "StructProperty"},
            {"SF_BounceForceForMaxSurfaceInfluence", 0x1090, "StructProperty"},
            {"SF_SlantCoefficientForMaxSurfaceInfluence", 0x10B8, "StructProperty"},
            {"SF_SlantCoefficientForMinSurfaceInfluence", 0x10E0, "StructProperty"},
            {"SF_SurfaceInfluenceModifierOnFlatterLand", 0x1108, "StructProperty"},
            {"SF_SurfaceInfluenceAtFullForwardCharge", 0x1130, "StructProperty"},
            {"SF_RampLaunch_ZMultiplier", 0x1158, "StructProperty"},
            {"SF_RampLaunch_ZAdditive", 0x1180, "StructProperty"},
            {"SF_MinAngleForWallBounce", 0x11A8, "StructProperty"},
            {"SF_SlantCoefficientForMinGroundStickiness", 0x11D0, "StructProperty"},
            {"SF_SlantCoefficientForMaxGroundStickiness", 0x11F8, "StructProperty"},
            {"SF_MinBounceForceToBounceWhenDownHill", 0x1220, "StructProperty"},
            {"SF_MinBounceForceToBounce", 0x1248, "StructProperty"},
            {"SF_BoostedBounceMinimumUpwardForce", 0x1270, "StructProperty"},
            {"SF_BounceForceToForwardSpeedMultiplier", 0x1298, "StructProperty"},
            {"SF_WallImpactHardnessBounceModifier_Hard", 0x12C0, "StructProperty"},
            {"SF_WallImpactHarndessBounceModifier_Soft", 0x12E8, "StructProperty"},
            {"SF_WallImpactFloorModifier_Found", 0x1310, "StructProperty"},
            {"SF_WallImpactFloorModifier_NotFound", 0x1338, "StructProperty"},
            {"SF_PlayerMeshHeightOnExit", 0x1360, "StructProperty"},
            {"SF_SurfaceInfluenceMultiplierWhenGoingUphill", 0x1388, "StructProperty"},
            {"SF_SurfaceInfluenceMultiplierWhenGoingDownhill", 0x13B0, "StructProperty"},
            {"SF_SidewaysInfluenceWhenTryingToBounceForward", 0x13D8, "StructProperty"},
            {"SF_ForceForMinWallBounce_OnGround", 0x1400, "StructProperty"},
            {"SF_ForceForMaxWallBounce_OnGround", 0x1428, "StructProperty"},
            {"SF_ForceForMinWallBounce_InAir", 0x1450, "StructProperty"},
            {"SF_ForceForMaxWallBounce_InAir", 0x1478, "StructProperty"},
            {"SF_Visuals_ZAccelerationTiltModifier_OnGround", 0x14A0, "StructProperty"},
            {"SF_Visuals_ZAccelerationTiltModifier_NotOnGround", 0x14C8, "StructProperty"},
            {"SF_SpeedHardCap_Boosted", 0x14F0, "StructProperty"},
            {"SF_SpeedHardCap_Normal", 0x1518, "StructProperty"},
            {"SF_Cap3DAppliedAcceleration", 0x1540, "StructProperty"},
            {"SF_RampLaunch_UpwardAngleOffset_OnProps", 0x1568, "StructProperty"},
            {"SF_RampLaunch_UpwardAngleOffset", 0x1590, "StructProperty"},
            {"SF_RealVelocity_InterpSpeed", 0x15B8, "StructProperty"},
            {"SF_RampLaunch_AllowLaunchOffProps", 0x15E0, "StructProperty"},
            {"SF_RampLaunch_SlopeTrace_AngleOffset_Normal", 0x1608, "StructProperty"},
            {"SF_RampLaunch_SlopeTrace_AngleOffset_Boosted", 0x1630, "StructProperty"},
            {"SF_RampLaunch_SlopeTrace_Distance", 0x1658, "StructProperty"},
            {"SF_RampLaunch_SlopeTrace_Distance_Boosted", 0x1680, "StructProperty"},
            {"SF_MinimumSuckedOutTime", 0x16A8, "StructProperty"},
            {"SF_AlwaysBounceWhenBoosting", 0x16D0, "StructProperty"},
            {"SF_LaunchOffSurface_Angle", 0x16F8, "StructProperty"},
            {"SF_UseBouncyBoost", 0x1720, "StructProperty"},
            {"SF_ForwardChargeBounceBoostThreshold", 0x1748, "StructProperty"},
            {"SF_BouncyBoost_MinBounceForceMultiplier", 0x1770, "StructProperty"},
            {"SF_BouncyBoost_MinimumBounceForce", 0x1798, "StructProperty"},
            {"SF_BouncyBoost_MaxiumumBounceForce", 0x17C0, "StructProperty"},
            {"SF_DisableSpeedMultiplier", 0x17E8, "StructProperty"},
            {"SF_EnablePlayerBouncesAlongWalls", 0x1818, "StructProperty"},
            {"LastTouchedWaterImpactForce", 0x1848, "FloatProperty"},
            {"LastTouchedWaterTime", 0x184C, "FloatProperty"},
            {"bDeNativize", 0x1850, "BoolProperty"},
            {"DenativizedRuntimeDataClass", 0x1858, "ClassProperty"},
        }};
    };

    struct FortMovementMode_BouncyBugRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_BouncyBugRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentState = 0x38;
            static constexpr std::uintptr_t bInBouncingMovementTagIsActive = 0x39;
            static constexpr std::uintptr_t bSuckedInTagIsActive = 0x3A;
            static constexpr std::uintptr_t bSuckedInTagReleased = 0x3B;
            static constexpr std::uintptr_t bPrimaryFirePressed = 0x3C;
            static constexpr std::uintptr_t bSecondaryFirePressed = 0x3D;
            static constexpr std::uintptr_t bUsePressed = 0x3E;
            static constexpr std::uintptr_t bJumpPressed = 0x3F;
            static constexpr std::uintptr_t StoredLandingVelocity = 0x40;
            static constexpr std::uintptr_t RampLaunchVelocity = 0x58;
            static constexpr std::uintptr_t BounceForce = 0x70;
            static constexpr std::uintptr_t AirPeakHeight = 0x88;
            static constexpr std::uintptr_t SuckedInHeight = 0x8C;
            static constexpr std::uintptr_t StoredBounceEnergy = 0x90;
            static constexpr std::uintptr_t KineticEnergy_ForwardAmount = 0x94;
            static constexpr std::uintptr_t TimeSinceSuckedInToggled = 0x98;
            static constexpr std::uintptr_t StateTimer = 0x9C;
            static constexpr std::uintptr_t DriftingCoefficient = 0xA0;
            static constexpr std::uintptr_t BoostedAmount = 0xA4;
            static constexpr std::uintptr_t SpeedMultiplier = 0xAC;
            static constexpr std::uintptr_t SpeedMultiplierLastUpdate = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"CurrentState", 0x38, "EnumProperty"},
            {"bInBouncingMovementTagIsActive", 0x39, "BoolProperty"},
            {"bSuckedInTagIsActive", 0x3A, "BoolProperty"},
            {"bSuckedInTagReleased", 0x3B, "BoolProperty"},
            {"bPrimaryFirePressed", 0x3C, "BoolProperty"},
            {"bSecondaryFirePressed", 0x3D, "BoolProperty"},
            {"bUsePressed", 0x3E, "BoolProperty"},
            {"bJumpPressed", 0x3F, "BoolProperty"},
            {"StoredLandingVelocity", 0x40, "StructProperty"},
            {"RampLaunchVelocity", 0x58, "StructProperty"},
            {"BounceForce", 0x70, "StructProperty"},
            {"AirPeakHeight", 0x88, "FloatProperty"},
            {"SuckedInHeight", 0x8C, "FloatProperty"},
            {"StoredBounceEnergy", 0x90, "FloatProperty"},
            {"KineticEnergy_ForwardAmount", 0x94, "FloatProperty"},
            {"TimeSinceSuckedInToggled", 0x98, "FloatProperty"},
            {"StateTimer", 0x9C, "FloatProperty"},
            {"DriftingCoefficient", 0xA0, "FloatProperty"},
            {"BoostedAmount", 0xA4, "FloatProperty"},
            {"SpeedMultiplier", 0xAC, "FloatProperty"},
            {"SpeedMultiplierLastUpdate", 0xB0, "FloatProperty"},
        }};
    };

    struct RolyPolyTidalCraneAnimInstance
    {
        static constexpr std::string_view Name = "RolyPolyTidalCraneAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaredLoopAlpha = 0x460;
            static constexpr std::uintptr_t RandomStartTime = 0x464;
            static constexpr std::uintptr_t ScaredAlphaCurve = 0x468;
            static constexpr std::uintptr_t IdleAnimLength = 0x4B0;
            static constexpr std::uintptr_t ScaredMaxTime = 0x4B4;
            static constexpr std::uintptr_t bHiding = 0x4B8;
            static constexpr std::uintptr_t ScaredAmount = 0x4BC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ScaredLoopAlpha", 0x460, "FloatProperty"},
            {"RandomStartTime", 0x464, "FloatProperty"},
            {"ScaredAlphaCurve", 0x468, "StructProperty"},
            {"IdleAnimLength", 0x4B0, "FloatProperty"},
            {"ScaredMaxTime", 0x4B4, "FloatProperty"},
            {"bHiding", 0x4B8, "BoolProperty"},
            {"ScaredAmount", 0x4BC, "FloatProperty"},
        }};
    };

    struct RolyPolyTidalCraneWeaponInterface
    {
        static constexpr std::string_view Name = "RolyPolyTidalCraneWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
