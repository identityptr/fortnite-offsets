#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameInputBase
{
    struct GameInputDeveloperSettings
    {
        static constexpr std::string_view Name = "GameInputDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceConfigurations = 0x28;
            static constexpr std::uintptr_t PlatformSpecificSettings = 0x38;
            static constexpr std::uintptr_t DevicesToIgnore = 0x48;
            static constexpr std::uintptr_t SupportedDeviceFamilies = 0x58;
            static constexpr std::uintptr_t bDoNotProcessDuplicateCapabilitiesForSingleUser = 0x5C;
            static constexpr std::uintptr_t bEnableHapticSensorSupport = 0x5D;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DeviceConfigurations", 0x28, "ArrayProperty"},
            {"PlatformSpecificSettings", 0x38, "StructProperty"},
            {"DevicesToIgnore", 0x48, "ArrayProperty"},
            {"SupportedDeviceFamilies", 0x58, "UInt32Property"},
            {"bDoNotProcessDuplicateCapabilitiesForSingleUser", 0x5C, "BoolProperty"},
            {"bEnableHapticSensorSupport", 0x5D, "BoolProperty"},
        }};
    };

    struct GameInputHapticEndpointSettings
    {
        static constexpr std::string_view Name = "GameInputHapticEndpointSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEndpointSettingsBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameInputPlatformSettings
    {
        static constexpr std::string_view Name = "GameInputPlatformSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlatformSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bProcessController = 0x40;
            static constexpr std::uintptr_t bProcessRawInput = 0x41;
            static constexpr std::uintptr_t bSpecialDevicesRequireExplicitDeviceConfiguration = 0x42;
            static constexpr std::uintptr_t bProcessGamepad = 0x43;
            static constexpr std::uintptr_t bProcessKeyboard = 0x44;
            static constexpr std::uintptr_t bProcessMouse = 0x45;
            static constexpr std::uintptr_t bProcessSensors = 0x46;
            static constexpr std::uintptr_t bProcessRacingWheel = 0x47;
            static constexpr std::uintptr_t RacingWheelDeadzone = 0x48;
            static constexpr std::uintptr_t bProcessArcadeStick = 0x4C;
            static constexpr std::uintptr_t bProcessFlightStick = 0x4D;
            static constexpr std::uintptr_t FlightStickPitchDeadzone = 0x50;
            static constexpr std::uintptr_t FlightStickRollDeadzone = 0x54;
            static constexpr std::uintptr_t FlightStickThrottleDeadzone = 0x58;
            static constexpr std::uintptr_t FlightStickYawDeadzone = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bProcessController", 0x40, "BoolProperty"},
            {"bProcessRawInput", 0x41, "BoolProperty"},
            {"bSpecialDevicesRequireExplicitDeviceConfiguration", 0x42, "BoolProperty"},
            {"bProcessGamepad", 0x43, "BoolProperty"},
            {"bProcessKeyboard", 0x44, "BoolProperty"},
            {"bProcessMouse", 0x45, "BoolProperty"},
            {"bProcessSensors", 0x46, "BoolProperty"},
            {"bProcessRacingWheel", 0x47, "BoolProperty"},
            {"RacingWheelDeadzone", 0x48, "FloatProperty"},
            {"bProcessArcadeStick", 0x4C, "BoolProperty"},
            {"bProcessFlightStick", 0x4D, "BoolProperty"},
            {"FlightStickPitchDeadzone", 0x50, "FloatProperty"},
            {"FlightStickRollDeadzone", 0x54, "FloatProperty"},
            {"FlightStickThrottleDeadzone", 0x58, "FloatProperty"},
            {"FlightStickYawDeadzone", 0x5C, "FloatProperty"},
        }};
    };

}
