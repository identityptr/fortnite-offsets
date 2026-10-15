/**
 * decamp dumper generated SDK
 * Package: /Script/JunoGameMobileUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoGameMobileUI.FortMobileButtonBehaviorComponent_OffhandVisuals
// Kind: Class; super: FortMobileButtonBehaviorComponent_Visibility
class UFortMobileButtonBehaviorComponent_OffhandVisuals
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* CachedOffhandItem; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileButtonBehaviorComponent_OffhandVisuals, CachedOffhandItem) == 120, "Offset mismatch for UFortMobileButtonBehaviorComponent_OffhandVisuals::CachedOffhandItem");

// /Script/JunoGameMobileUI.JunoButtonBehaviorComponent_WorldSettingsIconPicker
// Kind: Class; super: FortMobileButtonBehaviorComponent_TagIconPicker
class UJunoButtonBehaviorComponent_WorldSettingsIconPicker
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> SpriteOverrides; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanOverrideCurrentInteractable; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoButtonBehaviorComponent_WorldSettingsIconPicker, SpriteOverrides) == 88, "Offset mismatch for UJunoButtonBehaviorComponent_WorldSettingsIconPicker::SpriteOverrides");
static_assert(offsetof(UJunoButtonBehaviorComponent_WorldSettingsIconPicker, bCanOverrideCurrentInteractable) == 104, "Offset mismatch for UJunoButtonBehaviorComponent_WorldSettingsIconPicker::bCanOverrideCurrentInteractable");

// /Script/JunoGameMobileUI.JunoButtonBehaviorComponent_WorldSettingsVisibility
// Kind: Class; super: FortMobileButtonBehaviorComponent_TagVisibility
class UJunoButtonBehaviorComponent_WorldSettingsVisibility
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> TagVisibilities; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoButtonBehaviorComponent_WorldSettingsVisibility, TagVisibilities) == 88, "Offset mismatch for UJunoButtonBehaviorComponent_WorldSettingsVisibility::TagVisibilities");

// /Script/JunoGameMobileUI.JunoMobileActionButtonBehavior_Interact
// Kind: Class; super: FortMobileActionButtonBehavior
class UJunoMobileActionButtonBehavior_Interact
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

static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, ActionNames) == 328, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::ActionNames");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, DefaultTexture) == 344, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::DefaultTexture");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, Sprite) == 376, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::Sprite");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, DeferredSprite) == 384, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::DeferredSprite");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, HUDLayoutToolSaveTag_Legacy) == 392, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::HUDLayoutToolSaveTag_Legacy");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, ForcedZOrder) == 416, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::ForcedZOrder");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, bIsClickthroughMandatory) == 432, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::bIsClickthroughMandatory");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, TouchButtonViewModel) == 536, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::TouchButtonViewModel");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, CachedSpriteProxy) == 544, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::CachedSpriteProxy");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, BangVisibilityRequesters) == 584, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::BangVisibilityRequesters");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, GlowVisibilityRequesters) == 600, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::GlowVisibilityRequesters");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, ContinueInjectionOnHideRequesters) == 616, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::ContinueInjectionOnHideRequesters");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, DynamicInputKey) == 648, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::DynamicInputKey");
static_assert(offsetof(UJunoMobileActionButtonBehavior_Interact, BehaviorInputKey) == 656, "Offset mismatch for UJunoMobileActionButtonBehavior_Interact::BehaviorInputKey");

// /Script/JunoGameMobileUI.JunoQuickbarMobileContainer
// Kind: Class; super: FortMobileHUDElement
class UJunoQuickbarMobileContainer
{
public:
    std::uint8_t Pad_0000[0x3E0]; // 0x0000
    void* JunoOffhandWidget; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* JunoQuickbar; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoQuickbarMobileContainer, JunoOffhandWidget) == 992, "Offset mismatch for UJunoQuickbarMobileContainer::JunoOffhandWidget");
static_assert(offsetof(UJunoQuickbarMobileContainer, JunoQuickbar) == 1000, "Offset mismatch for UJunoQuickbarMobileContainer::JunoQuickbar");
