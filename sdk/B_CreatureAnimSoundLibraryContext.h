/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/SoundLibrary/Contexts/Creatures/B_CreatureAnimSoundLibraryContext
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/SoundLibrary/Contexts/Creatures/B_CreatureAnimSoundLibraryContext.B_CreatureAnimSoundLibraryContext_C
// Kind: BlueprintGeneratedClass; super: SoundLibraryAnimContext
class UB_CreatureAnimSoundLibraryContext_C
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t AnimSettings[0x38]; // 0x0060 (Size: 0x38, Type: StructProperty)
    std::uint8_t DefaultOffset[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Animation; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MeshComponent; // 0x00B8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bSupportsNotifyEnd; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    float AnimRate; // 0x00C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UB_CreatureAnimSoundLibraryContext_C, AnimSettings) == 96, "Offset mismatch for UB_CreatureAnimSoundLibraryContext_C::AnimSettings");
static_assert(offsetof(UB_CreatureAnimSoundLibraryContext_C, DefaultOffset) == 152, "Offset mismatch for UB_CreatureAnimSoundLibraryContext_C::DefaultOffset");
static_assert(offsetof(UB_CreatureAnimSoundLibraryContext_C, Animation) == 176, "Offset mismatch for UB_CreatureAnimSoundLibraryContext_C::Animation");
static_assert(offsetof(UB_CreatureAnimSoundLibraryContext_C, MeshComponent) == 184, "Offset mismatch for UB_CreatureAnimSoundLibraryContext_C::MeshComponent");
static_assert(offsetof(UB_CreatureAnimSoundLibraryContext_C, bSupportsNotifyEnd) == 192, "Offset mismatch for UB_CreatureAnimSoundLibraryContext_C::bSupportsNotifyEnd");
static_assert(offsetof(UB_CreatureAnimSoundLibraryContext_C, AnimRate) == 196, "Offset mismatch for UB_CreatureAnimSoundLibraryContext_C::AnimRate");
