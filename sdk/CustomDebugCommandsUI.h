/**
 * decamp dumper generated SDK
 * Package: /Script/CustomDebugCommandsUI
 */
#pragma once
#include "Basic.h"

// /Script/CustomDebugCommandsUI.CustomDebugCommandAnalytic
// Kind: ScriptStruct; super: none
struct FCustomDebugCommandAnalytic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomDebugCommandsUI.FortSettingComponent_DebugCommand
// Kind: ScriptStruct; super: FortSettingComponent
struct FFortSettingComponent_DebugCommand
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FString DebugCommandName; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortSettingComponent_DebugCommand, DebugCommandName) == 16, "Offset mismatch for FFortSettingComponent_DebugCommand::DebugCommandName");

// /Script/CustomDebugCommandsUI.FortSettingLocalization_DebugCommand
// Kind: ScriptStruct; super: FortSettingLocalization_SingleText
struct FFortSettingLocalization_DebugCommand
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t EnabledStateText[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    FText DisabledStateText; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FFortSettingLocalization_DebugCommand, EnabledStateText) == 24, "Offset mismatch for FFortSettingLocalization_DebugCommand::EnabledStateText");
static_assert(offsetof(FFortSettingLocalization_DebugCommand, DisabledStateText) == 40, "Offset mismatch for FFortSettingLocalization_DebugCommand::DisabledStateText");

// /Script/CustomDebugCommandsUI.CustomDebugCommandFavoriteWidget
// Kind: Class; super: CommonUserWidget
class UCustomDebugCommandFavoriteWidget
{
public:
    std::uint8_t Pad_0000[0x368]; // 0x0000
    FString CommandName; // 0x0368 (Size: 0x10, Type: StrProperty)
    void* Button_Favorite; // 0x0378 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomDebugCommandFavoriteWidget, CommandName) == 872, "Offset mismatch for UCustomDebugCommandFavoriteWidget::CommandName");
static_assert(offsetof(UCustomDebugCommandFavoriteWidget, Button_Favorite) == 888, "Offset mismatch for UCustomDebugCommandFavoriteWidget::Button_Favorite");

// /Script/CustomDebugCommandsUI.CustomDebugCommandKeybindListEntry
// Kind: Class; super: CommonUserWidget
class UCustomDebugCommandKeybindListEntry
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* KeyBindWidget; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Text_CommandName; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomDebugCommandKeybindListEntry, KeyBindWidget) == 824, "Offset mismatch for UCustomDebugCommandKeybindListEntry::KeyBindWidget");
static_assert(offsetof(UCustomDebugCommandKeybindListEntry, Text_CommandName) == 832, "Offset mismatch for UCustomDebugCommandKeybindListEntry::Text_CommandName");

// /Script/CustomDebugCommandsUI.CustomDebugCommandKeybindListItem
// Kind: Class; super: Object
class UCustomDebugCommandKeybindListItem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FText CommandDisplayName; // 0x0038 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UCustomDebugCommandKeybindListItem, CommandName) == 40, "Offset mismatch for UCustomDebugCommandKeybindListItem::CommandName");
static_assert(offsetof(UCustomDebugCommandKeybindListItem, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommandKeybindListItem::CommandDisplayName");

// /Script/CustomDebugCommandsUI.CustomDebugCommandKeybindWidget
// Kind: Class; super: CommonUserWidget
class UCustomDebugCommandKeybindWidget
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    void* PressAnyKeyPanelClass; // 0x0360 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0368
    FString CommandName; // 0x0378 (Size: 0x10, Type: StrProperty)
    std::uint8_t KeyPreviewScale[0x10]; // 0x0388 (Size: 0x10, Type: StructProperty)
    void* Button_BindKey; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Image_KeyPreview; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomDebugCommandKeybindWidget, PressAnyKeyPanelClass) == 864, "Offset mismatch for UCustomDebugCommandKeybindWidget::PressAnyKeyPanelClass");
static_assert(offsetof(UCustomDebugCommandKeybindWidget, CommandName) == 888, "Offset mismatch for UCustomDebugCommandKeybindWidget::CommandName");
static_assert(offsetof(UCustomDebugCommandKeybindWidget, KeyPreviewScale) == 904, "Offset mismatch for UCustomDebugCommandKeybindWidget::KeyPreviewScale");
static_assert(offsetof(UCustomDebugCommandKeybindWidget, Button_BindKey) == 920, "Offset mismatch for UCustomDebugCommandKeybindWidget::Button_BindKey");
static_assert(offsetof(UCustomDebugCommandKeybindWidget, Image_KeyPreview) == 928, "Offset mismatch for UCustomDebugCommandKeybindWidget::Image_KeyPreview");

// /Script/CustomDebugCommandsUI.CustomDebugCommandsControlsWidget
// Kind: Class; super: FortHUDElementWidget
class UCustomDebugCommandsControlsWidget
{
public:
    std::uint8_t Pad_0000[0x3B8]; // 0x0000
    void* ControlsList; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedDebugCommandComponent; // 0x03C0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UCustomDebugCommandsControlsWidget, ControlsList) == 952, "Offset mismatch for UCustomDebugCommandsControlsWidget::ControlsList");
static_assert(offsetof(UCustomDebugCommandsControlsWidget, CachedDebugCommandComponent) == 960, "Offset mismatch for UCustomDebugCommandsControlsWidget::CachedDebugCommandComponent");

// /Script/CustomDebugCommandsUI.CustomDebugCommandsPanel
// Kind: Class; super: FortSettingsPanel
class UCustomDebugCommandsPanel
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    FMulticastInlineDelegate OnTextFilterCleared; // 0x06B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ResetInputActionRow[0x10]; // 0x06C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RunCommandInputActionRow[0x10]; // 0x06D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClearKeybindsInputActionRow[0x10]; // 0x06E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t EnableDebugInputActionRow[0x10]; // 0x06F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t DisableDebugInputActionRow[0x190]; // 0x0708 (Size: 0x190, Type: StructProperty)
    void* CmdPromptWidget; // 0x0898 (Size: 0x8, Type: ObjectProperty)
    void* OpenPanelKeybindWidget; // 0x08A0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Details; // 0x08A8 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_EmptyList; // 0x08B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomDebugCommandsPanel, OnTextFilterCleared) == 1720, "Offset mismatch for UCustomDebugCommandsPanel::OnTextFilterCleared");
static_assert(offsetof(UCustomDebugCommandsPanel, ResetInputActionRow) == 1736, "Offset mismatch for UCustomDebugCommandsPanel::ResetInputActionRow");
static_assert(offsetof(UCustomDebugCommandsPanel, RunCommandInputActionRow) == 1752, "Offset mismatch for UCustomDebugCommandsPanel::RunCommandInputActionRow");
static_assert(offsetof(UCustomDebugCommandsPanel, ClearKeybindsInputActionRow) == 1768, "Offset mismatch for UCustomDebugCommandsPanel::ClearKeybindsInputActionRow");
static_assert(offsetof(UCustomDebugCommandsPanel, EnableDebugInputActionRow) == 1784, "Offset mismatch for UCustomDebugCommandsPanel::EnableDebugInputActionRow");
static_assert(offsetof(UCustomDebugCommandsPanel, DisableDebugInputActionRow) == 1800, "Offset mismatch for UCustomDebugCommandsPanel::DisableDebugInputActionRow");
static_assert(offsetof(UCustomDebugCommandsPanel, CmdPromptWidget) == 2200, "Offset mismatch for UCustomDebugCommandsPanel::CmdPromptWidget");
static_assert(offsetof(UCustomDebugCommandsPanel, OpenPanelKeybindWidget) == 2208, "Offset mismatch for UCustomDebugCommandsPanel::OpenPanelKeybindWidget");
static_assert(offsetof(UCustomDebugCommandsPanel, Overlay_Details) == 2216, "Offset mismatch for UCustomDebugCommandsPanel::Overlay_Details");
static_assert(offsetof(UCustomDebugCommandsPanel, Overlay_EmptyList) == 2224, "Offset mismatch for UCustomDebugCommandsPanel::Overlay_EmptyList");

// /Script/CustomDebugCommandsUI.CustomDebugCommandsPromptWidget
// Kind: Class; super: CommonActivatableWidget
class UCustomDebugCommandsPromptWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    FMulticastInlineDelegate OnTextChanged; // 0x04A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKeyboardFocusLost; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t FocusSearchInputActionRow[0x10]; // 0x04C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClearSearchInputActionRow[0x1]; // 0x04D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCustomDebugCommandsPromptWidget, OnTextChanged) == 1184, "Offset mismatch for UCustomDebugCommandsPromptWidget::OnTextChanged");
static_assert(offsetof(UCustomDebugCommandsPromptWidget, OnKeyboardFocusLost) == 1200, "Offset mismatch for UCustomDebugCommandsPromptWidget::OnKeyboardFocusLost");
static_assert(offsetof(UCustomDebugCommandsPromptWidget, FocusSearchInputActionRow) == 1216, "Offset mismatch for UCustomDebugCommandsPromptWidget::FocusSearchInputActionRow");
static_assert(offsetof(UCustomDebugCommandsPromptWidget, ClearSearchInputActionRow) == 1232, "Offset mismatch for UCustomDebugCommandsPromptWidget::ClearSearchInputActionRow");

// /Script/CustomDebugCommandsUI.CustomDebugCommandsRegistry
// Kind: Class; super: FortSettingRegistry
class UCustomDebugCommandsRegistry
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> RootSettings; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RegisteredSettings; // 0x00B0 (Size: 0x10, Type: MapProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* EditConditionCache; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomDebugCommandsRegistry, RootSettings) == 160, "Offset mismatch for UCustomDebugCommandsRegistry::RootSettings");
static_assert(offsetof(UCustomDebugCommandsRegistry, RegisteredSettings) == 176, "Offset mismatch for UCustomDebugCommandsRegistry::RegisteredSettings");
static_assert(offsetof(UCustomDebugCommandsRegistry, OwningLocalPlayer) == 192, "Offset mismatch for UCustomDebugCommandsRegistry::OwningLocalPlayer");
static_assert(offsetof(UCustomDebugCommandsRegistry, EditConditionCache) == 200, "Offset mismatch for UCustomDebugCommandsRegistry::EditConditionCache");

// /Script/CustomDebugCommandsUI.CustomDebugCommandsScreen
// Kind: Class; super: SettingsScreen
class UCustomDebugCommandsScreen
{
public:
    std::uint8_t Pad_0000[0x5B8]; // 0x0000
    std::uint8_t HudHidingTags[0x20]; // 0x05B8 (Size: 0x20, Type: StructProperty)
    TArray<void*> CachedRootSettings; // 0x05D8 (Size: 0x10, Type: ArrayProperty)
    void* Button_CloseTouch; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BackActionRowHandle[0x1]; // 0x05F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCustomDebugCommandsScreen, HudHidingTags) == 1464, "Offset mismatch for UCustomDebugCommandsScreen::HudHidingTags");
static_assert(offsetof(UCustomDebugCommandsScreen, CachedRootSettings) == 1496, "Offset mismatch for UCustomDebugCommandsScreen::CachedRootSettings");
static_assert(offsetof(UCustomDebugCommandsScreen, Button_CloseTouch) == 1512, "Offset mismatch for UCustomDebugCommandsScreen::Button_CloseTouch");
static_assert(offsetof(UCustomDebugCommandsScreen, BackActionRowHandle) == 1520, "Offset mismatch for UCustomDebugCommandsScreen::BackActionRowHandle");

// /Script/CustomDebugCommandsUI.CustomDebugCommandsUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UCustomDebugCommandsUIDirector
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    FString DebugCommandsRegistryName; // 0x02E8 (Size: 0x10, Type: StrProperty)
    void* CustomDebugCommandControlsScene; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> DebugCommandUIScenes; // 0x0300 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCustomDebugCommandsUIDirector, DebugCommandsRegistryName) == 744, "Offset mismatch for UCustomDebugCommandsUIDirector::DebugCommandsRegistryName");
static_assert(offsetof(UCustomDebugCommandsUIDirector, CustomDebugCommandControlsScene) == 760, "Offset mismatch for UCustomDebugCommandsUIDirector::CustomDebugCommandControlsScene");
static_assert(offsetof(UCustomDebugCommandsUIDirector, DebugCommandUIScenes) == 768, "Offset mismatch for UCustomDebugCommandsUIDirector::DebugCommandUIScenes");

// /Script/CustomDebugCommandsUI.FortDebugCommandSettingsListEntrySetting_Action
// Kind: Class; super: FortSettingsListEntrySetting_Action
class UFortDebugCommandSettingsListEntrySetting_Action
{
public:
    std::uint8_t Pad_0000[0x38C]; // 0x0000
    std::uint8_t bFocusHighlightActive; // 0x038C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x038D
    void* CommandBindingWidget; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* FavoriteCommandWidget; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RunCommandInputHandle[0x1]; // 0x03A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Action, bFocusHighlightActive) == 908, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Action::bFocusHighlightActive");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Action, CommandBindingWidget) == 912, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Action::CommandBindingWidget");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Action, FavoriteCommandWidget) == 920, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Action::FavoriteCommandWidget");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Action, RunCommandInputHandle) == 928, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Action::RunCommandInputHandle");

// /Script/CustomDebugCommandsUI.FortDebugCommandSettingsListEntrySetting_Discrete
// Kind: Class; super: FortSettingsListEntrySetting_Discrete
class UFortDebugCommandSettingsListEntrySetting_Discrete
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    void* Button_EditEntry; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Commit; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* CommandBindingWidget; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* FavoriteCommandWidget; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInEditMode; // 0x03C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03C9
    std::uint8_t bFocusHighlightActive; // 0x03CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x03CE
    std::uint8_t ModifyInputHandle[0x1]; // 0x03D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Discrete, Button_EditEntry) == 936, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Discrete::Button_EditEntry");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Discrete, Button_Commit) == 944, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Discrete::Button_Commit");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Discrete, CommandBindingWidget) == 952, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Discrete::CommandBindingWidget");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Discrete, FavoriteCommandWidget) == 960, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Discrete::FavoriteCommandWidget");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Discrete, bIsInEditMode) == 968, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Discrete::bIsInEditMode");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Discrete, bFocusHighlightActive) == 973, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Discrete::bFocusHighlightActive");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Discrete, ModifyInputHandle) == 976, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Discrete::ModifyInputHandle");

// /Script/CustomDebugCommandsUI.FortDebugCommandSettingsListEntrySetting_Scalar
// Kind: Class; super: FortSettingsListEntrySetting_Scalar
class UFortDebugCommandSettingsListEntrySetting_Scalar
{
public:
    std::uint8_t Pad_0000[0x388]; // 0x0000
    void* Button_EditEntry; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* CommandBindingWidget; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* FavoriteCommandWidget; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Text_NumericInput; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInEditMode; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03A9
    std::uint8_t ModifyInputHandle[0x16]; // 0x03B0 (Size: 0x16, Type: StructProperty)
    std::uint8_t bFocusHighlightActive; // 0x03C6 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Scalar, Button_EditEntry) == 904, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Scalar::Button_EditEntry");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Scalar, CommandBindingWidget) == 912, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Scalar::CommandBindingWidget");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Scalar, FavoriteCommandWidget) == 920, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Scalar::FavoriteCommandWidget");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Scalar, Text_NumericInput) == 928, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Scalar::Text_NumericInput");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Scalar, bIsInEditMode) == 936, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Scalar::bIsInEditMode");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Scalar, ModifyInputHandle) == 944, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Scalar::ModifyInputHandle");
static_assert(offsetof(UFortDebugCommandSettingsListEntrySetting_Scalar, bFocusHighlightActive) == 966, "Offset mismatch for UFortDebugCommandSettingsListEntrySetting_Scalar::bFocusHighlightActive");

// /Script/CustomDebugCommandsUI.FortSettingDataSourceModel_CustomDebugCommand
// Kind: Class; super: FortSettingDataSourceModel
class UFortSettingDataSourceModel_CustomDebugCommand
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString DebugCommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString DebugCommandFunctionName; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortSettingDataSourceModel_CustomDebugCommand, DebugCommandName) == 40, "Offset mismatch for UFortSettingDataSourceModel_CustomDebugCommand::DebugCommandName");
static_assert(offsetof(UFortSettingDataSourceModel_CustomDebugCommand, DebugCommandFunctionName) == 56, "Offset mismatch for UFortSettingDataSourceModel_CustomDebugCommand::DebugCommandFunctionName");

// /Script/CustomDebugCommandsUI.FortSettingDataSourceModel_DebugCommand
// Kind: Class; super: FortSettingDataSourceModel
class UFortSettingDataSourceModel_DebugCommand
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ConsoleCommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsServerConsoleCommand; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TArray<void*> CommandArgs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bInjectVariableParameter; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0051
    std::int32_t VariableParameterArgumentPosition; // 0x0054 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortSettingDataSourceModel_DebugCommand, ConsoleCommandName) == 40, "Offset mismatch for UFortSettingDataSourceModel_DebugCommand::ConsoleCommandName");
static_assert(offsetof(UFortSettingDataSourceModel_DebugCommand, bIsServerConsoleCommand) == 56, "Offset mismatch for UFortSettingDataSourceModel_DebugCommand::bIsServerConsoleCommand");
static_assert(offsetof(UFortSettingDataSourceModel_DebugCommand, CommandArgs) == 64, "Offset mismatch for UFortSettingDataSourceModel_DebugCommand::CommandArgs");
static_assert(offsetof(UFortSettingDataSourceModel_DebugCommand, bInjectVariableParameter) == 80, "Offset mismatch for UFortSettingDataSourceModel_DebugCommand::bInjectVariableParameter");
static_assert(offsetof(UFortSettingDataSourceModel_DebugCommand, VariableParameterArgumentPosition) == 84, "Offset mismatch for UFortSettingDataSourceModel_DebugCommand::VariableParameterArgumentPosition");

// /Script/CustomDebugCommandsUI.FortSettingEditCondition_DebugCommandPermissions
// Kind: Class; super: FortSettingEditCondition
class UFortSettingEditCondition_DebugCommandPermissions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomDebugCommandsUI.SettingAnalyticsAggregator_CustomDebugCommands
// Kind: Class; super: SettingAnalyticsAggregatorBase
class USettingAnalyticsAggregator_CustomDebugCommands
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TWeakObjectPtr<void> OwningOrchestrator; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USettingAnalyticsAggregator_CustomDebugCommands, OwningOrchestrator) == 88, "Offset mismatch for USettingAnalyticsAggregator_CustomDebugCommands::OwningOrchestrator");

// /Script/CustomDebugCommandsUI.SettingRegistryPermissionRequirement_DebugCommands
// Kind: Class; super: SettingRegistryPermissionRequirement
class USettingRegistryPermissionRequirement_DebugCommands
{
public:
    std::uint8_t Opaque[1];
};
