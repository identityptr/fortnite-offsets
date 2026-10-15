/**
 * decamp dumper generated SDK
 * Package: /CRD_VFX_Spawner/_Verse/VNI/CRD_VFX_Spawner
 */
#pragma once
#include "Basic.h"

// /CRD_VFX_Spawner/_Verse/VNI/CRD_VFX_Spawner.character_transformation_device
// Kind: VerseClass; super: none
class Ucharacter_transformation_device
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* SavedActor; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Ucharacter_transformation_device, SavedActor) == 160, "Offset mismatch for Ucharacter_transformation_device::SavedActor");

// /CRD_VFX_Spawner/_Verse/VNI/CRD_VFX_Spawner.vfx_spawner_device
// Kind: VerseClass; super: none
class Uvfx_spawner_device
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* verse_0x0B58A710_EffectEnabledEvent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x2BB81E37_EffectDisabledEvent; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uvfx_spawner_device, verse_0x0B58A710_EffectEnabledEvent) == 208, "Offset mismatch for Uvfx_spawner_device::verse_0x0B58A710_EffectEnabledEvent");
static_assert(offsetof(Uvfx_spawner_device, verse_0x2BB81E37_EffectDisabledEvent) == 216, "Offset mismatch for Uvfx_spawner_device::verse_0x2BB81E37_EffectDisabledEvent");
