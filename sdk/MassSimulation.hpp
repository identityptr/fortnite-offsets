#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassSimulation
{
    struct MassSimulationSettings
    {
        static constexpr std::string_view Name = "MassSimulationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassModuleSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredActorSpawningTimeSlicePerTick = 0x28;
            static constexpr std::uintptr_t DesiredActorDestructionTimeSlicePerTick = 0x30;
            static constexpr std::uintptr_t bEntityCompactionEnabled = 0x38;
            static constexpr std::uintptr_t DesiredEntityCompactionTimeSlicePerTick = 0x40;
            static constexpr std::uintptr_t DesiredActorFailedSpawningRetryTimeInterval = 0x48;
            static constexpr std::uintptr_t DesiredActorFailedSpawningRetryMoveDistance = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DesiredActorSpawningTimeSlicePerTick", 0x28, "DoubleProperty"},
            {"DesiredActorDestructionTimeSlicePerTick", 0x30, "DoubleProperty"},
            {"bEntityCompactionEnabled", 0x38, "BoolProperty"},
            {"DesiredEntityCompactionTimeSlicePerTick", 0x40, "DoubleProperty"},
            {"DesiredActorFailedSpawningRetryTimeInterval", 0x48, "FloatProperty"},
            {"DesiredActorFailedSpawningRetryMoveDistance", 0x4C, "FloatProperty"},
        }};
    };

    struct MassSimulationSubsystem
    {
        static constexpr std::string_view Name = "MassSimulationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RuntimePipeline = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RuntimePipeline", 0x90, "StructProperty"},
        }};
    };

}
