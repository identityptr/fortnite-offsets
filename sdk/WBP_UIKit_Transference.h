/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Systems/Items/WBP_UIKit_Transference
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Systems/Items/WBP_UIKit_Transference.WBP_UIKit_Transference_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_UIKit_Transference_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* Image; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    double MobileSizeMultiplier; // 0x0318 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Size[0x1]; // 0x0320 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_UIKit_Transference_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_UIKit_Transference_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_Transference_C, Image) == 784, "Offset mismatch for UWBP_UIKit_Transference_C::Image");
static_assert(offsetof(UWBP_UIKit_Transference_C, MobileSizeMultiplier) == 792, "Offset mismatch for UWBP_UIKit_Transference_C::MobileSizeMultiplier");
static_assert(offsetof(UWBP_UIKit_Transference_C, Size) == 800, "Offset mismatch for UWBP_UIKit_Transference_C::Size");
