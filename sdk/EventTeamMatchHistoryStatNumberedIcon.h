/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Events/Leaderboards/EventTeamMatchHistoryStatNumberedIcon
 */
#pragma once
#include "Basic.h"

// /Game/UI/Events/Leaderboards/EventTeamMatchHistoryStatNumberedIcon.EventTeamMatchHistoryStatNumberedIcon_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UEventTeamMatchHistoryStatNumberedIcon_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* Text_StatType; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* Selected; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StatColor[0x14]; // 0x0320 (Size: 0x14, Type: StructProperty)
    std::uint8_t bSetTextColor; // 0x0334 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEventTeamMatchHistoryStatNumberedIcon_C, UberGraphFrame) == 776, "Offset mismatch for UEventTeamMatchHistoryStatNumberedIcon_C::UberGraphFrame");
static_assert(offsetof(UEventTeamMatchHistoryStatNumberedIcon_C, Text_StatType) == 784, "Offset mismatch for UEventTeamMatchHistoryStatNumberedIcon_C::Text_StatType");
static_assert(offsetof(UEventTeamMatchHistoryStatNumberedIcon_C, Selected) == 792, "Offset mismatch for UEventTeamMatchHistoryStatNumberedIcon_C::Selected");
static_assert(offsetof(UEventTeamMatchHistoryStatNumberedIcon_C, StatColor) == 800, "Offset mismatch for UEventTeamMatchHistoryStatNumberedIcon_C::StatColor");
static_assert(offsetof(UEventTeamMatchHistoryStatNumberedIcon_C, bSetTextColor) == 820, "Offset mismatch for UEventTeamMatchHistoryStatNumberedIcon_C::bSetTextColor");
