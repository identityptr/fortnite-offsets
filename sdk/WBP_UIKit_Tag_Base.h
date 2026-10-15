/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Systems/Tag/WBP_UIKit_Tag_Base
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Systems/Tag/WBP_UIKit_Tag_Base.WBP_UIKit_Tag_Base_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_UIKit_Tag_Base_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0308 (Size: 0x10, Type: StructProperty)
    void* Text_Label; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* TagContainer; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* Root; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0330
    void* Background; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0340
    std::uint8_t TagType; // 0x0341 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0342
    std::uint8_t TagText[0x10]; // 0x0348 (Size: 0x10, Type: TextProperty)
    std::uint8_t TagColor[0x40]; // 0x0358 (Size: 0x40, Type: StructProperty)
    std::uint8_t LabelPadding[0x10]; // 0x0398 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundColor[0x10]; // 0x03A8 (Size: 0x10, Type: StructProperty)
    void* BackgroundMaterial; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    FText LabelText; // 0x03C0 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0004[0x2D8]; // 0x03D8
    std::uint8_t StyleText[0x10]; // 0x06B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t UseIcon; // 0x06C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x06C1
    void* IconWidget; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x06D0
    void* IconMaterial; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IconSize[0x20]; // 0x06E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t IconColor[0x10]; // 0x0700 (Size: 0x10, Type: StructProperty)
    std::uint8_t IconPadding[0x1]; // 0x0710 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_UIKit_Tag_Base_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_UIKit_Tag_Base_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, Text_Label) == 792, "Offset mismatch for UWBP_UIKit_Tag_Base_C::Text_Label");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, TagContainer) == 800, "Offset mismatch for UWBP_UIKit_Tag_Base_C::TagContainer");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, Root) == 808, "Offset mismatch for UWBP_UIKit_Tag_Base_C::Root");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, Background) == 824, "Offset mismatch for UWBP_UIKit_Tag_Base_C::Background");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, TagType) == 833, "Offset mismatch for UWBP_UIKit_Tag_Base_C::TagType");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, TagText) == 840, "Offset mismatch for UWBP_UIKit_Tag_Base_C::TagText");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, TagColor) == 856, "Offset mismatch for UWBP_UIKit_Tag_Base_C::TagColor");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, LabelPadding) == 920, "Offset mismatch for UWBP_UIKit_Tag_Base_C::LabelPadding");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, BackgroundColor) == 936, "Offset mismatch for UWBP_UIKit_Tag_Base_C::BackgroundColor");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, BackgroundMaterial) == 952, "Offset mismatch for UWBP_UIKit_Tag_Base_C::BackgroundMaterial");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, LabelText) == 960, "Offset mismatch for UWBP_UIKit_Tag_Base_C::LabelText");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, StyleText) == 1712, "Offset mismatch for UWBP_UIKit_Tag_Base_C::StyleText");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, UseIcon) == 1728, "Offset mismatch for UWBP_UIKit_Tag_Base_C::UseIcon");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, IconWidget) == 1736, "Offset mismatch for UWBP_UIKit_Tag_Base_C::IconWidget");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, IconMaterial) == 1752, "Offset mismatch for UWBP_UIKit_Tag_Base_C::IconMaterial");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, IconSize) == 1760, "Offset mismatch for UWBP_UIKit_Tag_Base_C::IconSize");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, IconColor) == 1792, "Offset mismatch for UWBP_UIKit_Tag_Base_C::IconColor");
static_assert(offsetof(UWBP_UIKit_Tag_Base_C, IconPadding) == 1808, "Offset mismatch for UWBP_UIKit_Tag_Base_C::IconPadding");
