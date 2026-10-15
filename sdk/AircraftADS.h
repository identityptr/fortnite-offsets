/**
 * decamp dumper generated SDK
 * Package: /Script/AircraftADS
 */
#pragma once
#include "Basic.h"

// /Script/AircraftADS.FortControllerComponent_AircraftADS
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_AircraftADS
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnADSCameraActivation; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnADSCameraDeactivation; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t AircraftCameraEnabled[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t ADSCooldown[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    std::uint8_t CameraModeTag[0x8]; // 0x0148 (Size: 0x8, Type: StructProperty)
    void* ZoomInCameraModeClass; // 0x0150 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortControllerComponent_AircraftADS, OnADSCameraActivation) == 200, "Offset mismatch for UFortControllerComponent_AircraftADS::OnADSCameraActivation");
static_assert(offsetof(UFortControllerComponent_AircraftADS, OnADSCameraDeactivation) == 216, "Offset mismatch for UFortControllerComponent_AircraftADS::OnADSCameraDeactivation");
static_assert(offsetof(UFortControllerComponent_AircraftADS, AircraftCameraEnabled) == 232, "Offset mismatch for UFortControllerComponent_AircraftADS::AircraftCameraEnabled");
static_assert(offsetof(UFortControllerComponent_AircraftADS, ADSCooldown) == 280, "Offset mismatch for UFortControllerComponent_AircraftADS::ADSCooldown");
static_assert(offsetof(UFortControllerComponent_AircraftADS, CameraModeTag) == 328, "Offset mismatch for UFortControllerComponent_AircraftADS::CameraModeTag");
static_assert(offsetof(UFortControllerComponent_AircraftADS, ZoomInCameraModeClass) == 336, "Offset mismatch for UFortControllerComponent_AircraftADS::ZoomInCameraModeClass");
