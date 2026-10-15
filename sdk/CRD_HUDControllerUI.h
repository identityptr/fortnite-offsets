/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_HUDControllerUI
 */
#pragma once
#include "Basic.h"

// /Script/CRD_HUDControllerUI.HUDControllerContainerBase
// Kind: Class; super: UserWidget
class UHUDControllerContainerBase
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* SlotViewModelClass; // 0x0310 (Size: 0x8, Type: ClassProperty)
    TArray<void*> SlotContentWidgets; // 0x0318 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SlotViewModels; // 0x0328 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHUDControllerContainerBase, SlotViewModelClass) == 784, "Offset mismatch for UHUDControllerContainerBase::SlotViewModelClass");
static_assert(offsetof(UHUDControllerContainerBase, SlotContentWidgets) == 792, "Offset mismatch for UHUDControllerContainerBase::SlotContentWidgets");
static_assert(offsetof(UHUDControllerContainerBase, SlotViewModels) == 808, "Offset mismatch for UHUDControllerContainerBase::SlotViewModels");

// /Script/CRD_HUDControllerUI.HUDControllerDynamicUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UHUDControllerDynamicUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* PlayerInfoWidgetOverrideScene; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* QuickbarWidgetOverrideScene; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* EquippedItemWidgetOverrideScene; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AddedScenes; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHUDControllerDynamicUIDirector, PlayerInfoWidgetOverrideScene) == 672, "Offset mismatch for UHUDControllerDynamicUIDirector::PlayerInfoWidgetOverrideScene");
static_assert(offsetof(UHUDControllerDynamicUIDirector, QuickbarWidgetOverrideScene) == 680, "Offset mismatch for UHUDControllerDynamicUIDirector::QuickbarWidgetOverrideScene");
static_assert(offsetof(UHUDControllerDynamicUIDirector, EquippedItemWidgetOverrideScene) == 688, "Offset mismatch for UHUDControllerDynamicUIDirector::EquippedItemWidgetOverrideScene");
static_assert(offsetof(UHUDControllerDynamicUIDirector, AddedScenes) == 696, "Offset mismatch for UHUDControllerDynamicUIDirector::AddedScenes");

// /Script/CRD_HUDControllerUI.HUDControllerWidgetBase
// Kind: Class; super: UserWidget
class UHUDControllerWidgetBase
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* ViewModelClass; // 0x0310 (Size: 0x8, Type: ClassProperty)
    void* ContentWidget; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* ViewModel; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHUDControllerWidgetBase, ViewModelClass) == 784, "Offset mismatch for UHUDControllerWidgetBase::ViewModelClass");
static_assert(offsetof(UHUDControllerWidgetBase, ContentWidget) == 792, "Offset mismatch for UHUDControllerWidgetBase::ContentWidget");
static_assert(offsetof(UHUDControllerWidgetBase, ViewModel) == 800, "Offset mismatch for UHUDControllerWidgetBase::ViewModel");

// /Script/CRD_HUDControllerUI.HUDWidgetValidationLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UHUDWidgetValidationLibrary
{
public:
    std::uint8_t Opaque[1];
};
