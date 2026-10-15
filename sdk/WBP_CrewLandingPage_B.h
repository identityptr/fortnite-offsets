/**
 * decamp dumper generated SDK
 * Package: /SeasonPassHub/Widgets/Reboot/WBP_CrewLandingPage_B
 */
#pragma once
#include "Basic.h"

// /SeasonPassHub/Widgets/Reboot/WBP_CrewLandingPage_B.WBP_CrewLandingPage_B_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonActivatableWidget
class UWBP_CrewLandingPage_B_C
{
public:
    std::uint8_t None[0x4A0]; // 0x0000 (Size: 0x4A0, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x8]; // 0x04A0 (Size: 0x8, Type: StructProperty)
    void* WBP_UIKit_InfoBox_Unavailable; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* WBP_Crew_Header; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* WBP_BottomBarDecoy_SeeBenefits; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* WBP_BottomBarDecoy_ManageSub; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* WBP_BottomBarDecoy_GetOGPass; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* WBP_BottomBarDecoy_GetMusicPass; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* WBP_BottomBarDecoy_GetLEGOPass; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* VB_Content; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_Message; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Separator; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x04F8
    void* ScrollRight; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* ScrollLeft; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* SB_CrewEntitlement; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* Passes; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Passes; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* MultipleSubError; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* MKBScrollArrows; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* Message; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0548
    void* CrewTiles; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* CrewStyleButton; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* CrewPassButton; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* CrewNoticeMessage; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0570
    void* Crew_Header_B; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* Content; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* Char_BG; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* CabinWarning; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* TilesIntro; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassVM; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* CrewBenefitVM; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* CrewVM; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassSystemVM; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* SeasonPassSelectionVM; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* FortLocalPlayerVM; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    double ButtonScrollAmount; // 0x05D0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UWBP_CrewLandingPage_B_C, None) == 0, "Offset mismatch for UWBP_CrewLandingPage_B_C::None");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, UberGraphFrame) == 1184, "Offset mismatch for UWBP_CrewLandingPage_B_C::UberGraphFrame");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, WBP_UIKit_InfoBox_Unavailable) == 1192, "Offset mismatch for UWBP_CrewLandingPage_B_C::WBP_UIKit_InfoBox_Unavailable");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, WBP_Crew_Header) == 1200, "Offset mismatch for UWBP_CrewLandingPage_B_C::WBP_Crew_Header");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, WBP_BottomBarDecoy_SeeBenefits) == 1208, "Offset mismatch for UWBP_CrewLandingPage_B_C::WBP_BottomBarDecoy_SeeBenefits");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, WBP_BottomBarDecoy_ManageSub) == 1216, "Offset mismatch for UWBP_CrewLandingPage_B_C::WBP_BottomBarDecoy_ManageSub");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, WBP_BottomBarDecoy_GetOGPass) == 1224, "Offset mismatch for UWBP_CrewLandingPage_B_C::WBP_BottomBarDecoy_GetOGPass");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, WBP_BottomBarDecoy_GetMusicPass) == 1232, "Offset mismatch for UWBP_CrewLandingPage_B_C::WBP_BottomBarDecoy_GetMusicPass");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, WBP_BottomBarDecoy_GetLEGOPass) == 1240, "Offset mismatch for UWBP_CrewLandingPage_B_C::WBP_BottomBarDecoy_GetLEGOPass");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, VB_Content) == 1248, "Offset mismatch for UWBP_CrewLandingPage_B_C::VB_Content");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, SizeBox_Message) == 1256, "Offset mismatch for UWBP_CrewLandingPage_B_C::SizeBox_Message");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, Separator) == 1264, "Offset mismatch for UWBP_CrewLandingPage_B_C::Separator");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, ScrollRight) == 1280, "Offset mismatch for UWBP_CrewLandingPage_B_C::ScrollRight");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, ScrollLeft) == 1288, "Offset mismatch for UWBP_CrewLandingPage_B_C::ScrollLeft");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, ScrollBox) == 1296, "Offset mismatch for UWBP_CrewLandingPage_B_C::ScrollBox");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, SB_CrewEntitlement) == 1304, "Offset mismatch for UWBP_CrewLandingPage_B_C::SB_CrewEntitlement");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, Passes) == 1312, "Offset mismatch for UWBP_CrewLandingPage_B_C::Passes");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, Overlay_Passes) == 1320, "Offset mismatch for UWBP_CrewLandingPage_B_C::Overlay_Passes");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, MultipleSubError) == 1328, "Offset mismatch for UWBP_CrewLandingPage_B_C::MultipleSubError");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, MKBScrollArrows) == 1336, "Offset mismatch for UWBP_CrewLandingPage_B_C::MKBScrollArrows");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, Message) == 1344, "Offset mismatch for UWBP_CrewLandingPage_B_C::Message");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, CrewTiles) == 1360, "Offset mismatch for UWBP_CrewLandingPage_B_C::CrewTiles");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, CrewStyleButton) == 1368, "Offset mismatch for UWBP_CrewLandingPage_B_C::CrewStyleButton");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, CrewPassButton) == 1376, "Offset mismatch for UWBP_CrewLandingPage_B_C::CrewPassButton");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, CrewNoticeMessage) == 1384, "Offset mismatch for UWBP_CrewLandingPage_B_C::CrewNoticeMessage");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, Crew_Header_B) == 1400, "Offset mismatch for UWBP_CrewLandingPage_B_C::Crew_Header_B");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, Content) == 1408, "Offset mismatch for UWBP_CrewLandingPage_B_C::Content");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, Char_BG) == 1416, "Offset mismatch for UWBP_CrewLandingPage_B_C::Char_BG");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, CabinWarning) == 1424, "Offset mismatch for UWBP_CrewLandingPage_B_C::CabinWarning");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, TilesIntro) == 1432, "Offset mismatch for UWBP_CrewLandingPage_B_C::TilesIntro");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, SeasonPassVM) == 1440, "Offset mismatch for UWBP_CrewLandingPage_B_C::SeasonPassVM");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, CrewBenefitVM) == 1448, "Offset mismatch for UWBP_CrewLandingPage_B_C::CrewBenefitVM");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, CrewVM) == 1456, "Offset mismatch for UWBP_CrewLandingPage_B_C::CrewVM");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, SeasonPassSystemVM) == 1464, "Offset mismatch for UWBP_CrewLandingPage_B_C::SeasonPassSystemVM");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, SeasonPassSelectionVM) == 1472, "Offset mismatch for UWBP_CrewLandingPage_B_C::SeasonPassSelectionVM");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, FortLocalPlayerVM) == 1480, "Offset mismatch for UWBP_CrewLandingPage_B_C::FortLocalPlayerVM");
static_assert(offsetof(UWBP_CrewLandingPage_B_C, ButtonScrollAmount) == 1488, "Offset mismatch for UWBP_CrewLandingPage_B_C::ButtonScrollAmount");
