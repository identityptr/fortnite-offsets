/**
 * decamp dumper generated SDK
 * Package: /Script/AuroraFortniteUI
 */
#pragma once
#include "Basic.h"

// /Script/AuroraFortniteUI.AuroraFortniteTransitionableWidget
// Kind: Class; super: UserWidget
class UAuroraFortniteTransitionableWidget
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    std::uint8_t bIsTransitioning; // 0x0310 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAuroraFortniteTransitionableWidget, bIsTransitioning) == 784, "Offset mismatch for UAuroraFortniteTransitionableWidget::bIsTransitioning");

// /Script/AuroraFortniteUI.AuroraFortniteUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UAuroraFortniteUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* AuroraShopVM; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAuroraFortniteUIDirector, AuroraShopVM) == 672, "Offset mismatch for UAuroraFortniteUIDirector::AuroraShopVM");

// /Script/AuroraFortniteUI.FortAuroraBundleOfferVM
// Kind: Class; super: FortAuroraOfferVM
class UFortAuroraBundleOfferVM
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    TArray<void*> Products; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAuroraBundleOfferVM, Products) == 240, "Offset mismatch for UFortAuroraBundleOfferVM::Products");

// /Script/AuroraFortniteUI.FortAuroraOfferVM
// Kind: Class; super: FortBaseOfferVM
class UFortAuroraOfferVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t OfferId[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t Invoice[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t OfferType; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OwnedState; // 0x00C9 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortAuroraOfferVM, OfferId) == 104, "Offset mismatch for UFortAuroraOfferVM::OfferId");
static_assert(offsetof(UFortAuroraOfferVM, Invoice) == 120, "Offset mismatch for UFortAuroraOfferVM::Invoice");
static_assert(offsetof(UFortAuroraOfferVM, ShortDescription) == 136, "Offset mismatch for UFortAuroraOfferVM::ShortDescription");
static_assert(offsetof(UFortAuroraOfferVM, Description) == 152, "Offset mismatch for UFortAuroraOfferVM::Description");
static_assert(offsetof(UFortAuroraOfferVM, Icon) == 168, "Offset mismatch for UFortAuroraOfferVM::Icon");
static_assert(offsetof(UFortAuroraOfferVM, OfferType) == 200, "Offset mismatch for UFortAuroraOfferVM::OfferType");
static_assert(offsetof(UFortAuroraOfferVM, OwnedState) == 201, "Offset mismatch for UFortAuroraOfferVM::OwnedState");

// /Script/AuroraFortniteUI.FortAuroraProductOfferVM
// Kind: Class; super: FortAuroraOfferVM
class UFortAuroraProductOfferVM
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    void* Product; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAuroraProductOfferVM, Product) == 240, "Offset mismatch for UFortAuroraProductOfferVM::Product");

// /Script/AuroraFortniteUI.FortAuroraProductVM
// Kind: Class; super: MVVMViewModelBase
class UFortAuroraProductVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString ProductId; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t Name[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::int64_t Count; // 0x00C8 (Size: 0x8, Type: Int64Property)
    std::int64_t MaxCount; // 0x00D0 (Size: 0x8, Type: Int64Property)
    std::int64_t OwnedCount; // 0x00D8 (Size: 0x8, Type: Int64Property)
    std::uint8_t OwnedState; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bConsumable; // 0x00E1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAuroraProductVM, ProductId) == 104, "Offset mismatch for UFortAuroraProductVM::ProductId");
static_assert(offsetof(UFortAuroraProductVM, Name) == 120, "Offset mismatch for UFortAuroraProductVM::Name");
static_assert(offsetof(UFortAuroraProductVM, ShortDescription) == 136, "Offset mismatch for UFortAuroraProductVM::ShortDescription");
static_assert(offsetof(UFortAuroraProductVM, Description) == 152, "Offset mismatch for UFortAuroraProductVM::Description");
static_assert(offsetof(UFortAuroraProductVM, Icon) == 168, "Offset mismatch for UFortAuroraProductVM::Icon");
static_assert(offsetof(UFortAuroraProductVM, Count) == 200, "Offset mismatch for UFortAuroraProductVM::Count");
static_assert(offsetof(UFortAuroraProductVM, MaxCount) == 208, "Offset mismatch for UFortAuroraProductVM::MaxCount");
static_assert(offsetof(UFortAuroraProductVM, OwnedCount) == 216, "Offset mismatch for UFortAuroraProductVM::OwnedCount");
static_assert(offsetof(UFortAuroraProductVM, OwnedState) == 224, "Offset mismatch for UFortAuroraProductVM::OwnedState");
static_assert(offsetof(UFortAuroraProductVM, bConsumable) == 225, "Offset mismatch for UFortAuroraProductVM::bConsumable");

// /Script/AuroraFortniteUI.FortAuroraShopVM
// Kind: Class; super: FortPerUserViewModel
class UFortAuroraShopVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t CatalogId[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    TArray<void*> CatalogOffers; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CatalogTitle[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    void* InspectedOffer; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* LastPurchasedOffer; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InspectionState; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PurchaseState; // 0x00B9 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortAuroraShopVM, CatalogId) == 120, "Offset mismatch for UFortAuroraShopVM::CatalogId");
static_assert(offsetof(UFortAuroraShopVM, CatalogOffers) == 136, "Offset mismatch for UFortAuroraShopVM::CatalogOffers");
static_assert(offsetof(UFortAuroraShopVM, CatalogTitle) == 152, "Offset mismatch for UFortAuroraShopVM::CatalogTitle");
static_assert(offsetof(UFortAuroraShopVM, InspectedOffer) == 168, "Offset mismatch for UFortAuroraShopVM::InspectedOffer");
static_assert(offsetof(UFortAuroraShopVM, LastPurchasedOffer) == 176, "Offset mismatch for UFortAuroraShopVM::LastPurchasedOffer");
static_assert(offsetof(UFortAuroraShopVM, InspectionState) == 184, "Offset mismatch for UFortAuroraShopVM::InspectionState");
static_assert(offsetof(UFortAuroraShopVM, PurchaseState) == 185, "Offset mismatch for UFortAuroraShopVM::PurchaseState");
