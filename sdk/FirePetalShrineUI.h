/**
 * decamp dumper generated SDK
 * Package: /Script/FirePetalShrineUI
 */
#pragma once
#include "Basic.h"

// /Script/FirePetalShrineUI.FirePetalShrine_UIHelperComponent
// Kind: Class; super: ActorComponent
class UFirePetalShrine_UIHelperComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ShrineCompassBrush[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t CanMarkShrinesInCompass[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShrinesMarkedCompassTime[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAnchorCompassIconOnEdges; // 0x01C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFirePetalShrine_UIHelperComponent, ShrineCompassBrush) == 192, "Offset mismatch for UFirePetalShrine_UIHelperComponent::ShrineCompassBrush");
static_assert(offsetof(UFirePetalShrine_UIHelperComponent, CanMarkShrinesInCompass) == 368, "Offset mismatch for UFirePetalShrine_UIHelperComponent::CanMarkShrinesInCompass");
static_assert(offsetof(UFirePetalShrine_UIHelperComponent, ShrinesMarkedCompassTime) == 408, "Offset mismatch for UFirePetalShrine_UIHelperComponent::ShrinesMarkedCompassTime");
static_assert(offsetof(UFirePetalShrine_UIHelperComponent, bAnchorCompassIconOnEdges) == 448, "Offset mismatch for UFirePetalShrine_UIHelperComponent::bAnchorCompassIconOnEdges");
