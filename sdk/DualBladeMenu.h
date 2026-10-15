/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/Frontend/MainMenu/DualBladeMenu
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/Frontend/MainMenu/DualBladeMenu.DualBladeMenu_C
// Kind: WidgetBlueprintGeneratedClass; super: FortDualBladeMenu
class UDualBladeMenu_C
{
public:
    std::uint8_t Pad_0000[0x550]; // 0x0000
    std::uint8_t UberGraphFrame[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    void* IntroAnim; // 0x0578 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDualBladeMenu_C, UberGraphFrame) == 1360, "Offset mismatch for UDualBladeMenu_C::UberGraphFrame");
static_assert(offsetof(UDualBladeMenu_C, IntroAnim) == 1400, "Offset mismatch for UDualBladeMenu_C::IntroAnim");
