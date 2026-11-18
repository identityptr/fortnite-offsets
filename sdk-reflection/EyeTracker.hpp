#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EyeTracker
{
    struct EyeTrackerFunctionLibrary
    {
        static constexpr std::string_view Name = "EyeTrackerFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetGazeData",
            "GetStereoGazeData",
            "IsEyeTrackerConnected",
            "IsStereoGazeDataAvailable",
            "SetEyeTrackedPlayer",
        }};
    };

    struct EyeTrackerGazeData
    {
        static constexpr std::string_view Name = "EyeTrackerGazeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GazeOrigin = 0x0;
            static constexpr std::uintptr_t GazeDirection = 0x18;
            static constexpr std::uintptr_t FixationPoint = 0x30;
            static constexpr std::uintptr_t ConfidenceValue = 0x48;
            static constexpr std::uintptr_t bIsLeftEyeBlink = 0x4C;
            static constexpr std::uintptr_t bIsRightEyeBlink = 0x4D;
            static constexpr std::uintptr_t LeftPupilDiameter = 0x50;
            static constexpr std::uintptr_t RightPupilDiameter = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GazeOrigin", 0x0, "StructProperty"},
            {"GazeDirection", 0x18, "StructProperty"},
            {"FixationPoint", 0x30, "StructProperty"},
            {"ConfidenceValue", 0x48, "FloatProperty"},
            {"bIsLeftEyeBlink", 0x4C, "BoolProperty"},
            {"bIsRightEyeBlink", 0x4D, "BoolProperty"},
            {"LeftPupilDiameter", 0x50, "FloatProperty"},
            {"RightPupilDiameter", 0x54, "FloatProperty"},
        }};
    };

    struct EyeTrackerStereoGazeData
    {
        static constexpr std::string_view Name = "EyeTrackerStereoGazeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftEyeOrigin = 0x0;
            static constexpr std::uintptr_t LeftEyeDirection = 0x18;
            static constexpr std::uintptr_t RightEyeOrigin = 0x30;
            static constexpr std::uintptr_t RightEyeDirection = 0x48;
            static constexpr std::uintptr_t FixationPoint = 0x60;
            static constexpr std::uintptr_t ConfidenceValue = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LeftEyeOrigin", 0x0, "StructProperty"},
            {"LeftEyeDirection", 0x18, "StructProperty"},
            {"RightEyeOrigin", 0x30, "StructProperty"},
            {"RightEyeDirection", 0x48, "StructProperty"},
            {"FixationPoint", 0x60, "StructProperty"},
            {"ConfidenceValue", 0x78, "FloatProperty"},
        }};
    };

}
