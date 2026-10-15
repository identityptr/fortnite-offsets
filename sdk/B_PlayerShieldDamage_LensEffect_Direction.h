/**
 * decamp dumper generated SDK
 * Package: /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction
 */
#pragma once
#include "Basic.h"

// /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C
// Kind: BlueprintGeneratedClass; super: FortEmitterCameraLensEffectDirectional
class UB_PlayerShieldDamage_LensEffect_Direction_C
{
public:
    std::uint8_t Pad_0000[0x368]; // 0x0000
    void* DamageDealer; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* EffectOwner; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DamageDealerLocation[0x18]; // 0x0378 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationParameterName[0x4]; // 0x0390 (Size: 0x4, Type: NameProperty)
    std::uint8_t bRotateActor; // 0x0394 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0395
    float Strength; // 0x0398 (Size: 0x4, Type: FloatProperty)
    float Distance; // 0x039C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UB_PlayerShieldDamage_LensEffect_Direction_C, DamageDealer) == 872, "Offset mismatch for UB_PlayerShieldDamage_LensEffect_Direction_C::DamageDealer");
static_assert(offsetof(UB_PlayerShieldDamage_LensEffect_Direction_C, EffectOwner) == 880, "Offset mismatch for UB_PlayerShieldDamage_LensEffect_Direction_C::EffectOwner");
static_assert(offsetof(UB_PlayerShieldDamage_LensEffect_Direction_C, DamageDealerLocation) == 888, "Offset mismatch for UB_PlayerShieldDamage_LensEffect_Direction_C::DamageDealerLocation");
static_assert(offsetof(UB_PlayerShieldDamage_LensEffect_Direction_C, RotationParameterName) == 912, "Offset mismatch for UB_PlayerShieldDamage_LensEffect_Direction_C::RotationParameterName");
static_assert(offsetof(UB_PlayerShieldDamage_LensEffect_Direction_C, bRotateActor) == 916, "Offset mismatch for UB_PlayerShieldDamage_LensEffect_Direction_C::bRotateActor");
static_assert(offsetof(UB_PlayerShieldDamage_LensEffect_Direction_C, Strength) == 920, "Offset mismatch for UB_PlayerShieldDamage_LensEffect_Direction_C::Strength");
static_assert(offsetof(UB_PlayerShieldDamage_LensEffect_Direction_C, Distance) == 924, "Offset mismatch for UB_PlayerShieldDamage_LensEffect_Direction_C::Distance");
