/**
 * decamp dumper generated SDK
 * Package: /FMJamSystem/Widgets/PartSwitcher/BP_JamPartIcon
 */
#pragma once
#include "Basic.h"

// /FMJamSystem/Widgets/PartSwitcher/BP_JamPartIcon.BP_JamPartIcon_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonActivatableWidget
class UBP_JamPartIcon_C
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x04A0 (Size: 0x8, Type: StructProperty)
    void* Touch_Button; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Pending_Status; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Image_Icon; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Failed_Status; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* PendingAnim; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* FailedAnim; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* SucceededAnim; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* JamMusicSlotVM; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04E8
    void* Gradient; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ImageSize[0x10]; // 0x0500 (Size: 0x10, Type: StructProperty)
    std::uint8_t LoopType; // 0x0510 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UBP_JamPartIcon_C, UberGraphFrame) == 1184, "Offset mismatch for UBP_JamPartIcon_C::UberGraphFrame");
static_assert(offsetof(UBP_JamPartIcon_C, Touch_Button) == 1192, "Offset mismatch for UBP_JamPartIcon_C::Touch_Button");
static_assert(offsetof(UBP_JamPartIcon_C, Pending_Status) == 1200, "Offset mismatch for UBP_JamPartIcon_C::Pending_Status");
static_assert(offsetof(UBP_JamPartIcon_C, Image_Icon) == 1208, "Offset mismatch for UBP_JamPartIcon_C::Image_Icon");
static_assert(offsetof(UBP_JamPartIcon_C, Failed_Status) == 1216, "Offset mismatch for UBP_JamPartIcon_C::Failed_Status");
static_assert(offsetof(UBP_JamPartIcon_C, PendingAnim) == 1224, "Offset mismatch for UBP_JamPartIcon_C::PendingAnim");
static_assert(offsetof(UBP_JamPartIcon_C, FailedAnim) == 1232, "Offset mismatch for UBP_JamPartIcon_C::FailedAnim");
static_assert(offsetof(UBP_JamPartIcon_C, SucceededAnim) == 1240, "Offset mismatch for UBP_JamPartIcon_C::SucceededAnim");
static_assert(offsetof(UBP_JamPartIcon_C, JamMusicSlotVM) == 1248, "Offset mismatch for UBP_JamPartIcon_C::JamMusicSlotVM");
static_assert(offsetof(UBP_JamPartIcon_C, Gradient) == 1272, "Offset mismatch for UBP_JamPartIcon_C::Gradient");
static_assert(offsetof(UBP_JamPartIcon_C, ImageSize) == 1280, "Offset mismatch for UBP_JamPartIcon_C::ImageSize");
static_assert(offsetof(UBP_JamPartIcon_C, LoopType) == 1296, "Offset mismatch for UBP_JamPartIcon_C::LoopType");
