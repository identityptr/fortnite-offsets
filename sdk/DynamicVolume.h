/**
 * decamp dumper generated SDK
 * Package: /DynamicVolume/_Verse/VNI/DynamicVolume
 */
#pragma once
#include "Basic.h"

// /DynamicVolume/_Verse/VNI/DynamicVolume.dynamic_volume
// Kind: VerseClass; super: None
class Udynamic_volume
{
public:
    std::uint8_t Opaque[1];
};


// /DynamicVolume/_Verse/VNI/DynamicVolume.dynamic_volume_component
// Kind: VerseClass; super: Component
class Udynamic_volume_component
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t verse_0x5CDFC2A5_Enabled; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(Udynamic_volume_component, verse_0x5CDFC2A5_Enabled) == 88, "Offset mismatch for Udynamic_volume_component::verse_0x5CDFC2A5_Enabled");

// /DynamicVolume/_Verse/VNI/DynamicVolume.remove_when_spawned_within
// Kind: VerseClass; super: dynamic_volume
class Uremove_when_spawned_within
{
public:
    std::uint8_t Opaque[1];
};
