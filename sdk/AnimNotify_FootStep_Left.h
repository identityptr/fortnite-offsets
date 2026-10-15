/**
 * decamp dumper generated SDK
 * Package: /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left
 */
#pragma once
#include "Basic.h"

// /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C
// Kind: BlueprintGeneratedClass; super: AnimNotify_FootStep_C
class UAnimNotify_FootStep_Left_C
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t FootIndex; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUsePreviewSettingsLive; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x003D
    std::uint8_t PreviewSettings[0x40]; // 0x0040 (Size: 0x40, Type: StructProperty)
    void* PreviewComponent; // 0x0080 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UAnimNotify_FootStep_Left_C, FootIndex) == 56, "Offset mismatch for UAnimNotify_FootStep_Left_C::FootIndex");
static_assert(offsetof(UAnimNotify_FootStep_Left_C, bUsePreviewSettingsLive) == 60, "Offset mismatch for UAnimNotify_FootStep_Left_C::bUsePreviewSettingsLive");
static_assert(offsetof(UAnimNotify_FootStep_Left_C, PreviewSettings) == 64, "Offset mismatch for UAnimNotify_FootStep_Left_C::PreviewSettings");
static_assert(offsetof(UAnimNotify_FootStep_Left_C, PreviewComponent) == 128, "Offset mismatch for UAnimNotify_FootStep_Left_C::PreviewComponent");
