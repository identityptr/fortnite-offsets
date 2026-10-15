/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_ModalDialogRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CRD_ModalDialogRuntime.ModalDialogVariant
// Kind: Class; super: CommonActivatableWidget
class UModalDialogVariant
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* BoundAnim_Open; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* BoundAnim_Response; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnResponseAnimationFinished; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UModalDialogVariant, BoundAnim_Open) == 1184, "Offset mismatch for UModalDialogVariant::BoundAnim_Open");
static_assert(offsetof(UModalDialogVariant, BoundAnim_Response) == 1192, "Offset mismatch for UModalDialogVariant::BoundAnim_Response");
static_assert(offsetof(UModalDialogVariant, OnResponseAnimationFinished) == 1200, "Offset mismatch for UModalDialogVariant::OnResponseAnimationFinished");
