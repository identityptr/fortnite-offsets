/**
 * decamp dumper generated SDK
 * Package: /Script/SeasonPass
 */
#pragma once
#include "Basic.h"

// /Script/SeasonPass.FortEvent_SeasonPassOperationCompleted
// Kind: ScriptStruct; super: none
struct FFortEvent_SeasonPassOperationCompleted
{
public:
    TArray<void*> ItemOfferIds; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OperationTag[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEvent_SeasonPassOperationCompleted, ItemOfferIds) == 0, "Offset mismatch for FFortEvent_SeasonPassOperationCompleted::ItemOfferIds");
static_assert(offsetof(FFortEvent_SeasonPassOperationCompleted, OperationTag) == 16, "Offset mismatch for FFortEvent_SeasonPassOperationCompleted::OperationTag");

// /Script/SeasonPass.SeasonPassCMSData
// Kind: ScriptStruct; super: none
struct FSeasonPassCMSData
{
public:
    FString PurchaseBackgroundURL; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PurchaseConfirmBackgroundURL; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t PurchaseDisclaimer[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t PurchaseContentDisclaimer[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t PurchaseDescription[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t PurchaseConfirmDescription[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t LandingPageDisclaimer[0x10]; // 0x0060 (Size: 0x10, Type: TextProperty)
    std::uint8_t LevelPurchaseDisclaimer[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t SeasonEndDateText[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t SeasonEndDateTime[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    std::uint8_t UpsellBenefits[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t PassThemeData[0x40]; // 0x00A8 (Size: 0x40, Type: StructProperty)
    std::uint8_t PassElementThemeDataList[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSeasonPassCMSData, PurchaseBackgroundURL) == 0, "Offset mismatch for FSeasonPassCMSData::PurchaseBackgroundURL");
static_assert(offsetof(FSeasonPassCMSData, PurchaseConfirmBackgroundURL) == 16, "Offset mismatch for FSeasonPassCMSData::PurchaseConfirmBackgroundURL");
static_assert(offsetof(FSeasonPassCMSData, PurchaseDisclaimer) == 32, "Offset mismatch for FSeasonPassCMSData::PurchaseDisclaimer");
static_assert(offsetof(FSeasonPassCMSData, PurchaseContentDisclaimer) == 48, "Offset mismatch for FSeasonPassCMSData::PurchaseContentDisclaimer");
static_assert(offsetof(FSeasonPassCMSData, PurchaseDescription) == 64, "Offset mismatch for FSeasonPassCMSData::PurchaseDescription");
static_assert(offsetof(FSeasonPassCMSData, PurchaseConfirmDescription) == 80, "Offset mismatch for FSeasonPassCMSData::PurchaseConfirmDescription");
static_assert(offsetof(FSeasonPassCMSData, LandingPageDisclaimer) == 96, "Offset mismatch for FSeasonPassCMSData::LandingPageDisclaimer");
static_assert(offsetof(FSeasonPassCMSData, LevelPurchaseDisclaimer) == 112, "Offset mismatch for FSeasonPassCMSData::LevelPurchaseDisclaimer");
static_assert(offsetof(FSeasonPassCMSData, SeasonEndDateText) == 128, "Offset mismatch for FSeasonPassCMSData::SeasonEndDateText");
static_assert(offsetof(FSeasonPassCMSData, SeasonEndDateTime) == 144, "Offset mismatch for FSeasonPassCMSData::SeasonEndDateTime");
static_assert(offsetof(FSeasonPassCMSData, UpsellBenefits) == 152, "Offset mismatch for FSeasonPassCMSData::UpsellBenefits");
static_assert(offsetof(FSeasonPassCMSData, PassThemeData) == 168, "Offset mismatch for FSeasonPassCMSData::PassThemeData");
static_assert(offsetof(FSeasonPassCMSData, PassElementThemeDataList) == 232, "Offset mismatch for FSeasonPassCMSData::PassElementThemeDataList");

// /Script/SeasonPass.SeasonPassCategoryThemeData
// Kind: ScriptStruct; super: SeasonPassElementThemeData
struct FSeasonPassCategoryThemeData
{
public:
    FString PrimaryAssetId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ImageReferenceTable[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorReferenceTable[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t TextReferenceTable[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSeasonPassCategoryThemeData, PrimaryAssetId) == 0, "Offset mismatch for FSeasonPassCategoryThemeData::PrimaryAssetId");
static_assert(offsetof(FSeasonPassCategoryThemeData, ImageReferenceTable) == 16, "Offset mismatch for FSeasonPassCategoryThemeData::ImageReferenceTable");
static_assert(offsetof(FSeasonPassCategoryThemeData, ColorReferenceTable) == 32, "Offset mismatch for FSeasonPassCategoryThemeData::ColorReferenceTable");
static_assert(offsetof(FSeasonPassCategoryThemeData, TextReferenceTable) == 48, "Offset mismatch for FSeasonPassCategoryThemeData::TextReferenceTable");

// /Script/SeasonPass.SeasonPassElementDisclaimerData
// Kind: ScriptStruct; super: none
struct FSeasonPassElementDisclaimerData
{
public:
    std::uint8_t Header[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Text[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> Background; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSeasonPassElementDisclaimerData, Header) == 0, "Offset mismatch for FSeasonPassElementDisclaimerData::Header");
static_assert(offsetof(FSeasonPassElementDisclaimerData, Text) == 16, "Offset mismatch for FSeasonPassElementDisclaimerData::Text");
static_assert(offsetof(FSeasonPassElementDisclaimerData, Icon) == 32, "Offset mismatch for FSeasonPassElementDisclaimerData::Icon");
static_assert(offsetof(FSeasonPassElementDisclaimerData, Background) == 64, "Offset mismatch for FSeasonPassElementDisclaimerData::Background");

// /Script/SeasonPass.SeasonPassElementThemeCMSDataList
// Kind: ScriptStruct; super: none
struct FSeasonPassElementThemeCMSDataList
{
public:
    TArray<void*> PassElementThemeData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSeasonPassElementThemeCMSDataList, PassElementThemeData) == 0, "Offset mismatch for FSeasonPassElementThemeCMSDataList::PassElementThemeData");

// /Script/SeasonPass.SeasonPassElementThemeData
// Kind: ScriptStruct; super: none
struct FSeasonPassElementThemeData
{
public:
    FString PrimaryAssetId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ImageReferenceTable[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorReferenceTable[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t TextReferenceTable[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSeasonPassElementThemeData, PrimaryAssetId) == 0, "Offset mismatch for FSeasonPassElementThemeData::PrimaryAssetId");
static_assert(offsetof(FSeasonPassElementThemeData, ImageReferenceTable) == 16, "Offset mismatch for FSeasonPassElementThemeData::ImageReferenceTable");
static_assert(offsetof(FSeasonPassElementThemeData, ColorReferenceTable) == 32, "Offset mismatch for FSeasonPassElementThemeData::ColorReferenceTable");
static_assert(offsetof(FSeasonPassElementThemeData, TextReferenceTable) == 48, "Offset mismatch for FSeasonPassElementThemeData::TextReferenceTable");

// /Script/SeasonPass.SeasonPassNextRewardInfo
// Kind: ScriptStruct; super: none
struct FSeasonPassNextRewardInfo
{
public:
    void* RewardVM; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LevelsRemaining; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSeasonPassNextRewardInfo, RewardVM) == 0, "Offset mismatch for FSeasonPassNextRewardInfo::RewardVM");
static_assert(offsetof(FSeasonPassNextRewardInfo, LevelsRemaining) == 8, "Offset mismatch for FSeasonPassNextRewardInfo::LevelsRemaining");

// /Script/SeasonPass.SeasonPassThemeData
// Kind: ScriptStruct; super: SeasonPassElementThemeData
struct FSeasonPassThemeData
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t TitleColor[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t TitleMaterial[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TitleOutline[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t SeasonColor[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t ProgressionColor[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t OverlayColor[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t VaultBackgroundMaterial[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GiftboxVaultBackgroundMaterial[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UIBackgroundMaterial[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UpsellBackgroundMaterial[0x20]; // 0x0120 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CrewCategoryBackgroundMaterial[0x20]; // 0x0140 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CustomLogo[0x20]; // 0x0160 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CustomSeasonTitle[0x10]; // 0x0180 (Size: 0x10, Type: TextProperty)
    std::uint8_t CustomSeasonTitleColor[0x10]; // 0x0190 (Size: 0x10, Type: StructProperty)
    std::uint8_t Upsell2BackgrounMaterial[0x20]; // 0x01A0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> BenefitsByType; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSeasonPassThemeData, TitleColor) == 64, "Offset mismatch for FSeasonPassThemeData::TitleColor");
static_assert(offsetof(FSeasonPassThemeData, TitleMaterial) == 80, "Offset mismatch for FSeasonPassThemeData::TitleMaterial");
static_assert(offsetof(FSeasonPassThemeData, TitleOutline) == 112, "Offset mismatch for FSeasonPassThemeData::TitleOutline");
static_assert(offsetof(FSeasonPassThemeData, SeasonColor) == 144, "Offset mismatch for FSeasonPassThemeData::SeasonColor");
static_assert(offsetof(FSeasonPassThemeData, ProgressionColor) == 160, "Offset mismatch for FSeasonPassThemeData::ProgressionColor");
static_assert(offsetof(FSeasonPassThemeData, OverlayColor) == 176, "Offset mismatch for FSeasonPassThemeData::OverlayColor");
static_assert(offsetof(FSeasonPassThemeData, VaultBackgroundMaterial) == 192, "Offset mismatch for FSeasonPassThemeData::VaultBackgroundMaterial");
static_assert(offsetof(FSeasonPassThemeData, GiftboxVaultBackgroundMaterial) == 224, "Offset mismatch for FSeasonPassThemeData::GiftboxVaultBackgroundMaterial");
static_assert(offsetof(FSeasonPassThemeData, UIBackgroundMaterial) == 256, "Offset mismatch for FSeasonPassThemeData::UIBackgroundMaterial");
static_assert(offsetof(FSeasonPassThemeData, UpsellBackgroundMaterial) == 288, "Offset mismatch for FSeasonPassThemeData::UpsellBackgroundMaterial");
static_assert(offsetof(FSeasonPassThemeData, CrewCategoryBackgroundMaterial) == 320, "Offset mismatch for FSeasonPassThemeData::CrewCategoryBackgroundMaterial");
static_assert(offsetof(FSeasonPassThemeData, CustomLogo) == 352, "Offset mismatch for FSeasonPassThemeData::CustomLogo");
static_assert(offsetof(FSeasonPassThemeData, CustomSeasonTitle) == 384, "Offset mismatch for FSeasonPassThemeData::CustomSeasonTitle");
static_assert(offsetof(FSeasonPassThemeData, CustomSeasonTitleColor) == 400, "Offset mismatch for FSeasonPassThemeData::CustomSeasonTitleColor");
static_assert(offsetof(FSeasonPassThemeData, Upsell2BackgrounMaterial) == 416, "Offset mismatch for FSeasonPassThemeData::Upsell2BackgrounMaterial");
static_assert(offsetof(FSeasonPassThemeData, BenefitsByType) == 448, "Offset mismatch for FSeasonPassThemeData::BenefitsByType");

// /Script/SeasonPass.SeasonPassUpsellBenefits
// Kind: ScriptStruct; super: none
struct FSeasonPassUpsellBenefits
{
public:
    TArray<void*> BenefitsByType; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSeasonPassUpsellBenefits, BenefitsByType) == 0, "Offset mismatch for FSeasonPassUpsellBenefits::BenefitsByType");

// /Script/SeasonPass.FortAsyncAction_SeasonPassOperation
// Kind: Class; super: FortAsyncAction_FromFunctionBase
class UFortAsyncAction_SeasonPassOperation
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* GiftBoxToDisplay; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAsyncAction_SeasonPassOperation, GiftBoxToDisplay) == 96, "Offset mismatch for UFortAsyncAction_SeasonPassOperation::GiftBoxToDisplay");

// /Script/SeasonPass.MSEEWalletVM
// Kind: Class; super: FortPerUserViewModel
class UMSEEWalletVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t CurrentCurrency; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t SecondCurrentCurrency; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMSEEWalletVM, CurrentCurrency) == 120, "Offset mismatch for UMSEEWalletVM::CurrentCurrency");
static_assert(offsetof(UMSEEWalletVM, SecondCurrentCurrency) == 124, "Offset mismatch for UMSEEWalletVM::SecondCurrentCurrency");

// /Script/SeasonPass.SeasonPassBundleOfferVM
// Kind: Class; super: FortSimpleOfferVM
class USeasonPassBundleOfferVM
{
public:
    std::uint8_t Pad_0000[0x7C]; // 0x0000
    std::uint8_t bIsOwned; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x007D
    std::uint8_t InDate[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    std::uint8_t OutDate[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USeasonPassBundleOfferVM, bIsOwned) == 124, "Offset mismatch for USeasonPassBundleOfferVM::bIsOwned");
static_assert(offsetof(USeasonPassBundleOfferVM, InDate) == 128, "Offset mismatch for USeasonPassBundleOfferVM::InDate");
static_assert(offsetof(USeasonPassBundleOfferVM, OutDate) == 136, "Offset mismatch for USeasonPassBundleOfferVM::OutDate");

// /Script/SeasonPass.SeasonPassCategoryData
// Kind: Class; super: SeasonPassCategoryDataBase
class USeasonPassCategoryData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString GroupName; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t Title[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::uint8_t Subtitle[0x10]; // 0x0058 (Size: 0x10, Type: TextProperty)
    std::uint8_t PageTitle[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t Image[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Icon[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> PreviewData; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClaimSetsPreviewData; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanBuyLevels; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHideProgressBar; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowStatusBar; // 0x00DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowNavigationTabs; // 0x00DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00DC
    void* DependentCategory; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Requirements; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ThemeData[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USeasonPassCategoryData, GroupName) == 56, "Offset mismatch for USeasonPassCategoryData::GroupName");
static_assert(offsetof(USeasonPassCategoryData, Title) == 72, "Offset mismatch for USeasonPassCategoryData::Title");
static_assert(offsetof(USeasonPassCategoryData, Subtitle) == 88, "Offset mismatch for USeasonPassCategoryData::Subtitle");
static_assert(offsetof(USeasonPassCategoryData, PageTitle) == 104, "Offset mismatch for USeasonPassCategoryData::PageTitle");
static_assert(offsetof(USeasonPassCategoryData, Image) == 120, "Offset mismatch for USeasonPassCategoryData::Image");
static_assert(offsetof(USeasonPassCategoryData, Icon) == 152, "Offset mismatch for USeasonPassCategoryData::Icon");
static_assert(offsetof(USeasonPassCategoryData, PreviewData) == 184, "Offset mismatch for USeasonPassCategoryData::PreviewData");
static_assert(offsetof(USeasonPassCategoryData, ClaimSetsPreviewData) == 200, "Offset mismatch for USeasonPassCategoryData::ClaimSetsPreviewData");
static_assert(offsetof(USeasonPassCategoryData, bCanBuyLevels) == 216, "Offset mismatch for USeasonPassCategoryData::bCanBuyLevels");
static_assert(offsetof(USeasonPassCategoryData, bHideProgressBar) == 217, "Offset mismatch for USeasonPassCategoryData::bHideProgressBar");
static_assert(offsetof(USeasonPassCategoryData, bShouldShowStatusBar) == 218, "Offset mismatch for USeasonPassCategoryData::bShouldShowStatusBar");
static_assert(offsetof(USeasonPassCategoryData, bShouldShowNavigationTabs) == 219, "Offset mismatch for USeasonPassCategoryData::bShouldShowNavigationTabs");
static_assert(offsetof(USeasonPassCategoryData, DependentCategory) == 224, "Offset mismatch for USeasonPassCategoryData::DependentCategory");
static_assert(offsetof(USeasonPassCategoryData, Requirements) == 232, "Offset mismatch for USeasonPassCategoryData::Requirements");
static_assert(offsetof(USeasonPassCategoryData, ThemeData) == 240, "Offset mismatch for USeasonPassCategoryData::ThemeData");

// /Script/SeasonPass.SeasonPassCategoryVM
// Kind: Class; super: SeasonPassElementBaseVM
class USeasonPassCategoryVM
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* Category; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Pages; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0130
    std::uint8_t Title[0x10]; // 0x0140 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsLevelRewardLocked; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDependentCategoryLocked; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFullyClaimed; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x0153
    FText StatusText; // 0x0158 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USeasonPassCategoryVM, Category) == 280, "Offset mismatch for USeasonPassCategoryVM::Category");
static_assert(offsetof(USeasonPassCategoryVM, Pages) == 288, "Offset mismatch for USeasonPassCategoryVM::Pages");
static_assert(offsetof(USeasonPassCategoryVM, Title) == 320, "Offset mismatch for USeasonPassCategoryVM::Title");
static_assert(offsetof(USeasonPassCategoryVM, bIsLevelRewardLocked) == 336, "Offset mismatch for USeasonPassCategoryVM::bIsLevelRewardLocked");
static_assert(offsetof(USeasonPassCategoryVM, bIsDependentCategoryLocked) == 337, "Offset mismatch for USeasonPassCategoryVM::bIsDependentCategoryLocked");
static_assert(offsetof(USeasonPassCategoryVM, bIsFullyClaimed) == 338, "Offset mismatch for USeasonPassCategoryVM::bIsFullyClaimed");
static_assert(offsetof(USeasonPassCategoryVM, StatusText) == 344, "Offset mismatch for USeasonPassCategoryVM::StatusText");

// /Script/SeasonPass.SeasonPassCommonData
// Kind: Class; super: SeasonPassCommonDataBase
class USeasonPassCommonData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t PlaylistTagQuery[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    std::uint8_t PassTabFeature[0x4]; // 0x004C (Size: 0x4, Type: OptionalProperty)
    FString CMSPage; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString SeasonPassGiftStorefront; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t SeasonPassGiftToken[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    FString SeasonPassGiftMetakey; // 0x0090 (Size: 0x10, Type: StrProperty)
    FString SeasonPassTypeId; // 0x00A0 (Size: 0x10, Type: StrProperty)
    std::uint8_t PurchasePreMessageMaterial[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AutoSpendGiftBoxDefinition[0x20]; // 0x00D0 (Size: 0x20, Type: SoftObjectProperty)
    FText LongName; // 0x00F0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USeasonPassCommonData, PlaylistTagQuery) == 72, "Offset mismatch for USeasonPassCommonData::PlaylistTagQuery");
static_assert(offsetof(USeasonPassCommonData, PassTabFeature) == 76, "Offset mismatch for USeasonPassCommonData::PassTabFeature");
static_assert(offsetof(USeasonPassCommonData, CMSPage) == 80, "Offset mismatch for USeasonPassCommonData::CMSPage");
static_assert(offsetof(USeasonPassCommonData, SeasonPassGiftStorefront) == 96, "Offset mismatch for USeasonPassCommonData::SeasonPassGiftStorefront");
static_assert(offsetof(USeasonPassCommonData, SeasonPassGiftToken) == 112, "Offset mismatch for USeasonPassCommonData::SeasonPassGiftToken");
static_assert(offsetof(USeasonPassCommonData, SeasonPassGiftMetakey) == 144, "Offset mismatch for USeasonPassCommonData::SeasonPassGiftMetakey");
static_assert(offsetof(USeasonPassCommonData, SeasonPassTypeId) == 160, "Offset mismatch for USeasonPassCommonData::SeasonPassTypeId");
static_assert(offsetof(USeasonPassCommonData, PurchasePreMessageMaterial) == 176, "Offset mismatch for USeasonPassCommonData::PurchasePreMessageMaterial");
static_assert(offsetof(USeasonPassCommonData, AutoSpendGiftBoxDefinition) == 208, "Offset mismatch for USeasonPassCommonData::AutoSpendGiftBoxDefinition");
static_assert(offsetof(USeasonPassCommonData, LongName) == 240, "Offset mismatch for USeasonPassCommonData::LongName");

// /Script/SeasonPass.SeasonPassCustomizableItemLockQueries
// Kind: Class; super: BlueprintFunctionLibrary
class USeasonPassCustomizableItemLockQueries
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SeasonPass.SeasonPassCustomizableItemRewardExtension
// Kind: Class; super: SeasonPassRewardTileExtension
class USeasonPassCustomizableItemRewardExtension
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> ItemDefinitionOverride; // 0x0060 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USeasonPassCustomizableItemRewardExtension, Label) == 80, "Offset mismatch for USeasonPassCustomizableItemRewardExtension::Label");
static_assert(offsetof(USeasonPassCustomizableItemRewardExtension, ItemDefinitionOverride) == 96, "Offset mismatch for USeasonPassCustomizableItemRewardExtension::ItemDefinitionOverride");

// /Script/SeasonPass.SeasonPassCustomizableItemRewardVM
// Kind: Class; super: SeasonPassElementBaseVM
class USeasonPassCustomizableItemRewardVM
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0118 (Size: 0x10, Type: TextProperty)
    void* ItemVM; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USeasonPassCustomizableItemRewardVM, Label) == 280, "Offset mismatch for USeasonPassCustomizableItemRewardVM::Label");
static_assert(offsetof(USeasonPassCustomizableItemRewardVM, ItemVM) == 296, "Offset mismatch for USeasonPassCustomizableItemRewardVM::ItemVM");

// /Script/SeasonPass.SeasonPassData
// Kind: Class; super: SeasonPassDataBase
class USeasonPassData
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LargeIcon[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SmallIcon[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SeasonName[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t SeasonEndText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t BuyPassButtonName[0x10]; // 0x0100 (Size: 0x10, Type: TextProperty)
    std::uint8_t ThemeData[0x1D0]; // 0x0110 (Size: 0x1D0, Type: StructProperty)
    TArray<void*> PreviewData; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USeasonPassData, LargeIcon) == 160, "Offset mismatch for USeasonPassData::LargeIcon");
static_assert(offsetof(USeasonPassData, SmallIcon) == 192, "Offset mismatch for USeasonPassData::SmallIcon");
static_assert(offsetof(USeasonPassData, SeasonName) == 224, "Offset mismatch for USeasonPassData::SeasonName");
static_assert(offsetof(USeasonPassData, SeasonEndText) == 240, "Offset mismatch for USeasonPassData::SeasonEndText");
static_assert(offsetof(USeasonPassData, BuyPassButtonName) == 256, "Offset mismatch for USeasonPassData::BuyPassButtonName");
static_assert(offsetof(USeasonPassData, ThemeData) == 272, "Offset mismatch for USeasonPassData::ThemeData");
static_assert(offsetof(USeasonPassData, PreviewData) == 736, "Offset mismatch for USeasonPassData::PreviewData");

// /Script/SeasonPass.SeasonPassElementBaseVM
// Kind: Class; super: MVVMViewModelBase
class USeasonPassElementBaseVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsLocked; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTimeLocked; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanUnlock; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUnlockable; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    std::uint8_t LockStatusText[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::int32_t PrerequisiteHeaders; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0084
    std::uint8_t ElementTags[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    TArray<void*> ExtensionVMs; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChildGroupNames; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x20]; // 0x00C8
    TArray<void*> LinkedElements; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDoesRequireProgressForUnlock; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00F9
    std::int32_t ProgressForUnlock; // 0x00FC (Size: 0x4, Type: IntProperty)
    std::int32_t ProgressCountForUnlock; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0104
    TArray<void*> ChildStorage; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USeasonPassElementBaseVM, bIsLocked) == 104, "Offset mismatch for USeasonPassElementBaseVM::bIsLocked");
static_assert(offsetof(USeasonPassElementBaseVM, bIsTimeLocked) == 105, "Offset mismatch for USeasonPassElementBaseVM::bIsTimeLocked");
static_assert(offsetof(USeasonPassElementBaseVM, bCanUnlock) == 106, "Offset mismatch for USeasonPassElementBaseVM::bCanUnlock");
static_assert(offsetof(USeasonPassElementBaseVM, bIsUnlockable) == 107, "Offset mismatch for USeasonPassElementBaseVM::bIsUnlockable");
static_assert(offsetof(USeasonPassElementBaseVM, LockStatusText) == 112, "Offset mismatch for USeasonPassElementBaseVM::LockStatusText");
static_assert(offsetof(USeasonPassElementBaseVM, PrerequisiteHeaders) == 128, "Offset mismatch for USeasonPassElementBaseVM::PrerequisiteHeaders");
static_assert(offsetof(USeasonPassElementBaseVM, ElementTags) == 136, "Offset mismatch for USeasonPassElementBaseVM::ElementTags");
static_assert(offsetof(USeasonPassElementBaseVM, ExtensionVMs) == 168, "Offset mismatch for USeasonPassElementBaseVM::ExtensionVMs");
static_assert(offsetof(USeasonPassElementBaseVM, ChildGroupNames) == 184, "Offset mismatch for USeasonPassElementBaseVM::ChildGroupNames");
static_assert(offsetof(USeasonPassElementBaseVM, LinkedElements) == 232, "Offset mismatch for USeasonPassElementBaseVM::LinkedElements");
static_assert(offsetof(USeasonPassElementBaseVM, bDoesRequireProgressForUnlock) == 248, "Offset mismatch for USeasonPassElementBaseVM::bDoesRequireProgressForUnlock");
static_assert(offsetof(USeasonPassElementBaseVM, ProgressForUnlock) == 252, "Offset mismatch for USeasonPassElementBaseVM::ProgressForUnlock");
static_assert(offsetof(USeasonPassElementBaseVM, ProgressCountForUnlock) == 256, "Offset mismatch for USeasonPassElementBaseVM::ProgressCountForUnlock");
static_assert(offsetof(USeasonPassElementBaseVM, ChildStorage) == 264, "Offset mismatch for USeasonPassElementBaseVM::ChildStorage");

// /Script/SeasonPass.SeasonPassEntitlementUtilityLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USeasonPassEntitlementUtilityLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SeasonPass.SeasonPassNextRewardVM
// Kind: Class; super: MVVMViewModelBase
class USeasonPassNextRewardVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* SeasonPass; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USeasonPassNextRewardVM, SeasonPass) == 104, "Offset mismatch for USeasonPassNextRewardVM::SeasonPass");

// /Script/SeasonPass.SeasonPassOfferRewardVM
// Kind: Class; super: SeasonPassRewardVM
class USeasonPassOfferRewardVM
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* Reward; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ItemVMs; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsRewardOwned; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowClaimButton; // 0x0131 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowBuyRewardsButton; // 0x0132 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowGetBattlePassButton; // 0x0133 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowQuestButton; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldHideAllYellowButtons; // 0x0135 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowEquipButton; // 0x0136 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquipped; // 0x0137 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsQuestDriven; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFreeRewardClaimableByReachingLevel; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x013A
    float ProgressPercent; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInitialized; // 0x0140 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USeasonPassOfferRewardVM, Reward) == 280, "Offset mismatch for USeasonPassOfferRewardVM::Reward");
static_assert(offsetof(USeasonPassOfferRewardVM, ItemVMs) == 288, "Offset mismatch for USeasonPassOfferRewardVM::ItemVMs");
static_assert(offsetof(USeasonPassOfferRewardVM, bIsRewardOwned) == 304, "Offset mismatch for USeasonPassOfferRewardVM::bIsRewardOwned");
static_assert(offsetof(USeasonPassOfferRewardVM, bShouldShowClaimButton) == 305, "Offset mismatch for USeasonPassOfferRewardVM::bShouldShowClaimButton");
static_assert(offsetof(USeasonPassOfferRewardVM, bShouldShowBuyRewardsButton) == 306, "Offset mismatch for USeasonPassOfferRewardVM::bShouldShowBuyRewardsButton");
static_assert(offsetof(USeasonPassOfferRewardVM, bShouldShowGetBattlePassButton) == 307, "Offset mismatch for USeasonPassOfferRewardVM::bShouldShowGetBattlePassButton");
static_assert(offsetof(USeasonPassOfferRewardVM, bShouldShowQuestButton) == 308, "Offset mismatch for USeasonPassOfferRewardVM::bShouldShowQuestButton");
static_assert(offsetof(USeasonPassOfferRewardVM, bShouldHideAllYellowButtons) == 309, "Offset mismatch for USeasonPassOfferRewardVM::bShouldHideAllYellowButtons");
static_assert(offsetof(USeasonPassOfferRewardVM, bShouldShowEquipButton) == 310, "Offset mismatch for USeasonPassOfferRewardVM::bShouldShowEquipButton");
static_assert(offsetof(USeasonPassOfferRewardVM, bIsEquipped) == 311, "Offset mismatch for USeasonPassOfferRewardVM::bIsEquipped");
static_assert(offsetof(USeasonPassOfferRewardVM, bIsQuestDriven) == 312, "Offset mismatch for USeasonPassOfferRewardVM::bIsQuestDriven");
static_assert(offsetof(USeasonPassOfferRewardVM, bIsFreeRewardClaimableByReachingLevel) == 313, "Offset mismatch for USeasonPassOfferRewardVM::bIsFreeRewardClaimableByReachingLevel");
static_assert(offsetof(USeasonPassOfferRewardVM, ProgressPercent) == 316, "Offset mismatch for USeasonPassOfferRewardVM::ProgressPercent");
static_assert(offsetof(USeasonPassOfferRewardVM, bIsInitialized) == 320, "Offset mismatch for USeasonPassOfferRewardVM::bIsInitialized");

// /Script/SeasonPass.SeasonPassPageVM
// Kind: Class; super: SeasonPassElementBaseVM
class USeasonPassPageVM
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* PageData; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Tracks; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    void* PreviewItem; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BackgroundData[0x58]; // 0x0138 (Size: 0x58, Type: StructProperty)
    std::uint8_t bIsRewardLevelLocked; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDependentCategoryLocked; // 0x0191 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowStatusText; // 0x0192 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPageCompleted; // 0x0193 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0194
    std::uint8_t StatusText[0x10]; // 0x0198 (Size: 0x10, Type: TextProperty)
    std::int32_t RewardsNeededToUnlock; // 0x01A8 (Size: 0x4, Type: IntProperty)
    std::int32_t LevelsNeededToUnlock; // 0x01AC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USeasonPassPageVM, PageData) == 280, "Offset mismatch for USeasonPassPageVM::PageData");
static_assert(offsetof(USeasonPassPageVM, Tracks) == 288, "Offset mismatch for USeasonPassPageVM::Tracks");
static_assert(offsetof(USeasonPassPageVM, PreviewItem) == 304, "Offset mismatch for USeasonPassPageVM::PreviewItem");
static_assert(offsetof(USeasonPassPageVM, BackgroundData) == 312, "Offset mismatch for USeasonPassPageVM::BackgroundData");
static_assert(offsetof(USeasonPassPageVM, bIsRewardLevelLocked) == 400, "Offset mismatch for USeasonPassPageVM::bIsRewardLevelLocked");
static_assert(offsetof(USeasonPassPageVM, bIsDependentCategoryLocked) == 401, "Offset mismatch for USeasonPassPageVM::bIsDependentCategoryLocked");
static_assert(offsetof(USeasonPassPageVM, bShouldShowStatusText) == 402, "Offset mismatch for USeasonPassPageVM::bShouldShowStatusText");
static_assert(offsetof(USeasonPassPageVM, bIsPageCompleted) == 403, "Offset mismatch for USeasonPassPageVM::bIsPageCompleted");
static_assert(offsetof(USeasonPassPageVM, StatusText) == 408, "Offset mismatch for USeasonPassPageVM::StatusText");
static_assert(offsetof(USeasonPassPageVM, RewardsNeededToUnlock) == 424, "Offset mismatch for USeasonPassPageVM::RewardsNeededToUnlock");
static_assert(offsetof(USeasonPassPageVM, LevelsNeededToUnlock) == 428, "Offset mismatch for USeasonPassPageVM::LevelsNeededToUnlock");

// /Script/SeasonPass.SeasonPassQuestRewardVM
// Kind: Class; super: SeasonPassRewardVM
class USeasonPassQuestRewardVM
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t bIsMysteryQuest; // 0x0148 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USeasonPassQuestRewardVM, bIsMysteryQuest) == 328, "Offset mismatch for USeasonPassQuestRewardVM::bIsMysteryQuest");

// /Script/SeasonPass.SeasonPassRequirement_Level
// Kind: Class; super: SeasonPassRequirementBase
class USeasonPassRequirement_Level
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t RequiredLevel; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FText LockTextOverride; // 0x0030 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USeasonPassRequirement_Level, RequiredLevel) == 40, "Offset mismatch for USeasonPassRequirement_Level::RequiredLevel");
static_assert(offsetof(USeasonPassRequirement_Level, LockTextOverride) == 48, "Offset mismatch for USeasonPassRequirement_Level::LockTextOverride");

// /Script/SeasonPass.SeasonPassRequirement_Offer
// Kind: Class; super: SeasonPassRequirementBase
class USeasonPassRequirement_Offer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t offer[0x88]; // 0x0028 (Size: 0x88, Type: StructProperty)
    std::uint8_t bIsFreePassOffer; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USeasonPassRequirement_Offer, offer) == 40, "Offset mismatch for USeasonPassRequirement_Offer::offer");
static_assert(offsetof(USeasonPassRequirement_Offer, bIsFreePassOffer) == 176, "Offset mismatch for USeasonPassRequirement_Offer::bIsFreePassOffer");

// /Script/SeasonPass.SeasonPassRequirement_PassCategoryGroupComplete
// Kind: Class; super: SeasonPassRequirementBase
class USeasonPassRequirement_PassCategoryGroupComplete
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString GroupName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FText DisplayName; // 0x0038 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USeasonPassRequirement_PassCategoryGroupComplete, GroupName) == 40, "Offset mismatch for USeasonPassRequirement_PassCategoryGroupComplete::GroupName");
static_assert(offsetof(USeasonPassRequirement_PassCategoryGroupComplete, DisplayName) == 56, "Offset mismatch for USeasonPassRequirement_PassCategoryGroupComplete::DisplayName");

// /Script/SeasonPass.SeasonPassRequirement_PassOwned
// Kind: Class; super: SeasonPassRequirementBase
class USeasonPassRequirement_PassOwned
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SeasonPass.SeasonPassRequirement_ReleaseVersion
// Kind: Class; super: SeasonPassRequirementBase
class USeasonPassRequirement_ReleaseVersion
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Version[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USeasonPassRequirement_ReleaseVersion, Version) == 40, "Offset mismatch for USeasonPassRequirement_ReleaseVersion::Version");

// /Script/SeasonPass.SeasonPassRequirement_RewardsOwned
// Kind: Class; super: SeasonPassRequirementBase
class USeasonPassRequirement_RewardsOwned
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Scope; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::int32_t RequiredCount; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t bRequireAllOthers; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USeasonPassRequirement_RewardsOwned, Scope) == 40, "Offset mismatch for USeasonPassRequirement_RewardsOwned::Scope");
static_assert(offsetof(USeasonPassRequirement_RewardsOwned, RequiredCount) == 44, "Offset mismatch for USeasonPassRequirement_RewardsOwned::RequiredCount");
static_assert(offsetof(USeasonPassRequirement_RewardsOwned, bRequireAllOthers) == 48, "Offset mismatch for USeasonPassRequirement_RewardsOwned::bRequireAllOthers");

// /Script/SeasonPass.SeasonPassRequirement_Timed
// Kind: Class; super: SeasonPassRequirementBase
class USeasonPassRequirement_Timed
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString EventFlagName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t LockingChallengeScheduleSoftObjPtr[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> LockingChallengeBundleSoftObjPtr; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USeasonPassRequirement_Timed, EventFlagName) == 40, "Offset mismatch for USeasonPassRequirement_Timed::EventFlagName");
static_assert(offsetof(USeasonPassRequirement_Timed, LockingChallengeScheduleSoftObjPtr) == 56, "Offset mismatch for USeasonPassRequirement_Timed::LockingChallengeScheduleSoftObjPtr");
static_assert(offsetof(USeasonPassRequirement_Timed, LockingChallengeBundleSoftObjPtr) == 88, "Offset mismatch for USeasonPassRequirement_Timed::LockingChallengeBundleSoftObjPtr");

// /Script/SeasonPass.SeasonPassRewardTileExtension
// Kind: Class; super: SeasonPassPageDataExtension
class USeasonPassRewardTileExtension
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::int32_t TrackIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t RewardIndex; // 0x004C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USeasonPassRewardTileExtension, TrackIndex) == 72, "Offset mismatch for USeasonPassRewardTileExtension::TrackIndex");
static_assert(offsetof(USeasonPassRewardTileExtension, RewardIndex) == 76, "Offset mismatch for USeasonPassRewardTileExtension::RewardIndex");

// /Script/SeasonPass.SeasonPassRewardTileTagsExtension
// Kind: Class; super: SeasonPassRewardTileExtension
class USeasonPassRewardTileTagsExtension
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::int32_t TrackIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t RewardIndex; // 0x004C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USeasonPassRewardTileTagsExtension, TrackIndex) == 72, "Offset mismatch for USeasonPassRewardTileTagsExtension::TrackIndex");
static_assert(offsetof(USeasonPassRewardTileTagsExtension, RewardIndex) == 76, "Offset mismatch for USeasonPassRewardTileTagsExtension::RewardIndex");

// /Script/SeasonPass.SeasonPassRewardVM
// Kind: Class; super: SeasonPassElementBaseVM
class USeasonPassRewardVM
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* Reward; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ItemVMs; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsRewardOwned; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowClaimButton; // 0x0131 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowBuyRewardsButton; // 0x0132 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowGetBattlePassButton; // 0x0133 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowQuestButton; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldHideAllYellowButtons; // 0x0135 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldShowEquipButton; // 0x0136 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquipped; // 0x0137 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsQuestDriven; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFreeRewardClaimableByReachingLevel; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x013A
    float ProgressPercent; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInitialized; // 0x0140 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USeasonPassRewardVM, Reward) == 280, "Offset mismatch for USeasonPassRewardVM::Reward");
static_assert(offsetof(USeasonPassRewardVM, ItemVMs) == 288, "Offset mismatch for USeasonPassRewardVM::ItemVMs");
static_assert(offsetof(USeasonPassRewardVM, bIsRewardOwned) == 304, "Offset mismatch for USeasonPassRewardVM::bIsRewardOwned");
static_assert(offsetof(USeasonPassRewardVM, bShouldShowClaimButton) == 305, "Offset mismatch for USeasonPassRewardVM::bShouldShowClaimButton");
static_assert(offsetof(USeasonPassRewardVM, bShouldShowBuyRewardsButton) == 306, "Offset mismatch for USeasonPassRewardVM::bShouldShowBuyRewardsButton");
static_assert(offsetof(USeasonPassRewardVM, bShouldShowGetBattlePassButton) == 307, "Offset mismatch for USeasonPassRewardVM::bShouldShowGetBattlePassButton");
static_assert(offsetof(USeasonPassRewardVM, bShouldShowQuestButton) == 308, "Offset mismatch for USeasonPassRewardVM::bShouldShowQuestButton");
static_assert(offsetof(USeasonPassRewardVM, bShouldHideAllYellowButtons) == 309, "Offset mismatch for USeasonPassRewardVM::bShouldHideAllYellowButtons");
static_assert(offsetof(USeasonPassRewardVM, bShouldShowEquipButton) == 310, "Offset mismatch for USeasonPassRewardVM::bShouldShowEquipButton");
static_assert(offsetof(USeasonPassRewardVM, bIsEquipped) == 311, "Offset mismatch for USeasonPassRewardVM::bIsEquipped");
static_assert(offsetof(USeasonPassRewardVM, bIsQuestDriven) == 312, "Offset mismatch for USeasonPassRewardVM::bIsQuestDriven");
static_assert(offsetof(USeasonPassRewardVM, bIsFreeRewardClaimableByReachingLevel) == 313, "Offset mismatch for USeasonPassRewardVM::bIsFreeRewardClaimableByReachingLevel");
static_assert(offsetof(USeasonPassRewardVM, ProgressPercent) == 316, "Offset mismatch for USeasonPassRewardVM::ProgressPercent");
static_assert(offsetof(USeasonPassRewardVM, bIsInitialized) == 320, "Offset mismatch for USeasonPassRewardVM::bIsInitialized");

// /Script/SeasonPass.SeasonPassSelectionVM
// Kind: Class; super: FortPerUserViewModel
class USeasonPassSelectionVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* SelectedPass; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SelectedCategory; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* SelectedClaimSetsCategory; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* SelectedPage; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* SelectedReward; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* OfferInspection; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    float OfferPurchaseHoldProgress; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsClaimingAll; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNavigateToPurchaseExternal; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNavigateToRewardExternal; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNavigateToCrewExternal; // 0x00AF (Size: 0x1, Type: BoolProperty)
    TArray<void*> PreviewData; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USeasonPassSelectionVM, SelectedPass) == 120, "Offset mismatch for USeasonPassSelectionVM::SelectedPass");
static_assert(offsetof(USeasonPassSelectionVM, SelectedCategory) == 128, "Offset mismatch for USeasonPassSelectionVM::SelectedCategory");
static_assert(offsetof(USeasonPassSelectionVM, SelectedClaimSetsCategory) == 136, "Offset mismatch for USeasonPassSelectionVM::SelectedClaimSetsCategory");
static_assert(offsetof(USeasonPassSelectionVM, SelectedPage) == 144, "Offset mismatch for USeasonPassSelectionVM::SelectedPage");
static_assert(offsetof(USeasonPassSelectionVM, SelectedReward) == 152, "Offset mismatch for USeasonPassSelectionVM::SelectedReward");
static_assert(offsetof(USeasonPassSelectionVM, OfferInspection) == 160, "Offset mismatch for USeasonPassSelectionVM::OfferInspection");
static_assert(offsetof(USeasonPassSelectionVM, OfferPurchaseHoldProgress) == 168, "Offset mismatch for USeasonPassSelectionVM::OfferPurchaseHoldProgress");
static_assert(offsetof(USeasonPassSelectionVM, IsClaimingAll) == 172, "Offset mismatch for USeasonPassSelectionVM::IsClaimingAll");
static_assert(offsetof(USeasonPassSelectionVM, bIsNavigateToPurchaseExternal) == 173, "Offset mismatch for USeasonPassSelectionVM::bIsNavigateToPurchaseExternal");
static_assert(offsetof(USeasonPassSelectionVM, bIsNavigateToRewardExternal) == 174, "Offset mismatch for USeasonPassSelectionVM::bIsNavigateToRewardExternal");
static_assert(offsetof(USeasonPassSelectionVM, bIsNavigateToCrewExternal) == 175, "Offset mismatch for USeasonPassSelectionVM::bIsNavigateToCrewExternal");
static_assert(offsetof(USeasonPassSelectionVM, PreviewData) == 176, "Offset mismatch for USeasonPassSelectionVM::PreviewData");

// /Script/SeasonPass.SeasonPassShopOfferOverride
// Kind: Class; super: FortItemShopOfferInspectionScreenWidgetOverrideBase
class USeasonPassShopOfferOverride
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PurchasePassWidget[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> PurchaseBundleWidget; // 0x0048 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(USeasonPassShopOfferOverride, PurchasePassWidget) == 40, "Offset mismatch for USeasonPassShopOfferOverride::PurchasePassWidget");
static_assert(offsetof(USeasonPassShopOfferOverride, PurchaseBundleWidget) == 72, "Offset mismatch for USeasonPassShopOfferOverride::PurchaseBundleWidget");

// /Script/SeasonPass.SeasonPassSystemVM
// Kind: Class; super: FortPerUserViewModel
class USeasonPassSystemVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> SeasonPasses; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumPurchaseableRewards; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0094
    TArray<void*> PendingSeasonPasses; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x60]; // 0x00B0
    std::uint8_t bWaitingForPassesToLoad; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USeasonPassSystemVM, SeasonPasses) == 128, "Offset mismatch for USeasonPassSystemVM::SeasonPasses");
static_assert(offsetof(USeasonPassSystemVM, NumPurchaseableRewards) == 144, "Offset mismatch for USeasonPassSystemVM::NumPurchaseableRewards");
static_assert(offsetof(USeasonPassSystemVM, PendingSeasonPasses) == 160, "Offset mismatch for USeasonPassSystemVM::PendingSeasonPasses");
static_assert(offsetof(USeasonPassSystemVM, bWaitingForPassesToLoad) == 272, "Offset mismatch for USeasonPassSystemVM::bWaitingForPassesToLoad");

// /Script/SeasonPass.SeasonPassTagsExtensionVM
// Kind: Class; super: SeasonPassElementBaseVM
class USeasonPassTagsExtensionVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsLocked; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTimeLocked; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanUnlock; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUnlockable; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    std::uint8_t LockStatusText[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::int32_t PrerequisiteHeaders; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0084
    std::uint8_t ElementTags[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    TArray<void*> ExtensionVMs; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChildGroupNames; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x20]; // 0x00C8
    TArray<void*> LinkedElements; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDoesRequireProgressForUnlock; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00F9
    std::int32_t ProgressForUnlock; // 0x00FC (Size: 0x4, Type: IntProperty)
    std::int32_t ProgressCountForUnlock; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0104
    TArray<void*> ChildStorage; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USeasonPassTagsExtensionVM, bIsLocked) == 104, "Offset mismatch for USeasonPassTagsExtensionVM::bIsLocked");
static_assert(offsetof(USeasonPassTagsExtensionVM, bIsTimeLocked) == 105, "Offset mismatch for USeasonPassTagsExtensionVM::bIsTimeLocked");
static_assert(offsetof(USeasonPassTagsExtensionVM, bCanUnlock) == 106, "Offset mismatch for USeasonPassTagsExtensionVM::bCanUnlock");
static_assert(offsetof(USeasonPassTagsExtensionVM, bIsUnlockable) == 107, "Offset mismatch for USeasonPassTagsExtensionVM::bIsUnlockable");
static_assert(offsetof(USeasonPassTagsExtensionVM, LockStatusText) == 112, "Offset mismatch for USeasonPassTagsExtensionVM::LockStatusText");
static_assert(offsetof(USeasonPassTagsExtensionVM, PrerequisiteHeaders) == 128, "Offset mismatch for USeasonPassTagsExtensionVM::PrerequisiteHeaders");
static_assert(offsetof(USeasonPassTagsExtensionVM, ElementTags) == 136, "Offset mismatch for USeasonPassTagsExtensionVM::ElementTags");
static_assert(offsetof(USeasonPassTagsExtensionVM, ExtensionVMs) == 168, "Offset mismatch for USeasonPassTagsExtensionVM::ExtensionVMs");
static_assert(offsetof(USeasonPassTagsExtensionVM, ChildGroupNames) == 184, "Offset mismatch for USeasonPassTagsExtensionVM::ChildGroupNames");
static_assert(offsetof(USeasonPassTagsExtensionVM, LinkedElements) == 232, "Offset mismatch for USeasonPassTagsExtensionVM::LinkedElements");
static_assert(offsetof(USeasonPassTagsExtensionVM, bDoesRequireProgressForUnlock) == 248, "Offset mismatch for USeasonPassTagsExtensionVM::bDoesRequireProgressForUnlock");
static_assert(offsetof(USeasonPassTagsExtensionVM, ProgressForUnlock) == 252, "Offset mismatch for USeasonPassTagsExtensionVM::ProgressForUnlock");
static_assert(offsetof(USeasonPassTagsExtensionVM, ProgressCountForUnlock) == 256, "Offset mismatch for USeasonPassTagsExtensionVM::ProgressCountForUnlock");
static_assert(offsetof(USeasonPassTagsExtensionVM, ChildStorage) == 264, "Offset mismatch for USeasonPassTagsExtensionVM::ChildStorage");

// /Script/SeasonPass.SeasonPassTrackVM
// Kind: Class; super: SeasonPassElementBaseVM
class USeasonPassTrackVM
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    TArray<void*> Rewards; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    std::int32_t RewardsNeededForUnlock; // 0x0128 (Size: 0x4, Type: IntProperty)
    std::int32_t LevelsNeededForUnlock; // 0x012C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USeasonPassTrackVM, Rewards) == 280, "Offset mismatch for USeasonPassTrackVM::Rewards");
static_assert(offsetof(USeasonPassTrackVM, RewardsNeededForUnlock) == 296, "Offset mismatch for USeasonPassTrackVM::RewardsNeededForUnlock");
static_assert(offsetof(USeasonPassTrackVM, LevelsNeededForUnlock) == 300, "Offset mismatch for USeasonPassTrackVM::LevelsNeededForUnlock");

// /Script/SeasonPass.SeasonPassVM
// Kind: Class; super: SeasonPassElementBaseVM
class USeasonPassVM
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* SeasonPass; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassDefinition; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassData; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassCommonData; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassLevelData; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PlayerController; // 0x0140 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0148
    std::uint8_t SeasonPassCMSData[0xF8]; // 0x0158 (Size: 0xF8, Type: StructProperty)
    TArray<void*> Categories; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    void* BuyLevelsCategory; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PurchaseContext; // 0x0268 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCanBuyPass; // 0x0269 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoesOwnsPass; // 0x026A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPassCompleted; // 0x026B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanGiftPass; // 0x026C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanBuyLevels; // 0x026D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCmsDataAvailable; // 0x026E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDevPass; // 0x026F (Size: 0x1, Type: BoolProperty)
    void* PassOffer; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* PassBundleOffer; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* LevelOffer; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* LevelBundleOffer; // 0x0288 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USeasonPassVM, SeasonPass) == 280, "Offset mismatch for USeasonPassVM::SeasonPass");
static_assert(offsetof(USeasonPassVM, SeasonPassDefinition) == 288, "Offset mismatch for USeasonPassVM::SeasonPassDefinition");
static_assert(offsetof(USeasonPassVM, SeasonPassData) == 296, "Offset mismatch for USeasonPassVM::SeasonPassData");
static_assert(offsetof(USeasonPassVM, SeasonPassCommonData) == 304, "Offset mismatch for USeasonPassVM::SeasonPassCommonData");
static_assert(offsetof(USeasonPassVM, SeasonPassLevelData) == 312, "Offset mismatch for USeasonPassVM::SeasonPassLevelData");
static_assert(offsetof(USeasonPassVM, PlayerController) == 320, "Offset mismatch for USeasonPassVM::PlayerController");
static_assert(offsetof(USeasonPassVM, SeasonPassCMSData) == 344, "Offset mismatch for USeasonPassVM::SeasonPassCMSData");
static_assert(offsetof(USeasonPassVM, Categories) == 592, "Offset mismatch for USeasonPassVM::Categories");
static_assert(offsetof(USeasonPassVM, BuyLevelsCategory) == 608, "Offset mismatch for USeasonPassVM::BuyLevelsCategory");
static_assert(offsetof(USeasonPassVM, PurchaseContext) == 616, "Offset mismatch for USeasonPassVM::PurchaseContext");
static_assert(offsetof(USeasonPassVM, bCanBuyPass) == 617, "Offset mismatch for USeasonPassVM::bCanBuyPass");
static_assert(offsetof(USeasonPassVM, bDoesOwnsPass) == 618, "Offset mismatch for USeasonPassVM::bDoesOwnsPass");
static_assert(offsetof(USeasonPassVM, bIsPassCompleted) == 619, "Offset mismatch for USeasonPassVM::bIsPassCompleted");
static_assert(offsetof(USeasonPassVM, bCanGiftPass) == 620, "Offset mismatch for USeasonPassVM::bCanGiftPass");
static_assert(offsetof(USeasonPassVM, bCanBuyLevels) == 621, "Offset mismatch for USeasonPassVM::bCanBuyLevels");
static_assert(offsetof(USeasonPassVM, bIsCmsDataAvailable) == 622, "Offset mismatch for USeasonPassVM::bIsCmsDataAvailable");
static_assert(offsetof(USeasonPassVM, bIsDevPass) == 623, "Offset mismatch for USeasonPassVM::bIsDevPass");
static_assert(offsetof(USeasonPassVM, PassOffer) == 624, "Offset mismatch for USeasonPassVM::PassOffer");
static_assert(offsetof(USeasonPassVM, PassBundleOffer) == 632, "Offset mismatch for USeasonPassVM::PassBundleOffer");
static_assert(offsetof(USeasonPassVM, LevelOffer) == 640, "Offset mismatch for USeasonPassVM::LevelOffer");
static_assert(offsetof(USeasonPassVM, LevelBundleOffer) == 648, "Offset mismatch for USeasonPassVM::LevelBundleOffer");
