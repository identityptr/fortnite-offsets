/**
 * decamp dumper generated SDK
 * Package: /Script/EmporiumRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EmporiumRuntime.EmporiumAssetsPaths
// Kind: Class; super: Object
class UEmporiumAssetsPaths
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MR_MI_Opaque[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Opaque_Clearcoat[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Opaque_Sheen[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Opaque_Unlit[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Translucent[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Translucent_Clearcoat[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Transmission[0x20]; // 0x00E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Opaque_TS[0x20]; // 0x0108 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Opaque_Clearcoat_TS[0x20]; // 0x0128 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Opaque_Sheen_TS[0x20]; // 0x0148 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Opaque_Unlit_TS[0x20]; // 0x0168 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Translucent_TS[0x20]; // 0x0188 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Translucent_Clearcoat_TS[0x20]; // 0x01A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Transmission_TS[0x20]; // 0x01C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Opaque[0x20]; // 0x01E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Opaque_Clearcoat[0x20]; // 0x0208 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Opaque_Sheen[0x20]; // 0x0228 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Translucent[0x20]; // 0x0248 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Translucent_Clearcoat[0x20]; // 0x0268 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Transmission[0x20]; // 0x0288 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Opaque_TS[0x20]; // 0x02A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Opaque_Clearcoat_TS[0x20]; // 0x02C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Opaque_Sheen_TS[0x20]; // 0x02E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Translucent_TS[0x20]; // 0x0308 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Translucent_Clearcoat_TS[0x20]; // 0x0328 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Transmission_TS[0x20]; // 0x0348 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SG_MI_Foliage_TS[0x20]; // 0x0368 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MR_MI_Foliage_TS[0x20]; // 0x0388 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> PlaceholderSphere; // 0x03A8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque) == 40, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Opaque");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Clearcoat) == 72, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Opaque_Clearcoat");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Sheen) == 104, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Opaque_Sheen");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Unlit) == 136, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Opaque_Unlit");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Translucent) == 168, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Translucent");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Translucent_Clearcoat) == 200, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Translucent_Clearcoat");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Transmission) == 232, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Transmission");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_TS) == 264, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Opaque_TS");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Clearcoat_TS) == 296, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Opaque_Clearcoat_TS");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Sheen_TS) == 328, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Opaque_Sheen_TS");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Opaque_Unlit_TS) == 360, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Opaque_Unlit_TS");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Translucent_TS) == 392, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Translucent_TS");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Translucent_Clearcoat_TS) == 424, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Translucent_Clearcoat_TS");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Transmission_TS) == 456, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Transmission_TS");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque) == 488, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Opaque");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_Clearcoat) == 520, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Opaque_Clearcoat");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_Sheen) == 552, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Opaque_Sheen");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Translucent) == 584, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Translucent");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Translucent_Clearcoat) == 616, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Translucent_Clearcoat");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Transmission) == 648, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Transmission");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_TS) == 680, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Opaque_TS");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_Clearcoat_TS) == 712, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Opaque_Clearcoat_TS");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Opaque_Sheen_TS) == 744, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Opaque_Sheen_TS");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Translucent_TS) == 776, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Translucent_TS");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Translucent_Clearcoat_TS) == 808, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Translucent_Clearcoat_TS");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Transmission_TS) == 840, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Transmission_TS");
static_assert(offsetof(UEmporiumAssetsPaths, SG_MI_Foliage_TS) == 872, "Offset mismatch for UEmporiumAssetsPaths::SG_MI_Foliage_TS");
static_assert(offsetof(UEmporiumAssetsPaths, MR_MI_Foliage_TS) == 904, "Offset mismatch for UEmporiumAssetsPaths::MR_MI_Foliage_TS");
static_assert(offsetof(UEmporiumAssetsPaths, PlaceholderSphere) == 936, "Offset mismatch for UEmporiumAssetsPaths::PlaceholderSphere");
