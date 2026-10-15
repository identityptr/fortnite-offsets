/**
 * decamp dumper generated SDK
 * Package: /Script/JunoControlUnitUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoControlUnitUI.ChannelIconUpdateInputData
// Kind: ScriptStruct; super: none
struct FChannelIconUpdateInputData
{
public:
    void* VCU; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ChannelId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    FName IconRowName; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FChannelIconUpdateInputData, VCU) == 0, "Offset mismatch for FChannelIconUpdateInputData::VCU");
static_assert(offsetof(FChannelIconUpdateInputData, ChannelId) == 8, "Offset mismatch for FChannelIconUpdateInputData::ChannelId");
static_assert(offsetof(FChannelIconUpdateInputData, IconRowName) == 12, "Offset mismatch for FChannelIconUpdateInputData::IconRowName");

// /Script/JunoControlUnitUI.ChannelIconUpdateOutputData
// Kind: ScriptStruct; super: none
struct FChannelIconUpdateOutputData
{
public:
    std::uint8_t bHasOverride; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ThumbnailIcon; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumberToDisplay; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasThumbnail; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    FName IconRowID; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FChannelIconUpdateOutputData, bHasOverride) == 0, "Offset mismatch for FChannelIconUpdateOutputData::bHasOverride");
static_assert(offsetof(FChannelIconUpdateOutputData, ThumbnailIcon) == 8, "Offset mismatch for FChannelIconUpdateOutputData::ThumbnailIcon");
static_assert(offsetof(FChannelIconUpdateOutputData, NumberToDisplay) == 16, "Offset mismatch for FChannelIconUpdateOutputData::NumberToDisplay");
static_assert(offsetof(FChannelIconUpdateOutputData, bHasThumbnail) == 20, "Offset mismatch for FChannelIconUpdateOutputData::bHasThumbnail");
static_assert(offsetof(FChannelIconUpdateOutputData, IconRowID) == 24, "Offset mismatch for FChannelIconUpdateOutputData::IconRowID");

// /Script/JunoControlUnitUI.JunoChannelButtonInitContext
// Kind: ScriptStruct; super: none
struct FJunoChannelButtonInitContext
{
public:
    std::uint8_t bIsLegacy; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ToyAbilities[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t GroupIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t AbilityId[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupType[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::uint8_t ChannelId[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    void* LegacyToyActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ChannelIndex; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSender; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInitiallyBound; // 0x0045 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0046
    void* PlayerController; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* VCU; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::int32_t DisplayNumber; // 0x0058 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoChannelButtonInitContext, bIsLegacy) == 0, "Offset mismatch for FJunoChannelButtonInitContext::bIsLegacy");
static_assert(offsetof(FJunoChannelButtonInitContext, ToyAbilities) == 8, "Offset mismatch for FJunoChannelButtonInitContext::ToyAbilities");
static_assert(offsetof(FJunoChannelButtonInitContext, GroupIndex) == 40, "Offset mismatch for FJunoChannelButtonInitContext::GroupIndex");
static_assert(offsetof(FJunoChannelButtonInitContext, AbilityId) == 44, "Offset mismatch for FJunoChannelButtonInitContext::AbilityId");
static_assert(offsetof(FJunoChannelButtonInitContext, GroupType) == 48, "Offset mismatch for FJunoChannelButtonInitContext::GroupType");
static_assert(offsetof(FJunoChannelButtonInitContext, ChannelId) == 52, "Offset mismatch for FJunoChannelButtonInitContext::ChannelId");
static_assert(offsetof(FJunoChannelButtonInitContext, LegacyToyActor) == 56, "Offset mismatch for FJunoChannelButtonInitContext::LegacyToyActor");
static_assert(offsetof(FJunoChannelButtonInitContext, ChannelIndex) == 64, "Offset mismatch for FJunoChannelButtonInitContext::ChannelIndex");
static_assert(offsetof(FJunoChannelButtonInitContext, bIsSender) == 68, "Offset mismatch for FJunoChannelButtonInitContext::bIsSender");
static_assert(offsetof(FJunoChannelButtonInitContext, bInitiallyBound) == 69, "Offset mismatch for FJunoChannelButtonInitContext::bInitiallyBound");
static_assert(offsetof(FJunoChannelButtonInitContext, PlayerController) == 72, "Offset mismatch for FJunoChannelButtonInitContext::PlayerController");
static_assert(offsetof(FJunoChannelButtonInitContext, VCU) == 80, "Offset mismatch for FJunoChannelButtonInitContext::VCU");
static_assert(offsetof(FJunoChannelButtonInitContext, DisplayNumber) == 88, "Offset mismatch for FJunoChannelButtonInitContext::DisplayNumber");

// /Script/JunoControlUnitUI.JunoChannelIconRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoChannelIconRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t Thumbnail[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t Number; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoChannelIconRow, bEnabled) == 8, "Offset mismatch for FJunoChannelIconRow::bEnabled");
static_assert(offsetof(FJunoChannelIconRow, Thumbnail) == 16, "Offset mismatch for FJunoChannelIconRow::Thumbnail");
static_assert(offsetof(FJunoChannelIconRow, Number) == 48, "Offset mismatch for FJunoChannelIconRow::Number");

// /Script/JunoControlUnitUI.FortMobileHUDWidgetContentComponent_VCUChannelIcon
// Kind: Class; super: FortMobileHudWidgetContentComponent
class UFortMobileHUDWidgetContentComponent_VCUChannelIcon
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t ChannelIconWidgetSoftClass[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    std::int32_t ChannelIndex; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    void* CurrentChannelIconWidget; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileHUDWidgetContentComponent_VCUChannelIcon, ChannelIconWidgetSoftClass) == 120, "Offset mismatch for UFortMobileHUDWidgetContentComponent_VCUChannelIcon::ChannelIconWidgetSoftClass");
static_assert(offsetof(UFortMobileHUDWidgetContentComponent_VCUChannelIcon, ChannelIndex) == 152, "Offset mismatch for UFortMobileHUDWidgetContentComponent_VCUChannelIcon::ChannelIndex");
static_assert(offsetof(UFortMobileHUDWidgetContentComponent_VCUChannelIcon, CurrentChannelIconWidget) == 160, "Offset mismatch for UFortMobileHUDWidgetContentComponent_VCUChannelIcon::CurrentChannelIconWidget");

// /Script/JunoControlUnitUI.HUDWidgetBehaviorCondition_IsVCUChannelBound
// Kind: Class; super: HUDWidgetBehaviorConditionBase
class UHUDWidgetBehaviorCondition_IsVCUChannelBound
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ChannelTag[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    std::uint8_t HardCodedTag[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHUDWidgetBehaviorCondition_IsVCUChannelBound, ChannelTag) == 104, "Offset mismatch for UHUDWidgetBehaviorCondition_IsVCUChannelBound::ChannelTag");
static_assert(offsetof(UHUDWidgetBehaviorCondition_IsVCUChannelBound, HardCodedTag) == 136, "Offset mismatch for UHUDWidgetBehaviorCondition_IsVCUChannelBound::HardCodedTag");

// /Script/JunoControlUnitUI.JunoChannelIconControllerViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoChannelIconControllerViewModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoControlUnitUI.JunoChannelIconData
// Kind: Class; super: Object
class UJunoChannelIconData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t IconData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoChannelIconData, IconData) == 40, "Offset mismatch for UJunoChannelIconData::IconData");

// /Script/JunoControlUnitUI.JunoChannelIconHUDViewModel
// Kind: Class; super: JunoChannelIconViewModel
class UJunoChannelIconHUDViewModel
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bIsBound; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0089
    TArray<void*> LinkedVCUs; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningPlayerController; // 0x00A0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoChannelIconHUDViewModel, bIsBound) == 136, "Offset mismatch for UJunoChannelIconHUDViewModel::bIsBound");
static_assert(offsetof(UJunoChannelIconHUDViewModel, LinkedVCUs) == 144, "Offset mismatch for UJunoChannelIconHUDViewModel::LinkedVCUs");
static_assert(offsetof(UJunoChannelIconHUDViewModel, OwningPlayerController) == 160, "Offset mismatch for UJunoChannelIconHUDViewModel::OwningPlayerController");

// /Script/JunoControlUnitUI.JunoChannelIconViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoChannelIconViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t DisplayNumber; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    void* ActiveVCU; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0078
    std::uint8_t ActiveChannelID[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoChannelIconViewModel, DisplayNumber) == 104, "Offset mismatch for UJunoChannelIconViewModel::DisplayNumber");
static_assert(offsetof(UJunoChannelIconViewModel, ActiveVCU) == 112, "Offset mismatch for UJunoChannelIconViewModel::ActiveVCU");
static_assert(offsetof(UJunoChannelIconViewModel, ActiveChannelID) == 128, "Offset mismatch for UJunoChannelIconViewModel::ActiveChannelID");

// /Script/JunoControlUnitUI.JunoChannelSelectButtonViewModel
// Kind: Class; super: JunoChannelIconViewModel
class UJunoChannelSelectButtonViewModel
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t ToyAbilities[0x24]; // 0x0088 (Size: 0x24, Type: SoftObjectProperty)
    std::int32_t ChannelIndex; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSender; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    TWeakObjectPtr<void> LegacyToyActor; // 0x00B4 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsChannelBound; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocked; // 0x00BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00BE
    std::int32_t GroupIndex; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t AbilityId[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupType[0x4]; // 0x00C8 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> OwningPlayerController; // 0x00CC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoChannelSelectButtonViewModel, ToyAbilities) == 136, "Offset mismatch for UJunoChannelSelectButtonViewModel::ToyAbilities");
static_assert(offsetof(UJunoChannelSelectButtonViewModel, ChannelIndex) == 172, "Offset mismatch for UJunoChannelSelectButtonViewModel::ChannelIndex");
static_assert(offsetof(UJunoChannelSelectButtonViewModel, bIsSender) == 176, "Offset mismatch for UJunoChannelSelectButtonViewModel::bIsSender");
static_assert(offsetof(UJunoChannelSelectButtonViewModel, LegacyToyActor) == 180, "Offset mismatch for UJunoChannelSelectButtonViewModel::LegacyToyActor");
static_assert(offsetof(UJunoChannelSelectButtonViewModel, bIsChannelBound) == 188, "Offset mismatch for UJunoChannelSelectButtonViewModel::bIsChannelBound");
static_assert(offsetof(UJunoChannelSelectButtonViewModel, bIsLocked) == 189, "Offset mismatch for UJunoChannelSelectButtonViewModel::bIsLocked");
static_assert(offsetof(UJunoChannelSelectButtonViewModel, GroupIndex) == 192, "Offset mismatch for UJunoChannelSelectButtonViewModel::GroupIndex");
static_assert(offsetof(UJunoChannelSelectButtonViewModel, AbilityId) == 196, "Offset mismatch for UJunoChannelSelectButtonViewModel::AbilityId");
static_assert(offsetof(UJunoChannelSelectButtonViewModel, GroupType) == 200, "Offset mismatch for UJunoChannelSelectButtonViewModel::GroupType");
static_assert(offsetof(UJunoChannelSelectButtonViewModel, OwningPlayerController) == 204, "Offset mismatch for UJunoChannelSelectButtonViewModel::OwningPlayerController");

// /Script/JunoControlUnitUI.JunoDynamicUIDirectorVCUComponent
// Kind: Class; super: JunoDynamicUIDirectorComponent
class UJunoDynamicUIDirectorVCUComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TaggedWidgetSceneData; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> HudLayoutScenes; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> WidgetPoolInitData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoDynamicUIDirectorVCUComponent, TaggedWidgetSceneData) == 200, "Offset mismatch for UJunoDynamicUIDirectorVCUComponent::TaggedWidgetSceneData");
static_assert(offsetof(UJunoDynamicUIDirectorVCUComponent, HudLayoutScenes) == 208, "Offset mismatch for UJunoDynamicUIDirectorVCUComponent::HudLayoutScenes");
static_assert(offsetof(UJunoDynamicUIDirectorVCUComponent, WidgetPoolInitData) == 224, "Offset mismatch for UJunoDynamicUIDirectorVCUComponent::WidgetPoolInitData");

// /Script/JunoControlUnitUI.JunoPowerManagerComponentVM
// Kind: Class; super: FortPerUserViewModel
class UJunoPowerManagerComponentVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* CurrentPowerItem; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    float CurrentPowerCapacity; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MaxPowerCapacity; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float CurrentPowerCapacityPercent; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float CurrentPowerItemDurability; // 0x008C (Size: 0x4, Type: FloatProperty)
    float MaxPowerItemDurability; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::int32_t RemainingPowerItemsCount; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPowerItemsCount; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::int32_t AttachedPowerCentersCount; // 0x009C (Size: 0x4, Type: IntProperty)
    float RefreshTime; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PowerSystemEnabled; // 0x00A4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPowerManagerComponentVM, CurrentPowerItem) == 120, "Offset mismatch for UJunoPowerManagerComponentVM::CurrentPowerItem");
static_assert(offsetof(UJunoPowerManagerComponentVM, CurrentPowerCapacity) == 128, "Offset mismatch for UJunoPowerManagerComponentVM::CurrentPowerCapacity");
static_assert(offsetof(UJunoPowerManagerComponentVM, MaxPowerCapacity) == 132, "Offset mismatch for UJunoPowerManagerComponentVM::MaxPowerCapacity");
static_assert(offsetof(UJunoPowerManagerComponentVM, CurrentPowerCapacityPercent) == 136, "Offset mismatch for UJunoPowerManagerComponentVM::CurrentPowerCapacityPercent");
static_assert(offsetof(UJunoPowerManagerComponentVM, CurrentPowerItemDurability) == 140, "Offset mismatch for UJunoPowerManagerComponentVM::CurrentPowerItemDurability");
static_assert(offsetof(UJunoPowerManagerComponentVM, MaxPowerItemDurability) == 144, "Offset mismatch for UJunoPowerManagerComponentVM::MaxPowerItemDurability");
static_assert(offsetof(UJunoPowerManagerComponentVM, RemainingPowerItemsCount) == 148, "Offset mismatch for UJunoPowerManagerComponentVM::RemainingPowerItemsCount");
static_assert(offsetof(UJunoPowerManagerComponentVM, MaxPowerItemsCount) == 152, "Offset mismatch for UJunoPowerManagerComponentVM::MaxPowerItemsCount");
static_assert(offsetof(UJunoPowerManagerComponentVM, AttachedPowerCentersCount) == 156, "Offset mismatch for UJunoPowerManagerComponentVM::AttachedPowerCentersCount");
static_assert(offsetof(UJunoPowerManagerComponentVM, RefreshTime) == 160, "Offset mismatch for UJunoPowerManagerComponentVM::RefreshTime");
static_assert(offsetof(UJunoPowerManagerComponentVM, PowerSystemEnabled) == 164, "Offset mismatch for UJunoPowerManagerComponentVM::PowerSystemEnabled");

// /Script/JunoControlUnitUI.SelectedChannelObject
// Kind: Class; super: Object
class USelectedChannelObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USelectedChannelObject, GameplayTag) == 40, "Offset mismatch for USelectedChannelObject::GameplayTag");
