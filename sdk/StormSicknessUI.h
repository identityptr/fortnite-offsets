/**
 * decamp dumper generated SDK
 * Package: /Script/StormSicknessUI
 */
#pragma once
#include "Basic.h"

// /Script/StormSicknessUI.StormSicknessWarningWidgetBase
// Kind: Class; super: FortHUDElementWidget
class UStormSicknessWarningWidgetBase
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    std::uint8_t PrioritizationData[0x1]; // 0x03B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UStormSicknessWarningWidgetBase, PrioritizationData) == 944, "Offset mismatch for UStormSicknessWarningWidgetBase::PrioritizationData");
