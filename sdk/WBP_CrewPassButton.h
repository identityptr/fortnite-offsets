/**
 * decamp dumper generated SDK
 * Package: /SeasonPassHub/Widgets/Reboot/WBP_CrewPassButton
 */
#pragma once
#include "Basic.h"

// /SeasonPassHub/Widgets/Reboot/WBP_CrewPassButton.WBP_CrewPassButton_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonActivatableWidget
class UWBP_CrewPassButton_C
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x04A0 (Size: 0x8, Type: StructProperty)
    void* Text_Subscription; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Text_EndDate; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Text_ComingSoonDate; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x04C0
    void* Rewards; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* ProgressVisibilitySwitcher; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* ProgressTextX; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* ProgressTextOf; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* ProgressHorizontalBox; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* ProgressBar; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* PassName; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* Highlight_ProgressComplete; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* EpicCMSImage; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* Divider; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* DateSwitcher; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Date_Spacer_Collapses; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* Content; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* Button_Hitbox; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* Block_Outline; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* Background; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassVM; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* CrewBenefitVM; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassSystemVM; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassCategoryVM; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassSelectionVM; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TotalRewardsCount; // 0x0578 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x057C
    FMulticastInlineDelegate CrewPassButtonClicked; // 0x0580 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0590
    std::int32_t OwnedRewardsCount; // 0x0594 (Size: 0x4, Type: IntProperty)
    std::uint8_t ProgressionColor[0x10]; // 0x0598 (Size: 0x10, Type: StructProperty)
    std::uint8_t CompletionColor[0x10]; // 0x05A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t FoundPassVM; // 0x05B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x05B9
    void* PressedSound; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* HoveredSound; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate CrewPassButtonSelected; // 0x05D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t IsCrewTile; // 0x05E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsFocused; // 0x05E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x05E2
    std::int32_t Index; // 0x05E4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0006[0x1]; // 0x05E8
    std::uint8_t bIsCrewStyles; // 0x05E9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_CrewPassButton_C, UberGraphFrame) == 1184, "Offset mismatch for UWBP_CrewPassButton_C::UberGraphFrame");
static_assert(offsetof(UWBP_CrewPassButton_C, Text_Subscription) == 1192, "Offset mismatch for UWBP_CrewPassButton_C::Text_Subscription");
static_assert(offsetof(UWBP_CrewPassButton_C, Text_EndDate) == 1200, "Offset mismatch for UWBP_CrewPassButton_C::Text_EndDate");
static_assert(offsetof(UWBP_CrewPassButton_C, Text_ComingSoonDate) == 1208, "Offset mismatch for UWBP_CrewPassButton_C::Text_ComingSoonDate");
static_assert(offsetof(UWBP_CrewPassButton_C, Rewards) == 1224, "Offset mismatch for UWBP_CrewPassButton_C::Rewards");
static_assert(offsetof(UWBP_CrewPassButton_C, ProgressVisibilitySwitcher) == 1232, "Offset mismatch for UWBP_CrewPassButton_C::ProgressVisibilitySwitcher");
static_assert(offsetof(UWBP_CrewPassButton_C, ProgressTextX) == 1240, "Offset mismatch for UWBP_CrewPassButton_C::ProgressTextX");
static_assert(offsetof(UWBP_CrewPassButton_C, ProgressTextOf) == 1248, "Offset mismatch for UWBP_CrewPassButton_C::ProgressTextOf");
static_assert(offsetof(UWBP_CrewPassButton_C, ProgressHorizontalBox) == 1256, "Offset mismatch for UWBP_CrewPassButton_C::ProgressHorizontalBox");
static_assert(offsetof(UWBP_CrewPassButton_C, ProgressBar) == 1264, "Offset mismatch for UWBP_CrewPassButton_C::ProgressBar");
static_assert(offsetof(UWBP_CrewPassButton_C, PassName) == 1272, "Offset mismatch for UWBP_CrewPassButton_C::PassName");
static_assert(offsetof(UWBP_CrewPassButton_C, HorizontalBox) == 1280, "Offset mismatch for UWBP_CrewPassButton_C::HorizontalBox");
static_assert(offsetof(UWBP_CrewPassButton_C, Highlight_ProgressComplete) == 1288, "Offset mismatch for UWBP_CrewPassButton_C::Highlight_ProgressComplete");
static_assert(offsetof(UWBP_CrewPassButton_C, EpicCMSImage) == 1296, "Offset mismatch for UWBP_CrewPassButton_C::EpicCMSImage");
static_assert(offsetof(UWBP_CrewPassButton_C, Divider) == 1304, "Offset mismatch for UWBP_CrewPassButton_C::Divider");
static_assert(offsetof(UWBP_CrewPassButton_C, DateSwitcher) == 1312, "Offset mismatch for UWBP_CrewPassButton_C::DateSwitcher");
static_assert(offsetof(UWBP_CrewPassButton_C, Date_Spacer_Collapses) == 1320, "Offset mismatch for UWBP_CrewPassButton_C::Date_Spacer_Collapses");
static_assert(offsetof(UWBP_CrewPassButton_C, Content) == 1328, "Offset mismatch for UWBP_CrewPassButton_C::Content");
static_assert(offsetof(UWBP_CrewPassButton_C, Button_Hitbox) == 1336, "Offset mismatch for UWBP_CrewPassButton_C::Button_Hitbox");
static_assert(offsetof(UWBP_CrewPassButton_C, Block_Outline) == 1344, "Offset mismatch for UWBP_CrewPassButton_C::Block_Outline");
static_assert(offsetof(UWBP_CrewPassButton_C, Background) == 1352, "Offset mismatch for UWBP_CrewPassButton_C::Background");
static_assert(offsetof(UWBP_CrewPassButton_C, SeasonPassVM) == 1360, "Offset mismatch for UWBP_CrewPassButton_C::SeasonPassVM");
static_assert(offsetof(UWBP_CrewPassButton_C, CrewBenefitVM) == 1368, "Offset mismatch for UWBP_CrewPassButton_C::CrewBenefitVM");
static_assert(offsetof(UWBP_CrewPassButton_C, SeasonPassSystemVM) == 1376, "Offset mismatch for UWBP_CrewPassButton_C::SeasonPassSystemVM");
static_assert(offsetof(UWBP_CrewPassButton_C, SeasonPassCategoryVM) == 1384, "Offset mismatch for UWBP_CrewPassButton_C::SeasonPassCategoryVM");
static_assert(offsetof(UWBP_CrewPassButton_C, SeasonPassSelectionVM) == 1392, "Offset mismatch for UWBP_CrewPassButton_C::SeasonPassSelectionVM");
static_assert(offsetof(UWBP_CrewPassButton_C, TotalRewardsCount) == 1400, "Offset mismatch for UWBP_CrewPassButton_C::TotalRewardsCount");
static_assert(offsetof(UWBP_CrewPassButton_C, CrewPassButtonClicked) == 1408, "Offset mismatch for UWBP_CrewPassButton_C::CrewPassButtonClicked");
static_assert(offsetof(UWBP_CrewPassButton_C, OwnedRewardsCount) == 1428, "Offset mismatch for UWBP_CrewPassButton_C::OwnedRewardsCount");
static_assert(offsetof(UWBP_CrewPassButton_C, ProgressionColor) == 1432, "Offset mismatch for UWBP_CrewPassButton_C::ProgressionColor");
static_assert(offsetof(UWBP_CrewPassButton_C, CompletionColor) == 1448, "Offset mismatch for UWBP_CrewPassButton_C::CompletionColor");
static_assert(offsetof(UWBP_CrewPassButton_C, FoundPassVM) == 1464, "Offset mismatch for UWBP_CrewPassButton_C::FoundPassVM");
static_assert(offsetof(UWBP_CrewPassButton_C, PressedSound) == 1472, "Offset mismatch for UWBP_CrewPassButton_C::PressedSound");
static_assert(offsetof(UWBP_CrewPassButton_C, HoveredSound) == 1480, "Offset mismatch for UWBP_CrewPassButton_C::HoveredSound");
static_assert(offsetof(UWBP_CrewPassButton_C, CrewPassButtonSelected) == 1488, "Offset mismatch for UWBP_CrewPassButton_C::CrewPassButtonSelected");
static_assert(offsetof(UWBP_CrewPassButton_C, IsCrewTile) == 1504, "Offset mismatch for UWBP_CrewPassButton_C::IsCrewTile");
static_assert(offsetof(UWBP_CrewPassButton_C, IsFocused) == 1505, "Offset mismatch for UWBP_CrewPassButton_C::IsFocused");
static_assert(offsetof(UWBP_CrewPassButton_C, Index) == 1508, "Offset mismatch for UWBP_CrewPassButton_C::Index");
static_assert(offsetof(UWBP_CrewPassButton_C, bIsCrewStyles) == 1513, "Offset mismatch for UWBP_CrewPassButton_C::bIsCrewStyles");
