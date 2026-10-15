/**
 * decamp dumper generated SDK
 * Package: /Script/CustomizableUIClient
 */
#pragma once
#include "Basic.h"

// /Script/CustomizableUIClient.AvailableInstanceTargetingScenes
// Kind: ScriptStruct; super: none
struct FAvailableInstanceTargetingScenes
{
public:
    TArray<void*> BaseAllows; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BaseUnallows; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    void* CurrentGeneratedScene; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAvailableInstanceTargetingScenes, BaseAllows) == 0, "Offset mismatch for FAvailableInstanceTargetingScenes::BaseAllows");
static_assert(offsetof(FAvailableInstanceTargetingScenes, BaseUnallows) == 16, "Offset mismatch for FAvailableInstanceTargetingScenes::BaseUnallows");
static_assert(offsetof(FAvailableInstanceTargetingScenes, CurrentGeneratedScene) == 32, "Offset mismatch for FAvailableInstanceTargetingScenes::CurrentGeneratedScene");

// /Script/CustomizableUIClient.CreatedCustomizedWidget
// Kind: ScriptStruct; super: none
struct FCreatedCustomizedWidget
{
public:
    std::uint8_t WidgetId[0xC8]; // 0x0000 (Size: 0xC8, Type: StructProperty)
    void* CreatedWidget; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCreatedCustomizedWidget, WidgetId) == 0, "Offset mismatch for FCreatedCustomizedWidget::WidgetId");
static_assert(offsetof(FCreatedCustomizedWidget, CreatedWidget) == 200, "Offset mismatch for FCreatedCustomizedWidget::CreatedWidget");

// /Script/CustomizableUIClient.CustomLayoutProfile
// Kind: ScriptStruct; super: none
struct FCustomLayoutProfile
{
public:
    std::uint8_t ModificationsContainer[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t BaseLayoutPreset[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    std::uint8_t LayoutProfileId[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    FString Name; // 0x0050 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCustomLayoutProfile, ModificationsContainer) == 0, "Offset mismatch for FCustomLayoutProfile::ModificationsContainer");
static_assert(offsetof(FCustomLayoutProfile, BaseLayoutPreset) == 16, "Offset mismatch for FCustomLayoutProfile::BaseLayoutPreset");
static_assert(offsetof(FCustomLayoutProfile, LayoutProfileId) == 64, "Offset mismatch for FCustomLayoutProfile::LayoutProfileId");
static_assert(offsetof(FCustomLayoutProfile, Name) == 80, "Offset mismatch for FCustomLayoutProfile::Name");

// /Script/CustomizableUIClient.DynamicUIAllowWithDefaultScene
// Kind: ScriptStruct; super: none
struct FDynamicUIAllowWithDefaultScene
{
public:
    std::uint8_t Allow[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    TSoftObjectPtr<void> OwningCustomizableScene; // 0x0070 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FDynamicUIAllowWithDefaultScene, Allow) == 0, "Offset mismatch for FDynamicUIAllowWithDefaultScene::Allow");
static_assert(offsetof(FDynamicUIAllowWithDefaultScene, OwningCustomizableScene) == 112, "Offset mismatch for FDynamicUIAllowWithDefaultScene::OwningCustomizableScene");

// /Script/CustomizableUIClient.GeneratedUnallowsForRemovedTargetedWidgetsData
// Kind: ScriptStruct; super: none
struct FGeneratedUnallowsForRemovedTargetedWidgetsData
{
public:
    TArray<void*> AllAllowsToUnallow; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* CurrentGeneratedScene; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGeneratedUnallowsForRemovedTargetedWidgetsData, AllAllowsToUnallow) == 0, "Offset mismatch for FGeneratedUnallowsForRemovedTargetedWidgetsData::AllAllowsToUnallow");
static_assert(offsetof(FGeneratedUnallowsForRemovedTargetedWidgetsData, CurrentGeneratedScene) == 16, "Offset mismatch for FGeneratedUnallowsForRemovedTargetedWidgetsData::CurrentGeneratedScene");

// /Script/CustomizableUIClient.LayoutPresetId
// Kind: ScriptStruct; super: none
struct FLayoutPresetId
{
public:
    std::uint8_t LayoutPreset[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ResolutionGuid[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLayoutPresetId, LayoutPreset) == 0, "Offset mismatch for FLayoutPresetId::LayoutPreset");
static_assert(offsetof(FLayoutPresetId, ResolutionGuid) == 32, "Offset mismatch for FLayoutPresetId::ResolutionGuid");

// /Script/CustomizableUIClient.SerializedLayoutProfileId
// Kind: ScriptStruct; super: none
struct FSerializedLayoutProfileId
{
public:
    std::uint8_t LayoutPresetId[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t CustomLayoutProfileId[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsPreset; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSerializedLayoutProfileId, LayoutPresetId) == 0, "Offset mismatch for FSerializedLayoutProfileId::LayoutPresetId");
static_assert(offsetof(FSerializedLayoutProfileId, CustomLayoutProfileId) == 48, "Offset mismatch for FSerializedLayoutProfileId::CustomLayoutProfileId");
static_assert(offsetof(FSerializedLayoutProfileId, bIsPreset) == 64, "Offset mismatch for FSerializedLayoutProfileId::bIsPreset");

// /Script/CustomizableUIClient.ControlPanelWidget
// Kind: Class; super: CommonUserWidget
class UControlPanelWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    float PanelOpacityWhenDragedOver; // 0x0330 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8C]; // 0x0334
    void* LayoutProfileManager; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Save; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* Button_RevertAll; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Exit; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_OpenProfileSelectionPanel; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_SwitchContexts; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_SwitchProperties; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* GridSnapOption_Controls; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Controls; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    void* UISceneSelector; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    void* PropertyPanel_WidgetProperties; // 0x0410 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UControlPanelWidget, PanelOpacityWhenDragedOver) == 816, "Offset mismatch for UControlPanelWidget::PanelOpacityWhenDragedOver");
static_assert(offsetof(UControlPanelWidget, LayoutProfileManager) == 960, "Offset mismatch for UControlPanelWidget::LayoutProfileManager");
static_assert(offsetof(UControlPanelWidget, Button_Save) == 968, "Offset mismatch for UControlPanelWidget::Button_Save");
static_assert(offsetof(UControlPanelWidget, Button_RevertAll) == 976, "Offset mismatch for UControlPanelWidget::Button_RevertAll");
static_assert(offsetof(UControlPanelWidget, Button_Exit) == 984, "Offset mismatch for UControlPanelWidget::Button_Exit");
static_assert(offsetof(UControlPanelWidget, Button_OpenProfileSelectionPanel) == 992, "Offset mismatch for UControlPanelWidget::Button_OpenProfileSelectionPanel");
static_assert(offsetof(UControlPanelWidget, Button_SwitchContexts) == 1000, "Offset mismatch for UControlPanelWidget::Button_SwitchContexts");
static_assert(offsetof(UControlPanelWidget, Button_SwitchProperties) == 1008, "Offset mismatch for UControlPanelWidget::Button_SwitchProperties");
static_assert(offsetof(UControlPanelWidget, GridSnapOption_Controls) == 1016, "Offset mismatch for UControlPanelWidget::GridSnapOption_Controls");
static_assert(offsetof(UControlPanelWidget, Switcher_Controls) == 1024, "Offset mismatch for UControlPanelWidget::Switcher_Controls");
static_assert(offsetof(UControlPanelWidget, UISceneSelector) == 1032, "Offset mismatch for UControlPanelWidget::UISceneSelector");
static_assert(offsetof(UControlPanelWidget, PropertyPanel_WidgetProperties) == 1040, "Offset mismatch for UControlPanelWidget::PropertyPanel_WidgetProperties");

// /Script/CustomizableUIClient.CreateCustomizableWidgetOperation
// Kind: Class; super: DragDropOperation
class UCreateCustomizableWidgetOperation
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t AvailableInstancesPool[0x10]; // 0x0090 (Size: 0x10, Type: SetProperty)
    TSoftObjectPtr<void> Scene; // 0x00A0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UCreateCustomizableWidgetOperation, AvailableInstancesPool) == 144, "Offset mismatch for UCreateCustomizableWidgetOperation::AvailableInstancesPool");
static_assert(offsetof(UCreateCustomizableWidgetOperation, Scene) == 160, "Offset mismatch for UCreateCustomizableWidgetOperation::Scene");

// /Script/CustomizableUIClient.CustomLayoutSelectionPanelWidget
// Kind: Class; super: CommonUserWidget
class UCustomLayoutSelectionPanelWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* LayoutProfileManager; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* HUDLayoutToolPopupClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
    void* HUDLayoutToolTextInputPopupClass; // 0x0340 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NoCustomLayoutSlotsLeftPopupContent[0x48]; // 0x0348 (Size: 0x48, Type: StructProperty)
    std::uint8_t DeleteCustomLayoutPopupContent[0x48]; // 0x0390 (Size: 0x48, Type: StructProperty)
    std::uint8_t RenamePopupContent[0x48]; // 0x03D8 (Size: 0x48, Type: StructProperty)
    void* CustomizableUIRegistry; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0428
    void* EntryBox_Presets; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_CustomLayouts; // 0x0458 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_EmptyCustomLayoutSlots; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    void* Button_Exit; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    void* Button_EditLayout; // 0x0470 (Size: 0x8, Type: ObjectProperty)
    void* Button_Convert; // 0x0478 (Size: 0x8, Type: ObjectProperty)
    void* Button_Copy; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    void* Button_Delete; // 0x0488 (Size: 0x8, Type: ObjectProperty)
    void* Button_Rename; // 0x0490 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomLayoutSelectionPanelWidget, LayoutProfileManager) == 816, "Offset mismatch for UCustomLayoutSelectionPanelWidget::LayoutProfileManager");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, HUDLayoutToolPopupClass) == 824, "Offset mismatch for UCustomLayoutSelectionPanelWidget::HUDLayoutToolPopupClass");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, HUDLayoutToolTextInputPopupClass) == 832, "Offset mismatch for UCustomLayoutSelectionPanelWidget::HUDLayoutToolTextInputPopupClass");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, NoCustomLayoutSlotsLeftPopupContent) == 840, "Offset mismatch for UCustomLayoutSelectionPanelWidget::NoCustomLayoutSlotsLeftPopupContent");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, DeleteCustomLayoutPopupContent) == 912, "Offset mismatch for UCustomLayoutSelectionPanelWidget::DeleteCustomLayoutPopupContent");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, RenamePopupContent) == 984, "Offset mismatch for UCustomLayoutSelectionPanelWidget::RenamePopupContent");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, CustomizableUIRegistry) == 1056, "Offset mismatch for UCustomLayoutSelectionPanelWidget::CustomizableUIRegistry");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, EntryBox_Presets) == 1104, "Offset mismatch for UCustomLayoutSelectionPanelWidget::EntryBox_Presets");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, EntryBox_CustomLayouts) == 1112, "Offset mismatch for UCustomLayoutSelectionPanelWidget::EntryBox_CustomLayouts");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, EntryBox_EmptyCustomLayoutSlots) == 1120, "Offset mismatch for UCustomLayoutSelectionPanelWidget::EntryBox_EmptyCustomLayoutSlots");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, Button_Exit) == 1128, "Offset mismatch for UCustomLayoutSelectionPanelWidget::Button_Exit");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, Button_EditLayout) == 1136, "Offset mismatch for UCustomLayoutSelectionPanelWidget::Button_EditLayout");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, Button_Convert) == 1144, "Offset mismatch for UCustomLayoutSelectionPanelWidget::Button_Convert");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, Button_Copy) == 1152, "Offset mismatch for UCustomLayoutSelectionPanelWidget::Button_Copy");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, Button_Delete) == 1160, "Offset mismatch for UCustomLayoutSelectionPanelWidget::Button_Delete");
static_assert(offsetof(UCustomLayoutSelectionPanelWidget, Button_Rename) == 1168, "Offset mismatch for UCustomLayoutSelectionPanelWidget::Button_Rename");

// /Script/CustomizableUIClient.CustomizableCoreDirector
// Kind: Class; super: DynamicUIDirectorBase
class UCustomizableCoreDirector
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> DefaultScenes; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnabledDuringReplay; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    TArray<void*> ScenesManuallyAdded; // 0x0290 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCustomizableCoreDirector, DefaultScenes) == 624, "Offset mismatch for UCustomizableCoreDirector::DefaultScenes");
static_assert(offsetof(UCustomizableCoreDirector, OwningLocalPlayer) == 640, "Offset mismatch for UCustomizableCoreDirector::OwningLocalPlayer");
static_assert(offsetof(UCustomizableCoreDirector, bEnabledDuringReplay) == 648, "Offset mismatch for UCustomizableCoreDirector::bEnabledDuringReplay");
static_assert(offsetof(UCustomizableCoreDirector, ScenesManuallyAdded) == 656, "Offset mismatch for UCustomizableCoreDirector::ScenesManuallyAdded");

// /Script/CustomizableUIClient.CustomizableLayoutPresetCollection
// Kind: Class; super: DataAsset
class UCustomizableLayoutPresetCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DefaultLayoutPreset[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t AdditionalLayoutPresets[0x10]; // 0x0058 (Size: 0x10, Type: SetProperty)
    std::uint8_t bIsDevelopmentOnly; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomizableLayoutPresetCollection, DefaultLayoutPreset) == 40, "Offset mismatch for UCustomizableLayoutPresetCollection::DefaultLayoutPreset");
static_assert(offsetof(UCustomizableLayoutPresetCollection, AdditionalLayoutPresets) == 88, "Offset mismatch for UCustomizableLayoutPresetCollection::AdditionalLayoutPresets");
static_assert(offsetof(UCustomizableLayoutPresetCollection, bIsDevelopmentOnly) == 104, "Offset mismatch for UCustomizableLayoutPresetCollection::bIsDevelopmentOnly");

// /Script/CustomizableUIClient.CustomizableProperty
// Kind: Class; super: MVVMViewModelBase
class UCustomizableProperty
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> EditConditions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DisplayName[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    FString DevName; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UCustomizableProperty, EditConditions) == 104, "Offset mismatch for UCustomizableProperty::EditConditions");
static_assert(offsetof(UCustomizableProperty, DisplayName) == 120, "Offset mismatch for UCustomizableProperty::DisplayName");
static_assert(offsetof(UCustomizableProperty, DevName) == 136, "Offset mismatch for UCustomizableProperty::DevName");

// /Script/CustomizableUIClient.CustomizablePropertyExcludeCondition
// Kind: Class; super: Object
class UCustomizablePropertyExcludeCondition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableUIClient.CustomizableProperty_Bool
// Kind: Class; super: CustomizableProperty
class UCustomizableProperty_Bool
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t DefaultValue; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentValue; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x009A
    TMap<void*, void*> PerPresetDefaultValueOverrides; // 0x00A0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCustomizableProperty_Bool, DefaultValue) == 152, "Offset mismatch for UCustomizableProperty_Bool::DefaultValue");
static_assert(offsetof(UCustomizableProperty_Bool, CurrentValue) == 153, "Offset mismatch for UCustomizableProperty_Bool::CurrentValue");
static_assert(offsetof(UCustomizableProperty_Bool, PerPresetDefaultValueOverrides) == 160, "Offset mismatch for UCustomizableProperty_Bool::PerPresetDefaultValueOverrides");

// /Script/CustomizableUIClient.CustomizableProperty_ComboSlotType
// Kind: Class; super: CustomizableProperty_Int
class UCustomizableProperty_ComboSlotType
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t DefaultValue; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CurrentValue; // 0x0099 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x009A
    TMap<void*, void*> Options; // 0x00A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerPresetDefaultValueOverrides; // 0x00B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCustomizableProperty_ComboSlotType, DefaultValue) == 152, "Offset mismatch for UCustomizableProperty_ComboSlotType::DefaultValue");
static_assert(offsetof(UCustomizableProperty_ComboSlotType, CurrentValue) == 153, "Offset mismatch for UCustomizableProperty_ComboSlotType::CurrentValue");
static_assert(offsetof(UCustomizableProperty_ComboSlotType, Options) == 160, "Offset mismatch for UCustomizableProperty_ComboSlotType::Options");
static_assert(offsetof(UCustomizableProperty_ComboSlotType, PerPresetDefaultValueOverrides) == 176, "Offset mismatch for UCustomizableProperty_ComboSlotType::PerPresetDefaultValueOverrides");

// /Script/CustomizableUIClient.CustomizableProperty_Discrete
// Kind: Class; super: CustomizableProperty_Int
class UCustomizableProperty_Discrete
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::int32_t DefaultValue; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    TMap<void*, void*> PerPresetDefaultValueOverrides; // 0x00A0 (Size: 0x10, Type: MapProperty)
    std::int32_t CurrentValue; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00B4
    TMap<void*, void*> Options; // 0x00B8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCustomizableProperty_Discrete, DefaultValue) == 152, "Offset mismatch for UCustomizableProperty_Discrete::DefaultValue");
static_assert(offsetof(UCustomizableProperty_Discrete, PerPresetDefaultValueOverrides) == 160, "Offset mismatch for UCustomizableProperty_Discrete::PerPresetDefaultValueOverrides");
static_assert(offsetof(UCustomizableProperty_Discrete, CurrentValue) == 176, "Offset mismatch for UCustomizableProperty_Discrete::CurrentValue");
static_assert(offsetof(UCustomizableProperty_Discrete, Options) == 184, "Offset mismatch for UCustomizableProperty_Discrete::Options");

// /Script/CustomizableUIClient.CustomizableProperty_Float
// Kind: Class; super: CustomizableProperty
class UCustomizableProperty_Float
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    float DefaultValue; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float LowerBound; // 0x009C (Size: 0x4, Type: FloatProperty)
    float UpperBound; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float StepSize; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FormatStyle; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    float CurrentValue; // 0x00AC (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> PerPresetDefaultValueOverrides; // 0x00B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCustomizableProperty_Float, DefaultValue) == 152, "Offset mismatch for UCustomizableProperty_Float::DefaultValue");
static_assert(offsetof(UCustomizableProperty_Float, LowerBound) == 156, "Offset mismatch for UCustomizableProperty_Float::LowerBound");
static_assert(offsetof(UCustomizableProperty_Float, UpperBound) == 160, "Offset mismatch for UCustomizableProperty_Float::UpperBound");
static_assert(offsetof(UCustomizableProperty_Float, StepSize) == 164, "Offset mismatch for UCustomizableProperty_Float::StepSize");
static_assert(offsetof(UCustomizableProperty_Float, FormatStyle) == 168, "Offset mismatch for UCustomizableProperty_Float::FormatStyle");
static_assert(offsetof(UCustomizableProperty_Float, CurrentValue) == 172, "Offset mismatch for UCustomizableProperty_Float::CurrentValue");
static_assert(offsetof(UCustomizableProperty_Float, PerPresetDefaultValueOverrides) == 176, "Offset mismatch for UCustomizableProperty_Float::PerPresetDefaultValueOverrides");

// /Script/CustomizableUIClient.CustomizableProperty_Int
// Kind: Class; super: CustomizableProperty
class UCustomizableProperty_Int
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> EditConditions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DisplayName[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    FString DevName; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UCustomizableProperty_Int, EditConditions) == 104, "Offset mismatch for UCustomizableProperty_Int::EditConditions");
static_assert(offsetof(UCustomizableProperty_Int, DisplayName) == 120, "Offset mismatch for UCustomizableProperty_Int::DisplayName");
static_assert(offsetof(UCustomizableProperty_Int, DevName) == 136, "Offset mismatch for UCustomizableProperty_Int::DevName");

// /Script/CustomizableUIClient.CustomizableProperty_QuickbarLocks
// Kind: Class; super: CustomizableProperty_Int
class UCustomizableProperty_QuickbarLocks
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::int32_t DefaultValue; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    TMap<void*, void*> PerPresetDefaultValueOverrides; // 0x00A0 (Size: 0x10, Type: MapProperty)
    std::int32_t CurrentValue; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaximumDisplayedOptions; // 0x00B4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomizableProperty_QuickbarLocks, DefaultValue) == 152, "Offset mismatch for UCustomizableProperty_QuickbarLocks::DefaultValue");
static_assert(offsetof(UCustomizableProperty_QuickbarLocks, PerPresetDefaultValueOverrides) == 160, "Offset mismatch for UCustomizableProperty_QuickbarLocks::PerPresetDefaultValueOverrides");
static_assert(offsetof(UCustomizableProperty_QuickbarLocks, CurrentValue) == 176, "Offset mismatch for UCustomizableProperty_QuickbarLocks::CurrentValue");
static_assert(offsetof(UCustomizableProperty_QuickbarLocks, MaximumDisplayedOptions) == 180, "Offset mismatch for UCustomizableProperty_QuickbarLocks::MaximumDisplayedOptions");

// /Script/CustomizableUIClient.CustomizableUICategoryWidget
// Kind: Class; super: CommonUserWidget
class UCustomizableUICategoryWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Text_CategoryName; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_UIModeCategoryButtons; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableUICategoryWidget, Text_CategoryName) == 816, "Offset mismatch for UCustomizableUICategoryWidget::Text_CategoryName");
static_assert(offsetof(UCustomizableUICategoryWidget, EntryBox_UIModeCategoryButtons) == 824, "Offset mismatch for UCustomizableUICategoryWidget::EntryBox_UIModeCategoryButtons");

// /Script/CustomizableUIClient.CustomizableUIClientSettingRecordPartition
// Kind: Class; super: FortClientSettingRecordPartition
class UCustomizableUIClientSettingRecordPartition
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t FallbackActiveLayoutProfile[0x50]; // 0x0040 (Size: 0x50, Type: OptionalProperty)
    TArray<void*> CustomLayoutProfiles; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCustomizableUIClientSettingRecordPartition, FallbackActiveLayoutProfile) == 64, "Offset mismatch for UCustomizableUIClientSettingRecordPartition::FallbackActiveLayoutProfile");
static_assert(offsetof(UCustomizableUIClientSettingRecordPartition, CustomLayoutProfiles) == 144, "Offset mismatch for UCustomizableUIClientSettingRecordPartition::CustomLayoutProfiles");

// /Script/CustomizableUIClient.CustomizableUIDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UCustomizableUIDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultLayoutPresetCollection[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AdditionalLayoutPresetCollections[0x10]; // 0x0050 (Size: 0x10, Type: SetProperty)
    std::int32_t MaxCustomLayoutProfileSaveSlots; // 0x0060 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomizableUIDeveloperSettings, DefaultLayoutPresetCollection) == 48, "Offset mismatch for UCustomizableUIDeveloperSettings::DefaultLayoutPresetCollection");
static_assert(offsetof(UCustomizableUIDeveloperSettings, AdditionalLayoutPresetCollections) == 80, "Offset mismatch for UCustomizableUIDeveloperSettings::AdditionalLayoutPresetCollections");
static_assert(offsetof(UCustomizableUIDeveloperSettings, MaxCustomLayoutProfileSaveSlots) == 96, "Offset mismatch for UCustomizableUIDeveloperSettings::MaxCustomLayoutProfileSaveSlots");

// /Script/CustomizableUIClient.CustomizableUIEditor
// Kind: Class; super: CommonActivatablePanelLegacy
class UCustomizableUIEditor
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    float OverlapPercentageToColapsePanels; // 0x0568 (Size: 0x4, Type: FloatProperty)
    float NonEditableHUDWidgetOpacity; // 0x056C (Size: 0x4, Type: FloatProperty)
    float PanelOpacityWhenDragedOver; // 0x0570 (Size: 0x4, Type: FloatProperty)
    float OnOpenSubPanelAnimPlaybackSpeed; // 0x0574 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PrimaryContentSetup[0x8]; // 0x0578 (Size: 0x8, Type: StructProperty)
    void* CustomizableUIDatabase; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* HUDLayoutToolPopupClass; // 0x0588 (Size: 0x8, Type: ClassProperty)
    void* HudLayoutToolTutorialPopupClass; // 0x0590 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ExitHudLayoutToolPopupContent[0x48]; // 0x0598 (Size: 0x48, Type: StructProperty)
    std::uint8_t DeleteOutOfBoundsHUDProxiesPopupContent[0x48]; // 0x05E0 (Size: 0x48, Type: StructProperty)
    std::uint8_t RevertAllProxiesPopupContent[0x48]; // 0x0628 (Size: 0x48, Type: StructProperty)
    std::uint8_t SwitchHUDProfileSavePopupContent[0x48]; // 0x0670 (Size: 0x48, Type: StructProperty)
    std::uint8_t SwitchHUDProfileDeletePopupContent[0x48]; // 0x06B8 (Size: 0x48, Type: StructProperty)
    std::uint8_t CreateNewCustomLayoutPopupContent[0x48]; // 0x0700 (Size: 0x48, Type: StructProperty)
    std::uint8_t CustomLayoutSlotsFullPopupContent[0x48]; // 0x0748 (Size: 0x48, Type: StructProperty)
    std::uint8_t SuccessToasterContent[0x28]; // 0x0790 (Size: 0x28, Type: StructProperty)
    std::uint8_t FailureToasterContent[0x28]; // 0x07B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LocalFailureToasterContent[0x28]; // 0x07E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CloudFailureToasterContent[0x28]; // 0x0808 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnchorsCustomPropertyTag[0x4]; // 0x0830 (Size: 0x4, Type: StructProperty)
    float DoubleClickDelay; // 0x0834 (Size: 0x4, Type: FloatProperty)
    void* VisibleSceneSet; // 0x0838 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CurrentlyVisibleScenes; // 0x0840 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x78]; // 0x0850
    TArray<void*> QueuedPopups; // 0x08C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x28]; // 0x08D8
    void* LayoutProfileManager; // 0x0900 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x68]; // 0x0908
    void* VirtualCanvas_WidgetLayer; // 0x0970 (Size: 0x8, Type: ObjectProperty)
    void* CustomizableUIPreviewLayer; // 0x0978 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_VirtualCanvasWorkspace; // 0x0980 (Size: 0x8, Type: ObjectProperty)
    void* Grid_Visual; // 0x0988 (Size: 0x8, Type: ObjectProperty)
    void* Text_ProfileName; // 0x0990 (Size: 0x8, Type: ObjectProperty)
    void* Text_WidgetName; // 0x0998 (Size: 0x8, Type: ObjectProperty)
    void* Text_ContextName; // 0x09A0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Exit; // 0x09A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_ResetVirtualCanvas; // 0x09B0 (Size: 0x8, Type: ObjectProperty)
    void* Button_ToggleControlPanel; // 0x09B8 (Size: 0x8, Type: ObjectProperty)
    void* Button_ToggleWidgetCatalog; // 0x09C0 (Size: 0x8, Type: ObjectProperty)
    void* CanvasPanel_ControlsContainer; // 0x09C8 (Size: 0x8, Type: ObjectProperty)
    void* VerticalBox_ControlPanelContainer; // 0x09D0 (Size: 0x8, Type: ObjectProperty)
    void* ControlPanel_Controls; // 0x09D8 (Size: 0x8, Type: ObjectProperty)
    void* ProfileSelectionPanel_Profiles; // 0x09E0 (Size: 0x8, Type: ObjectProperty)
    void* WidgetCatalog_Catalog; // 0x09E8 (Size: 0x8, Type: ObjectProperty)
    void* LinkAcrossPanel_LinkManagementWindow; // 0x09F0 (Size: 0x8, Type: ObjectProperty)
    void* Anim_ControlPanelToggle; // 0x09F8 (Size: 0x8, Type: ObjectProperty)
    void* Anim_ToggleWidgetCatalog; // 0x0A00 (Size: 0x8, Type: ObjectProperty)
    void* Toaster_Notifications; // 0x0A08 (Size: 0x8, Type: ObjectProperty)
    void* TooltipLayer_Messages; // 0x0A10 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_ToolMainOverlay; // 0x0A18 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableUIEditor, OverlapPercentageToColapsePanels) == 1384, "Offset mismatch for UCustomizableUIEditor::OverlapPercentageToColapsePanels");
static_assert(offsetof(UCustomizableUIEditor, NonEditableHUDWidgetOpacity) == 1388, "Offset mismatch for UCustomizableUIEditor::NonEditableHUDWidgetOpacity");
static_assert(offsetof(UCustomizableUIEditor, PanelOpacityWhenDragedOver) == 1392, "Offset mismatch for UCustomizableUIEditor::PanelOpacityWhenDragedOver");
static_assert(offsetof(UCustomizableUIEditor, OnOpenSubPanelAnimPlaybackSpeed) == 1396, "Offset mismatch for UCustomizableUIEditor::OnOpenSubPanelAnimPlaybackSpeed");
static_assert(offsetof(UCustomizableUIEditor, PrimaryContentSetup) == 1400, "Offset mismatch for UCustomizableUIEditor::PrimaryContentSetup");
static_assert(offsetof(UCustomizableUIEditor, CustomizableUIDatabase) == 1408, "Offset mismatch for UCustomizableUIEditor::CustomizableUIDatabase");
static_assert(offsetof(UCustomizableUIEditor, HUDLayoutToolPopupClass) == 1416, "Offset mismatch for UCustomizableUIEditor::HUDLayoutToolPopupClass");
static_assert(offsetof(UCustomizableUIEditor, HudLayoutToolTutorialPopupClass) == 1424, "Offset mismatch for UCustomizableUIEditor::HudLayoutToolTutorialPopupClass");
static_assert(offsetof(UCustomizableUIEditor, ExitHudLayoutToolPopupContent) == 1432, "Offset mismatch for UCustomizableUIEditor::ExitHudLayoutToolPopupContent");
static_assert(offsetof(UCustomizableUIEditor, DeleteOutOfBoundsHUDProxiesPopupContent) == 1504, "Offset mismatch for UCustomizableUIEditor::DeleteOutOfBoundsHUDProxiesPopupContent");
static_assert(offsetof(UCustomizableUIEditor, RevertAllProxiesPopupContent) == 1576, "Offset mismatch for UCustomizableUIEditor::RevertAllProxiesPopupContent");
static_assert(offsetof(UCustomizableUIEditor, SwitchHUDProfileSavePopupContent) == 1648, "Offset mismatch for UCustomizableUIEditor::SwitchHUDProfileSavePopupContent");
static_assert(offsetof(UCustomizableUIEditor, SwitchHUDProfileDeletePopupContent) == 1720, "Offset mismatch for UCustomizableUIEditor::SwitchHUDProfileDeletePopupContent");
static_assert(offsetof(UCustomizableUIEditor, CreateNewCustomLayoutPopupContent) == 1792, "Offset mismatch for UCustomizableUIEditor::CreateNewCustomLayoutPopupContent");
static_assert(offsetof(UCustomizableUIEditor, CustomLayoutSlotsFullPopupContent) == 1864, "Offset mismatch for UCustomizableUIEditor::CustomLayoutSlotsFullPopupContent");
static_assert(offsetof(UCustomizableUIEditor, SuccessToasterContent) == 1936, "Offset mismatch for UCustomizableUIEditor::SuccessToasterContent");
static_assert(offsetof(UCustomizableUIEditor, FailureToasterContent) == 1976, "Offset mismatch for UCustomizableUIEditor::FailureToasterContent");
static_assert(offsetof(UCustomizableUIEditor, LocalFailureToasterContent) == 2016, "Offset mismatch for UCustomizableUIEditor::LocalFailureToasterContent");
static_assert(offsetof(UCustomizableUIEditor, CloudFailureToasterContent) == 2056, "Offset mismatch for UCustomizableUIEditor::CloudFailureToasterContent");
static_assert(offsetof(UCustomizableUIEditor, AnchorsCustomPropertyTag) == 2096, "Offset mismatch for UCustomizableUIEditor::AnchorsCustomPropertyTag");
static_assert(offsetof(UCustomizableUIEditor, DoubleClickDelay) == 2100, "Offset mismatch for UCustomizableUIEditor::DoubleClickDelay");
static_assert(offsetof(UCustomizableUIEditor, VisibleSceneSet) == 2104, "Offset mismatch for UCustomizableUIEditor::VisibleSceneSet");
static_assert(offsetof(UCustomizableUIEditor, CurrentlyVisibleScenes) == 2112, "Offset mismatch for UCustomizableUIEditor::CurrentlyVisibleScenes");
static_assert(offsetof(UCustomizableUIEditor, QueuedPopups) == 2248, "Offset mismatch for UCustomizableUIEditor::QueuedPopups");
static_assert(offsetof(UCustomizableUIEditor, LayoutProfileManager) == 2304, "Offset mismatch for UCustomizableUIEditor::LayoutProfileManager");
static_assert(offsetof(UCustomizableUIEditor, VirtualCanvas_WidgetLayer) == 2416, "Offset mismatch for UCustomizableUIEditor::VirtualCanvas_WidgetLayer");
static_assert(offsetof(UCustomizableUIEditor, CustomizableUIPreviewLayer) == 2424, "Offset mismatch for UCustomizableUIEditor::CustomizableUIPreviewLayer");
static_assert(offsetof(UCustomizableUIEditor, Overlay_VirtualCanvasWorkspace) == 2432, "Offset mismatch for UCustomizableUIEditor::Overlay_VirtualCanvasWorkspace");
static_assert(offsetof(UCustomizableUIEditor, Grid_Visual) == 2440, "Offset mismatch for UCustomizableUIEditor::Grid_Visual");
static_assert(offsetof(UCustomizableUIEditor, Text_ProfileName) == 2448, "Offset mismatch for UCustomizableUIEditor::Text_ProfileName");
static_assert(offsetof(UCustomizableUIEditor, Text_WidgetName) == 2456, "Offset mismatch for UCustomizableUIEditor::Text_WidgetName");
static_assert(offsetof(UCustomizableUIEditor, Text_ContextName) == 2464, "Offset mismatch for UCustomizableUIEditor::Text_ContextName");
static_assert(offsetof(UCustomizableUIEditor, Button_Exit) == 2472, "Offset mismatch for UCustomizableUIEditor::Button_Exit");
static_assert(offsetof(UCustomizableUIEditor, Button_ResetVirtualCanvas) == 2480, "Offset mismatch for UCustomizableUIEditor::Button_ResetVirtualCanvas");
static_assert(offsetof(UCustomizableUIEditor, Button_ToggleControlPanel) == 2488, "Offset mismatch for UCustomizableUIEditor::Button_ToggleControlPanel");
static_assert(offsetof(UCustomizableUIEditor, Button_ToggleWidgetCatalog) == 2496, "Offset mismatch for UCustomizableUIEditor::Button_ToggleWidgetCatalog");
static_assert(offsetof(UCustomizableUIEditor, CanvasPanel_ControlsContainer) == 2504, "Offset mismatch for UCustomizableUIEditor::CanvasPanel_ControlsContainer");
static_assert(offsetof(UCustomizableUIEditor, VerticalBox_ControlPanelContainer) == 2512, "Offset mismatch for UCustomizableUIEditor::VerticalBox_ControlPanelContainer");
static_assert(offsetof(UCustomizableUIEditor, ControlPanel_Controls) == 2520, "Offset mismatch for UCustomizableUIEditor::ControlPanel_Controls");
static_assert(offsetof(UCustomizableUIEditor, ProfileSelectionPanel_Profiles) == 2528, "Offset mismatch for UCustomizableUIEditor::ProfileSelectionPanel_Profiles");
static_assert(offsetof(UCustomizableUIEditor, WidgetCatalog_Catalog) == 2536, "Offset mismatch for UCustomizableUIEditor::WidgetCatalog_Catalog");
static_assert(offsetof(UCustomizableUIEditor, LinkAcrossPanel_LinkManagementWindow) == 2544, "Offset mismatch for UCustomizableUIEditor::LinkAcrossPanel_LinkManagementWindow");
static_assert(offsetof(UCustomizableUIEditor, Anim_ControlPanelToggle) == 2552, "Offset mismatch for UCustomizableUIEditor::Anim_ControlPanelToggle");
static_assert(offsetof(UCustomizableUIEditor, Anim_ToggleWidgetCatalog) == 2560, "Offset mismatch for UCustomizableUIEditor::Anim_ToggleWidgetCatalog");
static_assert(offsetof(UCustomizableUIEditor, Toaster_Notifications) == 2568, "Offset mismatch for UCustomizableUIEditor::Toaster_Notifications");
static_assert(offsetof(UCustomizableUIEditor, TooltipLayer_Messages) == 2576, "Offset mismatch for UCustomizableUIEditor::TooltipLayer_Messages");
static_assert(offsetof(UCustomizableUIEditor, Overlay_ToolMainOverlay) == 2584, "Offset mismatch for UCustomizableUIEditor::Overlay_ToolMainOverlay");

// /Script/CustomizableUIClient.CustomizableUIGameFeatureAliasButton
// Kind: Class; super: CustomizableUISceneSetButton
class UCustomizableUIGameFeatureAliasButton
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* EntryBox_UISceneSetEntries; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableUIGameFeatureAliasButton, EntryBox_UISceneSetEntries) == 816, "Offset mismatch for UCustomizableUIGameFeatureAliasButton::EntryBox_UISceneSetEntries");

// /Script/CustomizableUIClient.CustomizableUIGameFeatureAliasButtonViewModel
// Kind: Class; super: CustomizableUISceneSetButtonViewModel
class UCustomizableUIGameFeatureAliasButtonViewModel
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* GameFeatureAlias; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SceneSetCount; // 0x00B0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SelectedSceneSetCount; // 0x00B1 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00B2
    TMap<void*, void*> ChildrenSceneSetToViewModelMap; // 0x00B8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCustomizableUIGameFeatureAliasButtonViewModel, GameFeatureAlias) == 168, "Offset mismatch for UCustomizableUIGameFeatureAliasButtonViewModel::GameFeatureAlias");
static_assert(offsetof(UCustomizableUIGameFeatureAliasButtonViewModel, SceneSetCount) == 176, "Offset mismatch for UCustomizableUIGameFeatureAliasButtonViewModel::SceneSetCount");
static_assert(offsetof(UCustomizableUIGameFeatureAliasButtonViewModel, SelectedSceneSetCount) == 177, "Offset mismatch for UCustomizableUIGameFeatureAliasButtonViewModel::SelectedSceneSetCount");
static_assert(offsetof(UCustomizableUIGameFeatureAliasButtonViewModel, ChildrenSceneSetToViewModelMap) == 184, "Offset mismatch for UCustomizableUIGameFeatureAliasButtonViewModel::ChildrenSceneSetToViewModelMap");

// /Script/CustomizableUIClient.CustomizableUIGameUserSettings
// Kind: Class; super: Object
class UCustomizableUIGameUserSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ActiveLayoutProfileId[0x1]; // 0x0028 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UCustomizableUIGameUserSettings, ActiveLayoutProfileId) == 40, "Offset mismatch for UCustomizableUIGameUserSettings::ActiveLayoutProfileId");

// /Script/CustomizableUIClient.CustomizableUIManager
// Kind: Class; super: FortLocalPlayerSubsystem
class UCustomizableUIManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* CustomizableUIDatabase; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0038
    void* DynamicUIManagerProxyAdapter; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* LayoutProfileManager; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* ActiveLayoutPresetCollection; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* SceneDrivers; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableUIManager, CustomizableUIDatabase) == 48, "Offset mismatch for UCustomizableUIManager::CustomizableUIDatabase");
static_assert(offsetof(UCustomizableUIManager, DynamicUIManagerProxyAdapter) == 88, "Offset mismatch for UCustomizableUIManager::DynamicUIManagerProxyAdapter");
static_assert(offsetof(UCustomizableUIManager, LayoutProfileManager) == 96, "Offset mismatch for UCustomizableUIManager::LayoutProfileManager");
static_assert(offsetof(UCustomizableUIManager, ActiveLayoutPresetCollection) == 104, "Offset mismatch for UCustomizableUIManager::ActiveLayoutPresetCollection");
static_assert(offsetof(UCustomizableUIManager, SceneDrivers) == 112, "Offset mismatch for UCustomizableUIManager::SceneDrivers");

// /Script/CustomizableUIClient.CustomizableUIPreviewLayer
// Kind: Class; super: UserWidget
class UCustomizableUIPreviewLayer
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    void* CustomizableUIDatabase; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* CustomizableUIManager; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* LayoutProfileManager; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SelectedWidgetHighlight[0x20]; // 0x0330 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> OutOfBoundsWidgetHighlight; // 0x0350 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t Pad_0001[0xA8]; // 0x0378
    TArray<void*> ActiveLoadedScenesOwning; // 0x0420 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0430
    void* GeneratedProxyReplacementsScene; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    void* SelectedWidgetAdjustmentsScene; // 0x0448 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableUIPreviewLayer, CustomizableUIDatabase) == 792, "Offset mismatch for UCustomizableUIPreviewLayer::CustomizableUIDatabase");
static_assert(offsetof(UCustomizableUIPreviewLayer, CustomizableUIManager) == 800, "Offset mismatch for UCustomizableUIPreviewLayer::CustomizableUIManager");
static_assert(offsetof(UCustomizableUIPreviewLayer, LayoutProfileManager) == 808, "Offset mismatch for UCustomizableUIPreviewLayer::LayoutProfileManager");
static_assert(offsetof(UCustomizableUIPreviewLayer, SelectedWidgetHighlight) == 816, "Offset mismatch for UCustomizableUIPreviewLayer::SelectedWidgetHighlight");
static_assert(offsetof(UCustomizableUIPreviewLayer, OutOfBoundsWidgetHighlight) == 848, "Offset mismatch for UCustomizableUIPreviewLayer::OutOfBoundsWidgetHighlight");
static_assert(offsetof(UCustomizableUIPreviewLayer, ActiveLoadedScenesOwning) == 1056, "Offset mismatch for UCustomizableUIPreviewLayer::ActiveLoadedScenesOwning");
static_assert(offsetof(UCustomizableUIPreviewLayer, GeneratedProxyReplacementsScene) == 1088, "Offset mismatch for UCustomizableUIPreviewLayer::GeneratedProxyReplacementsScene");
static_assert(offsetof(UCustomizableUIPreviewLayer, SelectedWidgetAdjustmentsScene) == 1096, "Offset mismatch for UCustomizableUIPreviewLayer::SelectedWidgetAdjustmentsScene");

// /Script/CustomizableUIClient.CustomizableUISceneDriver
// Kind: Class; super: Object
class UCustomizableUISceneDriver
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TMap<void*, void*> GeneratedModificationsScenes; // 0x00A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GeneratedAvailableWidgetAllowsScenes; // 0x00B0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GeneratedAvailableInstanceTargetingScenes; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GeneratedUnallowsForRemovedTargetedWidgets; // 0x00D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCustomizableUISceneDriver, GeneratedModificationsScenes) == 160, "Offset mismatch for UCustomizableUISceneDriver::GeneratedModificationsScenes");
static_assert(offsetof(UCustomizableUISceneDriver, GeneratedAvailableWidgetAllowsScenes) == 176, "Offset mismatch for UCustomizableUISceneDriver::GeneratedAvailableWidgetAllowsScenes");
static_assert(offsetof(UCustomizableUISceneDriver, GeneratedAvailableInstanceTargetingScenes) == 192, "Offset mismatch for UCustomizableUISceneDriver::GeneratedAvailableInstanceTargetingScenes");
static_assert(offsetof(UCustomizableUISceneDriver, GeneratedUnallowsForRemovedTargetedWidgets) == 208, "Offset mismatch for UCustomizableUISceneDriver::GeneratedUnallowsForRemovedTargetedWidgets");

// /Script/CustomizableUIClient.CustomizableUISceneSetButton
// Kind: Class; super: CommonUserWidget
class UCustomizableUISceneSetButton
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomizableUISceneSetButton, bDisplayInActionBar) == 776, "Offset mismatch for UCustomizableUISceneSetButton::bDisplayInActionBar");
static_assert(offsetof(UCustomizableUISceneSetButton, bConsumePointerInput) == 777, "Offset mismatch for UCustomizableUISceneSetButton::bConsumePointerInput");

// /Script/CustomizableUIClient.CustomizableUISceneSetButtonViewModel
// Kind: Class; super: MVVMViewModelBase
class UCustomizableUISceneSetButtonViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t CheckBoxState; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsCheckBoxChecked; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGameFeatureAlias; // 0x007A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomizableUISceneSetButtonViewModel, DisplayName) == 104, "Offset mismatch for UCustomizableUISceneSetButtonViewModel::DisplayName");
static_assert(offsetof(UCustomizableUISceneSetButtonViewModel, CheckBoxState) == 120, "Offset mismatch for UCustomizableUISceneSetButtonViewModel::CheckBoxState");
static_assert(offsetof(UCustomizableUISceneSetButtonViewModel, bIsCheckBoxChecked) == 121, "Offset mismatch for UCustomizableUISceneSetButtonViewModel::bIsCheckBoxChecked");
static_assert(offsetof(UCustomizableUISceneSetButtonViewModel, bIsGameFeatureAlias) == 122, "Offset mismatch for UCustomizableUISceneSetButtonViewModel::bIsGameFeatureAlias");

// /Script/CustomizableUIClient.CustomizableUISceneSetSelectorWidget
// Kind: Class; super: CommonUserWidget
class UCustomizableUISceneSetSelectorWidget
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t DefaultSelectedSceneSet[0x10]; // 0x0348 (Size: 0x10, Type: SetProperty)
    std::uint8_t SelectedSceneSets[0x10]; // 0x0358 (Size: 0x10, Type: SetProperty)
    void* GameFeatureAliasButtonClass; // 0x0368 (Size: 0x8, Type: ClassProperty)
    void* EntryBox_UIModeCategories; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableUISceneSetSelectorWidget, DefaultSelectedSceneSet) == 840, "Offset mismatch for UCustomizableUISceneSetSelectorWidget::DefaultSelectedSceneSet");
static_assert(offsetof(UCustomizableUISceneSetSelectorWidget, SelectedSceneSets) == 856, "Offset mismatch for UCustomizableUISceneSetSelectorWidget::SelectedSceneSets");
static_assert(offsetof(UCustomizableUISceneSetSelectorWidget, GameFeatureAliasButtonClass) == 872, "Offset mismatch for UCustomizableUISceneSetSelectorWidget::GameFeatureAliasButtonClass");
static_assert(offsetof(UCustomizableUISceneSetSelectorWidget, EntryBox_UIModeCategories) == 880, "Offset mismatch for UCustomizableUISceneSetSelectorWidget::EntryBox_UIModeCategories");

// /Script/CustomizableUIClient.CustomizableWidgetCanvas
// Kind: Class; super: HLTV2WidgetWrapper
class UCustomizableWidgetCanvas
{
public:
    std::uint8_t Pad_0000[0x368]; // 0x0000
    std::uint8_t DefaultLayout[0x40]; // 0x0368 (Size: 0x40, Type: StructProperty)
    float DefaultSize; // 0x03A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SizePropertyTag[0x4]; // 0x03AC (Size: 0x4, Type: StructProperty)
    void* HUDElementCanvasClassToMimic; // 0x03B0 (Size: 0x8, Type: ClassProperty)
    void* HUDElementClassToCreate; // 0x03B8 (Size: 0x8, Type: ClassProperty)
    void* CreatedWidget; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* AsCanvasPanelSlot; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* CanvasPanel_Wrapper; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableWidgetCanvas, DefaultLayout) == 872, "Offset mismatch for UCustomizableWidgetCanvas::DefaultLayout");
static_assert(offsetof(UCustomizableWidgetCanvas, DefaultSize) == 936, "Offset mismatch for UCustomizableWidgetCanvas::DefaultSize");
static_assert(offsetof(UCustomizableWidgetCanvas, SizePropertyTag) == 940, "Offset mismatch for UCustomizableWidgetCanvas::SizePropertyTag");
static_assert(offsetof(UCustomizableWidgetCanvas, HUDElementCanvasClassToMimic) == 944, "Offset mismatch for UCustomizableWidgetCanvas::HUDElementCanvasClassToMimic");
static_assert(offsetof(UCustomizableWidgetCanvas, HUDElementClassToCreate) == 952, "Offset mismatch for UCustomizableWidgetCanvas::HUDElementClassToCreate");
static_assert(offsetof(UCustomizableWidgetCanvas, CreatedWidget) == 960, "Offset mismatch for UCustomizableWidgetCanvas::CreatedWidget");
static_assert(offsetof(UCustomizableWidgetCanvas, AsCanvasPanelSlot) == 968, "Offset mismatch for UCustomizableWidgetCanvas::AsCanvasPanelSlot");
static_assert(offsetof(UCustomizableWidgetCanvas, CanvasPanel_Wrapper) == 976, "Offset mismatch for UCustomizableWidgetCanvas::CanvasPanel_Wrapper");

// /Script/CustomizableUIClient.CustomizableWidgetCatalogWidget
// Kind: Class; super: CommonUserWidget
class UCustomizableWidgetCatalogWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* CustomizableUIDatabase; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* LayoutProfileManager; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    float PanelOpacityWhenDragedOver; // 0x0340 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0344
    void* PreviewWidgetClass; // 0x0348 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> WidgetCategoryToEntryBox; // 0x0350 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x48]; // 0x0360
    void* Button_DisplayButtonPreviews; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_DisplayWidgetPreviews; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Previews; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_ButtonPreviews; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_WidgetPreviews; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableWidgetCatalogWidget, CustomizableUIDatabase) == 816, "Offset mismatch for UCustomizableWidgetCatalogWidget::CustomizableUIDatabase");
static_assert(offsetof(UCustomizableWidgetCatalogWidget, LayoutProfileManager) == 824, "Offset mismatch for UCustomizableWidgetCatalogWidget::LayoutProfileManager");
static_assert(offsetof(UCustomizableWidgetCatalogWidget, PanelOpacityWhenDragedOver) == 832, "Offset mismatch for UCustomizableWidgetCatalogWidget::PanelOpacityWhenDragedOver");
static_assert(offsetof(UCustomizableWidgetCatalogWidget, PreviewWidgetClass) == 840, "Offset mismatch for UCustomizableWidgetCatalogWidget::PreviewWidgetClass");
static_assert(offsetof(UCustomizableWidgetCatalogWidget, WidgetCategoryToEntryBox) == 848, "Offset mismatch for UCustomizableWidgetCatalogWidget::WidgetCategoryToEntryBox");
static_assert(offsetof(UCustomizableWidgetCatalogWidget, Button_DisplayButtonPreviews) == 936, "Offset mismatch for UCustomizableWidgetCatalogWidget::Button_DisplayButtonPreviews");
static_assert(offsetof(UCustomizableWidgetCatalogWidget, Button_DisplayWidgetPreviews) == 944, "Offset mismatch for UCustomizableWidgetCatalogWidget::Button_DisplayWidgetPreviews");
static_assert(offsetof(UCustomizableWidgetCatalogWidget, Switcher_Previews) == 952, "Offset mismatch for UCustomizableWidgetCatalogWidget::Switcher_Previews");
static_assert(offsetof(UCustomizableWidgetCatalogWidget, EntryBox_ButtonPreviews) == 960, "Offset mismatch for UCustomizableWidgetCatalogWidget::EntryBox_ButtonPreviews");
static_assert(offsetof(UCustomizableWidgetCatalogWidget, EntryBox_WidgetPreviews) == 968, "Offset mismatch for UCustomizableWidgetCatalogWidget::EntryBox_WidgetPreviews");

// /Script/CustomizableUIClient.CustomizableWidgetCatalogWidgetEntry
// Kind: Class; super: CommonUserWidget
class UCustomizableWidgetCatalogWidgetEntry
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Text_SceneSetName; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_EntryPreviews; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableWidgetCatalogWidgetEntry, Text_SceneSetName) == 816, "Offset mismatch for UCustomizableWidgetCatalogWidgetEntry::Text_SceneSetName");
static_assert(offsetof(UCustomizableWidgetCatalogWidgetEntry, EntryBox_EntryPreviews) == 824, "Offset mismatch for UCustomizableWidgetCatalogWidgetEntry::EntryBox_EntryPreviews");

// /Script/CustomizableUIClient.CustomizableWidgetSettingRegistry
// Kind: Class; super: FortSettingRegistry
class UCustomizableWidgetSettingRegistry
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> RootSettings; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RegisteredSettings; // 0x00B0 (Size: 0x10, Type: MapProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* EditConditionCache; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableWidgetSettingRegistry, RootSettings) == 160, "Offset mismatch for UCustomizableWidgetSettingRegistry::RootSettings");
static_assert(offsetof(UCustomizableWidgetSettingRegistry, RegisteredSettings) == 176, "Offset mismatch for UCustomizableWidgetSettingRegistry::RegisteredSettings");
static_assert(offsetof(UCustomizableWidgetSettingRegistry, OwningLocalPlayer) == 192, "Offset mismatch for UCustomizableWidgetSettingRegistry::OwningLocalPlayer");
static_assert(offsetof(UCustomizableWidgetSettingRegistry, EditConditionCache) == 200, "Offset mismatch for UCustomizableWidgetSettingRegistry::EditConditionCache");

// /Script/CustomizableUIClient.DynamicUIManagerProxyAdapter
// Kind: Class; super: Object
class UDynamicUIManagerProxyAdapter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableUIClient.DynamicUIProxy
// Kind: Class; super: Interface
class UDynamicUIProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableUIClient.ExcludeCondition_AutoRunLockZoneDisabled
// Kind: Class; super: CustomizablePropertyExcludeCondition
class UExcludeCondition_AutoRunLockZoneDisabled
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableUIClient.ExcludeCondition_CVar
// Kind: Class; super: CustomizablePropertyExcludeCondition
class UExcludeCondition_CVar
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CVarName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t ExcludeIf; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UExcludeCondition_CVar, CVarName) == 40, "Offset mismatch for UExcludeCondition_CVar::CVarName");
static_assert(offsetof(UExcludeCondition_CVar, ExcludeIf) == 56, "Offset mismatch for UExcludeCondition_CVar::ExcludeIf");

// /Script/CustomizableUIClient.FortMobileHUDElementWrapper
// Kind: Class; super: HLTV2WidgetWrapper
class UFortMobileHUDElementWrapper
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    void* WrappedWidget; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileHUDElementWrapper, WrappedWidget) == 864, "Offset mismatch for UFortMobileHUDElementWrapper::WrappedWidget");

// /Script/CustomizableUIClient.HLTV2WidgetWrapper
// Kind: Class; super: UserWidget
class UHLTV2WidgetWrapper
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* BehaviorClass; // 0x0308 (Size: 0x8, Type: ClassProperty)
    void* BaseTouchHUDWidgetRegistry; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* CompiledTouchHUDWidgetRegistry; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0320
    std::uint8_t WidgetTag[0x4]; // 0x0330 (Size: 0x4, Type: StructProperty)
    std::uint8_t BehaviorTag[0x14]; // 0x0334 (Size: 0x14, Type: StructProperty)
    std::uint8_t bIsPreviewOrProxyWidget; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0349
    TMap<void*, void*> CustomizablePropertyDevNameToHLTV2CustomPropertyTag; // 0x0350 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UHLTV2WidgetWrapper, BehaviorClass) == 776, "Offset mismatch for UHLTV2WidgetWrapper::BehaviorClass");
static_assert(offsetof(UHLTV2WidgetWrapper, BaseTouchHUDWidgetRegistry) == 784, "Offset mismatch for UHLTV2WidgetWrapper::BaseTouchHUDWidgetRegistry");
static_assert(offsetof(UHLTV2WidgetWrapper, CompiledTouchHUDWidgetRegistry) == 792, "Offset mismatch for UHLTV2WidgetWrapper::CompiledTouchHUDWidgetRegistry");
static_assert(offsetof(UHLTV2WidgetWrapper, WidgetTag) == 816, "Offset mismatch for UHLTV2WidgetWrapper::WidgetTag");
static_assert(offsetof(UHLTV2WidgetWrapper, BehaviorTag) == 820, "Offset mismatch for UHLTV2WidgetWrapper::BehaviorTag");
static_assert(offsetof(UHLTV2WidgetWrapper, bIsPreviewOrProxyWidget) == 840, "Offset mismatch for UHLTV2WidgetWrapper::bIsPreviewOrProxyWidget");
static_assert(offsetof(UHLTV2WidgetWrapper, CustomizablePropertyDevNameToHLTV2CustomPropertyTag) == 848, "Offset mismatch for UHLTV2WidgetWrapper::CustomizablePropertyDevNameToHLTV2CustomPropertyTag");

// /Script/CustomizableUIClient.LayoutProfileButtonWidget
// Kind: Class; super: CommonUserWidget
class ULayoutProfileButtonWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t InEditColor[0x10]; // 0x0330 (Size: 0x10, Type: StructProperty)
    std::uint8_t SelectedColor[0x60]; // 0x0340 (Size: 0x60, Type: StructProperty)
    void* Button_Internal; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* Border_ActiveIndicator; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULayoutProfileButtonWidget, InEditColor) == 816, "Offset mismatch for ULayoutProfileButtonWidget::InEditColor");
static_assert(offsetof(ULayoutProfileButtonWidget, SelectedColor) == 832, "Offset mismatch for ULayoutProfileButtonWidget::SelectedColor");
static_assert(offsetof(ULayoutProfileButtonWidget, Button_Internal) == 928, "Offset mismatch for ULayoutProfileButtonWidget::Button_Internal");
static_assert(offsetof(ULayoutProfileButtonWidget, Border_ActiveIndicator) == 936, "Offset mismatch for ULayoutProfileButtonWidget::Border_ActiveIndicator");

// /Script/CustomizableUIClient.LayoutProfileManager
// Kind: Class; super: FortLocalPlayerSubsystem
class ULayoutProfileManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* CustomizableUIDatabase; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x88]; // 0x0038
    void* CustomizableUIGameUserSettings; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* CustomizableUIClientSettingRecordPartition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULayoutProfileManager, CustomizableUIDatabase) == 48, "Offset mismatch for ULayoutProfileManager::CustomizableUIDatabase");
static_assert(offsetof(ULayoutProfileManager, CustomizableUIGameUserSettings) == 192, "Offset mismatch for ULayoutProfileManager::CustomizableUIGameUserSettings");
static_assert(offsetof(ULayoutProfileManager, CustomizableUIClientSettingRecordPartition) == 200, "Offset mismatch for ULayoutProfileManager::CustomizableUIClientSettingRecordPartition");

// /Script/CustomizableUIClient.LinkAcrossActionPanelWidget
// Kind: Class; super: CommonUserWidget
class ULinkAcrossActionPanelWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Text_MainContextTitle; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* Text_VehicleContextTitle; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Button_SelectAll; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Button_DeselectAll; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_Actions; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_MainContextActions; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_VehicleContextActions; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULinkAcrossActionPanelWidget, Text_MainContextTitle) == 816, "Offset mismatch for ULinkAcrossActionPanelWidget::Text_MainContextTitle");
static_assert(offsetof(ULinkAcrossActionPanelWidget, Text_VehicleContextTitle) == 824, "Offset mismatch for ULinkAcrossActionPanelWidget::Text_VehicleContextTitle");
static_assert(offsetof(ULinkAcrossActionPanelWidget, Button_SelectAll) == 832, "Offset mismatch for ULinkAcrossActionPanelWidget::Button_SelectAll");
static_assert(offsetof(ULinkAcrossActionPanelWidget, Button_DeselectAll) == 840, "Offset mismatch for ULinkAcrossActionPanelWidget::Button_DeselectAll");
static_assert(offsetof(ULinkAcrossActionPanelWidget, ScrollBox_Actions) == 848, "Offset mismatch for ULinkAcrossActionPanelWidget::ScrollBox_Actions");
static_assert(offsetof(ULinkAcrossActionPanelWidget, EntryBox_MainContextActions) == 856, "Offset mismatch for ULinkAcrossActionPanelWidget::EntryBox_MainContextActions");
static_assert(offsetof(ULinkAcrossActionPanelWidget, EntryBox_VehicleContextActions) == 864, "Offset mismatch for ULinkAcrossActionPanelWidget::EntryBox_VehicleContextActions");

// /Script/CustomizableUIClient.LinkAcrossActionWidget
// Kind: Class; super: CommonUserWidget
class ULinkAcrossActionWidget
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    std::uint8_t EnabledCheckBoxBorderColor[0x10]; // 0x03B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t DisabledCheckBoxBorderColor[0x10]; // 0x03C0 (Size: 0x10, Type: StructProperty)
    void* CheckMarkSprite; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x03D8
    void* Text_ActionName; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* LinkAcrossWarningIndicator_Warning; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* NumericalIndicator_ActionImpact; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* Image_CheckboxBorder; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    void* Button_SelectAction; // 0x0408 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULinkAcrossActionWidget, EnabledCheckBoxBorderColor) == 944, "Offset mismatch for ULinkAcrossActionWidget::EnabledCheckBoxBorderColor");
static_assert(offsetof(ULinkAcrossActionWidget, DisabledCheckBoxBorderColor) == 960, "Offset mismatch for ULinkAcrossActionWidget::DisabledCheckBoxBorderColor");
static_assert(offsetof(ULinkAcrossActionWidget, CheckMarkSprite) == 976, "Offset mismatch for ULinkAcrossActionWidget::CheckMarkSprite");
static_assert(offsetof(ULinkAcrossActionWidget, Text_ActionName) == 1000, "Offset mismatch for ULinkAcrossActionWidget::Text_ActionName");
static_assert(offsetof(ULinkAcrossActionWidget, LinkAcrossWarningIndicator_Warning) == 1008, "Offset mismatch for ULinkAcrossActionWidget::LinkAcrossWarningIndicator_Warning");
static_assert(offsetof(ULinkAcrossActionWidget, NumericalIndicator_ActionImpact) == 1016, "Offset mismatch for ULinkAcrossActionWidget::NumericalIndicator_ActionImpact");
static_assert(offsetof(ULinkAcrossActionWidget, Image_CheckboxBorder) == 1024, "Offset mismatch for ULinkAcrossActionWidget::Image_CheckboxBorder");
static_assert(offsetof(ULinkAcrossActionWidget, Button_SelectAction) == 1032, "Offset mismatch for ULinkAcrossActionWidget::Button_SelectAction");

// /Script/CustomizableUIClient.LinkAcrossPanelTitleWidget
// Kind: Class; super: CommonUserWidget
class ULinkAcrossPanelTitleWidget
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t AdvancedActionTitle[0x10]; // 0x0340 (Size: 0x10, Type: TextProperty)
    void* PreviewWidgetClass; // 0x0350 (Size: 0x8, Type: ClassProperty)
    void* SizeBox_Preview; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Text_WidgetName; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* Text_Action; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULinkAcrossPanelTitleWidget, AdvancedActionTitle) == 832, "Offset mismatch for ULinkAcrossPanelTitleWidget::AdvancedActionTitle");
static_assert(offsetof(ULinkAcrossPanelTitleWidget, PreviewWidgetClass) == 848, "Offset mismatch for ULinkAcrossPanelTitleWidget::PreviewWidgetClass");
static_assert(offsetof(ULinkAcrossPanelTitleWidget, SizeBox_Preview) == 856, "Offset mismatch for ULinkAcrossPanelTitleWidget::SizeBox_Preview");
static_assert(offsetof(ULinkAcrossPanelTitleWidget, Text_WidgetName) == 864, "Offset mismatch for ULinkAcrossPanelTitleWidget::Text_WidgetName");
static_assert(offsetof(ULinkAcrossPanelTitleWidget, Text_Action) == 872, "Offset mismatch for ULinkAcrossPanelTitleWidget::Text_Action");

// /Script/CustomizableUIClient.LinkAcrossPanelWidget
// Kind: Class; super: CommonUserWidget
class ULinkAcrossPanelWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* CustomizableUIDatabase; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* LayoutProfileManager; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* TooltipLayer; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xA8]; // 0x0348
    TArray<void*> SimpleActionMessages; // 0x03F0 (Size: 0x10, Type: ArrayProperty)
    void* LinkAcrossPanelTitle_Header; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    void* Button_Close; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Actions; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_ActionPanelContainer; // 0x0418 (Size: 0x8, Type: ObjectProperty)
    void* LinkAcrossActionPanel_Actions; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    void* VerticalBox_SimpleAction; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    void* Text_SimpleAction; // 0x0430 (Size: 0x8, Type: ObjectProperty)
    void* Text_SimpleActionWarning; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    void* Button_ToggleAdvanced; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    void* Button_Cancel; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    void* Button_Confirm; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    void* WarningIndicator_MainWarning; // 0x0458 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULinkAcrossPanelWidget, CustomizableUIDatabase) == 816, "Offset mismatch for ULinkAcrossPanelWidget::CustomizableUIDatabase");
static_assert(offsetof(ULinkAcrossPanelWidget, LayoutProfileManager) == 824, "Offset mismatch for ULinkAcrossPanelWidget::LayoutProfileManager");
static_assert(offsetof(ULinkAcrossPanelWidget, TooltipLayer) == 832, "Offset mismatch for ULinkAcrossPanelWidget::TooltipLayer");
static_assert(offsetof(ULinkAcrossPanelWidget, SimpleActionMessages) == 1008, "Offset mismatch for ULinkAcrossPanelWidget::SimpleActionMessages");
static_assert(offsetof(ULinkAcrossPanelWidget, LinkAcrossPanelTitle_Header) == 1024, "Offset mismatch for ULinkAcrossPanelWidget::LinkAcrossPanelTitle_Header");
static_assert(offsetof(ULinkAcrossPanelWidget, Button_Close) == 1032, "Offset mismatch for ULinkAcrossPanelWidget::Button_Close");
static_assert(offsetof(ULinkAcrossPanelWidget, Switcher_Actions) == 1040, "Offset mismatch for ULinkAcrossPanelWidget::Switcher_Actions");
static_assert(offsetof(ULinkAcrossPanelWidget, SizeBox_ActionPanelContainer) == 1048, "Offset mismatch for ULinkAcrossPanelWidget::SizeBox_ActionPanelContainer");
static_assert(offsetof(ULinkAcrossPanelWidget, LinkAcrossActionPanel_Actions) == 1056, "Offset mismatch for ULinkAcrossPanelWidget::LinkAcrossActionPanel_Actions");
static_assert(offsetof(ULinkAcrossPanelWidget, VerticalBox_SimpleAction) == 1064, "Offset mismatch for ULinkAcrossPanelWidget::VerticalBox_SimpleAction");
static_assert(offsetof(ULinkAcrossPanelWidget, Text_SimpleAction) == 1072, "Offset mismatch for ULinkAcrossPanelWidget::Text_SimpleAction");
static_assert(offsetof(ULinkAcrossPanelWidget, Text_SimpleActionWarning) == 1080, "Offset mismatch for ULinkAcrossPanelWidget::Text_SimpleActionWarning");
static_assert(offsetof(ULinkAcrossPanelWidget, Button_ToggleAdvanced) == 1088, "Offset mismatch for ULinkAcrossPanelWidget::Button_ToggleAdvanced");
static_assert(offsetof(ULinkAcrossPanelWidget, Button_Cancel) == 1096, "Offset mismatch for ULinkAcrossPanelWidget::Button_Cancel");
static_assert(offsetof(ULinkAcrossPanelWidget, Button_Confirm) == 1104, "Offset mismatch for ULinkAcrossPanelWidget::Button_Confirm");
static_assert(offsetof(ULinkAcrossPanelWidget, WarningIndicator_MainWarning) == 1112, "Offset mismatch for ULinkAcrossPanelWidget::WarningIndicator_MainWarning");

// /Script/CustomizableUIClient.PreviewWrapperWidget
// Kind: Class; super: CommonUserWidget
class UPreviewWrapperWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t WrappedWidgetCustomizableWidgetId[0x78]; // 0x0330 (Size: 0x78, Type: OptionalProperty)
    void* CreateCustomizableWidgetOperation; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x03B0
    float DragDistanceThresholdMillimeters; // 0x03C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x03C4
    void* WrappedWidget; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x03D8
    void* TextBlock_InstancesLeftCounter; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* Border_Background; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Wrapper; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPreviewWrapperWidget, WrappedWidgetCustomizableWidgetId) == 816, "Offset mismatch for UPreviewWrapperWidget::WrappedWidgetCustomizableWidgetId");
static_assert(offsetof(UPreviewWrapperWidget, CreateCustomizableWidgetOperation) == 936, "Offset mismatch for UPreviewWrapperWidget::CreateCustomizableWidgetOperation");
static_assert(offsetof(UPreviewWrapperWidget, DragDistanceThresholdMillimeters) == 960, "Offset mismatch for UPreviewWrapperWidget::DragDistanceThresholdMillimeters");
static_assert(offsetof(UPreviewWrapperWidget, WrappedWidget) == 976, "Offset mismatch for UPreviewWrapperWidget::WrappedWidget");
static_assert(offsetof(UPreviewWrapperWidget, TextBlock_InstancesLeftCounter) == 1000, "Offset mismatch for UPreviewWrapperWidget::TextBlock_InstancesLeftCounter");
static_assert(offsetof(UPreviewWrapperWidget, Border_Background) == 1008, "Offset mismatch for UPreviewWrapperWidget::Border_Background");
static_assert(offsetof(UPreviewWrapperWidget, Overlay_Wrapper) == 1016, "Offset mismatch for UPreviewWrapperWidget::Overlay_Wrapper");

// /Script/CustomizableUIClient.PropertyPanelWidget
// Kind: Class; super: CommonUserWidget
class UPropertyPanelWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TArray<void*> VisibleSettings; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    void* CustomizableWidgetSettingRegistry; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* CustomizableUIDatabase; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0350
    void* Switcher_PropertiesAndMessage; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Text_SelectWidgetMessage; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* VerticalBox_PropertiesContainer; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Text_WidgetName; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Button_EditLinks; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* Button_RevertHUDWidget; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* Button_DeleteHUDWidget; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* ListView_Settings; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPropertyPanelWidget, VisibleSettings) == 816, "Offset mismatch for UPropertyPanelWidget::VisibleSettings");
static_assert(offsetof(UPropertyPanelWidget, CustomizableWidgetSettingRegistry) == 832, "Offset mismatch for UPropertyPanelWidget::CustomizableWidgetSettingRegistry");
static_assert(offsetof(UPropertyPanelWidget, CustomizableUIDatabase) == 840, "Offset mismatch for UPropertyPanelWidget::CustomizableUIDatabase");
static_assert(offsetof(UPropertyPanelWidget, Switcher_PropertiesAndMessage) == 872, "Offset mismatch for UPropertyPanelWidget::Switcher_PropertiesAndMessage");
static_assert(offsetof(UPropertyPanelWidget, Text_SelectWidgetMessage) == 880, "Offset mismatch for UPropertyPanelWidget::Text_SelectWidgetMessage");
static_assert(offsetof(UPropertyPanelWidget, VerticalBox_PropertiesContainer) == 888, "Offset mismatch for UPropertyPanelWidget::VerticalBox_PropertiesContainer");
static_assert(offsetof(UPropertyPanelWidget, Text_WidgetName) == 896, "Offset mismatch for UPropertyPanelWidget::Text_WidgetName");
static_assert(offsetof(UPropertyPanelWidget, Button_EditLinks) == 904, "Offset mismatch for UPropertyPanelWidget::Button_EditLinks");
static_assert(offsetof(UPropertyPanelWidget, Button_RevertHUDWidget) == 912, "Offset mismatch for UPropertyPanelWidget::Button_RevertHUDWidget");
static_assert(offsetof(UPropertyPanelWidget, Button_DeleteHUDWidget) == 920, "Offset mismatch for UPropertyPanelWidget::Button_DeleteHUDWidget");
static_assert(offsetof(UPropertyPanelWidget, ListView_Settings) == 928, "Offset mismatch for UPropertyPanelWidget::ListView_Settings");

// /Script/CustomizableUIClient.ProxyWrapperWidget
// Kind: Class; super: CommonUserWidget
class UProxyWrapperWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Overlay_Wrapper; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* ScaleBox_SizeProperty; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* WrappedWidget; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WidgetName[0x10]; // 0x0348 (Size: 0x10, Type: TextProperty)
    std::uint8_t AppendWidgetAndBehaviorNames; // 0x0358 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0359
    std::uint8_t InBoundsHighlightColor[0x10]; // 0x035C (Size: 0x10, Type: StructProperty)
    std::uint8_t OutOfBoundsProxyHighlightColor[0x44]; // 0x036C (Size: 0x44, Type: StructProperty)
    void* Image_SelectionHighlight; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* Image_OutOfBoundsIndicator; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProxyWrapperWidget, Overlay_Wrapper) == 816, "Offset mismatch for UProxyWrapperWidget::Overlay_Wrapper");
static_assert(offsetof(UProxyWrapperWidget, ScaleBox_SizeProperty) == 824, "Offset mismatch for UProxyWrapperWidget::ScaleBox_SizeProperty");
static_assert(offsetof(UProxyWrapperWidget, WrappedWidget) == 832, "Offset mismatch for UProxyWrapperWidget::WrappedWidget");
static_assert(offsetof(UProxyWrapperWidget, WidgetName) == 840, "Offset mismatch for UProxyWrapperWidget::WidgetName");
static_assert(offsetof(UProxyWrapperWidget, AppendWidgetAndBehaviorNames) == 856, "Offset mismatch for UProxyWrapperWidget::AppendWidgetAndBehaviorNames");
static_assert(offsetof(UProxyWrapperWidget, InBoundsHighlightColor) == 860, "Offset mismatch for UProxyWrapperWidget::InBoundsHighlightColor");
static_assert(offsetof(UProxyWrapperWidget, OutOfBoundsProxyHighlightColor) == 876, "Offset mismatch for UProxyWrapperWidget::OutOfBoundsProxyHighlightColor");
static_assert(offsetof(UProxyWrapperWidget, Image_SelectionHighlight) == 944, "Offset mismatch for UProxyWrapperWidget::Image_SelectionHighlight");
static_assert(offsetof(UProxyWrapperWidget, Image_OutOfBoundsIndicator) == 952, "Offset mismatch for UProxyWrapperWidget::Image_OutOfBoundsIndicator");

// /Script/CustomizableUIClient.TouchActionButton
// Kind: Class; super: HLTV2WidgetWrapper
class UTouchActionButton
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    void* ActionButtonWidget; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTouchActionButton, ActionButtonWidget) == 864, "Offset mismatch for UTouchActionButton::ActionButtonWidget");
