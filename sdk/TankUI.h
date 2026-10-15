/**
 * decamp dumper generated SDK
 * Package: /Script/TankUI
 */
#pragma once
#include "Basic.h"

// /Script/TankUI.FortGameSettingRegistryExtension_Tank
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortGameSettingRegistryExtension_Tank
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MarkupBase; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameSettingRegistryExtension_Tank, MarkupBase) == 40, "Offset mismatch for UFortGameSettingRegistryExtension_Tank::MarkupBase");

// /Script/TankUI.TankVehicleReticle
// Kind: Class; super: FortAthenaVehicleDashboardWidget
class UTankVehicleReticle
{
public:
    std::uint8_t Pad_0000[0x478]; // 0x0000
    void* OwningTankVehicle; // 0x0478 (Size: 0x8, Type: ObjectProperty)
    float MinTurretPitch; // 0x0480 (Size: 0x4, Type: FloatProperty)
    float MaxTurretPitch; // 0x0484 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDistanceMeterEnabled; // 0x0488 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTankOrientationEventsEnabled; // 0x0489 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTankVehicleReticle, OwningTankVehicle) == 1144, "Offset mismatch for UTankVehicleReticle::OwningTankVehicle");
static_assert(offsetof(UTankVehicleReticle, MinTurretPitch) == 1152, "Offset mismatch for UTankVehicleReticle::MinTurretPitch");
static_assert(offsetof(UTankVehicleReticle, MaxTurretPitch) == 1156, "Offset mismatch for UTankVehicleReticle::MaxTurretPitch");
static_assert(offsetof(UTankVehicleReticle, bDistanceMeterEnabled) == 1160, "Offset mismatch for UTankVehicleReticle::bDistanceMeterEnabled");
static_assert(offsetof(UTankVehicleReticle, bTankOrientationEventsEnabled) == 1161, "Offset mismatch for UTankVehicleReticle::bTankOrientationEventsEnabled");
