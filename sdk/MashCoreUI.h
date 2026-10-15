/**
 * decamp dumper generated SDK
 * Package: /Script/MashCoreUI
 */
#pragma once
#include "Basic.h"

// /Script/MashCoreUI.MashCoreUIBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMashCoreUIBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MashCoreUI.MashCoreUIHunterRankScreen
// Kind: Class; super: CommonActivatableWidget
class UMashCoreUIHunterRankScreen
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    std::uint8_t MapTabInfo[0x40]; // 0x04C8 (Size: 0x40, Type: StructProperty)
    FString TemplateId; // 0x0508 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMashCoreUIHunterRankScreen, MapTabInfo) == 1224, "Offset mismatch for UMashCoreUIHunterRankScreen::MapTabInfo");
static_assert(offsetof(UMashCoreUIHunterRankScreen, TemplateId) == 1288, "Offset mismatch for UMashCoreUIHunterRankScreen::TemplateId");
