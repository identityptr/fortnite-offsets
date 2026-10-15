/**
 * decamp dumper generated SDK
 * Package: /Script/GloriousSpanStats
 */
#pragma once
#include "Basic.h"

// /Script/GloriousSpanStats.FortCosmeticStatObject_GloriousSpanProgress
// Kind: Class; super: FortCosmeticStatObject
class UFortCosmeticStatObject_GloriousSpanProgress
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName StatName; // 0x0028 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> CachedStatValues; // 0x0030 (Size: 0x10, Type: MapProperty)
    void* OwningSubsystem; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCosmeticStatObject_GloriousSpanProgress, StatName) == 40, "Offset mismatch for UFortCosmeticStatObject_GloriousSpanProgress::StatName");
static_assert(offsetof(UFortCosmeticStatObject_GloriousSpanProgress, CachedStatValues) == 48, "Offset mismatch for UFortCosmeticStatObject_GloriousSpanProgress::CachedStatValues");
static_assert(offsetof(UFortCosmeticStatObject_GloriousSpanProgress, OwningSubsystem) == 64, "Offset mismatch for UFortCosmeticStatObject_GloriousSpanProgress::OwningSubsystem");
