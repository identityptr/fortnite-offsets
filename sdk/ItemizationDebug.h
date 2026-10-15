/**
 * decamp dumper generated SDK
 * Package: /Itemization/_Verse/VNI/ItemizationDebug
 */
#pragma once
#include "Basic.h"

// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_TestPrefab_AmmoHeavyBullets_BR_PreSeason_Common
// Kind: VerseClass; super: fort_item_definition_entity
class UItemizationTests_TestPrefab_AmmoHeavyBullets_BR_PreSeason_Common
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UItemizationTests_TestPrefab_AmmoHeavyBullets_BR_PreSeason_Common, None) == 0, "Offset mismatch for UItemizationTests_TestPrefab_AmmoHeavyBullets_BR_PreSeason_Common::None");

// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_category_inventory_component
// Kind: VerseClass; super: None
class UItemizationTests_category_inventory_component
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* verse_0x6B63E37E_RequiredCategory; // 0x0118 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UItemizationTests_category_inventory_component, verse_0x6B63E37E_RequiredCategory) == 280, "Offset mismatch for UItemizationTests_category_inventory_component::verse_0x6B63E37E_RequiredCategory");

// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_closed_inventory_component
// Kind: VerseClass; super: None
class UItemizationTests_closed_inventory_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UItemizationTests_closed_inventory_component, None) == 0, "Offset mismatch for UItemizationTests_closed_inventory_component::None");

// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_event_tester_inventory_component
// Kind: VerseClass; super: None
class UItemizationTests_event_tester_inventory_component
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t verse_0x8F253EB5_OnItemAddedHandle[0x8]; // 0x0118 (Size: 0x8, Type: OptionalProperty)
    std::int64_t verse_0x2C4F9F37_AddedItemCount; // 0x0120 (Size: 0x8, Type: Int64Property)
    std::int64_t verse_0xC5B69D29_ModifiedItemCount; // 0x0128 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(UItemizationTests_event_tester_inventory_component, verse_0x8F253EB5_OnItemAddedHandle) == 280, "Offset mismatch for UItemizationTests_event_tester_inventory_component::verse_0x8F253EB5_OnItemAddedHandle");
static_assert(offsetof(UItemizationTests_event_tester_inventory_component, verse_0x2C4F9F37_AddedItemCount) == 288, "Offset mismatch for UItemizationTests_event_tester_inventory_component::verse_0x2C4F9F37_AddedItemCount");
static_assert(offsetof(UItemizationTests_event_tester_inventory_component, verse_0xC5B69D29_ModifiedItemCount) == 296, "Offset mismatch for UItemizationTests_event_tester_inventory_component::verse_0xC5B69D29_ModifiedItemCount");

// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_inventory_full_error
// Kind: VerseClass; super: None
class UItemizationTests_inventory_full_error
{
public:
    std::uint8_t Opaque[1];
};


// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_item_limit_inventory_component
// Kind: VerseClass; super: None
class UItemizationTests_item_limit_inventory_component
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::int64_t verse_0xB091F3BE_ItemLimit; // 0x0118 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(UItemizationTests_item_limit_inventory_component, verse_0xB091F3BE_ItemLimit) == 280, "Offset mismatch for UItemizationTests_item_limit_inventory_component::verse_0xB091F3BE_ItemLimit");

// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_itemization_test_library
// Kind: VerseClass; super: Object
class UItemizationTests_itemization_test_library
{
public:
    std::uint8_t Opaque[1];
};


// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_mergeable_item_component
// Kind: VerseClass; super: item_component
class UItemizationTests_mergeable_item_component
{
public:
    std::uint8_t Opaque[1];
};


// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_non_mergeable_item_component
// Kind: VerseClass; super: item_component
class UItemizationTests_non_mergeable_item_component
{
public:
    std::uint8_t Opaque[1];
};


// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_one_way_inventory_component
// Kind: VerseClass; super: None
class UItemizationTests_one_way_inventory_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UItemizationTests_one_way_inventory_component, None) == 0, "Offset mismatch for UItemizationTests_one_way_inventory_component::None");

// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_subclassed_item_component
// Kind: VerseClass; super: item_component
class UItemizationTests_subclassed_item_component
{
public:
    std::uint8_t Opaque[1];
};


// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_test_custom_rarity
// Kind: VerseClass; super: rare_rarity
class UItemizationTests_test_custom_rarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UItemizationTests_test_custom_rarity, None) == 0, "Offset mismatch for UItemizationTests_test_custom_rarity::None");

// /Itemization/_Verse/VNI/ItemizationDebug.ItemizationTests_unsplittable_stackable_component
// Kind: VerseClass; super: stackable_component
class UItemizationTests_unsplittable_stackable_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UItemizationTests_unsplittable_stackable_component, None) == 0, "Offset mismatch for UItemizationTests_unsplittable_stackable_component::None");

// /Itemization/_Verse/VNI/ItemizationDebug.itemization_debug_library
// Kind: VerseClass; super: Object
class Uitemization_debug_library
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* verse_0xE8B57665_TestCustomItemName; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* verse_0xC5E13480_TestCustomItemDescription; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* verse_0xEBD50B38_TestCustomItemShortDescription; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uitemization_debug_library, verse_0xE8B57665_TestCustomItemName) == 40, "Offset mismatch for Uitemization_debug_library::verse_0xE8B57665_TestCustomItemName");
static_assert(offsetof(Uitemization_debug_library, verse_0xC5E13480_TestCustomItemDescription) == 48, "Offset mismatch for Uitemization_debug_library::verse_0xC5E13480_TestCustomItemDescription");
static_assert(offsetof(Uitemization_debug_library, verse_0xEBD50B38_TestCustomItemShortDescription) == 56, "Offset mismatch for Uitemization_debug_library::verse_0xEBD50B38_TestCustomItemShortDescription");
