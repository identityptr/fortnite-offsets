/**
 * decamp dumper generated SDK
 * Package: /Script/CrewUI
 */
#pragma once
#include "Basic.h"

// /Script/CrewUI.CrewBenefitGroupSet
// Kind: ScriptStruct; super: none
struct FCrewBenefitGroupSet
{
public:
    TArray<void*> Groups; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCrewBenefitGroupSet, Groups) == 0, "Offset mismatch for FCrewBenefitGroupSet::Groups");

// /Script/CrewUI.CrewBenefitLine
// Kind: ScriptStruct; super: none
struct FCrewBenefitLine
{
public:
    TArray<void*> Benefits; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCrewBenefitLine, Benefits) == 0, "Offset mismatch for FCrewBenefitLine::Benefits");

// /Script/CrewUI.CrewSubscriptionContentTabData
// Kind: ScriptStruct; super: none
struct FCrewSubscriptionContentTabData
{
public:
    std::uint8_t TabName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t TabType; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCrewSubscriptionContentTabData, TabName) == 0, "Offset mismatch for FCrewSubscriptionContentTabData::TabName");
static_assert(offsetof(FCrewSubscriptionContentTabData, TabType) == 16, "Offset mismatch for FCrewSubscriptionContentTabData::TabType");

// /Script/CrewUI.CrewUpsellConfig
// Kind: ScriptStruct; super: none
struct FCrewUpsellConfig
{
public:
    FString OverrideUpsellPass; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> PassBackgroundUrl; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CrewBackgroundUrl; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUsePassBackgroundMaterial; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCrewBackgroundMaterial; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCrewOnRightInUpsell; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCrew50PercentInUpsell; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCrew30PercentInUpsell; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCrewAsSliver; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCrewOnlyInUpsell; // 0x0036 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPassOnlyInUpsell; // 0x0037 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnimateCrewBG; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseNewUpsellFormat; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowToggleBundle; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDefaultShowBundle; // 0x003B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x4]; // 0x003C
    TArray<void*> EntryOverrides; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCrewUpsellConfig, OverrideUpsellPass) == 0, "Offset mismatch for FCrewUpsellConfig::OverrideUpsellPass");
static_assert(offsetof(FCrewUpsellConfig, PassBackgroundUrl) == 16, "Offset mismatch for FCrewUpsellConfig::PassBackgroundUrl");
static_assert(offsetof(FCrewUpsellConfig, CrewBackgroundUrl) == 32, "Offset mismatch for FCrewUpsellConfig::CrewBackgroundUrl");
static_assert(offsetof(FCrewUpsellConfig, bUsePassBackgroundMaterial) == 48, "Offset mismatch for FCrewUpsellConfig::bUsePassBackgroundMaterial");
static_assert(offsetof(FCrewUpsellConfig, bUseCrewBackgroundMaterial) == 49, "Offset mismatch for FCrewUpsellConfig::bUseCrewBackgroundMaterial");
static_assert(offsetof(FCrewUpsellConfig, bCrewOnRightInUpsell) == 50, "Offset mismatch for FCrewUpsellConfig::bCrewOnRightInUpsell");
static_assert(offsetof(FCrewUpsellConfig, bCrew50PercentInUpsell) == 51, "Offset mismatch for FCrewUpsellConfig::bCrew50PercentInUpsell");
static_assert(offsetof(FCrewUpsellConfig, bCrew30PercentInUpsell) == 52, "Offset mismatch for FCrewUpsellConfig::bCrew30PercentInUpsell");
static_assert(offsetof(FCrewUpsellConfig, bCrewAsSliver) == 53, "Offset mismatch for FCrewUpsellConfig::bCrewAsSliver");
static_assert(offsetof(FCrewUpsellConfig, bCrewOnlyInUpsell) == 54, "Offset mismatch for FCrewUpsellConfig::bCrewOnlyInUpsell");
static_assert(offsetof(FCrewUpsellConfig, bPassOnlyInUpsell) == 55, "Offset mismatch for FCrewUpsellConfig::bPassOnlyInUpsell");
static_assert(offsetof(FCrewUpsellConfig, bAnimateCrewBG) == 56, "Offset mismatch for FCrewUpsellConfig::bAnimateCrewBG");
static_assert(offsetof(FCrewUpsellConfig, bUseNewUpsellFormat) == 57, "Offset mismatch for FCrewUpsellConfig::bUseNewUpsellFormat");
static_assert(offsetof(FCrewUpsellConfig, bAllowToggleBundle) == 58, "Offset mismatch for FCrewUpsellConfig::bAllowToggleBundle");
static_assert(offsetof(FCrewUpsellConfig, bDefaultShowBundle) == 59, "Offset mismatch for FCrewUpsellConfig::bDefaultShowBundle");
static_assert(offsetof(FCrewUpsellConfig, EntryOverrides) == 64, "Offset mismatch for FCrewUpsellConfig::EntryOverrides");

// /Script/CrewUI.FortProgressiveReward
// Kind: ScriptStruct; super: none
struct FFortProgressiveReward
{
public:
    std::uint8_t TileMaterial[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bHidden; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPreviewStyles; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0022
    TSoftObjectPtr<void> RewardDef; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FFortProgressiveReward, TileMaterial) == 0, "Offset mismatch for FFortProgressiveReward::TileMaterial");
static_assert(offsetof(FFortProgressiveReward, bHidden) == 32, "Offset mismatch for FFortProgressiveReward::bHidden");
static_assert(offsetof(FFortProgressiveReward, bAllowPreviewStyles) == 33, "Offset mismatch for FFortProgressiveReward::bAllowPreviewStyles");
static_assert(offsetof(FFortProgressiveReward, RewardDef) == 40, "Offset mismatch for FFortProgressiveReward::RewardDef");

// /Script/CrewUI.FortProgressiveSet
// Kind: ScriptStruct; super: none
struct FFortProgressiveSet
{
public:
    FString FulfillmentId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t SetName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t TileMaterial[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TileMaterialItemTextureProvider[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Stages; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortProgressiveSet, FulfillmentId) == 0, "Offset mismatch for FFortProgressiveSet::FulfillmentId");
static_assert(offsetof(FFortProgressiveSet, SetName) == 16, "Offset mismatch for FFortProgressiveSet::SetName");
static_assert(offsetof(FFortProgressiveSet, TileMaterial) == 32, "Offset mismatch for FFortProgressiveSet::TileMaterial");
static_assert(offsetof(FFortProgressiveSet, TileMaterialItemTextureProvider) == 64, "Offset mismatch for FFortProgressiveSet::TileMaterialItemTextureProvider");
static_assert(offsetof(FFortProgressiveSet, Stages) == 96, "Offset mismatch for FFortProgressiveSet::Stages");

// /Script/CrewUI.FortProgressiveSetVariantLookupHotfix
// Kind: ScriptStruct; super: FortProgressiveSetVariantLookupValue
struct FFortProgressiveSetVariantLookupHotfix
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AssetID[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t ChannelTag[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    FName VariantTag; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortProgressiveSetVariantLookupHotfix, AssetID) == 8, "Offset mismatch for FFortProgressiveSetVariantLookupHotfix::AssetID");
static_assert(offsetof(FFortProgressiveSetVariantLookupHotfix, ChannelTag) == 12, "Offset mismatch for FFortProgressiveSetVariantLookupHotfix::ChannelTag");
static_assert(offsetof(FFortProgressiveSetVariantLookupHotfix, VariantTag) == 16, "Offset mismatch for FFortProgressiveSetVariantLookupHotfix::VariantTag");

// /Script/CrewUI.FortProgressiveSetVariantLookupKey
// Kind: ScriptStruct; super: none
struct FFortProgressiveSetVariantLookupKey
{
public:
    std::uint8_t AssetID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ChannelTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t VariantTag[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortProgressiveSetVariantLookupKey, AssetID) == 0, "Offset mismatch for FFortProgressiveSetVariantLookupKey::AssetID");
static_assert(offsetof(FFortProgressiveSetVariantLookupKey, ChannelTag) == 8, "Offset mismatch for FFortProgressiveSetVariantLookupKey::ChannelTag");
static_assert(offsetof(FFortProgressiveSetVariantLookupKey, VariantTag) == 12, "Offset mismatch for FFortProgressiveSetVariantLookupKey::VariantTag");

// /Script/CrewUI.FortProgressiveSetVariantLookupValue
// Kind: ScriptStruct; super: none
struct FFortProgressiveSetVariantLookupValue
{
public:
    std::int32_t SetIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t StageIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortProgressiveSetVariantLookupValue, SetIndex) == 0, "Offset mismatch for FFortProgressiveSetVariantLookupValue::SetIndex");
static_assert(offsetof(FFortProgressiveSetVariantLookupValue, StageIndex) == 4, "Offset mismatch for FFortProgressiveSetVariantLookupValue::StageIndex");

// /Script/CrewUI.FortProgressiveStageOverrideDisplayData
// Kind: ScriptStruct; super: none
struct FFortProgressiveStageOverrideDisplayData
{
public:
    TArray<void*> DefaultVariantPreviewOverrides; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t TileMaterial[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TileMaterialItemTextureProvider[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bAllowPreviewStyles; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortProgressiveStageOverrideDisplayData, DefaultVariantPreviewOverrides) == 0, "Offset mismatch for FFortProgressiveStageOverrideDisplayData::DefaultVariantPreviewOverrides");
static_assert(offsetof(FFortProgressiveStageOverrideDisplayData, DisplayName) == 16, "Offset mismatch for FFortProgressiveStageOverrideDisplayData::DisplayName");
static_assert(offsetof(FFortProgressiveStageOverrideDisplayData, TileMaterial) == 32, "Offset mismatch for FFortProgressiveStageOverrideDisplayData::TileMaterial");
static_assert(offsetof(FFortProgressiveStageOverrideDisplayData, TileMaterialItemTextureProvider) == 64, "Offset mismatch for FFortProgressiveStageOverrideDisplayData::TileMaterialItemTextureProvider");
static_assert(offsetof(FFortProgressiveStageOverrideDisplayData, bAllowPreviewStyles) == 96, "Offset mismatch for FFortProgressiveStageOverrideDisplayData::bAllowPreviewStyles");

// /Script/CrewUI.FortProgressiveUIStage
// Kind: ScriptStruct; super: none
struct FFortProgressiveUIStage
{
public:
    TArray<void*> Rewards; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseOverrideDisplayData; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t OverrideDisplayData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortProgressiveUIStage, Rewards) == 0, "Offset mismatch for FFortProgressiveUIStage::Rewards");
static_assert(offsetof(FFortProgressiveUIStage, bUseOverrideDisplayData) == 16, "Offset mismatch for FFortProgressiveUIStage::bUseOverrideDisplayData");
static_assert(offsetof(FFortProgressiveUIStage, OverrideDisplayData) == 24, "Offset mismatch for FFortProgressiveUIStage::OverrideDisplayData");

// /Script/CrewUI.CrewAsyncActions
// Kind: Class; super: FortAsyncAction_FromFunctionBase
class UCrewAsyncActions
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnOperationCompleted; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCrewAsyncActions, OnOperationCompleted) == 48, "Offset mismatch for UCrewAsyncActions::OnOperationCompleted");

// /Script/CrewUI.CrewBenefitVM
// Kind: Class; super: FortPerUserViewModel
class UCrewBenefitVM
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> CrewPackItems; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCrewBenefitVM, CrewPackItems) == 256, "Offset mismatch for UCrewBenefitVM::CrewPackItems");

// /Script/CrewUI.CrewBenefitsGroupVM
// Kind: Class; super: FortPerUserViewModel
class UCrewBenefitsGroupVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    TArray<void*> Benefits; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCrewBenefitsGroupVM, Label) == 120, "Offset mismatch for UCrewBenefitsGroupVM::Label");
static_assert(offsetof(UCrewBenefitsGroupVM, Benefits) == 136, "Offset mismatch for UCrewBenefitsGroupVM::Benefits");

// /Script/CrewUI.CrewCancellationInfoVM
// Kind: Class; super: MVVMViewModelBase
class UCrewCancellationInfoVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> BulletPoints; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCrewCancellationInfoVM, BulletPoints) == 104, "Offset mismatch for UCrewCancellationInfoVM::BulletPoints");

// /Script/CrewUI.CrewItemShopDataVM
// Kind: Class; super: MVVMViewModelBase
class UCrewItemShopDataVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t HighlightText[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t HighlightIntensity; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    FString TileImageURL; // 0x0080 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UCrewItemShopDataVM, HighlightText) == 104, "Offset mismatch for UCrewItemShopDataVM::HighlightText");
static_assert(offsetof(UCrewItemShopDataVM, HighlightIntensity) == 120, "Offset mismatch for UCrewItemShopDataVM::HighlightIntensity");
static_assert(offsetof(UCrewItemShopDataVM, TileImageURL) == 128, "Offset mismatch for UCrewItemShopDataVM::TileImageURL");

// /Script/CrewUI.CrewPlatformAndCountriesNotificationVM
// Kind: Class; super: FortPerUserViewModel
class UCrewPlatformAndCountriesNotificationVM
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t Title[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    std::uint8_t BodyText[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t CheckboxText[0x10]; // 0x00A8 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConfirmButtonText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t CancelSubscriptionButtonText[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t MoreInfoText[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t MoreInfoUrl[0x10]; // 0x00E8 (Size: 0x10, Type: TextProperty)
    TArray<void*> TableRows; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCrewPlatformAndCountriesNotificationVM, Title) == 136, "Offset mismatch for UCrewPlatformAndCountriesNotificationVM::Title");
static_assert(offsetof(UCrewPlatformAndCountriesNotificationVM, BodyText) == 152, "Offset mismatch for UCrewPlatformAndCountriesNotificationVM::BodyText");
static_assert(offsetof(UCrewPlatformAndCountriesNotificationVM, CheckboxText) == 168, "Offset mismatch for UCrewPlatformAndCountriesNotificationVM::CheckboxText");
static_assert(offsetof(UCrewPlatformAndCountriesNotificationVM, ConfirmButtonText) == 184, "Offset mismatch for UCrewPlatformAndCountriesNotificationVM::ConfirmButtonText");
static_assert(offsetof(UCrewPlatformAndCountriesNotificationVM, CancelSubscriptionButtonText) == 200, "Offset mismatch for UCrewPlatformAndCountriesNotificationVM::CancelSubscriptionButtonText");
static_assert(offsetof(UCrewPlatformAndCountriesNotificationVM, MoreInfoText) == 216, "Offset mismatch for UCrewPlatformAndCountriesNotificationVM::MoreInfoText");
static_assert(offsetof(UCrewPlatformAndCountriesNotificationVM, MoreInfoUrl) == 232, "Offset mismatch for UCrewPlatformAndCountriesNotificationVM::MoreInfoUrl");
static_assert(offsetof(UCrewPlatformAndCountriesNotificationVM, TableRows) == 248, "Offset mismatch for UCrewPlatformAndCountriesNotificationVM::TableRows");

// /Script/CrewUI.CrewProgressiveItemsVM
// Kind: Class; super: FortPerUserViewModel
class UCrewProgressiveItemsVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> AllSets; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VisibleSets; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviewData; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllSetsComplete; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    TWeakObjectPtr<void> RegisteredMcpProfile; // 0x00AC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UCrewProgressiveItemsVM, AllSets) == 120, "Offset mismatch for UCrewProgressiveItemsVM::AllSets");
static_assert(offsetof(UCrewProgressiveItemsVM, VisibleSets) == 136, "Offset mismatch for UCrewProgressiveItemsVM::VisibleSets");
static_assert(offsetof(UCrewProgressiveItemsVM, PreviewData) == 152, "Offset mismatch for UCrewProgressiveItemsVM::PreviewData");
static_assert(offsetof(UCrewProgressiveItemsVM, bAllSetsComplete) == 168, "Offset mismatch for UCrewProgressiveItemsVM::bAllSetsComplete");
static_assert(offsetof(UCrewProgressiveItemsVM, RegisteredMcpProfile) == 172, "Offset mismatch for UCrewProgressiveItemsVM::RegisteredMcpProfile");

// /Script/CrewUI.CrewProgressiveRewardVM
// Kind: Class; super: MVVMViewModelBase
class UCrewProgressiveRewardVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Name[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t TileMaterial[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TileMaterialItemTextureProvider[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Items; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviewVariants; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowPreviewStyles; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCrewProgressiveRewardVM, Name) == 104, "Offset mismatch for UCrewProgressiveRewardVM::Name");
static_assert(offsetof(UCrewProgressiveRewardVM, TileMaterial) == 120, "Offset mismatch for UCrewProgressiveRewardVM::TileMaterial");
static_assert(offsetof(UCrewProgressiveRewardVM, TileMaterialItemTextureProvider) == 152, "Offset mismatch for UCrewProgressiveRewardVM::TileMaterialItemTextureProvider");
static_assert(offsetof(UCrewProgressiveRewardVM, Items) == 184, "Offset mismatch for UCrewProgressiveRewardVM::Items");
static_assert(offsetof(UCrewProgressiveRewardVM, PreviewVariants) == 200, "Offset mismatch for UCrewProgressiveRewardVM::PreviewVariants");
static_assert(offsetof(UCrewProgressiveRewardVM, bAllowPreviewStyles) == 216, "Offset mismatch for UCrewProgressiveRewardVM::bAllowPreviewStyles");

// /Script/CrewUI.CrewProgressiveSelectionVM
// Kind: Class; super: FortPerUserViewModel
class UCrewProgressiveSelectionVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* SelectedReward; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SelectedStage; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* SelectedSet; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* PreviewItem; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviewData[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCrewProgressiveSelectionVM, SelectedReward) == 120, "Offset mismatch for UCrewProgressiveSelectionVM::SelectedReward");
static_assert(offsetof(UCrewProgressiveSelectionVM, SelectedStage) == 128, "Offset mismatch for UCrewProgressiveSelectionVM::SelectedStage");
static_assert(offsetof(UCrewProgressiveSelectionVM, SelectedSet) == 136, "Offset mismatch for UCrewProgressiveSelectionVM::SelectedSet");
static_assert(offsetof(UCrewProgressiveSelectionVM, PreviewItem) == 144, "Offset mismatch for UCrewProgressiveSelectionVM::PreviewItem");
static_assert(offsetof(UCrewProgressiveSelectionVM, PreviewData) == 152, "Offset mismatch for UCrewProgressiveSelectionVM::PreviewData");

// /Script/CrewUI.CrewProgressiveSetVM
// Kind: Class; super: MVVMViewModelBase
class UCrewProgressiveSetVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString FulfillmentId; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t Name[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t TileMaterial[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TileMaterialItemTextureProvider[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Stages; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CutoffDate[0x8]; // 0x00D8 (Size: 0x8, Type: StructProperty)
    std::uint8_t AcquisitionCutoffDate[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t AcquireStartDate[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t AcquisitionCutoffDateText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::int32_t UnlockedStages; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::uint8_t Progress; // 0x0104 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCrewProgressiveSetVM, FulfillmentId) == 104, "Offset mismatch for UCrewProgressiveSetVM::FulfillmentId");
static_assert(offsetof(UCrewProgressiveSetVM, Name) == 120, "Offset mismatch for UCrewProgressiveSetVM::Name");
static_assert(offsetof(UCrewProgressiveSetVM, TileMaterial) == 136, "Offset mismatch for UCrewProgressiveSetVM::TileMaterial");
static_assert(offsetof(UCrewProgressiveSetVM, TileMaterialItemTextureProvider) == 168, "Offset mismatch for UCrewProgressiveSetVM::TileMaterialItemTextureProvider");
static_assert(offsetof(UCrewProgressiveSetVM, Stages) == 200, "Offset mismatch for UCrewProgressiveSetVM::Stages");
static_assert(offsetof(UCrewProgressiveSetVM, CutoffDate) == 216, "Offset mismatch for UCrewProgressiveSetVM::CutoffDate");
static_assert(offsetof(UCrewProgressiveSetVM, AcquisitionCutoffDate) == 224, "Offset mismatch for UCrewProgressiveSetVM::AcquisitionCutoffDate");
static_assert(offsetof(UCrewProgressiveSetVM, AcquireStartDate) == 232, "Offset mismatch for UCrewProgressiveSetVM::AcquireStartDate");
static_assert(offsetof(UCrewProgressiveSetVM, AcquisitionCutoffDateText) == 240, "Offset mismatch for UCrewProgressiveSetVM::AcquisitionCutoffDateText");
static_assert(offsetof(UCrewProgressiveSetVM, UnlockedStages) == 256, "Offset mismatch for UCrewProgressiveSetVM::UnlockedStages");
static_assert(offsetof(UCrewProgressiveSetVM, Progress) == 260, "Offset mismatch for UCrewProgressiveSetVM::Progress");

// /Script/CrewUI.CrewProgressiveStageVM
// Kind: Class; super: MVVMViewModelBase
class UCrewProgressiveStageVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> Rewards; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UnlockCriteria[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::int32_t StageIndex; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t RemainingMonths; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsOwned; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCrewProgressiveStageVM, Rewards) == 104, "Offset mismatch for UCrewProgressiveStageVM::Rewards");
static_assert(offsetof(UCrewProgressiveStageVM, UnlockCriteria) == 120, "Offset mismatch for UCrewProgressiveStageVM::UnlockCriteria");
static_assert(offsetof(UCrewProgressiveStageVM, StageIndex) == 136, "Offset mismatch for UCrewProgressiveStageVM::StageIndex");
static_assert(offsetof(UCrewProgressiveStageVM, RemainingMonths) == 140, "Offset mismatch for UCrewProgressiveStageVM::RemainingMonths");
static_assert(offsetof(UCrewProgressiveStageVM, bIsOwned) == 144, "Offset mismatch for UCrewProgressiveStageVM::bIsOwned");

// /Script/CrewUI.CrewSelectionVM
// Kind: Class; super: FortPerUserViewModel
class UCrewSelectionVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* HoveredBenefit; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SelectedBenefit; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCrewSelectionVM, HoveredBenefit) == 120, "Offset mismatch for UCrewSelectionVM::HoveredBenefit");
static_assert(offsetof(UCrewSelectionVM, SelectedBenefit) == 128, "Offset mismatch for UCrewSelectionVM::SelectedBenefit");

// /Script/CrewUI.CrewShopOfferOverride
// Kind: Class; super: FortItemShopOfferInspectionScreenWidgetOverrideBase
class UCrewShopOfferOverride
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> WidgetToShow; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UCrewShopOfferOverride, WidgetToShow) == 40, "Offset mismatch for UCrewShopOfferOverride::WidgetToShow");

// /Script/CrewUI.CrewStandaloneSubscriptionContentContainer
// Kind: Class; super: FortStandaloneFrontend
class UCrewStandaloneSubscriptionContentContainer
{
public:
    std::uint8_t Pad_0000[0x588]; // 0x0000
    void* Widget_CrewContentContainer; // 0x0588 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCrewStandaloneSubscriptionContentContainer, Widget_CrewContentContainer) == 1416, "Offset mismatch for UCrewStandaloneSubscriptionContentContainer::Widget_CrewContentContainer");

// /Script/CrewUI.CrewSubscriptionContentContainer
// Kind: Class; super: CommonActivatableWidget
class UCrewSubscriptionContentContainer
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    TArray<void*> TabsData; // 0x04D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NextTabInputAction[0x10]; // 0x04E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PreviousTabInputAction[0x10]; // 0x04F0 (Size: 0x10, Type: StructProperty)
    void* EntryBox_Tabs; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_Tabs; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Tabs; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* Widget_TabsContainer; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    float SpacingAdjustmentForTabs; // 0x0520 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ContentSetup[0x1]; // 0x0524 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCrewSubscriptionContentContainer, TabsData) == 1232, "Offset mismatch for UCrewSubscriptionContentContainer::TabsData");
static_assert(offsetof(UCrewSubscriptionContentContainer, NextTabInputAction) == 1248, "Offset mismatch for UCrewSubscriptionContentContainer::NextTabInputAction");
static_assert(offsetof(UCrewSubscriptionContentContainer, PreviousTabInputAction) == 1264, "Offset mismatch for UCrewSubscriptionContentContainer::PreviousTabInputAction");
static_assert(offsetof(UCrewSubscriptionContentContainer, EntryBox_Tabs) == 1280, "Offset mismatch for UCrewSubscriptionContentContainer::EntryBox_Tabs");
static_assert(offsetof(UCrewSubscriptionContentContainer, ButtonGroup_Tabs) == 1288, "Offset mismatch for UCrewSubscriptionContentContainer::ButtonGroup_Tabs");
static_assert(offsetof(UCrewSubscriptionContentContainer, Switcher_Tabs) == 1296, "Offset mismatch for UCrewSubscriptionContentContainer::Switcher_Tabs");
static_assert(offsetof(UCrewSubscriptionContentContainer, Widget_TabsContainer) == 1304, "Offset mismatch for UCrewSubscriptionContentContainer::Widget_TabsContainer");
static_assert(offsetof(UCrewSubscriptionContentContainer, SpacingAdjustmentForTabs) == 1312, "Offset mismatch for UCrewSubscriptionContentContainer::SpacingAdjustmentForTabs");
static_assert(offsetof(UCrewSubscriptionContentContainer, ContentSetup) == 1316, "Offset mismatch for UCrewSubscriptionContentContainer::ContentSetup");

// /Script/CrewUI.CrewSubscriptionModalInfoVM
// Kind: Class; super: MVVMViewModelBase
class UCrewSubscriptionModalInfoVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString ModalId; // 0x0068 (Size: 0x10, Type: StrProperty)
    TArray<void*> Entries; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    FString QrCodeImageUrl; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UCrewSubscriptionModalInfoVM, ModalId) == 104, "Offset mismatch for UCrewSubscriptionModalInfoVM::ModalId");
static_assert(offsetof(UCrewSubscriptionModalInfoVM, Entries) == 120, "Offset mismatch for UCrewSubscriptionModalInfoVM::Entries");
static_assert(offsetof(UCrewSubscriptionModalInfoVM, QrCodeImageUrl) == 136, "Offset mismatch for UCrewSubscriptionModalInfoVM::QrCodeImageUrl");

// /Script/CrewUI.CrewUIGameFeatureAction
// Kind: Class; super: FortUIGameFeatureAction
class UCrewUIGameFeatureAction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CrewContentContainerClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CrewStandaloneContentContainerClass[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ProgressionScreenClass[0x20]; // 0x0068 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CrewPriceChangeAcknowledgeModalClass[0x20]; // 0x0088 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t MultiSubAlertModalClass[0x20]; // 0x00A8 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> ProgressiveCosmeticSets; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomCrewPreviewData; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ProgressiveSetVariantLookup; // 0x00E8 (Size: 0x10, Type: MapProperty)
    TArray<void*> ProgressiveSetVariantLookupHotfix; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> HeaderImage; // 0x0108 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UCrewUIGameFeatureAction, CrewContentContainerClass) == 40, "Offset mismatch for UCrewUIGameFeatureAction::CrewContentContainerClass");
static_assert(offsetof(UCrewUIGameFeatureAction, CrewStandaloneContentContainerClass) == 72, "Offset mismatch for UCrewUIGameFeatureAction::CrewStandaloneContentContainerClass");
static_assert(offsetof(UCrewUIGameFeatureAction, ProgressionScreenClass) == 104, "Offset mismatch for UCrewUIGameFeatureAction::ProgressionScreenClass");
static_assert(offsetof(UCrewUIGameFeatureAction, CrewPriceChangeAcknowledgeModalClass) == 136, "Offset mismatch for UCrewUIGameFeatureAction::CrewPriceChangeAcknowledgeModalClass");
static_assert(offsetof(UCrewUIGameFeatureAction, MultiSubAlertModalClass) == 168, "Offset mismatch for UCrewUIGameFeatureAction::MultiSubAlertModalClass");
static_assert(offsetof(UCrewUIGameFeatureAction, ProgressiveCosmeticSets) == 200, "Offset mismatch for UCrewUIGameFeatureAction::ProgressiveCosmeticSets");
static_assert(offsetof(UCrewUIGameFeatureAction, CustomCrewPreviewData) == 216, "Offset mismatch for UCrewUIGameFeatureAction::CustomCrewPreviewData");
static_assert(offsetof(UCrewUIGameFeatureAction, ProgressiveSetVariantLookup) == 232, "Offset mismatch for UCrewUIGameFeatureAction::ProgressiveSetVariantLookup");
static_assert(offsetof(UCrewUIGameFeatureAction, ProgressiveSetVariantLookupHotfix) == 248, "Offset mismatch for UCrewUIGameFeatureAction::ProgressiveSetVariantLookupHotfix");
static_assert(offsetof(UCrewUIGameFeatureAction, HeaderImage) == 264, "Offset mismatch for UCrewUIGameFeatureAction::HeaderImage");

// /Script/CrewUI.CrewUIGameFeatureDataAction
// Kind: Class; super: FortUIGameFeatureAction
class UCrewUIGameFeatureDataAction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> StandaloneCrewUpsellScreen; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UCrewUIGameFeatureDataAction, StandaloneCrewUpsellScreen) == 40, "Offset mismatch for UCrewUIGameFeatureDataAction::StandaloneCrewUpsellScreen");

// /Script/CrewUI.CrewVM
// Kind: Class; super: FortPerUserViewModel
class UCrewVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t SubscriptionState; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsLegacySubscription; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPurchaseSubscription; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x007B
    std::uint8_t SubscriptionStartDate[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    TArray<void*> SubscriptionPlatforms; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumAutoRenewSubscriptions; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x009C
    std::uint8_t Title[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Notice[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    FString BackgroundURL; // 0x00E0 (Size: 0x10, Type: StrProperty)
    FString SubscribedBackgroundURL; // 0x00F0 (Size: 0x10, Type: StrProperty)
    FString TileImageURL; // 0x0100 (Size: 0x10, Type: StrProperty)
    std::uint8_t ImageReferenceTable[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    FString OverrideUpsellPass; // 0x0120 (Size: 0x10, Type: StrProperty)
    std::uint8_t bCrewOnRightInUpsell; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCrew50PercentInUpsell; // 0x0131 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCrewOnlyInUpsell; // 0x0132 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPassOnlyInUpsell; // 0x0133 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0134
    std::uint8_t CMSUpsellConfig[0x50]; // 0x0138 (Size: 0x50, Type: StructProperty)
    std::uint8_t ExperimentUpsellConfig[0x50]; // 0x0188 (Size: 0x50, Type: StructProperty)
    std::uint8_t Disclaimer[0x10]; // 0x01D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SubscriptionButtonText[0x10]; // 0x01E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t PriceText[0x10]; // 0x01F8 (Size: 0x10, Type: TextProperty)
    std::uint8_t UserInformationTextPrimary[0x10]; // 0x0208 (Size: 0x10, Type: TextProperty)
    std::uint8_t UserInformationTextSecondary[0x10]; // 0x0218 (Size: 0x10, Type: TextProperty)
    std::uint8_t PaymentLegalText[0x10]; // 0x0228 (Size: 0x10, Type: TextProperty)
    std::uint8_t ProgressiveInfoNewStagesUnlockFinePrint[0x10]; // 0x0238 (Size: 0x10, Type: TextProperty)
    TArray<void*> CrewPackItems; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* CancellationInfo; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    void* SubscriptionShopData; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    void* CrewShopData; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    void* CrewOffer; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BenefitsGroups; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AltBenefitsGroups; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> BenefitSetsByName; // 0x0298 (Size: 0x10, Type: MapProperty)
    TArray<void*> SubscriptionModals; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UpsellBenefits[0x70]; // 0x02B8 (Size: 0x70, Type: StructProperty)
    void* PreviewBenefit; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> RegisteredMcpProfile; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UCrewVM, SubscriptionState) == 120, "Offset mismatch for UCrewVM::SubscriptionState");
static_assert(offsetof(UCrewVM, bIsLegacySubscription) == 121, "Offset mismatch for UCrewVM::bIsLegacySubscription");
static_assert(offsetof(UCrewVM, bCanPurchaseSubscription) == 122, "Offset mismatch for UCrewVM::bCanPurchaseSubscription");
static_assert(offsetof(UCrewVM, SubscriptionStartDate) == 128, "Offset mismatch for UCrewVM::SubscriptionStartDate");
static_assert(offsetof(UCrewVM, SubscriptionPlatforms) == 136, "Offset mismatch for UCrewVM::SubscriptionPlatforms");
static_assert(offsetof(UCrewVM, NumAutoRenewSubscriptions) == 152, "Offset mismatch for UCrewVM::NumAutoRenewSubscriptions");
static_assert(offsetof(UCrewVM, Title) == 160, "Offset mismatch for UCrewVM::Title");
static_assert(offsetof(UCrewVM, Description) == 176, "Offset mismatch for UCrewVM::Description");
static_assert(offsetof(UCrewVM, ShortDescription) == 192, "Offset mismatch for UCrewVM::ShortDescription");
static_assert(offsetof(UCrewVM, Notice) == 208, "Offset mismatch for UCrewVM::Notice");
static_assert(offsetof(UCrewVM, BackgroundURL) == 224, "Offset mismatch for UCrewVM::BackgroundURL");
static_assert(offsetof(UCrewVM, SubscribedBackgroundURL) == 240, "Offset mismatch for UCrewVM::SubscribedBackgroundURL");
static_assert(offsetof(UCrewVM, TileImageURL) == 256, "Offset mismatch for UCrewVM::TileImageURL");
static_assert(offsetof(UCrewVM, ImageReferenceTable) == 272, "Offset mismatch for UCrewVM::ImageReferenceTable");
static_assert(offsetof(UCrewVM, OverrideUpsellPass) == 288, "Offset mismatch for UCrewVM::OverrideUpsellPass");
static_assert(offsetof(UCrewVM, bCrewOnRightInUpsell) == 304, "Offset mismatch for UCrewVM::bCrewOnRightInUpsell");
static_assert(offsetof(UCrewVM, bCrew50PercentInUpsell) == 305, "Offset mismatch for UCrewVM::bCrew50PercentInUpsell");
static_assert(offsetof(UCrewVM, bCrewOnlyInUpsell) == 306, "Offset mismatch for UCrewVM::bCrewOnlyInUpsell");
static_assert(offsetof(UCrewVM, bPassOnlyInUpsell) == 307, "Offset mismatch for UCrewVM::bPassOnlyInUpsell");
static_assert(offsetof(UCrewVM, CMSUpsellConfig) == 312, "Offset mismatch for UCrewVM::CMSUpsellConfig");
static_assert(offsetof(UCrewVM, ExperimentUpsellConfig) == 392, "Offset mismatch for UCrewVM::ExperimentUpsellConfig");
static_assert(offsetof(UCrewVM, Disclaimer) == 472, "Offset mismatch for UCrewVM::Disclaimer");
static_assert(offsetof(UCrewVM, SubscriptionButtonText) == 488, "Offset mismatch for UCrewVM::SubscriptionButtonText");
static_assert(offsetof(UCrewVM, PriceText) == 504, "Offset mismatch for UCrewVM::PriceText");
static_assert(offsetof(UCrewVM, UserInformationTextPrimary) == 520, "Offset mismatch for UCrewVM::UserInformationTextPrimary");
static_assert(offsetof(UCrewVM, UserInformationTextSecondary) == 536, "Offset mismatch for UCrewVM::UserInformationTextSecondary");
static_assert(offsetof(UCrewVM, PaymentLegalText) == 552, "Offset mismatch for UCrewVM::PaymentLegalText");
static_assert(offsetof(UCrewVM, ProgressiveInfoNewStagesUnlockFinePrint) == 568, "Offset mismatch for UCrewVM::ProgressiveInfoNewStagesUnlockFinePrint");
static_assert(offsetof(UCrewVM, CrewPackItems) == 584, "Offset mismatch for UCrewVM::CrewPackItems");
static_assert(offsetof(UCrewVM, CancellationInfo) == 600, "Offset mismatch for UCrewVM::CancellationInfo");
static_assert(offsetof(UCrewVM, SubscriptionShopData) == 608, "Offset mismatch for UCrewVM::SubscriptionShopData");
static_assert(offsetof(UCrewVM, CrewShopData) == 616, "Offset mismatch for UCrewVM::CrewShopData");
static_assert(offsetof(UCrewVM, CrewOffer) == 624, "Offset mismatch for UCrewVM::CrewOffer");
static_assert(offsetof(UCrewVM, BenefitsGroups) == 632, "Offset mismatch for UCrewVM::BenefitsGroups");
static_assert(offsetof(UCrewVM, AltBenefitsGroups) == 648, "Offset mismatch for UCrewVM::AltBenefitsGroups");
static_assert(offsetof(UCrewVM, BenefitSetsByName) == 664, "Offset mismatch for UCrewVM::BenefitSetsByName");
static_assert(offsetof(UCrewVM, SubscriptionModals) == 680, "Offset mismatch for UCrewVM::SubscriptionModals");
static_assert(offsetof(UCrewVM, UpsellBenefits) == 696, "Offset mismatch for UCrewVM::UpsellBenefits");
static_assert(offsetof(UCrewVM, PreviewBenefit) == 808, "Offset mismatch for UCrewVM::PreviewBenefit");
static_assert(offsetof(UCrewVM, RegisteredMcpProfile) == 816, "Offset mismatch for UCrewVM::RegisteredMcpProfile");

// /Script/CrewUI.FortAsyncAction_CrewCancelSubscription
// Kind: Class; super: BlueprintAsyncActionBase
class UFortAsyncAction_CrewCancelSubscription
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnOperationCompleted; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortAsyncAction_CrewCancelSubscription, OnOperationCompleted) == 48, "Offset mismatch for UFortAsyncAction_CrewCancelSubscription::OnOperationCompleted");

// /Script/CrewUI.FortProgressiveContentContainer
// Kind: Class; super: FortSubscriptionContentBase
class UFortProgressiveContentContainer
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    void* Switcher_PrimaryContent; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Widget_ProgressiveTableOfContentsScreen; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Widget_ProgressiveItemScreen; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortProgressiveContentContainer, Switcher_PrimaryContent) == 1232, "Offset mismatch for UFortProgressiveContentContainer::Switcher_PrimaryContent");
static_assert(offsetof(UFortProgressiveContentContainer, Widget_ProgressiveTableOfContentsScreen) == 1240, "Offset mismatch for UFortProgressiveContentContainer::Widget_ProgressiveTableOfContentsScreen");
static_assert(offsetof(UFortProgressiveContentContainer, Widget_ProgressiveItemScreen) == 1248, "Offset mismatch for UFortProgressiveContentContainer::Widget_ProgressiveItemScreen");

// /Script/CrewUI.FortProgressiveContentInterface
// Kind: Class; super: Interface
class UFortProgressiveContentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CrewUI.FortProgressiveItemScreen
// Kind: Class; super: FortProgressiveScreenBase
class UFortProgressiveItemScreen
{
public:
    std::uint8_t Pad_0000[0x4F8]; // 0x0000
    TSoftClassPtr<void> MoreInfoModalClass; // 0x04F8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortProgressiveItemScreen, MoreInfoModalClass) == 1272, "Offset mismatch for UFortProgressiveItemScreen::MoreInfoModalClass");

// /Script/CrewUI.FortProgressiveScreenBase
// Kind: Class; super: CommonActivatableWidget
class UFortProgressiveScreenBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortProgressiveScreenBase, bIsBackHandler) == 816, "Offset mismatch for UFortProgressiveScreenBase::bIsBackHandler");
static_assert(offsetof(UFortProgressiveScreenBase, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UFortProgressiveScreenBase::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UFortProgressiveScreenBase, OverrideBackActionDisplayName) == 824, "Offset mismatch for UFortProgressiveScreenBase::OverrideBackActionDisplayName");
static_assert(offsetof(UFortProgressiveScreenBase, bAutoActivate) == 840, "Offset mismatch for UFortProgressiveScreenBase::bAutoActivate");
static_assert(offsetof(UFortProgressiveScreenBase, bSupportsActivationFocus) == 841, "Offset mismatch for UFortProgressiveScreenBase::bSupportsActivationFocus");
static_assert(offsetof(UFortProgressiveScreenBase, bIsModal) == 842, "Offset mismatch for UFortProgressiveScreenBase::bIsModal");
static_assert(offsetof(UFortProgressiveScreenBase, bAutoRestoreFocus) == 843, "Offset mismatch for UFortProgressiveScreenBase::bAutoRestoreFocus");
static_assert(offsetof(UFortProgressiveScreenBase, bOverrideActionDomain) == 844, "Offset mismatch for UFortProgressiveScreenBase::bOverrideActionDomain");
static_assert(offsetof(UFortProgressiveScreenBase, InputMapping) == 848, "Offset mismatch for UFortProgressiveScreenBase::InputMapping");
static_assert(offsetof(UFortProgressiveScreenBase, InputMappingPriority) == 856, "Offset mismatch for UFortProgressiveScreenBase::InputMappingPriority");
static_assert(offsetof(UFortProgressiveScreenBase, InputModeTagsToAdd) == 864, "Offset mismatch for UFortProgressiveScreenBase::InputModeTagsToAdd");
static_assert(offsetof(UFortProgressiveScreenBase, InputModeTagsToRemove) == 896, "Offset mismatch for UFortProgressiveScreenBase::InputModeTagsToRemove");
static_assert(offsetof(UFortProgressiveScreenBase, ActionDomainOverride) == 928, "Offset mismatch for UFortProgressiveScreenBase::ActionDomainOverride");
static_assert(offsetof(UFortProgressiveScreenBase, BP_OnWidgetActivated) == 960, "Offset mismatch for UFortProgressiveScreenBase::BP_OnWidgetActivated");
static_assert(offsetof(UFortProgressiveScreenBase, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UFortProgressiveScreenBase::BP_OnWidgetDeactivated");
static_assert(offsetof(UFortProgressiveScreenBase, bIsActive) == 992, "Offset mismatch for UFortProgressiveScreenBase::bIsActive");
static_assert(offsetof(UFortProgressiveScreenBase, VisibilityBoundWidgets) == 1000, "Offset mismatch for UFortProgressiveScreenBase::VisibilityBoundWidgets");
static_assert(offsetof(UFortProgressiveScreenBase, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UFortProgressiveScreenBase::bSetVisibilityOnActivated");
static_assert(offsetof(UFortProgressiveScreenBase, ActivatedVisibility) == 1177, "Offset mismatch for UFortProgressiveScreenBase::ActivatedVisibility");
static_assert(offsetof(UFortProgressiveScreenBase, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UFortProgressiveScreenBase::bSetVisibilityOnDeactivated");
static_assert(offsetof(UFortProgressiveScreenBase, DeactivatedVisibility) == 1179, "Offset mismatch for UFortProgressiveScreenBase::DeactivatedVisibility");

// /Script/CrewUI.FortProgressiveTableOfContentsScreen
// Kind: Class; super: FortProgressiveScreenBase
class UFortProgressiveTableOfContentsScreen
{
public:
    std::uint8_t Pad_0000[0x4F8]; // 0x0000
    TSoftClassPtr<void> MoreInfoModalClass; // 0x04F8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortProgressiveTableOfContentsScreen, MoreInfoModalClass) == 1272, "Offset mismatch for UFortProgressiveTableOfContentsScreen::MoreInfoModalClass");
