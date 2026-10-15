/**
 * decamp dumper generated SDK
 * Package: /Script/CustomKeyMatchCommandsUI
 */
#pragma once
#include "Basic.h"

// /Script/CustomKeyMatchCommandsUI.CustomKeyMatchCommandsPanel
// Kind: Class; super: FortSettingsPanel
class UCustomKeyMatchCommandsPanel
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    FMulticastInlineDelegate OnTextFilterCleared; // 0x06B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ResetInputActionRow[0x10]; // 0x06C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RunCommandInputActionRow[0x20]; // 0x06D8 (Size: 0x20, Type: StructProperty)
    void* Overlay_Details; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_EmptyList; // 0x0700 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomKeyMatchCommandsPanel, OnTextFilterCleared) == 1720, "Offset mismatch for UCustomKeyMatchCommandsPanel::OnTextFilterCleared");
static_assert(offsetof(UCustomKeyMatchCommandsPanel, ResetInputActionRow) == 1736, "Offset mismatch for UCustomKeyMatchCommandsPanel::ResetInputActionRow");
static_assert(offsetof(UCustomKeyMatchCommandsPanel, RunCommandInputActionRow) == 1752, "Offset mismatch for UCustomKeyMatchCommandsPanel::RunCommandInputActionRow");
static_assert(offsetof(UCustomKeyMatchCommandsPanel, Overlay_Details) == 1784, "Offset mismatch for UCustomKeyMatchCommandsPanel::Overlay_Details");
static_assert(offsetof(UCustomKeyMatchCommandsPanel, Overlay_EmptyList) == 1792, "Offset mismatch for UCustomKeyMatchCommandsPanel::Overlay_EmptyList");

// /Script/CustomKeyMatchCommandsUI.FortSettingEditCondition_CKM_Enable
// Kind: Class; super: FortSettingEditCondition
class UFortSettingEditCondition_CKM_Enable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DataTable[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    void* LoadedDataTable; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSettingEditCondition_CKM_Enable, DataTable) == 64, "Offset mismatch for UFortSettingEditCondition_CKM_Enable::DataTable");
static_assert(offsetof(UFortSettingEditCondition_CKM_Enable, LoadedDataTable) == 96, "Offset mismatch for UFortSettingEditCondition_CKM_Enable::LoadedDataTable");
