/**
 * decamp dumper generated SDK
 * Package: /Script/AircraftADSUI
 */
#pragma once
#include "Basic.h"

// /Script/AircraftADSUI.FortEvent_AircraftADSPOIVolumeSelectionChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_AircraftADSPOIVolumeSelectionChanged
{
public:
    std::uint8_t bPOISelected; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_AircraftADSPOIVolumeSelectionChanged, bPOISelected) == 0, "Offset mismatch for FFortEvent_AircraftADSPOIVolumeSelectionChanged::bPOISelected");

// /Script/AircraftADSUI.AircraftADSPOIVM
// Kind: Class; super: FortPerUserViewModel
class UAircraftADSPOIVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AircraftADSUI.FortPlayerControllerComponent_AircraftADSUI
// Kind: Class; super: ControllerComponent
class UFortPlayerControllerComponent_AircraftADSUI
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t POIWidgetAliasTag[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t POIHighlightMaxAngle[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    TMap<void*, void*> POIVolumeWorldCenters; // 0x0100 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortPlayerControllerComponent_AircraftADSUI, POIWidgetAliasTag) == 192, "Offset mismatch for UFortPlayerControllerComponent_AircraftADSUI::POIWidgetAliasTag");
static_assert(offsetof(UFortPlayerControllerComponent_AircraftADSUI, POIHighlightMaxAngle) == 200, "Offset mismatch for UFortPlayerControllerComponent_AircraftADSUI::POIHighlightMaxAngle");
static_assert(offsetof(UFortPlayerControllerComponent_AircraftADSUI, POIVolumeWorldCenters) == 256, "Offset mismatch for UFortPlayerControllerComponent_AircraftADSUI::POIVolumeWorldCenters");
