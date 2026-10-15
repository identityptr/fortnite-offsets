/**
 * decamp dumper generated SDK
 * Package: /Script/DynamicBacchusHUD
 */
#pragma once
#include "Basic.h"

// /Script/DynamicBacchusHUD.WidgetPersistSpecs
// Kind: ScriptStruct; super: none
struct FWidgetPersistSpecs
{
public:
    TSoftClassPtr<void> WidgetToCache; // 0x0000 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FWidgetPersistSpecs, WidgetToCache) == 0, "Offset mismatch for FWidgetPersistSpecs::WidgetToCache");

// /Script/DynamicBacchusHUD.AthenaTouchHUDDirectorComponent
// Kind: Class; super: DynamicBacchusHUDDirectorComponent
class UAthenaTouchHUDDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPlayerPawnRevived; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerPawnRespawned; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAthenaTouchHUDDirectorComponent, OnPlayerPawnRevived) == 192, "Offset mismatch for UAthenaTouchHUDDirectorComponent::OnPlayerPawnRevived");
static_assert(offsetof(UAthenaTouchHUDDirectorComponent, OnPlayerPawnRespawned) == 208, "Offset mismatch for UAthenaTouchHUDDirectorComponent::OnPlayerPawnRespawned");

// /Script/DynamicBacchusHUD.DynamicBacchusHUDDirector
// Kind: Class; super: DynamicUIDirectorBase
class UDynamicBacchusHUDDirector
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    std::uint8_t WidgetTagsToObserveFilter[0x20]; // 0x02A8 (Size: 0x20, Type: StructProperty)
    void* VirtualPointerHideBacchusScene; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* HUDSwitchExcludeConditions; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    void* BaseHUDWidgetRegistry; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ScenesPool; // 0x02E0 (Size: 0x10, Type: MapProperty)
    void* HUDWidgetRegistry; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x40]; // 0x02F8
    TArray<void*> UnallowedHUDWidgetTagQueries; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0348
    TArray<void*> PersistentWidgetSpecs; // 0x0368 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PersistentContextTag[0x18]; // 0x0378 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentContextTags[0x30]; // 0x0390 (Size: 0x30, Type: StructProperty)
    std::uint8_t LayoutProfile[0x38]; // 0x03C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t UnallowedHUDContextTags[0x20]; // 0x03F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t ForcedPresetName[0x10]; // 0x0418 (Size: 0x10, Type: TextProperty)
    std::uint8_t ForcedProfile[0x4]; // 0x0428 (Size: 0x4, Type: StructProperty)
    std::uint8_t ForcedProfileContainer[0x1]; // 0x042C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDynamicBacchusHUDDirector, WidgetTagsToObserveFilter) == 680, "Offset mismatch for UDynamicBacchusHUDDirector::WidgetTagsToObserveFilter");
static_assert(offsetof(UDynamicBacchusHUDDirector, VirtualPointerHideBacchusScene) == 712, "Offset mismatch for UDynamicBacchusHUDDirector::VirtualPointerHideBacchusScene");
static_assert(offsetof(UDynamicBacchusHUDDirector, HUDSwitchExcludeConditions) == 720, "Offset mismatch for UDynamicBacchusHUDDirector::HUDSwitchExcludeConditions");
static_assert(offsetof(UDynamicBacchusHUDDirector, BaseHUDWidgetRegistry) == 728, "Offset mismatch for UDynamicBacchusHUDDirector::BaseHUDWidgetRegistry");
static_assert(offsetof(UDynamicBacchusHUDDirector, ScenesPool) == 736, "Offset mismatch for UDynamicBacchusHUDDirector::ScenesPool");
static_assert(offsetof(UDynamicBacchusHUDDirector, HUDWidgetRegistry) == 752, "Offset mismatch for UDynamicBacchusHUDDirector::HUDWidgetRegistry");
static_assert(offsetof(UDynamicBacchusHUDDirector, UnallowedHUDWidgetTagQueries) == 824, "Offset mismatch for UDynamicBacchusHUDDirector::UnallowedHUDWidgetTagQueries");
static_assert(offsetof(UDynamicBacchusHUDDirector, PersistentWidgetSpecs) == 872, "Offset mismatch for UDynamicBacchusHUDDirector::PersistentWidgetSpecs");
static_assert(offsetof(UDynamicBacchusHUDDirector, PersistentContextTag) == 888, "Offset mismatch for UDynamicBacchusHUDDirector::PersistentContextTag");
static_assert(offsetof(UDynamicBacchusHUDDirector, CurrentContextTags) == 912, "Offset mismatch for UDynamicBacchusHUDDirector::CurrentContextTags");
static_assert(offsetof(UDynamicBacchusHUDDirector, LayoutProfile) == 960, "Offset mismatch for UDynamicBacchusHUDDirector::LayoutProfile");
static_assert(offsetof(UDynamicBacchusHUDDirector, UnallowedHUDContextTags) == 1016, "Offset mismatch for UDynamicBacchusHUDDirector::UnallowedHUDContextTags");
static_assert(offsetof(UDynamicBacchusHUDDirector, ForcedPresetName) == 1048, "Offset mismatch for UDynamicBacchusHUDDirector::ForcedPresetName");
static_assert(offsetof(UDynamicBacchusHUDDirector, ForcedProfile) == 1064, "Offset mismatch for UDynamicBacchusHUDDirector::ForcedProfile");
static_assert(offsetof(UDynamicBacchusHUDDirector, ForcedProfileContainer) == 1068, "Offset mismatch for UDynamicBacchusHUDDirector::ForcedProfileContainer");

// /Script/DynamicBacchusHUD.DynamicBacchusHUDDirectorComponent
// Kind: Class; super: ActorComponent
class UDynamicBacchusHUDDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPlayerPawnRevived; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerPawnRespawned; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDynamicBacchusHUDDirectorComponent, OnPlayerPawnRevived) == 192, "Offset mismatch for UDynamicBacchusHUDDirectorComponent::OnPlayerPawnRevived");
static_assert(offsetof(UDynamicBacchusHUDDirectorComponent, OnPlayerPawnRespawned) == 208, "Offset mismatch for UDynamicBacchusHUDDirectorComponent::OnPlayerPawnRespawned");

// /Script/DynamicBacchusHUD.DynamicUIMobileScene
// Kind: Class; super: DynamicUIScene
class UDynamicUIMobileScene
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint16_t SceneLayerID; // 0x0028 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    TArray<void*> Allowed; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Unallow; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Adjust; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Preload; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicUIMobileScene, SceneLayerID) == 40, "Offset mismatch for UDynamicUIMobileScene::SceneLayerID");
static_assert(offsetof(UDynamicUIMobileScene, Allowed) == 48, "Offset mismatch for UDynamicUIMobileScene::Allowed");
static_assert(offsetof(UDynamicUIMobileScene, Unallow) == 64, "Offset mismatch for UDynamicUIMobileScene::Unallow");
static_assert(offsetof(UDynamicUIMobileScene, Adjust) == 80, "Offset mismatch for UDynamicUIMobileScene::Adjust");
static_assert(offsetof(UDynamicUIMobileScene, Preload) == 96, "Offset mismatch for UDynamicUIMobileScene::Preload");

// /Script/DynamicBacchusHUD.UnallowRedirectInterface
// Kind: Class; super: Interface
class UUnallowRedirectInterface
{
public:
    std::uint8_t Opaque[1];
};
