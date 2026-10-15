/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/UI/InGame/EventNotifications/XpSubNotification
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/UI/InGame/EventNotifications/XpSubNotification.XpSubNotification_C
// Kind: WidgetBlueprintGeneratedClass; super: XpEarnedSubNotification
class UXpSubNotification_C
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0358 (Size: 0x10, Type: StructProperty)
    void* Text_RewardType; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Icons; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0378
    void* Image_Shadow; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x03C0
    void* Image_Icon; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* Image_Icon_2; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* Intro; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UXpSubNotification_C, UberGraphFrame) == 856, "Offset mismatch for UXpSubNotification_C::UberGraphFrame");
static_assert(offsetof(UXpSubNotification_C, Text_RewardType) == 872, "Offset mismatch for UXpSubNotification_C::Text_RewardType");
static_assert(offsetof(UXpSubNotification_C, Switcher_Icons) == 880, "Offset mismatch for UXpSubNotification_C::Switcher_Icons");
static_assert(offsetof(UXpSubNotification_C, Image_Shadow) == 952, "Offset mismatch for UXpSubNotification_C::Image_Shadow");
static_assert(offsetof(UXpSubNotification_C, Image_Icon) == 968, "Offset mismatch for UXpSubNotification_C::Image_Icon");
static_assert(offsetof(UXpSubNotification_C, Image_Icon_2) == 976, "Offset mismatch for UXpSubNotification_C::Image_Icon_2");
static_assert(offsetof(UXpSubNotification_C, Intro) == 984, "Offset mismatch for UXpSubNotification_C::Intro");
