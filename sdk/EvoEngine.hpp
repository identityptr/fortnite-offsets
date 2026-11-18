#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EvoEngine
{
    struct FlowProcessorHotfixes
    {
        static constexpr std::string_view Name = "FlowProcessorHotfixes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledFlowSteps = 0x28;
            static constexpr std::uintptr_t DisabledFlowSteps = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnabledFlowSteps", 0x28, "ArrayProperty"},
            {"DisabledFlowSteps", 0x38, "ArrayProperty"},
        }};
    };

    struct FlowProcessorSubsystem
    {
        static constexpr std::string_view Name = "FlowProcessorSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t QueuedEmergentSteps = 0x30;
            static constexpr std::uintptr_t RegisteredFlowSteps = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QueuedEmergentSteps", 0x30, "SetProperty"},
            {"RegisteredFlowSteps", 0x40, "MapProperty"},
        }};
    };

    struct FlowProcessorTestEmergentGate
    {
        static constexpr std::string_view Name = "FlowProcessorTestEmergentGate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FlowStep
    {
        static constexpr std::string_view Name = "FlowStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
            static constexpr std::uintptr_t bIsOptional = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x28, "StrProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
            {"bIsOptional", 0x39, "BoolProperty"},
        }};
    };

    struct FlowStepData
    {
        static constexpr std::string_view Name = "FlowStepData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RuntimeData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RuntimeData", 0x0, "StructProperty"},
        }};
    };

    struct FlowStepTestRuntimeData
    {
        static constexpr std::string_view Name = "FlowStepTestRuntimeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "IntProperty"},
        }};
    };

    struct FlowStep_RunOnInit
    {
        static constexpr std::string_view Name = "FlowStep_RunOnInit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FlowStep";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
            static constexpr std::uintptr_t bIsOptional = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x28, "StrProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
            {"bIsOptional", 0x39, "BoolProperty"},
        }};
    };

    struct FlowStep_TestAsync
    {
        static constexpr std::string_view Name = "FlowStep_TestAsync";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FlowStep";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
            static constexpr std::uintptr_t bIsOptional = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x28, "StrProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
            {"bIsOptional", 0x39, "BoolProperty"},
        }};
    };

    struct FlowStep_TestImmediate
    {
        static constexpr std::string_view Name = "FlowStep_TestImmediate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FlowStep";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
            static constexpr std::uintptr_t bIsOptional = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x28, "StrProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
            {"bIsOptional", 0x39, "BoolProperty"},
        }};
    };

    struct FlowStep_TestQueueEmergent
    {
        static constexpr std::string_view Name = "FlowStep_TestQueueEmergent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FlowStep";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
            static constexpr std::uintptr_t bIsOptional = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x28, "StrProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
            {"bIsOptional", 0x39, "BoolProperty"},
        }};
    };

    struct FlowStep_TestRunOnInit
    {
        static constexpr std::string_view Name = "FlowStep_TestRunOnInit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FlowStep_RunOnInit";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
            static constexpr std::uintptr_t bIsOptional = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x28, "StrProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
            {"bIsOptional", 0x39, "BoolProperty"},
        }};
    };

    struct FlowStep_TestRuntimeData
    {
        static constexpr std::string_view Name = "FlowStep_TestRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FlowStep";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
            static constexpr std::uintptr_t bIsOptional = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x28, "StrProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
            {"bIsOptional", 0x39, "BoolProperty"},
        }};
    };

    struct FlowSteps
    {
        static constexpr std::string_view Name = "FlowSteps";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowSteps = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowSteps", 0x0, "ArrayProperty"},
        }};
    };

}
