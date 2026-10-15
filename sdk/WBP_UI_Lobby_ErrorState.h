/**
 * decamp dumper generated SDK
 * Package: /EcosystemMatchmakingUI/WBP_UI_Lobby_ErrorState
 */
#pragma once
#include "Basic.h"

// /EcosystemMatchmakingUI/WBP_UI_Lobby_ErrorState.WBP_UI_Lobby_ErrorState_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_UI_Lobby_ErrorState_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* WBP_UIKit_InfoBox; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* SB_MaxWidth; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* FortCountdownTimerVM; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0328
    FText ErrorText; // 0x0338 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UWBP_UI_Lobby_ErrorState_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_UI_Lobby_ErrorState_C::UberGraphFrame");
static_assert(offsetof(UWBP_UI_Lobby_ErrorState_C, WBP_UIKit_InfoBox) == 784, "Offset mismatch for UWBP_UI_Lobby_ErrorState_C::WBP_UIKit_InfoBox");
static_assert(offsetof(UWBP_UI_Lobby_ErrorState_C, SB_MaxWidth) == 792, "Offset mismatch for UWBP_UI_Lobby_ErrorState_C::SB_MaxWidth");
static_assert(offsetof(UWBP_UI_Lobby_ErrorState_C, FortCountdownTimerVM) == 800, "Offset mismatch for UWBP_UI_Lobby_ErrorState_C::FortCountdownTimerVM");
static_assert(offsetof(UWBP_UI_Lobby_ErrorState_C, ErrorText) == 824, "Offset mismatch for UWBP_UI_Lobby_ErrorState_C::ErrorText");
