/**
 * decamp dumper generated SDK
 * Package: /Itemization/_Verse/VNI/ItemizationVerseUI
 */
#pragma once
#include "Basic.h"

// /Itemization/_Verse/VNI/ItemizationVerseUI.inventory_item_action_property_interface
// Kind: VerseClass; super: Assets_parameterized_property_interface
class Uinventory_item_action_property_interface
{
public:
    std::uint8_t None[0x120]; // 0x0000 (Size: 0x120, Type: UnknownProperty)
    std::uint8_t verse_0xF8889477_IsSelected; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t verse_0xA81F64DD_RequestSelect; // 0x0121 (Size: 0x1, Type: BoolProperty)
    std::uint8_t verse_0x8EB51890_IsHovered; // 0x0122 (Size: 0x1, Type: BoolProperty)
    std::uint8_t verse_0xE7BB9961_RequestHover; // 0x0123 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(Uinventory_item_action_property_interface, None) == 0, "Offset mismatch for Uinventory_item_action_property_interface::None");
static_assert(offsetof(Uinventory_item_action_property_interface, verse_0xF8889477_IsSelected) == 288, "Offset mismatch for Uinventory_item_action_property_interface::verse_0xF8889477_IsSelected");
static_assert(offsetof(Uinventory_item_action_property_interface, verse_0xA81F64DD_RequestSelect) == 289, "Offset mismatch for Uinventory_item_action_property_interface::verse_0xA81F64DD_RequestSelect");
static_assert(offsetof(Uinventory_item_action_property_interface, verse_0x8EB51890_IsHovered) == 290, "Offset mismatch for Uinventory_item_action_property_interface::verse_0x8EB51890_IsHovered");
static_assert(offsetof(Uinventory_item_action_property_interface, verse_0xE7BB9961_RequestHover) == 291, "Offset mismatch for Uinventory_item_action_property_interface::verse_0xE7BB9961_RequestHover");

// /Itemization/_Verse/VNI/ItemizationVerseUI.inventory_item_view_model_component
// Kind: VerseClass; super: Component
class Uinventory_item_view_model_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uinventory_item_view_model_component, None) == 0, "Offset mismatch for Uinventory_item_view_model_component::None");

// /Itemization/_Verse/VNI/ItemizationVerseUI.inventory_property_interface_subscription
// Kind: VerseClass; super: Object
class Uinventory_property_interface_subscription
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* verse_0x65E6A493_InternalPropertyInterface; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x85340A7E_InternalInventory; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uinventory_property_interface_subscription, verse_0x65E6A493_InternalPropertyInterface) == 40, "Offset mismatch for Uinventory_property_interface_subscription::verse_0x65E6A493_InternalPropertyInterface");
static_assert(offsetof(Uinventory_property_interface_subscription, verse_0x85340A7E_InternalInventory) == 48, "Offset mismatch for Uinventory_property_interface_subscription::verse_0x85340A7E_InternalInventory");

// /Itemization/_Verse/VNI/ItemizationVerseUI.inventory_ui_action_component
// Kind: VerseClass; super: Component
class Uinventory_ui_action_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uinventory_ui_action_component, None) == 0, "Offset mismatch for Uinventory_ui_action_component::None");

// /Itemization/_Verse/VNI/ItemizationVerseUI.inventory_view_model_component
// Kind: VerseClass; super: Component
class Uinventory_view_model_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uinventory_view_model_component, None) == 0, "Offset mismatch for Uinventory_view_model_component::None");
