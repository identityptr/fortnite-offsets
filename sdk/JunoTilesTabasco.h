/**
 * decamp dumper generated SDK
 * Package: /Script/JunoTilesTabasco
 */
#pragma once
#include "Basic.h"

// /Script/JunoTilesTabasco.JunoTabascoWorldTileManipulator
// Kind: Class; super: JunoWorldTileManipulator
class UJunoTabascoWorldTileManipulator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoTilesTabasco.JunoTilesTabascoEventBuilder
// Kind: Class; super: JunoWorldTileEventBuilder
class UJunoTilesTabascoEventBuilder
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t EventTileSize[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsBespokeEvent; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFillWithWater; // 0x0279 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x027A
    double TileExtent; // 0x0280 (Size: 0x8, Type: DoubleProperty)
    double TileSize; // 0x0288 (Size: 0x8, Type: DoubleProperty)
    double WorldRadius; // 0x0290 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t EventRandomStream[0x8]; // 0x0298 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUsePlayerLocationBuffer; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaceNearLastEvent; // 0x02A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaceNearPlayer; // 0x02A2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoTilesTabascoEventBuilder, EventTileSize) == 624, "Offset mismatch for UJunoTilesTabascoEventBuilder::EventTileSize");
static_assert(offsetof(UJunoTilesTabascoEventBuilder, bIsBespokeEvent) == 632, "Offset mismatch for UJunoTilesTabascoEventBuilder::bIsBespokeEvent");
static_assert(offsetof(UJunoTilesTabascoEventBuilder, bFillWithWater) == 633, "Offset mismatch for UJunoTilesTabascoEventBuilder::bFillWithWater");
static_assert(offsetof(UJunoTilesTabascoEventBuilder, TileExtent) == 640, "Offset mismatch for UJunoTilesTabascoEventBuilder::TileExtent");
static_assert(offsetof(UJunoTilesTabascoEventBuilder, TileSize) == 648, "Offset mismatch for UJunoTilesTabascoEventBuilder::TileSize");
static_assert(offsetof(UJunoTilesTabascoEventBuilder, WorldRadius) == 656, "Offset mismatch for UJunoTilesTabascoEventBuilder::WorldRadius");
static_assert(offsetof(UJunoTilesTabascoEventBuilder, EventRandomStream) == 664, "Offset mismatch for UJunoTilesTabascoEventBuilder::EventRandomStream");
static_assert(offsetof(UJunoTilesTabascoEventBuilder, bUsePlayerLocationBuffer) == 672, "Offset mismatch for UJunoTilesTabascoEventBuilder::bUsePlayerLocationBuffer");
static_assert(offsetof(UJunoTilesTabascoEventBuilder, bPlaceNearLastEvent) == 673, "Offset mismatch for UJunoTilesTabascoEventBuilder::bPlaceNearLastEvent");
static_assert(offsetof(UJunoTilesTabascoEventBuilder, bPlaceNearPlayer) == 674, "Offset mismatch for UJunoTilesTabascoEventBuilder::bPlaceNearPlayer");

// /Script/JunoTilesTabasco.JunoTilesTabascoMaterialGatherer
// Kind: Class; super: JunoTerrainMaterialCollector
class UJunoTilesTabascoMaterialGatherer
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> AdditionalLayers; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoTilesTabascoMaterialGatherer, AdditionalLayers) == 112, "Offset mismatch for UJunoTilesTabascoMaterialGatherer::AdditionalLayers");
