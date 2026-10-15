/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/DrivableVehicles/PapayaBoundarySpline
 */
#pragma once
#include "Basic.h"

// /Game/Athena/DrivableVehicles/PapayaBoundarySpline.PapayaBoundarySpline_C
// Kind: BlueprintGeneratedClass; super: Actor
class UPapayaBoundarySpline_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* Spline2; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSceneRoot; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPapayaBoundarySpline_C, Spline2) == 624, "Offset mismatch for UPapayaBoundarySpline_C::Spline2");
static_assert(offsetof(UPapayaBoundarySpline_C, DefaultSceneRoot) == 632, "Offset mismatch for UPapayaBoundarySpline_C::DefaultSceneRoot");
