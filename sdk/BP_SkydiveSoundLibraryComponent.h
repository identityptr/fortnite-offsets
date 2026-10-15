/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C
// Kind: BlueprintGeneratedClass; super: FortSkydiveSoundLibraryComponent
class UBP_SkydiveSoundLibraryComponent_C
{
public:
    std::uint8_t Pad_0000[0x1A8]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x01A8 (Size: 0x8, Type: StructProperty)
    std::uint8_t SkydiveEventTag[0x8]; // 0x01B0 (Size: 0x8, Type: StructProperty)
    TArray<void*> Components; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsSubmixRegistered; // 0x01C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBP_SkydiveSoundLibraryComponent_C, UberGraphFrame) == 424, "Offset mismatch for UBP_SkydiveSoundLibraryComponent_C::UberGraphFrame");
static_assert(offsetof(UBP_SkydiveSoundLibraryComponent_C, SkydiveEventTag) == 432, "Offset mismatch for UBP_SkydiveSoundLibraryComponent_C::SkydiveEventTag");
static_assert(offsetof(UBP_SkydiveSoundLibraryComponent_C, Components) == 440, "Offset mismatch for UBP_SkydiveSoundLibraryComponent_C::Components");
static_assert(offsetof(UBP_SkydiveSoundLibraryComponent_C, bIsSubmixRegistered) == 456, "Offset mismatch for UBP_SkydiveSoundLibraryComponent_C::bIsSubmixRegistered");
