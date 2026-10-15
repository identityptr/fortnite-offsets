/**
 * decamp dumper generated SDK
 * Package: /FMJamSystem/Widgets/SongInfo/WBP_JamLoopDisplay_Background
 */
#pragma once
#include "Basic.h"

// /FMJamSystem/Widgets/SongInfo/WBP_JamLoopDisplay_Background.WBP_JamLoopDisplay_Background_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_JamLoopDisplay_Background_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* NowPlayingStatusBar; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* Background; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0320
    std::uint8_t Default_BG_Color[0x10]; // 0x0328 (Size: 0x10, Type: StructProperty)
    std::uint8_t HoloJammer_BG_Color[0x10]; // 0x0338 (Size: 0x10, Type: StructProperty)
    std::uint8_t NowPlaying_BG_Color[0x1]; // 0x0348 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_JamLoopDisplay_Background_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_JamLoopDisplay_Background_C::UberGraphFrame");
static_assert(offsetof(UWBP_JamLoopDisplay_Background_C, NowPlayingStatusBar) == 784, "Offset mismatch for UWBP_JamLoopDisplay_Background_C::NowPlayingStatusBar");
static_assert(offsetof(UWBP_JamLoopDisplay_Background_C, Background) == 792, "Offset mismatch for UWBP_JamLoopDisplay_Background_C::Background");
static_assert(offsetof(UWBP_JamLoopDisplay_Background_C, Default_BG_Color) == 808, "Offset mismatch for UWBP_JamLoopDisplay_Background_C::Default_BG_Color");
static_assert(offsetof(UWBP_JamLoopDisplay_Background_C, HoloJammer_BG_Color) == 824, "Offset mismatch for UWBP_JamLoopDisplay_Background_C::HoloJammer_BG_Color");
static_assert(offsetof(UWBP_JamLoopDisplay_Background_C, NowPlaying_BG_Color) == 840, "Offset mismatch for UWBP_JamLoopDisplay_Background_C::NowPlaying_BG_Color");
