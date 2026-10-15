/**
 * decamp dumper generated SDK
 * Package: /Script/SparksSongsEmoteWheelRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksSongsEmoteWheelRuntime.SparksControllerComponent_SparksSongsEmoteOptions_TypeToIndexMappingEntry
// Kind: ScriptStruct; super: none
struct FSparksControllerComponent_SparksSongsEmoteOptions_TypeToIndexMappingEntry
{
public:
    std::uint8_t LoopType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t MultiEmoteIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSparksControllerComponent_SparksSongsEmoteOptions_TypeToIndexMappingEntry, LoopType) == 0, "Offset mismatch for FSparksControllerComponent_SparksSongsEmoteOptions_TypeToIndexMappingEntry::LoopType");
static_assert(offsetof(FSparksControllerComponent_SparksSongsEmoteOptions_TypeToIndexMappingEntry, MultiEmoteIndex) == 4, "Offset mismatch for FSparksControllerComponent_SparksSongsEmoteOptions_TypeToIndexMappingEntry::MultiEmoteIndex");

// /Script/SparksSongsEmoteWheelRuntime.SparksControllerComponent_SparksSongsEmoteOptions
// Kind: Class; super: ControllerComponent
class USparksControllerComponent_SparksSongsEmoteOptions
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CategoryNameLocker[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t CategoryNameAll[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t CategoryTitleLocker[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t CategoryTitleAll[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t EmoteWheelOverlay[0x20]; // 0x00E8 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> LoopTypeToIndexMapping; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CategoryTagLocker[0x4]; // 0x0118 (Size: 0x4, Type: StructProperty)
    std::uint8_t CategoryTagAll[0x1]; // 0x011C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksControllerComponent_SparksSongsEmoteOptions, CategoryNameLocker) == 192, "Offset mismatch for USparksControllerComponent_SparksSongsEmoteOptions::CategoryNameLocker");
static_assert(offsetof(USparksControllerComponent_SparksSongsEmoteOptions, CategoryNameAll) == 196, "Offset mismatch for USparksControllerComponent_SparksSongsEmoteOptions::CategoryNameAll");
static_assert(offsetof(USparksControllerComponent_SparksSongsEmoteOptions, CategoryTitleLocker) == 200, "Offset mismatch for USparksControllerComponent_SparksSongsEmoteOptions::CategoryTitleLocker");
static_assert(offsetof(USparksControllerComponent_SparksSongsEmoteOptions, CategoryTitleAll) == 216, "Offset mismatch for USparksControllerComponent_SparksSongsEmoteOptions::CategoryTitleAll");
static_assert(offsetof(USparksControllerComponent_SparksSongsEmoteOptions, EmoteWheelOverlay) == 232, "Offset mismatch for USparksControllerComponent_SparksSongsEmoteOptions::EmoteWheelOverlay");
static_assert(offsetof(USparksControllerComponent_SparksSongsEmoteOptions, LoopTypeToIndexMapping) == 264, "Offset mismatch for USparksControllerComponent_SparksSongsEmoteOptions::LoopTypeToIndexMapping");
static_assert(offsetof(USparksControllerComponent_SparksSongsEmoteOptions, CategoryTagLocker) == 280, "Offset mismatch for USparksControllerComponent_SparksSongsEmoteOptions::CategoryTagLocker");
static_assert(offsetof(USparksControllerComponent_SparksSongsEmoteOptions, CategoryTagAll) == 284, "Offset mismatch for USparksControllerComponent_SparksSongsEmoteOptions::CategoryTagAll");

// /Script/SparksSongsEmoteWheelRuntime.SparksSongsEmoteWheelDeveloperSettings
// Kind: Class; super: DeveloperSettings
class USparksSongsEmoteWheelDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bOverrideJamSongLoadout; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TArray<void*> JamSongLoadout; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksSongsEmoteWheelDeveloperSettings, bOverrideJamSongLoadout) == 48, "Offset mismatch for USparksSongsEmoteWheelDeveloperSettings::bOverrideJamSongLoadout");
static_assert(offsetof(USparksSongsEmoteWheelDeveloperSettings, JamSongLoadout) == 56, "Offset mismatch for USparksSongsEmoteWheelDeveloperSettings::JamSongLoadout");

// /Script/SparksSongsEmoteWheelRuntime.SparksSongsEmoteWheelLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USparksSongsEmoteWheelLibrary
{
public:
    std::uint8_t Opaque[1];
};
