/**
 * decamp dumper generated SDK
 * Package: /FMJamSystem/Widgets/SongInfo/WBP_JamLoopDisplay
 */
#pragma once
#include "Basic.h"

// /FMJamSystem/Widgets/SongInfo/WBP_JamLoopDisplay.WBP_JamLoopDisplay_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_JamLoopDisplay_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0308 (Size: 0x10, Type: StructProperty)
    void* WBP_Background; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* VerticalBox_FlaggedTextLines; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* TextContent; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* StatusOverlayMessage; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* StatusOverlaidFillBar; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* PlayerAvatar; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* PartIconRight; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Main; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* Icon; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* HolojammerIcon; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* FlaggedLineTop; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* FlaggedLineBottom; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* FakeLineTop; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* FakeLineBottom; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Current_Track_BG; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* CommonTextBlock_SongName; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* CommonTextBlock_ArtistName; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Arrow_SelectingLoop; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* JamMusicSlotVM; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* JamGlobalStateVM; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DarkTextColor[0x14]; // 0x03B8 (Size: 0x14, Type: StructProperty)
    std::uint8_t LightTextColor[0x1C]; // 0x03CC (Size: 0x1C, Type: StructProperty)
    std::uint8_t AvatarPortraitVisibility; // 0x03E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x03E9
    std::uint8_t BackgroundColorAndOpacity[0x10]; // 0x03EC (Size: 0x10, Type: StructProperty)
    std::uint8_t HoloJammer_BGColor[0x10]; // 0x03FC (Size: 0x10, Type: StructProperty)
    std::uint8_t HoloJammer_BG_Color[0x1C]; // 0x040C (Size: 0x1C, Type: StructProperty)
    std::uint8_t Default_BG_Color[0x10]; // 0x0428 (Size: 0x10, Type: StructProperty)
    std::uint8_t Background_Visibility; // 0x0438 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IsOnCardIndicator; // 0x0439 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x043A
    void* AvatarMaterialInstance; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    void* JamSongInfoWidget; // 0x0448 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_JamLoopDisplay_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_JamLoopDisplay_C::UberGraphFrame");
static_assert(offsetof(UWBP_JamLoopDisplay_C, WBP_Background) == 792, "Offset mismatch for UWBP_JamLoopDisplay_C::WBP_Background");
static_assert(offsetof(UWBP_JamLoopDisplay_C, VerticalBox_FlaggedTextLines) == 800, "Offset mismatch for UWBP_JamLoopDisplay_C::VerticalBox_FlaggedTextLines");
static_assert(offsetof(UWBP_JamLoopDisplay_C, TextContent) == 808, "Offset mismatch for UWBP_JamLoopDisplay_C::TextContent");
static_assert(offsetof(UWBP_JamLoopDisplay_C, StatusOverlayMessage) == 816, "Offset mismatch for UWBP_JamLoopDisplay_C::StatusOverlayMessage");
static_assert(offsetof(UWBP_JamLoopDisplay_C, StatusOverlaidFillBar) == 824, "Offset mismatch for UWBP_JamLoopDisplay_C::StatusOverlaidFillBar");
static_assert(offsetof(UWBP_JamLoopDisplay_C, PlayerAvatar) == 832, "Offset mismatch for UWBP_JamLoopDisplay_C::PlayerAvatar");
static_assert(offsetof(UWBP_JamLoopDisplay_C, PartIconRight) == 840, "Offset mismatch for UWBP_JamLoopDisplay_C::PartIconRight");
static_assert(offsetof(UWBP_JamLoopDisplay_C, Overlay_Main) == 848, "Offset mismatch for UWBP_JamLoopDisplay_C::Overlay_Main");
static_assert(offsetof(UWBP_JamLoopDisplay_C, Icon) == 856, "Offset mismatch for UWBP_JamLoopDisplay_C::Icon");
static_assert(offsetof(UWBP_JamLoopDisplay_C, HolojammerIcon) == 864, "Offset mismatch for UWBP_JamLoopDisplay_C::HolojammerIcon");
static_assert(offsetof(UWBP_JamLoopDisplay_C, FlaggedLineTop) == 872, "Offset mismatch for UWBP_JamLoopDisplay_C::FlaggedLineTop");
static_assert(offsetof(UWBP_JamLoopDisplay_C, FlaggedLineBottom) == 880, "Offset mismatch for UWBP_JamLoopDisplay_C::FlaggedLineBottom");
static_assert(offsetof(UWBP_JamLoopDisplay_C, FakeLineTop) == 888, "Offset mismatch for UWBP_JamLoopDisplay_C::FakeLineTop");
static_assert(offsetof(UWBP_JamLoopDisplay_C, FakeLineBottom) == 896, "Offset mismatch for UWBP_JamLoopDisplay_C::FakeLineBottom");
static_assert(offsetof(UWBP_JamLoopDisplay_C, Current_Track_BG) == 904, "Offset mismatch for UWBP_JamLoopDisplay_C::Current_Track_BG");
static_assert(offsetof(UWBP_JamLoopDisplay_C, CommonTextBlock_SongName) == 912, "Offset mismatch for UWBP_JamLoopDisplay_C::CommonTextBlock_SongName");
static_assert(offsetof(UWBP_JamLoopDisplay_C, CommonTextBlock_ArtistName) == 920, "Offset mismatch for UWBP_JamLoopDisplay_C::CommonTextBlock_ArtistName");
static_assert(offsetof(UWBP_JamLoopDisplay_C, Arrow_SelectingLoop) == 928, "Offset mismatch for UWBP_JamLoopDisplay_C::Arrow_SelectingLoop");
static_assert(offsetof(UWBP_JamLoopDisplay_C, JamMusicSlotVM) == 936, "Offset mismatch for UWBP_JamLoopDisplay_C::JamMusicSlotVM");
static_assert(offsetof(UWBP_JamLoopDisplay_C, JamGlobalStateVM) == 944, "Offset mismatch for UWBP_JamLoopDisplay_C::JamGlobalStateVM");
static_assert(offsetof(UWBP_JamLoopDisplay_C, DarkTextColor) == 952, "Offset mismatch for UWBP_JamLoopDisplay_C::DarkTextColor");
static_assert(offsetof(UWBP_JamLoopDisplay_C, LightTextColor) == 972, "Offset mismatch for UWBP_JamLoopDisplay_C::LightTextColor");
static_assert(offsetof(UWBP_JamLoopDisplay_C, AvatarPortraitVisibility) == 1000, "Offset mismatch for UWBP_JamLoopDisplay_C::AvatarPortraitVisibility");
static_assert(offsetof(UWBP_JamLoopDisplay_C, BackgroundColorAndOpacity) == 1004, "Offset mismatch for UWBP_JamLoopDisplay_C::BackgroundColorAndOpacity");
static_assert(offsetof(UWBP_JamLoopDisplay_C, HoloJammer_BGColor) == 1020, "Offset mismatch for UWBP_JamLoopDisplay_C::HoloJammer_BGColor");
static_assert(offsetof(UWBP_JamLoopDisplay_C, HoloJammer_BG_Color) == 1036, "Offset mismatch for UWBP_JamLoopDisplay_C::HoloJammer_BG_Color");
static_assert(offsetof(UWBP_JamLoopDisplay_C, Default_BG_Color) == 1064, "Offset mismatch for UWBP_JamLoopDisplay_C::Default_BG_Color");
static_assert(offsetof(UWBP_JamLoopDisplay_C, Background_Visibility) == 1080, "Offset mismatch for UWBP_JamLoopDisplay_C::Background_Visibility");
static_assert(offsetof(UWBP_JamLoopDisplay_C, IsOnCardIndicator) == 1081, "Offset mismatch for UWBP_JamLoopDisplay_C::IsOnCardIndicator");
static_assert(offsetof(UWBP_JamLoopDisplay_C, AvatarMaterialInstance) == 1088, "Offset mismatch for UWBP_JamLoopDisplay_C::AvatarMaterialInstance");
static_assert(offsetof(UWBP_JamLoopDisplay_C, JamSongInfoWidget) == 1096, "Offset mismatch for UWBP_JamLoopDisplay_C::JamSongInfoWidget");
