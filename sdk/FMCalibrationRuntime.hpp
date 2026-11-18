#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMCalibrationRuntime
{
    struct FMCalibrationControllerComponent
    {
        static constexpr std::string_view Name = "FMCalibrationControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCalibrationDataLoaded = 0xC0;
            static constexpr std::uintptr_t OnCalibrationDataSaved = 0xD0;
            static constexpr std::uintptr_t OnIsCalibrationDebugEnabled = 0xE0;
            static constexpr std::uintptr_t OnCalibrometerEnabledChanged = 0xF0;
            static constexpr std::uintptr_t OnCalibrationRequestOpenModal = 0x100;
            static constexpr std::uintptr_t OnCalibrationRegisterPreamble = 0x110;
            static constexpr std::uintptr_t CalibrationSaveData = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnCalibrationDataLoaded", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnCalibrationDataSaved", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnIsCalibrationDebugEnabled", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnCalibrometerEnabledChanged", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnCalibrationRequestOpenModal", 0x100, "MulticastInlineDelegateProperty"},
            {"OnCalibrationRegisterPreamble", 0x110, "MulticastInlineDelegateProperty"},
            {"CalibrationSaveData", 0x150, "ObjectProperty"},
        }};
    };

    struct FMCalibrationSaveData
    {
        static constexpr std::string_view Name = "FMCalibrationSaveData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CalibrationProfileIndex = 0x28;
            static constexpr std::uintptr_t AudioLatencyMs = 0x2C;
            static constexpr std::uintptr_t VideoLatencyMs = 0x30;
            static constexpr std::uintptr_t IsCalibrated = 0x34;
            static constexpr std::uintptr_t SaveVersion = 0x38;
            static constexpr std::uintptr_t FormatVersion = 0x3C;
            static constexpr std::uintptr_t bHasBeenOfferedCalibration = 0x40;
            static constexpr std::uintptr_t CalibrationProfiles = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CalibrationProfileIndex", 0x28, "IntProperty"},
            {"AudioLatencyMs", 0x2C, "FloatProperty"},
            {"VideoLatencyMs", 0x30, "FloatProperty"},
            {"IsCalibrated", 0x34, "BoolProperty"},
            {"SaveVersion", 0x38, "IntProperty"},
            {"FormatVersion", 0x3C, "IntProperty"},
            {"bHasBeenOfferedCalibration", 0x40, "BoolProperty"},
            {"CalibrationProfiles", 0x48, "ArrayProperty"},
        }};
    };

}
