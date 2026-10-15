/**
 * decamp dumper generated SDK
 * Package: /Script/STW_DynamicHUD
 */
#pragma once
#include "Basic.h"

// /Script/STW_DynamicHUD.STWWidgetSceneAndIndex
// Kind: ScriptStruct; super: none
struct FSTWWidgetSceneAndIndex
{
public:
    void* WidgetScene; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WidgetAllowedIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDontDetermineCameraCursorMode; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSTWWidgetSceneAndIndex, WidgetScene) == 0, "Offset mismatch for FSTWWidgetSceneAndIndex::WidgetScene");
static_assert(offsetof(FSTWWidgetSceneAndIndex, WidgetAllowedIndex) == 8, "Offset mismatch for FSTWWidgetSceneAndIndex::WidgetAllowedIndex");
static_assert(offsetof(FSTWWidgetSceneAndIndex, bDontDetermineCameraCursorMode) == 12, "Offset mismatch for FSTWWidgetSceneAndIndex::bDontDetermineCameraCursorMode");

// /Script/STW_DynamicHUD.DynamicSTWHUDDirector
// Kind: Class; super: DynamicUIDirectorBase
class UDynamicSTWHUDDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    FMulticastInlineDelegate OnMenuSceneOpenedDelegate; // 0x02A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllMenuScenesClosedDelegate; // 0x02B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMenuSceneClosedDelegate; // 0x02C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t HideWithMenuTags[0x1]; // 0x02D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDynamicSTWHUDDirector, OnMenuSceneOpenedDelegate) == 672, "Offset mismatch for UDynamicSTWHUDDirector::OnMenuSceneOpenedDelegate");
static_assert(offsetof(UDynamicSTWHUDDirector, OnAllMenuScenesClosedDelegate) == 688, "Offset mismatch for UDynamicSTWHUDDirector::OnAllMenuScenesClosedDelegate");
static_assert(offsetof(UDynamicSTWHUDDirector, OnMenuSceneClosedDelegate) == 704, "Offset mismatch for UDynamicSTWHUDDirector::OnMenuSceneClosedDelegate");
static_assert(offsetof(UDynamicSTWHUDDirector, HideWithMenuTags) == 720, "Offset mismatch for UDynamicSTWHUDDirector::HideWithMenuTags");

// /Script/STW_DynamicHUD.STWDynamicUIDirectorComponent
// Kind: Class; super: GameFrameworkComponent
class USTWDynamicUIDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> DefaultScenes; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USTWDynamicUIDirectorComponent, DefaultScenes) == 192, "Offset mismatch for USTWDynamicUIDirectorComponent::DefaultScenes");
