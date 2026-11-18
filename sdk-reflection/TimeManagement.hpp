#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TimeManagement
{
    struct CatchupFixedRateCustomTimeStep
    {
        static constexpr std::string_view Name = "CatchupFixedRateCustomTimeStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FixedFrameRateCustomTimeStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameRate = 0x30;
            static constexpr std::uintptr_t MaxCatchupSeconds = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrameRate", 0x30, "StructProperty"},
            {"MaxCatchupSeconds", 0x38, "DoubleProperty"},
        }};
    };

    struct ClockedTimeStep
    {
        static constexpr std::string_view Name = "ClockedTimeStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FixedFrameRateCustomTimeStep
    {
        static constexpr std::string_view Name = "FixedFrameRateCustomTimeStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineCustomTimeStep";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GenlockedCustomTimeStep
    {
        static constexpr std::string_view Name = "GenlockedCustomTimeStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FixedFrameRateCustomTimeStep";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoDetectFormat = 0x28;
            static constexpr std::uintptr_t bWaitForBothFields = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAutoDetectFormat", 0x28, "BoolProperty"},
            {"bWaitForBothFields", 0x29, "BoolProperty"},
        }};
    };

    struct GenlockedFixedRateCustomTimeStep
    {
        static constexpr std::string_view Name = "GenlockedFixedRateCustomTimeStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GenlockedCustomTimeStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameRate = 0x30;
            static constexpr std::uintptr_t bShouldBlock = 0x38;
            static constexpr std::uintptr_t bForceSingleFrameDeltaTime = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FrameRate", 0x30, "StructProperty"},
            {"bShouldBlock", 0x38, "BoolProperty"},
            {"bForceSingleFrameDeltaTime", 0x39, "BoolProperty"},
        }};
    };

    struct GenlockedTimecodeProvider
    {
        static constexpr std::string_view Name = "GenlockedTimecodeProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TimecodeProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseGenlockToCount = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseGenlockToCount", 0x30, "BoolProperty"},
        }};
    };

    struct MockTimecodeProvider
    {
        static constexpr std::string_view Name = "MockTimecodeProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TimecodeProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameDelay = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FrameDelay", 0x28, "FloatProperty"},
        }};
    };

    struct MusicalTimeFunctionLibrary
    {
        static constexpr std::string_view Name = "MusicalTimeFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "BarAndBeat",
            "FractionalBars",
            "FractionalBeatsInBar",
            "IsValid",
        }};
    };

    struct TimeManagementBlueprintLibrary
    {
        static constexpr std::string_view Name = "TimeManagementBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "Add_FrameNumberFrameNumber",
            "Add_FrameNumberInteger",
            "Conv_FrameNumberToInteger",
            "Conv_FrameRateToInterval",
            "Conv_FrameRateToSeconds",
            "Conv_QualifiedFrameTimeToSeconds",
            "Conv_TimecodeToString",
            "Divide_FrameNumberInteger",
            "GetCustomTimeStepFrameRate",
            "GetEngineCustomTimeStep",
            "GetTimecode",
            "GetTimecodeFrameRate",
            "IsValid_Framerate",
            "IsValid_MultipleOf",
            "Multiply_FrameNumberInteger",
            "Multiply_SecondsFrameRate",
            "SnapFrameTimeToRate",
            "Subtract_FrameNumberFrameNumber",
            "Subtract_FrameNumberInteger",
            "TransformTime",
        }};
    };

    struct TimeSynchronizationSource
    {
        static constexpr std::string_view Name = "TimeSynchronizationSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseForSynchronization = 0x28;
            static constexpr std::uintptr_t FrameOffset = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseForSynchronization", 0x28, "BoolProperty"},
            {"FrameOffset", 0x2C, "IntProperty"},
        }};
    };

    struct TimecodeCustomTimeStep
    {
        static constexpr std::string_view Name = "TimecodeCustomTimeStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FixedFrameRateCustomTimeStep";
        struct Offsets
        {
            static constexpr std::uintptr_t bErrorIfFrameAreNotConsecutive = 0x28;
            static constexpr std::uintptr_t bErrorIfTimecodeProviderChanged = 0x29;
            static constexpr std::uintptr_t MaxDeltaTime = 0x2C;
            static constexpr std::uintptr_t bIgnoreSubframes = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bErrorIfFrameAreNotConsecutive", 0x28, "BoolProperty"},
            {"bErrorIfTimecodeProviderChanged", 0x29, "BoolProperty"},
            {"MaxDeltaTime", 0x2C, "FloatProperty"},
            {"bIgnoreSubframes", 0x30, "BoolProperty"},
        }};
    };

    struct TimecodeRegressionProvider
    {
        static constexpr std::string_view Name = "TimecodeRegressionProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TimecodeProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t NumSampledFrames = 0x30;
            static constexpr std::uintptr_t OwningEngine = 0x38;
            static constexpr std::uintptr_t TimecodeImpl = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumSampledFrames", 0x30, "IntProperty"},
            {"OwningEngine", 0x38, "ObjectProperty"},
            {"TimecodeImpl", 0x40, "ObjectProperty"},
        }};
    };

    struct TimedDataChannelSampleTime
    {
        static constexpr std::string_view Name = "TimedDataChannelSampleTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TimedDataInputEvaluationData
    {
        static constexpr std::string_view Name = "TimedDataInputEvaluationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceToNewestSampleSeconds = 0x0;
            static constexpr std::uintptr_t DistanceToOldestSampleSeconds = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DistanceToNewestSampleSeconds", 0x0, "FloatProperty"},
            {"DistanceToOldestSampleSeconds", 0x4, "FloatProperty"},
        }};
    };

}
