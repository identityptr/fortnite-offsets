/**
 * decamp dumper generated SDK
 * Package: /Script/SentryRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SentryRuntime.CreativeSentryAnimInstance
// Kind: Class; super: FortDefenderAnimInstance
class UCreativeSentryAnimInstance
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    float RotateAimAnimationPitch; // 0x04B0 (Size: 0x4, Type: FloatProperty)
    float CounterRotateAimAnimationPitch; // 0x04B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsRelaxedLevel1OrNotTargeting; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x04B9
    float RightHandIKAlpha; // 0x04BC (Size: 0x4, Type: FloatProperty)
    float OneMinusLeftHandFK; // 0x04C0 (Size: 0x4, Type: FloatProperty)
    float LeftHandIKAlpha; // 0x04C4 (Size: 0x4, Type: FloatProperty)
    float RetargetHandIKBonesToFKPositionWeight; // 0x04C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCreativeSentryAnimInstance, RotateAimAnimationPitch) == 1200, "Offset mismatch for UCreativeSentryAnimInstance::RotateAimAnimationPitch");
static_assert(offsetof(UCreativeSentryAnimInstance, CounterRotateAimAnimationPitch) == 1204, "Offset mismatch for UCreativeSentryAnimInstance::CounterRotateAimAnimationPitch");
static_assert(offsetof(UCreativeSentryAnimInstance, bIsRelaxedLevel1OrNotTargeting) == 1208, "Offset mismatch for UCreativeSentryAnimInstance::bIsRelaxedLevel1OrNotTargeting");
static_assert(offsetof(UCreativeSentryAnimInstance, RightHandIKAlpha) == 1212, "Offset mismatch for UCreativeSentryAnimInstance::RightHandIKAlpha");
static_assert(offsetof(UCreativeSentryAnimInstance, OneMinusLeftHandFK) == 1216, "Offset mismatch for UCreativeSentryAnimInstance::OneMinusLeftHandFK");
static_assert(offsetof(UCreativeSentryAnimInstance, LeftHandIKAlpha) == 1220, "Offset mismatch for UCreativeSentryAnimInstance::LeftHandIKAlpha");
static_assert(offsetof(UCreativeSentryAnimInstance, RetargetHandIKBonesToFKPositionWeight) == 1224, "Offset mismatch for UCreativeSentryAnimInstance::RetargetHandIKBonesToFKPositionWeight");
