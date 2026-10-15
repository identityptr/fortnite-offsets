/**
 * decamp dumper generated SDK
 * Package: /Script/EventModeUI
 */
#pragma once
#include "Basic.h"

// /Script/EventModeUI.FocusButton
// Kind: Class; super: BacchusActionButton
class UFocusButton
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    void* StartFocusingSprite; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* StopFocusingSprite; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFocusButton, StartFocusingSprite) == 1200, "Offset mismatch for UFocusButton::StartFocusingSprite");
static_assert(offsetof(UFocusButton, StopFocusingSprite) == 1208, "Offset mismatch for UFocusButton::StopFocusingSprite");

// /Script/EventModeUI.FortEventModeEmotesWidget
// Kind: Class; super: FortHUDElementWidget
class UFortEventModeEmotesWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t Emote1[0x20]; // 0x0370 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Emote2[0x20]; // 0x0390 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Emote3[0x20]; // 0x03B0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RandomEmotes; // 0x03D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x03E0
    void* Text_Emote1; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* Text_Emote2; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* Text_Emote3; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* Text_EmoteRandom; // 0x0400 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortEventModeEmotesWidget, Emote1) == 880, "Offset mismatch for UFortEventModeEmotesWidget::Emote1");
static_assert(offsetof(UFortEventModeEmotesWidget, Emote2) == 912, "Offset mismatch for UFortEventModeEmotesWidget::Emote2");
static_assert(offsetof(UFortEventModeEmotesWidget, Emote3) == 944, "Offset mismatch for UFortEventModeEmotesWidget::Emote3");
static_assert(offsetof(UFortEventModeEmotesWidget, RandomEmotes) == 976, "Offset mismatch for UFortEventModeEmotesWidget::RandomEmotes");
static_assert(offsetof(UFortEventModeEmotesWidget, Text_Emote1) == 1000, "Offset mismatch for UFortEventModeEmotesWidget::Text_Emote1");
static_assert(offsetof(UFortEventModeEmotesWidget, Text_Emote2) == 1008, "Offset mismatch for UFortEventModeEmotesWidget::Text_Emote2");
static_assert(offsetof(UFortEventModeEmotesWidget, Text_Emote3) == 1016, "Offset mismatch for UFortEventModeEmotesWidget::Text_Emote3");
static_assert(offsetof(UFortEventModeEmotesWidget, Text_EmoteRandom) == 1024, "Offset mismatch for UFortEventModeEmotesWidget::Text_EmoteRandom");

// /Script/EventModeUI.FortMobileActionButtonBehavior_Focus
// Kind: Class; super: FortMobileActionButtonBehavior
class UFortMobileActionButtonBehavior_Focus
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    void* StopFocusingSprite; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileActionButtonBehavior_Focus, StopFocusingSprite) == 664, "Offset mismatch for UFortMobileActionButtonBehavior_Focus::StopFocusingSprite");
