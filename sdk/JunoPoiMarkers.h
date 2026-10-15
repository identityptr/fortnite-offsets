/**
 * decamp dumper generated SDK
 * Package: /Script/JunoPoiMarkers
 */
#pragma once
#include "Basic.h"

// /Script/JunoPoiMarkers.JunoPoiMarkerManagerComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoPoiMarkerManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PoiMarkerRegistry[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    void* WaitForPlayspaceAction; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPoiMarkerManagerComponent, PoiMarkerRegistry) == 192, "Offset mismatch for UJunoPoiMarkerManagerComponent::PoiMarkerRegistry");
static_assert(offsetof(UJunoPoiMarkerManagerComponent, WaitForPlayspaceAction) == 216, "Offset mismatch for UJunoPoiMarkerManagerComponent::WaitForPlayspaceAction");
