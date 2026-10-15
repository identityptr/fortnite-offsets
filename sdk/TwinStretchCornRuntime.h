/**
 * decamp dumper generated SDK
 * Package: /Script/TwinStretchCornRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TwinStretchCornRuntime.FortPlayerViewFollowerComponent
// Kind: Class; super: GameFrameworkComponent
class UFortPlayerViewFollowerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t WolrdOffsetFromPlayerLocation[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeOffsetFromPlayerView[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PitchRange[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UpdateFrequency[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t LocationLerpSpeed[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotationLerpSpeed[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerViewFollowerComponent, WolrdOffsetFromPlayerLocation) == 192, "Offset mismatch for UFortPlayerViewFollowerComponent::WolrdOffsetFromPlayerLocation");
static_assert(offsetof(UFortPlayerViewFollowerComponent, RelativeOffsetFromPlayerView) == 216, "Offset mismatch for UFortPlayerViewFollowerComponent::RelativeOffsetFromPlayerView");
static_assert(offsetof(UFortPlayerViewFollowerComponent, PitchRange) == 240, "Offset mismatch for UFortPlayerViewFollowerComponent::PitchRange");
static_assert(offsetof(UFortPlayerViewFollowerComponent, UpdateFrequency) == 256, "Offset mismatch for UFortPlayerViewFollowerComponent::UpdateFrequency");
static_assert(offsetof(UFortPlayerViewFollowerComponent, LocationLerpSpeed) == 296, "Offset mismatch for UFortPlayerViewFollowerComponent::LocationLerpSpeed");
static_assert(offsetof(UFortPlayerViewFollowerComponent, RotationLerpSpeed) == 336, "Offset mismatch for UFortPlayerViewFollowerComponent::RotationLerpSpeed");

// /Script/TwinStretchCornRuntime.TwinStretchCornLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UTwinStretchCornLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsBlocking; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFiring; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReFiring; // 0x1172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFireActive; // 0x1173 (Size: 0x1, Type: BoolProperty)
    float FireAOAlpha; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float ClampedPitch; // 0x1178 (Size: 0x4, Type: FloatProperty)
    float UpperLowerBlendAlpha; // 0x117C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsUpperBodyOnly; // 0x1180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsShieldBroken; // 0x1181 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1182
    std::uint8_t CooldownTagName[0x4]; // 0x1184 (Size: 0x4, Type: StructProperty)
    std::uint8_t UpperBodyOnlyTestTagContainer[0x1]; // 0x1188 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTwinStretchCornLayerAnimInstance, bIsBlocking) == 4464, "Offset mismatch for UTwinStretchCornLayerAnimInstance::bIsBlocking");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, bIsFiring) == 4465, "Offset mismatch for UTwinStretchCornLayerAnimInstance::bIsFiring");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, bIsReFiring) == 4466, "Offset mismatch for UTwinStretchCornLayerAnimInstance::bIsReFiring");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, bIsFireActive) == 4467, "Offset mismatch for UTwinStretchCornLayerAnimInstance::bIsFireActive");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, FireAOAlpha) == 4468, "Offset mismatch for UTwinStretchCornLayerAnimInstance::FireAOAlpha");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, ClampedPitch) == 4472, "Offset mismatch for UTwinStretchCornLayerAnimInstance::ClampedPitch");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, UpperLowerBlendAlpha) == 4476, "Offset mismatch for UTwinStretchCornLayerAnimInstance::UpperLowerBlendAlpha");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, bIsUpperBodyOnly) == 4480, "Offset mismatch for UTwinStretchCornLayerAnimInstance::bIsUpperBodyOnly");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, bIsShieldBroken) == 4481, "Offset mismatch for UTwinStretchCornLayerAnimInstance::bIsShieldBroken");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, CooldownTagName) == 4484, "Offset mismatch for UTwinStretchCornLayerAnimInstance::CooldownTagName");
static_assert(offsetof(UTwinStretchCornLayerAnimInstance, UpperBodyOnlyTestTagContainer) == 4488, "Offset mismatch for UTwinStretchCornLayerAnimInstance::UpperBodyOnlyTestTagContainer");

// /Script/TwinStretchCornRuntime.TwinStretchCornShieldInterface
// Kind: Class; super: Interface
class UTwinStretchCornShieldInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TwinStretchCornRuntime.TwinStretchCornShieldWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class UTwinStretchCornShieldWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    float ShieldPosOffset; // 0x0360 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsBlocking; // 0x0364 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquip; // 0x0365 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0366
    float LagPitch; // 0x0368 (Size: 0x4, Type: FloatProperty)
    float LagYaw; // 0x036C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsShieldBroken; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsShieldHit; // 0x0371 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0372
    float LagForwardSpeed; // 0x0374 (Size: 0x4, Type: FloatProperty)
    float ShardNoiseAlpha; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsIdleNoise; // 0x037C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x037D
    std::uint8_t CooldownTagName[0x1]; // 0x0380 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, ShieldPosOffset) == 864, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::ShieldPosOffset");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, bIsBlocking) == 868, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::bIsBlocking");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, bIsEquip) == 869, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::bIsEquip");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, LagPitch) == 872, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::LagPitch");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, LagYaw) == 876, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::LagYaw");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, bIsShieldBroken) == 880, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::bIsShieldBroken");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, bIsShieldHit) == 881, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::bIsShieldHit");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, LagForwardSpeed) == 884, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::LagForwardSpeed");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, ShardNoiseAlpha) == 888, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::ShardNoiseAlpha");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, bIsIdleNoise) == 892, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::bIsIdleNoise");
static_assert(offsetof(UTwinStretchCornShieldWeaponAnimInstance, CooldownTagName) == 896, "Offset mismatch for UTwinStretchCornShieldWeaponAnimInstance::CooldownTagName");

// /Script/TwinStretchCornRuntime.TwinStretchCornWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class UTwinStretchCornWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t bIsBlocking; // 0x0360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0361
    std::uint8_t BlockingTagName[0x1]; // 0x0364 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTwinStretchCornWeaponAnimInstance, bIsBlocking) == 864, "Offset mismatch for UTwinStretchCornWeaponAnimInstance::bIsBlocking");
static_assert(offsetof(UTwinStretchCornWeaponAnimInstance, BlockingTagName) == 868, "Offset mismatch for UTwinStretchCornWeaponAnimInstance::BlockingTagName");

// /Script/TwinStretchCornRuntime.TwinStretchCornWeaponInterface
// Kind: Class; super: Interface
class UTwinStretchCornWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};
