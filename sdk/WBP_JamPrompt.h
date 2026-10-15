/**
 * decamp dumper generated SDK
 * Package: /FMJamSystem/Widgets/WBP_JamPrompt
 */
#pragma once
#include "Basic.h"

// /FMJamSystem/Widgets/WBP_JamPrompt.WBP_JamPrompt_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_JamPrompt_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* TouchKeybindIcon_StopAutoJammerSong; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* TouchKeybindIcon_QuickJoin; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* TouchKeybindIcon_PlaceAutoJammer; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* TouchKeybindIcon_ChangeAutoJammerSong; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* TouchIconSwitcher; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* RichText_Prompt; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Keybind_Prompt; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0348
    std::uint8_t ActionDesc[0x10]; // 0x0350 (Size: 0x10, Type: TextProperty)
    FName ActionIdentifier; // 0x0360 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UWBP_JamPrompt_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_JamPrompt_C::UberGraphFrame");
static_assert(offsetof(UWBP_JamPrompt_C, TouchKeybindIcon_StopAutoJammerSong) == 784, "Offset mismatch for UWBP_JamPrompt_C::TouchKeybindIcon_StopAutoJammerSong");
static_assert(offsetof(UWBP_JamPrompt_C, TouchKeybindIcon_QuickJoin) == 792, "Offset mismatch for UWBP_JamPrompt_C::TouchKeybindIcon_QuickJoin");
static_assert(offsetof(UWBP_JamPrompt_C, TouchKeybindIcon_PlaceAutoJammer) == 800, "Offset mismatch for UWBP_JamPrompt_C::TouchKeybindIcon_PlaceAutoJammer");
static_assert(offsetof(UWBP_JamPrompt_C, TouchKeybindIcon_ChangeAutoJammerSong) == 808, "Offset mismatch for UWBP_JamPrompt_C::TouchKeybindIcon_ChangeAutoJammerSong");
static_assert(offsetof(UWBP_JamPrompt_C, TouchIconSwitcher) == 816, "Offset mismatch for UWBP_JamPrompt_C::TouchIconSwitcher");
static_assert(offsetof(UWBP_JamPrompt_C, RichText_Prompt) == 824, "Offset mismatch for UWBP_JamPrompt_C::RichText_Prompt");
static_assert(offsetof(UWBP_JamPrompt_C, Keybind_Prompt) == 832, "Offset mismatch for UWBP_JamPrompt_C::Keybind_Prompt");
static_assert(offsetof(UWBP_JamPrompt_C, ActionDesc) == 848, "Offset mismatch for UWBP_JamPrompt_C::ActionDesc");
static_assert(offsetof(UWBP_JamPrompt_C, ActionIdentifier) == 864, "Offset mismatch for UWBP_JamPrompt_C::ActionIdentifier");
