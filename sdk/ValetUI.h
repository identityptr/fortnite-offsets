/**
 * decamp dumper generated SDK
 * Package: /Script/ValetUI
 */
#pragma once
#include "Basic.h"

// /Script/ValetUI.FortMobileActionButtonBehavior_ValetBoost
// Kind: Class; super: FortMobileActionButtonBehavior
class UFortMobileActionButtonBehavior_ValetBoost
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    TArray<void*> ActionNames; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultTexture[0x20]; // 0x0158 (Size: 0x20, Type: SoftObjectProperty)
    void* Sprite; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> DeferredSprite; // 0x0180 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t HUDLayoutToolSaveTag_Legacy[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::int32_t ForcedZOrder; // 0x01A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x01A4
    std::uint8_t bIsClickthroughMandatory; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x67]; // 0x01B1
    void* TouchButtonViewModel; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    void* CachedSpriteProxy; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x20]; // 0x0228
    std::uint8_t BangVisibilityRequesters[0x10]; // 0x0248 (Size: 0x10, Type: SetProperty)
    std::uint8_t GlowVisibilityRequesters[0x10]; // 0x0258 (Size: 0x10, Type: SetProperty)
    std::uint8_t ContinueInjectionOnHideRequesters[0x20]; // 0x0268 (Size: 0x20, Type: SetProperty)
    void* DynamicInputKey; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* BehaviorInputKey; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, ActionNames) == 328, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::ActionNames");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, DefaultTexture) == 344, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::DefaultTexture");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, Sprite) == 376, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::Sprite");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, DeferredSprite) == 384, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::DeferredSprite");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, HUDLayoutToolSaveTag_Legacy) == 392, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::HUDLayoutToolSaveTag_Legacy");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, ForcedZOrder) == 416, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::ForcedZOrder");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, bIsClickthroughMandatory) == 432, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::bIsClickthroughMandatory");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, TouchButtonViewModel) == 536, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::TouchButtonViewModel");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, CachedSpriteProxy) == 544, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::CachedSpriteProxy");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, BangVisibilityRequesters) == 584, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::BangVisibilityRequesters");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, GlowVisibilityRequesters) == 600, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::GlowVisibilityRequesters");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, ContinueInjectionOnHideRequesters) == 616, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::ContinueInjectionOnHideRequesters");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, DynamicInputKey) == 648, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::DynamicInputKey");
static_assert(offsetof(UFortMobileActionButtonBehavior_ValetBoost, BehaviorInputKey) == 656, "Offset mismatch for UFortMobileActionButtonBehavior_ValetBoost::BehaviorInputKey");

// /Script/ValetUI.FortVehicleInteractionWidgetHolder
// Kind: Class; super: FortInteractContextInfoWidget
class UFortVehicleInteractionWidgetHolder
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* VerticalBox_WidgetHolder; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortVehicleInteractionWidgetHolder, VerticalBox_WidgetHolder) == 776, "Offset mismatch for UFortVehicleInteractionWidgetHolder::VerticalBox_WidgetHolder");
