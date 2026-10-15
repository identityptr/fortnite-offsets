/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/WBP_Discovery_WarningIcon
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/WBP_Discovery_WarningIcon.WBP_Discovery_WarningIcon_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_Discovery_WarningIcon_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* Anim_WarningPulse; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_Discovery_WarningIcon_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_Discovery_WarningIcon_C::UberGraphFrame");
static_assert(offsetof(UWBP_Discovery_WarningIcon_C, Anim_WarningPulse) == 784, "Offset mismatch for UWBP_Discovery_WarningIcon_C::Anim_WarningPulse");
