/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryContext
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryContext.BP_SkydiveSoundLibraryContext_C
// Kind: BlueprintGeneratedClass; super: FortSkydiveSoundLibraryContext
class UBP_SkydiveSoundLibraryContext_C
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t PlaybackSettings[0x58]; // 0x0060 (Size: 0x58, Type: StructProperty)
    std::uint8_t bAppendPerspectiveTag; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBP_SkydiveSoundLibraryContext_C, PlaybackSettings) == 96, "Offset mismatch for UBP_SkydiveSoundLibraryContext_C::PlaybackSettings");
static_assert(offsetof(UBP_SkydiveSoundLibraryContext_C, bAppendPerspectiveTag) == 184, "Offset mismatch for UBP_SkydiveSoundLibraryContext_C::bAppendPerspectiveTag");
