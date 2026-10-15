/**
 * decamp dumper generated SDK
 * Package: /SparksCosmetics/Components/BP_SparksAuraComponent
 */
#pragma once
#include "Basic.h"

// /SparksCosmetics/Components/BP_SparksAuraComponent.BP_SparksAuraComponent_C
// Kind: BlueprintGeneratedClass; super: SparksAuraComponent
class UBP_SparksAuraComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnAuraItemChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    void* ActiveAura; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultAuraItemDefID[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    void* AuraItemDef; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* AuraItemDefOverride; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_SparksAuraComponent_C, OnAuraItemChanged) == 192, "Offset mismatch for UBP_SparksAuraComponent_C::OnAuraItemChanged");
static_assert(offsetof(UBP_SparksAuraComponent_C, ActiveAura) == 216, "Offset mismatch for UBP_SparksAuraComponent_C::ActiveAura");
static_assert(offsetof(UBP_SparksAuraComponent_C, DefaultAuraItemDefID) == 224, "Offset mismatch for UBP_SparksAuraComponent_C::DefaultAuraItemDefID");
static_assert(offsetof(UBP_SparksAuraComponent_C, AuraItemDef) == 232, "Offset mismatch for UBP_SparksAuraComponent_C::AuraItemDef");
static_assert(offsetof(UBP_SparksAuraComponent_C, AuraItemDefOverride) == 240, "Offset mismatch for UBP_SparksAuraComponent_C::AuraItemDefOverride");
