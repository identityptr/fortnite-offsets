/**
 * decamp dumper generated SDK
 * Package: /Script/FortGenericMapGame
 */
#pragma once
#include "Basic.h"

// /Script/FortGenericMapGame.FortControllerComponent_GenericMapMarker
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_GenericMapMarker
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t NeedsRefinementTag[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_GenericMapMarker, NeedsRefinementTag) == 200, "Offset mismatch for UFortControllerComponent_GenericMapMarker::NeedsRefinementTag");

// /Script/FortGenericMapGame.FortGenericMapFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortGenericMapFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortGenericMapGame.FortGenericMapManager
// Kind: Class; super: Actor
class UFortGenericMapManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    float TileSize; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0274
    TMap<void*, void*> LayerNameToIDs; // 0x0278 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortGenericMapManager, TileSize) == 624, "Offset mismatch for UFortGenericMapManager::TileSize");
static_assert(offsetof(UFortGenericMapManager, LayerNameToIDs) == 632, "Offset mismatch for UFortGenericMapManager::LayerNameToIDs");

// /Script/FortGenericMapGame.PlayspaceComponent_FortGenericMapManager
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_FortGenericMapManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bSpawnMapManagerOnBeginPlay; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    void* MapManagerClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* MapManager; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlayspaceComponent_FortGenericMapManager, bSpawnMapManagerOnBeginPlay) == 192, "Offset mismatch for UPlayspaceComponent_FortGenericMapManager::bSpawnMapManagerOnBeginPlay");
static_assert(offsetof(UPlayspaceComponent_FortGenericMapManager, MapManagerClass) == 200, "Offset mismatch for UPlayspaceComponent_FortGenericMapManager::MapManagerClass");
static_assert(offsetof(UPlayspaceComponent_FortGenericMapManager, MapManager) == 208, "Offset mismatch for UPlayspaceComponent_FortGenericMapManager::MapManager");
