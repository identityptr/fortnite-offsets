/**
 * decamp dumper generated SDK
 * Package: /Script/JunoCosmeticCompanionsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoCosmeticCompanionsRuntime.JunoCosmeticCompanionItemDefinitionOverrideExtension
// Kind: Class; super: JunoAccountItemDefinitionOverrideExtension
class UJunoCosmeticCompanionItemDefinitionOverrideExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoCosmeticCompanionsRuntime.JunoCosmeticCompanionItemOverrideDefinition
// Kind: Class; super: JunoAccountItemOverrideDefinition
class UJunoCosmeticCompanionItemOverrideDefinition
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t BaseCosmeticCompanionItemDefinition[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BaseCosmeticComapnionAssetId[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    TSoftObjectPtr<void> InteractionSceneAsset; // 0x00F0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UJunoCosmeticCompanionItemOverrideDefinition, BaseCosmeticCompanionItemDefinition) == 200, "Offset mismatch for UJunoCosmeticCompanionItemOverrideDefinition::BaseCosmeticCompanionItemDefinition");
static_assert(offsetof(UJunoCosmeticCompanionItemOverrideDefinition, BaseCosmeticComapnionAssetId) == 232, "Offset mismatch for UJunoCosmeticCompanionItemOverrideDefinition::BaseCosmeticComapnionAssetId");
static_assert(offsetof(UJunoCosmeticCompanionItemOverrideDefinition, InteractionSceneAsset) == 240, "Offset mismatch for UJunoCosmeticCompanionItemOverrideDefinition::InteractionSceneAsset");
