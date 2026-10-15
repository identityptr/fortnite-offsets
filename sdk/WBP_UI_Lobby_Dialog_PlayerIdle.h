/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/Frontend/WBP_UI_Lobby_Dialog_PlayerIdle
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/Frontend/WBP_UI_Lobby_Dialog_PlayerIdle.WBP_UI_Lobby_Dialog_PlayerIdle_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonActivatableWidget
class UWBP_UI_Lobby_Dialog_PlayerIdle_C
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x18]; // 0x04A0 (Size: 0x18, Type: StructProperty)
    void* ProgressBar; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* FortPartyMemberIdleVM; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    double InterpTime; // 0x04C8 (Size: 0x8, Type: DoubleProperty)
    double IdleTime; // 0x04D0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UWBP_UI_Lobby_Dialog_PlayerIdle_C, UberGraphFrame) == 1184, "Offset mismatch for UWBP_UI_Lobby_Dialog_PlayerIdle_C::UberGraphFrame");
static_assert(offsetof(UWBP_UI_Lobby_Dialog_PlayerIdle_C, ProgressBar) == 1208, "Offset mismatch for UWBP_UI_Lobby_Dialog_PlayerIdle_C::ProgressBar");
static_assert(offsetof(UWBP_UI_Lobby_Dialog_PlayerIdle_C, FortPartyMemberIdleVM) == 1216, "Offset mismatch for UWBP_UI_Lobby_Dialog_PlayerIdle_C::FortPartyMemberIdleVM");
static_assert(offsetof(UWBP_UI_Lobby_Dialog_PlayerIdle_C, InterpTime) == 1224, "Offset mismatch for UWBP_UI_Lobby_Dialog_PlayerIdle_C::InterpTime");
static_assert(offsetof(UWBP_UI_Lobby_Dialog_PlayerIdle_C, IdleTime) == 1232, "Offset mismatch for UWBP_UI_Lobby_Dialog_PlayerIdle_C::IdleTime");
