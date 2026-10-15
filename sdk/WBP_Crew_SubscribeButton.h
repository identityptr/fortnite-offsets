/**
 * decamp dumper generated SDK
 * Package: /Crew/UI/WBP_Crew_SubscribeButton
 */
#pragma once
#include "Basic.h"

// /Crew/UI/WBP_Crew_SubscribeButton.WBP_Crew_SubscribeButton_C
// Kind: WidgetBlueprintGeneratedClass; super: FortProgressiveTableOfContentsScreen
class UWBP_Crew_SubscribeButton_C
{
public:
    std::uint8_t Pad_0000[0x518]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0518 (Size: 0x8, Type: StructProperty)
    void* WBP_UIKit_InfoBox; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* CabinSwitch; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* Button_OpenParentalControls; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* button; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* AvailableSwitch; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* CrewVM; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* FortLocalPlayerVM; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ButtonText[0x10]; // 0x0558 (Size: 0x10, Type: TextProperty)
    std::uint8_t ButtonSecondaryText[0x10]; // 0x0568 (Size: 0x10, Type: TextProperty)
    FMulticastInlineDelegate OnSubscribeEngaged; // 0x0578 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_Crew_SubscribeButton_C, UberGraphFrame) == 1304, "Offset mismatch for UWBP_Crew_SubscribeButton_C::UberGraphFrame");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, WBP_UIKit_InfoBox) == 1312, "Offset mismatch for UWBP_Crew_SubscribeButton_C::WBP_UIKit_InfoBox");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, CabinSwitch) == 1320, "Offset mismatch for UWBP_Crew_SubscribeButton_C::CabinSwitch");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, Button_OpenParentalControls) == 1328, "Offset mismatch for UWBP_Crew_SubscribeButton_C::Button_OpenParentalControls");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, button) == 1336, "Offset mismatch for UWBP_Crew_SubscribeButton_C::button");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, AvailableSwitch) == 1344, "Offset mismatch for UWBP_Crew_SubscribeButton_C::AvailableSwitch");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, CrewVM) == 1352, "Offset mismatch for UWBP_Crew_SubscribeButton_C::CrewVM");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, FortLocalPlayerVM) == 1360, "Offset mismatch for UWBP_Crew_SubscribeButton_C::FortLocalPlayerVM");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, ButtonText) == 1368, "Offset mismatch for UWBP_Crew_SubscribeButton_C::ButtonText");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, ButtonSecondaryText) == 1384, "Offset mismatch for UWBP_Crew_SubscribeButton_C::ButtonSecondaryText");
static_assert(offsetof(UWBP_Crew_SubscribeButton_C, OnSubscribeEngaged) == 1400, "Offset mismatch for UWBP_Crew_SubscribeButton_C::OnSubscribeEngaged");
