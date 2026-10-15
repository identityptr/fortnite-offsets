/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Systems/Throbber/WBP_UIKit_Throbber_Base
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Systems/Throbber/WBP_UIKit_Throbber_Base.WBP_UIKit_Throbber_Base_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_UIKit_Throbber_Base_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* Throbber; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ThrobberSize; // 0x0318 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0319
    std::int32_t SizeSmall; // 0x031C (Size: 0x4, Type: IntProperty)
    std::int32_t SizeMedium; // 0x0320 (Size: 0x4, Type: IntProperty)
    std::int32_t SizeLarge; // 0x0324 (Size: 0x4, Type: IntProperty)
    std::uint8_t ThrobberStyle; // 0x0328 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0329
    void* MonochromaticInstance; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* CurrentMaterialInstance; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisplayBackground; // 0x0340 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, Throbber) == 784, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::Throbber");
static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, ThrobberSize) == 792, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::ThrobberSize");
static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, SizeSmall) == 796, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::SizeSmall");
static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, SizeMedium) == 800, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::SizeMedium");
static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, SizeLarge) == 804, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::SizeLarge");
static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, ThrobberStyle) == 808, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::ThrobberStyle");
static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, MonochromaticInstance) == 816, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::MonochromaticInstance");
static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, CurrentMaterialInstance) == 824, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::CurrentMaterialInstance");
static_assert(offsetof(UWBP_UIKit_Throbber_Base_C, DisplayBackground) == 832, "Offset mismatch for UWBP_UIKit_Throbber_Base_C::DisplayBackground");
