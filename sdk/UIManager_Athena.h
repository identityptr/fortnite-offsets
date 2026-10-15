/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/Foundation/UIManager_Athena
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/Foundation/UIManager_Athena.UIManager_Athena_C
// Kind: BlueprintGeneratedClass; super: FortUIManager_Athena
class UUIManager_Athena_C
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* LetoHudOverlayClass; // 0x0128 (Size: 0x8, Type: ClassProperty)
    void* LetoHudOverlay; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    float SidekickScreenWidthRatio; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UUIManager_Athena_C, LetoHudOverlayClass) == 296, "Offset mismatch for UUIManager_Athena_C::LetoHudOverlayClass");
static_assert(offsetof(UUIManager_Athena_C, LetoHudOverlay) == 304, "Offset mismatch for UUIManager_Athena_C::LetoHudOverlay");
static_assert(offsetof(UUIManager_Athena_C, SidekickScreenWidthRatio) == 312, "Offset mismatch for UUIManager_Athena_C::SidekickScreenWidthRatio");
