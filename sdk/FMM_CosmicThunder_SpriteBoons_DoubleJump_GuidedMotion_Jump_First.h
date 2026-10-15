/**
 * decamp dumper generated SDK
 * Package: /SpriteBoons_Ch7S4/Gameplay/ExtractableBoons/DoubleJump/Movement/FMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First
 */
#pragma once
#include "Basic.h"

// /SpriteBoons_Ch7S4/Gameplay/ExtractableBoons/DoubleJump/Movement/FMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First.FMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C
// Kind: BlueprintGeneratedClass; super: none
class UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x05A0 (Size: 0x8, Type: StructProperty)
    float LeapIndex; // 0x05A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x05AC
    std::uint8_t HF_DirectionalForce[0x28]; // 0x05B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_UpForce[0x28]; // 0x05D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_ForceVelocityScalar[0x28]; // 0x0600 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_DirectionalFrictionScalar[0x1]; // 0x0628 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C, UberGraphFrame) == 1440, "Offset mismatch for UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C::UberGraphFrame");
static_assert(offsetof(UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C, LeapIndex) == 1448, "Offset mismatch for UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C::LeapIndex");
static_assert(offsetof(UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C, HF_DirectionalForce) == 1456, "Offset mismatch for UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C::HF_DirectionalForce");
static_assert(offsetof(UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C, HF_UpForce) == 1496, "Offset mismatch for UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C::HF_UpForce");
static_assert(offsetof(UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C, HF_ForceVelocityScalar) == 1536, "Offset mismatch for UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C::HF_ForceVelocityScalar");
static_assert(offsetof(UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C, HF_DirectionalFrictionScalar) == 1576, "Offset mismatch for UFMM_CosmicThunder_SpriteBoons_DoubleJump_GuidedMotion_Jump_First_C::HF_DirectionalFrictionScalar");
