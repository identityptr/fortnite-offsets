/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/Foundation/UIManager_Startup
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/Foundation/UIManager_Startup.UIManager_Startup_C
// Kind: BlueprintGeneratedClass; super: FortUIManager_Startup
class UUIManager_Startup_C
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LayoutClass[0x20]; // 0x0030 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> RootViewportLayouts; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0060
    TSoftClassPtr<void> UIManagerClass; // 0x0068 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UUIManager_Startup_C, LayoutClass) == 48, "Offset mismatch for UUIManager_Startup_C::LayoutClass");
static_assert(offsetof(UUIManager_Startup_C, RootViewportLayouts) == 80, "Offset mismatch for UUIManager_Startup_C::RootViewportLayouts");
static_assert(offsetof(UUIManager_Startup_C, UIManagerClass) == 104, "Offset mismatch for UUIManager_Startup_C::UIManagerClass");
