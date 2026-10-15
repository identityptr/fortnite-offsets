/**
 * decamp dumper generated SDK
 * Package: /CosmeticCompanionsFrontend/Classes/BP_FortPlayerCompanionPedestalNameplateExtensionComponent
 */
#pragma once
#include "Basic.h"

// /CosmeticCompanionsFrontend/Classes/BP_FortPlayerCompanionPedestalNameplateExtensionComponent.BP_FortPlayerCompanionPedestalNameplateExtensionComponent_C
// Kind: BlueprintGeneratedClass; super: FortPlayerCompanionPedestalNameplateExtensionComponent
class UBP_FortPlayerCompanionPedestalNameplateExtensionComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CompanionInteractActionDisplayName[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    FText CompanionEmoteActionDisplayName; // 0x00D0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UBP_FortPlayerCompanionPedestalNameplateExtensionComponent_C, CompanionInteractActionDisplayName) == 192, "Offset mismatch for UBP_FortPlayerCompanionPedestalNameplateExtensionComponent_C::CompanionInteractActionDisplayName");
static_assert(offsetof(UBP_FortPlayerCompanionPedestalNameplateExtensionComponent_C, CompanionEmoteActionDisplayName) == 208, "Offset mismatch for UBP_FortPlayerCompanionPedestalNameplateExtensionComponent_C::CompanionEmoteActionDisplayName");
