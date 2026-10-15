/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Frontend/TopBar/WBP_EpicPartyPlayerCount
 */
#pragma once
#include "Basic.h"

// /Game/UI/Frontend/TopBar/WBP_EpicPartyPlayerCount.WBP_EpicPartyPlayerCount_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_EpicPartyPlayerCount_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* Text; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* Outline; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Icon; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* Content; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* Background; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* FortSocialEpicPartyViewModel; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_EpicPartyPlayerCount_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_EpicPartyPlayerCount_C::UberGraphFrame");
static_assert(offsetof(UWBP_EpicPartyPlayerCount_C, Text) == 784, "Offset mismatch for UWBP_EpicPartyPlayerCount_C::Text");
static_assert(offsetof(UWBP_EpicPartyPlayerCount_C, Outline) == 792, "Offset mismatch for UWBP_EpicPartyPlayerCount_C::Outline");
static_assert(offsetof(UWBP_EpicPartyPlayerCount_C, Icon) == 800, "Offset mismatch for UWBP_EpicPartyPlayerCount_C::Icon");
static_assert(offsetof(UWBP_EpicPartyPlayerCount_C, Content) == 808, "Offset mismatch for UWBP_EpicPartyPlayerCount_C::Content");
static_assert(offsetof(UWBP_EpicPartyPlayerCount_C, Background) == 816, "Offset mismatch for UWBP_EpicPartyPlayerCount_C::Background");
static_assert(offsetof(UWBP_EpicPartyPlayerCount_C, FortSocialEpicPartyViewModel) == 824, "Offset mismatch for UWBP_EpicPartyPlayerCount_C::FortSocialEpicPartyViewModel");
