/**
 * decamp dumper generated SDK
 * Package: /Script/FortVehicleSimulationStepsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortVehicleSimulationStepsRuntime.FortVehicleSimulationConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortVehicleSimulationConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsSimulationManagerEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultSimulationStepFlags; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortVehicleSimulationConfigTableRow, bIsSimulationManagerEnabled) == 8, "Offset mismatch for FFortVehicleSimulationConfigTableRow::bIsSimulationManagerEnabled");
static_assert(offsetof(FFortVehicleSimulationConfigTableRow, DefaultSimulationStepFlags) == 9, "Offset mismatch for FFortVehicleSimulationConfigTableRow::DefaultSimulationStepFlags");

// /Script/FortVehicleSimulationStepsRuntime.FortVehicleSimulationStepOverrideTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortVehicleSimulationStepOverrideTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SimulationStep; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SimulationStepFlags; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortVehicleSimulationStepOverrideTableRow, SimulationStep) == 8, "Offset mismatch for FFortVehicleSimulationStepOverrideTableRow::SimulationStep");
static_assert(offsetof(FFortVehicleSimulationStepOverrideTableRow, SimulationStepFlags) == 9, "Offset mismatch for FFortVehicleSimulationStepOverrideTableRow::SimulationStepFlags");

// /Script/FortVehicleSimulationStepsRuntime.FortVehicleSimulationStepsManager
// Kind: Class; super: Object
class UFortVehicleSimulationStepsManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultSimulationStepFlags; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t DataRegistryType_VehicleSimulationStepsPermissions[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t DataRegistryType_VehicleSimulationStepsConfig[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortVehicleSimulationStepsManager, bEnabled) == 40, "Offset mismatch for UFortVehicleSimulationStepsManager::bEnabled");
static_assert(offsetof(UFortVehicleSimulationStepsManager, DefaultSimulationStepFlags) == 41, "Offset mismatch for UFortVehicleSimulationStepsManager::DefaultSimulationStepFlags");
static_assert(offsetof(UFortVehicleSimulationStepsManager, DataRegistryType_VehicleSimulationStepsPermissions) == 44, "Offset mismatch for UFortVehicleSimulationStepsManager::DataRegistryType_VehicleSimulationStepsPermissions");
static_assert(offsetof(UFortVehicleSimulationStepsManager, DataRegistryType_VehicleSimulationStepsConfig) == 48, "Offset mismatch for UFortVehicleSimulationStepsManager::DataRegistryType_VehicleSimulationStepsConfig");
