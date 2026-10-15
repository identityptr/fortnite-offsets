/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarCharacterCosmetics
 */
#pragma once
#include "Basic.h"

// /Script/DelMarCharacterCosmetics.DelMarDriverCosmeticData
// Kind: ScriptStruct; super: none
struct FDelMarDriverCosmeticData
{
public:
    void* CharacterDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CharacterVariantChannels; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarDriverCosmeticData, CharacterDefinition) == 0, "Offset mismatch for FDelMarDriverCosmeticData::CharacterDefinition");
static_assert(offsetof(FDelMarDriverCosmeticData, CharacterVariantChannels) == 8, "Offset mismatch for FDelMarDriverCosmeticData::CharacterVariantChannels");

// /Script/DelMarCharacterCosmetics.DelMarDriverCosmeticPlayerComponent
// Kind: Class; super: PlayerStateComponent
class UDelMarDriverCosmeticPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TArray<void*> SequenceBindingTags; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CosmeticData[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarDriverCosmeticPlayerComponent, SequenceBindingTags) == 216, "Offset mismatch for UDelMarDriverCosmeticPlayerComponent::SequenceBindingTags");
static_assert(offsetof(UDelMarDriverCosmeticPlayerComponent, CosmeticData) == 232, "Offset mismatch for UDelMarDriverCosmeticPlayerComponent::CosmeticData");
