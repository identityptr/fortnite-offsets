#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortVehicleSimulationStepsRuntime
{
    struct FortVehicleSimulationConfigTableRow
    {
        static constexpr std::string_view Name = "FortVehicleSimulationConfigTableRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSimulationManagerEnabled = 0x8;
            static constexpr std::uintptr_t DefaultSimulationStepFlags = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsSimulationManagerEnabled", 0x8, "BoolProperty"},
            {"DefaultSimulationStepFlags", 0x9, "ByteProperty"},
        }};
    };

    struct FortVehicleSimulationStepOverrideTableRow
    {
        static constexpr std::string_view Name = "FortVehicleSimulationStepOverrideTableRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationStep = 0x8;
            static constexpr std::uintptr_t SimulationStepFlags = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SimulationStep", 0x8, "ByteProperty"},
            {"SimulationStepFlags", 0x9, "ByteProperty"},
        }};
    };

    struct FortVehicleSimulationStepsManager
    {
        static constexpr std::string_view Name = "FortVehicleSimulationStepsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t DefaultSimulationStepFlags = 0x29;
            static constexpr std::uintptr_t DataRegistryType_VehicleSimulationStepsPermissions = 0x2C;
            static constexpr std::uintptr_t DataRegistryType_VehicleSimulationStepsConfig = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
            {"DefaultSimulationStepFlags", 0x29, "ByteProperty"},
            {"DataRegistryType_VehicleSimulationStepsPermissions", 0x2C, "StructProperty"},
            {"DataRegistryType_VehicleSimulationStepsConfig", 0x30, "StructProperty"},
        }};
    };

}
