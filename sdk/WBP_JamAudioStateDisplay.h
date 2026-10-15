/**
 * decamp dumper generated SDK
 * Package: /FMJamSystem/Widgets/SongInfo/WBP_JamAudioStateDisplay
 */
#pragma once
#include "Basic.h"

// /FMJamSystem/Widgets/SongInfo/WBP_JamAudioStateDisplay.WBP_JamAudioStateDisplay_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_JamAudioStateDisplay_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* WBP_Background; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* KeyModeTextBlock; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* BPMTextBlock; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* JamGlobalStateVM; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Key; // 0x0328 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Mode; // 0x0329 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x032A
    std::int32_t Tempo; // 0x032C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0330
    std::uint8_t StandardTextColor[0x14]; // 0x0334 (Size: 0x14, Type: StructProperty)
    std::uint8_t MaxPlayersTextColor[0x1]; // 0x0348 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_JamAudioStateDisplay_C, WBP_Background) == 776, "Offset mismatch for UWBP_JamAudioStateDisplay_C::WBP_Background");
static_assert(offsetof(UWBP_JamAudioStateDisplay_C, KeyModeTextBlock) == 784, "Offset mismatch for UWBP_JamAudioStateDisplay_C::KeyModeTextBlock");
static_assert(offsetof(UWBP_JamAudioStateDisplay_C, BPMTextBlock) == 792, "Offset mismatch for UWBP_JamAudioStateDisplay_C::BPMTextBlock");
static_assert(offsetof(UWBP_JamAudioStateDisplay_C, JamGlobalStateVM) == 800, "Offset mismatch for UWBP_JamAudioStateDisplay_C::JamGlobalStateVM");
static_assert(offsetof(UWBP_JamAudioStateDisplay_C, Key) == 808, "Offset mismatch for UWBP_JamAudioStateDisplay_C::Key");
static_assert(offsetof(UWBP_JamAudioStateDisplay_C, Mode) == 809, "Offset mismatch for UWBP_JamAudioStateDisplay_C::Mode");
static_assert(offsetof(UWBP_JamAudioStateDisplay_C, Tempo) == 812, "Offset mismatch for UWBP_JamAudioStateDisplay_C::Tempo");
static_assert(offsetof(UWBP_JamAudioStateDisplay_C, StandardTextColor) == 820, "Offset mismatch for UWBP_JamAudioStateDisplay_C::StandardTextColor");
static_assert(offsetof(UWBP_JamAudioStateDisplay_C, MaxPlayersTextColor) == 840, "Offset mismatch for UWBP_JamAudioStateDisplay_C::MaxPlayersTextColor");
