/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/Frontend/AthenaTabsScreen
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/Frontend/AthenaTabsScreen.AthenaTabsScreen_C
// Kind: WidgetBlueprintGeneratedClass; super: FortAthenaTabsScreenBase
class UAthenaTabsScreen_C
{
public:
    std::uint8_t Pad_0000[0x540]; // 0x0000
    std::uint8_t UberGraphFrame[0x18]; // 0x0540 (Size: 0x18, Type: StructProperty)
    void* AthenaLobby; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaTabsScreen_C, UberGraphFrame) == 1344, "Offset mismatch for UAthenaTabsScreen_C::UberGraphFrame");
static_assert(offsetof(UAthenaTabsScreen_C, AthenaLobby) == 1368, "Offset mismatch for UAthenaTabsScreen_C::AthenaLobby");
