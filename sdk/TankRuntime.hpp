#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TankRuntime
{
    struct FortTankAnimFunctionLibrary
    {
        static constexpr std::string_view Name = "FortTankAnimFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortTankVehicle
    {
        static constexpr std::string_view Name = "FortTankVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTreadVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTankRepairedDelegate = 0x20A8;
            static constexpr std::uintptr_t BarrelSocketName = 0x20B8;
            static constexpr std::uintptr_t BarrelCollision = 0x20C0;
            static constexpr std::uintptr_t UnderVehicleCollision = 0x20C8;
            static constexpr std::uintptr_t SocketOverrideArray = 0x20D0;
            static constexpr std::uintptr_t SocketTransformOverrideMap = 0x20E0;
            static constexpr std::uintptr_t CachedSkeletalMeshComponent = 0x20F0;
            static constexpr std::uintptr_t CachedVehicleAudioController = 0x20F8;
            static constexpr std::uintptr_t DefaultServerVisibilityBasedAnimTickOption = 0x2100;
            static constexpr std::uintptr_t DefaultServerSkeletalMeshTickEnabled = 0x2101;
            static constexpr std::uintptr_t YawPivotSocketName = 0x2104;
            static constexpr std::uintptr_t PitchPivotSocketName = 0x2108;
            static constexpr std::uintptr_t DriverCameraShakeInstance = 0x2110;
            static constexpr std::uintptr_t AcceleratingCameraShakeInstance = 0x2118;
            static constexpr std::uintptr_t CachedNiagaraComponentRoadAndExhaust = 0x2128;
            static constexpr std::uintptr_t RoadAndExhaustNiagaraComponentName = 0x2130;
            static constexpr std::uintptr_t RoadAndExhaustPeelOutLeftName = 0x2140;
            static constexpr std::uintptr_t RoadAndExhaustPeelOutRightName = 0x2144;
            static constexpr std::uintptr_t RoadAndExhaustVehicleSpeedName = 0x2148;
            static constexpr std::uintptr_t RoadAndExhaustSlideDirectionName = 0x214C;
            static constexpr std::uintptr_t RoadAndExhaustMinSpeedForDust = 0x2150;
            static constexpr std::uintptr_t RoadAndExhaustDustColorLerpName = 0x2154;
            static constexpr std::uintptr_t RoadAndExhaustDustColorLerpOffRoad = 0x2158;
            static constexpr std::uintptr_t RoadAndExhaustDustColorLerpOnRoad = 0x215C;
            static constexpr std::uintptr_t RoadAndExhaustDustAlphaMultiplierName = 0x2160;
            static constexpr std::uintptr_t RoadAndExhaustDustAlphaMultiplierOffRoad = 0x2164;
            static constexpr std::uintptr_t RoadAndExhaustDustAlphaMultiplierOnRoad = 0x2168;
            static constexpr std::uintptr_t RoadAndExhaustDustFrontLeftName = 0x216C;
            static constexpr std::uintptr_t RoadAndExhaustDustFrontRightName = 0x2170;
            static constexpr std::uintptr_t RoadAndExhaustDustMiddleLeftName = 0x2174;
            static constexpr std::uintptr_t RoadAndExhaustDustMiddleRightName = 0x2178;
            static constexpr std::uintptr_t RoadAndExhaustDustRearLeftName = 0x217C;
            static constexpr std::uintptr_t RoadAndExhaustDustRearRightName = 0x2180;
            static constexpr std::uintptr_t RoadAndExhaustIsOnDirtName = 0x2184;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"OnTankRepairedDelegate", 0x20A8, "MulticastInlineDelegateProperty"},
            {"BarrelSocketName", 0x20B8, "NameProperty"},
            {"BarrelCollision", 0x20C0, "ObjectProperty"},
            {"UnderVehicleCollision", 0x20C8, "ObjectProperty"},
            {"SocketOverrideArray", 0x20D0, "ArrayProperty"},
            {"SocketTransformOverrideMap", 0x20E0, "MapProperty"},
            {"CachedSkeletalMeshComponent", 0x20F0, "ObjectProperty"},
            {"CachedVehicleAudioController", 0x20F8, "ObjectProperty"},
            {"DefaultServerVisibilityBasedAnimTickOption", 0x2100, "EnumProperty"},
            {"DefaultServerSkeletalMeshTickEnabled", 0x2101, "BoolProperty"},
            {"YawPivotSocketName", 0x2104, "NameProperty"},
            {"PitchPivotSocketName", 0x2108, "NameProperty"},
            {"DriverCameraShakeInstance", 0x2110, "ObjectProperty"},
            {"AcceleratingCameraShakeInstance", 0x2118, "ObjectProperty"},
            {"CachedNiagaraComponentRoadAndExhaust", 0x2128, "ObjectProperty"},
            {"RoadAndExhaustNiagaraComponentName", 0x2130, "StrProperty"},
            {"RoadAndExhaustPeelOutLeftName", 0x2140, "NameProperty"},
            {"RoadAndExhaustPeelOutRightName", 0x2144, "NameProperty"},
            {"RoadAndExhaustVehicleSpeedName", 0x2148, "NameProperty"},
            {"RoadAndExhaustSlideDirectionName", 0x214C, "NameProperty"},
            {"RoadAndExhaustMinSpeedForDust", 0x2150, "FloatProperty"},
            {"RoadAndExhaustDustColorLerpName", 0x2154, "NameProperty"},
            {"RoadAndExhaustDustColorLerpOffRoad", 0x2158, "FloatProperty"},
            {"RoadAndExhaustDustColorLerpOnRoad", 0x215C, "FloatProperty"},
            {"RoadAndExhaustDustAlphaMultiplierName", 0x2160, "NameProperty"},
            {"RoadAndExhaustDustAlphaMultiplierOffRoad", 0x2164, "FloatProperty"},
            {"RoadAndExhaustDustAlphaMultiplierOnRoad", 0x2168, "FloatProperty"},
            {"RoadAndExhaustDustFrontLeftName", 0x216C, "NameProperty"},
            {"RoadAndExhaustDustFrontRightName", 0x2170, "NameProperty"},
            {"RoadAndExhaustDustMiddleLeftName", 0x2174, "NameProperty"},
            {"RoadAndExhaustDustMiddleRightName", 0x2178, "NameProperty"},
            {"RoadAndExhaustDustRearLeftName", 0x217C, "NameProperty"},
            {"RoadAndExhaustDustRearRightName", 0x2180, "NameProperty"},
            {"RoadAndExhaustIsOnDirtName", 0x2184, "NameProperty"},
        }};
    };

    struct FortTankVehicleAnimInstance
    {
        static constexpr std::string_view Name = "FortTankVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTreadVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t TankVehicle = 0x560;
            static constexpr std::uintptr_t CurrentAimRotation = 0x568;
            static constexpr std::uintptr_t CurrentTurretAimRotation = 0x580;
            static constexpr std::uintptr_t SmoothedTurretDeltaRotation = 0x598;
            static constexpr std::uintptr_t InterpolationRate = 0x5B0;
            static constexpr std::uintptr_t bEngineOverheated = 0x5B4;
            static constexpr std::uintptr_t bHasPassenger = 0x5B5;
            static constexpr std::uintptr_t bIsFired = 0x5B6;
            static constexpr std::uintptr_t bIsReady = 0x5B7;
            static constexpr std::uintptr_t bDriverCoverOnCooldown = 0x5B8;
            static constexpr std::uintptr_t LeftTreadPower = 0x5BC;
            static constexpr std::uintptr_t RightTreadPower = 0x5C0;
            static constexpr std::uintptr_t LeftTreadVelocity = 0x5C4;
            static constexpr std::uintptr_t RightTreadVelocity = 0x5C8;
            static constexpr std::uintptr_t TurretYawAlpha = 0x5CC;
            static constexpr std::uintptr_t TurretYawAlphaSmoothingRate = 0x5D0;
            static constexpr std::uintptr_t CannonYaw = 0x5D4;
            static constexpr std::uintptr_t CannonPitch = 0x5D8;
            static constexpr std::uintptr_t TurretYaw = 0x5DC;
            static constexpr std::uintptr_t TurretPitch = 0x5E0;
            static constexpr std::uintptr_t MIDTreadPositionColor = 0x5E4;
            static constexpr std::uintptr_t MIDTreadDamageLeft = 0x5F4;
            static constexpr std::uintptr_t MIDTreadDamageRight = 0x5F8;
            static constexpr std::uintptr_t MIDExhaustShakeSpeed = 0x5FC;
            static constexpr std::uintptr_t MIDExhaustShakeAmp = 0x600;
            static constexpr std::uintptr_t MIDEngineBoostGlow = 0x604;
            static constexpr std::uintptr_t MIDEngineHealthRatio = 0x608;
            static constexpr std::uintptr_t TurretBlendValue = 0x60C;
            static constexpr std::uintptr_t AimingData = 0x610;
            static constexpr std::uintptr_t PreviousTurretAimRotation = 0x620;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"TankVehicle", 0x560, "ObjectProperty"},
            {"CurrentAimRotation", 0x568, "StructProperty"},
            {"CurrentTurretAimRotation", 0x580, "StructProperty"},
            {"SmoothedTurretDeltaRotation", 0x598, "StructProperty"},
            {"InterpolationRate", 0x5B0, "FloatProperty"},
            {"bEngineOverheated", 0x5B4, "BoolProperty"},
            {"bHasPassenger", 0x5B5, "BoolProperty"},
            {"bIsFired", 0x5B6, "BoolProperty"},
            {"bIsReady", 0x5B7, "BoolProperty"},
            {"bDriverCoverOnCooldown", 0x5B8, "BoolProperty"},
            {"LeftTreadPower", 0x5BC, "FloatProperty"},
            {"RightTreadPower", 0x5C0, "FloatProperty"},
            {"LeftTreadVelocity", 0x5C4, "FloatProperty"},
            {"RightTreadVelocity", 0x5C8, "FloatProperty"},
            {"TurretYawAlpha", 0x5CC, "FloatProperty"},
            {"TurretYawAlphaSmoothingRate", 0x5D0, "FloatProperty"},
            {"CannonYaw", 0x5D4, "FloatProperty"},
            {"CannonPitch", 0x5D8, "FloatProperty"},
            {"TurretYaw", 0x5DC, "FloatProperty"},
            {"TurretPitch", 0x5E0, "FloatProperty"},
            {"MIDTreadPositionColor", 0x5E4, "StructProperty"},
            {"MIDTreadDamageLeft", 0x5F4, "FloatProperty"},
            {"MIDTreadDamageRight", 0x5F8, "FloatProperty"},
            {"MIDExhaustShakeSpeed", 0x5FC, "FloatProperty"},
            {"MIDExhaustShakeAmp", 0x600, "FloatProperty"},
            {"MIDEngineBoostGlow", 0x604, "FloatProperty"},
            {"MIDEngineHealthRatio", 0x608, "FloatProperty"},
            {"TurretBlendValue", 0x60C, "FloatProperty"},
            {"AimingData", 0x610, "MapProperty"},
            {"PreviousTurretAimRotation", 0x620, "StructProperty"},
        }};
    };

    struct FortTankVehicleAudioController
    {
        static constexpr std::string_view Name = "FortTankVehicleAudioController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleAudioController";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedParam = 0x3C8;
            static constexpr std::uintptr_t TurnPowerParam = 0x400;
            static constexpr std::uintptr_t OutOfFuelParam = 0x438;
            static constexpr std::uintptr_t IdleParam = 0x470;
            static constexpr std::uintptr_t TurningParam = 0x4A8;
            static constexpr std::uintptr_t ForwardParam = 0x4E0;
            static constexpr std::uintptr_t ReverseParam = 0x518;
            static constexpr std::uintptr_t SurfaceParam = 0x550;
            static constexpr std::uintptr_t IsInWaterParam = 0x588;
            static constexpr std::uintptr_t IsInAirParam = 0x5C0;
            static constexpr std::uintptr_t BoostParam = 0x5F8;
            static constexpr std::uintptr_t CannonHorizontalMovementParam = 0x630;
            static constexpr std::uintptr_t CannonVerticalMovementParam = 0x668;
            static constexpr std::uintptr_t TurretHorizontalMovementParam = 0x6A0;
            static constexpr std::uintptr_t TurretVerticalMovementParam = 0x6D8;
            static constexpr std::uintptr_t Context = 0x710;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"SpeedParam", 0x3C8, "StructProperty"},
            {"TurnPowerParam", 0x400, "StructProperty"},
            {"OutOfFuelParam", 0x438, "StructProperty"},
            {"IdleParam", 0x470, "StructProperty"},
            {"TurningParam", 0x4A8, "StructProperty"},
            {"ForwardParam", 0x4E0, "StructProperty"},
            {"ReverseParam", 0x518, "StructProperty"},
            {"SurfaceParam", 0x550, "StructProperty"},
            {"IsInWaterParam", 0x588, "StructProperty"},
            {"IsInAirParam", 0x5C0, "StructProperty"},
            {"BoostParam", 0x5F8, "StructProperty"},
            {"CannonHorizontalMovementParam", 0x630, "StructProperty"},
            {"CannonVerticalMovementParam", 0x668, "StructProperty"},
            {"TurretHorizontalMovementParam", 0x6A0, "StructProperty"},
            {"TurretVerticalMovementParam", 0x6D8, "StructProperty"},
            {"Context", 0x710, "StructProperty"},
        }};
    };

    struct FortTankVehicleConfigs
    {
        static constexpr std::string_view Name = "FortTankVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTreadVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t TankWeaponAimingData = 0xA60;
            static constexpr std::uintptr_t SecondInteractText = 0xA70;
            static constexpr std::uintptr_t SecondInteractType = 0xA80;
            static constexpr std::uintptr_t SecondInteractDuration = 0xA88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TankWeaponAimingData", 0xA60, "ArrayProperty"},
            {"SecondInteractText", 0xA70, "TextProperty"},
            {"SecondInteractType", 0xA80, "ByteProperty"},
            {"SecondInteractDuration", 0xA88, "StructProperty"},
        }};
    };

    struct TankVehicleActorAnimInterface
    {
        static constexpr std::string_view Name = "TankVehicleActorAnimInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
