/**
 * decamp dumper generated SDK
 * Package: /Script/ConsoleVariablesEditorRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesEditorAssetSaveData
// Kind: ScriptStruct; super: none
struct FConsoleVariablesEditorAssetSaveData
{
public:
    FString CommandName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString CommandValueAsString; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t CheckedState; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FConsoleVariablesEditorAssetSaveData, CommandName) == 0, "Offset mismatch for FConsoleVariablesEditorAssetSaveData::CommandName");
static_assert(offsetof(FConsoleVariablesEditorAssetSaveData, CommandValueAsString) == 16, "Offset mismatch for FConsoleVariablesEditorAssetSaveData::CommandValueAsString");
static_assert(offsetof(FConsoleVariablesEditorAssetSaveData, CheckedState) == 32, "Offset mismatch for FConsoleVariablesEditorAssetSaveData::CheckedState");

// /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
// Kind: Class; super: Object
class UConsoleVariablesAsset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString VariableCollectionDescription; // 0x0030 (Size: 0x10, Type: StrProperty)
    TArray<void*> SavedCommands; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UConsoleVariablesAsset, VariableCollectionDescription) == 48, "Offset mismatch for UConsoleVariablesAsset::VariableCollectionDescription");
static_assert(offsetof(UConsoleVariablesAsset, SavedCommands) == 64, "Offset mismatch for UConsoleVariablesAsset::SavedCommands");
