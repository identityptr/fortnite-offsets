/**
 * decamp dumper generated SDK
 * Package: /GliderRelease/Assets/BP_Camera_Lens_Galileo_BlockBreak_GliderRelease
 */
#pragma once
#include "Basic.h"

// /GliderRelease/Assets/BP_Camera_Lens_Galileo_BlockBreak_GliderRelease.BP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C
// Kind: BlueprintGeneratedClass; super: none
class UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    std::uint8_t DesiredRelativeTransform[0x60]; // 0x0290 (Size: 0x60, Type: StructProperty)
    float BaseAuthoredFOV; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowMultipleInstances; // 0x02F4 (Size: 0x1, Type: BoolProperty)
    // 0x02F4 BoolProperty bResetWhenRetriggered (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x02F5
    TArray<void*> EmittersToTreatAsSame; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    void* OwningCameraManager; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C, DesiredRelativeTransform) == 656, "Offset mismatch for UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C::DesiredRelativeTransform");
static_assert(offsetof(UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C, BaseAuthoredFOV) == 752, "Offset mismatch for UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C::BaseAuthoredFOV");
static_assert(offsetof(UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C, bAllowMultipleInstances) == 756, "Offset mismatch for UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C::bAllowMultipleInstances");
static_assert(offsetof(UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C, EmittersToTreatAsSame) == 760, "Offset mismatch for UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C::EmittersToTreatAsSame");
static_assert(offsetof(UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C, OwningCameraManager) == 776, "Offset mismatch for UBP_Camera_Lens_Galileo_BlockBreak_GliderRelease_C::OwningCameraManager");
