/**
 * decamp dumper generated SDK
 * Package: /Squeegee/Widgets/WBP_ContentGate_VideoBumper
 */
#pragma once
#include "Basic.h"

// /Squeegee/Widgets/WBP_ContentGate_VideoBumper.WBP_ContentGate_VideoBumper_C
// Kind: WidgetBlueprintGeneratedClass; super: FortSqueegeeWidget
class UWBP_ContentGate_VideoBumper_C
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0350 (Size: 0x8, Type: StructProperty)
    void* Text_Rating; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Text_InteractionDescriptor; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* Text_ContentDescriptor; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Image_RatingIcon; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* Image_Divider; // 0x0378 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_ContentGate_VideoBumper_C, UberGraphFrame) == 848, "Offset mismatch for UWBP_ContentGate_VideoBumper_C::UberGraphFrame");
static_assert(offsetof(UWBP_ContentGate_VideoBumper_C, Text_Rating) == 856, "Offset mismatch for UWBP_ContentGate_VideoBumper_C::Text_Rating");
static_assert(offsetof(UWBP_ContentGate_VideoBumper_C, Text_InteractionDescriptor) == 864, "Offset mismatch for UWBP_ContentGate_VideoBumper_C::Text_InteractionDescriptor");
static_assert(offsetof(UWBP_ContentGate_VideoBumper_C, Text_ContentDescriptor) == 872, "Offset mismatch for UWBP_ContentGate_VideoBumper_C::Text_ContentDescriptor");
static_assert(offsetof(UWBP_ContentGate_VideoBumper_C, Image_RatingIcon) == 880, "Offset mismatch for UWBP_ContentGate_VideoBumper_C::Image_RatingIcon");
static_assert(offsetof(UWBP_ContentGate_VideoBumper_C, Image_Divider) == 888, "Offset mismatch for UWBP_ContentGate_VideoBumper_C::Image_Divider");
