/**
 * decamp dumper generated SDK
 * Package: /Script/HoagieUI
 */
#pragma once
#include "Basic.h"

// /Script/HoagieUI.FortHoagieVehicleReticle
// Kind: Class; super: FortAthenaVehicleDashboardWidget
class UFortHoagieVehicleReticle
{
public:
    std::uint8_t Pad_0000[0x478]; // 0x0000
    void* OwningHoagieVehicle; // 0x0478 (Size: 0x8, Type: ObjectProperty)
    void* AltitudeMeterMID; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    float MaxAltitudeWithoutFallDamage; // 0x0488 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortHoagieVehicleReticle, OwningHoagieVehicle) == 1144, "Offset mismatch for UFortHoagieVehicleReticle::OwningHoagieVehicle");
static_assert(offsetof(UFortHoagieVehicleReticle, AltitudeMeterMID) == 1152, "Offset mismatch for UFortHoagieVehicleReticle::AltitudeMeterMID");
static_assert(offsetof(UFortHoagieVehicleReticle, MaxAltitudeWithoutFallDamage) == 1160, "Offset mismatch for UFortHoagieVehicleReticle::MaxAltitudeWithoutFallDamage");
