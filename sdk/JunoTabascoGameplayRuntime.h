/**
 * decamp dumper generated SDK
 * Package: /Script/JunoTabascoGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoTabascoGameplayRuntime.JunoTabascoPOIAnnouncementEvent
// Kind: ScriptStruct; super: none
struct FJunoTabascoPOIAnnouncementEvent
{
public:
    std::uint8_t RowName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Level; // 0x0004 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    FText SubtitleOverrideText; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FJunoTabascoPOIAnnouncementEvent, RowName) == 0, "Offset mismatch for FJunoTabascoPOIAnnouncementEvent::RowName");
static_assert(offsetof(FJunoTabascoPOIAnnouncementEvent, Level) == 4, "Offset mismatch for FJunoTabascoPOIAnnouncementEvent::Level");
static_assert(offsetof(FJunoTabascoPOIAnnouncementEvent, SubtitleOverrideText) == 8, "Offset mismatch for FJunoTabascoPOIAnnouncementEvent::SubtitleOverrideText");

// /Script/JunoTabascoGameplayRuntime.JunoTabascoPOIExitedEvent
// Kind: ScriptStruct; super: none
struct FJunoTabascoPOIExitedEvent
{
public:
    std::uint8_t Opaque[1];
};
