/**
 * decamp dumper generated SDK
 * Package: /Script/SurfaceEffects
 */
#pragma once
#include "Basic.h"

// /Script/SurfaceEffects.SurfaceEffectTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSurfaceEffectTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Rule; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSurfaceEffectTableRow, Rule) == 8, "Offset mismatch for FSurfaceEffectTableRow::Rule");

// /Script/SurfaceEffects.SurfaceEffectRule
// Kind: Class; super: DataAsset
class USurfaceEffectRule
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SurfaceEffects.SurfaceEffectsSettings
// Kind: Class; super: DeveloperSettings
class USurfaceEffectsSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SurfaceEffectsDataTable[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USurfaceEffectsSettings, SurfaceEffectsDataTable) == 48, "Offset mismatch for USurfaceEffectsSettings::SurfaceEffectsDataTable");

// /Script/SurfaceEffects.SurfaceEffectsSubsystem
// Kind: Class; super: GameInstanceSubsystem
class USurfaceEffectsSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* SurfaceEffectsData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USurfaceEffectsSubsystem, SurfaceEffectsData) == 48, "Offset mismatch for USurfaceEffectsSubsystem::SurfaceEffectsData");
