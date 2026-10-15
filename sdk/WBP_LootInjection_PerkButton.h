/**
 * decamp dumper generated SDK
 * Package: /LootInjectionCommon/Widgets/WBP_LootInjection_PerkButton
 */
#pragma once
#include "Basic.h"

// /LootInjectionCommon/Widgets/WBP_LootInjection_PerkButton.WBP_LootInjection_PerkButton_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonButtonBase
class UWBP_LootInjection_PerkButton_C
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x18]; // 0x15A0 (Size: 0x18, Type: StructProperty)
    void* Image_UpgradeBar; // 0x15B8 (Size: 0x8, Type: ObjectProperty)
    void* Image_Shine_MAXED; // 0x15C0 (Size: 0x8, Type: ObjectProperty)
    void* Image_Shine_MAXED_2; // 0x15C8 (Size: 0x8, Type: ObjectProperty)
    void* Image_RightParticle; // 0x15D0 (Size: 0x8, Type: ObjectProperty)
    void* Image_LootContainer_MAXED; // 0x15D8 (Size: 0x8, Type: ObjectProperty)
    void* Image_LootContainer; // 0x15E0 (Size: 0x8, Type: ObjectProperty)
    void* Image_LeftParticle; // 0x15E8 (Size: 0x8, Type: ObjectProperty)
    void* Image_Icon; // 0x15F0 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_Pips_MAXED; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    void* ButtonHighlight; // 0x1600 (Size: 0x8, Type: ObjectProperty)
    void* ButtonUpgrade; // 0x1608 (Size: 0x8, Type: ObjectProperty)
    void* ButtonUpgraded; // 0x1610 (Size: 0x8, Type: ObjectProperty)
    void* ButtonMaxed; // 0x1618 (Size: 0x8, Type: ObjectProperty)
    void* LootInjectionOptionVM; // 0x1620 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemName; // 0x1628 (Size: 0x8, Type: ObjectProperty)
    void* Text_Description; // 0x1630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1638
    std::int32_t CurrentPips; // 0x163C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPips; // 0x1640 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UWBP_LootInjection_PerkButton_C, UberGraphFrame) == 5536, "Offset mismatch for UWBP_LootInjection_PerkButton_C::UberGraphFrame");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Image_UpgradeBar) == 5560, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Image_UpgradeBar");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Image_Shine_MAXED) == 5568, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Image_Shine_MAXED");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Image_Shine_MAXED_2) == 5576, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Image_Shine_MAXED_2");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Image_RightParticle) == 5584, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Image_RightParticle");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Image_LootContainer_MAXED) == 5592, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Image_LootContainer_MAXED");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Image_LootContainer) == 5600, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Image_LootContainer");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Image_LeftParticle) == 5608, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Image_LeftParticle");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Image_Icon) == 5616, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Image_Icon");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, HorizontalBox_Pips_MAXED) == 5624, "Offset mismatch for UWBP_LootInjection_PerkButton_C::HorizontalBox_Pips_MAXED");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, ButtonHighlight) == 5632, "Offset mismatch for UWBP_LootInjection_PerkButton_C::ButtonHighlight");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, ButtonUpgrade) == 5640, "Offset mismatch for UWBP_LootInjection_PerkButton_C::ButtonUpgrade");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, ButtonUpgraded) == 5648, "Offset mismatch for UWBP_LootInjection_PerkButton_C::ButtonUpgraded");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, ButtonMaxed) == 5656, "Offset mismatch for UWBP_LootInjection_PerkButton_C::ButtonMaxed");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, LootInjectionOptionVM) == 5664, "Offset mismatch for UWBP_LootInjection_PerkButton_C::LootInjectionOptionVM");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Text_ItemName) == 5672, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Text_ItemName");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, Text_Description) == 5680, "Offset mismatch for UWBP_LootInjection_PerkButton_C::Text_Description");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, CurrentPips) == 5692, "Offset mismatch for UWBP_LootInjection_PerkButton_C::CurrentPips");
static_assert(offsetof(UWBP_LootInjection_PerkButton_C, MaxPips) == 5696, "Offset mismatch for UWBP_LootInjection_PerkButton_C::MaxPips");
