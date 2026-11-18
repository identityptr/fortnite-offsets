#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TackyGoofinessGameplay
{
    struct FortGameplayAbility_TackyGoofinessStretchGrab
    {
        static constexpr std::string_view Name = "FortGameplayAbility_TackyGoofinessStretchGrab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ChargeStretchClass = 0xB40;
            static constexpr std::uintptr_t ChargeLaunchClass = 0xB48;
            static constexpr std::uintptr_t TraceCollisionChannel = 0xB58;
            static constexpr std::uintptr_t IgnoredObjectChannels = 0xB60;
            static constexpr std::uintptr_t SearchOriginZOffset = 0xB70;
            static constexpr std::uintptr_t NumSamplesPerHand = 0xB98;
            static constexpr std::uintptr_t ConeAngleDegrees = 0xBC0;
            static constexpr std::uintptr_t DistanceFromPawn = 0xBE8;
            static constexpr std::uintptr_t FallbackForwardOffset = 0xC10;
            static constexpr std::uintptr_t FallbackLateralOffset = 0xC38;
            static constexpr std::uintptr_t FallbackBackwardOffset = 0xC60;
            static constexpr std::uintptr_t FallbackStepCount = 0xC88;
            static constexpr std::uintptr_t DebugDrawDuration = 0xCB0;
            static constexpr std::uintptr_t DebugCircleRadius = 0xCB4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ChargeStretchClass", 0xB40, "ClassProperty"},
            {"ChargeLaunchClass", 0xB48, "ClassProperty"},
            {"TraceCollisionChannel", 0xB58, "ByteProperty"},
            {"IgnoredObjectChannels", 0xB60, "ArrayProperty"},
            {"SearchOriginZOffset", 0xB70, "StructProperty"},
            {"NumSamplesPerHand", 0xB98, "StructProperty"},
            {"ConeAngleDegrees", 0xBC0, "StructProperty"},
            {"DistanceFromPawn", 0xBE8, "StructProperty"},
            {"FallbackForwardOffset", 0xC10, "StructProperty"},
            {"FallbackLateralOffset", 0xC38, "StructProperty"},
            {"FallbackBackwardOffset", 0xC60, "StructProperty"},
            {"FallbackStepCount", 0xC88, "StructProperty"},
            {"DebugDrawDuration", 0xCB0, "FloatProperty"},
            {"DebugCircleRadius", 0xCB4, "FloatProperty"},
        }};
    };

    struct FortMovementMode_TackyGoofinessChargeStretch
    {
        static constexpr std::string_view Name = "FortMovementMode_TackyGoofinessChargeStretch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t ChargeStretchRuntimeData = 0x1B8;
            static constexpr std::uintptr_t MaxStretchDistance = 0x1C0;
            static constexpr std::uintptr_t MaxChargeTime = 0x1E8;
            static constexpr std::uintptr_t LedgeStopDistance = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ChargeStretchRuntimeData", 0x1B8, "WeakObjectProperty"},
            {"MaxStretchDistance", 0x1C0, "StructProperty"},
            {"MaxChargeTime", 0x1E8, "StructProperty"},
            {"LedgeStopDistance", 0x210, "StructProperty"},
        }};
    };

    struct FortMovementMode_TackyGoofinessChargeStretchRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_TackyGoofinessChargeStretchRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t AveragedHandPosition = 0x38;
            static constexpr std::uintptr_t InitialLocation = 0x50;
            static constexpr std::uintptr_t InitialForwardVector = 0x68;
            static constexpr std::uintptr_t ChargeAlpha = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AveragedHandPosition", 0x38, "StructProperty"},
            {"InitialLocation", 0x50, "StructProperty"},
            {"InitialForwardVector", 0x68, "StructProperty"},
            {"ChargeAlpha", 0x80, "FloatProperty"},
        }};
    };

    struct FortMovementMode_TackyGoofinessStretchLaunch
    {
        static constexpr std::string_view Name = "FortMovementMode_TackyGoofinessStretchLaunch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t StretchLaunchRuntimeData = 0x1B8;
            static constexpr std::uintptr_t Gravity = 0x1C0;
            static constexpr std::uintptr_t ReleaseMontage = 0x1E8;
            static constexpr std::uintptr_t ApexFlailMontage = 0x1F0;
            static constexpr std::uintptr_t WallSplatMontage = 0x1F8;
            static constexpr std::uintptr_t TrajectoryDamageEffect = 0x200;
            static constexpr std::uintptr_t SkidToStopEffect = 0x208;
            static constexpr std::uintptr_t SlideExtensionClass = 0x210;
            static constexpr std::uintptr_t WaterBodyClass = 0x218;
            static constexpr std::uintptr_t CancelTechniqueName = 0x220;
            static constexpr std::uintptr_t LaunchStrength = 0x228;
            static constexpr std::uintptr_t BlockLandBufferTime = 0x250;
            static constexpr std::uintptr_t SlideEarlyEndDistance = 0x278;
            static constexpr std::uintptr_t DefaultLandEarlyEndDistance = 0x2A0;
            static constexpr std::uintptr_t StuckEndSpeed = 0x2C8;
            static constexpr std::uintptr_t SteeringMult = 0x2F0;
            static constexpr std::uintptr_t MaxDestructionTime = 0x318;
            static constexpr std::uintptr_t InAirCue = 0x340;
            static constexpr std::uintptr_t PitchAdd = 0x348;
            static constexpr std::uintptr_t MinPitch = 0x370;
            static constexpr std::uintptr_t MaxPitch = 0x398;
            static constexpr std::uintptr_t ShallowSteepCrossoverAngle = 0x3C0;
            static constexpr std::uintptr_t HardImpactCollisionAngle = 0x3E8;
            static constexpr std::uintptr_t MinSplatSurfaceAngle = 0x410;
            static constexpr std::uintptr_t LookAheadDistance = 0x438;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"StretchLaunchRuntimeData", 0x1B8, "WeakObjectProperty"},
            {"Gravity", 0x1C0, "StructProperty"},
            {"ReleaseMontage", 0x1E8, "ObjectProperty"},
            {"ApexFlailMontage", 0x1F0, "ObjectProperty"},
            {"WallSplatMontage", 0x1F8, "ObjectProperty"},
            {"TrajectoryDamageEffect", 0x200, "ClassProperty"},
            {"SkidToStopEffect", 0x208, "ClassProperty"},
            {"SlideExtensionClass", 0x210, "ClassProperty"},
            {"WaterBodyClass", 0x218, "ClassProperty"},
            {"CancelTechniqueName", 0x220, "NameProperty"},
            {"LaunchStrength", 0x228, "StructProperty"},
            {"BlockLandBufferTime", 0x250, "StructProperty"},
            {"SlideEarlyEndDistance", 0x278, "StructProperty"},
            {"DefaultLandEarlyEndDistance", 0x2A0, "StructProperty"},
            {"StuckEndSpeed", 0x2C8, "StructProperty"},
            {"SteeringMult", 0x2F0, "StructProperty"},
            {"MaxDestructionTime", 0x318, "StructProperty"},
            {"InAirCue", 0x340, "StructProperty"},
            {"PitchAdd", 0x348, "StructProperty"},
            {"MinPitch", 0x370, "StructProperty"},
            {"MaxPitch", 0x398, "StructProperty"},
            {"ShallowSteepCrossoverAngle", 0x3C0, "StructProperty"},
            {"HardImpactCollisionAngle", 0x3E8, "StructProperty"},
            {"MinSplatSurfaceAngle", 0x410, "StructProperty"},
            {"LookAheadDistance", 0x438, "StructProperty"},
        }};
    };

    struct FortMovementMode_TackyGoofinessStretchLaunchRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_TackyGoofinessStretchLaunchRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeCharged = 0x38;
            static constexpr std::uintptr_t AimRotation = 0x40;
            static constexpr std::uintptr_t LaunchVelocity = 0x58;
            static constexpr std::uintptr_t AverageGrabLocation = 0x70;
            static constexpr std::uintptr_t bInputReleased = 0x88;
            static constexpr std::uintptr_t InitialYaw = 0x8C;
            static constexpr std::uintptr_t bShouldSlide = 0x90;
            static constexpr std::uintptr_t EndLaunchType = 0x91;
            static constexpr std::uintptr_t TimeSinceRelease = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TimeCharged", 0x38, "FloatProperty"},
            {"AimRotation", 0x40, "StructProperty"},
            {"LaunchVelocity", 0x58, "StructProperty"},
            {"AverageGrabLocation", 0x70, "StructProperty"},
            {"bInputReleased", 0x88, "BoolProperty"},
            {"InitialYaw", 0x8C, "FloatProperty"},
            {"bShouldSlide", 0x90, "BoolProperty"},
            {"EndLaunchType", 0x91, "EnumProperty"},
            {"TimeSinceRelease", 0x94, "FloatProperty"},
        }};
    };

    struct FortPawnComponent_TackyGoofinessStretchGrab
    {
        static constexpr std::string_view Name = "FortPawnComponent_TackyGoofinessStretchGrab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnHandsUpdatedDelegate = 0xC8;
            static constexpr std::uintptr_t Hands = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnHandsUpdatedDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"Hands", 0xD8, "StructProperty"},
        }};
    };

    struct TackyGoofinessLayerAnimInstance
    {
        static constexpr std::string_view Name = "TackyGoofinessLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMantisLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t NoTargetReach = 0x1190;
            static constexpr std::uintptr_t LeftFistOffset = 0x1198;
            static constexpr std::uintptr_t RightFistOffset = 0x11A8;
            static constexpr std::uintptr_t LeftFistTargetCS = 0x11B8;
            static constexpr std::uintptr_t RightFistTargetCS = 0x11D0;
            static constexpr std::uintptr_t FistTargetCS = 0x11E8;
            static constexpr std::uintptr_t FistTargetWS = 0x1200;
            static constexpr std::uintptr_t bFistTargetValid = 0x1218;
            static constexpr std::uintptr_t bHasReticleTarget = 0x1219;
            static constexpr std::uintptr_t ReachUsed = 0x121C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"NoTargetReach", 0x1190, "FloatProperty"},
            {"LeftFistOffset", 0x1198, "StructProperty"},
            {"RightFistOffset", 0x11A8, "StructProperty"},
            {"LeftFistTargetCS", 0x11B8, "StructProperty"},
            {"RightFistTargetCS", 0x11D0, "StructProperty"},
            {"FistTargetCS", 0x11E8, "StructProperty"},
            {"FistTargetWS", 0x1200, "StructProperty"},
            {"bFistTargetValid", 0x1218, "BoolProperty"},
            {"bHasReticleTarget", 0x1219, "BoolProperty"},
            {"ReachUsed", 0x121C, "FloatProperty"},
        }};
    };

    struct TargetingSelectionTask_Trace_TackyGoofinessRange
    {
        static constexpr std::string_view Name = "TargetingSelectionTask_Trace_TackyGoofinessRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSelectionTask_Trace_FromCamera";
        struct Offsets
        {
            static constexpr std::uintptr_t bCheckForObstacle = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCheckForObstacle", 0x170, "BoolProperty"},
        }};
    };

}
