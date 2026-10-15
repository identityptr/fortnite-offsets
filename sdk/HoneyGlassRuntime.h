/**
 * decamp dumper generated SDK
 * Package: /Script/HoneyGlassRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HoneyGlassRuntime.FortGameplayAbility_HoneyGlass_Primary
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_HoneyGlass_Primary
{
public:
    std::uint8_t Pad_0000[0xB30]; // 0x0000
    std::uint8_t TagQueryToBreakStacksNative[0x48]; // 0x0B30 (Size: 0x48, Type: StructProperty)
    std::uint8_t AllowStacksHFNative[0x30]; // 0x0B78 (Size: 0x30, Type: StructProperty)
    std::uint8_t TagQueryToBreakConnectionNative[0x48]; // 0x0BA8 (Size: 0x48, Type: StructProperty)
    std::uint8_t TagQueryToAvoidStacksNative[0x48]; // 0x0BF0 (Size: 0x48, Type: StructProperty)
    std::uint8_t TagQueryToIgnoreTargetNative[0x48]; // 0x0C38 (Size: 0x48, Type: StructProperty)
    std::uint8_t MaxDistanceNative[0x30]; // 0x0C80 (Size: 0x30, Type: StructProperty)
    void* TargetedPawnNative; // 0x0CB0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t DistanceAndLOSFailsNative; // 0x0CB8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0CBC
    std::uint8_t DistanceAndLOSToleranceNative[0x30]; // 0x0CC0 (Size: 0x30, Type: StructProperty)
    std::uint8_t EnableDBNORevive[0x28]; // 0x0CF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bIsReviving; // 0x0D18 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, TagQueryToBreakStacksNative) == 2864, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::TagQueryToBreakStacksNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, AllowStacksHFNative) == 2936, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::AllowStacksHFNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, TagQueryToBreakConnectionNative) == 2984, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::TagQueryToBreakConnectionNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, TagQueryToAvoidStacksNative) == 3056, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::TagQueryToAvoidStacksNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, TagQueryToIgnoreTargetNative) == 3128, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::TagQueryToIgnoreTargetNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, MaxDistanceNative) == 3200, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::MaxDistanceNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, TargetedPawnNative) == 3248, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::TargetedPawnNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, DistanceAndLOSFailsNative) == 3256, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::DistanceAndLOSFailsNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, DistanceAndLOSToleranceNative) == 3264, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::DistanceAndLOSToleranceNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, EnableDBNORevive) == 3312, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::EnableDBNORevive");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_Primary, bIsReviving) == 3352, "Offset mismatch for UFortGameplayAbility_HoneyGlass_Primary::bIsReviving");

// /Script/HoneyGlassRuntime.FortGameplayAbility_HoneyGlass_SlowFall
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_HoneyGlass_SlowFall
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t FallingDownTagNative[0x4]; // 0x0B20 (Size: 0x4, Type: StructProperty)
    float DownVelocityThresholdNative; // 0x0B24 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GroundCheckDistanceNative[0x30]; // 0x0B28 (Size: 0x30, Type: StructProperty)
    float GroundCheckXYVelocityMultNative; // 0x0B58 (Size: 0x4, Type: FloatProperty)
    FName GroundTraceProfileName; // 0x0B5C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortGameplayAbility_HoneyGlass_SlowFall, FallingDownTagNative) == 2848, "Offset mismatch for UFortGameplayAbility_HoneyGlass_SlowFall::FallingDownTagNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_SlowFall, DownVelocityThresholdNative) == 2852, "Offset mismatch for UFortGameplayAbility_HoneyGlass_SlowFall::DownVelocityThresholdNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_SlowFall, GroundCheckDistanceNative) == 2856, "Offset mismatch for UFortGameplayAbility_HoneyGlass_SlowFall::GroundCheckDistanceNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_SlowFall, GroundCheckXYVelocityMultNative) == 2904, "Offset mismatch for UFortGameplayAbility_HoneyGlass_SlowFall::GroundCheckXYVelocityMultNative");
static_assert(offsetof(UFortGameplayAbility_HoneyGlass_SlowFall, GroundTraceProfileName) == 2908, "Offset mismatch for UFortGameplayAbility_HoneyGlass_SlowFall::GroundTraceProfileName");

// /Script/HoneyGlassRuntime.HoneyGlassLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UHoneyGlassLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    double JumpAddAlpha; // 0x1170 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCanEnterRelaxedState; // 0x1178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x1179
    TSoftObjectPtr<void> HoneyGlassStaffFireCMMMontageAnimMontage; // 0x1180 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UHoneyGlassLayerAnimInstance, JumpAddAlpha) == 4464, "Offset mismatch for UHoneyGlassLayerAnimInstance::JumpAddAlpha");
static_assert(offsetof(UHoneyGlassLayerAnimInstance, bCanEnterRelaxedState) == 4472, "Offset mismatch for UHoneyGlassLayerAnimInstance::bCanEnterRelaxedState");
static_assert(offsetof(UHoneyGlassLayerAnimInstance, HoneyGlassStaffFireCMMMontageAnimMontage) == 4480, "Offset mismatch for UHoneyGlassLayerAnimInstance::HoneyGlassStaffFireCMMMontageAnimMontage");

// /Script/HoneyGlassRuntime.HoneyGlassWeapon
// Kind: Class; super: FortWeaponRanged
class UHoneyGlassWeapon
{
public:
    std::uint8_t Pad_0000[0x2968]; // 0x0000
    FMulticastInlineDelegate CurrentTargetDelegate; // 0x2968 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ChannelTargetPlayerPawn; // 0x2978 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HasDBNOTargetTagNative[0x4]; // 0x2980 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsRevivingTagNative[0x4]; // 0x2984 (Size: 0x4, Type: StructProperty)
    std::uint8_t HasChannelingTargetTagNative[0x4]; // 0x2988 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsChannelingTagNative[0x4]; // 0x298C (Size: 0x4, Type: StructProperty)
    std::uint8_t ChannelTargetTagNative[0x8]; // 0x2990 (Size: 0x8, Type: StructProperty)
    void* TargetingPresetNative; // 0x2998 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ChannelTargetMaxDistanceNative[0x30]; // 0x29A0 (Size: 0x30, Type: StructProperty)
    void* TargetMultiInteractComponentNative; // 0x29D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetUpdateIntervalNative[0x30]; // 0x29D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t LocalIsEquipped; // 0x2A08 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UHoneyGlassWeapon, CurrentTargetDelegate) == 10600, "Offset mismatch for UHoneyGlassWeapon::CurrentTargetDelegate");
static_assert(offsetof(UHoneyGlassWeapon, ChannelTargetPlayerPawn) == 10616, "Offset mismatch for UHoneyGlassWeapon::ChannelTargetPlayerPawn");
static_assert(offsetof(UHoneyGlassWeapon, HasDBNOTargetTagNative) == 10624, "Offset mismatch for UHoneyGlassWeapon::HasDBNOTargetTagNative");
static_assert(offsetof(UHoneyGlassWeapon, IsRevivingTagNative) == 10628, "Offset mismatch for UHoneyGlassWeapon::IsRevivingTagNative");
static_assert(offsetof(UHoneyGlassWeapon, HasChannelingTargetTagNative) == 10632, "Offset mismatch for UHoneyGlassWeapon::HasChannelingTargetTagNative");
static_assert(offsetof(UHoneyGlassWeapon, IsChannelingTagNative) == 10636, "Offset mismatch for UHoneyGlassWeapon::IsChannelingTagNative");
static_assert(offsetof(UHoneyGlassWeapon, ChannelTargetTagNative) == 10640, "Offset mismatch for UHoneyGlassWeapon::ChannelTargetTagNative");
static_assert(offsetof(UHoneyGlassWeapon, TargetingPresetNative) == 10648, "Offset mismatch for UHoneyGlassWeapon::TargetingPresetNative");
static_assert(offsetof(UHoneyGlassWeapon, ChannelTargetMaxDistanceNative) == 10656, "Offset mismatch for UHoneyGlassWeapon::ChannelTargetMaxDistanceNative");
static_assert(offsetof(UHoneyGlassWeapon, TargetMultiInteractComponentNative) == 10704, "Offset mismatch for UHoneyGlassWeapon::TargetMultiInteractComponentNative");
static_assert(offsetof(UHoneyGlassWeapon, TargetUpdateIntervalNative) == 10712, "Offset mismatch for UHoneyGlassWeapon::TargetUpdateIntervalNative");
static_assert(offsetof(UHoneyGlassWeapon, LocalIsEquipped) == 10760, "Offset mismatch for UHoneyGlassWeapon::LocalIsEquipped");

// /Script/HoneyGlassRuntime.HoneyGlassWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class UHoneyGlassWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t TipRotationYawRot[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    double TipRotation; // 0x0378 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsTeamBuff; // 0x0380 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTeamHealing; // 0x0381 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSelfHealing; // 0x0382 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFiring; // 0x0383 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TeamHealingTagName[0x4]; // 0x0384 (Size: 0x4, Type: StructProperty)
    std::uint8_t SelfHealingTagName[0x4]; // 0x0388 (Size: 0x4, Type: StructProperty)
    std::uint8_t BuffTagName[0x4]; // 0x038C (Size: 0x4, Type: StructProperty)
    void* WeaponActor; // 0x0390 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHoneyGlassWeaponAnimInstance, TipRotationYawRot) == 864, "Offset mismatch for UHoneyGlassWeaponAnimInstance::TipRotationYawRot");
static_assert(offsetof(UHoneyGlassWeaponAnimInstance, TipRotation) == 888, "Offset mismatch for UHoneyGlassWeaponAnimInstance::TipRotation");
static_assert(offsetof(UHoneyGlassWeaponAnimInstance, bIsTeamBuff) == 896, "Offset mismatch for UHoneyGlassWeaponAnimInstance::bIsTeamBuff");
static_assert(offsetof(UHoneyGlassWeaponAnimInstance, bIsTeamHealing) == 897, "Offset mismatch for UHoneyGlassWeaponAnimInstance::bIsTeamHealing");
static_assert(offsetof(UHoneyGlassWeaponAnimInstance, bIsSelfHealing) == 898, "Offset mismatch for UHoneyGlassWeaponAnimInstance::bIsSelfHealing");
static_assert(offsetof(UHoneyGlassWeaponAnimInstance, bIsFiring) == 899, "Offset mismatch for UHoneyGlassWeaponAnimInstance::bIsFiring");
static_assert(offsetof(UHoneyGlassWeaponAnimInstance, TeamHealingTagName) == 900, "Offset mismatch for UHoneyGlassWeaponAnimInstance::TeamHealingTagName");
static_assert(offsetof(UHoneyGlassWeaponAnimInstance, SelfHealingTagName) == 904, "Offset mismatch for UHoneyGlassWeaponAnimInstance::SelfHealingTagName");
static_assert(offsetof(UHoneyGlassWeaponAnimInstance, BuffTagName) == 908, "Offset mismatch for UHoneyGlassWeaponAnimInstance::BuffTagName");
static_assert(offsetof(UHoneyGlassWeaponAnimInstance, WeaponActor) == 912, "Offset mismatch for UHoneyGlassWeaponAnimInstance::WeaponActor");
