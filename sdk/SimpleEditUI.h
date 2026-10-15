/**
 * decamp dumper generated SDK
 * Package: /Script/SimpleEditUI
 */
#pragma once
#include "Basic.h"

// /Script/SimpleEditUI.FortMobileActionButtonBehavior_SimpleEdit
// Kind: Class; super: FortMobileActionButtonBehavior
class UFortMobileActionButtonBehavior_SimpleEdit
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

static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, ActionNames) == 328, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::ActionNames");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, DefaultTexture) == 344, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::DefaultTexture");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, Sprite) == 376, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::Sprite");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, DeferredSprite) == 384, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::DeferredSprite");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, HUDLayoutToolSaveTag_Legacy) == 392, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::HUDLayoutToolSaveTag_Legacy");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, ForcedZOrder) == 416, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::ForcedZOrder");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, bIsClickthroughMandatory) == 432, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::bIsClickthroughMandatory");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, TouchButtonViewModel) == 536, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::TouchButtonViewModel");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, CachedSpriteProxy) == 544, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::CachedSpriteProxy");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, BangVisibilityRequesters) == 584, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::BangVisibilityRequesters");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, GlowVisibilityRequesters) == 600, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::GlowVisibilityRequesters");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, ContinueInjectionOnHideRequesters) == 616, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::ContinueInjectionOnHideRequesters");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, DynamicInputKey) == 648, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::DynamicInputKey");
static_assert(offsetof(UFortMobileActionButtonBehavior_SimpleEdit, BehaviorInputKey) == 656, "Offset mismatch for UFortMobileActionButtonBehavior_SimpleEdit::BehaviorInputKey");

// /Script/SimpleEditUI.SimpleEditUI_CheatManager
// Kind: Class; super: ChildCheatManager
class USimpleEditUI_CheatManager
{
public:
    std::uint8_t Opaque[1];
};
