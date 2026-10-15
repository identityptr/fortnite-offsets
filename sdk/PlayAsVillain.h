/**
 * decamp dumper generated SDK
 * Package: /Script/PlayAsVillain
 */
#pragma once
#include "Basic.h"

// /Script/PlayAsVillain.FortPawnComponent_PlayAsVillain
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_PlayAsVillain
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float ShowStatusWidgetMinSquaredRadius; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float ShowStatusWidgetMaxSquaredRadius; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldCheckLineOfSight; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D1
    void* StatusWidgetComponent; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPawnComponent_PlayAsVillain, ShowStatusWidgetMinSquaredRadius) == 200, "Offset mismatch for UFortPawnComponent_PlayAsVillain::ShowStatusWidgetMinSquaredRadius");
static_assert(offsetof(UFortPawnComponent_PlayAsVillain, ShowStatusWidgetMaxSquaredRadius) == 204, "Offset mismatch for UFortPawnComponent_PlayAsVillain::ShowStatusWidgetMaxSquaredRadius");
static_assert(offsetof(UFortPawnComponent_PlayAsVillain, bShouldCheckLineOfSight) == 208, "Offset mismatch for UFortPawnComponent_PlayAsVillain::bShouldCheckLineOfSight");
static_assert(offsetof(UFortPawnComponent_PlayAsVillain, StatusWidgetComponent) == 216, "Offset mismatch for UFortPawnComponent_PlayAsVillain::StatusWidgetComponent");
