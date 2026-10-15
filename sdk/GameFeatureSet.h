/**
 * decamp dumper generated SDK
 * Package: /Script/GameFeatureSet
 */
#pragma once
#include "Basic.h"

// /Script/GameFeatureSet.GameFeatureSetEmptyItemDefinitionSet
// Kind: ScriptStruct; super: none
struct FGameFeatureSetEmptyItemDefinitionSet
{
public:
    FName OverrideType; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> EmptyItemDefinitionsClassList; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAddToExistingEmptyDefinitions; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    std::uint8_t AllowedPlaylists[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameFeatureSetEmptyItemDefinitionSet, OverrideType) == 0, "Offset mismatch for FGameFeatureSetEmptyItemDefinitionSet::OverrideType");
static_assert(offsetof(FGameFeatureSetEmptyItemDefinitionSet, EmptyItemDefinitionsClassList) == 8, "Offset mismatch for FGameFeatureSetEmptyItemDefinitionSet::EmptyItemDefinitionsClassList");
static_assert(offsetof(FGameFeatureSetEmptyItemDefinitionSet, bAddToExistingEmptyDefinitions) == 24, "Offset mismatch for FGameFeatureSetEmptyItemDefinitionSet::bAddToExistingEmptyDefinitions");
static_assert(offsetof(FGameFeatureSetEmptyItemDefinitionSet, AllowedPlaylists) == 32, "Offset mismatch for FGameFeatureSetEmptyItemDefinitionSet::AllowedPlaylists");

// /Script/GameFeatureSet.GameFeatureAction_SetGFSClassReplacements
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_SetGFSClassReplacements
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ReplacementMappings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_SetGFSClassReplacements, ReplacementMappings) == 40, "Offset mismatch for UGameFeatureAction_SetGFSClassReplacements::ReplacementMappings");

// /Script/GameFeatureSet.GameFeatureSetAssetReplacementMappingBase
// Kind: Class; super: Object
class UGameFeatureSetAssetReplacementMappingBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatureSet.GameFeatureSetEmptyItemDefinitionsReplacement
// Kind: Class; super: GameFeatureSetAssetReplacementMappingBase
class UGameFeatureSetEmptyItemDefinitionsReplacement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> EmptyItemDefinitionSets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureSetEmptyItemDefinitionsReplacement, EmptyItemDefinitionSets) == 40, "Offset mismatch for UGameFeatureSetEmptyItemDefinitionsReplacement::EmptyItemDefinitionSets");

// /Script/GameFeatureSet.GameFeatureSetIslandSettingsReplacement
// Kind: Class; super: GameFeatureSetAssetReplacementMappingBase
class UGameFeatureSetIslandSettingsReplacement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> IslandSettingsClass; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UGameFeatureSetIslandSettingsReplacement, IslandSettingsClass) == 40, "Offset mismatch for UGameFeatureSetIslandSettingsReplacement::IslandSettingsClass");

// /Script/GameFeatureSet.GameFeatureSetPlayerSpawnerReplacement
// Kind: Class; super: GameFeatureSetAssetReplacementMappingBase
class UGameFeatureSetPlayerSpawnerReplacement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftObjectPtr<void> PlayerSpawnerClass; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UGameFeatureSetPlayerSpawnerReplacement, PlayerSpawnerClass) == 40, "Offset mismatch for UGameFeatureSetPlayerSpawnerReplacement::PlayerSpawnerClass");

// /Script/GameFeatureSet.GameFeatureSetSubsystem
// Kind: Class; super: EngineSubsystem
class UGameFeatureSetSubsystem
{
public:
    std::uint8_t Opaque[1];
};
