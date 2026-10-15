/**
 * decamp dumper generated SDK
 * Package: /Script/MidMatchRadioTowerGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MidMatchRadioTowerGameplayRuntime.BuildingGameplayActorRadioTower
// Kind: Class; super: BuildingGameplayActor
class UBuildingGameplayActorRadioTower
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    std::uint8_t MarkLinkedRadioTowerTerminal[0x1]; // 0x0920 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBuildingGameplayActorRadioTower, MarkLinkedRadioTowerTerminal) == 2336, "Offset mismatch for UBuildingGameplayActorRadioTower::MarkLinkedRadioTowerTerminal");

// /Script/MidMatchRadioTowerGameplayRuntime.RadioTowerTerminal
// Kind: Class; super: BuildingGameplayActor
class URadioTowerTerminal
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    float MaxInteractHalfAngle; // 0x0920 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URadioTowerTerminal, MaxInteractHalfAngle) == 2336, "Offset mismatch for URadioTowerTerminal::MaxInteractHalfAngle");

// /Script/MidMatchRadioTowerGameplayRuntime.RemoveFoliageBoxComponent
// Kind: Class; super: BoxComponent
class URemoveFoliageBoxComponent
{
public:
    std::uint8_t Pad_0000[0x590]; // 0x0000
    std::uint8_t BoxExtent[0x1]; // 0x0590 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URemoveFoliageBoxComponent, BoxExtent) == 1424, "Offset mismatch for URemoveFoliageBoxComponent::BoxExtent");
