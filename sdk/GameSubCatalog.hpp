#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameSubCatalog
{
    struct AdditionalCheckoutProperty
    {
        static constexpr std::string_view Name = "AdditionalCheckoutProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "StrProperty"},
            {"Value", 0x10, "StrProperty"},
        }};
    };

    struct AppStoreCheckoutConfig
    {
        static constexpr std::string_view Name = "AppStoreCheckoutConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AppStore = 0x0;
            static constexpr std::uintptr_t CheckoutType = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AppStore", 0x0, "EnumProperty"},
            {"CheckoutType", 0x1, "EnumProperty"},
        }};
    };

    struct CatalogCheckoutOptions
    {
        static constexpr std::string_view Name = "CatalogCheckoutOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalCheckoutProperties = 0x0;
            static constexpr std::uintptr_t bSkipCheckingEntitlementCount = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AdditionalCheckoutProperties", 0x0, "ArrayProperty"},
            {"bSkipCheckingEntitlementCount", 0x10, "BoolProperty"},
        }};
    };

    struct CatalogCustomOfferInfo
    {
        static constexpr std::string_view Name = "CatalogCustomOfferInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExperimentName = 0x0;
            static constexpr std::uintptr_t ReplacesOfferIds = 0x10;
            static constexpr std::uintptr_t bLogExposureOnServer = 0x20;
            static constexpr std::uintptr_t bRestrictsGifting = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExperimentName", 0x0, "StrProperty"},
            {"ReplacesOfferIds", 0x10, "ArrayProperty"},
            {"bLogExposureOnServer", 0x20, "BoolProperty"},
            {"bRestrictsGifting", 0x21, "BoolProperty"},
        }};
    };

    struct CatalogCustomOfferRefreshSettings
    {
        static constexpr std::string_view Name = "CatalogCustomOfferRefreshSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ForceRefreshCustomOffers = 0x0;
            static constexpr std::uintptr_t ClientEnabledPersonalizationOptIn = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ForceRefreshCustomOffers", 0x0, "BoolProperty"},
            {"ClientEnabledPersonalizationOptIn", 0x1, "BoolProperty"},
        }};
    };

    struct CatalogDownload
    {
        static constexpr std::string_view Name = "CatalogDownload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RefreshIntervalHrs = 0x0;
            static constexpr std::uintptr_t DailyPurchaseHrs = 0x4;
            static constexpr std::uintptr_t Expiration = 0x8;
            static constexpr std::uintptr_t Storefronts = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RefreshIntervalHrs", 0x0, "IntProperty"},
            {"DailyPurchaseHrs", 0x4, "IntProperty"},
            {"Expiration", 0x8, "StructProperty"},
            {"Storefronts", 0x10, "ArrayProperty"},
        }};
    };

    struct CatalogDynamicBundle
    {
        static constexpr std::string_view Name = "CatalogDynamicBundle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DiscountedBasePrice = 0x0;
            static constexpr std::uintptr_t RegularBasePrice = 0x4;
            static constexpr std::uintptr_t FloorPrice = 0x8;
            static constexpr std::uintptr_t CurrencyType = 0xC;
            static constexpr std::uintptr_t CurrencySubType = 0x10;
            static constexpr std::uintptr_t DisplayType = 0x20;
            static constexpr std::uintptr_t BundleItems = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DiscountedBasePrice", 0x0, "IntProperty"},
            {"RegularBasePrice", 0x4, "IntProperty"},
            {"FloorPrice", 0x8, "IntProperty"},
            {"CurrencyType", 0xC, "ByteProperty"},
            {"CurrencySubType", 0x10, "StrProperty"},
            {"DisplayType", 0x20, "ByteProperty"},
            {"BundleItems", 0x28, "ArrayProperty"},
        }};
    };

    struct CatalogDynamicBundleItem
    {
        static constexpr std::string_view Name = "CatalogDynamicBundleItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x0;
            static constexpr std::uintptr_t bCanOwnMultiple = 0x38;
            static constexpr std::uintptr_t RegularPrice = 0x3C;
            static constexpr std::uintptr_t DiscountedPrice = 0x40;
            static constexpr std::uintptr_t AlreadyOwnedPriceReduction = 0x44;
            static constexpr std::uintptr_t Title = 0x48;
            static constexpr std::uintptr_t Description = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Item", 0x0, "StructProperty"},
            {"bCanOwnMultiple", 0x38, "BoolProperty"},
            {"RegularPrice", 0x3C, "IntProperty"},
            {"DiscountedPrice", 0x40, "IntProperty"},
            {"AlreadyOwnedPriceReduction", 0x44, "IntProperty"},
            {"Title", 0x48, "TextProperty"},
            {"Description", 0x58, "TextProperty"},
        }};
    };

    struct CatalogGiftInfo
    {
        static constexpr std::string_view Name = "CatalogGiftInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x0;
            static constexpr std::uintptr_t ForcedGiftBoxTemplateId = 0x8;
            static constexpr std::uintptr_t PurchaseRequirements = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsEnabled", 0x0, "BoolProperty"},
            {"ForcedGiftBoxTemplateId", 0x8, "StrProperty"},
            {"PurchaseRequirements", 0x18, "ArrayProperty"},
        }};
    };

    struct CatalogItemPrice
    {
        static constexpr std::string_view Name = "CatalogItemPrice";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrencyType = 0x0;
            static constexpr std::uintptr_t CurrencySubType = 0x8;
            static constexpr std::uintptr_t RegularPrice = 0x18;
            static constexpr std::uintptr_t FinalPrice = 0x1C;
            static constexpr std::uintptr_t FinalPriceTextOverride = 0x20;
            static constexpr std::uintptr_t RegularPriceTextOverride = 0x30;
            static constexpr std::uintptr_t SaleType = 0x40;
            static constexpr std::uintptr_t SaleExpiration = 0x48;
            static constexpr std::uintptr_t AppStoreId = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CurrencyType", 0x0, "ByteProperty"},
            {"CurrencySubType", 0x8, "StrProperty"},
            {"RegularPrice", 0x18, "IntProperty"},
            {"FinalPrice", 0x1C, "IntProperty"},
            {"FinalPriceTextOverride", 0x20, "TextProperty"},
            {"RegularPriceTextOverride", 0x30, "TextProperty"},
            {"SaleType", 0x40, "ByteProperty"},
            {"SaleExpiration", 0x48, "StructProperty"},
            {"AppStoreId", 0x50, "EnumProperty"},
        }};
    };

    struct CatalogItemSalePrice
    {
        static constexpr std::string_view Name = "CatalogItemSalePrice";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SalePrice = 0x0;
            static constexpr std::uintptr_t SaleType = 0x4;
            static constexpr std::uintptr_t StartTime = 0x8;
            static constexpr std::uintptr_t EndTime = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SalePrice", 0x0, "IntProperty"},
            {"SaleType", 0x4, "ByteProperty"},
            {"StartTime", 0x8, "StructProperty"},
            {"EndTime", 0x10, "StructProperty"},
        }};
    };

    struct CatalogKeyValue
    {
        static constexpr std::string_view Name = "CatalogKeyValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "StrProperty"},
            {"Value", 0x10, "StrProperty"},
        }};
    };

    struct CatalogMetaAssetInfo
    {
        static constexpr std::string_view Name = "CatalogMetaAssetInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StructName = 0x0;
            static constexpr std::uintptr_t Payload = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StructName", 0x0, "StrProperty"},
            {"Payload", 0x10, "StructProperty"},
        }};
    };

    struct CatalogOffer
    {
        static constexpr std::string_view Name = "CatalogOffer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferId = 0x0;
            static constexpr std::uintptr_t DevName = 0x10;
            static constexpr std::uintptr_t MetaInfo = 0x20;
            static constexpr std::uintptr_t OfferType = 0x30;
            static constexpr std::uintptr_t Prices = 0x38;
            static constexpr std::uintptr_t DynamicBundleInfo = 0x48;
            static constexpr std::uintptr_t DailyLimit = 0x80;
            static constexpr std::uintptr_t WeeklyLimit = 0x84;
            static constexpr std::uintptr_t MonthlyLimit = 0x88;
            static constexpr std::uintptr_t Categories = 0x90;
            static constexpr std::uintptr_t CatalogGroup = 0xA0;
            static constexpr std::uintptr_t CatalogGroupPriority = 0xB0;
            static constexpr std::uintptr_t SortPriority = 0xB4;
            static constexpr std::uintptr_t Title = 0xB8;
            static constexpr std::uintptr_t ShortDescription = 0xC8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t AppStoreId = 0xE8;
            static constexpr std::uintptr_t MetaAssetInfo = 0x1B8;
            static constexpr std::uintptr_t DisplayAssetPath = 0x1E8;
            static constexpr std::uintptr_t ItemGrants = 0x1F8;
            static constexpr std::uintptr_t Requirements = 0x208;
            static constexpr std::uintptr_t GiftInfo = 0x218;
            static constexpr std::uintptr_t CustomOfferInfo = 0x240;
            static constexpr std::uintptr_t RefundType = 0x270;
            static constexpr std::uintptr_t DenyItemTemplateIds = 0x278;
            static constexpr std::uintptr_t refundable = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"OfferId", 0x0, "StrProperty"},
            {"DevName", 0x10, "StrProperty"},
            {"MetaInfo", 0x20, "ArrayProperty"},
            {"OfferType", 0x30, "EnumProperty"},
            {"Prices", 0x38, "ArrayProperty"},
            {"DynamicBundleInfo", 0x48, "StructProperty"},
            {"DailyLimit", 0x80, "IntProperty"},
            {"WeeklyLimit", 0x84, "IntProperty"},
            {"MonthlyLimit", 0x88, "IntProperty"},
            {"Categories", 0x90, "ArrayProperty"},
            {"CatalogGroup", 0xA0, "StrProperty"},
            {"CatalogGroupPriority", 0xB0, "IntProperty"},
            {"SortPriority", 0xB4, "IntProperty"},
            {"Title", 0xB8, "TextProperty"},
            {"ShortDescription", 0xC8, "TextProperty"},
            {"Description", 0xD8, "TextProperty"},
            {"AppStoreId", 0xE8, "StrProperty"},
            {"MetaAssetInfo", 0x1B8, "StructProperty"},
            {"DisplayAssetPath", 0x1E8, "StrProperty"},
            {"ItemGrants", 0x1F8, "ArrayProperty"},
            {"Requirements", 0x208, "ArrayProperty"},
            {"GiftInfo", 0x218, "StructProperty"},
            {"CustomOfferInfo", 0x240, "OptionalProperty"},
            {"RefundType", 0x270, "EnumProperty"},
            {"DenyItemTemplateIds", 0x278, "ArrayProperty"},
            {"refundable", 0x288, "BoolProperty"},
        }};
    };

    struct CatalogOfferRequirement
    {
        static constexpr std::string_view Name = "CatalogOfferRequirement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RequirementType = 0x0;
            static constexpr std::uintptr_t MinQuantity = 0x4;
            static constexpr std::uintptr_t RequiredId = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RequirementType", 0x0, "EnumProperty"},
            {"MinQuantity", 0x4, "IntProperty"},
            {"RequiredId", 0x8, "StrProperty"},
        }};
    };

    struct CatalogOffersPriceConfig
    {
        static constexpr std::string_view Name = "CatalogOffersPriceConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AppStoreOfferNumericPriceAdjustments = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AppStoreOfferNumericPriceAdjustments", 0x28, "MapProperty"},
        }};
    };

    struct CatalogPurchaseAdditionalData
    {
        static constexpr std::string_view Name = "CatalogPurchaseAdditionalData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StoreOfferInfo";
        struct Offsets
        {
            static constexpr std::uintptr_t IslandId = 0x30;
            static constexpr std::uintptr_t IslandTitle = 0x40;
            static constexpr std::uintptr_t ProductTag = 0x50;
            static constexpr std::uintptr_t StoreContext = 0x60;
            static constexpr std::uintptr_t SourceContext = 0x70;
            static constexpr std::uintptr_t CheckoutProperties = 0x80;
            static constexpr std::uintptr_t ItemShopFilterContext = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"IslandId", 0x30, "StrProperty"},
            {"IslandTitle", 0x40, "StrProperty"},
            {"ProductTag", 0x50, "StrProperty"},
            {"StoreContext", 0x60, "StrProperty"},
            {"SourceContext", 0x70, "StrProperty"},
            {"CheckoutProperties", 0x80, "MapProperty"},
            {"ItemShopFilterContext", 0x90, "StructProperty"},
        }};
    };

    struct CatalogPurchaseInfo
    {
        static constexpr std::string_view Name = "CatalogPurchaseInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferId = 0x0;
            static constexpr std::uintptr_t PurchaseQuantity = 0x10;
            static constexpr std::uintptr_t Currency = 0x14;
            static constexpr std::uintptr_t CurrencySubType = 0x18;
            static constexpr std::uintptr_t ExpectedTotalPrice = 0x28;
            static constexpr std::uintptr_t GameContext = 0x30;
            static constexpr std::uintptr_t AdditionalData = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OfferId", 0x0, "StrProperty"},
            {"PurchaseQuantity", 0x10, "IntProperty"},
            {"Currency", 0x14, "ByteProperty"},
            {"CurrencySubType", 0x18, "StrProperty"},
            {"ExpectedTotalPrice", 0x28, "IntProperty"},
            {"GameContext", 0x30, "StrProperty"},
            {"AdditionalData", 0x40, "StructProperty"},
        }};
    };

    struct CatalogPurchaseInfoGift
    {
        static constexpr std::string_view Name = "CatalogPurchaseInfoGift";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferId = 0x0;
            static constexpr std::uintptr_t Currency = 0x10;
            static constexpr std::uintptr_t CurrencySubType = 0x18;
            static constexpr std::uintptr_t ExpectedTotalPrice = 0x28;
            static constexpr std::uintptr_t GameContext = 0x30;
            static constexpr std::uintptr_t ReceiverAccountIds = 0x40;
            static constexpr std::uintptr_t GiftWrapTemplateId = 0x50;
            static constexpr std::uintptr_t PersonalMessage = 0x60;
            static constexpr std::uintptr_t AdditionalData = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OfferId", 0x0, "StrProperty"},
            {"Currency", 0x10, "ByteProperty"},
            {"CurrencySubType", 0x18, "StrProperty"},
            {"ExpectedTotalPrice", 0x28, "IntProperty"},
            {"GameContext", 0x30, "StrProperty"},
            {"ReceiverAccountIds", 0x40, "ArrayProperty"},
            {"GiftWrapTemplateId", 0x50, "StrProperty"},
            {"PersonalMessage", 0x60, "StrProperty"},
            {"AdditionalData", 0x70, "StructProperty"},
        }};
    };

    struct CatalogPurchaseNotification
    {
        static constexpr std::string_view Name = "CatalogPurchaseNotification";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LootResult = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LootResult", 0x0, "StructProperty"},
        }};
    };

    struct CatalogReceiptInfo
    {
        static constexpr std::string_view Name = "CatalogReceiptInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AppStore = 0x0;
            static constexpr std::uintptr_t AppStoreId = 0x8;
            static constexpr std::uintptr_t ReceiptId = 0x18;
            static constexpr std::uintptr_t ReceiptInfo = 0x28;
            static constexpr std::uintptr_t PurchaseCorrelationId = 0x38;
            static constexpr std::uintptr_t UxTraceId = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AppStore", 0x0, "EnumProperty"},
            {"AppStoreId", 0x8, "StrProperty"},
            {"ReceiptId", 0x18, "StrProperty"},
            {"ReceiptInfo", 0x28, "StrProperty"},
            {"PurchaseCorrelationId", 0x38, "StrProperty"},
            {"UxTraceId", 0x48, "StrProperty"},
        }};
    };

    struct CatalogRedeemRealMoneyPurchasesInfo
    {
        static constexpr std::string_view Name = "CatalogRedeemRealMoneyPurchasesInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AppStore = 0x0;
            static constexpr std::uintptr_t AuthTokens = 0x8;
            static constexpr std::uintptr_t ReceiptIds = 0x18;
            static constexpr std::uintptr_t PlatformMetadata = 0x28;
            static constexpr std::uintptr_t PurchaseInfos = 0x38;
            static constexpr std::uintptr_t RefreshType = 0x48;
            static constexpr std::uintptr_t VerifierModeOverride = 0x49;
            static constexpr std::uintptr_t CatalogItems = 0x50;
            static constexpr std::uintptr_t PurchaseCorrelationId = 0x60;
            static constexpr std::uintptr_t UxTraceId = 0x70;
            static constexpr std::uintptr_t AdditionalData = 0x80;
            static constexpr std::uintptr_t ClientTriggers = 0x138;
            static constexpr std::uintptr_t CustomOfferRefreshSettings = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"AppStore", 0x0, "EnumProperty"},
            {"AuthTokens", 0x8, "ArrayProperty"},
            {"ReceiptIds", 0x18, "ArrayProperty"},
            {"PlatformMetadata", 0x28, "MapProperty"},
            {"PurchaseInfos", 0x38, "ArrayProperty"},
            {"RefreshType", 0x48, "EnumProperty"},
            {"VerifierModeOverride", 0x49, "EnumProperty"},
            {"CatalogItems", 0x50, "ArrayProperty"},
            {"PurchaseCorrelationId", 0x60, "StrProperty"},
            {"UxTraceId", 0x70, "StrProperty"},
            {"AdditionalData", 0x80, "StructProperty"},
            {"ClientTriggers", 0x138, "MapProperty"},
            {"CustomOfferRefreshSettings", 0x148, "StructProperty"},
        }};
    };

    struct CatalogRedeemRealMoneyPurchasesPurchaseInfo
    {
        static constexpr std::string_view Name = "CatalogRedeemRealMoneyPurchasesPurchaseInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AppStoreId = 0x0;
            static constexpr std::uintptr_t InstanceID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AppStoreId", 0x0, "StrProperty"},
            {"InstanceID", 0x10, "StrProperty"},
        }};
    };

    struct CatalogRefundNotification
    {
        static constexpr std::string_view Name = "CatalogRefundNotification";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortItemShopFilterContext
    {
        static constexpr std::string_view Name = "FortItemShopFilterContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveFilters = 0x0;
            static constexpr std::uintptr_t InactiveFilters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveFilters", 0x0, "ArrayProperty"},
            {"InactiveFilters", 0x10, "ArrayProperty"},
        }};
    };

    struct ItemQuantity
    {
        static constexpr std::string_view Name = "ItemQuantity";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TemplateId = 0x0;
            static constexpr std::uintptr_t Quantity = 0x10;
            static constexpr std::uintptr_t Attributes = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TemplateId", 0x0, "StrProperty"},
            {"Quantity", 0x10, "IntProperty"},
            {"Attributes", 0x18, "StructProperty"},
        }};
    };

    struct KeychainDownload
    {
        static constexpr std::string_view Name = "KeychainDownload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct McpCatalogItemsForRandomPlayer
    {
        static constexpr std::string_view Name = "McpCatalogItemsForRandomPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Percentage = 0x28;
            static constexpr std::uintptr_t Salt = 0x30;
            static constexpr std::uintptr_t CatalogItems = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Percentage", 0x28, "UInt32Property"},
            {"Salt", 0x30, "StrProperty"},
            {"CatalogItems", 0x40, "ArrayProperty"},
        }};
    };

    struct McpCustomOfferPlayerOffer
    {
        static constexpr std::string_view Name = "McpCustomOfferPlayerOffer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferId = 0x0;
            static constexpr std::uintptr_t ExperimentName = 0x10;
            static constexpr std::uintptr_t RuleId = 0x20;
            static constexpr std::uintptr_t CustomStatsigValues = 0x30;
            static constexpr std::uintptr_t IsEligible = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OfferId", 0x0, "StrProperty"},
            {"ExperimentName", 0x10, "StrProperty"},
            {"RuleId", 0x20, "StrProperty"},
            {"CustomStatsigValues", 0x30, "MapProperty"},
            {"IsEligible", 0x40, "BoolProperty"},
        }};
    };

    struct McpCustomOfferPlayerState
    {
        static constexpr std::string_view Name = "McpCustomOfferPlayerState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerOffers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerOffers", 0x0, "ArrayProperty"},
        }};
    };

    struct McpEntitlementRefreshTimerInfo
    {
        static constexpr std::string_view Name = "McpEntitlementRefreshTimerInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NextEntitlementRefresh = 0x0;
            static constexpr std::uintptr_t MustRefreshAuthBy = 0x8;
            static constexpr std::uintptr_t LastAuthRefresh = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NextEntitlementRefresh", 0x0, "StructProperty"},
            {"MustRefreshAuthBy", 0x8, "StructProperty"},
            {"LastAuthRefresh", 0x10, "StructProperty"},
        }};
    };

    struct McpInAppPurchases
    {
        static constexpr std::string_view Name = "McpInAppPurchases";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Fulfillments = 0x0;
            static constexpr std::uintptr_t FulfillmentCounts = 0x10;
            static constexpr std::uintptr_t SeasonCashOutOverrides = 0x20;
            static constexpr std::uintptr_t SubscriptionEndActions = 0x30;
            static constexpr std::uintptr_t RefreshTimers = 0x40;
            static constexpr std::uintptr_t ProcessedConsumables = 0x50;
            static constexpr std::uintptr_t CheckpointToSendClientLogs = 0x60;
            static constexpr std::uintptr_t RewardsGivenIds = 0x70;
            static constexpr std::uintptr_t PurchaseProcessingOverride = 0x80;
            static constexpr std::uintptr_t CustomOfferState = 0x90;
            static constexpr std::uintptr_t MtxGiftingRestriction = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Fulfillments", 0x0, "ArrayProperty"},
            {"FulfillmentCounts", 0x10, "MapProperty"},
            {"SeasonCashOutOverrides", 0x20, "MapProperty"},
            {"SubscriptionEndActions", 0x30, "ArrayProperty"},
            {"RefreshTimers", 0x40, "MapProperty"},
            {"ProcessedConsumables", 0x50, "ArrayProperty"},
            {"CheckpointToSendClientLogs", 0x60, "ArrayProperty"},
            {"RewardsGivenIds", 0x70, "ArrayProperty"},
            {"PurchaseProcessingOverride", 0x80, "StructProperty"},
            {"CustomOfferState", 0x90, "StructProperty"},
            {"MtxGiftingRestriction", 0xA0, "EnumProperty"},
        }};
    };

    struct McpProcessedConsumables
    {
        static constexpr std::string_view Name = "McpProcessedConsumables";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AppStore = 0x0;
            static constexpr std::uintptr_t IDs = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AppStore", 0x0, "EnumProperty"},
            {"IDs", 0x8, "ArrayProperty"},
        }};
    };

    struct McpRmtClientTriggerConfig
    {
        static constexpr std::string_view Name = "McpRmtClientTriggerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ClientTriggers = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClientTriggers", 0x28, "MapProperty"},
        }};
    };

    struct McpRmtClientTriggerValues
    {
        static constexpr std::string_view Name = "McpRmtClientTriggerValues";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TriggerValues = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TriggerValues", 0x0, "ArrayProperty"},
        }};
    };

    struct McpRmtParamOverrideSelector
    {
        static constexpr std::string_view Name = "McpRmtParamOverrideSelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RangeStart = 0x28;
            static constexpr std::uintptr_t RangeEnd = 0x2C;
            static constexpr std::uintptr_t Salt = 0x30;
            static constexpr std::uintptr_t FulfillmentVerifierModeOverride = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RangeStart", 0x28, "UInt32Property"},
            {"RangeEnd", 0x2C, "UInt32Property"},
            {"Salt", 0x30, "StrProperty"},
            {"FulfillmentVerifierModeOverride", 0x40, "EnumProperty"},
        }};
    };

    struct McpSubscriptionEndAction
    {
        static constexpr std::string_view Name = "McpSubscriptionEndAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueSubscriptionId = 0x0;
            static constexpr std::uintptr_t SeasonTemplateId = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UniqueSubscriptionId", 0x0, "StrProperty"},
            {"SeasonTemplateId", 0x10, "StrProperty"},
        }};
    };

    struct OfferNumericPriceAdjustment
    {
        static constexpr std::string_view Name = "OfferNumericPriceAdjustment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Currency = 0x0;
            static constexpr std::uintptr_t DecimalPower = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Currency", 0x0, "StrProperty"},
            {"DecimalPower", 0x10, "IntProperty"},
        }};
    };

    struct OfferNumericPriceAdjustments
    {
        static constexpr std::string_view Name = "OfferNumericPriceAdjustments";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferPriceAdjustments = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OfferPriceAdjustments", 0x0, "ArrayProperty"},
        }};
    };

    struct PurchaseProcessingOverride
    {
        static constexpr std::string_view Name = "PurchaseProcessingOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NoVbucksDeductionOnTPCPurchase = 0x0;
            static constexpr std::uintptr_t DelilahShopUntil = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NoVbucksDeductionOnTPCPurchase", 0x0, "BoolProperty"},
            {"DelilahShopUntil", 0x8, "StructProperty"},
        }};
    };

    struct StoreFront
    {
        static constexpr std::string_view Name = "StoreFront";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t CatalogEntries = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"CatalogEntries", 0x10, "ArrayProperty"},
        }};
    };

    struct StoreOfferInfo
    {
        static constexpr std::string_view Name = "StoreOfferInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StoreFront = 0x0;
            static constexpr std::uintptr_t StoreId = 0x10;
            static constexpr std::uintptr_t GroupID = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StoreFront", 0x0, "StrProperty"},
            {"StoreId", 0x10, "StrProperty"},
            {"GroupID", 0x20, "StrProperty"},
        }};
    };

}
