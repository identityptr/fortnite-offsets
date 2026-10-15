/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/Fort_Player/Interaction/SLC_InteractionPlayerDefault
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/Fort_Player/Interaction/SLC_InteractionPlayerDefault.SLC_InteractionPlayerDefault_C
// Kind: BlueprintGeneratedClass; super: SoundLibraryComponent
class USLC_InteractionPlayerDefault_C
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t ComponentTag[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    void* ContextClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Libraries; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnSoundLibraryPlayEvent; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventPlayedDelegate; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventStoppedDelegate; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0120
    void* Context; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USLC_InteractionPlayerDefault_C, ComponentTag) == 208, "Offset mismatch for USLC_InteractionPlayerDefault_C::ComponentTag");
static_assert(offsetof(USLC_InteractionPlayerDefault_C, ContextClass) == 216, "Offset mismatch for USLC_InteractionPlayerDefault_C::ContextClass");
static_assert(offsetof(USLC_InteractionPlayerDefault_C, Libraries) == 224, "Offset mismatch for USLC_InteractionPlayerDefault_C::Libraries");
static_assert(offsetof(USLC_InteractionPlayerDefault_C, OnSoundLibraryPlayEvent) == 240, "Offset mismatch for USLC_InteractionPlayerDefault_C::OnSoundLibraryPlayEvent");
static_assert(offsetof(USLC_InteractionPlayerDefault_C, OnEventPlayedDelegate) == 256, "Offset mismatch for USLC_InteractionPlayerDefault_C::OnEventPlayedDelegate");
static_assert(offsetof(USLC_InteractionPlayerDefault_C, OnEventStoppedDelegate) == 272, "Offset mismatch for USLC_InteractionPlayerDefault_C::OnEventStoppedDelegate");
static_assert(offsetof(USLC_InteractionPlayerDefault_C, Context) == 304, "Offset mismatch for USLC_InteractionPlayerDefault_C::Context");
