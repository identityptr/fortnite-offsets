/**
 * decamp dumper generated SDK
 * Package: /SmartRifle/UI/Director/BP_UIDirectorComponent_AutoAimReticle
 */
#pragma once
#include "Basic.h"

// /SmartRifle/UI/Director/BP_UIDirectorComponent_AutoAimReticle.BP_UIDirectorComponent_AutoAimReticle_C
// Kind: BlueprintGeneratedClass; super: FortDynamicUIDirectorComponent
class UBP_UIDirectorComponent_AutoAimReticle_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    void* SmartReticleEnabled; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* OnEnabledSmartReticle; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_UIDirectorComponent_AutoAimReticle_C, UberGraphFrame) == 192, "Offset mismatch for UBP_UIDirectorComponent_AutoAimReticle_C::UberGraphFrame");
static_assert(offsetof(UBP_UIDirectorComponent_AutoAimReticle_C, SmartReticleEnabled) == 200, "Offset mismatch for UBP_UIDirectorComponent_AutoAimReticle_C::SmartReticleEnabled");
static_assert(offsetof(UBP_UIDirectorComponent_AutoAimReticle_C, OnEnabledSmartReticle) == 208, "Offset mismatch for UBP_UIDirectorComponent_AutoAimReticle_C::OnEnabledSmartReticle");
