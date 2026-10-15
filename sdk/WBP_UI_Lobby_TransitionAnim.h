/**
 * decamp dumper generated SDK
 * Package: /Game/UI/DiscoveryShared/Matchmaking/MatchFoundAnimation/WBP_UI_Lobby_TransitionAnim
 */
#pragma once
#include "Basic.h"

// /Game/UI/DiscoveryShared/Matchmaking/MatchFoundAnimation/WBP_UI_Lobby_TransitionAnim.WBP_UI_Lobby_TransitionAnim_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_UI_Lobby_TransitionAnim_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0308 (Size: 0x10, Type: StructProperty)
    void* Text; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0320
    void* Border; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_UI_Lobby_TransitionAnim_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_UI_Lobby_TransitionAnim_C::UberGraphFrame");
static_assert(offsetof(UWBP_UI_Lobby_TransitionAnim_C, Text) == 792, "Offset mismatch for UWBP_UI_Lobby_TransitionAnim_C::Text");
static_assert(offsetof(UWBP_UI_Lobby_TransitionAnim_C, Border) == 864, "Offset mismatch for UWBP_UI_Lobby_TransitionAnim_C::Border");
