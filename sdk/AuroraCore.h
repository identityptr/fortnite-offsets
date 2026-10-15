/**
 * decamp dumper generated SDK
 * Package: /Script/AuroraCore
 */
#pragma once
#include "Basic.h"

// /Script/AuroraCore.AuroraBundleOffer
// Kind: ScriptStruct; super: AuroraOffer
struct FAuroraBundleOffer
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    TArray<void*> Offers; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAuroraBundleOffer, Offers) == 240, "Offset mismatch for FAuroraBundleOffer::Offers");

// /Script/AuroraCore.AuroraBundleOfferPair
// Kind: ScriptStruct; super: none
struct FAuroraBundleOfferPair
{
public:
    std::uint8_t offer[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int64_t Count; // 0x0010 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FAuroraBundleOfferPair, offer) == 0, "Offset mismatch for FAuroraBundleOfferPair::offer");
static_assert(offsetof(FAuroraBundleOfferPair, Count) == 16, "Offset mismatch for FAuroraBundleOfferPair::Count");

// /Script/AuroraCore.AuroraDescription
// Kind: ScriptStruct; super: none
struct FAuroraDescription
{
public:
    std::uint8_t Name[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t ShortDescription[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t Description[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAuroraDescription, Name) == 0, "Offset mismatch for FAuroraDescription::Name");
static_assert(offsetof(FAuroraDescription, ShortDescription) == 48, "Offset mismatch for FAuroraDescription::ShortDescription");
static_assert(offsetof(FAuroraDescription, Description) == 96, "Offset mismatch for FAuroraDescription::Description");

// /Script/AuroraCore.AuroraEntitlement
// Kind: ScriptStruct; super: none
struct FAuroraEntitlement
{
public:
    FString EntitlementIdentifier; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t EntitlementDescription[0x90]; // 0x0010 (Size: 0x90, Type: StructProperty)
    std::uint8_t Icon[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    std::int64_t MaxCount; // 0x00C0 (Size: 0x8, Type: Int64Property)
    std::uint8_t bConsumable; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPaidRandomItem; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPaidArea; // 0x00CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsequentialToGameplay; // 0x00CB (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAuroraEntitlement, EntitlementIdentifier) == 0, "Offset mismatch for FAuroraEntitlement::EntitlementIdentifier");
static_assert(offsetof(FAuroraEntitlement, EntitlementDescription) == 16, "Offset mismatch for FAuroraEntitlement::EntitlementDescription");
static_assert(offsetof(FAuroraEntitlement, Icon) == 160, "Offset mismatch for FAuroraEntitlement::Icon");
static_assert(offsetof(FAuroraEntitlement, MaxCount) == 192, "Offset mismatch for FAuroraEntitlement::MaxCount");
static_assert(offsetof(FAuroraEntitlement, bConsumable) == 200, "Offset mismatch for FAuroraEntitlement::bConsumable");
static_assert(offsetof(FAuroraEntitlement, bPaidRandomItem) == 201, "Offset mismatch for FAuroraEntitlement::bPaidRandomItem");
static_assert(offsetof(FAuroraEntitlement, bPaidArea) == 202, "Offset mismatch for FAuroraEntitlement::bPaidArea");
static_assert(offsetof(FAuroraEntitlement, bConsequentialToGameplay) == 203, "Offset mismatch for FAuroraEntitlement::bConsequentialToGameplay");

// /Script/AuroraCore.AuroraEntitlementChange
// Kind: ScriptStruct; super: none
struct FAuroraEntitlementChange
{
public:
    FString EntitlementIdentifier; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int64_t Quantity; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::int64_t Change; // 0x0018 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FAuroraEntitlementChange, EntitlementIdentifier) == 0, "Offset mismatch for FAuroraEntitlementChange::EntitlementIdentifier");
static_assert(offsetof(FAuroraEntitlementChange, Quantity) == 16, "Offset mismatch for FAuroraEntitlementChange::Quantity");
static_assert(offsetof(FAuroraEntitlementChange, Change) == 24, "Offset mismatch for FAuroraEntitlementChange::Change");

// /Script/AuroraCore.AuroraEntitlementOffer
// Kind: ScriptStruct; super: AuroraOffer
struct FAuroraEntitlementOffer
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t EntitlementType[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAuroraEntitlementOffer, EntitlementType) == 240, "Offset mismatch for FAuroraEntitlementOffer::EntitlementType");

// /Script/AuroraCore.AuroraEntitlementQuantities
// Kind: ScriptStruct; super: FastArraySerializer
struct FAuroraEntitlementQuantities
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> EntitlementQuantities; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAuroraEntitlementQuantities, EntitlementQuantities) == 72, "Offset mismatch for FAuroraEntitlementQuantities::EntitlementQuantities");

// /Script/AuroraCore.AuroraEntitlementQuantity
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FAuroraEntitlementQuantity
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FString EntitlementIdentifier; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int64_t Quantity; // 0x0020 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FAuroraEntitlementQuantity, EntitlementIdentifier) == 16, "Offset mismatch for FAuroraEntitlementQuantity::EntitlementIdentifier");
static_assert(offsetof(FAuroraEntitlementQuantity, Quantity) == 32, "Offset mismatch for FAuroraEntitlementQuantity::Quantity");

// /Script/AuroraCore.AuroraHideOfferCatalogRequested
// Kind: ScriptStruct; super: none
struct FAuroraHideOfferCatalogRequested
{
public:
    std::uint8_t bForce; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAuroraHideOfferCatalogRequested, bForce) == 0, "Offset mismatch for FAuroraHideOfferCatalogRequested::bForce");

// /Script/AuroraCore.AuroraInvoice
// Kind: ScriptStruct; super: none
struct FAuroraInvoice
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AuroraCore.AuroraInvoicePurchased
// Kind: ScriptStruct; super: none
struct FAuroraInvoicePurchased
{
public:
    std::uint8_t Invoice[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bSuccessful; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t Receipt[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    FString ErrorCode; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAuroraInvoicePurchased, Invoice) == 0, "Offset mismatch for FAuroraInvoicePurchased::Invoice");
static_assert(offsetof(FAuroraInvoicePurchased, bSuccessful) == 16, "Offset mismatch for FAuroraInvoicePurchased::bSuccessful");
static_assert(offsetof(FAuroraInvoicePurchased, Receipt) == 24, "Offset mismatch for FAuroraInvoicePurchased::Receipt");
static_assert(offsetof(FAuroraInvoicePurchased, ErrorCode) == 40, "Offset mismatch for FAuroraInvoicePurchased::ErrorCode");

// /Script/AuroraCore.AuroraOffer
// Kind: ScriptStruct; super: none
struct FAuroraOffer
{
public:
    std::uint8_t OfferIdentifier[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString OfferType; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t OfferDescription[0x90]; // 0x0020 (Size: 0x90, Type: StructProperty)
    std::uint8_t Icon[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    FString IconAssetPathName; // 0x00D0 (Size: 0x10, Type: StrProperty)
    std::uint8_t Price[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAuroraOffer, OfferIdentifier) == 0, "Offset mismatch for FAuroraOffer::OfferIdentifier");
static_assert(offsetof(FAuroraOffer, OfferType) == 16, "Offset mismatch for FAuroraOffer::OfferType");
static_assert(offsetof(FAuroraOffer, OfferDescription) == 32, "Offset mismatch for FAuroraOffer::OfferDescription");
static_assert(offsetof(FAuroraOffer, Icon) == 176, "Offset mismatch for FAuroraOffer::Icon");
static_assert(offsetof(FAuroraOffer, IconAssetPathName) == 208, "Offset mismatch for FAuroraOffer::IconAssetPathName");
static_assert(offsetof(FAuroraOffer, Price) == 224, "Offset mismatch for FAuroraOffer::Price");

// /Script/AuroraCore.AuroraOfferSelected
// Kind: ScriptStruct; super: none
struct FAuroraOfferSelected
{
public:
    std::uint8_t OfferInstanceId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAuroraOfferSelected, OfferInstanceId) == 0, "Offset mismatch for FAuroraOfferSelected::OfferInstanceId");

// /Script/AuroraCore.AuroraOnDialogClosed
// Kind: ScriptStruct; super: none
struct FAuroraOnDialogClosed
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AuroraCore.AuroraOnPurchaseCanceled
// Kind: ScriptStruct; super: none
struct FAuroraOnPurchaseCanceled
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AuroraCore.AuroraOwnedProductQuantitiesChanged
// Kind: ScriptStruct; super: none
struct FAuroraOwnedProductQuantitiesChanged
{
public:
    TMap<void*, void*> OwnedProductQuantities; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAuroraOwnedProductQuantitiesChanged, OwnedProductQuantities) == 0, "Offset mismatch for FAuroraOwnedProductQuantitiesChanged::OwnedProductQuantities");

// /Script/AuroraCore.AuroraPriceDimension
// Kind: ScriptStruct; super: none
struct FAuroraPriceDimension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AuroraCore.AuroraPriceDimensionDouble
// Kind: ScriptStruct; super: AuroraPriceDimension
struct FAuroraPriceDimensionDouble
{
public:
    double Amount; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FAuroraPriceDimensionDouble, Amount) == 0, "Offset mismatch for FAuroraPriceDimensionDouble::Amount");

// /Script/AuroraCore.AuroraPriceDimensionInt
// Kind: ScriptStruct; super: AuroraPriceDimension
struct FAuroraPriceDimensionInt
{
public:
    std::int64_t Amount; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FAuroraPriceDimensionInt, Amount) == 0, "Offset mismatch for FAuroraPriceDimensionInt::Amount");

// /Script/AuroraCore.AuroraPurchaseInvoiceRequested
// Kind: ScriptStruct; super: none
struct FAuroraPurchaseInvoiceRequested
{
public:
    std::uint8_t Invoice[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAuroraPurchaseInvoiceRequested, Invoice) == 0, "Offset mismatch for FAuroraPurchaseInvoiceRequested::Invoice");

// /Script/AuroraCore.AuroraPurchaseResultFinalized
// Kind: ScriptStruct; super: none
struct FAuroraPurchaseResultFinalized
{
public:
    std::uint8_t Receipt[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bSuccessful; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAuroraPurchaseResultFinalized, Receipt) == 0, "Offset mismatch for FAuroraPurchaseResultFinalized::Receipt");
static_assert(offsetof(FAuroraPurchaseResultFinalized, bSuccessful) == 16, "Offset mismatch for FAuroraPurchaseResultFinalized::bSuccessful");

// /Script/AuroraCore.AuroraReceipt
// Kind: ScriptStruct; super: none
struct FAuroraReceipt
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AuroraCore.AuroraShowOfferCatalogRequested
// Kind: ScriptStruct; super: none
struct FAuroraShowOfferCatalogRequested
{
public:
    std::uint8_t CatalogId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> Offers; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Title[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> OwnedProductQuantities; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAuroraShowOfferCatalogRequested, CatalogId) == 0, "Offset mismatch for FAuroraShowOfferCatalogRequested::CatalogId");
static_assert(offsetof(FAuroraShowOfferCatalogRequested, Offers) == 16, "Offset mismatch for FAuroraShowOfferCatalogRequested::Offers");
static_assert(offsetof(FAuroraShowOfferCatalogRequested, Title) == 32, "Offset mismatch for FAuroraShowOfferCatalogRequested::Title");
static_assert(offsetof(FAuroraShowOfferCatalogRequested, OwnedProductQuantities) == 48, "Offset mismatch for FAuroraShowOfferCatalogRequested::OwnedProductQuantities");

// /Script/AuroraCore.AuroraStartPurchaseOfferQueried
// Kind: ScriptStruct; super: none
struct FAuroraStartPurchaseOfferQueried
{
public:
    std::uint8_t Invoice[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bSuccessful; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t offer[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> OwnedProductQuantities; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAuroraStartPurchaseOfferQueried, Invoice) == 0, "Offset mismatch for FAuroraStartPurchaseOfferQueried::Invoice");
static_assert(offsetof(FAuroraStartPurchaseOfferQueried, bSuccessful) == 16, "Offset mismatch for FAuroraStartPurchaseOfferQueried::bSuccessful");
static_assert(offsetof(FAuroraStartPurchaseOfferQueried, offer) == 24, "Offset mismatch for FAuroraStartPurchaseOfferQueried::offer");
static_assert(offsetof(FAuroraStartPurchaseOfferQueried, OwnedProductQuantities) == 40, "Offset mismatch for FAuroraStartPurchaseOfferQueried::OwnedProductQuantities");

// /Script/AuroraCore.AuroraStartPurchaseRequested
// Kind: ScriptStruct; super: none
struct FAuroraStartPurchaseRequested
{
public:
    std::uint8_t Invoice[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bSuccessful; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    FString ErrorCode; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAuroraStartPurchaseRequested, Invoice) == 0, "Offset mismatch for FAuroraStartPurchaseRequested::Invoice");
static_assert(offsetof(FAuroraStartPurchaseRequested, bSuccessful) == 16, "Offset mismatch for FAuroraStartPurchaseRequested::bSuccessful");
static_assert(offsetof(FAuroraStartPurchaseRequested, ErrorCode) == 24, "Offset mismatch for FAuroraStartPurchaseRequested::ErrorCode");

// /Script/AuroraCore.AuroraCoreSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UAuroraCoreSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString PurchaseInterfaceClassName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* PurchaseInterfaceClassOverride; // 0x0040 (Size: 0x8, Type: ClassProperty)
    void* PurchaseInterface; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAuroraCoreSubsystem, PurchaseInterfaceClassName) == 48, "Offset mismatch for UAuroraCoreSubsystem::PurchaseInterfaceClassName");
static_assert(offsetof(UAuroraCoreSubsystem, PurchaseInterfaceClassOverride) == 64, "Offset mismatch for UAuroraCoreSubsystem::PurchaseInterfaceClassOverride");
static_assert(offsetof(UAuroraCoreSubsystem, PurchaseInterface) == 72, "Offset mismatch for UAuroraCoreSubsystem::PurchaseInterface");

// /Script/AuroraCore.AuroraPlayerControllerComponent
// Kind: Class; super: ControllerComponent
class UAuroraPlayerControllerComponent
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    void* PurchaseImplementationClass; // 0x0138 (Size: 0x8, Type: ClassProperty)
    std::uint8_t OwnedEntitlementQuantities[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAuroraPlayerControllerComponent, PurchaseImplementationClass) == 312, "Offset mismatch for UAuroraPlayerControllerComponent::PurchaseImplementationClass");
static_assert(offsetof(UAuroraPlayerControllerComponent, OwnedEntitlementQuantities) == 320, "Offset mismatch for UAuroraPlayerControllerComponent::OwnedEntitlementQuantities");

// /Script/AuroraCore.AuroraProjectSettings
// Kind: Class; super: DeveloperSettings
class UAuroraProjectSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> PricingTypeTranslation; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PlatformToPlatformFamilyMappings; // 0x0040 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExternalLoginTypeToPlatformFamilyMappings; // 0x0050 (Size: 0x10, Type: MapProperty)
    std::uint8_t bUseArtificialDelay; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::uint8_t ArtificialDelayRange[0x1]; // 0x0064 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAuroraProjectSettings, PricingTypeTranslation) == 48, "Offset mismatch for UAuroraProjectSettings::PricingTypeTranslation");
static_assert(offsetof(UAuroraProjectSettings, PlatformToPlatformFamilyMappings) == 64, "Offset mismatch for UAuroraProjectSettings::PlatformToPlatformFamilyMappings");
static_assert(offsetof(UAuroraProjectSettings, ExternalLoginTypeToPlatformFamilyMappings) == 80, "Offset mismatch for UAuroraProjectSettings::ExternalLoginTypeToPlatformFamilyMappings");
static_assert(offsetof(UAuroraProjectSettings, bUseArtificialDelay) == 96, "Offset mismatch for UAuroraProjectSettings::bUseArtificialDelay");
static_assert(offsetof(UAuroraProjectSettings, ArtificialDelayRange) == 100, "Offset mismatch for UAuroraProjectSettings::ArtificialDelayRange");

// /Script/AuroraCore.AuroraPurchase
// Kind: Class; super: Interface
class UAuroraPurchase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AuroraCore.AuroraPurchaseDebug
// Kind: Class; super: Interface
class UAuroraPurchaseDebug
{
public:
    std::uint8_t Opaque[1];
};
