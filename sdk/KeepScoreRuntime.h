/**
 * decamp dumper generated SDK
 * Package: /Script/KeepScoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/KeepScoreRuntime.FortWeaponKeepScore
// Kind: Class; super: FortWeaponRanged
class UFortWeaponKeepScore
{
public:
    std::uint8_t Pad_0000[0x2968]; // 0x0000
    FMulticastInlineDelegate OnFireFailed; // 0x2968 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bCurrentAttackOffhand; // 0x2978 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1B]; // 0x2979
    std::int32_t BulletPatternNumber; // 0x2994 (Size: 0x4, Type: IntProperty)
    std::uint8_t bGateFireCall; // 0x2998 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x2999
    std::uint8_t IsFiringGameplayTag[0x4]; // 0x299C (Size: 0x4, Type: StructProperty)
    std::uint8_t MuzzleLocationOffset[0x18]; // 0x29A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReloadingTag[0x4]; // 0x29B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReloadAbilityEventTag[0x4]; // 0x29BC (Size: 0x4, Type: StructProperty)
    std::uint8_t FireAbilityEventTag[0x8]; // 0x29C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAllowAutoReload[0x1]; // 0x29C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortWeaponKeepScore, OnFireFailed) == 10600, "Offset mismatch for UFortWeaponKeepScore::OnFireFailed");
static_assert(offsetof(UFortWeaponKeepScore, bCurrentAttackOffhand) == 10616, "Offset mismatch for UFortWeaponKeepScore::bCurrentAttackOffhand");
static_assert(offsetof(UFortWeaponKeepScore, BulletPatternNumber) == 10644, "Offset mismatch for UFortWeaponKeepScore::BulletPatternNumber");
static_assert(offsetof(UFortWeaponKeepScore, bGateFireCall) == 10648, "Offset mismatch for UFortWeaponKeepScore::bGateFireCall");
static_assert(offsetof(UFortWeaponKeepScore, IsFiringGameplayTag) == 10652, "Offset mismatch for UFortWeaponKeepScore::IsFiringGameplayTag");
static_assert(offsetof(UFortWeaponKeepScore, MuzzleLocationOffset) == 10656, "Offset mismatch for UFortWeaponKeepScore::MuzzleLocationOffset");
static_assert(offsetof(UFortWeaponKeepScore, ReloadingTag) == 10680, "Offset mismatch for UFortWeaponKeepScore::ReloadingTag");
static_assert(offsetof(UFortWeaponKeepScore, ReloadAbilityEventTag) == 10684, "Offset mismatch for UFortWeaponKeepScore::ReloadAbilityEventTag");
static_assert(offsetof(UFortWeaponKeepScore, FireAbilityEventTag) == 10688, "Offset mismatch for UFortWeaponKeepScore::FireAbilityEventTag");
static_assert(offsetof(UFortWeaponKeepScore, bAllowAutoReload) == 10696, "Offset mismatch for UFortWeaponKeepScore::bAllowAutoReload");

// /Script/KeepScoreRuntime.TiredPanda_PlayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UTiredPanda_PlayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float AimPoseAlpha; // 0x1170 (Size: 0x4, Type: FloatProperty)
    float SquatAdditiveAlpha; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float WaterReloadBlendAlpha; // 0x1178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsLeftHandAttack; // 0x117C (Size: 0x1, Type: BoolProperty)
    // 0x117C BoolProperty bIsSquatAdditive (shared storage)
    // 0x117C BoolProperty bIsWaterReload (shared storage)
};

static_assert(offsetof(UTiredPanda_PlayerAnimInstance, AimPoseAlpha) == 4464, "Offset mismatch for UTiredPanda_PlayerAnimInstance::AimPoseAlpha");
static_assert(offsetof(UTiredPanda_PlayerAnimInstance, SquatAdditiveAlpha) == 4468, "Offset mismatch for UTiredPanda_PlayerAnimInstance::SquatAdditiveAlpha");
static_assert(offsetof(UTiredPanda_PlayerAnimInstance, WaterReloadBlendAlpha) == 4472, "Offset mismatch for UTiredPanda_PlayerAnimInstance::WaterReloadBlendAlpha");
static_assert(offsetof(UTiredPanda_PlayerAnimInstance, bIsLeftHandAttack) == 4476, "Offset mismatch for UTiredPanda_PlayerAnimInstance::bIsLeftHandAttack");
