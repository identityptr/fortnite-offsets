/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_HUDController
 */
#pragma once
#include "Basic.h"

// /Script/CRD_HUDController.CustomHUDLayoutComponent
// Kind: Class; super: ActorComponent
class UCustomHUDLayoutComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DynamicUISceneLayerID; // 0x00C0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x4F]; // 0x00C1
    std::uint8_t LayoutChangeListenerHandle[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    void* CachedScene; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomHUDLayoutComponent, DynamicUISceneLayerID) == 192, "Offset mismatch for UCustomHUDLayoutComponent::DynamicUISceneLayerID");
static_assert(offsetof(UCustomHUDLayoutComponent, LayoutChangeListenerHandle) == 272, "Offset mismatch for UCustomHUDLayoutComponent::LayoutChangeListenerHandle");
static_assert(offsetof(UCustomHUDLayoutComponent, CachedScene) == 304, "Offset mismatch for UCustomHUDLayoutComponent::CachedScene");

// /Script/CRD_HUDController.DeveloperLayoutButtonProxy
// Kind: Class; super: Widget
class UDeveloperLayoutButtonProxy
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t Action; // 0x0168 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHideFromLayout; // 0x0169 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideIcon; // 0x016A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x016B
    std::uint8_t IconBrush[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t bApplyCanvasTransform; // 0x0220 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xF]; // 0x0221
    std::uint8_t BackgroundBrush[0x1]; // 0x0230 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDeveloperLayoutButtonProxy, Action) == 360, "Offset mismatch for UDeveloperLayoutButtonProxy::Action");
static_assert(offsetof(UDeveloperLayoutButtonProxy, bHideFromLayout) == 361, "Offset mismatch for UDeveloperLayoutButtonProxy::bHideFromLayout");
static_assert(offsetof(UDeveloperLayoutButtonProxy, bOverrideIcon) == 362, "Offset mismatch for UDeveloperLayoutButtonProxy::bOverrideIcon");
static_assert(offsetof(UDeveloperLayoutButtonProxy, IconBrush) == 368, "Offset mismatch for UDeveloperLayoutButtonProxy::IconBrush");
static_assert(offsetof(UDeveloperLayoutButtonProxy, bApplyCanvasTransform) == 544, "Offset mismatch for UDeveloperLayoutButtonProxy::bApplyCanvasTransform");
static_assert(offsetof(UDeveloperLayoutButtonProxy, BackgroundBrush) == 560, "Offset mismatch for UDeveloperLayoutButtonProxy::BackgroundBrush");
