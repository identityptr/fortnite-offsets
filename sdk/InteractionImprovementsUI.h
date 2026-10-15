/**
 * decamp dumper generated SDK
 * Package: /Script/InteractionImprovementsUI
 */
#pragma once
#include "Basic.h"

// /Script/InteractionImprovementsUI.FortInteractionIndicatorCollapsedVM
// Kind: Class; super: FortPerUserViewModel
class UFortInteractionIndicatorCollapsedVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t NumInteractors; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsMultiInteractable; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x007D
    std::uint8_t ActionText[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    void* TargetActorComponent_MultiInteract; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* CurrentInteractContextInfo; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* CustomProgressContextInfo; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnCustomProgressUpdate; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReceiveInteractContextInfo; // 0x00B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortInteractionIndicatorCollapsedVM, NumInteractors) == 120, "Offset mismatch for UFortInteractionIndicatorCollapsedVM::NumInteractors");
static_assert(offsetof(UFortInteractionIndicatorCollapsedVM, IsMultiInteractable) == 124, "Offset mismatch for UFortInteractionIndicatorCollapsedVM::IsMultiInteractable");
static_assert(offsetof(UFortInteractionIndicatorCollapsedVM, ActionText) == 128, "Offset mismatch for UFortInteractionIndicatorCollapsedVM::ActionText");
static_assert(offsetof(UFortInteractionIndicatorCollapsedVM, TargetActorComponent_MultiInteract) == 144, "Offset mismatch for UFortInteractionIndicatorCollapsedVM::TargetActorComponent_MultiInteract");
static_assert(offsetof(UFortInteractionIndicatorCollapsedVM, CurrentInteractContextInfo) == 152, "Offset mismatch for UFortInteractionIndicatorCollapsedVM::CurrentInteractContextInfo");
static_assert(offsetof(UFortInteractionIndicatorCollapsedVM, CustomProgressContextInfo) == 160, "Offset mismatch for UFortInteractionIndicatorCollapsedVM::CustomProgressContextInfo");
static_assert(offsetof(UFortInteractionIndicatorCollapsedVM, OnCustomProgressUpdate) == 168, "Offset mismatch for UFortInteractionIndicatorCollapsedVM::OnCustomProgressUpdate");
static_assert(offsetof(UFortInteractionIndicatorCollapsedVM, OnReceiveInteractContextInfo) == 184, "Offset mismatch for UFortInteractionIndicatorCollapsedVM::OnReceiveInteractContextInfo");

// /Script/InteractionImprovementsUI.FortPickupInteractOverrideComponent_DefaultPickupOverride
// Kind: Class; super: FortPickupInteractOverrideComponent
class UFortPickupInteractOverrideComponent_DefaultPickupOverride
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t Priority; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* ContextOverrideWidget; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* SecondContextOverrideWidget; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bContextOverrideWidgetApplied; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveContextOverrideWidgetsImmediately; // 0x00D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPickupInteractOverrideComponent_DefaultPickupOverride, Priority) == 192, "Offset mismatch for UFortPickupInteractOverrideComponent_DefaultPickupOverride::Priority");
static_assert(offsetof(UFortPickupInteractOverrideComponent_DefaultPickupOverride, ContextOverrideWidget) == 200, "Offset mismatch for UFortPickupInteractOverrideComponent_DefaultPickupOverride::ContextOverrideWidget");
static_assert(offsetof(UFortPickupInteractOverrideComponent_DefaultPickupOverride, SecondContextOverrideWidget) == 208, "Offset mismatch for UFortPickupInteractOverrideComponent_DefaultPickupOverride::SecondContextOverrideWidget");
static_assert(offsetof(UFortPickupInteractOverrideComponent_DefaultPickupOverride, bContextOverrideWidgetApplied) == 216, "Offset mismatch for UFortPickupInteractOverrideComponent_DefaultPickupOverride::bContextOverrideWidgetApplied");
static_assert(offsetof(UFortPickupInteractOverrideComponent_DefaultPickupOverride, bRemoveContextOverrideWidgetsImmediately) == 217, "Offset mismatch for UFortPickupInteractOverrideComponent_DefaultPickupOverride::bRemoveContextOverrideWidgetsImmediately");
