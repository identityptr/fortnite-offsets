/**
 * decamp dumper generated SDK
 * Package: /Script/PolygonalInputZonesUI
 */
#pragma once
#include "Basic.h"

// /Script/PolygonalInputZonesUI.ActiveTouchInput
// Kind: ScriptStruct; super: none
struct FActiveTouchInput
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PolygonalInputZonesUI.InputZone
// Kind: ScriptStruct; super: none
struct FInputZone
{
public:
    std::uint8_t bUseWidgets; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ZoneWidget; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ZoneAction; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ZoneVertices; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Priority; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FString ZoneID; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t Activated; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivateOnRelease; // 0x0041 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FInputZone, bUseWidgets) == 0, "Offset mismatch for FInputZone::bUseWidgets");
static_assert(offsetof(FInputZone, ZoneWidget) == 8, "Offset mismatch for FInputZone::ZoneWidget");
static_assert(offsetof(FInputZone, ZoneAction) == 16, "Offset mismatch for FInputZone::ZoneAction");
static_assert(offsetof(FInputZone, ZoneVertices) == 24, "Offset mismatch for FInputZone::ZoneVertices");
static_assert(offsetof(FInputZone, Priority) == 40, "Offset mismatch for FInputZone::Priority");
static_assert(offsetof(FInputZone, ZoneID) == 48, "Offset mismatch for FInputZone::ZoneID");
static_assert(offsetof(FInputZone, Activated) == 64, "Offset mismatch for FInputZone::Activated");
static_assert(offsetof(FInputZone, DeactivateOnRelease) == 65, "Offset mismatch for FInputZone::DeactivateOnRelease");

// /Script/PolygonalInputZonesUI.PolygonalInputZoneControllerBase
// Kind: Class; super: CommonUserWidget
class UPolygonalInputZoneControllerBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t InteractionMode; // 0x0330 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0331
    TArray<void*> InputZones; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    void* SwipeAction; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    float SwipeMinDistance; // 0x0350 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0354
    double SwipeMaxTime; // 0x0358 (Size: 0x8, Type: DoubleProperty)
    double SwipeMinTime; // 0x0360 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEndCurrentInteractionIfDragOutsideWidget; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInteractionWhenDragBetweenZones; // 0x0369 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseContinuousInputInjectionForAction; // 0x036A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolygonalInputZoneControllerBase, InteractionMode) == 816, "Offset mismatch for UPolygonalInputZoneControllerBase::InteractionMode");
static_assert(offsetof(UPolygonalInputZoneControllerBase, InputZones) == 824, "Offset mismatch for UPolygonalInputZoneControllerBase::InputZones");
static_assert(offsetof(UPolygonalInputZoneControllerBase, SwipeAction) == 840, "Offset mismatch for UPolygonalInputZoneControllerBase::SwipeAction");
static_assert(offsetof(UPolygonalInputZoneControllerBase, SwipeMinDistance) == 848, "Offset mismatch for UPolygonalInputZoneControllerBase::SwipeMinDistance");
static_assert(offsetof(UPolygonalInputZoneControllerBase, SwipeMaxTime) == 856, "Offset mismatch for UPolygonalInputZoneControllerBase::SwipeMaxTime");
static_assert(offsetof(UPolygonalInputZoneControllerBase, SwipeMinTime) == 864, "Offset mismatch for UPolygonalInputZoneControllerBase::SwipeMinTime");
static_assert(offsetof(UPolygonalInputZoneControllerBase, bEndCurrentInteractionIfDragOutsideWidget) == 872, "Offset mismatch for UPolygonalInputZoneControllerBase::bEndCurrentInteractionIfDragOutsideWidget");
static_assert(offsetof(UPolygonalInputZoneControllerBase, bAllowInteractionWhenDragBetweenZones) == 873, "Offset mismatch for UPolygonalInputZoneControllerBase::bAllowInteractionWhenDragBetweenZones");
static_assert(offsetof(UPolygonalInputZoneControllerBase, bUseContinuousInputInjectionForAction) == 874, "Offset mismatch for UPolygonalInputZoneControllerBase::bUseContinuousInputInjectionForAction");

// /Script/PolygonalInputZonesUI.PolygonalInputZoneInterface
// Kind: Class; super: Interface
class UPolygonalInputZoneInterface
{
public:
    std::uint8_t Opaque[1];
};
