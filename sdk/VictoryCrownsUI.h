/**
 * decamp dumper generated SDK
 * Package: /Script/VictoryCrownsUI
 */
#pragma once
#include "Basic.h"

// /Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
// Kind: Class; super: FortControllerComponent
class UFortUIManagerComponent_VictoryCrowns
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* VictoryCrownsIndicatorClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t IndicatorPool[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortUIManagerComponent_VictoryCrowns, VictoryCrownsIndicatorClass) == 200, "Offset mismatch for UFortUIManagerComponent_VictoryCrowns::VictoryCrownsIndicatorClass");
static_assert(offsetof(UFortUIManagerComponent_VictoryCrowns, IndicatorPool) == 208, "Offset mismatch for UFortUIManagerComponent_VictoryCrowns::IndicatorPool");

// /Script/VictoryCrownsUI.PlacementOverlayCondition_VictoryCrowns
// Kind: Class; super: PlacementOverlayCondition
class UPlacementOverlayCondition_VictoryCrowns
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase
// Kind: Class; super: CommonUserWidget
class UVictoryCrownsBearerInfoBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> WeakPSA; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
    void* Text_PlayerName; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVictoryCrownsBearerInfoBase, WeakPSA) == 816, "Offset mismatch for UVictoryCrownsBearerInfoBase::WeakPSA");
static_assert(offsetof(UVictoryCrownsBearerInfoBase, Text_PlayerName) == 824, "Offset mismatch for UVictoryCrownsBearerInfoBase::Text_PlayerName");

// /Script/VictoryCrownsUI.VictoryCrownsIndicator
// Kind: Class; super: FortActorIndicatorWidget
class UVictoryCrownsIndicator
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

static_assert(offsetof(UVictoryCrownsIndicator, IndicatedActor) == 888, "Offset mismatch for UVictoryCrownsIndicator::IndicatedActor");
static_assert(offsetof(UVictoryCrownsIndicator, IndicatedActorComponent) == 896, "Offset mismatch for UVictoryCrownsIndicator::IndicatedActorComponent");
static_assert(offsetof(UVictoryCrownsIndicator, RelativeLocation) == 904, "Offset mismatch for UVictoryCrownsIndicator::RelativeLocation");
static_assert(offsetof(UVictoryCrownsIndicator, MaxDistance) == 928, "Offset mismatch for UVictoryCrownsIndicator::MaxDistance");
static_assert(offsetof(UVictoryCrownsIndicator, bClampOnScreen) == 932, "Offset mismatch for UVictoryCrownsIndicator::bClampOnScreen");
static_assert(offsetof(UVictoryCrownsIndicator, bShowClampToScreenArrow) == 933, "Offset mismatch for UVictoryCrownsIndicator::bShowClampToScreenArrow");
static_assert(offsetof(UVictoryCrownsIndicator, ElevationArrowData) == 936, "Offset mismatch for UVictoryCrownsIndicator::ElevationArrowData");
static_assert(offsetof(UVictoryCrownsIndicator, bUseScreenSpacePosition) == 964, "Offset mismatch for UVictoryCrownsIndicator::bUseScreenSpacePosition");
static_assert(offsetof(UVictoryCrownsIndicator, ScreenSpaceRelativeOffset) == 968, "Offset mismatch for UVictoryCrownsIndicator::ScreenSpaceRelativeOffset");
static_assert(offsetof(UVictoryCrownsIndicator, ScreenPriority) == 984, "Offset mismatch for UVictoryCrownsIndicator::ScreenPriority");

// /Script/VictoryCrownsUI.VictoryCrownsPlacementOverlay
// Kind: Class; super: PostGamePlacementOverlay
class UVictoryCrownsPlacementOverlay
{
public:
    std::uint8_t Pad_0000[0x3C8]; // 0x0000
    void* MutatorClassToWaitFor; // 0x03C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UVictoryCrownsPlacementOverlay, MutatorClassToWaitFor) == 968, "Offset mismatch for UVictoryCrownsPlacementOverlay::MutatorClassToWaitFor");

// /Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
// Kind: Class; super: FortHUDElementWidget
class UVictoryCrownsPlayerInfoWidget
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t HLTDependentWidgetTag[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t ElementTag[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t HUDElementTag[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t HiddenVisibility; // 0x0360 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    void* TutorialHighlight; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVictoryCrownsPlayerInfoWidget, HLTDependentWidgetTag) == 824, "Offset mismatch for UVictoryCrownsPlayerInfoWidget::HLTDependentWidgetTag");
static_assert(offsetof(UVictoryCrownsPlayerInfoWidget, ElementTag) == 828, "Offset mismatch for UVictoryCrownsPlayerInfoWidget::ElementTag");
static_assert(offsetof(UVictoryCrownsPlayerInfoWidget, HUDElementTag) == 832, "Offset mismatch for UVictoryCrownsPlayerInfoWidget::HUDElementTag");
static_assert(offsetof(UVictoryCrownsPlayerInfoWidget, HiddenVisibility) == 864, "Offset mismatch for UVictoryCrownsPlayerInfoWidget::HiddenVisibility");
static_assert(offsetof(UVictoryCrownsPlayerInfoWidget, TutorialHighlight) == 872, "Offset mismatch for UVictoryCrownsPlayerInfoWidget::TutorialHighlight");

// /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget
// Kind: Class; super: CommonActivatableWidget
class UVictoryCrownsPreGameWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* EntryBox_BearerList; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* TipActionWidget; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CloseObjectInputAction[0x1]; // 0x04B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVictoryCrownsPreGameWidget, EntryBox_BearerList) == 1184, "Offset mismatch for UVictoryCrownsPreGameWidget::EntryBox_BearerList");
static_assert(offsetof(UVictoryCrownsPreGameWidget, TipActionWidget) == 1192, "Offset mismatch for UVictoryCrownsPreGameWidget::TipActionWidget");
static_assert(offsetof(UVictoryCrownsPreGameWidget, CloseObjectInputAction) == 1200, "Offset mismatch for UVictoryCrownsPreGameWidget::CloseObjectInputAction");
