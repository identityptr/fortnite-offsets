/**
 * decamp dumper generated SDK
 * Package: /TofuGardenMatchEnd/Gameplay/GA_TofuGarden_DisplayWings
 */
#pragma once
#include "Basic.h"

// /TofuGardenMatchEnd/Gameplay/GA_TofuGarden_DisplayWings.GA_TofuGarden_DisplayWings_C
// Kind: BlueprintGeneratedClass; super: FortGameplayAbility
class UGA_TofuGarden_DisplayWings_C
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0B20 (Size: 0x8, Type: StructProperty)
    void* WingsActor; // 0x0B28 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisplayWingsCueTag[0x8]; // 0x0B30 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayTimeSecondsRow[0x28]; // 0x0B38 (Size: 0x28, Type: StructProperty)
    std::uint8_t HideWingsOnEmoteRow[0x28]; // 0x0B60 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialDisplayDelayRow[0x28]; // 0x0B88 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlockEmoteRow[0x28]; // 0x0BB0 (Size: 0x28, Type: StructProperty)
    void* InitialDelayTask; // 0x0BD8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WingVisualsEnabledRow[0x28]; // 0x0BE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AdditionalAbilityDisplayTimeRow[0x28]; // 0x0C08 (Size: 0x28, Type: StructProperty)
    void* WaitEmoteTask; // 0x0C30 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, UberGraphFrame) == 2848, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::UberGraphFrame");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, WingsActor) == 2856, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::WingsActor");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, DisplayWingsCueTag) == 2864, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::DisplayWingsCueTag");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, DisplayTimeSecondsRow) == 2872, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::DisplayTimeSecondsRow");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, HideWingsOnEmoteRow) == 2912, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::HideWingsOnEmoteRow");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, InitialDisplayDelayRow) == 2952, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::InitialDisplayDelayRow");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, BlockEmoteRow) == 2992, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::BlockEmoteRow");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, InitialDelayTask) == 3032, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::InitialDelayTask");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, WingVisualsEnabledRow) == 3040, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::WingVisualsEnabledRow");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, AdditionalAbilityDisplayTimeRow) == 3080, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::AdditionalAbilityDisplayTimeRow");
static_assert(offsetof(UGA_TofuGarden_DisplayWings_C, WaitEmoteTask) == 3120, "Offset mismatch for UGA_TofuGarden_DisplayWings_C::WaitEmoteTask");
