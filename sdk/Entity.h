/**
 * decamp dumper generated SDK
 * Package: /EntityFramework/_Verse/VNI/Entity
 */
#pragma once
#include "Basic.h"

// /EntityFramework/_Verse/VNI/Entity.Component
// Kind: VerseClass; super: BaseComponent
class UComponent
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UComponent, None) == 0, "Offset mismatch for UComponent::None");

// /EntityFramework/_Verse/VNI/Entity.Rarity
// Kind: VerseClass; super: Object
class URarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(URarity, None) == 0, "Offset mismatch for URarity::None");

// /EntityFramework/_Verse/VNI/Entity.basic_stackable_component
// Kind: VerseClass; super: stackable_component
class Ubasic_stackable_component
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t verse_0xBBF580B4_split_prefab_type[0x1]; // 0x00A0 (Size: 0x1, Type: VerseClassProperty)
};

static_assert(offsetof(Ubasic_stackable_component, verse_0xBBF580B4_split_prefab_type) == 160, "Offset mismatch for Ubasic_stackable_component::verse_0xBBF580B4_split_prefab_type");

// /EntityFramework/_Verse/VNI/Entity.change_rarity_component_event
// Kind: VerseClass; super: Object
class Uchange_rarity_component_event
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uchange_rarity_component_event, None) == 0, "Offset mismatch for Uchange_rarity_component_event::None");

// /EntityFramework/_Verse/VNI/Entity.change_stack_size_result
// Kind: VerseClass; super: Object
class Uchange_stack_size_result
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uchange_stack_size_result, None) == 0, "Offset mismatch for Uchange_stack_size_result::None");

// /EntityFramework/_Verse/VNI/Entity.change_stackable_component_event
// Kind: VerseClass; super: Object
class Uchange_stackable_component_event
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uchange_stackable_component_event, None) == 0, "Offset mismatch for Uchange_stackable_component_event::None");

// /EntityFramework/_Verse/VNI/Entity.common_rarity
// Kind: VerseClass; super: Rarity
class Ucommon_rarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Ucommon_rarity, None) == 0, "Offset mismatch for Ucommon_rarity::None");

// /EntityFramework/_Verse/VNI/Entity.content_scope_component
// Kind: VerseClass; super: Component
class Ucontent_scope_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Ucontent_scope_component, None) == 0, "Offset mismatch for Ucontent_scope_component::None");

// /EntityFramework/_Verse/VNI/Entity.entity_origin
// Kind: VerseClass; super: Object
class Uentity_origin
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uentity_origin, None) == 0, "Offset mismatch for Uentity_origin::None");

// /EntityFramework/_Verse/VNI/Entity.entity_prefab
// Kind: VerseClass; super: None
class Uentity_prefab
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AssetForEditor[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    FName AssetPathName; // 0x0058 (Size: 0x8, Type: NameProperty)
    void* Object; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uentity_prefab, AssetForEditor) == 56, "Offset mismatch for Uentity_prefab::AssetForEditor");
static_assert(offsetof(Uentity_prefab, AssetPathName) == 88, "Offset mismatch for Uentity_prefab::AssetPathName");
static_assert(offsetof(Uentity_prefab, Object) == 96, "Offset mismatch for Uentity_prefab::Object");

// /EntityFramework/_Verse/VNI/Entity.epic_rarity
// Kind: VerseClass; super: rare_rarity
class Uepic_rarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uepic_rarity, None) == 0, "Offset mismatch for Uepic_rarity::None");

// /EntityFramework/_Verse/VNI/Entity.exotic_rarity
// Kind: VerseClass; super: mythic_rarity
class Uexotic_rarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uexotic_rarity, None) == 0, "Offset mismatch for Uexotic_rarity::None");

// /EntityFramework/_Verse/VNI/Entity.has_merge_rules
// Kind: VerseClass; super: Interface
class Uhas_merge_rules
{
public:
    std::uint8_t Opaque[1];
};


// /EntityFramework/_Verse/VNI/Entity.icon_component
// Kind: VerseClass; super: Component
class Uicon_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uicon_component, None) == 0, "Offset mismatch for Uicon_component::None");

// /EntityFramework/_Verse/VNI/Entity.impossible_rarity
// Kind: VerseClass; super: exotic_rarity
class Uimpossible_rarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uimpossible_rarity, None) == 0, "Offset mismatch for Uimpossible_rarity::None");

// /EntityFramework/_Verse/VNI/Entity.legendary_rarity
// Kind: VerseClass; super: epic_rarity
class Ulegendary_rarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Ulegendary_rarity, None) == 0, "Offset mismatch for Ulegendary_rarity::None");

// /EntityFramework/_Verse/VNI/Entity.mythic_rarity
// Kind: VerseClass; super: legendary_rarity
class Umythic_rarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Umythic_rarity, None) == 0, "Offset mismatch for Umythic_rarity::None");

// /EntityFramework/_Verse/VNI/Entity.origin
// Kind: VerseClass; super: Interface
class Uorigin
{
public:
    std::uint8_t Opaque[1];
};


// /EntityFramework/_Verse/VNI/Entity.rare_rarity
// Kind: VerseClass; super: uncommon_rarity
class Urare_rarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Urare_rarity, None) == 0, "Offset mismatch for Urare_rarity::None");

// /EntityFramework/_Verse/VNI/Entity.rarity_component
// Kind: VerseClass; super: Component
class Urarity_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Urarity_component, None) == 0, "Offset mismatch for Urarity_component::None");

// /EntityFramework/_Verse/VNI/Entity.replication_component
// Kind: VerseClass; super: Component
class Ureplication_component
{
public:
    std::uint8_t None[0xD1]; // 0x0000 (Size: 0xD1, Type: UnknownProperty)
    std::uint8_t verse_0x73E282A0_EnableReplication; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t verse_0xC6DF029C_AlwaysRelevant; // 0x00D2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(Ureplication_component, None) == 0, "Offset mismatch for Ureplication_component::None");
static_assert(offsetof(Ureplication_component, verse_0x73E282A0_EnableReplication) == 209, "Offset mismatch for Ureplication_component::verse_0x73E282A0_EnableReplication");
static_assert(offsetof(Ureplication_component, verse_0xC6DF029C_AlwaysRelevant) == 210, "Offset mismatch for Ureplication_component::verse_0xC6DF029C_AlwaysRelevant");

// /EntityFramework/_Verse/VNI/Entity.scene_event
// Kind: VerseClass; super: Interface
class Uscene_event
{
public:
    std::uint8_t Opaque[1];
};


// /EntityFramework/_Verse/VNI/Entity.simulation_entity
// Kind: VerseClass; super: Entity
class Usimulation_entity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Usimulation_entity, None) == 0, "Offset mismatch for Usimulation_entity::None");

// /EntityFramework/_Verse/VNI/Entity.socket_origin
// Kind: VerseClass; super: None
class Usocket_origin
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Usocket_origin, None) == 0, "Offset mismatch for Usocket_origin::None");

// /EntityFramework/_Verse/VNI/Entity.stackable_component
// Kind: VerseClass; super: Component
class Ustackable_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Ustackable_component, None) == 0, "Offset mismatch for Ustackable_component::None");

// /EntityFramework/_Verse/VNI/Entity.tag_component
// Kind: VerseClass; super: Component
class Utag_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Utag_component, None) == 0, "Offset mismatch for Utag_component::None");

// /EntityFramework/_Verse/VNI/Entity.tag_query_manager_component
// Kind: VerseClass; super: Component
class Utag_query_manager_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Utag_query_manager_component, None) == 0, "Offset mismatch for Utag_query_manager_component::None");

// /EntityFramework/_Verse/VNI/Entity.tick_events
// Kind: VerseClass; super: Object
class Utick_events
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Utick_events, None) == 0, "Offset mismatch for Utick_events::None");

// /EntityFramework/_Verse/VNI/Entity.transform_component
// Kind: VerseClass; super: Component
class Utransform_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Utransform_component, None) == 0, "Offset mismatch for Utransform_component::None");

// /EntityFramework/_Verse/VNI/Entity.uncommon_rarity
// Kind: VerseClass; super: common_rarity
class Uuncommon_rarity
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(Uuncommon_rarity, None) == 0, "Offset mismatch for Uuncommon_rarity::None");
