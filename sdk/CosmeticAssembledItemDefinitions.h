/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticAssembledItemDefinitions
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticAssembledItemDefinitions.CosmeticItemDefinitionData_AssembledMeshSchema
// Kind: ScriptStruct; super: ItemComponentData
struct FCosmeticItemDefinitionData_AssembledMeshSchema
{
public:
    TSoftObjectPtr<void> AssembledMeshSchema; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FCosmeticItemDefinitionData_AssembledMeshSchema, AssembledMeshSchema) == 0, "Offset mismatch for FCosmeticItemDefinitionData_AssembledMeshSchema::AssembledMeshSchema");

// /Script/CosmeticAssembledItemDefinitions.CosmeticItemDefinitionData_BaseItemDefinition
// Kind: ScriptStruct; super: ItemComponentData
struct FCosmeticItemDefinitionData_BaseItemDefinition
{
public:
    std::uint8_t BaseItemDefinition[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ItemTypeTag[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticItemDefinitionData_BaseItemDefinition, BaseItemDefinition) == 0, "Offset mismatch for FCosmeticItemDefinitionData_BaseItemDefinition::BaseItemDefinition");
static_assert(offsetof(FCosmeticItemDefinitionData_BaseItemDefinition, ItemTypeTag) == 32, "Offset mismatch for FCosmeticItemDefinitionData_BaseItemDefinition::ItemTypeTag");

// /Script/CosmeticAssembledItemDefinitions.CosmeticItemDefinitionData_RichColorOptions
// Kind: ScriptStruct; super: ItemComponentData
struct FCosmeticItemDefinitionData_RichColorOptions
{
public:
    TArray<void*> AvailableColors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticItemDefinitionData_RichColorOptions, AvailableColors) == 0, "Offset mismatch for FCosmeticItemDefinitionData_RichColorOptions::AvailableColors");

// /Script/CosmeticAssembledItemDefinitions.CosmeticItemDefinitionData_Variants
// Kind: ScriptStruct; super: ItemComponentData
struct FCosmeticItemDefinitionData_Variants
{
public:
    TArray<void*> ItemVariants; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticItemDefinitionData_Variants, ItemVariants) == 0, "Offset mismatch for FCosmeticItemDefinitionData_Variants::ItemVariants");

// /Script/CosmeticAssembledItemDefinitions.CosmeticAssembledItemDefinitionsSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UCosmeticAssembledItemDefinitionsSubsystem
{
public:
    std::uint8_t Opaque[1];
};
