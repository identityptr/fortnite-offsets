/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamDecksUI
 */
#pragma once
#include "Basic.h"

// /Script/FMJamDecksUI.JamDecksComponent_IndicatorsProviderPlayerDetails
// Kind: ScriptStruct; super: none
struct FJamDecksComponent_IndicatorsProviderPlayerDetails
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> IndicatorsInUse; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJamDecksComponent_IndicatorsProviderPlayerDetails, player) == 0, "Offset mismatch for FJamDecksComponent_IndicatorsProviderPlayerDetails::player");
static_assert(offsetof(FJamDecksComponent_IndicatorsProviderPlayerDetails, IndicatorsInUse) == 8, "Offset mismatch for FJamDecksComponent_IndicatorsProviderPlayerDetails::IndicatorsInUse");

// /Script/FMJamDecksUI.JamDeckIndicatorBase
// Kind: Class; super: FortActorIndicatorWidget
class UJamDeckIndicatorBase
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

static_assert(offsetof(UJamDeckIndicatorBase, IndicatedActor) == 888, "Offset mismatch for UJamDeckIndicatorBase::IndicatedActor");
static_assert(offsetof(UJamDeckIndicatorBase, IndicatedActorComponent) == 896, "Offset mismatch for UJamDeckIndicatorBase::IndicatedActorComponent");
static_assert(offsetof(UJamDeckIndicatorBase, RelativeLocation) == 904, "Offset mismatch for UJamDeckIndicatorBase::RelativeLocation");
static_assert(offsetof(UJamDeckIndicatorBase, MaxDistance) == 928, "Offset mismatch for UJamDeckIndicatorBase::MaxDistance");
static_assert(offsetof(UJamDeckIndicatorBase, bClampOnScreen) == 932, "Offset mismatch for UJamDeckIndicatorBase::bClampOnScreen");
static_assert(offsetof(UJamDeckIndicatorBase, bShowClampToScreenArrow) == 933, "Offset mismatch for UJamDeckIndicatorBase::bShowClampToScreenArrow");
static_assert(offsetof(UJamDeckIndicatorBase, ElevationArrowData) == 936, "Offset mismatch for UJamDeckIndicatorBase::ElevationArrowData");
static_assert(offsetof(UJamDeckIndicatorBase, bUseScreenSpacePosition) == 964, "Offset mismatch for UJamDeckIndicatorBase::bUseScreenSpacePosition");
static_assert(offsetof(UJamDeckIndicatorBase, ScreenSpaceRelativeOffset) == 968, "Offset mismatch for UJamDeckIndicatorBase::ScreenSpaceRelativeOffset");
static_assert(offsetof(UJamDeckIndicatorBase, ScreenPriority) == 984, "Offset mismatch for UJamDeckIndicatorBase::ScreenPriority");

// /Script/FMJamDecksUI.JamDeckViewModel
// Kind: Class; super: MVVMViewModelBase
class UJamDeckViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* MusicSlotVM; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OwnerName[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    TArray<void*> FocusingPlayers; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamDeckViewModel, MusicSlotVM) == 104, "Offset mismatch for UJamDeckViewModel::MusicSlotVM");
static_assert(offsetof(UJamDeckViewModel, OwnerName) == 112, "Offset mismatch for UJamDeckViewModel::OwnerName");
static_assert(offsetof(UJamDeckViewModel, FocusingPlayers) == 128, "Offset mismatch for UJamDeckViewModel::FocusingPlayers");

// /Script/FMJamDecksUI.JamDecksComponent_IndicatorsProvider
// Kind: Class; super: ActorComponent
class UJamDecksComponent_IndicatorsProvider
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> WhileFocusedIndicators; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00D0
    TArray<void*> PerPlayerData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* JamDeckViewModel; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamDecksComponent_IndicatorsProvider, WhileFocusedIndicators) == 192, "Offset mismatch for UJamDecksComponent_IndicatorsProvider::WhileFocusedIndicators");
static_assert(offsetof(UJamDecksComponent_IndicatorsProvider, PerPlayerData) == 224, "Offset mismatch for UJamDecksComponent_IndicatorsProvider::PerPlayerData");
static_assert(offsetof(UJamDecksComponent_IndicatorsProvider, JamDeckViewModel) == 240, "Offset mismatch for UJamDecksComponent_IndicatorsProvider::JamDeckViewModel");

// /Script/FMJamDecksUI.JamDecksControllerComponent_IndicatorsManager
// Kind: Class; super: ControllerComponent
class UJamDecksControllerComponent_IndicatorsManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* DynamicUISceneToAdd; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamDecksControllerComponent_IndicatorsManager, DynamicUISceneToAdd) == 192, "Offset mismatch for UJamDecksControllerComponent_IndicatorsManager::DynamicUISceneToAdd");

// /Script/FMJamDecksUI.JamDecksGameStateComponent_IndicatorCache
// Kind: Class; super: ActorComponent
class UJamDecksGameStateComponent_IndicatorCache
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t WidgetPool[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamDecksGameStateComponent_IndicatorCache, WidgetPool) == 192, "Offset mismatch for UJamDecksGameStateComponent_IndicatorCache::WidgetPool");

// /Script/FMJamDecksUI.JamDecksIndicatorLayerBase
// Kind: Class; super: FortHUDElementWidget
class UJamDecksIndicatorLayerBase
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* DeckIndicators; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamDecksIndicatorLayerBase, DeckIndicators) == 880, "Offset mismatch for UJamDecksIndicatorLayerBase::DeckIndicators");

// /Script/FMJamDecksUI.JamDecksMusicSlotSelectorComponent
// Kind: Class; super: ActorComponent
class UJamDecksMusicSlotSelectorComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::PrimaryComponentTick");
static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, ComponentTags) == 104, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::ComponentTags");
static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, AssetUserData) == 120, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::AssetUserData");
static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::UCSSerializationIndex");
static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, bNetAddressable) == 152, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::bNetAddressable");
static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, bAutoActivate) == 154, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::bAutoActivate");
static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, bIsEditorOnly) == 155, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::bIsEditorOnly");
static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, CreationMethod) == 185, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::CreationMethod");
static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, OnComponentActivated) == 186, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::OnComponentActivated");
static_assert(offsetof(UJamDecksMusicSlotSelectorComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJamDecksMusicSlotSelectorComponent::OnComponentDeactivated");

// /Script/FMJamDecksUI.JamDecksPickerOverriderComponent
// Kind: Class; super: ControllerComponent
class UJamDecksPickerOverriderComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJamDecksPickerOverriderComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJamDecksPickerOverriderComponent::PrimaryComponentTick");
static_assert(offsetof(UJamDecksPickerOverriderComponent, ComponentTags) == 104, "Offset mismatch for UJamDecksPickerOverriderComponent::ComponentTags");
static_assert(offsetof(UJamDecksPickerOverriderComponent, AssetUserData) == 120, "Offset mismatch for UJamDecksPickerOverriderComponent::AssetUserData");
static_assert(offsetof(UJamDecksPickerOverriderComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJamDecksPickerOverriderComponent::UCSSerializationIndex");
static_assert(offsetof(UJamDecksPickerOverriderComponent, bNetAddressable) == 152, "Offset mismatch for UJamDecksPickerOverriderComponent::bNetAddressable");
static_assert(offsetof(UJamDecksPickerOverriderComponent, bAutoActivate) == 154, "Offset mismatch for UJamDecksPickerOverriderComponent::bAutoActivate");
static_assert(offsetof(UJamDecksPickerOverriderComponent, bIsEditorOnly) == 155, "Offset mismatch for UJamDecksPickerOverriderComponent::bIsEditorOnly");
static_assert(offsetof(UJamDecksPickerOverriderComponent, CreationMethod) == 185, "Offset mismatch for UJamDecksPickerOverriderComponent::CreationMethod");
static_assert(offsetof(UJamDecksPickerOverriderComponent, OnComponentActivated) == 186, "Offset mismatch for UJamDecksPickerOverriderComponent::OnComponentActivated");
static_assert(offsetof(UJamDecksPickerOverriderComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJamDecksPickerOverriderComponent::OnComponentDeactivated");

// /Script/FMJamDecksUI.QuickJoinButtonBehaviorExtension
// Kind: Class; super: FortMobileActionButtonBehaviorExtension
class UQuickJoinButtonBehaviorExtension
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t QuickJoinTagQuery[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UQuickJoinButtonBehaviorExtension, QuickJoinTagQuery) == 144, "Offset mismatch for UQuickJoinButtonBehaviorExtension::QuickJoinTagQuery");
