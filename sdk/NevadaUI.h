/**
 * decamp dumper generated SDK
 * Package: /Script/NevadaUI
 */
#pragma once
#include "Basic.h"

// /Script/NevadaUI.FortNevadaVehicleReticle
// Kind: Class; super: FortAthenaVehicleDashboardWidget
class UFortNevadaVehicleReticle
{
public:
    std::uint8_t Pad_0000[0x478]; // 0x0000
    void* NevadaTargetIndicatorClass; // 0x0478 (Size: 0x8, Type: ClassProperty)
    void* TargetIndicator; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    void* OwningNevadaVehicle; // 0x0488 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0490
    std::uint8_t IndicatorPool[0x1]; // 0x0498 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortNevadaVehicleReticle, NevadaTargetIndicatorClass) == 1144, "Offset mismatch for UFortNevadaVehicleReticle::NevadaTargetIndicatorClass");
static_assert(offsetof(UFortNevadaVehicleReticle, TargetIndicator) == 1152, "Offset mismatch for UFortNevadaVehicleReticle::TargetIndicator");
static_assert(offsetof(UFortNevadaVehicleReticle, OwningNevadaVehicle) == 1160, "Offset mismatch for UFortNevadaVehicleReticle::OwningNevadaVehicle");
static_assert(offsetof(UFortNevadaVehicleReticle, IndicatorPool) == 1176, "Offset mismatch for UFortNevadaVehicleReticle::IndicatorPool");

// /Script/NevadaUI.NevadaTargetIndicator
// Kind: Class; super: FortActorIndicatorWidget
class UNevadaTargetIndicator
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    TWeakObjectPtr<void> IndicatedActor; // 0x0378 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> IndicatedActorComponent; // 0x0380 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t RelativeLocation[0x18]; // 0x0388 (Size: 0x18, Type: StructProperty)
    float MaxDistance; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampOnScreen; // 0x03A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowClampToScreenArrow; // 0x03A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x03A6
    std::uint8_t ElevationArrowData[0x1C]; // 0x03A8 (Size: 0x1C, Type: StructProperty)
    std::uint8_t bUseScreenSpacePosition; // 0x03C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x03C5
    std::uint8_t ScreenSpaceRelativeOffset[0x10]; // 0x03C8 (Size: 0x10, Type: StructProperty)
    std::int32_t ScreenPriority; // 0x03D8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNevadaTargetIndicator, IndicatedActor) == 888, "Offset mismatch for UNevadaTargetIndicator::IndicatedActor");
static_assert(offsetof(UNevadaTargetIndicator, IndicatedActorComponent) == 896, "Offset mismatch for UNevadaTargetIndicator::IndicatedActorComponent");
static_assert(offsetof(UNevadaTargetIndicator, RelativeLocation) == 904, "Offset mismatch for UNevadaTargetIndicator::RelativeLocation");
static_assert(offsetof(UNevadaTargetIndicator, MaxDistance) == 928, "Offset mismatch for UNevadaTargetIndicator::MaxDistance");
static_assert(offsetof(UNevadaTargetIndicator, bClampOnScreen) == 932, "Offset mismatch for UNevadaTargetIndicator::bClampOnScreen");
static_assert(offsetof(UNevadaTargetIndicator, bShowClampToScreenArrow) == 933, "Offset mismatch for UNevadaTargetIndicator::bShowClampToScreenArrow");
static_assert(offsetof(UNevadaTargetIndicator, ElevationArrowData) == 936, "Offset mismatch for UNevadaTargetIndicator::ElevationArrowData");
static_assert(offsetof(UNevadaTargetIndicator, bUseScreenSpacePosition) == 964, "Offset mismatch for UNevadaTargetIndicator::bUseScreenSpacePosition");
static_assert(offsetof(UNevadaTargetIndicator, ScreenSpaceRelativeOffset) == 968, "Offset mismatch for UNevadaTargetIndicator::ScreenSpaceRelativeOffset");
static_assert(offsetof(UNevadaTargetIndicator, ScreenPriority) == 984, "Offset mismatch for UNevadaTargetIndicator::ScreenPriority");
