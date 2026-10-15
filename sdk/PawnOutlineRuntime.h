/**
 * decamp dumper generated SDK
 * Package: /Script/PawnOutlineRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PawnOutlineRuntime.PawnOutlineComponentBase
// Kind: Class; super: FortPawnComponent
class UPawnOutlineComponentBase
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TMap<void*, void*> BonesAndRelativeTransforms; // 0x00C8 (Size: 0x10, Type: MapProperty)
    void* OutlinePlaneMesh; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* OutlineMaterial; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    float OutlineColorScale; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OutlineColor[0x10]; // 0x00EC (Size: 0x10, Type: StructProperty)
    std::uint8_t bShouldLocalPlayerHaveOutline; // 0x00FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00FD
    TArray<void*> GlowPlanes; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPawnOutlineComponentBase, BonesAndRelativeTransforms) == 200, "Offset mismatch for UPawnOutlineComponentBase::BonesAndRelativeTransforms");
static_assert(offsetof(UPawnOutlineComponentBase, OutlinePlaneMesh) == 216, "Offset mismatch for UPawnOutlineComponentBase::OutlinePlaneMesh");
static_assert(offsetof(UPawnOutlineComponentBase, OutlineMaterial) == 224, "Offset mismatch for UPawnOutlineComponentBase::OutlineMaterial");
static_assert(offsetof(UPawnOutlineComponentBase, OutlineColorScale) == 232, "Offset mismatch for UPawnOutlineComponentBase::OutlineColorScale");
static_assert(offsetof(UPawnOutlineComponentBase, OutlineColor) == 236, "Offset mismatch for UPawnOutlineComponentBase::OutlineColor");
static_assert(offsetof(UPawnOutlineComponentBase, bShouldLocalPlayerHaveOutline) == 252, "Offset mismatch for UPawnOutlineComponentBase::bShouldLocalPlayerHaveOutline");
static_assert(offsetof(UPawnOutlineComponentBase, GlowPlanes) == 256, "Offset mismatch for UPawnOutlineComponentBase::GlowPlanes");
