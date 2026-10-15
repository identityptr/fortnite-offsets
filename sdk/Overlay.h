/**
 * decamp dumper generated SDK
 * Package: /Script/Overlay
 */
#pragma once
#include "Basic.h"

// /Script/Overlay.OverlayItem
// Kind: ScriptStruct; super: none
struct FOverlayItem
{
public:
    std::uint8_t StartTime[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t EndTime[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    FString Text; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Position[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOverlayItem, StartTime) == 0, "Offset mismatch for FOverlayItem::StartTime");
static_assert(offsetof(FOverlayItem, EndTime) == 8, "Offset mismatch for FOverlayItem::EndTime");
static_assert(offsetof(FOverlayItem, Text) == 16, "Offset mismatch for FOverlayItem::Text");
static_assert(offsetof(FOverlayItem, Position) == 32, "Offset mismatch for FOverlayItem::Position");

// /Script/Overlay.BasicOverlays
// Kind: Class; super: Overlays
class UBasicOverlays
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Overlays; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBasicOverlays, Overlays) == 40, "Offset mismatch for UBasicOverlays::Overlays");

// /Script/Overlay.LocalizedOverlays
// Kind: Class; super: Overlays
class ULocalizedOverlays
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DefaultOverlays; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> LocaleToOverlaysMap; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(ULocalizedOverlays, DefaultOverlays) == 40, "Offset mismatch for ULocalizedOverlays::DefaultOverlays");
static_assert(offsetof(ULocalizedOverlays, LocaleToOverlaysMap) == 48, "Offset mismatch for ULocalizedOverlays::LocaleToOverlaysMap");

// /Script/Overlay.Overlays
// Kind: Class; super: Object
class UOverlays
{
public:
    std::uint8_t Opaque[1];
};
