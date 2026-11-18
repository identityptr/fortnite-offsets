#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JethroXVRuntime
{
    struct FortVehicleLayerAnimInstance_JethroXVPassenger
    {
        static constexpr std::string_view Name = "FortVehicleLayerAnimInstance_JethroXVPassenger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleLayerAnimInstance_FerretPassenger";
        struct Offsets
        {
            static constexpr std::uintptr_t ReturnValueYPitch = 0x410;
            static constexpr std::uintptr_t ReturnValueXRoll = 0x414;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReturnValueYPitch", 0x410, "FloatProperty"},
            {"ReturnValueXRoll", 0x414, "FloatProperty"},
        }};
    };

    struct JethroXVVehicleLayerAnimInstance
    {
        static constexpr std::string_view Name = "JethroXVVehicleLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t TakeOffStartPos = 0x480;
            static constexpr std::uintptr_t Repairing = 0x488;
            static constexpr std::uintptr_t bFlight = 0x490;
            static constexpr std::uintptr_t bStartUp = 0x491;
            static constexpr std::uintptr_t bFP_Hover = 0x492;
            static constexpr std::uintptr_t bFP_HoverFlightConduit = 0x493;
            static constexpr std::uintptr_t bFP_ToLanding = 0x494;
            static constexpr std::uintptr_t bStartUpLift = 0x495;
            static constexpr std::uintptr_t bFP_Landing_to_CancelLanding = 0x496;
            static constexpr std::uintptr_t StartupTagName = 0x498;
            static constexpr std::uintptr_t StartupLiftTagName = 0x49C;
            static constexpr std::uintptr_t ConstantSpeedLandingTagName = 0x4A0;
            static constexpr std::uintptr_t ForceCurveLandingTagName = 0x4A4;
            static constexpr std::uintptr_t HoverTagName = 0x4A8;
            static constexpr std::uintptr_t FlightTagName = 0x4AC;
            static constexpr std::uintptr_t RebootingTagName = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"TakeOffStartPos", 0x480, "FloatProperty"},
            {"Repairing", 0x488, "DoubleProperty"},
            {"bFlight", 0x490, "BoolProperty"},
            {"bStartUp", 0x491, "BoolProperty"},
            {"bFP_Hover", 0x492, "BoolProperty"},
            {"bFP_HoverFlightConduit", 0x493, "BoolProperty"},
            {"bFP_ToLanding", 0x494, "BoolProperty"},
            {"bStartUpLift", 0x495, "BoolProperty"},
            {"bFP_Landing_to_CancelLanding", 0x496, "BoolProperty"},
            {"StartupTagName", 0x498, "StructProperty"},
            {"StartupLiftTagName", 0x49C, "StructProperty"},
            {"ConstantSpeedLandingTagName", 0x4A0, "StructProperty"},
            {"ForceCurveLandingTagName", 0x4A4, "StructProperty"},
            {"HoverTagName", 0x4A8, "StructProperty"},
            {"FlightTagName", 0x4AC, "StructProperty"},
            {"RebootingTagName", 0x4B0, "StructProperty"},
        }};
    };

}
