/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/HUD/AutoRun/FortAutoRunNotificationWidget
 */
#pragma once
#include "Basic.h"

// /Game/Athena/HUD/AutoRun/FortAutoRunNotificationWidget.FortAutoRunNotificationWidget_C
// Kind: WidgetBlueprintGeneratedClass; super: FortAutoRunNotificationWidget
class UFortAutoRunNotificationWidget_C
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0340 (Size: 0x8, Type: StructProperty)
    void* Text; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Overlay; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0358
    void* Image_Background; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* Intro; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Outro; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAutoRunNotificationWidget_C, UberGraphFrame) == 832, "Offset mismatch for UFortAutoRunNotificationWidget_C::UberGraphFrame");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Text) == 840, "Offset mismatch for UFortAutoRunNotificationWidget_C::Text");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Overlay) == 848, "Offset mismatch for UFortAutoRunNotificationWidget_C::Overlay");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Image_Background) == 864, "Offset mismatch for UFortAutoRunNotificationWidget_C::Image_Background");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Intro) == 872, "Offset mismatch for UFortAutoRunNotificationWidget_C::Intro");
static_assert(offsetof(UFortAutoRunNotificationWidget_C, Outro) == 880, "Offset mismatch for UFortAutoRunNotificationWidget_C::Outro");
