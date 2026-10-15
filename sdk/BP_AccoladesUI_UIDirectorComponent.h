/**
 * decamp dumper generated SDK
 * Package: /AccoladesUI/Director/BP_AccoladesUI_UIDirectorComponent
 */
#pragma once
#include "Basic.h"

// /AccoladesUI/Director/BP_AccoladesUI_UIDirectorComponent.BP_AccoladesUI_UIDirectorComponent_C
// Kind: BlueprintGeneratedClass; super: FortDynamicUIDirectorComponent
class UBP_AccoladesUI_UIDirectorComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    void* ListenToMatchStatsPanelActivationChangeAsyncTaskRef; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RemoveAccoladesTimerHandle[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    void* ListenToTriggerAccoladesListWidgetRemovalAsynTaskRef; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_AccoladesUI_UIDirectorComponent_C, UberGraphFrame) == 192, "Offset mismatch for UBP_AccoladesUI_UIDirectorComponent_C::UberGraphFrame");
static_assert(offsetof(UBP_AccoladesUI_UIDirectorComponent_C, ListenToMatchStatsPanelActivationChangeAsyncTaskRef) == 200, "Offset mismatch for UBP_AccoladesUI_UIDirectorComponent_C::ListenToMatchStatsPanelActivationChangeAsyncTaskRef");
static_assert(offsetof(UBP_AccoladesUI_UIDirectorComponent_C, RemoveAccoladesTimerHandle) == 208, "Offset mismatch for UBP_AccoladesUI_UIDirectorComponent_C::RemoveAccoladesTimerHandle");
static_assert(offsetof(UBP_AccoladesUI_UIDirectorComponent_C, ListenToTriggerAccoladesListWidgetRemovalAsynTaskRef) == 216, "Offset mismatch for UBP_AccoladesUI_UIDirectorComponent_C::ListenToTriggerAccoladesListWidgetRemovalAsynTaskRef");
