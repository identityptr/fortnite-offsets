/**
 * decamp dumper generated SDK
 * Package: /Script/PropertyHotfix
 */
#pragma once
#include "Basic.h"

// /Script/PropertyHotfix.PropertyHotfix
// Kind: ScriptStruct; super: none
struct FPropertyHotfix
{
public:
    TArray<void*> Assets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Patches; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    FName Source; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPropertyHotfix, Assets) == 0, "Offset mismatch for FPropertyHotfix::Assets");
static_assert(offsetof(FPropertyHotfix, Patches) == 16, "Offset mismatch for FPropertyHotfix::Patches");
static_assert(offsetof(FPropertyHotfix, Source) == 32, "Offset mismatch for FPropertyHotfix::Source");

// /Script/PropertyHotfix.PropertyHotfixAssetUndo
// Kind: ScriptStruct; super: none
struct FPropertyHotfixAssetUndo
{
public:
    TArray<void*> Entries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPropertyHotfixAssetUndo, Entries) == 0, "Offset mismatch for FPropertyHotfixAssetUndo::Entries");

// /Script/PropertyHotfix.PropertyPatch
// Kind: ScriptStruct; super: none
struct FPropertyPatch
{
public:
    FString Path; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Op; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    FString Value; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString Class; // 0x0028 (Size: 0x10, Type: StrProperty)
    FName Source; // 0x0038 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPropertyPatch, Path) == 0, "Offset mismatch for FPropertyPatch::Path");
static_assert(offsetof(FPropertyPatch, Op) == 16, "Offset mismatch for FPropertyPatch::Op");
static_assert(offsetof(FPropertyPatch, Value) == 24, "Offset mismatch for FPropertyPatch::Value");
static_assert(offsetof(FPropertyPatch, Class) == 40, "Offset mismatch for FPropertyPatch::Class");
static_assert(offsetof(FPropertyPatch, Source) == 56, "Offset mismatch for FPropertyPatch::Source");

// /Script/PropertyHotfix.PropertyPatchUndo
// Kind: ScriptStruct; super: none
struct FPropertyPatchUndo
{
public:
    FString Path; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Op; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    FString PriorValue; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString AppliedValue; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString Class; // 0x0038 (Size: 0x10, Type: StrProperty)
    FName Source; // 0x0048 (Size: 0x8, Type: NameProperty)
    void* RemovedObject; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    FString RemovedValue; // 0x0058 (Size: 0x10, Type: StrProperty)
    std::int32_t RemovedIndex; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t TypeCountAfter; // 0x006C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPropertyPatchUndo, Path) == 0, "Offset mismatch for FPropertyPatchUndo::Path");
static_assert(offsetof(FPropertyPatchUndo, Op) == 16, "Offset mismatch for FPropertyPatchUndo::Op");
static_assert(offsetof(FPropertyPatchUndo, PriorValue) == 24, "Offset mismatch for FPropertyPatchUndo::PriorValue");
static_assert(offsetof(FPropertyPatchUndo, AppliedValue) == 40, "Offset mismatch for FPropertyPatchUndo::AppliedValue");
static_assert(offsetof(FPropertyPatchUndo, Class) == 56, "Offset mismatch for FPropertyPatchUndo::Class");
static_assert(offsetof(FPropertyPatchUndo, Source) == 72, "Offset mismatch for FPropertyPatchUndo::Source");
static_assert(offsetof(FPropertyPatchUndo, RemovedObject) == 80, "Offset mismatch for FPropertyPatchUndo::RemovedObject");
static_assert(offsetof(FPropertyPatchUndo, RemovedValue) == 88, "Offset mismatch for FPropertyPatchUndo::RemovedValue");
static_assert(offsetof(FPropertyPatchUndo, RemovedIndex) == 104, "Offset mismatch for FPropertyPatchUndo::RemovedIndex");
static_assert(offsetof(FPropertyPatchUndo, TypeCountAfter) == 108, "Offset mismatch for FPropertyPatchUndo::TypeCountAfter");

// /Script/PropertyHotfix.PropertyHotfixHandler
// Kind: Class; super: Object
class UPropertyHotfixHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PropertyHotfix.PropertyHotfixSettings
// Kind: Class; super: Object
class UPropertyHotfixSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Hotfixes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PatchableAssetClasses; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPropertyHotfixSettings, Hotfixes) == 40, "Offset mismatch for UPropertyHotfixSettings::Hotfixes");
static_assert(offsetof(UPropertyHotfixSettings, PatchableAssetClasses) == 56, "Offset mismatch for UPropertyHotfixSettings::PatchableAssetClasses");

// /Script/PropertyHotfix.PropertyHotfixSubsystem
// Kind: Class; super: EngineSubsystem
class UPropertyHotfixSubsystem
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TMap<void*, void*> AppliedUndo; // 0x0050 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Handlers; // 0x0060 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0070
    TArray<void*> RegisteredLoadHookClasses; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x28]; // 0x0090
    TArray<void*> PinnedAssets; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPropertyHotfixSubsystem, AppliedUndo) == 80, "Offset mismatch for UPropertyHotfixSubsystem::AppliedUndo");
static_assert(offsetof(UPropertyHotfixSubsystem, Handlers) == 96, "Offset mismatch for UPropertyHotfixSubsystem::Handlers");
static_assert(offsetof(UPropertyHotfixSubsystem, RegisteredLoadHookClasses) == 128, "Offset mismatch for UPropertyHotfixSubsystem::RegisteredLoadHookClasses");
static_assert(offsetof(UPropertyHotfixSubsystem, PinnedAssets) == 184, "Offset mismatch for UPropertyHotfixSubsystem::PinnedAssets");
