/**
 * decamp dumper generated SDK
 * Package: /Script/SproutSmartObjectUI
 */
#pragma once
#include "Basic.h"

// /Script/SproutSmartObjectUI.FortAutomationRpcManager_SproutSmartObjectUI
// Kind: Class; super: FortAutomationRpcManager
class UFortAutomationRpcManager_SproutSmartObjectUI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutSmartObjectUI.SproutChatWheelCustomSubWheel_ItemRequests
// Kind: Class; super: SproutChatWheelCustomSubWheel
class USproutChatWheelCustomSubWheel_ItemRequests
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutSmartObjectUI.SproutChatWheelEntryViewModel_ItemRequest
// Kind: Class; super: SproutChatWheelEntryViewModel
class USproutChatWheelEntryViewModel_ItemRequest
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* SmartObjectUIViewModel; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutChatWheelEntryViewModel_ItemRequest, SmartObjectUIViewModel) == 416, "Offset mismatch for USproutChatWheelEntryViewModel_ItemRequest::SmartObjectUIViewModel");

// /Script/SproutSmartObjectUI.SproutSmartObjectUITraitViewModel
// Kind: Class; super: MVVMViewModelBase
class USproutSmartObjectUITraitViewModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutSmartObjectUI.SproutSmartObjectUIVariationViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutSmartObjectUIVariationViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TWeakObjectPtr<void> ParentVariation; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ChildVariations; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InitialVariationTag[0x130]; // 0x0098 (Size: 0x130, Type: StructProperty)
    std::uint8_t TypeTag[0x4]; // 0x01C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t VariationTag[0x4]; // 0x01CC (Size: 0x4, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x01D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t PreviewIcon[0x20]; // 0x01E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ItemDefinition[0x20]; // 0x0200 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Traits; // 0x0220 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutSmartObjectUIVariationViewModel, ParentVariation) == 128, "Offset mismatch for USproutSmartObjectUIVariationViewModel::ParentVariation");
static_assert(offsetof(USproutSmartObjectUIVariationViewModel, ChildVariations) == 136, "Offset mismatch for USproutSmartObjectUIVariationViewModel::ChildVariations");
static_assert(offsetof(USproutSmartObjectUIVariationViewModel, InitialVariationTag) == 152, "Offset mismatch for USproutSmartObjectUIVariationViewModel::InitialVariationTag");
static_assert(offsetof(USproutSmartObjectUIVariationViewModel, TypeTag) == 456, "Offset mismatch for USproutSmartObjectUIVariationViewModel::TypeTag");
static_assert(offsetof(USproutSmartObjectUIVariationViewModel, VariationTag) == 460, "Offset mismatch for USproutSmartObjectUIVariationViewModel::VariationTag");
static_assert(offsetof(USproutSmartObjectUIVariationViewModel, DisplayName) == 464, "Offset mismatch for USproutSmartObjectUIVariationViewModel::DisplayName");
static_assert(offsetof(USproutSmartObjectUIVariationViewModel, PreviewIcon) == 480, "Offset mismatch for USproutSmartObjectUIVariationViewModel::PreviewIcon");
static_assert(offsetof(USproutSmartObjectUIVariationViewModel, ItemDefinition) == 512, "Offset mismatch for USproutSmartObjectUIVariationViewModel::ItemDefinition");
static_assert(offsetof(USproutSmartObjectUIVariationViewModel, Traits) == 544, "Offset mismatch for USproutSmartObjectUIVariationViewModel::Traits");

// /Script/SproutSmartObjectUI.SproutSmartObjectUIViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutSmartObjectUIViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Variations; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> CurrentVariation; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USproutSmartObjectUIViewModel, Variations) == 120, "Offset mismatch for USproutSmartObjectUIViewModel::Variations");
static_assert(offsetof(USproutSmartObjectUIViewModel, CurrentVariation) == 136, "Offset mismatch for USproutSmartObjectUIViewModel::CurrentVariation");
