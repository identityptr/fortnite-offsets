/**
 * decamp dumper generated SDK
 * Package: /GloriousSpanStats/CosmeticStats/B_CosmeticStatObject_GloriousSpan_01
 */
#pragma once
#include "Basic.h"

// /GloriousSpanStats/CosmeticStats/B_CosmeticStatObject_GloriousSpan_01.B_CosmeticStatObject_GloriousSpan_01_C
// Kind: BlueprintGeneratedClass; super: FortCosmeticStatObject_GloriousSpanProgress
class UB_CosmeticStatObject_GloriousSpan_01_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName StatName; // 0x0028 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> CachedStatValues; // 0x0030 (Size: 0x10, Type: MapProperty)
    void* OwningSubsystem; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UB_CosmeticStatObject_GloriousSpan_01_C, StatName) == 40, "Offset mismatch for UB_CosmeticStatObject_GloriousSpan_01_C::StatName");
static_assert(offsetof(UB_CosmeticStatObject_GloriousSpan_01_C, CachedStatValues) == 48, "Offset mismatch for UB_CosmeticStatObject_GloriousSpan_01_C::CachedStatValues");
static_assert(offsetof(UB_CosmeticStatObject_GloriousSpan_01_C, OwningSubsystem) == 64, "Offset mismatch for UB_CosmeticStatObject_GloriousSpan_01_C::OwningSubsystem");
