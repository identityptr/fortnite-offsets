#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MotorboatRuntime
{
    struct FortMeatballPontoonsComponent
    {
        static constexpr std::string_view Name = "FortMeatballPontoonsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehiclePontoonsComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterEffectsPontoonParameters = 0x1E8;
            static constexpr std::uintptr_t OverridePontoonRadiuses = 0x1F8;
            static constexpr std::uintptr_t PushForcePontoons = 0x208;
            static constexpr std::uintptr_t LeftTurnPontoons = 0x218;
            static constexpr std::uintptr_t RightTurnPontoons = 0x228;
            static constexpr std::uintptr_t OwnerVehicle = 0x238;
            static constexpr std::uintptr_t WaterLineStartPontoonIndex = 0x240;
            static constexpr std::uintptr_t WaterLineEndPontoonIndex = 0x244;
            static constexpr std::uintptr_t ExtraBuoyancyData = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"WaterEffectsPontoonParameters", 0x1E8, "ArrayProperty"},
            {"OverridePontoonRadiuses", 0x1F8, "ArrayProperty"},
            {"PushForcePontoons", 0x208, "ArrayProperty"},
            {"LeftTurnPontoons", 0x218, "ArrayProperty"},
            {"RightTurnPontoons", 0x228, "ArrayProperty"},
            {"OwnerVehicle", 0x238, "ObjectProperty"},
            {"WaterLineStartPontoonIndex", 0x240, "IntProperty"},
            {"WaterLineEndPontoonIndex", 0x244, "IntProperty"},
            {"ExtraBuoyancyData", 0x250, "MapProperty"},
        }};
    };

    struct FortMeatballVehicle
    {
        static constexpr std::string_view Name = "FortMeatballVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t BoostAction = 0x2090;
            static constexpr std::uintptr_t FxNormalizationMaxSpeedKmh = 0x2168;
            static constexpr std::uintptr_t CacheAudioEngineUp = 0x2170;
            static constexpr std::uintptr_t CacheAudioEngineDown = 0x2178;
            static constexpr std::uintptr_t CacheAudioWakeTurn = 0x2180;
            static constexpr std::uintptr_t CacheAudioWakeSpeed = 0x2188;
            static constexpr std::uintptr_t CacheAudioScrape = 0x2190;
            static constexpr std::uintptr_t CacheAudioEngineOutOfFuel = 0x2198;
            static constexpr std::uintptr_t BoostMID = 0x21A0;
            static constexpr std::uintptr_t CachedGroundFXComponent = 0x21A8;
            static constexpr std::uintptr_t DrivingPlayerController = 0x21B0;
            static constexpr std::uintptr_t LandCameraShake = 0x21B8;
            static constexpr std::uintptr_t LandCameraShakeClass = 0x21C0;
            static constexpr std::uintptr_t DriverCameraShake = 0x21C8;
            static constexpr std::uintptr_t DriverCameraShakeClass = 0x21D0;
            static constexpr std::uintptr_t LandRumbleIntensity = 0x21D8;
            static constexpr std::uintptr_t LandForceFeedbackHandle = 0x21E0;
            static constexpr std::uintptr_t TurnRumbleIntensity = 0x21E8;
            static constexpr std::uintptr_t TurnForceFeedbackHandle = 0x21F0;
            static constexpr std::uintptr_t CurrentSnowAltitude = 0x21F8;
            static constexpr std::uintptr_t bHasSnow = 0x21FC;
            static constexpr std::uintptr_t bLargeRumble = 0x21FD;
            static constexpr std::uintptr_t bTurnRumbleActive = 0x21FE;
            static constexpr std::uintptr_t bWaterDropsOnScreen = 0x21FF;
            static constexpr std::uintptr_t GCVehicleScreenDrips = 0x2200;
            static constexpr std::uintptr_t GCParamsEmpty = 0x2208;
            static constexpr std::uintptr_t BoostingCamera = 0x22D8;
            static constexpr std::uintptr_t VehicleCameraNoWeaponOverride = 0x22E0;
            static constexpr std::uintptr_t FortMeatballVehicleConfigs = 0x22F8;
            static constexpr std::uintptr_t WaterLineStartPontoonIndex = 0x2300;
            static constexpr std::uintptr_t WaterLineEndPontoonIndex = 0x2304;
            static constexpr std::uintptr_t bBoostFailed = 0x2340;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"BoostAction", 0x2090, "StructProperty"},
            {"FxNormalizationMaxSpeedKmh", 0x2168, "FloatProperty"},
            {"CacheAudioEngineUp", 0x2170, "ObjectProperty"},
            {"CacheAudioEngineDown", 0x2178, "ObjectProperty"},
            {"CacheAudioWakeTurn", 0x2180, "ObjectProperty"},
            {"CacheAudioWakeSpeed", 0x2188, "ObjectProperty"},
            {"CacheAudioScrape", 0x2190, "ObjectProperty"},
            {"CacheAudioEngineOutOfFuel", 0x2198, "ObjectProperty"},
            {"BoostMID", 0x21A0, "ObjectProperty"},
            {"CachedGroundFXComponent", 0x21A8, "ObjectProperty"},
            {"DrivingPlayerController", 0x21B0, "ObjectProperty"},
            {"LandCameraShake", 0x21B8, "ObjectProperty"},
            {"LandCameraShakeClass", 0x21C0, "ClassProperty"},
            {"DriverCameraShake", 0x21C8, "ObjectProperty"},
            {"DriverCameraShakeClass", 0x21D0, "ClassProperty"},
            {"LandRumbleIntensity", 0x21D8, "FloatProperty"},
            {"LandForceFeedbackHandle", 0x21E0, "UInt64Property"},
            {"TurnRumbleIntensity", 0x21E8, "FloatProperty"},
            {"TurnForceFeedbackHandle", 0x21F0, "UInt64Property"},
            {"CurrentSnowAltitude", 0x21F8, "FloatProperty"},
            {"bHasSnow", 0x21FC, "BoolProperty"},
            {"bLargeRumble", 0x21FD, "BoolProperty"},
            {"bTurnRumbleActive", 0x21FE, "BoolProperty"},
            {"bWaterDropsOnScreen", 0x21FF, "BoolProperty"},
            {"GCVehicleScreenDrips", 0x2200, "StructProperty"},
            {"GCParamsEmpty", 0x2208, "StructProperty"},
            {"BoostingCamera", 0x22D8, "ClassProperty"},
            {"VehicleCameraNoWeaponOverride", 0x22E0, "ClassProperty"},
            {"FortMeatballVehicleConfigs", 0x22F8, "ObjectProperty"},
            {"WaterLineStartPontoonIndex", 0x2300, "IntProperty"},
            {"WaterLineEndPontoonIndex", 0x2304, "IntProperty"},
            {"bBoostFailed", 0x2340, "BoolProperty"},
        }};
    };

    struct FortMeatballVehicleAnimInstance
    {
        static constexpr std::string_view Name = "FortMeatballVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Meatball = 0x510;
            static constexpr std::uintptr_t MeatballSpeed = 0x518;
            static constexpr std::uintptr_t SteeringAngle = 0x51C;
            static constexpr std::uintptr_t BoostCharge = 0x520;
            static constexpr std::uintptr_t SeatOffset = 0x528;
            static constexpr std::uintptr_t SeatRotation = 0x540;
            static constexpr std::uintptr_t CurrentDriveJiggle = 0x558;
            static constexpr std::uintptr_t SteeringRotator = 0x570;
            static constexpr std::uintptr_t SpeedGuageRotator = 0x588;
            static constexpr std::uintptr_t BoostPercentRotator = 0x5A0;
            static constexpr std::uintptr_t RandomJiggleRotatorMotorTop = 0x5B8;
            static constexpr std::uintptr_t RandomJiggleRotatorMotorBase = 0x5D0;
            static constexpr std::uintptr_t bIsMovingForward = 0x5E8;
            static constexpr std::uintptr_t bIsDrivingFast = 0x5E9;
            static constexpr std::uintptr_t bIsBraking = 0x5EA;
            static constexpr std::uintptr_t bIsBoosting = 0x5EB;
            static constexpr std::uintptr_t bIsBoostReady = 0x5EC;
            static constexpr std::uintptr_t bIsBoostStarting = 0x5ED;
            static constexpr std::uintptr_t bIsBoostEnding = 0x5EE;
            static constexpr std::uintptr_t bIsRocketReady = 0x5EF;
            static constexpr std::uintptr_t bIsRocketOnCoolDown = 0x5F0;
            static constexpr std::uintptr_t bIsSteeringLeft = 0x5F1;
            static constexpr std::uintptr_t bIsSteeringRight = 0x5F2;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"Meatball", 0x510, "ObjectProperty"},
            {"MeatballSpeed", 0x518, "FloatProperty"},
            {"SteeringAngle", 0x51C, "FloatProperty"},
            {"BoostCharge", 0x520, "FloatProperty"},
            {"SeatOffset", 0x528, "StructProperty"},
            {"SeatRotation", 0x540, "StructProperty"},
            {"CurrentDriveJiggle", 0x558, "StructProperty"},
            {"SteeringRotator", 0x570, "StructProperty"},
            {"SpeedGuageRotator", 0x588, "StructProperty"},
            {"BoostPercentRotator", 0x5A0, "StructProperty"},
            {"RandomJiggleRotatorMotorTop", 0x5B8, "StructProperty"},
            {"RandomJiggleRotatorMotorBase", 0x5D0, "StructProperty"},
            {"bIsMovingForward", 0x5E8, "BoolProperty"},
            {"bIsDrivingFast", 0x5E9, "BoolProperty"},
            {"bIsBraking", 0x5EA, "BoolProperty"},
            {"bIsBoosting", 0x5EB, "BoolProperty"},
            {"bIsBoostReady", 0x5EC, "BoolProperty"},
            {"bIsBoostStarting", 0x5ED, "BoolProperty"},
            {"bIsBoostEnding", 0x5EE, "BoolProperty"},
            {"bIsRocketReady", 0x5EF, "BoolProperty"},
            {"bIsRocketOnCoolDown", 0x5F0, "BoolProperty"},
            {"bIsSteeringLeft", 0x5F1, "BoolProperty"},
            {"bIsSteeringRight", 0x5F2, "BoolProperty"},
        }};
    };

    struct FortMeatballVehicleConfigs
    {
        static constexpr std::string_view Name = "FortMeatballVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPhysicsVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterSteerRollFactor = 0x990;
            static constexpr std::uintptr_t InnerTurnPontoonOffsetMultiplier = 0x994;
            static constexpr std::uintptr_t OuterTurnPontoonOffsetMultiplier = 0x998;
            static constexpr std::uintptr_t MinForwardSpeedToBankOnTurn = 0x99C;
            static constexpr std::uintptr_t BoostMinPushForce = 0x9A0;
            static constexpr std::uintptr_t BoostTopSpeedForceMultiplier = 0x9A4;
            static constexpr std::uintptr_t BoostTopSpeedMultiplier = 0x9A8;
            static constexpr std::uintptr_t MaxPontoonOffsetPerSecond = 0x9AC;
            static constexpr std::uintptr_t LandTopSpeedMultiplier = 0x9B0;
            static constexpr std::uintptr_t LandPushForceMultiplier = 0x9B4;
            static constexpr std::uintptr_t MinPushPontoonsForWaterDriving = 0x9B8;
            static constexpr std::uintptr_t MaxWaterPitchAngle = 0x9BC;
            static constexpr std::uintptr_t MinForwardSpeedToPitch = 0x9C0;
            static constexpr std::uintptr_t MinForwardSpeedForMaxPitch = 0x9C4;
            static constexpr std::uintptr_t MaxForwardSpeedForMaxPitch = 0x9C8;
            static constexpr std::uintptr_t MaxFowrardSpeedPitchFactor = 0x9CC;
            static constexpr std::uintptr_t BoostMaxForwardSpeedPitchFactor = 0x9D0;
            static constexpr std::uintptr_t FrontLateralFrictionFactor = 0x9D4;
            static constexpr std::uintptr_t RearLateralFrictionFactor = 0x9D8;
            static constexpr std::uintptr_t LandFrontLateralFrictionFactor = 0x9DC;
            static constexpr std::uintptr_t LandRearLateralFrictionFactor = 0x9E0;
            static constexpr std::uintptr_t LateralFrictionModStartSpeedKmh = 0x9E4;
            static constexpr std::uintptr_t RearLateralFrictionModPerSpeedKmh = 0x9E8;
            static constexpr std::uintptr_t FrontLateralFrictionModPerSpeedKmh = 0x9EC;
            static constexpr std::uintptr_t SeatOffsetScaleX = 0x9F0;
            static constexpr std::uintptr_t SeatOffsetScaleY = 0x9F4;
            static constexpr std::uintptr_t SeatYawAngleMax = 0x9F8;
            static constexpr std::uintptr_t SeatPitchAngleMax = 0x9FC;
            static constexpr std::uintptr_t BoostSteeringMultiplier = 0xA00;
            static constexpr std::uintptr_t BoostSteeringMultiplierRampTime = 0xA04;
            static constexpr std::uintptr_t LandSteeringMultiplier = 0xA08;
            static constexpr std::uintptr_t LandMinSpeedSteeringAngle = 0xA0C;
            static constexpr std::uintptr_t LandMaxSpeedSteeringAngle = 0xA10;
            static constexpr std::uintptr_t DragCoefficientNoAccel = 0xA14;
            static constexpr std::uintptr_t DragCoefficient2NoAccel = 0xA18;
            static constexpr std::uintptr_t DragCoefficientMultiplierRoad = 0xA1C;
            static constexpr std::uintptr_t DragCoefficientMultiplierGrass = 0xA20;
            static constexpr std::uintptr_t DragCoefficientMultiplierDirt = 0xA24;
            static constexpr std::uintptr_t DragCoefficientMultiplierSnow = 0xA28;
            static constexpr std::uintptr_t DragCoefficientMultiplierIce = 0xA2C;
            static constexpr std::uintptr_t DragCoefficientMultiplierMud = 0xA30;
            static constexpr std::uintptr_t MinSteerAlphaForWaterFriction = 0xA34;
            static constexpr std::uintptr_t TurnInPlaceYawStiff = 0xA38;
            static constexpr std::uintptr_t TurnInPlaceYawDamp = 0xA3C;
            static constexpr std::uintptr_t MaxSteerRollAngle = 0xA40;
            static constexpr std::uintptr_t MaxTurnInPlaceYawAngle = 0xA44;
            static constexpr std::uintptr_t UprightSpringSteerStrength = 0xA48;
            static constexpr std::uintptr_t TurnInPlaceYawStrength = 0xA4C;
            static constexpr std::uintptr_t MaxSpeedForTurnInPlaceKmH = 0xA50;
            static constexpr std::uintptr_t BlendOutExtraSpeedTurnInPlaceKmH = 0xA54;
            static constexpr std::uintptr_t MaxPitchForCameraInPlaceSteer = 0xA58;
            static constexpr std::uintptr_t SpringLengthMutliplierWater = 0xA5C;
        };

        inline static constexpr std::array<PropertyInfo, 52> Properties{{
            {"WaterSteerRollFactor", 0x990, "FloatProperty"},
            {"InnerTurnPontoonOffsetMultiplier", 0x994, "FloatProperty"},
            {"OuterTurnPontoonOffsetMultiplier", 0x998, "FloatProperty"},
            {"MinForwardSpeedToBankOnTurn", 0x99C, "FloatProperty"},
            {"BoostMinPushForce", 0x9A0, "FloatProperty"},
            {"BoostTopSpeedForceMultiplier", 0x9A4, "FloatProperty"},
            {"BoostTopSpeedMultiplier", 0x9A8, "FloatProperty"},
            {"MaxPontoonOffsetPerSecond", 0x9AC, "FloatProperty"},
            {"LandTopSpeedMultiplier", 0x9B0, "FloatProperty"},
            {"LandPushForceMultiplier", 0x9B4, "FloatProperty"},
            {"MinPushPontoonsForWaterDriving", 0x9B8, "IntProperty"},
            {"MaxWaterPitchAngle", 0x9BC, "FloatProperty"},
            {"MinForwardSpeedToPitch", 0x9C0, "FloatProperty"},
            {"MinForwardSpeedForMaxPitch", 0x9C4, "FloatProperty"},
            {"MaxForwardSpeedForMaxPitch", 0x9C8, "FloatProperty"},
            {"MaxFowrardSpeedPitchFactor", 0x9CC, "FloatProperty"},
            {"BoostMaxForwardSpeedPitchFactor", 0x9D0, "FloatProperty"},
            {"FrontLateralFrictionFactor", 0x9D4, "FloatProperty"},
            {"RearLateralFrictionFactor", 0x9D8, "FloatProperty"},
            {"LandFrontLateralFrictionFactor", 0x9DC, "FloatProperty"},
            {"LandRearLateralFrictionFactor", 0x9E0, "FloatProperty"},
            {"LateralFrictionModStartSpeedKmh", 0x9E4, "FloatProperty"},
            {"RearLateralFrictionModPerSpeedKmh", 0x9E8, "FloatProperty"},
            {"FrontLateralFrictionModPerSpeedKmh", 0x9EC, "FloatProperty"},
            {"SeatOffsetScaleX", 0x9F0, "FloatProperty"},
            {"SeatOffsetScaleY", 0x9F4, "FloatProperty"},
            {"SeatYawAngleMax", 0x9F8, "FloatProperty"},
            {"SeatPitchAngleMax", 0x9FC, "FloatProperty"},
            {"BoostSteeringMultiplier", 0xA00, "FloatProperty"},
            {"BoostSteeringMultiplierRampTime", 0xA04, "FloatProperty"},
            {"LandSteeringMultiplier", 0xA08, "FloatProperty"},
            {"LandMinSpeedSteeringAngle", 0xA0C, "FloatProperty"},
            {"LandMaxSpeedSteeringAngle", 0xA10, "FloatProperty"},
            {"DragCoefficientNoAccel", 0xA14, "FloatProperty"},
            {"DragCoefficient2NoAccel", 0xA18, "FloatProperty"},
            {"DragCoefficientMultiplierRoad", 0xA1C, "FloatProperty"},
            {"DragCoefficientMultiplierGrass", 0xA20, "FloatProperty"},
            {"DragCoefficientMultiplierDirt", 0xA24, "FloatProperty"},
            {"DragCoefficientMultiplierSnow", 0xA28, "FloatProperty"},
            {"DragCoefficientMultiplierIce", 0xA2C, "FloatProperty"},
            {"DragCoefficientMultiplierMud", 0xA30, "FloatProperty"},
            {"MinSteerAlphaForWaterFriction", 0xA34, "FloatProperty"},
            {"TurnInPlaceYawStiff", 0xA38, "FloatProperty"},
            {"TurnInPlaceYawDamp", 0xA3C, "FloatProperty"},
            {"MaxSteerRollAngle", 0xA40, "FloatProperty"},
            {"MaxTurnInPlaceYawAngle", 0xA44, "FloatProperty"},
            {"UprightSpringSteerStrength", 0xA48, "FloatProperty"},
            {"TurnInPlaceYawStrength", 0xA4C, "FloatProperty"},
            {"MaxSpeedForTurnInPlaceKmH", 0xA50, "FloatProperty"},
            {"BlendOutExtraSpeedTurnInPlaceKmH", 0xA54, "FloatProperty"},
            {"MaxPitchForCameraInPlaceSteer", 0xA58, "FloatProperty"},
            {"SpringLengthMutliplierWater", 0xA5C, "FloatProperty"},
        }};
    };

}
