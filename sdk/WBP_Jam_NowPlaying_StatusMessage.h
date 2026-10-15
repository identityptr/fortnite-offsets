/**
 * decamp dumper generated SDK
 * Package: /FMJamSystem/Widgets/SongInfo/WBP_Jam_NowPlaying_StatusMessage
 */
#pragma once
#include "Basic.h"

// /FMJamSystem/Widgets/SongInfo/WBP_Jam_NowPlaying_StatusMessage.WBP_Jam_NowPlaying_StatusMessage_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_Jam_NowPlaying_StatusMessage_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* MessageTextBlock; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* Iconplaceholder; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Background; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LoopLimitText[0x10]; // 0x0328 (Size: 0x10, Type: TextProperty)
    void* LoopLimitIcon; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LoopLimitIconTint[0x1]; // 0x0340 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_Jam_NowPlaying_StatusMessage_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_Jam_NowPlaying_StatusMessage_C::UberGraphFrame");
static_assert(offsetof(UWBP_Jam_NowPlaying_StatusMessage_C, MessageTextBlock) == 784, "Offset mismatch for UWBP_Jam_NowPlaying_StatusMessage_C::MessageTextBlock");
static_assert(offsetof(UWBP_Jam_NowPlaying_StatusMessage_C, Iconplaceholder) == 792, "Offset mismatch for UWBP_Jam_NowPlaying_StatusMessage_C::Iconplaceholder");
static_assert(offsetof(UWBP_Jam_NowPlaying_StatusMessage_C, Background) == 800, "Offset mismatch for UWBP_Jam_NowPlaying_StatusMessage_C::Background");
static_assert(offsetof(UWBP_Jam_NowPlaying_StatusMessage_C, LoopLimitText) == 808, "Offset mismatch for UWBP_Jam_NowPlaying_StatusMessage_C::LoopLimitText");
static_assert(offsetof(UWBP_Jam_NowPlaying_StatusMessage_C, LoopLimitIcon) == 824, "Offset mismatch for UWBP_Jam_NowPlaying_StatusMessage_C::LoopLimitIcon");
static_assert(offsetof(UWBP_Jam_NowPlaying_StatusMessage_C, LoopLimitIconTint) == 832, "Offset mismatch for UWBP_Jam_NowPlaying_StatusMessage_C::LoopLimitIconTint");
