#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AuroraCore
{
    struct AuroraBundleOffer
    {
        static constexpr std::string_view Name = "AuroraBundleOffer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AuroraOffer";
        struct Offsets
        {
            static constexpr std::uintptr_t Offers = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Offers", 0xF0, "ArrayProperty"},
        }};
    };

    struct AuroraBundleOfferPair
    {
        static constexpr std::string_view Name = "AuroraBundleOfferPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t offer = 0x0;
            static constexpr std::uintptr_t Count = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"offer", 0x0, "StructProperty"},
            {"Count", 0x10, "Int64Property"},
        }};
    };

    struct AuroraCoreSubsystem
    {
        static constexpr std::string_view Name = "AuroraCoreSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PurchaseInterfaceClassName = 0x30;
            static constexpr std::uintptr_t PurchaseInterfaceClassOverride = 0x40;
            static constexpr std::uintptr_t PurchaseInterface = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PurchaseInterfaceClassName", 0x30, "StrProperty"},
            {"PurchaseInterfaceClassOverride", 0x40, "ClassProperty"},
            {"PurchaseInterface", 0x48, "ObjectProperty"},
        }};
    };

    struct AuroraDescription
    {
        static constexpr std::string_view Name = "AuroraDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ShortDescription = 0x30;
            static constexpr std::uintptr_t Description = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "StructProperty"},
            {"ShortDescription", 0x30, "StructProperty"},
            {"Description", 0x60, "StructProperty"},
        }};
    };

    struct AuroraEntitlement
    {
        static constexpr std::string_view Name = "AuroraEntitlement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EntitlementIdentifier = 0x0;
            static constexpr std::uintptr_t EntitlementDescription = 0x10;
            static constexpr std::uintptr_t Icon = 0xA0;
            static constexpr std::uintptr_t MaxCount = 0xC0;
            static constexpr std::uintptr_t bConsumable = 0xC8;
            static constexpr std::uintptr_t bPaidRandomItem = 0xC9;
            static constexpr std::uintptr_t bPaidArea = 0xCA;
            static constexpr std::uintptr_t bConsequentialToGameplay = 0xCB;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EntitlementIdentifier", 0x0, "StrProperty"},
            {"EntitlementDescription", 0x10, "StructProperty"},
            {"Icon", 0xA0, "SoftObjectProperty"},
            {"MaxCount", 0xC0, "Int64Property"},
            {"bConsumable", 0xC8, "BoolProperty"},
            {"bPaidRandomItem", 0xC9, "BoolProperty"},
            {"bPaidArea", 0xCA, "BoolProperty"},
            {"bConsequentialToGameplay", 0xCB, "BoolProperty"},
        }};
    };

    struct AuroraEntitlementChange
    {
        static constexpr std::string_view Name = "AuroraEntitlementChange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EntitlementIdentifier = 0x0;
            static constexpr std::uintptr_t Quantity = 0x10;
            static constexpr std::uintptr_t Change = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EntitlementIdentifier", 0x0, "StrProperty"},
            {"Quantity", 0x10, "Int64Property"},
            {"Change", 0x18, "Int64Property"},
        }};
    };

    struct AuroraEntitlementOffer
    {
        static constexpr std::string_view Name = "AuroraEntitlementOffer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AuroraOffer";
        struct Offsets
        {
            static constexpr std::uintptr_t EntitlementType = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntitlementType", 0xF0, "StructProperty"},
        }};
    };

    struct AuroraEntitlementQuantities
    {
        static constexpr std::string_view Name = "AuroraEntitlementQuantities";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t EntitlementQuantities = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntitlementQuantities", 0x48, "ArrayProperty"},
        }};
    };

    struct AuroraEntitlementQuantity
    {
        static constexpr std::string_view Name = "AuroraEntitlementQuantity";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t EntitlementIdentifier = 0x10;
            static constexpr std::uintptr_t Quantity = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntitlementIdentifier", 0x10, "StrProperty"},
            {"Quantity", 0x20, "Int64Property"},
        }};
    };

    struct AuroraHideOfferCatalogRequested
    {
        static constexpr std::string_view Name = "AuroraHideOfferCatalogRequested";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bForce = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bForce", 0x0, "BoolProperty"},
        }};
    };

    struct AuroraInvoice
    {
        static constexpr std::string_view Name = "AuroraInvoice";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AuroraInvoicePurchased
    {
        static constexpr std::string_view Name = "AuroraInvoicePurchased";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Invoice = 0x0;
            static constexpr std::uintptr_t bSuccessful = 0x10;
            static constexpr std::uintptr_t Receipt = 0x18;
            static constexpr std::uintptr_t ErrorCode = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Invoice", 0x0, "StructProperty"},
            {"bSuccessful", 0x10, "BoolProperty"},
            {"Receipt", 0x18, "StructProperty"},
            {"ErrorCode", 0x28, "StrProperty"},
        }};
    };

    struct AuroraOffer
    {
        static constexpr std::string_view Name = "AuroraOffer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferIdentifier = 0x0;
            static constexpr std::uintptr_t OfferType = 0x10;
            static constexpr std::uintptr_t OfferDescription = 0x20;
            static constexpr std::uintptr_t Icon = 0xB0;
            static constexpr std::uintptr_t IconAssetPathName = 0xD0;
            static constexpr std::uintptr_t Price = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OfferIdentifier", 0x0, "StructProperty"},
            {"OfferType", 0x10, "StrProperty"},
            {"OfferDescription", 0x20, "StructProperty"},
            {"Icon", 0xB0, "SoftObjectProperty"},
            {"IconAssetPathName", 0xD0, "StrProperty"},
            {"Price", 0xE0, "StructProperty"},
        }};
    };

    struct AuroraOfferSelected
    {
        static constexpr std::string_view Name = "AuroraOfferSelected";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferInstanceId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OfferInstanceId", 0x0, "StructProperty"},
        }};
    };

    struct AuroraOnDialogClosed
    {
        static constexpr std::string_view Name = "AuroraOnDialogClosed";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AuroraOnPurchaseCanceled
    {
        static constexpr std::string_view Name = "AuroraOnPurchaseCanceled";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AuroraOwnedProductQuantitiesChanged
    {
        static constexpr std::string_view Name = "AuroraOwnedProductQuantitiesChanged";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnedProductQuantities = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnedProductQuantities", 0x0, "MapProperty"},
        }};
    };

    struct AuroraPlayerControllerComponent
    {
        static constexpr std::string_view Name = "AuroraPlayerControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PurchaseImplementationClass = 0x138;
            static constexpr std::uintptr_t OwnedEntitlementQuantities = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PurchaseImplementationClass", 0x138, "ClassProperty"},
            {"OwnedEntitlementQuantities", 0x140, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 24> FunctionNames{{
            "BP_CloseOffersDialog",
            "BP_OnFinalizedPurchaseResult",
            "BP_OnIntentPurchaseOfferFailed",
            "BP_OnOwnedProductQuantitiesChanged",
            "BP_OnPurchasedInvoice",
            "BP_ShowOffersDialog",
            "BP_StartPurchaseInvoice",
            "BP_StartPurchaseInvoiceOfferQueried",
            "CancelOfferPurchase",
            "ClientCloseIndividualOfferDialog",
            "ClientCloseOffersDialog",
            "ClientFinalizePurchaseResult",
            "ClientIntentPurchaseOfferFailed",
            "ClientShowOffersDialog",
            "ClientStartPurchaseInvoice",
            "CloseOffersDialog",
            "GetOwnedProductQuantities",
            "OnRep_PurchaseImplementationClass",
            "PurchaseInvoice",
            "ServerCancelOfferPurchase",
            "ServerIntentPurchaseOffer",
            "ServerOnCloseOffersDialog",
            "ServerUploadReceipt",
            "ShowOffersDialog",
        }};
    };

    struct AuroraPriceDimension
    {
        static constexpr std::string_view Name = "AuroraPriceDimension";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AuroraPriceDimensionDouble
    {
        static constexpr std::string_view Name = "AuroraPriceDimensionDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AuroraPriceDimension";
        struct Offsets
        {
            static constexpr std::uintptr_t Amount = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Amount", 0x0, "DoubleProperty"},
        }};
    };

    struct AuroraPriceDimensionInt
    {
        static constexpr std::string_view Name = "AuroraPriceDimensionInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AuroraPriceDimension";
        struct Offsets
        {
            static constexpr std::uintptr_t Amount = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Amount", 0x0, "Int64Property"},
        }};
    };

    struct AuroraProjectSettings
    {
        static constexpr std::string_view Name = "AuroraProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PricingTypeTranslation = 0x30;
            static constexpr std::uintptr_t PlatformToPlatformFamilyMappings = 0x40;
            static constexpr std::uintptr_t ExternalLoginTypeToPlatformFamilyMappings = 0x50;
            static constexpr std::uintptr_t bUseArtificialDelay = 0x60;
            static constexpr std::uintptr_t ArtificialDelayRange = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PricingTypeTranslation", 0x30, "MapProperty"},
            {"PlatformToPlatformFamilyMappings", 0x40, "MapProperty"},
            {"ExternalLoginTypeToPlatformFamilyMappings", 0x50, "MapProperty"},
            {"bUseArtificialDelay", 0x60, "BoolProperty"},
            {"ArtificialDelayRange", 0x64, "StructProperty"},
        }};
    };

    struct AuroraPurchase
    {
        static constexpr std::string_view Name = "AuroraPurchase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AuroraPurchaseDebug
    {
        static constexpr std::string_view Name = "AuroraPurchaseDebug";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AuroraPurchaseInvoiceRequested
    {
        static constexpr std::string_view Name = "AuroraPurchaseInvoiceRequested";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Invoice = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Invoice", 0x0, "StructProperty"},
        }};
    };

    struct AuroraPurchaseResultFinalized
    {
        static constexpr std::string_view Name = "AuroraPurchaseResultFinalized";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Receipt = 0x0;
            static constexpr std::uintptr_t bSuccessful = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Receipt", 0x0, "StructProperty"},
            {"bSuccessful", 0x10, "BoolProperty"},
        }};
    };

    struct AuroraReceipt
    {
        static constexpr std::string_view Name = "AuroraReceipt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AuroraShowOfferCatalogRequested
    {
        static constexpr std::string_view Name = "AuroraShowOfferCatalogRequested";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CatalogId = 0x0;
            static constexpr std::uintptr_t Offers = 0x10;
            static constexpr std::uintptr_t Title = 0x20;
            static constexpr std::uintptr_t OwnedProductQuantities = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CatalogId", 0x0, "StructProperty"},
            {"Offers", 0x10, "ArrayProperty"},
            {"Title", 0x20, "TextProperty"},
            {"OwnedProductQuantities", 0x30, "MapProperty"},
        }};
    };

    struct AuroraStartPurchaseOfferQueried
    {
        static constexpr std::string_view Name = "AuroraStartPurchaseOfferQueried";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Invoice = 0x0;
            static constexpr std::uintptr_t bSuccessful = 0x10;
            static constexpr std::uintptr_t offer = 0x18;
            static constexpr std::uintptr_t OwnedProductQuantities = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Invoice", 0x0, "StructProperty"},
            {"bSuccessful", 0x10, "BoolProperty"},
            {"offer", 0x18, "StructProperty"},
            {"OwnedProductQuantities", 0x28, "MapProperty"},
        }};
    };

    struct AuroraStartPurchaseRequested
    {
        static constexpr std::string_view Name = "AuroraStartPurchaseRequested";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Invoice = 0x0;
            static constexpr std::uintptr_t bSuccessful = 0x10;
            static constexpr std::uintptr_t ErrorCode = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Invoice", 0x0, "StructProperty"},
            {"bSuccessful", 0x10, "BoolProperty"},
            {"ErrorCode", 0x18, "StrProperty"},
        }};
    };

}
