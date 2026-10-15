/**
 * decamp dumper generated SDK
 * Package: /EntityFramework/_Verse/VNI/EntityLevel
 */
#pragma once
#include "Basic.h"

// /EntityFramework/_Verse/VNI/EntityLevel.level_entity
// Kind: VerseClass; super: Entity
class Ulevel_entity
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Components; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OwnedEntities; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(Ulevel_entity, Components) == 72, "Offset mismatch for Ulevel_entity::Components");
static_assert(offsetof(Ulevel_entity, OwnedEntities) == 88, "Offset mismatch for Ulevel_entity::OwnedEntities");

// /EntityFramework/_Verse/VNI/EntityLevel.level_subsim_component
// Kind: VerseClass; super: Component
class Ulevel_subsim_component
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t verse_0x1EF4FDDD_SimulationEntityPrefab[0x1]; // 0x0058 (Size: 0x1, Type: VerseClassProperty)
};

static_assert(offsetof(Ulevel_subsim_component, verse_0x1EF4FDDD_SimulationEntityPrefab) == 88, "Offset mismatch for Ulevel_subsim_component::verse_0x1EF4FDDD_SimulationEntityPrefab");
