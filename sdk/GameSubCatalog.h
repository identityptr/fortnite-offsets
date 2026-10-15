/**
 * decamp dumper generated SDK
 * Package: /Script/GameSubCatalog
 */
#pragma once
#include "Basic.h"

// /Script/GameSubCatalog.AdditionalCheckoutProperty
// Kind: ScriptStruct; super: none
struct FAdditionalCheckoutProperty
{
public:
    FString Key; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAdditionalCheckoutProperty, Key) == 0, "Offset mismatch for FAdditionalCheckoutProperty::Key");
static_assert(offsetof(FAdditionalCheckoutProperty, Value) == 16, "Offset mismatch for FAdditionalCheckoutProperty::Value");

// /Script/GameSubCatalog.AppStoreCheckoutConfig
// Kind: ScriptStruct; super: none
struct FAppStoreCheckoutConfig
{
public:
    std::uint8_t AppStore; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CheckoutType; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAppStoreCheckoutConfig, AppStore) == 0, "Offset mismatch for FAppStoreCheckoutConfig::AppStore");
static_assert(offsetof(FAppStoreCheckoutConfig, CheckoutType) == 1, "Offset mismatch for FAppStoreCheckoutConfig::CheckoutType");

// /Script/GameSubCatalog.CatalogCheckoutOptions
// Kind: ScriptStruct; super: none
struct FCatalogCheckoutOptions
{
public:
    TArray<void*> AdditionalCheckoutProperties; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSkipCheckingEntitlementCount; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCatalogCheckoutOptions, AdditionalCheckoutProperties) == 0, "Offset mismatch for FCatalogCheckoutOptions::AdditionalCheckoutProperties");
static_assert(offsetof(FCatalogCheckoutOptions, bSkipCheckingEntitlementCount) == 16, "Offset mismatch for FCatalogCheckoutOptions::bSkipCheckingEntitlementCount");

// /Script/GameSubCatalog.CatalogCustomOfferInfo
// Kind: ScriptStruct; super: none
struct FCatalogCustomOfferInfo
{
public:
    FString ExperimentName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> ReplacesOfferIds; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bLogExposureOnServer; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRestrictsGifting; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCatalogCustomOfferInfo, ExperimentName) == 0, "Offset mismatch for FCatalogCustomOfferInfo::ExperimentName");
static_assert(offsetof(FCatalogCustomOfferInfo, ReplacesOfferIds) == 16, "Offset mismatch for FCatalogCustomOfferInfo::ReplacesOfferIds");
static_assert(offsetof(FCatalogCustomOfferInfo, bLogExposureOnServer) == 32, "Offset mismatch for FCatalogCustomOfferInfo::bLogExposureOnServer");
static_assert(offsetof(FCatalogCustomOfferInfo, bRestrictsGifting) == 33, "Offset mismatch for FCatalogCustomOfferInfo::bRestrictsGifting");

// /Script/GameSubCatalog.CatalogCustomOfferRefreshSettings
// Kind: ScriptStruct; super: none
struct FCatalogCustomOfferRefreshSettings
{
public:
    std::uint8_t ForceRefreshCustomOffers; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClientEnabledPersonalizationOptIn; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCatalogCustomOfferRefreshSettings, ForceRefreshCustomOffers) == 0, "Offset mismatch for FCatalogCustomOfferRefreshSettings::ForceRefreshCustomOffers");
static_assert(offsetof(FCatalogCustomOfferRefreshSettings, ClientEnabledPersonalizationOptIn) == 1, "Offset mismatch for FCatalogCustomOfferRefreshSettings::ClientEnabledPersonalizationOptIn");

// /Script/GameSubCatalog.CatalogDownload
// Kind: ScriptStruct; super: none
struct FCatalogDownload
{
public:
    std::int32_t RefreshIntervalHrs; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t DailyPurchaseHrs; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t Expiration[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Storefronts; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCatalogDownload, RefreshIntervalHrs) == 0, "Offset mismatch for FCatalogDownload::RefreshIntervalHrs");
static_assert(offsetof(FCatalogDownload, DailyPurchaseHrs) == 4, "Offset mismatch for FCatalogDownload::DailyPurchaseHrs");
static_assert(offsetof(FCatalogDownload, Expiration) == 8, "Offset mismatch for FCatalogDownload::Expiration");
static_assert(offsetof(FCatalogDownload, Storefronts) == 16, "Offset mismatch for FCatalogDownload::Storefronts");

// /Script/GameSubCatalog.CatalogDynamicBundle
// Kind: ScriptStruct; super: none
struct FCatalogDynamicBundle
{
public:
    std::int32_t DiscountedBasePrice; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t RegularBasePrice; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t FloorPrice; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t CurrencyType; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    FString CurrencySubType; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayType; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    TArray<void*> BundleItems; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCatalogDynamicBundle, DiscountedBasePrice) == 0, "Offset mismatch for FCatalogDynamicBundle::DiscountedBasePrice");
static_assert(offsetof(FCatalogDynamicBundle, RegularBasePrice) == 4, "Offset mismatch for FCatalogDynamicBundle::RegularBasePrice");
static_assert(offsetof(FCatalogDynamicBundle, FloorPrice) == 8, "Offset mismatch for FCatalogDynamicBundle::FloorPrice");
static_assert(offsetof(FCatalogDynamicBundle, CurrencyType) == 12, "Offset mismatch for FCatalogDynamicBundle::CurrencyType");
static_assert(offsetof(FCatalogDynamicBundle, CurrencySubType) == 16, "Offset mismatch for FCatalogDynamicBundle::CurrencySubType");
static_assert(offsetof(FCatalogDynamicBundle, DisplayType) == 32, "Offset mismatch for FCatalogDynamicBundle::DisplayType");
static_assert(offsetof(FCatalogDynamicBundle, BundleItems) == 40, "Offset mismatch for FCatalogDynamicBundle::BundleItems");

// /Script/GameSubCatalog.CatalogDynamicBundleItem
// Kind: ScriptStruct; super: none
struct FCatalogDynamicBundleItem
{
public:
    std::uint8_t Item[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t bCanOwnMultiple; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0039
    std::int32_t RegularPrice; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t DiscountedPrice; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t AlreadyOwnedPriceReduction; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t Title[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0058 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FCatalogDynamicBundleItem, Item) == 0, "Offset mismatch for FCatalogDynamicBundleItem::Item");
static_assert(offsetof(FCatalogDynamicBundleItem, bCanOwnMultiple) == 56, "Offset mismatch for FCatalogDynamicBundleItem::bCanOwnMultiple");
static_assert(offsetof(FCatalogDynamicBundleItem, RegularPrice) == 60, "Offset mismatch for FCatalogDynamicBundleItem::RegularPrice");
static_assert(offsetof(FCatalogDynamicBundleItem, DiscountedPrice) == 64, "Offset mismatch for FCatalogDynamicBundleItem::DiscountedPrice");
static_assert(offsetof(FCatalogDynamicBundleItem, AlreadyOwnedPriceReduction) == 68, "Offset mismatch for FCatalogDynamicBundleItem::AlreadyOwnedPriceReduction");
static_assert(offsetof(FCatalogDynamicBundleItem, Title) == 72, "Offset mismatch for FCatalogDynamicBundleItem::Title");
static_assert(offsetof(FCatalogDynamicBundleItem, Description) == 88, "Offset mismatch for FCatalogDynamicBundleItem::Description");

// /Script/GameSubCatalog.CatalogGiftInfo
// Kind: ScriptStruct; super: none
struct FCatalogGiftInfo
{
public:
    std::uint8_t bIsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString ForcedGiftBoxTemplateId; // 0x0008 (Size: 0x10, Type: StrProperty)
    TArray<void*> PurchaseRequirements; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCatalogGiftInfo, bIsEnabled) == 0, "Offset mismatch for FCatalogGiftInfo::bIsEnabled");
static_assert(offsetof(FCatalogGiftInfo, ForcedGiftBoxTemplateId) == 8, "Offset mismatch for FCatalogGiftInfo::ForcedGiftBoxTemplateId");
static_assert(offsetof(FCatalogGiftInfo, PurchaseRequirements) == 24, "Offset mismatch for FCatalogGiftInfo::PurchaseRequirements");

// /Script/GameSubCatalog.CatalogItemPrice
// Kind: ScriptStruct; super: none
struct FCatalogItemPrice
{
public:
    std::uint8_t CurrencyType; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString CurrencySubType; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t RegularPrice; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t FinalPrice; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t FinalPriceTextOverride[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t RegularPriceTextOverride[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t SaleType; // 0x0040 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    std::uint8_t SaleExpiration[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t AppStoreId; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCatalogItemPrice, CurrencyType) == 0, "Offset mismatch for FCatalogItemPrice::CurrencyType");
static_assert(offsetof(FCatalogItemPrice, CurrencySubType) == 8, "Offset mismatch for FCatalogItemPrice::CurrencySubType");
static_assert(offsetof(FCatalogItemPrice, RegularPrice) == 24, "Offset mismatch for FCatalogItemPrice::RegularPrice");
static_assert(offsetof(FCatalogItemPrice, FinalPrice) == 28, "Offset mismatch for FCatalogItemPrice::FinalPrice");
static_assert(offsetof(FCatalogItemPrice, FinalPriceTextOverride) == 32, "Offset mismatch for FCatalogItemPrice::FinalPriceTextOverride");
static_assert(offsetof(FCatalogItemPrice, RegularPriceTextOverride) == 48, "Offset mismatch for FCatalogItemPrice::RegularPriceTextOverride");
static_assert(offsetof(FCatalogItemPrice, SaleType) == 64, "Offset mismatch for FCatalogItemPrice::SaleType");
static_assert(offsetof(FCatalogItemPrice, SaleExpiration) == 72, "Offset mismatch for FCatalogItemPrice::SaleExpiration");
static_assert(offsetof(FCatalogItemPrice, AppStoreId) == 80, "Offset mismatch for FCatalogItemPrice::AppStoreId");

// /Script/GameSubCatalog.CatalogItemSalePrice
// Kind: ScriptStruct; super: none
struct FCatalogItemSalePrice
{
public:
    std::int32_t SalePrice; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t SaleType; // 0x0004 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t StartTime[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t EndTime[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCatalogItemSalePrice, SalePrice) == 0, "Offset mismatch for FCatalogItemSalePrice::SalePrice");
static_assert(offsetof(FCatalogItemSalePrice, SaleType) == 4, "Offset mismatch for FCatalogItemSalePrice::SaleType");
static_assert(offsetof(FCatalogItemSalePrice, StartTime) == 8, "Offset mismatch for FCatalogItemSalePrice::StartTime");
static_assert(offsetof(FCatalogItemSalePrice, EndTime) == 16, "Offset mismatch for FCatalogItemSalePrice::EndTime");

// /Script/GameSubCatalog.CatalogKeyValue
// Kind: ScriptStruct; super: none
struct FCatalogKeyValue
{
public:
    FString Key; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCatalogKeyValue, Key) == 0, "Offset mismatch for FCatalogKeyValue::Key");
static_assert(offsetof(FCatalogKeyValue, Value) == 16, "Offset mismatch for FCatalogKeyValue::Value");

// /Script/GameSubCatalog.CatalogMetaAssetInfo
// Kind: ScriptStruct; super: none
struct FCatalogMetaAssetInfo
{
public:
    FString StructName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Payload[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCatalogMetaAssetInfo, StructName) == 0, "Offset mismatch for FCatalogMetaAssetInfo::StructName");
static_assert(offsetof(FCatalogMetaAssetInfo, Payload) == 16, "Offset mismatch for FCatalogMetaAssetInfo::Payload");

// /Script/GameSubCatalog.CatalogOffer
// Kind: ScriptStruct; super: none
struct FCatalogOffer
{
public:
    FString OfferId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString DevName; // 0x0010 (Size: 0x10, Type: StrProperty)
    TArray<void*> MetaInfo; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OfferType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0031
    TArray<void*> Prices; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DynamicBundleInfo[0x38]; // 0x0048 (Size: 0x38, Type: StructProperty)
    std::int32_t DailyLimit; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t WeeklyLimit; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t MonthlyLimit; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x008C
    TArray<void*> Categories; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    FString CatalogGroup; // 0x00A0 (Size: 0x10, Type: StrProperty)
    std::int32_t CatalogGroupPriority; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::int32_t SortPriority; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Title[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    FString AppStoreId; // 0x00E8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0xC0]; // 0x00F8
    std::uint8_t MetaAssetInfo[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    FString DisplayAssetPath; // 0x01E8 (Size: 0x10, Type: StrProperty)
    TArray<void*> ItemGrants; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Requirements; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GiftInfo[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::uint8_t CustomOfferInfo[0x30]; // 0x0240 (Size: 0x30, Type: OptionalProperty)
    std::uint8_t RefundType; // 0x0270 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0271
    TArray<void*> DenyItemTemplateIds; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t refundable; // 0x0288 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCatalogOffer, OfferId) == 0, "Offset mismatch for FCatalogOffer::OfferId");
static_assert(offsetof(FCatalogOffer, DevName) == 16, "Offset mismatch for FCatalogOffer::DevName");
static_assert(offsetof(FCatalogOffer, MetaInfo) == 32, "Offset mismatch for FCatalogOffer::MetaInfo");
static_assert(offsetof(FCatalogOffer, OfferType) == 48, "Offset mismatch for FCatalogOffer::OfferType");
static_assert(offsetof(FCatalogOffer, Prices) == 56, "Offset mismatch for FCatalogOffer::Prices");
static_assert(offsetof(FCatalogOffer, DynamicBundleInfo) == 72, "Offset mismatch for FCatalogOffer::DynamicBundleInfo");
static_assert(offsetof(FCatalogOffer, DailyLimit) == 128, "Offset mismatch for FCatalogOffer::DailyLimit");
static_assert(offsetof(FCatalogOffer, WeeklyLimit) == 132, "Offset mismatch for FCatalogOffer::WeeklyLimit");
static_assert(offsetof(FCatalogOffer, MonthlyLimit) == 136, "Offset mismatch for FCatalogOffer::MonthlyLimit");
static_assert(offsetof(FCatalogOffer, Categories) == 144, "Offset mismatch for FCatalogOffer::Categories");
static_assert(offsetof(FCatalogOffer, CatalogGroup) == 160, "Offset mismatch for FCatalogOffer::CatalogGroup");
static_assert(offsetof(FCatalogOffer, CatalogGroupPriority) == 176, "Offset mismatch for FCatalogOffer::CatalogGroupPriority");
static_assert(offsetof(FCatalogOffer, SortPriority) == 180, "Offset mismatch for FCatalogOffer::SortPriority");
static_assert(offsetof(FCatalogOffer, Title) == 184, "Offset mismatch for FCatalogOffer::Title");
static_assert(offsetof(FCatalogOffer, ShortDescription) == 200, "Offset mismatch for FCatalogOffer::ShortDescription");
static_assert(offsetof(FCatalogOffer, Description) == 216, "Offset mismatch for FCatalogOffer::Description");
static_assert(offsetof(FCatalogOffer, AppStoreId) == 232, "Offset mismatch for FCatalogOffer::AppStoreId");
static_assert(offsetof(FCatalogOffer, MetaAssetInfo) == 440, "Offset mismatch for FCatalogOffer::MetaAssetInfo");
static_assert(offsetof(FCatalogOffer, DisplayAssetPath) == 488, "Offset mismatch for FCatalogOffer::DisplayAssetPath");
static_assert(offsetof(FCatalogOffer, ItemGrants) == 504, "Offset mismatch for FCatalogOffer::ItemGrants");
static_assert(offsetof(FCatalogOffer, Requirements) == 520, "Offset mismatch for FCatalogOffer::Requirements");
static_assert(offsetof(FCatalogOffer, GiftInfo) == 536, "Offset mismatch for FCatalogOffer::GiftInfo");
static_assert(offsetof(FCatalogOffer, CustomOfferInfo) == 576, "Offset mismatch for FCatalogOffer::CustomOfferInfo");
static_assert(offsetof(FCatalogOffer, RefundType) == 624, "Offset mismatch for FCatalogOffer::RefundType");
static_assert(offsetof(FCatalogOffer, DenyItemTemplateIds) == 632, "Offset mismatch for FCatalogOffer::DenyItemTemplateIds");
static_assert(offsetof(FCatalogOffer, refundable) == 648, "Offset mismatch for FCatalogOffer::refundable");

// /Script/GameSubCatalog.CatalogOfferRequirement
// Kind: ScriptStruct; super: none
struct FCatalogOfferRequirement
{
public:
    std::uint8_t RequirementType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t MinQuantity; // 0x0004 (Size: 0x4, Type: IntProperty)
    FString RequiredId; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCatalogOfferRequirement, RequirementType) == 0, "Offset mismatch for FCatalogOfferRequirement::RequirementType");
static_assert(offsetof(FCatalogOfferRequirement, MinQuantity) == 4, "Offset mismatch for FCatalogOfferRequirement::MinQuantity");
static_assert(offsetof(FCatalogOfferRequirement, RequiredId) == 8, "Offset mismatch for FCatalogOfferRequirement::RequiredId");

// /Script/GameSubCatalog.CatalogPurchaseAdditionalData
// Kind: ScriptStruct; super: StoreOfferInfo
struct FCatalogPurchaseAdditionalData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString IslandId; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString IslandTitle; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString ProductTag; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString StoreContext; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString SourceContext; // 0x0070 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> CheckoutProperties; // 0x0080 (Size: 0x10, Type: MapProperty)
    std::uint8_t ItemShopFilterContext[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCatalogPurchaseAdditionalData, IslandId) == 48, "Offset mismatch for FCatalogPurchaseAdditionalData::IslandId");
static_assert(offsetof(FCatalogPurchaseAdditionalData, IslandTitle) == 64, "Offset mismatch for FCatalogPurchaseAdditionalData::IslandTitle");
static_assert(offsetof(FCatalogPurchaseAdditionalData, ProductTag) == 80, "Offset mismatch for FCatalogPurchaseAdditionalData::ProductTag");
static_assert(offsetof(FCatalogPurchaseAdditionalData, StoreContext) == 96, "Offset mismatch for FCatalogPurchaseAdditionalData::StoreContext");
static_assert(offsetof(FCatalogPurchaseAdditionalData, SourceContext) == 112, "Offset mismatch for FCatalogPurchaseAdditionalData::SourceContext");
static_assert(offsetof(FCatalogPurchaseAdditionalData, CheckoutProperties) == 128, "Offset mismatch for FCatalogPurchaseAdditionalData::CheckoutProperties");
static_assert(offsetof(FCatalogPurchaseAdditionalData, ItemShopFilterContext) == 144, "Offset mismatch for FCatalogPurchaseAdditionalData::ItemShopFilterContext");

// /Script/GameSubCatalog.CatalogPurchaseInfo
// Kind: ScriptStruct; super: none
struct FCatalogPurchaseInfo
{
public:
    FString OfferId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t PurchaseQuantity; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Currency; // 0x0014 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    FString CurrencySubType; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::int32_t ExpectedTotalPrice; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FString GameContext; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t AdditionalData[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCatalogPurchaseInfo, OfferId) == 0, "Offset mismatch for FCatalogPurchaseInfo::OfferId");
static_assert(offsetof(FCatalogPurchaseInfo, PurchaseQuantity) == 16, "Offset mismatch for FCatalogPurchaseInfo::PurchaseQuantity");
static_assert(offsetof(FCatalogPurchaseInfo, Currency) == 20, "Offset mismatch for FCatalogPurchaseInfo::Currency");
static_assert(offsetof(FCatalogPurchaseInfo, CurrencySubType) == 24, "Offset mismatch for FCatalogPurchaseInfo::CurrencySubType");
static_assert(offsetof(FCatalogPurchaseInfo, ExpectedTotalPrice) == 40, "Offset mismatch for FCatalogPurchaseInfo::ExpectedTotalPrice");
static_assert(offsetof(FCatalogPurchaseInfo, GameContext) == 48, "Offset mismatch for FCatalogPurchaseInfo::GameContext");
static_assert(offsetof(FCatalogPurchaseInfo, AdditionalData) == 64, "Offset mismatch for FCatalogPurchaseInfo::AdditionalData");

// /Script/GameSubCatalog.CatalogPurchaseInfoGift
// Kind: ScriptStruct; super: none
struct FCatalogPurchaseInfoGift
{
public:
    FString OfferId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Currency; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    FString CurrencySubType; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::int32_t ExpectedTotalPrice; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FString GameContext; // 0x0030 (Size: 0x10, Type: StrProperty)
    TArray<void*> ReceiverAccountIds; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    FString GiftWrapTemplateId; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString PersonalMessage; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t AdditionalData[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCatalogPurchaseInfoGift, OfferId) == 0, "Offset mismatch for FCatalogPurchaseInfoGift::OfferId");
static_assert(offsetof(FCatalogPurchaseInfoGift, Currency) == 16, "Offset mismatch for FCatalogPurchaseInfoGift::Currency");
static_assert(offsetof(FCatalogPurchaseInfoGift, CurrencySubType) == 24, "Offset mismatch for FCatalogPurchaseInfoGift::CurrencySubType");
static_assert(offsetof(FCatalogPurchaseInfoGift, ExpectedTotalPrice) == 40, "Offset mismatch for FCatalogPurchaseInfoGift::ExpectedTotalPrice");
static_assert(offsetof(FCatalogPurchaseInfoGift, GameContext) == 48, "Offset mismatch for FCatalogPurchaseInfoGift::GameContext");
static_assert(offsetof(FCatalogPurchaseInfoGift, ReceiverAccountIds) == 64, "Offset mismatch for FCatalogPurchaseInfoGift::ReceiverAccountIds");
static_assert(offsetof(FCatalogPurchaseInfoGift, GiftWrapTemplateId) == 80, "Offset mismatch for FCatalogPurchaseInfoGift::GiftWrapTemplateId");
static_assert(offsetof(FCatalogPurchaseInfoGift, PersonalMessage) == 96, "Offset mismatch for FCatalogPurchaseInfoGift::PersonalMessage");
static_assert(offsetof(FCatalogPurchaseInfoGift, AdditionalData) == 112, "Offset mismatch for FCatalogPurchaseInfoGift::AdditionalData");

// /Script/GameSubCatalog.CatalogPurchaseNotification
// Kind: ScriptStruct; super: none
struct FCatalogPurchaseNotification
{
public:
    std::uint8_t LootResult[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCatalogPurchaseNotification, LootResult) == 0, "Offset mismatch for FCatalogPurchaseNotification::LootResult");

// /Script/GameSubCatalog.CatalogReceiptInfo
// Kind: ScriptStruct; super: none
struct FCatalogReceiptInfo
{
public:
    std::uint8_t AppStore; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString AppStoreId; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString ReceiptId; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString ReceiptInfo; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString PurchaseCorrelationId; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString UxTraceId; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCatalogReceiptInfo, AppStore) == 0, "Offset mismatch for FCatalogReceiptInfo::AppStore");
static_assert(offsetof(FCatalogReceiptInfo, AppStoreId) == 8, "Offset mismatch for FCatalogReceiptInfo::AppStoreId");
static_assert(offsetof(FCatalogReceiptInfo, ReceiptId) == 24, "Offset mismatch for FCatalogReceiptInfo::ReceiptId");
static_assert(offsetof(FCatalogReceiptInfo, ReceiptInfo) == 40, "Offset mismatch for FCatalogReceiptInfo::ReceiptInfo");
static_assert(offsetof(FCatalogReceiptInfo, PurchaseCorrelationId) == 56, "Offset mismatch for FCatalogReceiptInfo::PurchaseCorrelationId");
static_assert(offsetof(FCatalogReceiptInfo, UxTraceId) == 72, "Offset mismatch for FCatalogReceiptInfo::UxTraceId");

// /Script/GameSubCatalog.CatalogRedeemRealMoneyPurchasesInfo
// Kind: ScriptStruct; super: none
struct FCatalogRedeemRealMoneyPurchasesInfo
{
public:
    std::uint8_t AppStore; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> AuthTokens; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReceiptIds; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PlatformMetadata; // 0x0028 (Size: 0x10, Type: MapProperty)
    TArray<void*> PurchaseInfos; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RefreshType; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VerifierModeOverride; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    TArray<void*> CatalogItems; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    FString PurchaseCorrelationId; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString UxTraceId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t AdditionalData[0xB8]; // 0x0080 (Size: 0xB8, Type: StructProperty)
    TMap<void*, void*> ClientTriggers; // 0x0138 (Size: 0x10, Type: MapProperty)
    std::uint8_t CustomOfferRefreshSettings[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, AppStore) == 0, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::AppStore");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, AuthTokens) == 8, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::AuthTokens");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, ReceiptIds) == 24, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::ReceiptIds");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, PlatformMetadata) == 40, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::PlatformMetadata");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, PurchaseInfos) == 56, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::PurchaseInfos");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, RefreshType) == 72, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::RefreshType");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, VerifierModeOverride) == 73, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::VerifierModeOverride");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, CatalogItems) == 80, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::CatalogItems");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, PurchaseCorrelationId) == 96, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::PurchaseCorrelationId");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, UxTraceId) == 112, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::UxTraceId");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, AdditionalData) == 128, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::AdditionalData");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, ClientTriggers) == 312, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::ClientTriggers");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesInfo, CustomOfferRefreshSettings) == 328, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesInfo::CustomOfferRefreshSettings");

// /Script/GameSubCatalog.CatalogRedeemRealMoneyPurchasesPurchaseInfo
// Kind: ScriptStruct; super: none
struct FCatalogRedeemRealMoneyPurchasesPurchaseInfo
{
public:
    FString AppStoreId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString InstanceID; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesPurchaseInfo, AppStoreId) == 0, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesPurchaseInfo::AppStoreId");
static_assert(offsetof(FCatalogRedeemRealMoneyPurchasesPurchaseInfo, InstanceID) == 16, "Offset mismatch for FCatalogRedeemRealMoneyPurchasesPurchaseInfo::InstanceID");

// /Script/GameSubCatalog.CatalogRefundNotification
// Kind: ScriptStruct; super: none
struct FCatalogRefundNotification
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameSubCatalog.FortItemShopFilterContext
// Kind: ScriptStruct; super: none
struct FFortItemShopFilterContext
{
public:
    TArray<void*> ActiveFilters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InactiveFilters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortItemShopFilterContext, ActiveFilters) == 0, "Offset mismatch for FFortItemShopFilterContext::ActiveFilters");
static_assert(offsetof(FFortItemShopFilterContext, InactiveFilters) == 16, "Offset mismatch for FFortItemShopFilterContext::InactiveFilters");

// /Script/GameSubCatalog.ItemQuantity
// Kind: ScriptStruct; super: none
struct FItemQuantity
{
public:
    FString TemplateId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Quantity; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t Attributes[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FItemQuantity, TemplateId) == 0, "Offset mismatch for FItemQuantity::TemplateId");
static_assert(offsetof(FItemQuantity, Quantity) == 16, "Offset mismatch for FItemQuantity::Quantity");
static_assert(offsetof(FItemQuantity, Attributes) == 24, "Offset mismatch for FItemQuantity::Attributes");

// /Script/GameSubCatalog.KeychainDownload
// Kind: ScriptStruct; super: none
struct FKeychainDownload
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameSubCatalog.McpCustomOfferPlayerOffer
// Kind: ScriptStruct; super: none
struct FMcpCustomOfferPlayerOffer
{
public:
    FString OfferId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ExperimentName; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString RuleId; // 0x0020 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> CustomStatsigValues; // 0x0030 (Size: 0x10, Type: MapProperty)
    std::uint8_t IsEligible; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMcpCustomOfferPlayerOffer, OfferId) == 0, "Offset mismatch for FMcpCustomOfferPlayerOffer::OfferId");
static_assert(offsetof(FMcpCustomOfferPlayerOffer, ExperimentName) == 16, "Offset mismatch for FMcpCustomOfferPlayerOffer::ExperimentName");
static_assert(offsetof(FMcpCustomOfferPlayerOffer, RuleId) == 32, "Offset mismatch for FMcpCustomOfferPlayerOffer::RuleId");
static_assert(offsetof(FMcpCustomOfferPlayerOffer, CustomStatsigValues) == 48, "Offset mismatch for FMcpCustomOfferPlayerOffer::CustomStatsigValues");
static_assert(offsetof(FMcpCustomOfferPlayerOffer, IsEligible) == 64, "Offset mismatch for FMcpCustomOfferPlayerOffer::IsEligible");

// /Script/GameSubCatalog.McpCustomOfferPlayerState
// Kind: ScriptStruct; super: none
struct FMcpCustomOfferPlayerState
{
public:
    TArray<void*> PlayerOffers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMcpCustomOfferPlayerState, PlayerOffers) == 0, "Offset mismatch for FMcpCustomOfferPlayerState::PlayerOffers");

// /Script/GameSubCatalog.McpEntitlementRefreshTimerInfo
// Kind: ScriptStruct; super: none
struct FMcpEntitlementRefreshTimerInfo
{
public:
    std::uint8_t NextEntitlementRefresh[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t MustRefreshAuthBy[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastAuthRefresh[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMcpEntitlementRefreshTimerInfo, NextEntitlementRefresh) == 0, "Offset mismatch for FMcpEntitlementRefreshTimerInfo::NextEntitlementRefresh");
static_assert(offsetof(FMcpEntitlementRefreshTimerInfo, MustRefreshAuthBy) == 8, "Offset mismatch for FMcpEntitlementRefreshTimerInfo::MustRefreshAuthBy");
static_assert(offsetof(FMcpEntitlementRefreshTimerInfo, LastAuthRefresh) == 16, "Offset mismatch for FMcpEntitlementRefreshTimerInfo::LastAuthRefresh");

// /Script/GameSubCatalog.McpInAppPurchases
// Kind: ScriptStruct; super: none
struct FMcpInAppPurchases
{
public:
    TArray<void*> Fulfillments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> FulfillmentCounts; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SeasonCashOutOverrides; // 0x0020 (Size: 0x10, Type: MapProperty)
    TArray<void*> SubscriptionEndActions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RefreshTimers; // 0x0040 (Size: 0x10, Type: MapProperty)
    TArray<void*> ProcessedConsumables; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CheckpointToSendClientLogs; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RewardsGivenIds; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PurchaseProcessingOverride[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    std::uint8_t CustomOfferState[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t MtxGiftingRestriction; // 0x0098 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMcpInAppPurchases, Fulfillments) == 0, "Offset mismatch for FMcpInAppPurchases::Fulfillments");
static_assert(offsetof(FMcpInAppPurchases, FulfillmentCounts) == 16, "Offset mismatch for FMcpInAppPurchases::FulfillmentCounts");
static_assert(offsetof(FMcpInAppPurchases, SeasonCashOutOverrides) == 32, "Offset mismatch for FMcpInAppPurchases::SeasonCashOutOverrides");
static_assert(offsetof(FMcpInAppPurchases, SubscriptionEndActions) == 48, "Offset mismatch for FMcpInAppPurchases::SubscriptionEndActions");
static_assert(offsetof(FMcpInAppPurchases, RefreshTimers) == 64, "Offset mismatch for FMcpInAppPurchases::RefreshTimers");
static_assert(offsetof(FMcpInAppPurchases, ProcessedConsumables) == 80, "Offset mismatch for FMcpInAppPurchases::ProcessedConsumables");
static_assert(offsetof(FMcpInAppPurchases, CheckpointToSendClientLogs) == 96, "Offset mismatch for FMcpInAppPurchases::CheckpointToSendClientLogs");
static_assert(offsetof(FMcpInAppPurchases, RewardsGivenIds) == 112, "Offset mismatch for FMcpInAppPurchases::RewardsGivenIds");
static_assert(offsetof(FMcpInAppPurchases, PurchaseProcessingOverride) == 128, "Offset mismatch for FMcpInAppPurchases::PurchaseProcessingOverride");
static_assert(offsetof(FMcpInAppPurchases, CustomOfferState) == 136, "Offset mismatch for FMcpInAppPurchases::CustomOfferState");
static_assert(offsetof(FMcpInAppPurchases, MtxGiftingRestriction) == 152, "Offset mismatch for FMcpInAppPurchases::MtxGiftingRestriction");

// /Script/GameSubCatalog.McpProcessedConsumables
// Kind: ScriptStruct; super: none
struct FMcpProcessedConsumables
{
public:
    std::uint8_t AppStore; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> IDs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMcpProcessedConsumables, AppStore) == 0, "Offset mismatch for FMcpProcessedConsumables::AppStore");
static_assert(offsetof(FMcpProcessedConsumables, IDs) == 8, "Offset mismatch for FMcpProcessedConsumables::IDs");

// /Script/GameSubCatalog.McpRmtClientTriggerValues
// Kind: ScriptStruct; super: none
struct FMcpRmtClientTriggerValues
{
public:
    TArray<void*> TriggerValues; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMcpRmtClientTriggerValues, TriggerValues) == 0, "Offset mismatch for FMcpRmtClientTriggerValues::TriggerValues");

// /Script/GameSubCatalog.McpSubscriptionEndAction
// Kind: ScriptStruct; super: none
struct FMcpSubscriptionEndAction
{
public:
    FString UniqueSubscriptionId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString SeasonTemplateId; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMcpSubscriptionEndAction, UniqueSubscriptionId) == 0, "Offset mismatch for FMcpSubscriptionEndAction::UniqueSubscriptionId");
static_assert(offsetof(FMcpSubscriptionEndAction, SeasonTemplateId) == 16, "Offset mismatch for FMcpSubscriptionEndAction::SeasonTemplateId");

// /Script/GameSubCatalog.OfferNumericPriceAdjustment
// Kind: ScriptStruct; super: none
struct FOfferNumericPriceAdjustment
{
public:
    FString Currency; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t DecimalPower; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FOfferNumericPriceAdjustment, Currency) == 0, "Offset mismatch for FOfferNumericPriceAdjustment::Currency");
static_assert(offsetof(FOfferNumericPriceAdjustment, DecimalPower) == 16, "Offset mismatch for FOfferNumericPriceAdjustment::DecimalPower");

// /Script/GameSubCatalog.OfferNumericPriceAdjustments
// Kind: ScriptStruct; super: none
struct FOfferNumericPriceAdjustments
{
public:
    TArray<void*> OfferPriceAdjustments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOfferNumericPriceAdjustments, OfferPriceAdjustments) == 0, "Offset mismatch for FOfferNumericPriceAdjustments::OfferPriceAdjustments");

// /Script/GameSubCatalog.PurchaseProcessingOverride
// Kind: ScriptStruct; super: none
struct FPurchaseProcessingOverride
{
public:
    std::uint8_t NoVbucksDeductionOnTPCPurchase; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPurchaseProcessingOverride, NoVbucksDeductionOnTPCPurchase) == 0, "Offset mismatch for FPurchaseProcessingOverride::NoVbucksDeductionOnTPCPurchase");

// /Script/GameSubCatalog.StoreFront
// Kind: ScriptStruct; super: none
struct FStoreFront
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> CatalogEntries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStoreFront, Name) == 0, "Offset mismatch for FStoreFront::Name");
static_assert(offsetof(FStoreFront, CatalogEntries) == 16, "Offset mismatch for FStoreFront::CatalogEntries");

// /Script/GameSubCatalog.StoreOfferInfo
// Kind: ScriptStruct; super: none
struct FStoreOfferInfo
{
public:
    FString StoreFront; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString StoreId; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString GroupID; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FStoreOfferInfo, StoreFront) == 0, "Offset mismatch for FStoreOfferInfo::StoreFront");
static_assert(offsetof(FStoreOfferInfo, StoreId) == 16, "Offset mismatch for FStoreOfferInfo::StoreId");
static_assert(offsetof(FStoreOfferInfo, GroupID) == 32, "Offset mismatch for FStoreOfferInfo::GroupID");

// /Script/GameSubCatalog.CatalogOffersPriceConfig
// Kind: Class; super: Object
class UCatalogOffersPriceConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> AppStoreOfferNumericPriceAdjustments; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCatalogOffersPriceConfig, AppStoreOfferNumericPriceAdjustments) == 40, "Offset mismatch for UCatalogOffersPriceConfig::AppStoreOfferNumericPriceAdjustments");

// /Script/GameSubCatalog.McpCatalogItemsForRandomPlayer
// Kind: Class; super: Object
class UMcpCatalogItemsForRandomPlayer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t Percentage; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FString Salt; // 0x0030 (Size: 0x10, Type: StrProperty)
    TArray<void*> CatalogItems; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMcpCatalogItemsForRandomPlayer, Percentage) == 40, "Offset mismatch for UMcpCatalogItemsForRandomPlayer::Percentage");
static_assert(offsetof(UMcpCatalogItemsForRandomPlayer, Salt) == 48, "Offset mismatch for UMcpCatalogItemsForRandomPlayer::Salt");
static_assert(offsetof(UMcpCatalogItemsForRandomPlayer, CatalogItems) == 64, "Offset mismatch for UMcpCatalogItemsForRandomPlayer::CatalogItems");

// /Script/GameSubCatalog.McpRmtClientTriggerConfig
// Kind: Class; super: Object
class UMcpRmtClientTriggerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ClientTriggers; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMcpRmtClientTriggerConfig, ClientTriggers) == 40, "Offset mismatch for UMcpRmtClientTriggerConfig::ClientTriggers");

// /Script/GameSubCatalog.McpRmtParamOverrideSelector
// Kind: Class; super: Object
class UMcpRmtParamOverrideSelector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t RangeStart; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint32_t RangeEnd; // 0x002C (Size: 0x4, Type: UInt32Property)
    FString Salt; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t FulfillmentVerifierModeOverride; // 0x0040 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMcpRmtParamOverrideSelector, RangeStart) == 40, "Offset mismatch for UMcpRmtParamOverrideSelector::RangeStart");
static_assert(offsetof(UMcpRmtParamOverrideSelector, RangeEnd) == 44, "Offset mismatch for UMcpRmtParamOverrideSelector::RangeEnd");
static_assert(offsetof(UMcpRmtParamOverrideSelector, Salt) == 48, "Offset mismatch for UMcpRmtParamOverrideSelector::Salt");
static_assert(offsetof(UMcpRmtParamOverrideSelector, FulfillmentVerifierModeOverride) == 64, "Offset mismatch for UMcpRmtParamOverrideSelector::FulfillmentVerifierModeOverride");
