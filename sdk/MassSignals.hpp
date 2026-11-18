#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassSignals
{
    struct MassSignalProcessorBase
    {
        static constexpr std::string_view Name = "MassSignalProcessorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassSignalSubsystem
    {
        static constexpr std::string_view Name = "MassSignalSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTickableSubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedWorld = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedWorld", 0x70, "ObjectProperty"},
        }};
    };

    struct MassSystem_MassSignalSubsystem
    {
        static constexpr std::string_view Name = "MassSystem_MassSignalSubsystem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassSystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
