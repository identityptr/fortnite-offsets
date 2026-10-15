/**
 * decamp dumper generated SDK
 * Package: /MintPunt/UI/DynamicUI/BP_MintPunt_DynamicUIComponent
 */
#pragma once
#include "Basic.h"

// /MintPunt/UI/DynamicUI/BP_MintPunt_DynamicUIComponent.BP_MintPunt_DynamicUIComponent_C
// Kind: BlueprintGeneratedClass; super: FortDynamicUIDirectorComponent
class UBP_MintPunt_DynamicUIComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t IsSlideChargeSceneActive; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    void* SlideChargeScene; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* BoundPawn; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_MintPunt_DynamicUIComponent_C, UberGraphFrame) == 192, "Offset mismatch for UBP_MintPunt_DynamicUIComponent_C::UberGraphFrame");
static_assert(offsetof(UBP_MintPunt_DynamicUIComponent_C, IsSlideChargeSceneActive) == 200, "Offset mismatch for UBP_MintPunt_DynamicUIComponent_C::IsSlideChargeSceneActive");
static_assert(offsetof(UBP_MintPunt_DynamicUIComponent_C, SlideChargeScene) == 208, "Offset mismatch for UBP_MintPunt_DynamicUIComponent_C::SlideChargeScene");
static_assert(offsetof(UBP_MintPunt_DynamicUIComponent_C, BoundPawn) == 216, "Offset mismatch for UBP_MintPunt_DynamicUIComponent_C::BoundPawn");
