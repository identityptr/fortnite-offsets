/**
 * decamp dumper generated SDK
 * Package: /SeasonPass/Widgets/WBP_Expandable_Level
 */
#pragma once
#include "Basic.h"

// /SeasonPass/Widgets/WBP_Expandable_Level.WBP_Expandable_Level_C
// Kind: WidgetBlueprintGeneratedClass; super: none
class UWBP_Expandable_Level_C
{
public:
    std::uint8_t Pad_0000[0x1790]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1790 (Size: 0x8, Type: StructProperty)
    void* WBP_UIKit_StatusIndicator; // 0x1798 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x17A0
    void* VerticalBox_LevelInfo; // 0x17A8 (Size: 0x8, Type: ObjectProperty)
    void* Text_XpToNextLevel; // 0x17B0 (Size: 0x8, Type: ObjectProperty)
    void* Text_Level; // 0x17B8 (Size: 0x8, Type: ObjectProperty)
    void* SetsAmount_Text; // 0x17C0 (Size: 0x8, Type: ObjectProperty)
    void* SetsAmount; // 0x17C8 (Size: 0x8, Type: ObjectProperty)
    void* Sets; // 0x17D0 (Size: 0x8, Type: ObjectProperty)
    void* Separator; // 0x17D8 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPass_Autoclaim_LobbyCoachmark; // 0x17E0 (Size: 0x8, Type: ObjectProperty)
    void* Rewards; // 0x17E8 (Size: 0x8, Type: ObjectProperty)
    void* RewardOverlay; // 0x17F0 (Size: 0x8, Type: ObjectProperty)
    void* RewardGlow; // 0x17F8 (Size: 0x8, Type: ObjectProperty)
    void* RewardAmount_Text; // 0x1800 (Size: 0x8, Type: ObjectProperty)
    void* RewardAmount; // 0x1808 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Aura; // 0x1810 (Size: 0x8, Type: ObjectProperty)
    void* LevelProgress; // 0x1818 (Size: 0x8, Type: ObjectProperty)
    void* IndicatorWrapper; // 0x1820 (Size: 0x8, Type: ObjectProperty)
    void* VFX_ShowAnimation; // 0x1828 (Size: 0x8, Type: ObjectProperty)
    void* VFX_HideAnimation; // 0x1830 (Size: 0x8, Type: ObjectProperty)
    void* FortPassLevelViewModel; // 0x1838 (Size: 0x8, Type: ObjectProperty)
    void* FortLocalPlayerBangVM; // 0x1840 (Size: 0x8, Type: ObjectProperty)
    void* FortLocalPlayerVM; // 0x1848 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassSelectionVM; // 0x1850 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassSystemVM; // 0x1858 (Size: 0x8, Type: ObjectProperty)
    void* GiftBoxSystemVM; // 0x1860 (Size: 0x8, Type: ObjectProperty)
    void* BattlePassVM; // 0x1868 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x1870
    std::uint8_t WasExpanded; // 0x1874 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x1875
    std::int32_t RewardCount; // 0x1878 (Size: 0x4, Type: IntProperty)
    std::uint8_t ShouldForceExpand; // 0x187C (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldDisplayRewardsToClaim; // 0x187D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x187E
    std::int32_t SetCount; // 0x1880 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x1884
    std::int32_t InSetCount; // 0x1888 (Size: 0x4, Type: IntProperty)
    std::int32_t InRewardCount; // 0x188C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UWBP_Expandable_Level_C, UberGraphFrame) == 6032, "Offset mismatch for UWBP_Expandable_Level_C::UberGraphFrame");
static_assert(offsetof(UWBP_Expandable_Level_C, WBP_UIKit_StatusIndicator) == 6040, "Offset mismatch for UWBP_Expandable_Level_C::WBP_UIKit_StatusIndicator");
static_assert(offsetof(UWBP_Expandable_Level_C, VerticalBox_LevelInfo) == 6056, "Offset mismatch for UWBP_Expandable_Level_C::VerticalBox_LevelInfo");
static_assert(offsetof(UWBP_Expandable_Level_C, Text_XpToNextLevel) == 6064, "Offset mismatch for UWBP_Expandable_Level_C::Text_XpToNextLevel");
static_assert(offsetof(UWBP_Expandable_Level_C, Text_Level) == 6072, "Offset mismatch for UWBP_Expandable_Level_C::Text_Level");
static_assert(offsetof(UWBP_Expandable_Level_C, SetsAmount_Text) == 6080, "Offset mismatch for UWBP_Expandable_Level_C::SetsAmount_Text");
static_assert(offsetof(UWBP_Expandable_Level_C, SetsAmount) == 6088, "Offset mismatch for UWBP_Expandable_Level_C::SetsAmount");
static_assert(offsetof(UWBP_Expandable_Level_C, Sets) == 6096, "Offset mismatch for UWBP_Expandable_Level_C::Sets");
static_assert(offsetof(UWBP_Expandable_Level_C, Separator) == 6104, "Offset mismatch for UWBP_Expandable_Level_C::Separator");
static_assert(offsetof(UWBP_Expandable_Level_C, SeasonPass_Autoclaim_LobbyCoachmark) == 6112, "Offset mismatch for UWBP_Expandable_Level_C::SeasonPass_Autoclaim_LobbyCoachmark");
static_assert(offsetof(UWBP_Expandable_Level_C, Rewards) == 6120, "Offset mismatch for UWBP_Expandable_Level_C::Rewards");
static_assert(offsetof(UWBP_Expandable_Level_C, RewardOverlay) == 6128, "Offset mismatch for UWBP_Expandable_Level_C::RewardOverlay");
static_assert(offsetof(UWBP_Expandable_Level_C, RewardGlow) == 6136, "Offset mismatch for UWBP_Expandable_Level_C::RewardGlow");
static_assert(offsetof(UWBP_Expandable_Level_C, RewardAmount_Text) == 6144, "Offset mismatch for UWBP_Expandable_Level_C::RewardAmount_Text");
static_assert(offsetof(UWBP_Expandable_Level_C, RewardAmount) == 6152, "Offset mismatch for UWBP_Expandable_Level_C::RewardAmount");
static_assert(offsetof(UWBP_Expandable_Level_C, Overlay_Aura) == 6160, "Offset mismatch for UWBP_Expandable_Level_C::Overlay_Aura");
static_assert(offsetof(UWBP_Expandable_Level_C, LevelProgress) == 6168, "Offset mismatch for UWBP_Expandable_Level_C::LevelProgress");
static_assert(offsetof(UWBP_Expandable_Level_C, IndicatorWrapper) == 6176, "Offset mismatch for UWBP_Expandable_Level_C::IndicatorWrapper");
static_assert(offsetof(UWBP_Expandable_Level_C, VFX_ShowAnimation) == 6184, "Offset mismatch for UWBP_Expandable_Level_C::VFX_ShowAnimation");
static_assert(offsetof(UWBP_Expandable_Level_C, VFX_HideAnimation) == 6192, "Offset mismatch for UWBP_Expandable_Level_C::VFX_HideAnimation");
static_assert(offsetof(UWBP_Expandable_Level_C, FortPassLevelViewModel) == 6200, "Offset mismatch for UWBP_Expandable_Level_C::FortPassLevelViewModel");
static_assert(offsetof(UWBP_Expandable_Level_C, FortLocalPlayerBangVM) == 6208, "Offset mismatch for UWBP_Expandable_Level_C::FortLocalPlayerBangVM");
static_assert(offsetof(UWBP_Expandable_Level_C, FortLocalPlayerVM) == 6216, "Offset mismatch for UWBP_Expandable_Level_C::FortLocalPlayerVM");
static_assert(offsetof(UWBP_Expandable_Level_C, SeasonPassSelectionVM) == 6224, "Offset mismatch for UWBP_Expandable_Level_C::SeasonPassSelectionVM");
static_assert(offsetof(UWBP_Expandable_Level_C, SeasonPassSystemVM) == 6232, "Offset mismatch for UWBP_Expandable_Level_C::SeasonPassSystemVM");
static_assert(offsetof(UWBP_Expandable_Level_C, GiftBoxSystemVM) == 6240, "Offset mismatch for UWBP_Expandable_Level_C::GiftBoxSystemVM");
static_assert(offsetof(UWBP_Expandable_Level_C, BattlePassVM) == 6248, "Offset mismatch for UWBP_Expandable_Level_C::BattlePassVM");
static_assert(offsetof(UWBP_Expandable_Level_C, WasExpanded) == 6260, "Offset mismatch for UWBP_Expandable_Level_C::WasExpanded");
static_assert(offsetof(UWBP_Expandable_Level_C, RewardCount) == 6264, "Offset mismatch for UWBP_Expandable_Level_C::RewardCount");
static_assert(offsetof(UWBP_Expandable_Level_C, ShouldForceExpand) == 6268, "Offset mismatch for UWBP_Expandable_Level_C::ShouldForceExpand");
static_assert(offsetof(UWBP_Expandable_Level_C, ShouldDisplayRewardsToClaim) == 6269, "Offset mismatch for UWBP_Expandable_Level_C::ShouldDisplayRewardsToClaim");
static_assert(offsetof(UWBP_Expandable_Level_C, SetCount) == 6272, "Offset mismatch for UWBP_Expandable_Level_C::SetCount");
static_assert(offsetof(UWBP_Expandable_Level_C, InSetCount) == 6280, "Offset mismatch for UWBP_Expandable_Level_C::InSetCount");
static_assert(offsetof(UWBP_Expandable_Level_C, InRewardCount) == 6284, "Offset mismatch for UWBP_Expandable_Level_C::InRewardCount");
