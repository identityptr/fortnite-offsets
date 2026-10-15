/**
 * decamp dumper generated SDK
 * Package: /Script/WidgetSlotting
 */
#pragma once
#include "Basic.h"

// /Script/WidgetSlotting.WidgetSlottingContentWidgetInfo
// Kind: ScriptStruct; super: none
struct FWidgetSlottingContentWidgetInfo
{
public:
    void* Widget; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Padding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWidgetSlottingContentWidgetInfo, Widget) == 0, "Offset mismatch for FWidgetSlottingContentWidgetInfo::Widget");
static_assert(offsetof(FWidgetSlottingContentWidgetInfo, Padding) == 8, "Offset mismatch for FWidgetSlottingContentWidgetInfo::Padding");

// /Script/WidgetSlotting.WidgetSlottingHostCollection
// Kind: ScriptStruct; super: none
struct FWidgetSlottingHostCollection
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> ContentWidgetInfos; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWidgetSlottingHostCollection, ContentWidgetInfos) == 16, "Offset mismatch for FWidgetSlottingHostCollection::ContentWidgetInfos");

// /Script/WidgetSlotting.WidgetSlottingRegistryEntry
// Kind: ScriptStruct; super: none
struct FWidgetSlottingRegistryEntry
{
public:
    std::uint8_t CommonCollection[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> PlayerCollections; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FWidgetSlottingRegistryEntry, CommonCollection) == 0, "Offset mismatch for FWidgetSlottingRegistryEntry::CommonCollection");
static_assert(offsetof(FWidgetSlottingRegistryEntry, PlayerCollections) == 32, "Offset mismatch for FWidgetSlottingRegistryEntry::PlayerCollections");

// /Script/WidgetSlotting.WidgetSlottingBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UWidgetSlottingBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WidgetSlotting.WidgetSlottingHostInterface
// Kind: Class; super: Interface
class UWidgetSlottingHostInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WidgetSlotting.WidgetSlottingHostOverlay
// Kind: Class; super: Overlay
class UWidgetSlottingHostOverlay
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    std::uint8_t HostTag[0x4]; // 0x0198 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsPlayerSpecific; // 0x019C (Size: 0x1, Type: BoolProperty)
    std::uint8_t SlottedWidgetDefaultHorizontalAlignment; // 0x019D (Size: 0x1, Type: ByteProperty)
    std::uint8_t SlottedWidgetDefaultVerticalAlignment; // 0x019E (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UWidgetSlottingHostOverlay, HostTag) == 408, "Offset mismatch for UWidgetSlottingHostOverlay::HostTag");
static_assert(offsetof(UWidgetSlottingHostOverlay, bIsPlayerSpecific) == 412, "Offset mismatch for UWidgetSlottingHostOverlay::bIsPlayerSpecific");
static_assert(offsetof(UWidgetSlottingHostOverlay, SlottedWidgetDefaultHorizontalAlignment) == 413, "Offset mismatch for UWidgetSlottingHostOverlay::SlottedWidgetDefaultHorizontalAlignment");
static_assert(offsetof(UWidgetSlottingHostOverlay, SlottedWidgetDefaultVerticalAlignment) == 414, "Offset mismatch for UWidgetSlottingHostOverlay::SlottedWidgetDefaultVerticalAlignment");

// /Script/WidgetSlotting.WidgetSlottingManager
// Kind: Class; super: WorldSubsystem
class UWidgetSlottingManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Registry; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWidgetSlottingManager, Registry) == 56, "Offset mismatch for UWidgetSlottingManager::Registry");

// /Script/WidgetSlotting.WidgetSlottingRegistry
// Kind: Class; super: Object
class UWidgetSlottingRegistry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> Entries; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UWidgetSlottingRegistry, Entries) == 40, "Offset mismatch for UWidgetSlottingRegistry::Entries");
