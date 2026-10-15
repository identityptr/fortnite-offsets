/**
 * decamp dumper generated SDK
 * Package: /Script/JunoVendorShopUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoVendorShopUI.JunoOpenVendorShopMessage
// Kind: ScriptStruct; super: none
struct FJunoOpenVendorShopMessage
{
public:
    TWeakObjectPtr<void> VendorActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoOpenVendorShopMessage, VendorActor) == 0, "Offset mismatch for FJunoOpenVendorShopMessage::VendorActor");

// /Script/JunoVendorShopUI.JunoVendorCostEntry
// Kind: ScriptStruct; super: none
struct FJunoVendorCostEntry
{
public:
    std::uint8_t CostItem[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t Quantity; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoVendorCostEntry, CostItem) == 0, "Offset mismatch for FJunoVendorCostEntry::CostItem");
static_assert(offsetof(FJunoVendorCostEntry, Quantity) == 32, "Offset mismatch for FJunoVendorCostEntry::Quantity");

// /Script/JunoVendorShopUI.JunoVendorOffer
// Kind: ScriptStruct; super: none
struct FJunoVendorOffer
{
public:
    std::uint8_t OfferItem[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> PriceOptions; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExpiryDate[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::int32_t SortPriority; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentStock; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxStock; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredTrustTier; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanExpire; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFeatured; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoVendorOffer, OfferItem) == 0, "Offset mismatch for FJunoVendorOffer::OfferItem");
static_assert(offsetof(FJunoVendorOffer, PriceOptions) == 32, "Offset mismatch for FJunoVendorOffer::PriceOptions");
static_assert(offsetof(FJunoVendorOffer, ExpiryDate) == 48, "Offset mismatch for FJunoVendorOffer::ExpiryDate");
static_assert(offsetof(FJunoVendorOffer, SortPriority) == 56, "Offset mismatch for FJunoVendorOffer::SortPriority");
static_assert(offsetof(FJunoVendorOffer, CurrentStock) == 60, "Offset mismatch for FJunoVendorOffer::CurrentStock");
static_assert(offsetof(FJunoVendorOffer, MaxStock) == 64, "Offset mismatch for FJunoVendorOffer::MaxStock");
static_assert(offsetof(FJunoVendorOffer, RequiredTrustTier) == 68, "Offset mismatch for FJunoVendorOffer::RequiredTrustTier");
static_assert(offsetof(FJunoVendorOffer, bCanExpire) == 72, "Offset mismatch for FJunoVendorOffer::bCanExpire");
static_assert(offsetof(FJunoVendorOffer, bFeatured) == 73, "Offset mismatch for FJunoVendorOffer::bFeatured");

// /Script/JunoVendorShopUI.JunoVendorOfferList
// Kind: ScriptStruct; super: none
struct FJunoVendorOfferList
{
public:
    std::uint8_t VendorKey[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t NextRestockTime[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> OfferList; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoVendorOfferList, VendorKey) == 0, "Offset mismatch for FJunoVendorOfferList::VendorKey");
static_assert(offsetof(FJunoVendorOfferList, NextRestockTime) == 8, "Offset mismatch for FJunoVendorOfferList::NextRestockTime");
static_assert(offsetof(FJunoVendorOfferList, OfferList) == 16, "Offset mismatch for FJunoVendorOfferList::OfferList");

// /Script/JunoVendorShopUI.JunoVendorPriceOption
// Kind: ScriptStruct; super: none
struct FJunoVendorPriceOption
{
public:
    TArray<void*> Costs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoVendorPriceOption, Costs) == 0, "Offset mismatch for FJunoVendorPriceOption::Costs");

// /Script/JunoVendorShopUI.JunoDynamicUIDirectorComponent_Vendor
// Kind: Class; super: JunoDynamicUIDirectorComponent
class UJunoDynamicUIDirectorComponent_Vendor
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TaggedWidgetSceneData; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> HudLayoutScenes; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> WidgetPoolInitData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoDynamicUIDirectorComponent_Vendor, TaggedWidgetSceneData) == 200, "Offset mismatch for UJunoDynamicUIDirectorComponent_Vendor::TaggedWidgetSceneData");
static_assert(offsetof(UJunoDynamicUIDirectorComponent_Vendor, HudLayoutScenes) == 208, "Offset mismatch for UJunoDynamicUIDirectorComponent_Vendor::HudLayoutScenes");
static_assert(offsetof(UJunoDynamicUIDirectorComponent_Vendor, WidgetPoolInitData) == 224, "Offset mismatch for UJunoDynamicUIDirectorComponent_Vendor::WidgetPoolInitData");

// /Script/JunoVendorShopUI.JunoVendorOfferViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoVendorOfferViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ItemIcon[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ItemName[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    std::uint8_t ItemDescription[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t ExpiryDate[0x8]; // 0x00A8 (Size: 0x8, Type: StructProperty)
    std::int32_t Price; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentStock; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxStock; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredTrustTier; // 0x00BC (Size: 0x4, Type: IntProperty)
    std::uint8_t ItemType; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCanExpire; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFeatured; // 0x00C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAffordable; // 0x00C3 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoVendorOfferViewModel, ItemIcon) == 104, "Offset mismatch for UJunoVendorOfferViewModel::ItemIcon");
static_assert(offsetof(UJunoVendorOfferViewModel, ItemName) == 136, "Offset mismatch for UJunoVendorOfferViewModel::ItemName");
static_assert(offsetof(UJunoVendorOfferViewModel, ItemDescription) == 152, "Offset mismatch for UJunoVendorOfferViewModel::ItemDescription");
static_assert(offsetof(UJunoVendorOfferViewModel, ExpiryDate) == 168, "Offset mismatch for UJunoVendorOfferViewModel::ExpiryDate");
static_assert(offsetof(UJunoVendorOfferViewModel, Price) == 176, "Offset mismatch for UJunoVendorOfferViewModel::Price");
static_assert(offsetof(UJunoVendorOfferViewModel, CurrentStock) == 180, "Offset mismatch for UJunoVendorOfferViewModel::CurrentStock");
static_assert(offsetof(UJunoVendorOfferViewModel, MaxStock) == 184, "Offset mismatch for UJunoVendorOfferViewModel::MaxStock");
static_assert(offsetof(UJunoVendorOfferViewModel, RequiredTrustTier) == 188, "Offset mismatch for UJunoVendorOfferViewModel::RequiredTrustTier");
static_assert(offsetof(UJunoVendorOfferViewModel, ItemType) == 192, "Offset mismatch for UJunoVendorOfferViewModel::ItemType");
static_assert(offsetof(UJunoVendorOfferViewModel, bCanExpire) == 193, "Offset mismatch for UJunoVendorOfferViewModel::bCanExpire");
static_assert(offsetof(UJunoVendorOfferViewModel, bFeatured) == 194, "Offset mismatch for UJunoVendorOfferViewModel::bFeatured");
static_assert(offsetof(UJunoVendorOfferViewModel, bIsAffordable) == 195, "Offset mismatch for UJunoVendorOfferViewModel::bIsAffordable");

// /Script/JunoVendorShopUI.JunoVendorShopCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoVendorShopCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoVendorShopUI.JunoVendorShopData
// Kind: Class; super: Object
class UJunoVendorShopData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t BuyVendorOffers[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t SellVendorOffers[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoVendorShopData, BuyVendorOffers) == 48, "Offset mismatch for UJunoVendorShopData::BuyVendorOffers");
static_assert(offsetof(UJunoVendorShopData, SellVendorOffers) == 80, "Offset mismatch for UJunoVendorShopData::SellVendorOffers");

// /Script/JunoVendorShopUI.JunoVendorShopMockData
// Kind: Class; super: JunoMockDataAsset
class UJunoVendorShopMockData
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t VendorName[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t BuyVendorOffers[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t SellVendorOffers[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoVendorShopMockData, VendorName) == 80, "Offset mismatch for UJunoVendorShopMockData::VendorName");
static_assert(offsetof(UJunoVendorShopMockData, BuyVendorOffers) == 96, "Offset mismatch for UJunoVendorShopMockData::BuyVendorOffers");
static_assert(offsetof(UJunoVendorShopMockData, SellVendorOffers) == 128, "Offset mismatch for UJunoVendorShopMockData::SellVendorOffers");

// /Script/JunoVendorShopUI.JunoVendorShopScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoVendorShopScreen
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

static_assert(offsetof(UJunoVendorShopScreen, bIsBackHandler) == 816, "Offset mismatch for UJunoVendorShopScreen::bIsBackHandler");
static_assert(offsetof(UJunoVendorShopScreen, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UJunoVendorShopScreen::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UJunoVendorShopScreen, OverrideBackActionDisplayName) == 824, "Offset mismatch for UJunoVendorShopScreen::OverrideBackActionDisplayName");
static_assert(offsetof(UJunoVendorShopScreen, bAutoActivate) == 840, "Offset mismatch for UJunoVendorShopScreen::bAutoActivate");
static_assert(offsetof(UJunoVendorShopScreen, bSupportsActivationFocus) == 841, "Offset mismatch for UJunoVendorShopScreen::bSupportsActivationFocus");
static_assert(offsetof(UJunoVendorShopScreen, bIsModal) == 842, "Offset mismatch for UJunoVendorShopScreen::bIsModal");
static_assert(offsetof(UJunoVendorShopScreen, bAutoRestoreFocus) == 843, "Offset mismatch for UJunoVendorShopScreen::bAutoRestoreFocus");
static_assert(offsetof(UJunoVendorShopScreen, bOverrideActionDomain) == 844, "Offset mismatch for UJunoVendorShopScreen::bOverrideActionDomain");
static_assert(offsetof(UJunoVendorShopScreen, InputMapping) == 848, "Offset mismatch for UJunoVendorShopScreen::InputMapping");
static_assert(offsetof(UJunoVendorShopScreen, InputMappingPriority) == 856, "Offset mismatch for UJunoVendorShopScreen::InputMappingPriority");
static_assert(offsetof(UJunoVendorShopScreen, InputModeTagsToAdd) == 864, "Offset mismatch for UJunoVendorShopScreen::InputModeTagsToAdd");
static_assert(offsetof(UJunoVendorShopScreen, InputModeTagsToRemove) == 896, "Offset mismatch for UJunoVendorShopScreen::InputModeTagsToRemove");
static_assert(offsetof(UJunoVendorShopScreen, ActionDomainOverride) == 928, "Offset mismatch for UJunoVendorShopScreen::ActionDomainOverride");
static_assert(offsetof(UJunoVendorShopScreen, BP_OnWidgetActivated) == 960, "Offset mismatch for UJunoVendorShopScreen::BP_OnWidgetActivated");
static_assert(offsetof(UJunoVendorShopScreen, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UJunoVendorShopScreen::BP_OnWidgetDeactivated");
static_assert(offsetof(UJunoVendorShopScreen, bIsActive) == 992, "Offset mismatch for UJunoVendorShopScreen::bIsActive");
static_assert(offsetof(UJunoVendorShopScreen, VisibilityBoundWidgets) == 1000, "Offset mismatch for UJunoVendorShopScreen::VisibilityBoundWidgets");
static_assert(offsetof(UJunoVendorShopScreen, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UJunoVendorShopScreen::bSetVisibilityOnActivated");
static_assert(offsetof(UJunoVendorShopScreen, ActivatedVisibility) == 1177, "Offset mismatch for UJunoVendorShopScreen::ActivatedVisibility");
static_assert(offsetof(UJunoVendorShopScreen, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UJunoVendorShopScreen::bSetVisibilityOnDeactivated");
static_assert(offsetof(UJunoVendorShopScreen, DeactivatedVisibility) == 1179, "Offset mismatch for UJunoVendorShopScreen::DeactivatedVisibility");

// /Script/JunoVendorShopUI.JunoVendorShopViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoVendorShopViewModel
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> BuyVendorOfferViewModels; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SellVendorOfferViewModels; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t VendorName[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t RestockCountdown[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    void* SelectedVendorOffer; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShopMode; // 0x00B8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoVendorShopViewModel, BuyVendorOfferViewModels) == 112, "Offset mismatch for UJunoVendorShopViewModel::BuyVendorOfferViewModels");
static_assert(offsetof(UJunoVendorShopViewModel, SellVendorOfferViewModels) == 128, "Offset mismatch for UJunoVendorShopViewModel::SellVendorOfferViewModels");
static_assert(offsetof(UJunoVendorShopViewModel, VendorName) == 144, "Offset mismatch for UJunoVendorShopViewModel::VendorName");
static_assert(offsetof(UJunoVendorShopViewModel, RestockCountdown) == 160, "Offset mismatch for UJunoVendorShopViewModel::RestockCountdown");
static_assert(offsetof(UJunoVendorShopViewModel, SelectedVendorOffer) == 176, "Offset mismatch for UJunoVendorShopViewModel::SelectedVendorOffer");
static_assert(offsetof(UJunoVendorShopViewModel, ShopMode) == 184, "Offset mismatch for UJunoVendorShopViewModel::ShopMode");
