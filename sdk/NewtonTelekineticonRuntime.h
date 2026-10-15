/**
 * decamp dumper generated SDK
 * Package: /Script/NewtonTelekineticonRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NewtonTelekineticonRuntime.NewtonTelekineticonControlVars
// Kind: ScriptStruct; super: none
struct FNewtonTelekineticonControlVars
{
public:
    std::int32_t HoldOrientationValue; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t HoldPointValue; // 0x0004 (Size: 0x4, Type: IntProperty)
    float StartingGrabDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CurrentHoldDistance; // 0x000C (Size: 0x4, Type: FloatProperty)
    float BreakDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float HoldStiffness; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float GrabRange; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNewtonTelekineticonControlVars, HoldOrientationValue) == 0, "Offset mismatch for FNewtonTelekineticonControlVars::HoldOrientationValue");
static_assert(offsetof(FNewtonTelekineticonControlVars, HoldPointValue) == 4, "Offset mismatch for FNewtonTelekineticonControlVars::HoldPointValue");
static_assert(offsetof(FNewtonTelekineticonControlVars, StartingGrabDistance) == 8, "Offset mismatch for FNewtonTelekineticonControlVars::StartingGrabDistance");
static_assert(offsetof(FNewtonTelekineticonControlVars, CurrentHoldDistance) == 12, "Offset mismatch for FNewtonTelekineticonControlVars::CurrentHoldDistance");
static_assert(offsetof(FNewtonTelekineticonControlVars, BreakDistance) == 16, "Offset mismatch for FNewtonTelekineticonControlVars::BreakDistance");
static_assert(offsetof(FNewtonTelekineticonControlVars, HoldStiffness) == 20, "Offset mismatch for FNewtonTelekineticonControlVars::HoldStiffness");
static_assert(offsetof(FNewtonTelekineticonControlVars, GrabRange) == 24, "Offset mismatch for FNewtonTelekineticonControlVars::GrabRange");

// /Script/NewtonTelekineticonRuntime.NewtonTelekineticon
// Kind: Class; super: ActorComponent
class UNewtonTelekineticon
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float InterpolationSpeed; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4A0]; // 0x00C4
    std::uint8_t DrawDebug; // 0x0564 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0565
    FMulticastInlineDelegate OnComponentGrabbed; // 0x0568 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnComponentReleased; // 0x0578 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVerseControlVarsChanged; // 0x0588 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTelekineticonTick; // 0x0598 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UNewtonTelekineticon, InterpolationSpeed) == 192, "Offset mismatch for UNewtonTelekineticon::InterpolationSpeed");
static_assert(offsetof(UNewtonTelekineticon, DrawDebug) == 1380, "Offset mismatch for UNewtonTelekineticon::DrawDebug");
static_assert(offsetof(UNewtonTelekineticon, OnComponentGrabbed) == 1384, "Offset mismatch for UNewtonTelekineticon::OnComponentGrabbed");
static_assert(offsetof(UNewtonTelekineticon, OnComponentReleased) == 1400, "Offset mismatch for UNewtonTelekineticon::OnComponentReleased");
static_assert(offsetof(UNewtonTelekineticon, OnVerseControlVarsChanged) == 1416, "Offset mismatch for UNewtonTelekineticon::OnVerseControlVarsChanged");
static_assert(offsetof(UNewtonTelekineticon, OnTelekineticonTick) == 1432, "Offset mismatch for UNewtonTelekineticon::OnTelekineticonTick");
