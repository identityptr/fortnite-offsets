#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TowHookWeaponRuntime
{
    struct FortMovementMode_ExtLogicTethered
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicTethered";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationTolerance = 0x1B8;
            static constexpr std::uintptr_t DefaultTetherDistance = 0x1E0;
            static constexpr std::uintptr_t MinTetherDistance = 0x208;
            static constexpr std::uintptr_t AutoReelOutTetherDistance = 0x230;
            static constexpr std::uintptr_t MaxTetherDistance = 0x258;
            static constexpr std::uintptr_t TetherReelAccel = 0x280;
            static constexpr std::uintptr_t PlayerLateralAccel = 0x2A8;
            static constexpr std::uintptr_t PlayerLateralAccelMultiplierMinSpeed = 0x2D0;
            static constexpr std::uintptr_t PlayerLateralAccelMultiplierMaxSpeed = 0x2F8;
            static constexpr std::uintptr_t PlayerLateralAccelMultiplierMinMultiplier = 0x320;
            static constexpr std::uintptr_t PlayerLateralAccelMultiplierMaxMultiplier = 0x348;
            static constexpr std::uintptr_t GroundedFriction = 0x370;
            static constexpr std::uintptr_t GroundedBrakingDeceleration = 0x398;
            static constexpr std::uintptr_t MinGroundFrictionMultiplier = 0x3C0;
            static constexpr std::uintptr_t MaxGroundFrictionMultiplier = 0x3E8;
            static constexpr std::uintptr_t FrictionMultiplierDistance = 0x410;
            static constexpr std::uintptr_t JumpVelocity = 0x438;
            static constexpr std::uintptr_t TetherSnapDistance = 0x460;
            static constexpr std::uintptr_t MaxStuckTime = 0x488;
            static constexpr std::uintptr_t CanReelIn = 0x4B0;
            static constexpr std::uintptr_t CanReelOut = 0x4D8;
            static constexpr std::uintptr_t ReelInSpeed = 0x500;
            static constexpr std::uintptr_t ReelOutSpeed = 0x528;
            static constexpr std::uintptr_t ReelInSpeedOverTimeMultiplier = 0x550;
            static constexpr std::uintptr_t ReelOutSpeedOverTimeMultiplier = 0x558;
            static constexpr std::uintptr_t ReelInDeadZone = 0x560;
            static constexpr std::uintptr_t ReelInCatchupMinSpeed = 0x588;
            static constexpr std::uintptr_t ReelInCatchupSpeedMultiplier = 0x5B0;
            static constexpr std::uintptr_t ReelInCatchupMinDistance = 0x5D8;
            static constexpr std::uintptr_t CanMount = 0x600;
            static constexpr std::uintptr_t MountMovementTolerance = 0x628;
            static constexpr std::uintptr_t MountAllowList = 0x650;
            static constexpr std::uintptr_t MountDenyList = 0x670;
            static constexpr std::uintptr_t MountApexHeight = 0x690;
            static constexpr std::uintptr_t TimeToMount = 0x6B8;
            static constexpr std::uintptr_t MountTargetOffset = 0x6E0;
            static constexpr std::uintptr_t MountingLateralVelocityLimiter = 0x6F8;
            static constexpr std::uintptr_t MountingUpwardVelocityLimiter = 0x720;
            static constexpr std::uintptr_t MountingDownwardVelocityLimiter = 0x748;
            static constexpr std::uintptr_t WalkingSpeedThreshold = 0x770;
            static constexpr std::uintptr_t WalkingTimeThreshold = 0x798;
            static constexpr std::uintptr_t WalkingTetherSnapDistance = 0x7C0;
            static constexpr std::uintptr_t TetheredActorMinReEnterVelocity = 0x7E8;
            static constexpr std::uintptr_t TetheredBlockedTags = 0x810;
            static constexpr std::uintptr_t MountColliderBoundsExtentsBuffer = 0x830;
            static constexpr std::uintptr_t WaterBobMinSpeed = 0x848;
            static constexpr std::uintptr_t WaterGravityMultiplier = 0x870;
            static constexpr std::uintptr_t WaterBobTargetImmersionDepth = 0x898;
            static constexpr std::uintptr_t LedgeTraceBackwardsOffset = 0x8C0;
            static constexpr std::uintptr_t LedgeTraceStartZOffset = 0x8E8;
            static constexpr std::uintptr_t LedgeTraceEndZOffset = 0x910;
        };

        inline static constexpr std::array<PropertyInfo, 51> Properties{{
            {"LocationTolerance", 0x1B8, "StructProperty"},
            {"DefaultTetherDistance", 0x1E0, "StructProperty"},
            {"MinTetherDistance", 0x208, "StructProperty"},
            {"AutoReelOutTetherDistance", 0x230, "StructProperty"},
            {"MaxTetherDistance", 0x258, "StructProperty"},
            {"TetherReelAccel", 0x280, "StructProperty"},
            {"PlayerLateralAccel", 0x2A8, "StructProperty"},
            {"PlayerLateralAccelMultiplierMinSpeed", 0x2D0, "StructProperty"},
            {"PlayerLateralAccelMultiplierMaxSpeed", 0x2F8, "StructProperty"},
            {"PlayerLateralAccelMultiplierMinMultiplier", 0x320, "StructProperty"},
            {"PlayerLateralAccelMultiplierMaxMultiplier", 0x348, "StructProperty"},
            {"GroundedFriction", 0x370, "StructProperty"},
            {"GroundedBrakingDeceleration", 0x398, "StructProperty"},
            {"MinGroundFrictionMultiplier", 0x3C0, "StructProperty"},
            {"MaxGroundFrictionMultiplier", 0x3E8, "StructProperty"},
            {"FrictionMultiplierDistance", 0x410, "StructProperty"},
            {"JumpVelocity", 0x438, "StructProperty"},
            {"TetherSnapDistance", 0x460, "StructProperty"},
            {"MaxStuckTime", 0x488, "StructProperty"},
            {"CanReelIn", 0x4B0, "StructProperty"},
            {"CanReelOut", 0x4D8, "StructProperty"},
            {"ReelInSpeed", 0x500, "StructProperty"},
            {"ReelOutSpeed", 0x528, "StructProperty"},
            {"ReelInSpeedOverTimeMultiplier", 0x550, "ObjectProperty"},
            {"ReelOutSpeedOverTimeMultiplier", 0x558, "ObjectProperty"},
            {"ReelInDeadZone", 0x560, "StructProperty"},
            {"ReelInCatchupMinSpeed", 0x588, "StructProperty"},
            {"ReelInCatchupSpeedMultiplier", 0x5B0, "StructProperty"},
            {"ReelInCatchupMinDistance", 0x5D8, "StructProperty"},
            {"CanMount", 0x600, "StructProperty"},
            {"MountMovementTolerance", 0x628, "StructProperty"},
            {"MountAllowList", 0x650, "StructProperty"},
            {"MountDenyList", 0x670, "StructProperty"},
            {"MountApexHeight", 0x690, "StructProperty"},
            {"TimeToMount", 0x6B8, "StructProperty"},
            {"MountTargetOffset", 0x6E0, "StructProperty"},
            {"MountingLateralVelocityLimiter", 0x6F8, "StructProperty"},
            {"MountingUpwardVelocityLimiter", 0x720, "StructProperty"},
            {"MountingDownwardVelocityLimiter", 0x748, "StructProperty"},
            {"WalkingSpeedThreshold", 0x770, "StructProperty"},
            {"WalkingTimeThreshold", 0x798, "StructProperty"},
            {"WalkingTetherSnapDistance", 0x7C0, "StructProperty"},
            {"TetheredActorMinReEnterVelocity", 0x7E8, "StructProperty"},
            {"TetheredBlockedTags", 0x810, "StructProperty"},
            {"MountColliderBoundsExtentsBuffer", 0x830, "StructProperty"},
            {"WaterBobMinSpeed", 0x848, "StructProperty"},
            {"WaterGravityMultiplier", 0x870, "StructProperty"},
            {"WaterBobTargetImmersionDepth", 0x898, "StructProperty"},
            {"LedgeTraceBackwardsOffset", 0x8C0, "StructProperty"},
            {"LedgeTraceStartZOffset", 0x8E8, "StructProperty"},
            {"LedgeTraceEndZOffset", 0x910, "StructProperty"},
        }};
    };

    struct FortMovementMode_TetheredRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_TetheredRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t NetTetheredActor = 0x38;
            static constexpr std::uintptr_t NetLocalTetherLocation = 0x88;
            static constexpr std::uintptr_t NetProjectile = 0xB8;
            static constexpr std::uintptr_t bGrounded = 0xC1;
            static constexpr std::uintptr_t bMountingTarget = 0xC2;
            static constexpr std::uintptr_t bIsInWater = 0xC3;
            static constexpr std::uintptr_t State = 0xE0;
            static constexpr std::uintptr_t EndReason = 0xE1;
            static constexpr std::uintptr_t TimeAtSlowSpeed = 0x1A4;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"NetTetheredActor", 0x38, "WeakObjectProperty"},
            {"NetLocalTetherLocation", 0x88, "StructProperty"},
            {"NetProjectile", 0xB8, "WeakObjectProperty"},
            {"bGrounded", 0xC1, "BoolProperty"},
            {"bMountingTarget", 0xC2, "BoolProperty"},
            {"bIsInWater", 0xC3, "BoolProperty"},
            {"State", 0xE0, "EnumProperty"},
            {"EndReason", 0xE1, "EnumProperty"},
            {"TimeAtSlowSpeed", 0x1A4, "FloatProperty"},
        }};
    };

    struct FortPawnComponent_TetheredMovement
    {
        static constexpr std::string_view Name = "FortPawnComponent_TetheredMovement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGroundedStateChanged = 0xC8;
            static constexpr std::uintptr_t OnWaterStateChanged = 0xD8;
            static constexpr std::uintptr_t TetheredMovementModeExtension = 0xE8;
            static constexpr std::uintptr_t TetherRopeMesh = 0xF0;
            static constexpr std::uintptr_t TetherRopeMaterial = 0xF8;
            static constexpr std::uintptr_t PawnTetherRopeSocket = 0x100;
            static constexpr std::uintptr_t RopeMaterialWiggleParameter = 0x104;
            static constexpr std::uintptr_t RopeMaterialWiggleValue = 0x108;
            static constexpr std::uintptr_t PawnTetherRopeZOffset = 0x10C;
            static constexpr std::uintptr_t ProjectileTetherRopeSocket = 0x110;
            static constexpr std::uintptr_t ReplicatedRopeData = 0x118;
            static constexpr std::uintptr_t TetherRopeComp = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnGroundedStateChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnWaterStateChanged", 0xD8, "MulticastInlineDelegateProperty"},
            {"TetheredMovementModeExtension", 0xE8, "ClassProperty"},
            {"TetherRopeMesh", 0xF0, "ObjectProperty"},
            {"TetherRopeMaterial", 0xF8, "ObjectProperty"},
            {"PawnTetherRopeSocket", 0x100, "NameProperty"},
            {"RopeMaterialWiggleParameter", 0x104, "NameProperty"},
            {"RopeMaterialWiggleValue", 0x108, "FloatProperty"},
            {"PawnTetherRopeZOffset", 0x10C, "FloatProperty"},
            {"ProjectileTetherRopeSocket", 0x110, "NameProperty"},
            {"ReplicatedRopeData", 0x118, "StructProperty"},
            {"TetherRopeComp", 0x148, "ObjectProperty"},
        }};
    };

    struct TowHookCameraModifier
    {
        static constexpr std::string_view Name = "TowHookCameraModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraOffsetBlendInSeconds = 0x48;
            static constexpr std::uintptr_t CameraOffsetBlendOutSeconds = 0x70;
            static constexpr std::uintptr_t CameraFovBlendInSeconds = 0x98;
            static constexpr std::uintptr_t CameraFovBlendOutSeconds = 0xC0;
            static constexpr std::uintptr_t MinAdditionalFov = 0xE8;
            static constexpr std::uintptr_t MaxAdditionalFov = 0x110;
            static constexpr std::uintptr_t CameraOffsetX = 0x138;
            static constexpr std::uintptr_t CameraOffsetY = 0x160;
            static constexpr std::uintptr_t CameraOffsetZ = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CameraOffsetBlendInSeconds", 0x48, "StructProperty"},
            {"CameraOffsetBlendOutSeconds", 0x70, "StructProperty"},
            {"CameraFovBlendInSeconds", 0x98, "StructProperty"},
            {"CameraFovBlendOutSeconds", 0xC0, "StructProperty"},
            {"MinAdditionalFov", 0xE8, "StructProperty"},
            {"MaxAdditionalFov", 0x110, "StructProperty"},
            {"CameraOffsetX", 0x138, "StructProperty"},
            {"CameraOffsetY", 0x160, "StructProperty"},
            {"CameraOffsetZ", 0x188, "StructProperty"},
        }};
    };

    struct TowHookLayerAnimInstance
    {
        static constexpr std::string_view Name = "TowHookLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTethered = 0x1180;
            static constexpr std::uintptr_t bIsTetheredJumping = 0x1181;
            static constexpr std::uintptr_t TetheredDirection = 0x1184;
            static constexpr std::uintptr_t TetheredSpeed = 0x1188;
            static constexpr std::uintptr_t bIsRightLean = 0x118C;
            static constexpr std::uintptr_t bIsLeftLean = 0x118D;
            static constexpr std::uintptr_t bIsAnyLean = 0x118E;
            static constexpr std::uintptr_t NoisePlayRate = 0x1190;
            static constexpr std::uintptr_t bIsForward = 0x1194;
            static constexpr std::uintptr_t bIsBack = 0x1195;
            static constexpr std::uintptr_t bIsLeft = 0x1196;
            static constexpr std::uintptr_t bIsRight = 0x1197;
            static constexpr std::uintptr_t bIsYank = 0x1198;
            static constexpr std::uintptr_t bIsYankWeak = 0x1199;
            static constexpr std::uintptr_t bIsYankStrong = 0x119A;
            static constexpr std::uintptr_t TetherLateralAccel = 0x119C;
            static constexpr std::uintptr_t bIsAttachWait = 0x11A0;
            static constexpr std::uintptr_t bIsMounting = 0x11A1;
            static constexpr std::uintptr_t bIsAltMount = 0x11A2;
            static constexpr std::uintptr_t JumpPicker = 0x11A4;
            static constexpr std::uintptr_t LeanCurve = 0x11A8;
            static constexpr std::uintptr_t bIsAdditiveLeans = 0x11AC;
            static constexpr std::uintptr_t bIsBackwardLean = 0x11AD;
            static constexpr std::uintptr_t bIsForwardLean = 0x11AE;
            static constexpr std::uintptr_t PoseShift = 0x11B0;
            static constexpr std::uintptr_t NoisePicker = 0x11B4;
            static constexpr std::uintptr_t bIsBackOrLeftOrRight = 0x11B8;
            static constexpr std::uintptr_t YankInAirAlpha = 0x11BC;
            static constexpr std::uintptr_t AttachFullBodyAlpha = 0x11C0;
            static constexpr std::uintptr_t bIsAttachSlow = 0x11C4;
            static constexpr std::uintptr_t bIsAttachFast = 0x11C5;
            static constexpr std::uintptr_t PlayerTetheredTagName = 0x11C8;
            static constexpr std::uintptr_t WaterTagName = 0x11CC;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"bIsTethered", 0x1180, "BoolProperty"},
            {"bIsTetheredJumping", 0x1181, "BoolProperty"},
            {"TetheredDirection", 0x1184, "FloatProperty"},
            {"TetheredSpeed", 0x1188, "FloatProperty"},
            {"bIsRightLean", 0x118C, "BoolProperty"},
            {"bIsLeftLean", 0x118D, "BoolProperty"},
            {"bIsAnyLean", 0x118E, "BoolProperty"},
            {"NoisePlayRate", 0x1190, "FloatProperty"},
            {"bIsForward", 0x1194, "BoolProperty"},
            {"bIsBack", 0x1195, "BoolProperty"},
            {"bIsLeft", 0x1196, "BoolProperty"},
            {"bIsRight", 0x1197, "BoolProperty"},
            {"bIsYank", 0x1198, "BoolProperty"},
            {"bIsYankWeak", 0x1199, "BoolProperty"},
            {"bIsYankStrong", 0x119A, "BoolProperty"},
            {"TetherLateralAccel", 0x119C, "FloatProperty"},
            {"bIsAttachWait", 0x11A0, "BoolProperty"},
            {"bIsMounting", 0x11A1, "BoolProperty"},
            {"bIsAltMount", 0x11A2, "BoolProperty"},
            {"JumpPicker", 0x11A4, "IntProperty"},
            {"LeanCurve", 0x11A8, "FloatProperty"},
            {"bIsAdditiveLeans", 0x11AC, "BoolProperty"},
            {"bIsBackwardLean", 0x11AD, "BoolProperty"},
            {"bIsForwardLean", 0x11AE, "BoolProperty"},
            {"PoseShift", 0x11B0, "IntProperty"},
            {"NoisePicker", 0x11B4, "IntProperty"},
            {"bIsBackOrLeftOrRight", 0x11B8, "BoolProperty"},
            {"YankInAirAlpha", 0x11BC, "FloatProperty"},
            {"AttachFullBodyAlpha", 0x11C0, "FloatProperty"},
            {"bIsAttachSlow", 0x11C4, "BoolProperty"},
            {"bIsAttachFast", 0x11C5, "BoolProperty"},
            {"PlayerTetheredTagName", 0x11C8, "StructProperty"},
            {"WaterTagName", 0x11CC, "StructProperty"},
        }};
    };

    struct TowHookWeaponAnimInstance
    {
        static constexpr std::string_view Name = "TowHookWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasAmmo = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHasAmmo", 0x260, "BoolProperty"},
        }};
    };

    struct TowHookWeaponBlueprintLibrary
    {
        static constexpr std::string_view Name = "TowHookWeaponBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
