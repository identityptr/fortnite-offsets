#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ToyFoxGameplayRuntime
{
    struct FortCameraModifier_ToyFox
    {
        static constexpr std::string_view Name = "FortCameraModifier_ToyFox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModifier_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayViewRotation = 0x80;
            static constexpr std::uintptr_t LatestPilotCinematicViewRotation = 0x98;
            static constexpr std::uintptr_t LatestPilotCinematicViewLocation = 0xB0;
            static constexpr std::uintptr_t LatestPilotCinematicFov = 0xC8;
            static constexpr std::uintptr_t CurrentOffsetUp = 0xD0;
            static constexpr std::uintptr_t CurrentOffsetRight = 0xD8;
            static constexpr std::uintptr_t CurrentOffsetBackward = 0xE0;
            static constexpr std::uintptr_t PilotCinematicAlpha = 0xE8;
            static constexpr std::uintptr_t DefaultCameraSettings = 0xF0;
            static constexpr std::uintptr_t ViewSpaceOffsetInterpSpeed = 0x108;
            static constexpr std::uintptr_t MaxCombinedOffset = 0x110;
            static constexpr std::uintptr_t CameraAbilitySettingsMap = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"GameplayViewRotation", 0x80, "StructProperty"},
            {"LatestPilotCinematicViewRotation", 0x98, "StructProperty"},
            {"LatestPilotCinematicViewLocation", 0xB0, "StructProperty"},
            {"LatestPilotCinematicFov", 0xC8, "FloatProperty"},
            {"CurrentOffsetUp", 0xD0, "DoubleProperty"},
            {"CurrentOffsetRight", 0xD8, "DoubleProperty"},
            {"CurrentOffsetBackward", 0xE0, "DoubleProperty"},
            {"PilotCinematicAlpha", 0xE8, "DoubleProperty"},
            {"DefaultCameraSettings", 0xF0, "StructProperty"},
            {"ViewSpaceOffsetInterpSpeed", 0x108, "DoubleProperty"},
            {"MaxCombinedOffset", 0x110, "DoubleProperty"},
            {"CameraAbilitySettingsMap", 0x118, "MapProperty"},
        }};
    };

    struct FortControllerComponent_ToyFox
    {
        static constexpr std::string_view Name = "FortControllerComponent_ToyFox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortMovementMode_ToyFoxWalking
    {
        static constexpr std::string_view Name = "FortMovementMode_ToyFoxWalking";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_GiantWalking";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationInterpSpeedForStopped = 0x1F8;
            static constexpr std::uintptr_t MinRotationInterpSpeed = 0x228;
            static constexpr std::uintptr_t MaxRotationInterpSpeedForMoving = 0x258;
            static constexpr std::uintptr_t AngleForMovingMaxRotationInterpSpeed = 0x288;
            static constexpr std::uintptr_t AngleThresholdForStopAndTurn = 0x2B8;
            static constexpr std::uintptr_t AngleToResumeFromStopAndTurn = 0x2E8;
            static constexpr std::uintptr_t MaxGiantWalkingSpeed = 0x318;
            static constexpr std::uintptr_t MaxGiantWalkingSpeedOverrideMap = 0x348;
            static constexpr std::uintptr_t MaxGiantReverseWalkingSpeed = 0x358;
            static constexpr std::uintptr_t MaxGiantReverseWalkingSpeedOverrideMap = 0x388;
            static constexpr std::uintptr_t MaxWalkStepHeightUp = 0x398;
            static constexpr std::uintptr_t MaxWalkStepHeightDown = 0x3C8;
            static constexpr std::uintptr_t GiantWalkingAccelerateSpeed = 0x3F8;
            static constexpr std::uintptr_t JumpingAllowed = 0x428;
            static constexpr std::uintptr_t PlannedJumpInitialDist = 0x458;
            static constexpr std::uintptr_t PlannedJumpMinZSpeed = 0x488;
            static constexpr std::uintptr_t ResetJumpTrajectoryMinZSpeed = 0x4B8;
            static constexpr std::uintptr_t PreJumpMoveDelay = 0x4E8;
            static constexpr std::uintptr_t PlannedJumpLocationMaxIteration = 0x518;
            static constexpr std::uintptr_t MaxAngleVarianceToContinuePlanJump = 0x548;
            static constexpr std::uintptr_t WaitDurationToConfirmPlannedJump = 0x578;
            static constexpr std::uintptr_t MaxJumpUpHeight = 0x5A8;
            static constexpr std::uintptr_t MaxInputAngleVarianceToKeepJumping = 0x5D8;
            static constexpr std::uintptr_t InAirSlideAlongSurfaceAngleThreshold = 0x608;
            static constexpr std::uintptr_t PostJumpMoveDelay = 0x638;
            static constexpr std::uintptr_t JumpingDesiredSpeed2D = 0x668;
            static constexpr std::uintptr_t JumpingAccelerationXY = 0x698;
            static constexpr std::uintptr_t DistanceToleranceToEndJumping = 0x6C8;
            static constexpr std::uintptr_t StartJumpingMinSpeed = 0x6F8;
            static constexpr std::uintptr_t AscendingAccelerateSpeed = 0x728;
            static constexpr std::uintptr_t MaxAscendingSpeed = 0x758;
            static constexpr std::uintptr_t DeltaZToleranceForJumping = 0x788;
            static constexpr std::uintptr_t FallingAccelerateSpeed = 0x7B8;
            static constexpr std::uintptr_t MaxFallingSpeed = 0x7E8;
            static constexpr std::uintptr_t FallingSnapToGroundDistance = 0x818;
            static constexpr std::uintptr_t FallingSnapToGridDistance = 0x848;
            static constexpr std::uintptr_t FallingResolveCollisionSpeed = 0x878;
            static constexpr std::uintptr_t MaxWalkableUpSlopeAngle = 0x8A8;
            static constexpr std::uintptr_t MaxWalkableDownSlopeAngle = 0x8D8;
            static constexpr std::uintptr_t MaxSlidableSlopeAngle = 0x908;
            static constexpr std::uintptr_t ExtraLengthToProjectExtremeLocation = 0x938;
            static constexpr std::uintptr_t CapsuleHoverHeight = 0x968;
            static constexpr std::uintptr_t ServerCorrectionDistanceTolerance = 0x998;
            static constexpr std::uintptr_t GroundGridConfig = 0x9C8;
            static constexpr std::uintptr_t BlockMoveTags = 0x9E8;
            static constexpr std::uintptr_t BlockTurningTags = 0xA08;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"RotationInterpSpeedForStopped", 0x1F8, "StructProperty"},
            {"MinRotationInterpSpeed", 0x228, "StructProperty"},
            {"MaxRotationInterpSpeedForMoving", 0x258, "StructProperty"},
            {"AngleForMovingMaxRotationInterpSpeed", 0x288, "StructProperty"},
            {"AngleThresholdForStopAndTurn", 0x2B8, "StructProperty"},
            {"AngleToResumeFromStopAndTurn", 0x2E8, "StructProperty"},
            {"MaxGiantWalkingSpeed", 0x318, "StructProperty"},
            {"MaxGiantWalkingSpeedOverrideMap", 0x348, "MapProperty"},
            {"MaxGiantReverseWalkingSpeed", 0x358, "StructProperty"},
            {"MaxGiantReverseWalkingSpeedOverrideMap", 0x388, "MapProperty"},
            {"MaxWalkStepHeightUp", 0x398, "StructProperty"},
            {"MaxWalkStepHeightDown", 0x3C8, "StructProperty"},
            {"GiantWalkingAccelerateSpeed", 0x3F8, "StructProperty"},
            {"JumpingAllowed", 0x428, "StructProperty"},
            {"PlannedJumpInitialDist", 0x458, "StructProperty"},
            {"PlannedJumpMinZSpeed", 0x488, "StructProperty"},
            {"ResetJumpTrajectoryMinZSpeed", 0x4B8, "StructProperty"},
            {"PreJumpMoveDelay", 0x4E8, "StructProperty"},
            {"PlannedJumpLocationMaxIteration", 0x518, "StructProperty"},
            {"MaxAngleVarianceToContinuePlanJump", 0x548, "StructProperty"},
            {"WaitDurationToConfirmPlannedJump", 0x578, "StructProperty"},
            {"MaxJumpUpHeight", 0x5A8, "StructProperty"},
            {"MaxInputAngleVarianceToKeepJumping", 0x5D8, "StructProperty"},
            {"InAirSlideAlongSurfaceAngleThreshold", 0x608, "StructProperty"},
            {"PostJumpMoveDelay", 0x638, "StructProperty"},
            {"JumpingDesiredSpeed2D", 0x668, "StructProperty"},
            {"JumpingAccelerationXY", 0x698, "StructProperty"},
            {"DistanceToleranceToEndJumping", 0x6C8, "StructProperty"},
            {"StartJumpingMinSpeed", 0x6F8, "StructProperty"},
            {"AscendingAccelerateSpeed", 0x728, "StructProperty"},
            {"MaxAscendingSpeed", 0x758, "StructProperty"},
            {"DeltaZToleranceForJumping", 0x788, "StructProperty"},
            {"FallingAccelerateSpeed", 0x7B8, "StructProperty"},
            {"MaxFallingSpeed", 0x7E8, "StructProperty"},
            {"FallingSnapToGroundDistance", 0x818, "StructProperty"},
            {"FallingSnapToGridDistance", 0x848, "StructProperty"},
            {"FallingResolveCollisionSpeed", 0x878, "StructProperty"},
            {"MaxWalkableUpSlopeAngle", 0x8A8, "StructProperty"},
            {"MaxWalkableDownSlopeAngle", 0x8D8, "StructProperty"},
            {"MaxSlidableSlopeAngle", 0x908, "StructProperty"},
            {"ExtraLengthToProjectExtremeLocation", 0x938, "StructProperty"},
            {"CapsuleHoverHeight", 0x968, "StructProperty"},
            {"ServerCorrectionDistanceTolerance", 0x998, "StructProperty"},
            {"GroundGridConfig", 0x9C8, "StructProperty"},
            {"BlockMoveTags", 0x9E8, "StructProperty"},
            {"BlockTurningTags", 0xA08, "StructProperty"},
        }};
    };

    struct FortMovementMode_ToyFoxWalkingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ToyFoxWalkingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_GiantWalkingRuntimeData";
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

    struct FortPawnComponent_CacheInventoryItem
    {
        static constexpr std::string_view Name = "FortPawnComponent_CacheInventoryItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedInventoryItems = 0xC8;
            static constexpr std::uintptr_t InventoryItemsToRemove = 0xD8;
            static constexpr std::uintptr_t InventoryItemsToKeep = 0xF8;
            static constexpr std::uintptr_t bCacheAllItems = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CachedInventoryItems", 0xC8, "ArrayProperty"},
            {"InventoryItemsToRemove", 0xD8, "StructProperty"},
            {"InventoryItemsToKeep", 0xF8, "StructProperty"},
            {"bCacheAllItems", 0x118, "BoolProperty"},
        }};
    };

    struct FortToyFoxMovementComponent
    {
        static constexpr std::string_view Name = "FortToyFoxMovementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBikeKidMovementComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OverlapIgnoredActors = 0x1060;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverlapIgnoredActors", 0x1060, "ArrayProperty"},
        }};
    };

    struct ToyFoxCannonsAnimInstance
    {
        static constexpr std::string_view Name = "ToyFoxCannonsAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CannonShake = 0x350;
            static constexpr std::uintptr_t AimV2Right = 0x368;
            static constexpr std::uintptr_t AimV2Left = 0x378;
            static constexpr std::uintptr_t TurnOffSkirt = 0x388;
            static constexpr std::uintptr_t ShakeAlpha = 0x390;
            static constexpr std::uintptr_t FirstPCannonSpread = 0x398;
            static constexpr std::uintptr_t NegativeFirstPCannonSpread = 0x3B0;
            static constexpr std::uintptr_t FirstPCannonOffset = 0x3C8;
            static constexpr std::uintptr_t FirstPCannonScale = 0x3E0;
            static constexpr std::uintptr_t bIsFirstPersonView = 0x3F8;
            static constexpr std::uintptr_t bAbilityCannonFire = 0x3F9;
            static constexpr std::uintptr_t bUseKickbackAnim = 0x3FA;
            static constexpr std::uintptr_t ShakeStrength = 0x400;
            static constexpr std::uintptr_t bUseChargeShake = 0x408;
            static constexpr std::uintptr_t CannonAimTarget = 0x418;
            static constexpr std::uintptr_t bAbilityCannonActive = 0x430;
            static constexpr std::uintptr_t bCannonShakeGateOpen = 0x431;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"CannonShake", 0x350, "StructProperty"},
            {"AimV2Right", 0x368, "StructProperty"},
            {"AimV2Left", 0x378, "StructProperty"},
            {"TurnOffSkirt", 0x388, "FloatProperty"},
            {"ShakeAlpha", 0x390, "DoubleProperty"},
            {"FirstPCannonSpread", 0x398, "StructProperty"},
            {"NegativeFirstPCannonSpread", 0x3B0, "StructProperty"},
            {"FirstPCannonOffset", 0x3C8, "StructProperty"},
            {"FirstPCannonScale", 0x3E0, "StructProperty"},
            {"bIsFirstPersonView", 0x3F8, "BoolProperty"},
            {"bAbilityCannonFire", 0x3F9, "BoolProperty"},
            {"bUseKickbackAnim", 0x3FA, "BoolProperty"},
            {"ShakeStrength", 0x400, "DoubleProperty"},
            {"bUseChargeShake", 0x408, "BoolProperty"},
            {"CannonAimTarget", 0x418, "StructProperty"},
            {"bAbilityCannonActive", 0x430, "BoolProperty"},
            {"bCannonShakeGateOpen", 0x431, "BoolProperty"},
        }};
    };

    struct ToyFoxGiantPawnAnimInstance
    {
        static constexpr std::string_view Name = "ToyFoxGiantPawnAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t RootBoneRot = 0x340;
            static constexpr std::uintptr_t Input2D = 0x358;
            static constexpr std::uintptr_t SpeedAdjustedPlayRate = 0x370;
            static constexpr std::uintptr_t Speed = 0x374;
            static constexpr std::uintptr_t CustomMeleeTwistYaw = 0x378;
            static constexpr std::uintptr_t MovementDirection_Walk = 0x37C;
            static constexpr std::uintptr_t AimPitch_AO = 0x380;
            static constexpr std::uintptr_t MovementDirection = 0x384;
            static constexpr std::uintptr_t PivotAToBCustomBlend = 0x388;
            static constexpr std::uintptr_t PivotBToACustomBlend = 0x38C;
            static constexpr std::uintptr_t MovementDirectionInput = 0x390;
            static constexpr std::uintptr_t TurnInPlaceAmount = 0x398;
            static constexpr std::uintptr_t SpeedScaleConstant = 0x3A0;
            static constexpr std::uintptr_t MinSpeed2DThreshold = 0x3A8;
            static constexpr std::uintptr_t AimYaw_AO = 0x3B0;
            static constexpr std::uintptr_t SpeedPercentage = 0x3B8;
            static constexpr std::uintptr_t Pivot_CardinalDirection_Snap = 0x3C0;
            static constexpr std::uintptr_t bIsMoveStartExit = 0x3C1;
            static constexpr std::uintptr_t bIsMoveStop = 0x3C2;
            static constexpr std::uintptr_t bIsMoveStartLFoot = 0x3C3;
            static constexpr std::uintptr_t bIsMoveStop_LFoot = 0x3C4;
            static constexpr std::uintptr_t bAbilityCannonFire = 0x3C5;
            static constexpr std::uintptr_t bWalkStopAndTurn = 0x3C6;
            static constexpr std::uintptr_t bAbilityCannonActive = 0x3C7;
            static constexpr std::uintptr_t bDoPivot = 0x3C8;
            static constexpr std::uintptr_t bWalk_UseFwdBlendspace = 0x3C9;
            static constexpr std::uintptr_t bIsPivotExit = 0x3CA;
            static constexpr std::uintptr_t bIsFirstPersonView = 0x3CB;
            static constexpr std::uintptr_t bIsInputing = 0x3CC;
            static constexpr std::uintptr_t bWalkStopToIdle = 0x3CD;
            static constexpr std::uintptr_t bCannonCanTransitionFireToPassThrough = 0x3CE;
            static constexpr std::uintptr_t bIsStomping = 0x3CF;
            static constexpr std::uintptr_t bIsMeleeAttack = 0x3D0;
            static constexpr std::uintptr_t PivotInput2D = 0x3D8;
            static constexpr std::uintptr_t MovementDirectionDamped = 0x3F0;
            static constexpr std::uintptr_t MovementDirection_Stop = 0x3F4;
            static constexpr std::uintptr_t WalkStopPhase = 0x3F8;
            static constexpr std::uintptr_t SpeedMax = 0x400;
            static constexpr std::uintptr_t bIsTurnInPlaceRight = 0x408;
            static constexpr std::uintptr_t bIsTurningInPlace = 0x409;
            static constexpr std::uintptr_t bIsTurnInPlaceLeft = 0x40A;
            static constexpr std::uintptr_t bWantsOppositePivot = 0x40B;
            static constexpr std::uintptr_t bWalkStopInPlace = 0x40C;
            static constexpr std::uintptr_t bWasInPivot = 0x40D;
            static constexpr std::uintptr_t bIsMoveStart = 0x40E;
            static constexpr std::uintptr_t bIsRFFHips = 0x40F;
            static constexpr std::uintptr_t ToyFoxLocoFootPhase = 0x410;
            static constexpr std::uintptr_t PivotStateArray = 0x418;
            static constexpr std::uintptr_t FireToPassThroughRelevancyData = 0x430;
            static constexpr std::uintptr_t WantsToPivotAtoBTransitionData = 0x444;
            static constexpr std::uintptr_t WantsToPivotBtoATransitionData = 0x45C;
            static constexpr std::uintptr_t ActiveTagName = 0x474;
            static constexpr std::uintptr_t StopAndTurnTagName = 0x478;
            static constexpr std::uintptr_t FiringTagName = 0x47C;
            static constexpr std::uintptr_t ToyFoxStompMontage = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 55> Properties{{
            {"RootBoneRot", 0x340, "StructProperty"},
            {"Input2D", 0x358, "StructProperty"},
            {"SpeedAdjustedPlayRate", 0x370, "FloatProperty"},
            {"Speed", 0x374, "FloatProperty"},
            {"CustomMeleeTwistYaw", 0x378, "FloatProperty"},
            {"MovementDirection_Walk", 0x37C, "FloatProperty"},
            {"AimPitch_AO", 0x380, "FloatProperty"},
            {"MovementDirection", 0x384, "FloatProperty"},
            {"PivotAToBCustomBlend", 0x388, "FloatProperty"},
            {"PivotBToACustomBlend", 0x38C, "FloatProperty"},
            {"MovementDirectionInput", 0x390, "FloatProperty"},
            {"TurnInPlaceAmount", 0x398, "DoubleProperty"},
            {"SpeedScaleConstant", 0x3A0, "DoubleProperty"},
            {"MinSpeed2DThreshold", 0x3A8, "DoubleProperty"},
            {"AimYaw_AO", 0x3B0, "DoubleProperty"},
            {"SpeedPercentage", 0x3B8, "DoubleProperty"},
            {"Pivot_CardinalDirection_Snap", 0x3C0, "EnumProperty"},
            {"bIsMoveStartExit", 0x3C1, "BoolProperty"},
            {"bIsMoveStop", 0x3C2, "BoolProperty"},
            {"bIsMoveStartLFoot", 0x3C3, "BoolProperty"},
            {"bIsMoveStop_LFoot", 0x3C4, "BoolProperty"},
            {"bAbilityCannonFire", 0x3C5, "BoolProperty"},
            {"bWalkStopAndTurn", 0x3C6, "BoolProperty"},
            {"bAbilityCannonActive", 0x3C7, "BoolProperty"},
            {"bDoPivot", 0x3C8, "BoolProperty"},
            {"bWalk_UseFwdBlendspace", 0x3C9, "BoolProperty"},
            {"bIsPivotExit", 0x3CA, "BoolProperty"},
            {"bIsFirstPersonView", 0x3CB, "BoolProperty"},
            {"bIsInputing", 0x3CC, "BoolProperty"},
            {"bWalkStopToIdle", 0x3CD, "BoolProperty"},
            {"bCannonCanTransitionFireToPassThrough", 0x3CE, "BoolProperty"},
            {"bIsStomping", 0x3CF, "BoolProperty"},
            {"bIsMeleeAttack", 0x3D0, "BoolProperty"},
            {"PivotInput2D", 0x3D8, "StructProperty"},
            {"MovementDirectionDamped", 0x3F0, "FloatProperty"},
            {"MovementDirection_Stop", 0x3F4, "FloatProperty"},
            {"WalkStopPhase", 0x3F8, "DoubleProperty"},
            {"SpeedMax", 0x400, "DoubleProperty"},
            {"bIsTurnInPlaceRight", 0x408, "BoolProperty"},
            {"bIsTurningInPlace", 0x409, "BoolProperty"},
            {"bIsTurnInPlaceLeft", 0x40A, "BoolProperty"},
            {"bWantsOppositePivot", 0x40B, "BoolProperty"},
            {"bWalkStopInPlace", 0x40C, "BoolProperty"},
            {"bWasInPivot", 0x40D, "BoolProperty"},
            {"bIsMoveStart", 0x40E, "BoolProperty"},
            {"bIsRFFHips", 0x40F, "BoolProperty"},
            {"ToyFoxLocoFootPhase", 0x410, "EnumProperty"},
            {"PivotStateArray", 0x418, "StructProperty"},
            {"FireToPassThroughRelevancyData", 0x430, "StructProperty"},
            {"WantsToPivotAtoBTransitionData", 0x444, "StructProperty"},
            {"WantsToPivotBtoATransitionData", 0x45C, "StructProperty"},
            {"ActiveTagName", 0x474, "StructProperty"},
            {"StopAndTurnTagName", 0x478, "StructProperty"},
            {"FiringTagName", 0x47C, "StructProperty"},
            {"ToyFoxStompMontage", 0x480, "ObjectProperty"},
        }};
    };

    struct ToyFoxGiantPlayerPawn
    {
        static constexpr std::string_view Name = "ToyFoxGiantPlayerPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGiantPlayerPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakpointApproximateRangeSquared = 0x62D0;
            static constexpr std::uintptr_t bSpawnUsingOverrideAbilitySystemComponent = 0x6300;
            static constexpr std::uintptr_t bWaitingForDestroyed = 0x6301;
            static constexpr std::uintptr_t WeakpointComponents = 0x6308;
            static constexpr std::uintptr_t AttachedActors = 0x6318;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WeakpointApproximateRangeSquared", 0x62D0, "StructProperty"},
            {"bSpawnUsingOverrideAbilitySystemComponent", 0x6300, "BoolProperty"},
            {"bWaitingForDestroyed", 0x6301, "BoolProperty"},
            {"WeakpointComponents", 0x6308, "ArrayProperty"},
            {"AttachedActors", 0x6318, "ArrayProperty"},
        }};
    };

    struct ToyFoxPilotCinematicSequenceActor
    {
        static constexpr std::string_view Name = "ToyFoxPilotCinematicSequenceActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelSequenceActor";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaybackSettings = 0x290;
            static constexpr std::uintptr_t SequencePlayer = 0x2B8;
            static constexpr std::uintptr_t LevelSequenceAsset = 0x2C0;
            static constexpr std::uintptr_t CameraSettings = 0x2C8;
            static constexpr std::uintptr_t BurnInOptions = 0x2D0;
            static constexpr std::uintptr_t BindingOverrides = 0x2D8;
            static constexpr std::uintptr_t bAutoPlay = 0x2E0;
            static constexpr std::uintptr_t bOverrideInstanceData = 0x2E0;
            static constexpr std::uintptr_t bReplicatePlayback = 0x2E0;
            static constexpr std::uintptr_t DefaultInstanceData = 0x2E8;
            static constexpr std::uintptr_t BurnInInstance = 0x2F0;
            static constexpr std::uintptr_t bShowBurnin = 0x2F8;
            static constexpr std::uintptr_t WorldPartitionResolveData = 0x2FC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"PlaybackSettings", 0x290, "StructProperty"},
            {"SequencePlayer", 0x2B8, "ObjectProperty"},
            {"LevelSequenceAsset", 0x2C0, "ObjectProperty"},
            {"CameraSettings", 0x2C8, "StructProperty"},
            {"BurnInOptions", 0x2D0, "ObjectProperty"},
            {"BindingOverrides", 0x2D8, "ObjectProperty"},
            {"bAutoPlay", 0x2E0, "BoolProperty"},
            {"bOverrideInstanceData", 0x2E0, "BoolProperty"},
            {"bReplicatePlayback", 0x2E0, "BoolProperty"},
            {"DefaultInstanceData", 0x2E8, "ObjectProperty"},
            {"BurnInInstance", 0x2F0, "ObjectProperty"},
            {"bShowBurnin", 0x2F8, "BoolProperty"},
            {"WorldPartitionResolveData", 0x2FC, "StructProperty"},
        }};
    };

    struct ToyFoxSecondaryPilotPawnInterface
    {
        static constexpr std::string_view Name = "ToyFoxSecondaryPilotPawnInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToyFoxWeakpointCapsuleComponent
    {
        static constexpr std::string_view Name = "ToyFoxWeakpointCapsuleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CapsuleComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CapsuleHalfHeight = 0x580;
            static constexpr std::uintptr_t CapsuleRadius = 0x584;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CapsuleHalfHeight", 0x580, "FloatProperty"},
            {"CapsuleRadius", 0x584, "FloatProperty"},
        }};
    };

}
