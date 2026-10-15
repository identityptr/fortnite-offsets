/**
 * decamp dumper generated SDK
 * Package: /DentureSay/UI/DynamicUI/BP_DentureSay_UIDirectorComponent
 */
#pragma once
#include "Basic.h"

// /DentureSay/UI/DynamicUI/BP_DentureSay_UIDirectorComponent.BP_DentureSay_UIDirectorComponent_C
// Kind: BlueprintGeneratedClass; super: FortDynamicUIDirectorComponent
class UBP_DentureSay_UIDirectorComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    void* CurrentViewTarget; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* HudActionUIScene; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ContextualControlHUDElementTag[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBP_DentureSay_UIDirectorComponent_C, UberGraphFrame) == 192, "Offset mismatch for UBP_DentureSay_UIDirectorComponent_C::UberGraphFrame");
static_assert(offsetof(UBP_DentureSay_UIDirectorComponent_C, CurrentViewTarget) == 200, "Offset mismatch for UBP_DentureSay_UIDirectorComponent_C::CurrentViewTarget");
static_assert(offsetof(UBP_DentureSay_UIDirectorComponent_C, HudActionUIScene) == 208, "Offset mismatch for UBP_DentureSay_UIDirectorComponent_C::HudActionUIScene");
static_assert(offsetof(UBP_DentureSay_UIDirectorComponent_C, ContextualControlHUDElementTag) == 216, "Offset mismatch for UBP_DentureSay_UIDirectorComponent_C::ContextualControlHUDElementTag");
