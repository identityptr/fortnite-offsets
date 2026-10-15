/**
 * decamp dumper generated SDK
 * Package: /Script/StoreSelectionUI
 */
#pragma once
#include "Basic.h"

// /Script/StoreSelectionUI.ItemData
// Kind: ScriptStruct; super: none
struct FItemData
{
public:
    std::uint8_t Icon[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    FText Name; // 0x0020 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FItemData, Icon) == 0, "Offset mismatch for FItemData::Icon");
static_assert(offsetof(FItemData, Name) == 32, "Offset mismatch for FItemData::Name");

// /Script/StoreSelectionUI.FortStoreSelectionData
// Kind: Class; super: FortGameFeatureData
class UFortStoreSelectionData
{
public:
    std::uint8_t Pad_0000[0x448]; // 0x0000
    TSoftClassPtr<void> StoreSelectionScreenClass; // 0x0448 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortStoreSelectionData, StoreSelectionScreenClass) == 1096, "Offset mismatch for UFortStoreSelectionData::StoreSelectionScreenClass");

// /Script/StoreSelectionUI.FortStoreSelectionOptionEntry
// Kind: Class; super: CommonButtonLegacy
class UFortStoreSelectionOptionEntry
{
public:
    std::uint8_t Pad_0000[0x15F0]; // 0x0000
    void* Image_Icon; // 0x15F0 (Size: 0x8, Type: ObjectProperty)
    void* Text_Description; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    void* Text_Price; // 0x1600 (Size: 0x8, Type: ObjectProperty)
    void* RichText_Label; // 0x1608 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortStoreSelectionOptionEntry, Image_Icon) == 5616, "Offset mismatch for UFortStoreSelectionOptionEntry::Image_Icon");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Text_Description) == 5624, "Offset mismatch for UFortStoreSelectionOptionEntry::Text_Description");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Text_Price) == 5632, "Offset mismatch for UFortStoreSelectionOptionEntry::Text_Price");
static_assert(offsetof(UFortStoreSelectionOptionEntry, RichText_Label) == 5640, "Offset mismatch for UFortStoreSelectionOptionEntry::RichText_Label");

// /Script/StoreSelectionUI.FortStoreSelectionScreen
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortStoreSelectionScreen
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    void* EntryBoxButtonGroup; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* StoreOffer; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* StoreOfferLoadGuard; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* Text_Header; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* DynamicEntryBox_Options; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* Button_Continue; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* Button_Cancel; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* RichText_InitiallySelectedHint; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> PurchaseChoiceOwner; // 0x05A8 (Size: 0x10, Type: InterfaceProperty)
    TArray<void*> StoreOptions; // 0x05B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SoftDisplayAsset[0x20]; // 0x05C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ItemData[0x2D8]; // 0x05E8 (Size: 0x2D8, Type: StructProperty)
    FText OptionalLabels; // 0x08C0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortStoreSelectionScreen, EntryBoxButtonGroup) == 1384, "Offset mismatch for UFortStoreSelectionScreen::EntryBoxButtonGroup");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOffer) == 1392, "Offset mismatch for UFortStoreSelectionScreen::StoreOffer");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOfferLoadGuard) == 1400, "Offset mismatch for UFortStoreSelectionScreen::StoreOfferLoadGuard");
static_assert(offsetof(UFortStoreSelectionScreen, Text_Header) == 1408, "Offset mismatch for UFortStoreSelectionScreen::Text_Header");
static_assert(offsetof(UFortStoreSelectionScreen, DynamicEntryBox_Options) == 1416, "Offset mismatch for UFortStoreSelectionScreen::DynamicEntryBox_Options");
static_assert(offsetof(UFortStoreSelectionScreen, Button_Continue) == 1424, "Offset mismatch for UFortStoreSelectionScreen::Button_Continue");
static_assert(offsetof(UFortStoreSelectionScreen, Button_Cancel) == 1432, "Offset mismatch for UFortStoreSelectionScreen::Button_Cancel");
static_assert(offsetof(UFortStoreSelectionScreen, RichText_InitiallySelectedHint) == 1440, "Offset mismatch for UFortStoreSelectionScreen::RichText_InitiallySelectedHint");
static_assert(offsetof(UFortStoreSelectionScreen, PurchaseChoiceOwner) == 1448, "Offset mismatch for UFortStoreSelectionScreen::PurchaseChoiceOwner");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOptions) == 1464, "Offset mismatch for UFortStoreSelectionScreen::StoreOptions");
static_assert(offsetof(UFortStoreSelectionScreen, SoftDisplayAsset) == 1480, "Offset mismatch for UFortStoreSelectionScreen::SoftDisplayAsset");
static_assert(offsetof(UFortStoreSelectionScreen, ItemData) == 1512, "Offset mismatch for UFortStoreSelectionScreen::ItemData");
static_assert(offsetof(UFortStoreSelectionScreen, OptionalLabels) == 2240, "Offset mismatch for UFortStoreSelectionScreen::OptionalLabels");
