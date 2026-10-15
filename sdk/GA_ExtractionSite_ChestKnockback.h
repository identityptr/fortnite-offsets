/**
 * decamp dumper generated SDK
 * Package: /SpriteExtractionGameplay/Gameplay/BGAs/GA_ExtractionSite_ChestKnockback
 */
#pragma once
#include "Basic.h"

// /SpriteExtractionGameplay/Gameplay/BGAs/GA_ExtractionSite_ChestKnockback.GA_ExtractionSite_ChestKnockback_C
// Kind: BlueprintGeneratedClass; super: GA_Athena_Knockback_Parent_C
class UGA_ExtractionSite_ChestKnockback_C
{
public:
    std::uint8_t None[0xB20]; // 0x0000 (Size: 0xB20, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x10]; // 0x0B20 (Size: 0x10, Type: StructProperty)
    void* Target; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TC_TagsToIgnore[0x20]; // 0x0B38 (Size: 0x20, Type: StructProperty)
    std::uint8_t Row_XYKnockMag[0x28]; // 0x0B58 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_ZKnockMag[0x28]; // 0x0B80 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_ZAdd[0x28]; // 0x0BA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ZAlwayzPositive; // 0x0BD0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t KnockTowardsLauncher; // 0x0BD1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0BD2
    std::uint8_t Row_ZVelPercentMaintained[0x28]; // 0x0BD8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_XYVelPercentMaintained[0x28]; // 0x0C00 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_PhysicsObjectImpulseMultiplier[0x28]; // 0x0C28 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultTags[0x20]; // 0x0C50 (Size: 0x20, Type: StructProperty)
    std::uint8_t FinalLaunchVel[0x18]; // 0x0C70 (Size: 0x18, Type: StructProperty)
    double DistanceMagMult; // 0x0C88 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, None) == 0, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::None");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, UberGraphFrame) == 2848, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::UberGraphFrame");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, Target) == 2864, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::Target");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, TC_TagsToIgnore) == 2872, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::TC_TagsToIgnore");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, Row_XYKnockMag) == 2904, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::Row_XYKnockMag");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, Row_ZKnockMag) == 2944, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::Row_ZKnockMag");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, Row_ZAdd) == 2984, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::Row_ZAdd");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, ZAlwayzPositive) == 3024, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::ZAlwayzPositive");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, KnockTowardsLauncher) == 3025, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::KnockTowardsLauncher");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, Row_ZVelPercentMaintained) == 3032, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::Row_ZVelPercentMaintained");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, Row_XYVelPercentMaintained) == 3072, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::Row_XYVelPercentMaintained");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, Row_PhysicsObjectImpulseMultiplier) == 3112, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::Row_PhysicsObjectImpulseMultiplier");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, DefaultTags) == 3152, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::DefaultTags");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, FinalLaunchVel) == 3184, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::FinalLaunchVel");
static_assert(offsetof(UGA_ExtractionSite_ChestKnockback_C, DistanceMagMult) == 3208, "Offset mismatch for UGA_ExtractionSite_ChestKnockback_C::DistanceMagMult");
