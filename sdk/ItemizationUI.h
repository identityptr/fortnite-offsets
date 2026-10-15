/**
 * decamp dumper generated SDK
 * Package: /Script/ItemizationUI
 */
#pragma once
#include "Basic.h"

// /Script/ItemizationUI.InventoryWidgetWithUnresolvedSource
// Kind: ScriptStruct; super: none
struct FInventoryWidgetWithUnresolvedSource
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> UserWidget; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> View; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FInventoryWidgetWithUnresolvedSource, UserWidget) == 8, "Offset mismatch for FInventoryWidgetWithUnresolvedSource::UserWidget");
static_assert(offsetof(FInventoryWidgetWithUnresolvedSource, View) == 16, "Offset mismatch for FInventoryWidgetWithUnresolvedSource::View");

// /Script/ItemizationUI.GenericInventoryHUDContainer
// Kind: Class; super: UserWidget
class UGenericInventoryHUDContainer
{
public:
    std::uint8_t Pad_0000[0x328]; // 0x0000
    void* Content_HUDWidget; // 0x0328 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGenericInventoryHUDContainer, Content_HUDWidget) == 808, "Offset mismatch for UGenericInventoryHUDContainer::Content_HUDWidget");

// /Script/ItemizationUI.GenericInventoryScreenContainer
// Kind: Class; super: FortInventoryScreenContainer
class UGenericInventoryScreenContainer
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    void* Content_InventoryScreen; // 0x0500 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGenericInventoryScreenContainer, Content_InventoryScreen) == 1280, "Offset mismatch for UGenericInventoryScreenContainer::Content_InventoryScreen");

// /Script/ItemizationUI.InventoryCollectionViewModelResolver
// Kind: Class; super: MVVMViewModelContextResolver
class UInventoryCollectionViewModelResolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationUI.InventoryItemViewModelResolver
// Kind: Class; super: MVVMViewModelContextResolver
class UInventoryItemViewModelResolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationUI.ItemizationDynamicUIDirectorComponent
// Kind: Class; super: FortDynamicUIDirectorComponent
class UItemizationDynamicUIDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> ItemizationScenes; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    void* InventoryScreenOverrideScene; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UItemizationDynamicUIDirectorComponent, ItemizationScenes) == 192, "Offset mismatch for UItemizationDynamicUIDirectorComponent::ItemizationScenes");
static_assert(offsetof(UItemizationDynamicUIDirectorComponent, InventoryScreenOverrideScene) == 208, "Offset mismatch for UItemizationDynamicUIDirectorComponent::InventoryScreenOverrideScene");

// /Script/ItemizationUI.ItemizationUIAllowedConversionFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UItemizationUIAllowedConversionFunctions
{
public:
    std::uint8_t Opaque[1];
};
