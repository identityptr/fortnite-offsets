/**
 * decamp dumper generated SDK
 * Package: /Squeegee/Widgets/WBP_ContentGate_RatingTag
 */
#pragma once
#include "Basic.h"

// /Squeegee/Widgets/WBP_ContentGate_RatingTag.WBP_ContentGate_RatingTag_C
// Kind: WidgetBlueprintGeneratedClass; super: FortSqueegeeWidget
class UWBP_ContentGate_RatingTag_C
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0350 (Size: 0x8, Type: StructProperty)
    void* WBP_UIKit_Tag; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    float InHeightOverride; // 0x0360 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UWBP_ContentGate_RatingTag_C, UberGraphFrame) == 848, "Offset mismatch for UWBP_ContentGate_RatingTag_C::UberGraphFrame");
static_assert(offsetof(UWBP_ContentGate_RatingTag_C, WBP_UIKit_Tag) == 856, "Offset mismatch for UWBP_ContentGate_RatingTag_C::WBP_UIKit_Tag");
static_assert(offsetof(UWBP_ContentGate_RatingTag_C, InHeightOverride) == 864, "Offset mismatch for UWBP_ContentGate_RatingTag_C::InHeightOverride");
