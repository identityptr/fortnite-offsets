/**
 * decamp dumper generated SDK
 * Package: /Script/SocialPosePickerUI
 */
#pragma once
#include "Basic.h"

// /Script/SocialPosePickerUI.SocialPosePicker
// Kind: Class; super: CommonActivatableWidget
class USocialPosePicker
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    void* PickerOverlay_Poses; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultEmoteCategoryTag[0x8]; // 0x04B8 (Size: 0x8, Type: StructProperty)
    TArray<void*> ExternalEmotes; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USocialPosePicker, PickerOverlay_Poses) == 1200, "Offset mismatch for USocialPosePicker::PickerOverlay_Poses");
static_assert(offsetof(USocialPosePicker, DefaultEmoteCategoryTag) == 1208, "Offset mismatch for USocialPosePicker::DefaultEmoteCategoryTag");
static_assert(offsetof(USocialPosePicker, ExternalEmotes) == 1216, "Offset mismatch for USocialPosePicker::ExternalEmotes");
