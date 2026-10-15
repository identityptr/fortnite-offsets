/**
 * decamp dumper generated SDK
 * Package: /Script/JunoExclusiveUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoExclusiveUI.JunoFocalPointRequirementUIData
// Kind: ScriptStruct; super: none
struct FJunoFocalPointRequirementUIData
{
public:
    std::uint8_t Name[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t AssetIcon[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bMet; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0041
    std::int32_t Count; // 0x0044 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoFocalPointRequirementUIData, Name) == 0, "Offset mismatch for FJunoFocalPointRequirementUIData::Name");
static_assert(offsetof(FJunoFocalPointRequirementUIData, Description) == 16, "Offset mismatch for FJunoFocalPointRequirementUIData::Description");
static_assert(offsetof(FJunoFocalPointRequirementUIData, AssetIcon) == 32, "Offset mismatch for FJunoFocalPointRequirementUIData::AssetIcon");
static_assert(offsetof(FJunoFocalPointRequirementUIData, bMet) == 64, "Offset mismatch for FJunoFocalPointRequirementUIData::bMet");
static_assert(offsetof(FJunoFocalPointRequirementUIData, Count) == 68, "Offset mismatch for FJunoFocalPointRequirementUIData::Count");

// /Script/JunoExclusiveUI.JunoRoleEnergyValues
// Kind: ScriptStruct; super: none
struct FJunoRoleEnergyValues
{
public:
    float CurrentRoleEnergy; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CurrentMaxRoleEnergy; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoRoleEnergyValues, CurrentRoleEnergy) == 0, "Offset mismatch for FJunoRoleEnergyValues::CurrentRoleEnergy");
static_assert(offsetof(FJunoRoleEnergyValues, CurrentMaxRoleEnergy) == 4, "Offset mismatch for FJunoRoleEnergyValues::CurrentMaxRoleEnergy");

// /Script/JunoExclusiveUI.JunoVillageTypeRequirementsUIData
// Kind: ScriptStruct; super: none
struct FJunoVillageTypeRequirementsUIData
{
public:
    std::uint8_t BiomeTag[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::int32_t PerWorldLimit; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t RequirementName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t RequirementDescription[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t RequirementIcon[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bRequirementMet; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoVillageTypeRequirementsUIData, BiomeTag) == 0, "Offset mismatch for FJunoVillageTypeRequirementsUIData::BiomeTag");
static_assert(offsetof(FJunoVillageTypeRequirementsUIData, PerWorldLimit) == 32, "Offset mismatch for FJunoVillageTypeRequirementsUIData::PerWorldLimit");
static_assert(offsetof(FJunoVillageTypeRequirementsUIData, RequirementName) == 40, "Offset mismatch for FJunoVillageTypeRequirementsUIData::RequirementName");
static_assert(offsetof(FJunoVillageTypeRequirementsUIData, RequirementDescription) == 56, "Offset mismatch for FJunoVillageTypeRequirementsUIData::RequirementDescription");
static_assert(offsetof(FJunoVillageTypeRequirementsUIData, RequirementIcon) == 72, "Offset mismatch for FJunoVillageTypeRequirementsUIData::RequirementIcon");
static_assert(offsetof(FJunoVillageTypeRequirementsUIData, bRequirementMet) == 104, "Offset mismatch for FJunoVillageTypeRequirementsUIData::bRequirementMet");

// /Script/JunoExclusiveUI.JunoAbilitiesBarViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoAbilitiesBarViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> AbilitySlots; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoAbilitiesBarViewModel, AbilitySlots) == 120, "Offset mismatch for UJunoAbilitiesBarViewModel::AbilitySlots");

// /Script/JunoExclusiveUI.JunoAbilitySlotViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoAbilitySlotViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float CooldownTimeRemaining; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float CooldownPercentageComplete; // 0x006C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoAbilitySlotViewModel, CooldownTimeRemaining) == 104, "Offset mismatch for UJunoAbilitySlotViewModel::CooldownTimeRemaining");
static_assert(offsetof(UJunoAbilitySlotViewModel, CooldownPercentageComplete) == 108, "Offset mismatch for UJunoAbilitySlotViewModel::CooldownPercentageComplete");

// /Script/JunoExclusiveUI.JunoAbilitySlotsContentComponent
// Kind: Class; super: FortMobileHudWidgetContentComponent
class UJunoAbilitySlotsContentComponent
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t ContentWidgetClass[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t AbilitySelectorTagQuery[0x48]; // 0x0098 (Size: 0x48, Type: StructProperty)
    void* ContentWidget; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoAbilitySlotsContentComponent, ContentWidgetClass) == 120, "Offset mismatch for UJunoAbilitySlotsContentComponent::ContentWidgetClass");
static_assert(offsetof(UJunoAbilitySlotsContentComponent, AbilitySelectorTagQuery) == 152, "Offset mismatch for UJunoAbilitySlotsContentComponent::AbilitySelectorTagQuery");
static_assert(offsetof(UJunoAbilitySlotsContentComponent, ContentWidget) == 224, "Offset mismatch for UJunoAbilitySlotsContentComponent::ContentWidget");

// /Script/JunoExclusiveUI.JunoAbilitySlotsInsertableInterface
// Kind: Class; super: Interface
class UJunoAbilitySlotsInsertableInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoExclusiveUI.JunoChannelDisplayWidget
// Kind: Class; super: CommonUserWidget
class UJunoChannelDisplayWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::int32_t ChannelIndex; // 0x0330 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoChannelDisplayWidget, ChannelIndex) == 816, "Offset mismatch for UJunoChannelDisplayWidget::ChannelIndex");

// /Script/JunoExclusiveUI.JunoFocalPointRequirementEntryViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoFocalPointRequirementEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DataRequirementName[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t DataRequirementDescription[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t DataRequirementAssetIcon[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bDataRequirementMet; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t DataRequirementCount; // 0x00AC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoFocalPointRequirementEntryViewModel, DataRequirementName) == 104, "Offset mismatch for UJunoFocalPointRequirementEntryViewModel::DataRequirementName");
static_assert(offsetof(UJunoFocalPointRequirementEntryViewModel, DataRequirementDescription) == 120, "Offset mismatch for UJunoFocalPointRequirementEntryViewModel::DataRequirementDescription");
static_assert(offsetof(UJunoFocalPointRequirementEntryViewModel, DataRequirementAssetIcon) == 136, "Offset mismatch for UJunoFocalPointRequirementEntryViewModel::DataRequirementAssetIcon");
static_assert(offsetof(UJunoFocalPointRequirementEntryViewModel, bDataRequirementMet) == 168, "Offset mismatch for UJunoFocalPointRequirementEntryViewModel::bDataRequirementMet");
static_assert(offsetof(UJunoFocalPointRequirementEntryViewModel, DataRequirementCount) == 172, "Offset mismatch for UJunoFocalPointRequirementEntryViewModel::DataRequirementCount");

// /Script/JunoExclusiveUI.JunoFocalPointsRequirementsViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoFocalPointsRequirementsViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FName FocalPointsDataRegistryName; // 0x0068 (Size: 0x8, Type: NameProperty)
    TArray<void*> RequirementEntries; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoFocalPointsRequirementsViewModel, FocalPointsDataRegistryName) == 104, "Offset mismatch for UJunoFocalPointsRequirementsViewModel::FocalPointsDataRegistryName");
static_assert(offsetof(UJunoFocalPointsRequirementsViewModel, RequirementEntries) == 112, "Offset mismatch for UJunoFocalPointsRequirementsViewModel::RequirementEntries");

// /Script/JunoExclusiveUI.JunoInventoryGroupContentComponent
// Kind: Class; super: FortMobileHudWidgetContentComponent
class UJunoInventoryGroupContentComponent
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t ContentWidgetClass[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    void* ContentWidget; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InventoryGroupTag[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoInventoryGroupContentComponent, ContentWidgetClass) == 120, "Offset mismatch for UJunoInventoryGroupContentComponent::ContentWidgetClass");
static_assert(offsetof(UJunoInventoryGroupContentComponent, ContentWidget) == 152, "Offset mismatch for UJunoInventoryGroupContentComponent::ContentWidget");
static_assert(offsetof(UJunoInventoryGroupContentComponent, InventoryGroupTag) == 160, "Offset mismatch for UJunoInventoryGroupContentComponent::InventoryGroupTag");

// /Script/JunoExclusiveUI.JunoInventoryGroupVMInsertableInterface
// Kind: Class; super: Interface
class UJunoInventoryGroupVMInsertableInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoExclusiveUI.JunoRoleAttributesViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoRoleAttributesViewModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoExclusiveUI.JunoUserGeneratedTextErrorModalHandler
// Kind: Class; super: CommonUserWidget
class UJunoUserGeneratedTextErrorModalHandler
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* ErrorModalScene; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConfirmButtonText[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConfirmAction[0x1]; // 0x0348 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoUserGeneratedTextErrorModalHandler, ErrorModalScene) == 816, "Offset mismatch for UJunoUserGeneratedTextErrorModalHandler::ErrorModalScene");
static_assert(offsetof(UJunoUserGeneratedTextErrorModalHandler, ConfirmButtonText) == 824, "Offset mismatch for UJunoUserGeneratedTextErrorModalHandler::ConfirmButtonText");
static_assert(offsetof(UJunoUserGeneratedTextErrorModalHandler, ConfirmAction) == 840, "Offset mismatch for UJunoUserGeneratedTextErrorModalHandler::ConfirmAction");

// /Script/JunoExclusiveUI.JunoVillageTypeRequirementsEntryViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoVillageTypeRequirementsEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t BiomeTag[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    std::int32_t PerWorldLimit; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x008C
    std::uint8_t RequirementName[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t RequirementDescription[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t RequirementIcon[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bRequirementMet; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoVillageTypeRequirementsEntryViewModel, BiomeTag) == 104, "Offset mismatch for UJunoVillageTypeRequirementsEntryViewModel::BiomeTag");
static_assert(offsetof(UJunoVillageTypeRequirementsEntryViewModel, PerWorldLimit) == 136, "Offset mismatch for UJunoVillageTypeRequirementsEntryViewModel::PerWorldLimit");
static_assert(offsetof(UJunoVillageTypeRequirementsEntryViewModel, RequirementName) == 144, "Offset mismatch for UJunoVillageTypeRequirementsEntryViewModel::RequirementName");
static_assert(offsetof(UJunoVillageTypeRequirementsEntryViewModel, RequirementDescription) == 160, "Offset mismatch for UJunoVillageTypeRequirementsEntryViewModel::RequirementDescription");
static_assert(offsetof(UJunoVillageTypeRequirementsEntryViewModel, RequirementIcon) == 176, "Offset mismatch for UJunoVillageTypeRequirementsEntryViewModel::RequirementIcon");
static_assert(offsetof(UJunoVillageTypeRequirementsEntryViewModel, bRequirementMet) == 208, "Offset mismatch for UJunoVillageTypeRequirementsEntryViewModel::bRequirementMet");

// /Script/JunoExclusiveUI.JunoVillageTypeRequirementsViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoVillageTypeRequirementsViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> RequirementEntries; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoVillageTypeRequirementsViewModel, RequirementEntries) == 104, "Offset mismatch for UJunoVillageTypeRequirementsViewModel::RequirementEntries");
