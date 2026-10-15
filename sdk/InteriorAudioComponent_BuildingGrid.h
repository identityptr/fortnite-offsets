/**
 * decamp dumper generated SDK
 * Package: /FortInteriorAudio_BR/InteriorAudioComponent_BuildingGrid
 */
#pragma once
#include "Basic.h"

// /FortInteriorAudio_BR/InteriorAudioComponent_BuildingGrid.InteriorAudioComponent_BuildingGrid_C
// Kind: BlueprintGeneratedClass; super: FortInteriorAudioComponent_BuildingGrid
class UInteriorAudioComponent_BuildingGrid_C
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TMap<void*, void*> Dictionaries; // 0x00D8 (Size: 0x10, Type: MapProperty)
    std::int32_t HorizontalScanDistance; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t VerticalScanDistance; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t TotalCeilingCountRequiredAlongHorizontalScan; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t HorizontalLineTraceDistance; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::int32_t VerticalLineTraceDistance; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t TraceCollisionChannel; // 0x00FC (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00FD
    std::uint8_t player[0x70]; // 0x0100 (Size: 0x70, Type: StructProperty)
    void* BuildingGrid; // 0x0170 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInteriorAudioComponent_BuildingGrid_C, Dictionaries) == 216, "Offset mismatch for UInteriorAudioComponent_BuildingGrid_C::Dictionaries");
static_assert(offsetof(UInteriorAudioComponent_BuildingGrid_C, HorizontalScanDistance) == 232, "Offset mismatch for UInteriorAudioComponent_BuildingGrid_C::HorizontalScanDistance");
static_assert(offsetof(UInteriorAudioComponent_BuildingGrid_C, VerticalScanDistance) == 236, "Offset mismatch for UInteriorAudioComponent_BuildingGrid_C::VerticalScanDistance");
static_assert(offsetof(UInteriorAudioComponent_BuildingGrid_C, TotalCeilingCountRequiredAlongHorizontalScan) == 240, "Offset mismatch for UInteriorAudioComponent_BuildingGrid_C::TotalCeilingCountRequiredAlongHorizontalScan");
static_assert(offsetof(UInteriorAudioComponent_BuildingGrid_C, HorizontalLineTraceDistance) == 244, "Offset mismatch for UInteriorAudioComponent_BuildingGrid_C::HorizontalLineTraceDistance");
static_assert(offsetof(UInteriorAudioComponent_BuildingGrid_C, VerticalLineTraceDistance) == 248, "Offset mismatch for UInteriorAudioComponent_BuildingGrid_C::VerticalLineTraceDistance");
static_assert(offsetof(UInteriorAudioComponent_BuildingGrid_C, TraceCollisionChannel) == 252, "Offset mismatch for UInteriorAudioComponent_BuildingGrid_C::TraceCollisionChannel");
static_assert(offsetof(UInteriorAudioComponent_BuildingGrid_C, player) == 256, "Offset mismatch for UInteriorAudioComponent_BuildingGrid_C::player");
static_assert(offsetof(UInteriorAudioComponent_BuildingGrid_C, BuildingGrid) == 368, "Offset mismatch for UInteriorAudioComponent_BuildingGrid_C::BuildingGrid");
