#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RockVehicleRuntime
{
    struct FortCheatManager_RockVehicle
    {
        static constexpr std::string_view Name = "FortCheatManager_RockVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RockVehicle
    {
        static constexpr std::string_view Name = "RockVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSwivelPitch = 0x2090;
            static constexpr std::uintptr_t InputSwivelYaw = 0x2094;
            static constexpr std::uintptr_t bHasDodged = 0x2098;
            static constexpr std::uintptr_t bHasDoubleJumped = 0x2098;
            static constexpr std::uintptr_t bInputReverseCamera = 0x2098;
            static constexpr std::uintptr_t bFreeLookCamera = 0x2099;
            static constexpr std::uintptr_t OnFreeCamToggled = 0x20A0;
            static constexpr std::uintptr_t RockRuntimeConfigs = 0x20B1;
            static constexpr std::uintptr_t OnSpringImpact = 0x20D0;
            static constexpr std::uintptr_t RockAnalyticsComp = 0x2158;
            static constexpr std::uintptr_t VehicleAbilities = 0x2160;
            static constexpr std::uintptr_t VehicleAbilityTickOrder = 0x2170;
            static constexpr std::uintptr_t CachedVehicleAudioController = 0x2180;
            static constexpr std::uintptr_t SupersonicAbility = 0x2188;
            static constexpr std::uintptr_t RockAnimInstance = 0x2190;
            static constexpr std::uintptr_t PendingDriverInputState = 0x2198;
            static constexpr std::uintptr_t PrevDriverInputState = 0x21D8;
            static constexpr std::uintptr_t EnterExitImpulse = 0x2218;
            static constexpr std::uintptr_t InputActionThrottleForward = 0x2230;
            static constexpr std::uintptr_t InputActionThrottleBackward = 0x2238;
            static constexpr std::uintptr_t InputActionSteerLeft = 0x2240;
            static constexpr std::uintptr_t InputActionSteerRight = 0x2248;
            static constexpr std::uintptr_t InputActionPitchForward = 0x2250;
            static constexpr std::uintptr_t InputActionPitchBackward = 0x2258;
            static constexpr std::uintptr_t InputActionYawLeft = 0x2260;
            static constexpr std::uintptr_t InputActionYawRight = 0x2268;
            static constexpr std::uintptr_t InputActionHandbrake = 0x2270;
            static constexpr std::uintptr_t InputActionJump = 0x2278;
            static constexpr std::uintptr_t InputActionRollToggle = 0x2280;
            static constexpr std::uintptr_t InputActionCameraToggle = 0x2288;
            static constexpr std::uintptr_t InputActionReverseCamera = 0x2290;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"InputSwivelPitch", 0x2090, "FloatProperty"},
            {"InputSwivelYaw", 0x2094, "FloatProperty"},
            {"bHasDodged", 0x2098, "BoolProperty"},
            {"bHasDoubleJumped", 0x2098, "BoolProperty"},
            {"bInputReverseCamera", 0x2098, "BoolProperty"},
            {"bFreeLookCamera", 0x2099, "BoolProperty"},
            {"OnFreeCamToggled", 0x20A0, "MulticastInlineDelegateProperty"},
            {"RockRuntimeConfigs", 0x20B1, "StructProperty"},
            {"OnSpringImpact", 0x20D0, "MulticastInlineDelegateProperty"},
            {"RockAnalyticsComp", 0x2158, "ObjectProperty"},
            {"VehicleAbilities", 0x2160, "ArrayProperty"},
            {"VehicleAbilityTickOrder", 0x2170, "ArrayProperty"},
            {"CachedVehicleAudioController", 0x2180, "ObjectProperty"},
            {"SupersonicAbility", 0x2188, "ObjectProperty"},
            {"RockAnimInstance", 0x2190, "ObjectProperty"},
            {"PendingDriverInputState", 0x2198, "StructProperty"},
            {"PrevDriverInputState", 0x21D8, "StructProperty"},
            {"EnterExitImpulse", 0x2218, "StructProperty"},
            {"InputActionThrottleForward", 0x2230, "ObjectProperty"},
            {"InputActionThrottleBackward", 0x2238, "ObjectProperty"},
            {"InputActionSteerLeft", 0x2240, "ObjectProperty"},
            {"InputActionSteerRight", 0x2248, "ObjectProperty"},
            {"InputActionPitchForward", 0x2250, "ObjectProperty"},
            {"InputActionPitchBackward", 0x2258, "ObjectProperty"},
            {"InputActionYawLeft", 0x2260, "ObjectProperty"},
            {"InputActionYawRight", 0x2268, "ObjectProperty"},
            {"InputActionHandbrake", 0x2270, "ObjectProperty"},
            {"InputActionJump", 0x2278, "ObjectProperty"},
            {"InputActionRollToggle", 0x2280, "ObjectProperty"},
            {"InputActionCameraToggle", 0x2288, "ObjectProperty"},
            {"InputActionReverseCamera", 0x2290, "ObjectProperty"},
        }};
    };

    struct RockVehicleAbility
    {
        static constexpr std::string_view Name = "RockVehicleAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Vehicle = 0xC0;
            static constexpr std::uintptr_t ActiveSeconds = 0xC8;
            static constexpr std::uintptr_t LastDeactivationTimeSeconds = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Vehicle", 0xC0, "ObjectProperty"},
            {"ActiveSeconds", 0xC8, "FloatProperty"},
            {"LastDeactivationTimeSeconds", 0xCC, "FloatProperty"},
        }};
    };

    struct RockVehicleAbility_AirControl
    {
        static constexpr std::string_view Name = "RockVehicleAbility_AirControl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility_Physics";
        struct Offsets
        {
            static constexpr std::uintptr_t TorqueAccel = 0x140;
            static constexpr std::uintptr_t TorqueDamping = 0x158;
            static constexpr std::uintptr_t DisableForDodgeTime = 0x170;
            static constexpr std::uintptr_t bAnyWheelsOnGround = 0x174;
            static constexpr std::uintptr_t bDodgeActive = 0x175;
            static constexpr std::uintptr_t bAutoUprightActive = 0x176;
            static constexpr std::uintptr_t DodgeAbility = 0x178;
            static constexpr std::uintptr_t AutoUprightAbility = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TorqueAccel", 0x140, "StructProperty"},
            {"TorqueDamping", 0x158, "StructProperty"},
            {"DisableForDodgeTime", 0x170, "FloatProperty"},
            {"bAnyWheelsOnGround", 0x174, "BoolProperty"},
            {"bDodgeActive", 0x175, "BoolProperty"},
            {"bAutoUprightActive", 0x176, "BoolProperty"},
            {"DodgeAbility", 0x178, "ObjectProperty"},
            {"AutoUprightAbility", 0x180, "ObjectProperty"},
        }};
    };

    struct RockVehicleAbility_AutoUpright
    {
        static constexpr std::string_view Name = "RockVehicleAbility_AutoUpright";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility_Physics";
        struct Offsets
        {
            static constexpr std::uintptr_t RollTorque = 0x140;
            static constexpr std::uintptr_t PitchTorque = 0x170;
            static constexpr std::uintptr_t PushForce = 0x1A0;
            static constexpr std::uintptr_t MinActiveSeconds = 0x1D0;
            static constexpr std::uintptr_t DodgeAbility = 0x200;
            static constexpr std::uintptr_t LastWorldContactFrame = 0x208;
            static constexpr std::uintptr_t LastContactNormal = 0x210;
            static constexpr std::uintptr_t bWheelsOnGround = 0x228;
            static constexpr std::uintptr_t bAnyWheelsOnGround = 0x229;
            static constexpr std::uintptr_t bDodgeActive = 0x22A;
            static constexpr std::uintptr_t bBodyContact = 0x22B;
            static constexpr std::uintptr_t TimeSinceLastBodyContact = 0x22C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RollTorque", 0x140, "StructProperty"},
            {"PitchTorque", 0x170, "StructProperty"},
            {"PushForce", 0x1A0, "StructProperty"},
            {"MinActiveSeconds", 0x1D0, "StructProperty"},
            {"DodgeAbility", 0x200, "ObjectProperty"},
            {"LastWorldContactFrame", 0x208, "IntProperty"},
            {"LastContactNormal", 0x210, "StructProperty"},
            {"bWheelsOnGround", 0x228, "BoolProperty"},
            {"bAnyWheelsOnGround", 0x229, "BoolProperty"},
            {"bDodgeActive", 0x22A, "BoolProperty"},
            {"bBodyContact", 0x22B, "BoolProperty"},
            {"TimeSinceLastBodyContact", 0x22C, "FloatProperty"},
        }};
    };

    struct RockVehicleAbility_Boost
    {
        static constexpr std::string_view Name = "RockVehicleAbility_Boost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility_Physics";
        struct Offsets
        {
            static constexpr std::uintptr_t BoostAccel = 0x140;
            static constexpr std::uintptr_t OnBoostFailed = 0x170;
            static constexpr std::uintptr_t BoostTank = 0x180;
            static constexpr std::uintptr_t bHasBoost = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BoostAccel", 0x140, "StructProperty"},
            {"OnBoostFailed", 0x170, "MulticastInlineDelegateProperty"},
            {"BoostTank", 0x180, "ObjectProperty"},
            {"bHasBoost", 0x188, "BoolProperty"},
        }};
    };

    struct RockVehicleAbility_Dodge
    {
        static constexpr std::string_view Name = "RockVehicleAbility_Dodge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility_Physics";
        struct Offsets
        {
            static constexpr std::uintptr_t ForwardImpulse = 0x140;
            static constexpr std::uintptr_t BackwardImpulse = 0x1A0;
            static constexpr std::uintptr_t SideImpulse = 0x200;
            static constexpr std::uintptr_t MinTimeAfterJump = 0x260;
            static constexpr std::uintptr_t MinTorqueTime = 0x290;
            static constexpr std::uintptr_t MaxTorqueTime = 0x2C0;
            static constexpr std::uintptr_t ForwardTorque = 0x2F0;
            static constexpr std::uintptr_t SideTorque = 0x320;
            static constexpr std::uintptr_t ZLiftTime = 0x350;
            static constexpr std::uintptr_t ZLiftAccel = 0x380;
            static constexpr std::uintptr_t ZDampingTime = 0x3B0;
            static constexpr std::uintptr_t ZDamping = 0x3E0;
            static constexpr std::uintptr_t InputThreshold = 0x410;
            static constexpr std::uintptr_t DodgeInput = 0x440;
            static constexpr std::uintptr_t bWheelsOnGround = 0x450;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ForwardImpulse", 0x140, "StructProperty"},
            {"BackwardImpulse", 0x1A0, "StructProperty"},
            {"SideImpulse", 0x200, "StructProperty"},
            {"MinTimeAfterJump", 0x260, "StructProperty"},
            {"MinTorqueTime", 0x290, "StructProperty"},
            {"MaxTorqueTime", 0x2C0, "StructProperty"},
            {"ForwardTorque", 0x2F0, "StructProperty"},
            {"SideTorque", 0x320, "StructProperty"},
            {"ZLiftTime", 0x350, "StructProperty"},
            {"ZLiftAccel", 0x380, "StructProperty"},
            {"ZDampingTime", 0x3B0, "StructProperty"},
            {"ZDamping", 0x3E0, "StructProperty"},
            {"InputThreshold", 0x410, "StructProperty"},
            {"DodgeInput", 0x440, "StructProperty"},
            {"bWheelsOnGround", 0x450, "BoolProperty"},
        }};
    };

    struct RockVehicleAbility_DoubleJump
    {
        static constexpr std::string_view Name = "RockVehicleAbility_DoubleJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility_Physics";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpVelocity = 0x140;
            static constexpr std::uintptr_t JumpAbility = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JumpVelocity", 0x140, "StructProperty"},
            {"JumpAbility", 0x170, "ObjectProperty"},
        }};
    };

    struct RockVehicleAbility_Flip
    {
        static constexpr std::string_view Name = "RockVehicleAbility_Flip";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility_Physics";
        struct Offsets
        {
            static constexpr std::uintptr_t Impulse = 0x140;
            static constexpr std::uintptr_t Torque = 0x170;
            static constexpr std::uintptr_t duration = 0x1A0;
            static constexpr std::uintptr_t ContactNormalThresholdDegrees = 0x1D0;
            static constexpr std::uintptr_t bWheelsOnGround = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Impulse", 0x140, "StructProperty"},
            {"Torque", 0x170, "StructProperty"},
            {"duration", 0x1A0, "StructProperty"},
            {"ContactNormalThresholdDegrees", 0x1D0, "StructProperty"},
            {"bWheelsOnGround", 0x200, "BoolProperty"},
        }};
    };

    struct RockVehicleAbility_GroundTrails
    {
        static constexpr std::string_view Name = "RockVehicleAbility_GroundTrails";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t GroundTrailsMap = 0xD0;
            static constexpr std::uintptr_t GroundTrailSockets = 0xE8;
            static constexpr std::uintptr_t HandbrakeSystem = 0xF8;
            static constexpr std::uintptr_t GroundTrailComponents = 0x100;
            static constexpr std::uintptr_t HandbrakeComponents = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GroundTrailsMap", 0xD0, "StructProperty"},
            {"GroundTrailSockets", 0xE8, "ArrayProperty"},
            {"HandbrakeSystem", 0xF8, "ObjectProperty"},
            {"GroundTrailComponents", 0x100, "ArrayProperty"},
            {"HandbrakeComponents", 0x110, "ArrayProperty"},
        }};
    };

    struct RockVehicleAbility_Jump
    {
        static constexpr std::string_view Name = "RockVehicleAbility_Jump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility_Physics";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpVelocity = 0x140;
            static constexpr std::uintptr_t JumpAccel = 0x170;
            static constexpr std::uintptr_t MinJumpSeconds = 0x1A0;
            static constexpr std::uintptr_t MaxJumpSeconds = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"JumpVelocity", 0x140, "StructProperty"},
            {"JumpAccel", 0x170, "StructProperty"},
            {"MinJumpSeconds", 0x1A0, "StructProperty"},
            {"MaxJumpSeconds", 0x1D0, "StructProperty"},
        }};
    };

    struct RockVehicleAbility_Physics
    {
        static constexpr std::string_view Name = "RockVehicleAbility_Physics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldStayActive = 0xD0;
            static constexpr std::uintptr_t InputState = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bShouldStayActive", 0xD0, "BoolProperty"},
            {"InputState", 0xD8, "StructProperty"},
        }};
    };

    struct RockVehicleAbility_StickyWheels
    {
        static constexpr std::string_view Name = "RockVehicleAbility_StickyWheels";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility_Physics";
        struct Offsets
        {
            static constexpr std::uintptr_t StickyForceScaleGround = 0x140;
            static constexpr std::uintptr_t StickyForceScaleWall = 0x170;
            static constexpr std::uintptr_t ContactNormal = 0x1A0;
            static constexpr std::uintptr_t Scale = 0x1B8;
            static constexpr std::uintptr_t bAnyWheelsOnGround = 0x1BC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StickyForceScaleGround", 0x140, "StructProperty"},
            {"StickyForceScaleWall", 0x170, "StructProperty"},
            {"ContactNormal", 0x1A0, "StructProperty"},
            {"Scale", 0x1B8, "FloatProperty"},
            {"bAnyWheelsOnGround", 0x1BC, "BoolProperty"},
        }};
    };

    struct RockVehicleAbility_Supersonic
    {
        static constexpr std::string_view Name = "RockVehicleAbility_Supersonic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RockVehicleAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTrailsActivate = 0xD0;
            static constexpr std::uintptr_t OnTrailsDeactivate = 0xE0;
            static constexpr std::uintptr_t TurnOffTime = 0xF0;
            static constexpr std::uintptr_t TurnOnTime = 0x120;
            static constexpr std::uintptr_t bUseTurnOnTimeRequirement = 0x150;
            static constexpr std::uintptr_t TurnOffSpeedBuffer = 0x158;
            static constexpr std::uintptr_t TimeBelowSupersonic = 0x188;
            static constexpr std::uintptr_t WorldTimeSupersonicExceeded = 0x18C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnTrailsActivate", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnTrailsDeactivate", 0xE0, "MulticastInlineDelegateProperty"},
            {"TurnOffTime", 0xF0, "StructProperty"},
            {"TurnOnTime", 0x120, "StructProperty"},
            {"bUseTurnOnTimeRequirement", 0x150, "BoolProperty"},
            {"TurnOffSpeedBuffer", 0x158, "StructProperty"},
            {"TimeBelowSupersonic", 0x188, "FloatProperty"},
            {"WorldTimeSupersonicExceeded", 0x18C, "FloatProperty"},
        }};
    };

    struct RockVehicleAnalyticsComponent
    {
        static constexpr std::string_view Name = "RockVehicleAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentSession = 0xC8;
            static constexpr std::uintptr_t Vehicle = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentSession", 0xC8, "StructProperty"},
            {"Vehicle", 0xF0, "ObjectProperty"},
        }};
    };

    struct RockVehicleAnimInstance
    {
        static constexpr std::string_view Name = "RockVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BouncyChassis = 0x510;
            static constexpr std::uintptr_t WheelInfoFR = 0x51C;
            static constexpr std::uintptr_t WheelInfoFL = 0x530;
            static constexpr std::uintptr_t WheelInfoBR = 0x544;
            static constexpr std::uintptr_t WheelInfoBL = 0x558;
            static constexpr std::uintptr_t WheelLerpSpeed = 0x56C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BouncyChassis", 0x510, "StructProperty"},
            {"WheelInfoFR", 0x51C, "StructProperty"},
            {"WheelInfoFL", 0x530, "StructProperty"},
            {"WheelInfoBR", 0x544, "StructProperty"},
            {"WheelInfoBL", 0x558, "StructProperty"},
            {"WheelLerpSpeed", 0x56C, "FloatProperty"},
        }};
    };

    struct RockVehicleAudioController
    {
        static constexpr std::string_view Name = "RockVehicleAudioController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleAudioController";
        struct Offsets
        {
            static constexpr std::uintptr_t SideSpeedToSkidVolume = 0x3C8;
            static constexpr std::uintptr_t SurfaceTypeInterpSpeed = 0x410;
            static constexpr std::uintptr_t TireSurfaceComponent = 0x418;
            static constexpr std::uintptr_t AirLoopComponent = 0x420;
            static constexpr std::uintptr_t SuperSonicComponent = 0x428;
            static constexpr std::uintptr_t bInWater = 0x430;
            static constexpr std::uintptr_t MotorModel = 0x438;
            static constexpr std::uintptr_t CachedVehicle = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SideSpeedToSkidVolume", 0x3C8, "StructProperty"},
            {"SurfaceTypeInterpSpeed", 0x410, "FloatProperty"},
            {"TireSurfaceComponent", 0x418, "ObjectProperty"},
            {"AirLoopComponent", 0x420, "ObjectProperty"},
            {"SuperSonicComponent", 0x428, "ObjectProperty"},
            {"bInWater", 0x430, "BoolProperty"},
            {"MotorModel", 0x438, "ObjectProperty"},
            {"CachedVehicle", 0x440, "ObjectProperty"},
        }};
    };

    struct RockVehicleBoostTank
    {
        static constexpr std::string_view Name = "RockVehicleBoostTank";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSecondsChanged = 0xC0;
            static constexpr std::uintptr_t StartSeconds = 0xD0;
            static constexpr std::uintptr_t MaxSeconds = 0x100;
            static constexpr std::uintptr_t BoostLogic = 0x130;
            static constexpr std::uintptr_t BoostRechargeRate = 0x134;
            static constexpr std::uintptr_t BoostRechargeDelay = 0x138;
            static constexpr std::uintptr_t SecondsRemaining = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnSecondsChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"StartSeconds", 0xD0, "StructProperty"},
            {"MaxSeconds", 0x100, "StructProperty"},
            {"BoostLogic", 0x130, "EnumProperty"},
            {"BoostRechargeRate", 0x134, "FloatProperty"},
            {"BoostRechargeDelay", 0x138, "FloatProperty"},
            {"SecondsRemaining", 0x13C, "FloatProperty"},
        }};
    };

    struct RockVehicleCameraMode
    {
        static constexpr std::string_view Name = "RockVehicleCameraMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_AthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t SwivelPitchMax = 0x20A0;
            static constexpr std::uintptr_t SwivelYawMax = 0x20A4;
            static constexpr std::uintptr_t GroundNormalInterpRate = 0x20A8;
            static constexpr std::uintptr_t GroundNormalAirInterpRate = 0x20AC;
            static constexpr std::uintptr_t GroundYawRate = 0x20B0;
            static constexpr std::uintptr_t WallYawRate = 0x20B4;
            static constexpr std::uintptr_t InterpToGroundTime = 0x20B8;
            static constexpr std::uintptr_t InterpToAirTime = 0x20BC;
            static constexpr std::uintptr_t AverageVelocityInterpRate = 0x20C0;
            static constexpr std::uintptr_t AirRotationInterpRateForSpeed = 0x20C8;
            static constexpr std::uintptr_t FocusOffsetInterpRate = 0x2110;
            static constexpr std::uintptr_t DistanceSpeedScale = 0x2114;
            static constexpr std::uintptr_t DistanceOffsetMin = 0x2118;
            static constexpr std::uintptr_t DistanceOffsetMax = 0x211C;
            static constexpr std::uintptr_t DistanceInterpRate = 0x2120;
            static constexpr std::uintptr_t MaxSpeedFOVOffset = 0x2124;
            static constexpr std::uintptr_t SupersonicFOVOffset = 0x2128;
            static constexpr std::uintptr_t FOVInterpRate = 0x212C;
            static constexpr std::uintptr_t CameraSettings = 0x2130;
            static constexpr std::uintptr_t VehicleTarget = 0x2150;
            static constexpr std::uintptr_t JumpAbility = 0x2158;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"SwivelPitchMax", 0x20A0, "FloatProperty"},
            {"SwivelYawMax", 0x20A4, "FloatProperty"},
            {"GroundNormalInterpRate", 0x20A8, "FloatProperty"},
            {"GroundNormalAirInterpRate", 0x20AC, "FloatProperty"},
            {"GroundYawRate", 0x20B0, "FloatProperty"},
            {"WallYawRate", 0x20B4, "FloatProperty"},
            {"InterpToGroundTime", 0x20B8, "FloatProperty"},
            {"InterpToAirTime", 0x20BC, "FloatProperty"},
            {"AverageVelocityInterpRate", 0x20C0, "FloatProperty"},
            {"AirRotationInterpRateForSpeed", 0x20C8, "StructProperty"},
            {"FocusOffsetInterpRate", 0x2110, "FloatProperty"},
            {"DistanceSpeedScale", 0x2114, "FloatProperty"},
            {"DistanceOffsetMin", 0x2118, "FloatProperty"},
            {"DistanceOffsetMax", 0x211C, "FloatProperty"},
            {"DistanceInterpRate", 0x2120, "FloatProperty"},
            {"MaxSpeedFOVOffset", 0x2124, "FloatProperty"},
            {"SupersonicFOVOffset", 0x2128, "FloatProperty"},
            {"FOVInterpRate", 0x212C, "FloatProperty"},
            {"CameraSettings", 0x2130, "StructProperty"},
            {"VehicleTarget", 0x2150, "ObjectProperty"},
            {"JumpAbility", 0x2158, "ObjectProperty"},
        }};
    };

    struct RockVehicleConfigs
    {
        static constexpr std::string_view Name = "RockVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPhysicsVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t FrontAxle = 0x990;
            static constexpr std::uintptr_t BackAxle = 0x9C4;
            static constexpr std::uintptr_t Drive = 0x9F8;
            static constexpr std::uintptr_t DemolitionConfiguration = 0xD08;
            static constexpr std::uintptr_t MaxLinearSpeed = 0xD30;
            static constexpr std::uintptr_t SupersonicSpeed = 0xD60;
            static constexpr std::uintptr_t MaxAngularSpeed = 0xD90;
            static constexpr std::uintptr_t SafeBuildingLandingDegrees = 0xD94;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"FrontAxle", 0x990, "StructProperty"},
            {"BackAxle", 0x9C4, "StructProperty"},
            {"Drive", 0x9F8, "StructProperty"},
            {"DemolitionConfiguration", 0xD08, "StructProperty"},
            {"MaxLinearSpeed", 0xD30, "StructProperty"},
            {"SupersonicSpeed", 0xD60, "StructProperty"},
            {"MaxAngularSpeed", 0xD90, "FloatProperty"},
            {"SafeBuildingLandingDegrees", 0xD94, "FloatProperty"},
        }};
    };

    struct RockVehicleManager
    {
        static constexpr std::string_view Name = "RockVehicleManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RockVehicles = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RockVehicles", 0x288, "ArrayProperty"},
        }};
    };

    struct RockVehicleWorldSubsystem
    {
        static constexpr std::string_view Name = "RockVehicleWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleManager = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VehicleManager", 0x38, "ObjectProperty"},
        }};
    };

    struct RockVehicle_InteractionOverrideComponent
    {
        static constexpr std::string_view Name = "RockVehicle_InteractionOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleInteractionOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SecondContextOverrideWidget = 0xC0;
            static constexpr std::uintptr_t bContextOverrideWidgetApplied = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SecondContextOverrideWidget", 0xC0, "ClassProperty"},
            {"bContextOverrideWidgetApplied", 0xC8, "BoolProperty"},
        }};
    };

    struct StreamingRadioPlayerComponent_Rock
    {
        static constexpr std::string_view Name = "StreamingRadioPlayerComponent_Rock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StreamingRadioPlayerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMappingData = 0xD8;
            static constexpr std::uintptr_t RadialMenuInputMappingData = 0xE8;
            static constexpr std::uintptr_t OnSourceLoading = 0xF8;
            static constexpr std::uintptr_t OnSourcePlayed = 0x108;
            static constexpr std::uintptr_t OnSourceStopped = 0x118;
            static constexpr std::uintptr_t OnSourceFailed = 0x128;
            static constexpr std::uintptr_t OnMetadataChanged = 0x138;
            static constexpr std::uintptr_t OnRadioExplicitStop = 0x148;
            static constexpr std::uintptr_t PercentAutostartRadio = 0x158;
            static constexpr std::uintptr_t DisabledVehicleList = 0x160;
            static constexpr std::uintptr_t ExteriorVolumeMultiplierMap = 0x170;
            static constexpr std::uintptr_t InteriorVolumeMultiplierMap = 0x180;
            static constexpr std::uintptr_t bMinimalStateOnPlatform = 0x190;
            static constexpr std::uintptr_t DisabledStationList = 0x198;
            static constexpr std::uintptr_t bAutostartOnEntry = 0x1A8;
            static constexpr std::uintptr_t bDisabledForCurrentPlayerState = 0x1A9;
            static constexpr std::uintptr_t ReplicatedRadioSourceData = 0x1B0;
            static constexpr std::uintptr_t OnReplicatedStateChangedDelegate = 0x218;
            static constexpr std::uintptr_t SoundComponent = 0x228;
            static constexpr std::uintptr_t AudioShape = 0x230;
            static constexpr std::uintptr_t SoundCompTemplateSource = 0x238;
            static constexpr std::uintptr_t LastSource = 0x240;
            static constexpr std::uintptr_t LastMetadata = 0x298;
            static constexpr std::uintptr_t Sources = 0x328;
            static constexpr std::uintptr_t FallbackSource = 0x338;
            static constexpr std::uintptr_t SpecialSeatList = 0x390;
            static constexpr std::uintptr_t BasePlayerInstance = 0x3A0;
            static constexpr std::uintptr_t DefaultSoundSubmix = 0x3A8;
            static constexpr std::uintptr_t LicensedSoundSubmix = 0x3B0;
            static constexpr std::uintptr_t CurrentMode = 0x3B8;
            static constexpr std::uintptr_t MaximumRetries = 0x3BC;
            static constexpr std::uintptr_t FadeoutWhenUnpoweredInMS = 0x3C0;
            static constexpr std::uintptr_t FadeoutWhenOwnerBeingDestroyedInMS = 0x3C4;
            static constexpr std::uintptr_t MaxFadeoutTimeMS = 0x3C8;
            static constexpr std::uintptr_t DefaultPlayingIndex = 0x3CC;
            static constexpr std::uintptr_t bForceAutoStartOnInit = 0x3D0;
            static constexpr std::uintptr_t bTryStopRadioOnSeatChanges = 0x3D1;
            static constexpr std::uintptr_t bStopRadioOnNetConnectionLost = 0x3D2;
            static constexpr std::uintptr_t SoundMixInside = 0x3D8;
            static constexpr std::uintptr_t SoundMixOutside = 0x3E0;
            static constexpr std::uintptr_t ActivationRadius = 0x3EC;
            static constexpr std::uintptr_t ComponentToAttachTo = 0x3F0;
            static constexpr std::uintptr_t ComponentSocketAttachTo = 0x3F4;
            static constexpr std::uintptr_t MediaSource = 0x3F8;
            static constexpr std::uintptr_t CMSSuffix = 0x400;
            static constexpr std::uintptr_t RadioStationList = 0x410;
            static constexpr std::uintptr_t MockedRadioStationList = 0x420;
            static constexpr std::uintptr_t DelegateContextObject = 0x430;
            static constexpr std::uintptr_t MediaStartTimeFromInit = 0x43C;
            static constexpr std::uintptr_t CachedDriverLocalPlayer = 0x468;
        };

        inline static constexpr std::array<PropertyInfo, 50> Properties{{
            {"InputMappingData", 0xD8, "MapProperty"},
            {"RadialMenuInputMappingData", 0xE8, "MapProperty"},
            {"OnSourceLoading", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnSourcePlayed", 0x108, "MulticastInlineDelegateProperty"},
            {"OnSourceStopped", 0x118, "MulticastInlineDelegateProperty"},
            {"OnSourceFailed", 0x128, "MulticastInlineDelegateProperty"},
            {"OnMetadataChanged", 0x138, "MulticastInlineDelegateProperty"},
            {"OnRadioExplicitStop", 0x148, "MulticastInlineDelegateProperty"},
            {"PercentAutostartRadio", 0x158, "FloatProperty"},
            {"DisabledVehicleList", 0x160, "ArrayProperty"},
            {"ExteriorVolumeMultiplierMap", 0x170, "MapProperty"},
            {"InteriorVolumeMultiplierMap", 0x180, "MapProperty"},
            {"bMinimalStateOnPlatform", 0x190, "BoolProperty"},
            {"DisabledStationList", 0x198, "ArrayProperty"},
            {"bAutostartOnEntry", 0x1A8, "BoolProperty"},
            {"bDisabledForCurrentPlayerState", 0x1A9, "BoolProperty"},
            {"ReplicatedRadioSourceData", 0x1B0, "StructProperty"},
            {"OnReplicatedStateChangedDelegate", 0x218, "MulticastInlineDelegateProperty"},
            {"SoundComponent", 0x228, "ObjectProperty"},
            {"AudioShape", 0x230, "ObjectProperty"},
            {"SoundCompTemplateSource", 0x238, "ObjectProperty"},
            {"LastSource", 0x240, "StructProperty"},
            {"LastMetadata", 0x298, "StructProperty"},
            {"Sources", 0x328, "ArrayProperty"},
            {"FallbackSource", 0x338, "StructProperty"},
            {"SpecialSeatList", 0x390, "MapProperty"},
            {"BasePlayerInstance", 0x3A0, "ObjectProperty"},
            {"DefaultSoundSubmix", 0x3A8, "ObjectProperty"},
            {"LicensedSoundSubmix", 0x3B0, "ObjectProperty"},
            {"CurrentMode", 0x3B8, "EnumProperty"},
            {"MaximumRetries", 0x3BC, "IntProperty"},
            {"FadeoutWhenUnpoweredInMS", 0x3C0, "IntProperty"},
            {"FadeoutWhenOwnerBeingDestroyedInMS", 0x3C4, "IntProperty"},
            {"MaxFadeoutTimeMS", 0x3C8, "IntProperty"},
            {"DefaultPlayingIndex", 0x3CC, "IntProperty"},
            {"bForceAutoStartOnInit", 0x3D0, "BoolProperty"},
            {"bTryStopRadioOnSeatChanges", 0x3D1, "BoolProperty"},
            {"bStopRadioOnNetConnectionLost", 0x3D2, "BoolProperty"},
            {"SoundMixInside", 0x3D8, "ObjectProperty"},
            {"SoundMixOutside", 0x3E0, "ObjectProperty"},
            {"ActivationRadius", 0x3EC, "FloatProperty"},
            {"ComponentToAttachTo", 0x3F0, "NameProperty"},
            {"ComponentSocketAttachTo", 0x3F4, "NameProperty"},
            {"MediaSource", 0x3F8, "ObjectProperty"},
            {"CMSSuffix", 0x400, "StrProperty"},
            {"RadioStationList", 0x410, "ArrayProperty"},
            {"MockedRadioStationList", 0x420, "ArrayProperty"},
            {"DelegateContextObject", 0x430, "ObjectProperty"},
            {"MediaStartTimeFromInit", 0x43C, "FloatProperty"},
            {"CachedDriverLocalPlayer", 0x468, "ObjectProperty"},
        }};
    };

}
