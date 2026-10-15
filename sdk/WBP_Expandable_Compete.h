/**
 * decamp dumper generated SDK
 * Package: /Compete/Notifications/WBP_Expandable_Compete
 */
#pragma once
#include "Basic.h"

// /Compete/Notifications/WBP_Expandable_Compete.WBP_Expandable_Compete_C
// Kind: WidgetBlueprintGeneratedClass; super: none
class UWBP_Expandable_Compete_C
{
public:
    std::uint8_t Pad_0000[0x1790]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1790 (Size: 0x8, Type: StructProperty)
    void* TournamentName_Live; // 0x1798 (Size: 0x8, Type: ObjectProperty)
    void* TournamentName_Bookmarked_ForAnim; // 0x17A0 (Size: 0x8, Type: ObjectProperty)
    void* TournamentName_Bookmarked; // 0x17A8 (Size: 0x8, Type: ObjectProperty)
    void* TooltipSwitcher; // 0x17B0 (Size: 0x8, Type: ObjectProperty)
    void* TooltipRoot_Live; // 0x17B8 (Size: 0x8, Type: ObjectProperty)
    void* TooltipRoot; // 0x17C0 (Size: 0x8, Type: ObjectProperty)
    void* Timer; // 0x17C8 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Content; // 0x17D0 (Size: 0x8, Type: ObjectProperty)
    void* PipList; // 0x17D8 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Timer; // 0x17E0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Bookmarks; // 0x17E8 (Size: 0x8, Type: ObjectProperty)
    void* Image_Live; // 0x17F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x17F8
    void* Image_Clock; // 0x1800 (Size: 0x8, Type: ObjectProperty)
    void* Highlight; // 0x1808 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x1810
    void* BookmarkedAmount; // 0x1818 (Size: 0x8, Type: ObjectProperty)
    void* NextFrameAnim; // 0x1820 (Size: 0x8, Type: ObjectProperty)
    void* FortTournamentBookmarksVM; // 0x1828 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CurrentFrameIndex; // 0x1830 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x1834
    std::uint8_t TimerHandle[0x8]; // 0x1838 (Size: 0x8, Type: StructProperty)
    double time; // 0x1840 (Size: 0x8, Type: DoubleProperty)
    std::int32_t BookmarkedEventsAmount; // 0x1848 (Size: 0x4, Type: IntProperty)
    std::uint8_t Live; // 0x184C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMultipleBookmarked; // 0x184D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x184E
    std::uint8_t MobilePadding[0x10]; // 0x1850 (Size: 0x10, Type: StructProperty)
    float BigFontSize; // 0x1860 (Size: 0x4, Type: FloatProperty)
    float SmallFontSize; // 0x1864 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ShowOnlyOnRankedLobbies; // 0x1868 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x1869
    std::int32_t MinCountdownIndex; // 0x186C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0006[0x8]; // 0x1870
    std::uint8_t TickCountdownTimerHandle[0x1]; // 0x1878 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_Expandable_Compete_C, UberGraphFrame) == 6032, "Offset mismatch for UWBP_Expandable_Compete_C::UberGraphFrame");
static_assert(offsetof(UWBP_Expandable_Compete_C, TournamentName_Live) == 6040, "Offset mismatch for UWBP_Expandable_Compete_C::TournamentName_Live");
static_assert(offsetof(UWBP_Expandable_Compete_C, TournamentName_Bookmarked_ForAnim) == 6048, "Offset mismatch for UWBP_Expandable_Compete_C::TournamentName_Bookmarked_ForAnim");
static_assert(offsetof(UWBP_Expandable_Compete_C, TournamentName_Bookmarked) == 6056, "Offset mismatch for UWBP_Expandable_Compete_C::TournamentName_Bookmarked");
static_assert(offsetof(UWBP_Expandable_Compete_C, TooltipSwitcher) == 6064, "Offset mismatch for UWBP_Expandable_Compete_C::TooltipSwitcher");
static_assert(offsetof(UWBP_Expandable_Compete_C, TooltipRoot_Live) == 6072, "Offset mismatch for UWBP_Expandable_Compete_C::TooltipRoot_Live");
static_assert(offsetof(UWBP_Expandable_Compete_C, TooltipRoot) == 6080, "Offset mismatch for UWBP_Expandable_Compete_C::TooltipRoot");
static_assert(offsetof(UWBP_Expandable_Compete_C, Timer) == 6088, "Offset mismatch for UWBP_Expandable_Compete_C::Timer");
static_assert(offsetof(UWBP_Expandable_Compete_C, Switcher_Content) == 6096, "Offset mismatch for UWBP_Expandable_Compete_C::Switcher_Content");
static_assert(offsetof(UWBP_Expandable_Compete_C, PipList) == 6104, "Offset mismatch for UWBP_Expandable_Compete_C::PipList");
static_assert(offsetof(UWBP_Expandable_Compete_C, Overlay_Timer) == 6112, "Offset mismatch for UWBP_Expandable_Compete_C::Overlay_Timer");
static_assert(offsetof(UWBP_Expandable_Compete_C, Overlay_Bookmarks) == 6120, "Offset mismatch for UWBP_Expandable_Compete_C::Overlay_Bookmarks");
static_assert(offsetof(UWBP_Expandable_Compete_C, Image_Live) == 6128, "Offset mismatch for UWBP_Expandable_Compete_C::Image_Live");
static_assert(offsetof(UWBP_Expandable_Compete_C, Image_Clock) == 6144, "Offset mismatch for UWBP_Expandable_Compete_C::Image_Clock");
static_assert(offsetof(UWBP_Expandable_Compete_C, Highlight) == 6152, "Offset mismatch for UWBP_Expandable_Compete_C::Highlight");
static_assert(offsetof(UWBP_Expandable_Compete_C, BookmarkedAmount) == 6168, "Offset mismatch for UWBP_Expandable_Compete_C::BookmarkedAmount");
static_assert(offsetof(UWBP_Expandable_Compete_C, NextFrameAnim) == 6176, "Offset mismatch for UWBP_Expandable_Compete_C::NextFrameAnim");
static_assert(offsetof(UWBP_Expandable_Compete_C, FortTournamentBookmarksVM) == 6184, "Offset mismatch for UWBP_Expandable_Compete_C::FortTournamentBookmarksVM");
static_assert(offsetof(UWBP_Expandable_Compete_C, CurrentFrameIndex) == 6192, "Offset mismatch for UWBP_Expandable_Compete_C::CurrentFrameIndex");
static_assert(offsetof(UWBP_Expandable_Compete_C, TimerHandle) == 6200, "Offset mismatch for UWBP_Expandable_Compete_C::TimerHandle");
static_assert(offsetof(UWBP_Expandable_Compete_C, time) == 6208, "Offset mismatch for UWBP_Expandable_Compete_C::time");
static_assert(offsetof(UWBP_Expandable_Compete_C, BookmarkedEventsAmount) == 6216, "Offset mismatch for UWBP_Expandable_Compete_C::BookmarkedEventsAmount");
static_assert(offsetof(UWBP_Expandable_Compete_C, Live) == 6220, "Offset mismatch for UWBP_Expandable_Compete_C::Live");
static_assert(offsetof(UWBP_Expandable_Compete_C, bMultipleBookmarked) == 6221, "Offset mismatch for UWBP_Expandable_Compete_C::bMultipleBookmarked");
static_assert(offsetof(UWBP_Expandable_Compete_C, MobilePadding) == 6224, "Offset mismatch for UWBP_Expandable_Compete_C::MobilePadding");
static_assert(offsetof(UWBP_Expandable_Compete_C, BigFontSize) == 6240, "Offset mismatch for UWBP_Expandable_Compete_C::BigFontSize");
static_assert(offsetof(UWBP_Expandable_Compete_C, SmallFontSize) == 6244, "Offset mismatch for UWBP_Expandable_Compete_C::SmallFontSize");
static_assert(offsetof(UWBP_Expandable_Compete_C, ShowOnlyOnRankedLobbies) == 6248, "Offset mismatch for UWBP_Expandable_Compete_C::ShowOnlyOnRankedLobbies");
static_assert(offsetof(UWBP_Expandable_Compete_C, MinCountdownIndex) == 6252, "Offset mismatch for UWBP_Expandable_Compete_C::MinCountdownIndex");
static_assert(offsetof(UWBP_Expandable_Compete_C, TickCountdownTimerHandle) == 6264, "Offset mismatch for UWBP_Expandable_Compete_C::TickCountdownTimerHandle");
