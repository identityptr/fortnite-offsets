#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNVehicleNative
{
    struct LFNVehicleOccupantAnimInstance
    {
        static constexpr std::string_view Name = "LFNVehicleOccupantAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AimYaw = 0x340;
            static constexpr std::uintptr_t AimPitch = 0x344;
            static constexpr std::uintptr_t bPlayerHeadShouldFollowCamera = 0x348;
            static constexpr std::uintptr_t VelocityImpact = 0x350;
            static constexpr std::uintptr_t RightHandIKTarget = 0x440;
            static constexpr std::uintptr_t LeftHandIKTarget = 0x480;
            static constexpr std::uintptr_t CurrentDriverAnimSet = 0x4C0;
            static constexpr std::uintptr_t VehicleAnimSet = 0x570;
            static constexpr std::uintptr_t ImpactDisplacement = 0x578;
            static constexpr std::uintptr_t DriveStartPlayRateSpeedRange = 0x590;
            static constexpr std::uintptr_t Speed = 0x5A0;
            static constexpr std::uintptr_t DesiredSpeed = 0x5A4;
            static constexpr std::uintptr_t SlopePitchDegreeAngle = 0x5A8;
            static constexpr std::uintptr_t SlopeRollDegreeAngle = 0x5AC;
            static constexpr std::uintptr_t SteeringAngle = 0x5B0;
            static constexpr std::uintptr_t DriveStartPlayRate = 0x5B4;
            static constexpr std::uintptr_t AimYawSmoothed = 0x5B8;
            static constexpr std::uintptr_t AimYawLastFrame = 0x5BC;
            static constexpr std::uintptr_t ReversingSpeedThreshold = 0x5C0;
            static constexpr std::uintptr_t BrakingDeltaThreshold = 0x5C4;
            static constexpr std::uintptr_t MovingThreshold = 0x5C8;
            static constexpr std::uintptr_t MovingForwardThreshold = 0x5CC;
            static constexpr std::uintptr_t MovingFastThreshold = 0x5D0;
            static constexpr std::uintptr_t SteeringLeftThreshold = 0x5D4;
            static constexpr std::uintptr_t SteeringRightThreshold = 0x5D8;
            static constexpr std::uintptr_t StartAimYawLerpingDeltaThreshold = 0x5DC;
            static constexpr std::uintptr_t StopAimYawLerpingDeltaThreshold = 0x5E0;
            static constexpr std::uintptr_t AimYawSmoothSpeed = 0x5E4;
            static constexpr std::uintptr_t PawnToVehicleDeltaYawAngleDegrees = 0x5E8;
            static constexpr std::uintptr_t AimCardDirDeadZoneAngleDegrees = 0x5EC;
            static constexpr std::uintptr_t AimCardDirAngleOffsetDegrees = 0x5F0;
            static constexpr std::uintptr_t AimFWDDeltaAngleDegrees = 0x5F4;
            static constexpr std::uintptr_t AimBWDDeltaAngleDegrees = 0x5F8;
            static constexpr std::uintptr_t AimLFTDeltaAngleDegrees = 0x5FC;
            static constexpr std::uintptr_t AimRGTDeltaAngleDegrees = 0x600;
            static constexpr std::uintptr_t LastCardDirIndex = 0x604;
            static constexpr std::uintptr_t bIsBackLeftPassenger = 0x608;
            static constexpr std::uintptr_t bIsBackRightPassenger = 0x608;
            static constexpr std::uintptr_t bIsBoosting = 0x608;
            static constexpr std::uintptr_t bIsBraking = 0x608;
            static constexpr std::uintptr_t bIsDriver = 0x608;
            static constexpr std::uintptr_t bIsFemale = 0x608;
            static constexpr std::uintptr_t bIsFrontPassenger = 0x608;
            static constexpr std::uintptr_t bIsReversing = 0x608;
            static constexpr std::uintptr_t bAimBWD = 0x609;
            static constexpr std::uintptr_t bAimFWD = 0x609;
            static constexpr std::uintptr_t bIsMoving = 0x609;
            static constexpr std::uintptr_t bIsMovingFast = 0x609;
            static constexpr std::uintptr_t bIsMovingForward = 0x609;
            static constexpr std::uintptr_t bIsSmoothingAimYaw = 0x609;
            static constexpr std::uintptr_t bIsSteeringLeft = 0x609;
            static constexpr std::uintptr_t bIsSteeringRight = 0x609;
            static constexpr std::uintptr_t bAimLFT = 0x60A;
            static constexpr std::uintptr_t bAimRGT = 0x60A;
            static constexpr std::uintptr_t bEnableLocomotionAdditives = 0x60A;
            static constexpr std::uintptr_t FortPlayerPawn = 0x610;
            static constexpr std::uintptr_t WorldVelocity = 0x618;
        };

        inline static constexpr std::array<PropertyInfo, 57> Properties{{
            {"AimYaw", 0x340, "FloatProperty"},
            {"AimPitch", 0x344, "FloatProperty"},
            {"bPlayerHeadShouldFollowCamera", 0x348, "BoolProperty"},
            {"VelocityImpact", 0x350, "StructProperty"},
            {"RightHandIKTarget", 0x440, "StructProperty"},
            {"LeftHandIKTarget", 0x480, "StructProperty"},
            {"CurrentDriverAnimSet", 0x4C0, "StructProperty"},
            {"VehicleAnimSet", 0x570, "ObjectProperty"},
            {"ImpactDisplacement", 0x578, "StructProperty"},
            {"DriveStartPlayRateSpeedRange", 0x590, "StructProperty"},
            {"Speed", 0x5A0, "FloatProperty"},
            {"DesiredSpeed", 0x5A4, "FloatProperty"},
            {"SlopePitchDegreeAngle", 0x5A8, "FloatProperty"},
            {"SlopeRollDegreeAngle", 0x5AC, "FloatProperty"},
            {"SteeringAngle", 0x5B0, "FloatProperty"},
            {"DriveStartPlayRate", 0x5B4, "FloatProperty"},
            {"AimYawSmoothed", 0x5B8, "FloatProperty"},
            {"AimYawLastFrame", 0x5BC, "FloatProperty"},
            {"ReversingSpeedThreshold", 0x5C0, "FloatProperty"},
            {"BrakingDeltaThreshold", 0x5C4, "FloatProperty"},
            {"MovingThreshold", 0x5C8, "FloatProperty"},
            {"MovingForwardThreshold", 0x5CC, "FloatProperty"},
            {"MovingFastThreshold", 0x5D0, "FloatProperty"},
            {"SteeringLeftThreshold", 0x5D4, "FloatProperty"},
            {"SteeringRightThreshold", 0x5D8, "FloatProperty"},
            {"StartAimYawLerpingDeltaThreshold", 0x5DC, "FloatProperty"},
            {"StopAimYawLerpingDeltaThreshold", 0x5E0, "FloatProperty"},
            {"AimYawSmoothSpeed", 0x5E4, "FloatProperty"},
            {"PawnToVehicleDeltaYawAngleDegrees", 0x5E8, "FloatProperty"},
            {"AimCardDirDeadZoneAngleDegrees", 0x5EC, "FloatProperty"},
            {"AimCardDirAngleOffsetDegrees", 0x5F0, "FloatProperty"},
            {"AimFWDDeltaAngleDegrees", 0x5F4, "FloatProperty"},
            {"AimBWDDeltaAngleDegrees", 0x5F8, "FloatProperty"},
            {"AimLFTDeltaAngleDegrees", 0x5FC, "FloatProperty"},
            {"AimRGTDeltaAngleDegrees", 0x600, "FloatProperty"},
            {"LastCardDirIndex", 0x604, "IntProperty"},
            {"bIsBackLeftPassenger", 0x608, "BoolProperty"},
            {"bIsBackRightPassenger", 0x608, "BoolProperty"},
            {"bIsBoosting", 0x608, "BoolProperty"},
            {"bIsBraking", 0x608, "BoolProperty"},
            {"bIsDriver", 0x608, "BoolProperty"},
            {"bIsFemale", 0x608, "BoolProperty"},
            {"bIsFrontPassenger", 0x608, "BoolProperty"},
            {"bIsReversing", 0x608, "BoolProperty"},
            {"bAimBWD", 0x609, "BoolProperty"},
            {"bAimFWD", 0x609, "BoolProperty"},
            {"bIsMoving", 0x609, "BoolProperty"},
            {"bIsMovingFast", 0x609, "BoolProperty"},
            {"bIsMovingForward", 0x609, "BoolProperty"},
            {"bIsSmoothingAimYaw", 0x609, "BoolProperty"},
            {"bIsSteeringLeft", 0x609, "BoolProperty"},
            {"bIsSteeringRight", 0x609, "BoolProperty"},
            {"bAimLFT", 0x60A, "BoolProperty"},
            {"bAimRGT", 0x60A, "BoolProperty"},
            {"bEnableLocomotionAdditives", 0x60A, "BoolProperty"},
            {"FortPlayerPawn", 0x610, "ObjectProperty"},
            {"WorldVelocity", 0x618, "StructProperty"},
        }};
    };

}
