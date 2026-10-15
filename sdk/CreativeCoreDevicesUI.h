/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeCoreDevicesUI
 */
#pragma once
#include "Basic.h"

// /Script/CreativeCoreDevicesUI.ViewModelRelation
// Kind: ScriptStruct; super: none
struct FViewModelRelation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CreativeCoreDevicesUI.FortCreativeTimerContainerWidget
// Kind: Class; super: FortHUDElementWidget
class UFortCreativeTimerContainerWidget
{
public:
    std::uint8_t Pad_0000[0x3C0]; // 0x0000
    void* TimerViewModelClass; // 0x03C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x10]; // 0x03C8
    void* TimerWidgetDefaultClass; // 0x03D8 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> InterfaceViewModelMap; // 0x03E0 (Size: 0x10, Type: MapProperty)
    TScriptInterface<void> ActiveInterface; // 0x03F0 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UFortCreativeTimerContainerWidget, TimerViewModelClass) == 960, "Offset mismatch for UFortCreativeTimerContainerWidget::TimerViewModelClass");
static_assert(offsetof(UFortCreativeTimerContainerWidget, TimerWidgetDefaultClass) == 984, "Offset mismatch for UFortCreativeTimerContainerWidget::TimerWidgetDefaultClass");
static_assert(offsetof(UFortCreativeTimerContainerWidget, InterfaceViewModelMap) == 992, "Offset mismatch for UFortCreativeTimerContainerWidget::InterfaceViewModelMap");
static_assert(offsetof(UFortCreativeTimerContainerWidget, ActiveInterface) == 1008, "Offset mismatch for UFortCreativeTimerContainerWidget::ActiveInterface");
