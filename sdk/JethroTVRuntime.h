/**
 * decamp dumper generated SDK
 * Package: /Script/JethroTVRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JethroTVRuntime.FortVehicleLayerAnimInstance_JethroTVPassenger
// Kind: Class; super: FortVehicleLayerAnimInstance_FerretPassenger
class UFortVehicleLayerAnimInstance_JethroTVPassenger
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    float ReturnValueYPitch; // 0x0400 (Size: 0x4, Type: FloatProperty)
    float ReturnValueXRoll; // 0x0404 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortVehicleLayerAnimInstance_JethroTVPassenger, ReturnValueYPitch) == 1024, "Offset mismatch for UFortVehicleLayerAnimInstance_JethroTVPassenger::ReturnValueYPitch");
static_assert(offsetof(UFortVehicleLayerAnimInstance_JethroTVPassenger, ReturnValueXRoll) == 1028, "Offset mismatch for UFortVehicleLayerAnimInstance_JethroTVPassenger::ReturnValueXRoll");

// /Script/JethroTVRuntime.JethroTVVehicleLayerAnimInstance
// Kind: Class; super: FortVehicleLayerAnimInstance
class UJethroTVVehicleLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x470]; // 0x0000
    double BS_Add_Alpha; // 0x0470 (Size: 0x8, Type: DoubleProperty)
    double Speed; // 0x0478 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t InFlightTagNames[0x1]; // 0x0480 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJethroTVVehicleLayerAnimInstance, BS_Add_Alpha) == 1136, "Offset mismatch for UJethroTVVehicleLayerAnimInstance::BS_Add_Alpha");
static_assert(offsetof(UJethroTVVehicleLayerAnimInstance, Speed) == 1144, "Offset mismatch for UJethroTVVehicleLayerAnimInstance::Speed");
static_assert(offsetof(UJethroTVVehicleLayerAnimInstance, InFlightTagNames) == 1152, "Offset mismatch for UJethroTVVehicleLayerAnimInstance::InFlightTagNames");
