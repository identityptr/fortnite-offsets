/**
 * decamp dumper generated SDK
 * Package: /FMJamSystem/Components/BP_JamOnOffSwitchComponent
 */
#pragma once
#include "Basic.h"

// /FMJamSystem/Components/BP_JamOnOffSwitchComponent.BP_JamOnOffSwitchComponent_C
// Kind: BlueprintGeneratedClass; super: JamOnOffSwitchComponent
class UBP_JamOnOffSwitchComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bEnableJam[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    void* JamBlockerEffect; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t JamBlockerEffectHandle[0x14]; // 0x00F0 (Size: 0x14, Type: StructProperty)
    std::uint8_t GamePhaseUpdatedEventHandle[0x1]; // 0x0104 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBP_JamOnOffSwitchComponent_C, bEnableJam) == 192, "Offset mismatch for UBP_JamOnOffSwitchComponent_C::bEnableJam");
static_assert(offsetof(UBP_JamOnOffSwitchComponent_C, JamBlockerEffect) == 232, "Offset mismatch for UBP_JamOnOffSwitchComponent_C::JamBlockerEffect");
static_assert(offsetof(UBP_JamOnOffSwitchComponent_C, JamBlockerEffectHandle) == 240, "Offset mismatch for UBP_JamOnOffSwitchComponent_C::JamBlockerEffectHandle");
static_assert(offsetof(UBP_JamOnOffSwitchComponent_C, GamePhaseUpdatedEventHandle) == 260, "Offset mismatch for UBP_JamOnOffSwitchComponent_C::GamePhaseUpdatedEventHandle");
