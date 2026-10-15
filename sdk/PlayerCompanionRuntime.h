/**
 * decamp dumper generated SDK
 * Package: /PlayerCompanion/_Verse/VNI/PlayerCompanionRuntime
 */
#pragma once
#include "Basic.h"

// /PlayerCompanion/_Verse/VNI/PlayerCompanionRuntime.AI_equipped_sidekick_component
// Kind: VerseClass; super: None
class UAI_equipped_sidekick_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UAI_equipped_sidekick_component, None) == 0, "Offset mismatch for UAI_equipped_sidekick_component::None");

// /PlayerCompanion/_Verse/VNI/PlayerCompanionRuntime.AI_spark_mode_component
// Kind: VerseClass; super: Component
class UAI_spark_mode_component
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* verse_0x3C7FA9EB_BeginSparkModeEvent; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* verse_0xE6CF40AD_EndSparkModeEvent; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAI_spark_mode_component, verse_0x3C7FA9EB_BeginSparkModeEvent) == 96, "Offset mismatch for UAI_spark_mode_component::verse_0x3C7FA9EB_BeginSparkModeEvent");
static_assert(offsetof(UAI_spark_mode_component, verse_0xE6CF40AD_EndSparkModeEvent) == 104, "Offset mismatch for UAI_spark_mode_component::verse_0xE6CF40AD_EndSparkModeEvent");
