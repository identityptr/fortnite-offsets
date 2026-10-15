/**
 * decamp dumper generated SDK
 * Package: /Script/VerseFortniteUIWidget
 */
#pragma once
#include "Basic.h"

// /Script/VerseFortniteUIWidget.FortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility
// Kind: Class; super: FortMobileButtonBehaviorComponent_Visibility
class UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* InputMapping; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SubscribedVisibility; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UnsubscribedVisibility; // 0x0061 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseInheritedVisibilityWhenUnsubscribed; // 0x0062 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0063
    std::uint8_t InstigatorTagQueryAllowingVisibilityWithoutInputMapping[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility, InputMapping) == 88, "Offset mismatch for UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility::InputMapping");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility, SubscribedVisibility) == 96, "Offset mismatch for UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility::SubscribedVisibility");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility, UnsubscribedVisibility) == 97, "Offset mismatch for UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility::UnsubscribedVisibility");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility, bUseInheritedVisibilityWhenUnsubscribed) == 98, "Offset mismatch for UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility::bUseInheritedVisibilityWhenUnsubscribed");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility, InstigatorTagQueryAllowingVisibilityWithoutInputMapping) == 104, "Offset mismatch for UFortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility::InstigatorTagQueryAllowingVisibilityWithoutInputMapping");
