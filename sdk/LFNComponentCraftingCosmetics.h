/**
 * decamp dumper generated SDK
 * Package: /Script/LFNComponentCraftingCosmetics
 */
#pragma once
#include "Basic.h"

// /Script/LFNComponentCraftingCosmetics.LFNComponentCraftingDefaultCosmeticEntry
// Kind: ScriptStruct; super: none
struct FLFNComponentCraftingDefaultCosmeticEntry
{
public:
    std::uint8_t PartTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TSoftObjectPtr<void> Alteration; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FLFNComponentCraftingDefaultCosmeticEntry, PartTag) == 0, "Offset mismatch for FLFNComponentCraftingDefaultCosmeticEntry::PartTag");
static_assert(offsetof(FLFNComponentCraftingDefaultCosmeticEntry, Alteration) == 8, "Offset mismatch for FLFNComponentCraftingDefaultCosmeticEntry::Alteration");

// /Script/LFNComponentCraftingCosmetics.LFNItemComponentData_DefaultComponentCraftingCosmetics
// Kind: ScriptStruct; super: FortItemComponentData
struct FLFNItemComponentData_DefaultComponentCraftingCosmetics
{
public:
    TArray<void*> Data; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLFNItemComponentData_DefaultComponentCraftingCosmetics, Data) == 0, "Offset mismatch for FLFNItemComponentData_DefaultComponentCraftingCosmetics::Data");

// /Script/LFNComponentCraftingCosmetics.LFNBoostItemDefinition
// Kind: Class; super: FortAlterationItemDefinition
class ULFNBoostItemDefinition
{
public:
    std::uint8_t Pad_0000[0x788]; // 0x0000
    std::uint8_t AlterationMaterial[0x20]; // 0x0788 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t AlterationNiagaraColorIndex; // 0x07A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULFNBoostItemDefinition, AlterationMaterial) == 1928, "Offset mismatch for ULFNBoostItemDefinition::AlterationMaterial");
static_assert(offsetof(ULFNBoostItemDefinition, AlterationNiagaraColorIndex) == 1960, "Offset mismatch for ULFNBoostItemDefinition::AlterationNiagaraColorIndex");

// /Script/LFNComponentCraftingCosmetics.LFNComponentCosmeticLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULFNComponentCosmeticLibrary
{
public:
    std::uint8_t Opaque[1];
};
