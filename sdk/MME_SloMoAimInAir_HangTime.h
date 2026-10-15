/**
 * decamp dumper generated SDK
 * Package: /SloMoAimInAirParent/Gameplay/Movement/MME_SloMoAimInAir_HangTime
 */
#pragma once
#include "Basic.h"

// /SloMoAimInAirParent/Gameplay/Movement/MME_SloMoAimInAir_HangTime.MME_SloMoAimInAir_HangTime_C
// Kind: BlueprintGeneratedClass; super: FortMovementMode_HangTime
class UMME_SloMoAimInAir_HangTime_C
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t TimeDilationScale[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumDurationSeconds[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExtraVelocityUpwards[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlendInSeconds[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    void* BlendInCurve; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendOutNonDilatedTimeToGroundSeconds[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    void* BlendOutCurve; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConstantVelocityOffset[0x18]; // 0x0290 (Size: 0x18, Type: StructProperty)
    float CachedMaximumDurationSeconds; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float CachedTimeDilationScale; // 0x02AC (Size: 0x4, Type: FloatProperty)
    float CachedBlendInSeconds; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float CachedBlendOutNonDilatedTimeToGroundSeconds; // 0x02B4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, TimeDilationScale) == 440, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::TimeDilationScale");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, MaximumDurationSeconds) == 480, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::MaximumDurationSeconds");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, ExtraVelocityUpwards) == 520, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::ExtraVelocityUpwards");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, BlendInSeconds) == 560, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::BlendInSeconds");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, BlendInCurve) == 600, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::BlendInCurve");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, BlendOutNonDilatedTimeToGroundSeconds) == 608, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::BlendOutNonDilatedTimeToGroundSeconds");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, BlendOutCurve) == 648, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::BlendOutCurve");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, ConstantVelocityOffset) == 656, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::ConstantVelocityOffset");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, CachedMaximumDurationSeconds) == 680, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::CachedMaximumDurationSeconds");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, CachedTimeDilationScale) == 684, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::CachedTimeDilationScale");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, CachedBlendInSeconds) == 688, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::CachedBlendInSeconds");
static_assert(offsetof(UMME_SloMoAimInAir_HangTime_C, CachedBlendOutNonDilatedTimeToGroundSeconds) == 692, "Offset mismatch for UMME_SloMoAimInAir_HangTime_C::CachedBlendOutNonDilatedTimeToGroundSeconds");
