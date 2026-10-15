/**
 * decamp dumper generated SDK
 * Package: /Script/CustomizableTacticalSprint
 */
#pragma once
#include "Basic.h"

// /Script/CustomizableTacticalSprint.CustomizableTacticalSprintDirector
// Kind: Class; super: DynamicUIDirectorBase
class UCustomizableTacticalSprintDirector
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> DefaultScenes; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnabledDuringReplay; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    TArray<void*> ScenesManuallyAdded; // 0x0290 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCustomizableTacticalSprintDirector, DefaultScenes) == 624, "Offset mismatch for UCustomizableTacticalSprintDirector::DefaultScenes");
static_assert(offsetof(UCustomizableTacticalSprintDirector, OwningLocalPlayer) == 640, "Offset mismatch for UCustomizableTacticalSprintDirector::OwningLocalPlayer");
static_assert(offsetof(UCustomizableTacticalSprintDirector, bEnabledDuringReplay) == 648, "Offset mismatch for UCustomizableTacticalSprintDirector::bEnabledDuringReplay");
static_assert(offsetof(UCustomizableTacticalSprintDirector, ScenesManuallyAdded) == 656, "Offset mismatch for UCustomizableTacticalSprintDirector::ScenesManuallyAdded");
