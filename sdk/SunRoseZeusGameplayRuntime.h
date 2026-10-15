/**
 * decamp dumper generated SDK
 * Package: /Script/SunRoseZeusGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SunRoseZeusGameplayRuntime.LightningStrikeInfo
// Kind: ScriptStruct; super: none
struct FLightningStrikeInfo
{
public:
    std::uint8_t BoltFXTimerHandle[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t TelegraphTimerHandle[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float BoltHeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLightningStrikeInfo, BoltFXTimerHandle) == 0, "Offset mismatch for FLightningStrikeInfo::BoltFXTimerHandle");
static_assert(offsetof(FLightningStrikeInfo, TelegraphTimerHandle) == 8, "Offset mismatch for FLightningStrikeInfo::TelegraphTimerHandle");
static_assert(offsetof(FLightningStrikeInfo, Location) == 16, "Offset mismatch for FLightningStrikeInfo::Location");
static_assert(offsetof(FLightningStrikeInfo, BoltHeight) == 40, "Offset mismatch for FLightningStrikeInfo::BoltHeight");

// /Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm
// Kind: Class; super: BuildingGameplayActor
class UBuildingGameplayActorZeusThunderstorm
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    std::uint8_t Row_TelegraphDuration[0x28]; // 0x0920 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_LightningStrikeFXDelay[0x1]; // 0x0948 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBuildingGameplayActorZeusThunderstorm, Row_TelegraphDuration) == 2336, "Offset mismatch for UBuildingGameplayActorZeusThunderstorm::Row_TelegraphDuration");
static_assert(offsetof(UBuildingGameplayActorZeusThunderstorm, Row_LightningStrikeFXDelay) == 2376, "Offset mismatch for UBuildingGameplayActorZeusThunderstorm::Row_LightningStrikeFXDelay");

// /Script/SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning
// Kind: Class; super: FortProjectileBase
class UFortProjectileSunRoseLightning
{
public:
    std::uint8_t Pad_0000[0xAD8]; // 0x0000
    TArray<void*> ExplosionDamageGEs; // 0x0AD8 (Size: 0x10, Type: ArrayProperty)
    float ExplosionGELevel; // 0x0AE8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExplosionTraceChannel; // 0x0AEC (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0AED
    std::uint8_t MaxHitsPerFrame[0x228]; // 0x0AF0 (Size: 0x228, Type: StructProperty)
    std::uint8_t ExplosionAsyncLOSTargetingHandle[0x1]; // 0x0D18 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortProjectileSunRoseLightning, ExplosionDamageGEs) == 2776, "Offset mismatch for UFortProjectileSunRoseLightning::ExplosionDamageGEs");
static_assert(offsetof(UFortProjectileSunRoseLightning, ExplosionGELevel) == 2792, "Offset mismatch for UFortProjectileSunRoseLightning::ExplosionGELevel");
static_assert(offsetof(UFortProjectileSunRoseLightning, ExplosionTraceChannel) == 2796, "Offset mismatch for UFortProjectileSunRoseLightning::ExplosionTraceChannel");
static_assert(offsetof(UFortProjectileSunRoseLightning, MaxHitsPerFrame) == 2800, "Offset mismatch for UFortProjectileSunRoseLightning::MaxHitsPerFrame");
static_assert(offsetof(UFortProjectileSunRoseLightning, ExplosionAsyncLOSTargetingHandle) == 3352, "Offset mismatch for UFortProjectileSunRoseLightning::ExplosionAsyncLOSTargetingHandle");

// /Script/SunRoseZeusGameplayRuntime.SunRose_Zeus_Player_LayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class USunRose_Zeus_Player_LayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsThrowActive; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1171
    std::uint8_t LightningAbilityActiveTag[0x1]; // 0x1174 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USunRose_Zeus_Player_LayerAnimInstance, bIsThrowActive) == 4464, "Offset mismatch for USunRose_Zeus_Player_LayerAnimInstance::bIsThrowActive");
static_assert(offsetof(USunRose_Zeus_Player_LayerAnimInstance, LightningAbilityActiveTag) == 4468, "Offset mismatch for USunRose_Zeus_Player_LayerAnimInstance::LightningAbilityActiveTag");

// /Script/SunRoseZeusGameplayRuntime.SunRose_Zeus_Weapon_Hand_AnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class USunRose_Zeus_Weapon_Hand_AnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t bIsThrow; // 0x0360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    FString LightningThrowMontageName; // 0x0368 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(USunRose_Zeus_Weapon_Hand_AnimInstance, bIsThrow) == 864, "Offset mismatch for USunRose_Zeus_Weapon_Hand_AnimInstance::bIsThrow");
static_assert(offsetof(USunRose_Zeus_Weapon_Hand_AnimInstance, LightningThrowMontageName) == 872, "Offset mismatch for USunRose_Zeus_Weapon_Hand_AnimInstance::LightningThrowMontageName");
