/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Sidebar/Tags/SidebarSocialTagWidget
 */
#pragma once
#include "Basic.h"

// /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C
// Kind: WidgetBlueprintGeneratedClass; super: SocialTagWidget
class USidebarSocialTagWidget_C
{
public:
    std::uint8_t Pad_0000[0x1600]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1600 (Size: 0x8, Type: StructProperty)
    void* Text_TagName; // 0x1608 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_SelectedState; // 0x1610 (Size: 0x8, Type: ObjectProperty)
    void* Spacer_TagCategoryIcon; // 0x1618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x1620
    void* ScaleBox_TagCategoryIcon; // 0x1628 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x1630
    void* StateChange; // 0x1648 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x14]; // 0x1650
    std::uint8_t Name_OuterColor[0x4]; // 0x1664 (Size: 0x4, Type: NameProperty)
    FName Name_TagOpacity; // 0x1668 (Size: 0x8, Type: NameProperty)
    FString TagCategory_Disabled; // 0x1670 (Size: 0x10, Type: StrProperty)
    std::uint8_t StateChangeLerpTimerHandle[0x8]; // 0x1680 (Size: 0x8, Type: StructProperty)
    double StateChangeLerpAlpha; // 0x1688 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TagCategoryStructureReference[0xE0]; // 0x1690 (Size: 0xE0, Type: StructProperty)
    double StateChangeLerpTimeStep; // 0x1770 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(USidebarSocialTagWidget_C, UberGraphFrame) == 5632, "Offset mismatch for USidebarSocialTagWidget_C::UberGraphFrame");
static_assert(offsetof(USidebarSocialTagWidget_C, Text_TagName) == 5640, "Offset mismatch for USidebarSocialTagWidget_C::Text_TagName");
static_assert(offsetof(USidebarSocialTagWidget_C, Switcher_SelectedState) == 5648, "Offset mismatch for USidebarSocialTagWidget_C::Switcher_SelectedState");
static_assert(offsetof(USidebarSocialTagWidget_C, Spacer_TagCategoryIcon) == 5656, "Offset mismatch for USidebarSocialTagWidget_C::Spacer_TagCategoryIcon");
static_assert(offsetof(USidebarSocialTagWidget_C, ScaleBox_TagCategoryIcon) == 5672, "Offset mismatch for USidebarSocialTagWidget_C::ScaleBox_TagCategoryIcon");
static_assert(offsetof(USidebarSocialTagWidget_C, StateChange) == 5704, "Offset mismatch for USidebarSocialTagWidget_C::StateChange");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_OuterColor) == 5732, "Offset mismatch for USidebarSocialTagWidget_C::Name_OuterColor");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_TagOpacity) == 5736, "Offset mismatch for USidebarSocialTagWidget_C::Name_TagOpacity");
static_assert(offsetof(USidebarSocialTagWidget_C, TagCategory_Disabled) == 5744, "Offset mismatch for USidebarSocialTagWidget_C::TagCategory_Disabled");
static_assert(offsetof(USidebarSocialTagWidget_C, StateChangeLerpTimerHandle) == 5760, "Offset mismatch for USidebarSocialTagWidget_C::StateChangeLerpTimerHandle");
static_assert(offsetof(USidebarSocialTagWidget_C, StateChangeLerpAlpha) == 5768, "Offset mismatch for USidebarSocialTagWidget_C::StateChangeLerpAlpha");
static_assert(offsetof(USidebarSocialTagWidget_C, TagCategoryStructureReference) == 5776, "Offset mismatch for USidebarSocialTagWidget_C::TagCategoryStructureReference");
static_assert(offsetof(USidebarSocialTagWidget_C, StateChangeLerpTimeStep) == 6000, "Offset mismatch for USidebarSocialTagWidget_C::StateChangeLerpTimeStep");
