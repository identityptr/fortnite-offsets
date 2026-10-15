/**
 * decamp dumper generated SDK
 * Package: /SpriteExtractionFrontendUI/DynamicUI/BP_SpriteExtractionFrontend_UIDirectorComponent
 */
#pragma once
#include "Basic.h"

// /SpriteExtractionFrontendUI/DynamicUI/BP_SpriteExtractionFrontend_UIDirectorComponent.BP_SpriteExtractionFrontend_UIDirectorComponent_C
// Kind: BlueprintGeneratedClass; super: FortDynamicUIDirectorComponent
class UBP_SpriteExtractionFrontend_UIDirectorComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    void* LobbyEquipScene; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IslandTags[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t LobbyEquipAdded; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBP_SpriteExtractionFrontend_UIDirectorComponent_C, UberGraphFrame) == 192, "Offset mismatch for UBP_SpriteExtractionFrontend_UIDirectorComponent_C::UberGraphFrame");
static_assert(offsetof(UBP_SpriteExtractionFrontend_UIDirectorComponent_C, LobbyEquipScene) == 200, "Offset mismatch for UBP_SpriteExtractionFrontend_UIDirectorComponent_C::LobbyEquipScene");
static_assert(offsetof(UBP_SpriteExtractionFrontend_UIDirectorComponent_C, IslandTags) == 208, "Offset mismatch for UBP_SpriteExtractionFrontend_UIDirectorComponent_C::IslandTags");
static_assert(offsetof(UBP_SpriteExtractionFrontend_UIDirectorComponent_C, LobbyEquipAdded) == 240, "Offset mismatch for UBP_SpriteExtractionFrontend_UIDirectorComponent_C::LobbyEquipAdded");
