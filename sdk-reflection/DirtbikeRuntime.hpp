#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DirtbikeRuntime
{
    struct FortDirtbikeVehicle
    {
        static constexpr std::string_view Name = "FortDirtbikeVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMotorcycleVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t InputActionJump = 0x2590;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputActionJump", 0x2590, "ObjectProperty"},
        }};
    };

    struct FortDirtbikeVehicleConfigs
    {
        static constexpr std::string_view Name = "FortDirtbikeVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMotorcycleVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t Wheels = 0x990;
            static constexpr std::uintptr_t SpringInterpDamp = 0x9A0;
            static constexpr std::uintptr_t WheelieSpringInterpDamp = 0x9A4;
            static constexpr std::uintptr_t WallPushStiff = 0x9A8;
            static constexpr std::uintptr_t WallPushDamp = 0x9AC;
            static constexpr std::uintptr_t WallPushXTraceOffset = 0x9B0;
            static constexpr std::uintptr_t WallPushForwardTraceLengthScale = 0x9C8;
            static constexpr std::uintptr_t WallPushBackTraceLengthScale = 0x9CC;
            static constexpr std::uintptr_t WallPushRightTraceLength = 0x9D0;
            static constexpr std::uintptr_t WallPushRightTraceOffset = 0x9D8;
            static constexpr std::uintptr_t WallPushRearRightTraceOffset = 0x9F0;
            static constexpr std::uintptr_t WallPushAngle = 0xA08;
            static constexpr std::uintptr_t bUseWallPushTracesForWalls = 0xA0C;
            static constexpr std::uintptr_t bUseWallPushRearSideTracesForWalls = 0xA0D;
            static constexpr std::uintptr_t MaxJumpChargeTime = 0xA10;
            static constexpr std::uintptr_t MinChargeJumpForce = 0xA14;
            static constexpr std::uintptr_t MaxChargeJumpForce = 0xA18;
            static constexpr std::uintptr_t MinJumpForwardAngle = 0xA1C;
            static constexpr std::uintptr_t MaxJumpForwardAngle = 0xA20;
            static constexpr std::uintptr_t JumpForceMinCOMOffset = 0xA28;
            static constexpr std::uintptr_t JumpForceMaxCOMOffset = 0xA40;
            static constexpr std::uintptr_t JumpChargeGraceTimeSeconds = 0xA58;
            static constexpr std::uintptr_t JumpGraceTimeSeconds = 0xA5C;
            static constexpr std::uintptr_t LeanAngleScale = 0xA60;
            static constexpr std::uintptr_t LeanStiff = 0xA64;
            static constexpr std::uintptr_t LeanDamp = 0xA68;
            static constexpr std::uintptr_t LeanStrength = 0xA6C;
            static constexpr std::uintptr_t SlideCatchupForceTime = 0xA70;
            static constexpr std::uintptr_t SlideCatchupSpeed = 0xA74;
            static constexpr std::uintptr_t SlideCatchupPushForce = 0xA78;
            static constexpr std::uintptr_t AutoAirPitchAngle = 0xA7C;
            static constexpr std::uintptr_t MinSteeringAngleForModifiedFriction = 0xA80;
            static constexpr std::uintptr_t MinSpeedForModifiedFriction = 0xA84;
            static constexpr std::uintptr_t MinSteeringAngleToConsiderTractionLost = 0xA88;
            static constexpr std::uintptr_t FrictionRatioToConsiderTractionLost = 0xA8C;
            static constexpr std::uintptr_t WheeliePitchStiffMin = 0xA90;
            static constexpr std::uintptr_t WheeliePitchStiffMax = 0xA94;
            static constexpr std::uintptr_t WheeliePitchDampMin = 0xA98;
            static constexpr std::uintptr_t WheeliePitchDampMax = 0xA9C;
            static constexpr std::uintptr_t WheeliePitchAngleMin = 0xAA0;
            static constexpr std::uintptr_t WheeliePitchAngleMax = 0xAA4;
            static constexpr std::uintptr_t StoppiePitchAngle = 0xAA8;
            static constexpr std::uintptr_t StoppiePitchStiff = 0xAAC;
            static constexpr std::uintptr_t StoppiePitchDamp = 0xAB0;
            static constexpr std::uintptr_t WheelieRampSeconds = 0xAB4;
            static constexpr std::uintptr_t WheelieFailPitchAngle = 0xAB8;
            static constexpr std::uintptr_t WheelieRecoveryRate = 0xABC;
            static constexpr std::uintptr_t WheelieFailRecoveryRate = 0xAC0;
            static constexpr std::uintptr_t WheelieMinStartSpeed = 0xAC4;
            static constexpr std::uintptr_t StoppieMinStopSpeed = 0xAC8;
            static constexpr std::uintptr_t WheelieSteerFactor = 0xACC;
            static constexpr std::uintptr_t StoppieSteerFactor = 0xAD0;
            static constexpr std::uintptr_t WheelieSteerAlphaThreshold = 0xAD4;
            static constexpr std::uintptr_t WheelieStoppieMaxLeanAllowedToInitiate = 0xAD8;
            static constexpr std::uintptr_t WheelieGroundBufferTime = 0xADC;
            static constexpr std::uintptr_t StoppieGroundBufferTime = 0xAE0;
            static constexpr std::uintptr_t WheelieSpringLengthExponent = 0xAE4;
            static constexpr std::uintptr_t WheelieWheelOffsetLerpMultiplier = 0xAE8;
            static constexpr std::uintptr_t WheelieBrakeFactor = 0xAEC;
            static constexpr std::uintptr_t StoppieTurnInPlaceSpeed = 0xAF0;
            static constexpr std::uintptr_t StoppieTurnInPlaceSpeedIce = 0xAF4;
            static constexpr std::uintptr_t StoppieTurnInPlaceSpeedMud = 0xAF8;
            static constexpr std::uintptr_t MinSpeedKmhForMaxStoppie = 0xAFC;
            static constexpr std::uintptr_t StoppieTurnAngleExponent = 0xB00;
            static constexpr std::uintptr_t StoppieMaxTurnAngle = 0xB04;
            static constexpr std::uintptr_t WheelieTireTractionMultiplier_Min = 0xB08;
            static constexpr std::uintptr_t WheelieCameraMinStraightFactor = 0xB0C;
            static constexpr std::uintptr_t MaxLeanAccel = 0xB10;
            static constexpr std::uintptr_t CruiseControlForwardAlpha = 0xB14;
            static constexpr std::uintptr_t InventoryModeSpeedKmh = 0xB18;
            static constexpr std::uintptr_t CruiseControlDisengageSpeedKmh = 0xB1C;
            static constexpr std::uintptr_t bPowerSlideIsSuperSlide = 0xB20;
            static constexpr std::uintptr_t PowerSlideFrontFrictionMultiplier = 0xB24;
            static constexpr std::uintptr_t PowerSlideRearFrictionMultiplier = 0xB28;
            static constexpr std::uintptr_t PowerSlideRoadFrontFrictionMultiplier = 0xB2C;
            static constexpr std::uintptr_t PowerSlideRoadRearFrictionMultiplier = 0xB30;
            static constexpr std::uintptr_t PowerSlideDirtFrontFrictionMultiplier = 0xB34;
            static constexpr std::uintptr_t PowerSlideDirtRearFrictionMultiplier = 0xB38;
            static constexpr std::uintptr_t PowerSlideGrassFrontFrictionMultiplier = 0xB3C;
            static constexpr std::uintptr_t PowerSlideGrassRearFrictionMultiplier = 0xB40;
            static constexpr std::uintptr_t PowerSlideSnowFrontFrictionMultiplier = 0xB44;
            static constexpr std::uintptr_t PowerSlideSnowRearFrictionMultiplier = 0xB48;
            static constexpr std::uintptr_t PowerSlideIceFrontFrictionMultiplier = 0xB4C;
            static constexpr std::uintptr_t PowerSlideIceRearFrictionMultiplier = 0xB50;
            static constexpr std::uintptr_t PowerSlideMudFrontFrictionMultiplier = 0xB54;
            static constexpr std::uintptr_t PowerSlideMudRearFrictionMultiplier = 0xB58;
            static constexpr std::uintptr_t PowerSlideFactor = 0xB5C;
            static constexpr std::uintptr_t PowerSlideDampFactor = 0xB60;
            static constexpr std::uintptr_t FrictionDampFactor = 0xB64;
            static constexpr std::uintptr_t PowerSlideLeanAngleScale = 0xB68;
            static constexpr std::uintptr_t SuperSlideLeanAngle = 0xB6C;
            static constexpr std::uintptr_t SuperSlideMinStartYawSpeedDegrees = 0xB70;
            static constexpr std::uintptr_t SuperSlideMinStartSpeedKmh = 0xB74;
            static constexpr std::uintptr_t SuperSlideMaxEndSpeedKmh = 0xB78;
            static constexpr std::uintptr_t PowerslideInputWindow = 0xB7C;
            static constexpr std::uintptr_t ShootingMinSpeedSteeringAngle = 0xB80;
            static constexpr std::uintptr_t ShootingMaxSpeedSteeringAngle = 0xB84;
            static constexpr std::uintptr_t InventoryModeCameraYawConstraint = 0xB88;
            static constexpr std::uintptr_t BoostTopSpeedMultiplier = 0xB90;
            static constexpr std::uintptr_t BoostPushForceMultiplier = 0xBB8;
            static constexpr std::uintptr_t BoostMinPushForce = 0xBE0;
            static constexpr std::uintptr_t BoostSteeringMultiplier = 0xC08;
            static constexpr std::uintptr_t UsesBoost = 0xC30;
            static constexpr std::uintptr_t StartWithFullBoost = 0xC58;
            static constexpr std::uintptr_t UsesRechargeableBoost = 0xC80;
            static constexpr std::uintptr_t RechargeableBoost_RateOfUse = 0xCA8;
            static constexpr std::uintptr_t RechargeableBoost_RateOfRegen = 0xCD0;
            static constexpr std::uintptr_t RechargeableBoost_RateOfRegenMultMin = 0xCF8;
            static constexpr std::uintptr_t RechargeableBoost_RateOfRegenMultMax = 0xD20;
            static constexpr std::uintptr_t RechargeableBoost_RegenMaxMultTime = 0xD48;
            static constexpr std::uintptr_t RechargeableBoost_RequiredPercentToActivate = 0xD70;
            static constexpr std::uintptr_t RechargeableBoost_MinPercent = 0xD98;
            static constexpr std::uintptr_t RechargeableBoost_MaxPercent = 0xDC0;
            static constexpr std::uintptr_t bPlayHolsterAnimsOnClient = 0xDE8;
            static constexpr std::uintptr_t FrontWheelSteeringFactor = 0xDEC;
            static constexpr std::uintptr_t FrontWheelRotationAcceleration = 0xDF0;
            static constexpr std::uintptr_t PassengerInventoryCooldown = 0xDF4;
            static constexpr std::uintptr_t DriverInventoryCooldown = 0xDF8;
            static constexpr std::uintptr_t BoostAttackShapes = 0xE00;
            static constexpr std::uintptr_t CameraAssistStrengthMax = 0xE10;
            static constexpr std::uintptr_t CameraAssistStrengthMin = 0xE14;
            static constexpr std::uintptr_t CameraAssistStrengthRecovery = 0xE18;
            static constexpr std::uintptr_t CameraAssistInterpSpeed = 0xE1C;
            static constexpr std::uintptr_t AirTrickIncrementInterval = 0xE20;
            static constexpr std::uintptr_t AirTrickFeedStartTime = 0xE24;
            static constexpr std::uintptr_t AirTrickPitchMultiplier = 0xE28;
            static constexpr std::uintptr_t AirTrickYawMultiplier = 0xE2C;
            static constexpr std::uintptr_t bAllowAirTrickNeutral = 0xE30;
            static constexpr std::uintptr_t bAllowAirTrickRight = 0xE31;
            static constexpr std::uintptr_t bAllowAirTrickLeft = 0xE32;
            static constexpr std::uintptr_t PoppedTireTractionScalar_Front = 0xE34;
            static constexpr std::uintptr_t PoppedTireTractionScalar_Rear = 0xE38;
            static constexpr std::uintptr_t PoppedTireTractionScalar_Both = 0xE3C;
            static constexpr std::uintptr_t TopSpeedKmh = 0xE40;
            static constexpr std::uintptr_t CachedTopSpeedKmh = 0xE68;
            static constexpr std::uintptr_t bCachedUsesRechargeableBoost = 0xE6C;
        };

        inline static constexpr std::array<PropertyInfo, 136> Properties{{
            {"Wheels", 0x990, "ArrayProperty"},
            {"SpringInterpDamp", 0x9A0, "FloatProperty"},
            {"WheelieSpringInterpDamp", 0x9A4, "FloatProperty"},
            {"WallPushStiff", 0x9A8, "FloatProperty"},
            {"WallPushDamp", 0x9AC, "FloatProperty"},
            {"WallPushXTraceOffset", 0x9B0, "StructProperty"},
            {"WallPushForwardTraceLengthScale", 0x9C8, "FloatProperty"},
            {"WallPushBackTraceLengthScale", 0x9CC, "FloatProperty"},
            {"WallPushRightTraceLength", 0x9D0, "FloatProperty"},
            {"WallPushRightTraceOffset", 0x9D8, "StructProperty"},
            {"WallPushRearRightTraceOffset", 0x9F0, "StructProperty"},
            {"WallPushAngle", 0xA08, "FloatProperty"},
            {"bUseWallPushTracesForWalls", 0xA0C, "BoolProperty"},
            {"bUseWallPushRearSideTracesForWalls", 0xA0D, "BoolProperty"},
            {"MaxJumpChargeTime", 0xA10, "FloatProperty"},
            {"MinChargeJumpForce", 0xA14, "FloatProperty"},
            {"MaxChargeJumpForce", 0xA18, "FloatProperty"},
            {"MinJumpForwardAngle", 0xA1C, "FloatProperty"},
            {"MaxJumpForwardAngle", 0xA20, "FloatProperty"},
            {"JumpForceMinCOMOffset", 0xA28, "StructProperty"},
            {"JumpForceMaxCOMOffset", 0xA40, "StructProperty"},
            {"JumpChargeGraceTimeSeconds", 0xA58, "FloatProperty"},
            {"JumpGraceTimeSeconds", 0xA5C, "FloatProperty"},
            {"LeanAngleScale", 0xA60, "FloatProperty"},
            {"LeanStiff", 0xA64, "FloatProperty"},
            {"LeanDamp", 0xA68, "FloatProperty"},
            {"LeanStrength", 0xA6C, "FloatProperty"},
            {"SlideCatchupForceTime", 0xA70, "FloatProperty"},
            {"SlideCatchupSpeed", 0xA74, "FloatProperty"},
            {"SlideCatchupPushForce", 0xA78, "FloatProperty"},
            {"AutoAirPitchAngle", 0xA7C, "FloatProperty"},
            {"MinSteeringAngleForModifiedFriction", 0xA80, "FloatProperty"},
            {"MinSpeedForModifiedFriction", 0xA84, "FloatProperty"},
            {"MinSteeringAngleToConsiderTractionLost", 0xA88, "FloatProperty"},
            {"FrictionRatioToConsiderTractionLost", 0xA8C, "FloatProperty"},
            {"WheeliePitchStiffMin", 0xA90, "FloatProperty"},
            {"WheeliePitchStiffMax", 0xA94, "FloatProperty"},
            {"WheeliePitchDampMin", 0xA98, "FloatProperty"},
            {"WheeliePitchDampMax", 0xA9C, "FloatProperty"},
            {"WheeliePitchAngleMin", 0xAA0, "FloatProperty"},
            {"WheeliePitchAngleMax", 0xAA4, "FloatProperty"},
            {"StoppiePitchAngle", 0xAA8, "FloatProperty"},
            {"StoppiePitchStiff", 0xAAC, "FloatProperty"},
            {"StoppiePitchDamp", 0xAB0, "FloatProperty"},
            {"WheelieRampSeconds", 0xAB4, "FloatProperty"},
            {"WheelieFailPitchAngle", 0xAB8, "FloatProperty"},
            {"WheelieRecoveryRate", 0xABC, "FloatProperty"},
            {"WheelieFailRecoveryRate", 0xAC0, "FloatProperty"},
            {"WheelieMinStartSpeed", 0xAC4, "FloatProperty"},
            {"StoppieMinStopSpeed", 0xAC8, "FloatProperty"},
            {"WheelieSteerFactor", 0xACC, "FloatProperty"},
            {"StoppieSteerFactor", 0xAD0, "FloatProperty"},
            {"WheelieSteerAlphaThreshold", 0xAD4, "FloatProperty"},
            {"WheelieStoppieMaxLeanAllowedToInitiate", 0xAD8, "FloatProperty"},
            {"WheelieGroundBufferTime", 0xADC, "FloatProperty"},
            {"StoppieGroundBufferTime", 0xAE0, "FloatProperty"},
            {"WheelieSpringLengthExponent", 0xAE4, "FloatProperty"},
            {"WheelieWheelOffsetLerpMultiplier", 0xAE8, "FloatProperty"},
            {"WheelieBrakeFactor", 0xAEC, "FloatProperty"},
            {"StoppieTurnInPlaceSpeed", 0xAF0, "FloatProperty"},
            {"StoppieTurnInPlaceSpeedIce", 0xAF4, "FloatProperty"},
            {"StoppieTurnInPlaceSpeedMud", 0xAF8, "FloatProperty"},
            {"MinSpeedKmhForMaxStoppie", 0xAFC, "FloatProperty"},
            {"StoppieTurnAngleExponent", 0xB00, "FloatProperty"},
            {"StoppieMaxTurnAngle", 0xB04, "FloatProperty"},
            {"WheelieTireTractionMultiplier_Min", 0xB08, "FloatProperty"},
            {"WheelieCameraMinStraightFactor", 0xB0C, "FloatProperty"},
            {"MaxLeanAccel", 0xB10, "FloatProperty"},
            {"CruiseControlForwardAlpha", 0xB14, "FloatProperty"},
            {"InventoryModeSpeedKmh", 0xB18, "FloatProperty"},
            {"CruiseControlDisengageSpeedKmh", 0xB1C, "FloatProperty"},
            {"bPowerSlideIsSuperSlide", 0xB20, "BoolProperty"},
            {"PowerSlideFrontFrictionMultiplier", 0xB24, "FloatProperty"},
            {"PowerSlideRearFrictionMultiplier", 0xB28, "FloatProperty"},
            {"PowerSlideRoadFrontFrictionMultiplier", 0xB2C, "FloatProperty"},
            {"PowerSlideRoadRearFrictionMultiplier", 0xB30, "FloatProperty"},
            {"PowerSlideDirtFrontFrictionMultiplier", 0xB34, "FloatProperty"},
            {"PowerSlideDirtRearFrictionMultiplier", 0xB38, "FloatProperty"},
            {"PowerSlideGrassFrontFrictionMultiplier", 0xB3C, "FloatProperty"},
            {"PowerSlideGrassRearFrictionMultiplier", 0xB40, "FloatProperty"},
            {"PowerSlideSnowFrontFrictionMultiplier", 0xB44, "FloatProperty"},
            {"PowerSlideSnowRearFrictionMultiplier", 0xB48, "FloatProperty"},
            {"PowerSlideIceFrontFrictionMultiplier", 0xB4C, "FloatProperty"},
            {"PowerSlideIceRearFrictionMultiplier", 0xB50, "FloatProperty"},
            {"PowerSlideMudFrontFrictionMultiplier", 0xB54, "FloatProperty"},
            {"PowerSlideMudRearFrictionMultiplier", 0xB58, "FloatProperty"},
            {"PowerSlideFactor", 0xB5C, "FloatProperty"},
            {"PowerSlideDampFactor", 0xB60, "FloatProperty"},
            {"FrictionDampFactor", 0xB64, "FloatProperty"},
            {"PowerSlideLeanAngleScale", 0xB68, "FloatProperty"},
            {"SuperSlideLeanAngle", 0xB6C, "FloatProperty"},
            {"SuperSlideMinStartYawSpeedDegrees", 0xB70, "FloatProperty"},
            {"SuperSlideMinStartSpeedKmh", 0xB74, "FloatProperty"},
            {"SuperSlideMaxEndSpeedKmh", 0xB78, "FloatProperty"},
            {"PowerslideInputWindow", 0xB7C, "FloatProperty"},
            {"ShootingMinSpeedSteeringAngle", 0xB80, "FloatProperty"},
            {"ShootingMaxSpeedSteeringAngle", 0xB84, "FloatProperty"},
            {"InventoryModeCameraYawConstraint", 0xB88, "FloatProperty"},
            {"BoostTopSpeedMultiplier", 0xB90, "StructProperty"},
            {"BoostPushForceMultiplier", 0xBB8, "StructProperty"},
            {"BoostMinPushForce", 0xBE0, "StructProperty"},
            {"BoostSteeringMultiplier", 0xC08, "StructProperty"},
            {"UsesBoost", 0xC30, "StructProperty"},
            {"StartWithFullBoost", 0xC58, "StructProperty"},
            {"UsesRechargeableBoost", 0xC80, "StructProperty"},
            {"RechargeableBoost_RateOfUse", 0xCA8, "StructProperty"},
            {"RechargeableBoost_RateOfRegen", 0xCD0, "StructProperty"},
            {"RechargeableBoost_RateOfRegenMultMin", 0xCF8, "StructProperty"},
            {"RechargeableBoost_RateOfRegenMultMax", 0xD20, "StructProperty"},
            {"RechargeableBoost_RegenMaxMultTime", 0xD48, "StructProperty"},
            {"RechargeableBoost_RequiredPercentToActivate", 0xD70, "StructProperty"},
            {"RechargeableBoost_MinPercent", 0xD98, "StructProperty"},
            {"RechargeableBoost_MaxPercent", 0xDC0, "StructProperty"},
            {"bPlayHolsterAnimsOnClient", 0xDE8, "BoolProperty"},
            {"FrontWheelSteeringFactor", 0xDEC, "FloatProperty"},
            {"FrontWheelRotationAcceleration", 0xDF0, "FloatProperty"},
            {"PassengerInventoryCooldown", 0xDF4, "FloatProperty"},
            {"DriverInventoryCooldown", 0xDF8, "FloatProperty"},
            {"BoostAttackShapes", 0xE00, "SetProperty"},
            {"CameraAssistStrengthMax", 0xE10, "FloatProperty"},
            {"CameraAssistStrengthMin", 0xE14, "FloatProperty"},
            {"CameraAssistStrengthRecovery", 0xE18, "FloatProperty"},
            {"CameraAssistInterpSpeed", 0xE1C, "FloatProperty"},
            {"AirTrickIncrementInterval", 0xE20, "FloatProperty"},
            {"AirTrickFeedStartTime", 0xE24, "FloatProperty"},
            {"AirTrickPitchMultiplier", 0xE28, "FloatProperty"},
            {"AirTrickYawMultiplier", 0xE2C, "FloatProperty"},
            {"bAllowAirTrickNeutral", 0xE30, "BoolProperty"},
            {"bAllowAirTrickRight", 0xE31, "BoolProperty"},
            {"bAllowAirTrickLeft", 0xE32, "BoolProperty"},
            {"PoppedTireTractionScalar_Front", 0xE34, "FloatProperty"},
            {"PoppedTireTractionScalar_Rear", 0xE38, "FloatProperty"},
            {"PoppedTireTractionScalar_Both", 0xE3C, "FloatProperty"},
            {"TopSpeedKmh", 0xE40, "StructProperty"},
            {"CachedTopSpeedKmh", 0xE68, "FloatProperty"},
            {"bCachedUsesRechargeableBoost", 0xE6C, "BoolProperty"},
        }};
    };

}
