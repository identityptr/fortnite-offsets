#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VehicleBouncyChassisRuntime
{
    struct BouncyVehicleSpringInterface
    {
        static constexpr std::string_view Name = "BouncyVehicleSpringInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleBouncyChassisAnimInstance
    {
        static constexpr std::string_view Name = "VehicleBouncyChassisAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BouncyChassis = 0x518;
            static constexpr std::uintptr_t BouncyChassisSetup = 0x528;
            static constexpr std::uintptr_t BouncyChassisOnGroundBlend = 0x588;
            static constexpr std::uintptr_t BouncyChassisOffGroundBlend = 0x58C;
            static constexpr std::uintptr_t BouncyChassisBlendRate = 0x590;
            static constexpr std::uintptr_t VisualSteerAngleInterpRate = 0x594;
            static constexpr std::uintptr_t WheelLerpSpeed = 0x598;
            static constexpr std::uintptr_t WheelInfoFR = 0x59C;
            static constexpr std::uintptr_t WheelInfoFL = 0x5D0;
            static constexpr std::uintptr_t WheelInfoBR = 0x604;
            static constexpr std::uintptr_t WheelInfoBL = 0x638;
            static constexpr std::uintptr_t bThrottling = 0x66C;
            static constexpr std::uintptr_t bReversing = 0x66D;
            static constexpr std::uintptr_t bAccelerating = 0x66E;
            static constexpr std::uintptr_t bBraking = 0x66F;
            static constexpr std::uintptr_t Throttle = 0x670;
            static constexpr std::uintptr_t Steering = 0x674;
            static constexpr std::uintptr_t SteeringAngle = 0x678;
            static constexpr std::uintptr_t bWheelsOnGround = 0x67C;
            static constexpr std::uintptr_t ForwardSpeed = 0x680;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"BouncyChassis", 0x518, "StructProperty"},
            {"BouncyChassisSetup", 0x528, "StructProperty"},
            {"BouncyChassisOnGroundBlend", 0x588, "FloatProperty"},
            {"BouncyChassisOffGroundBlend", 0x58C, "FloatProperty"},
            {"BouncyChassisBlendRate", 0x590, "FloatProperty"},
            {"VisualSteerAngleInterpRate", 0x594, "FloatProperty"},
            {"WheelLerpSpeed", 0x598, "FloatProperty"},
            {"WheelInfoFR", 0x59C, "StructProperty"},
            {"WheelInfoFL", 0x5D0, "StructProperty"},
            {"WheelInfoBR", 0x604, "StructProperty"},
            {"WheelInfoBL", 0x638, "StructProperty"},
            {"bThrottling", 0x66C, "BoolProperty"},
            {"bReversing", 0x66D, "BoolProperty"},
            {"bAccelerating", 0x66E, "BoolProperty"},
            {"bBraking", 0x66F, "BoolProperty"},
            {"Throttle", 0x670, "FloatProperty"},
            {"Steering", 0x674, "FloatProperty"},
            {"SteeringAngle", 0x678, "FloatProperty"},
            {"bWheelsOnGround", 0x67C, "BoolProperty"},
            {"ForwardSpeed", 0x680, "FloatProperty"},
        }};
    };

}
