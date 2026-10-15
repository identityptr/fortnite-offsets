/**
 * decamp dumper generated SDK
 * Package: /Script/KnockbackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/KnockbackRuntime.KnockbackMutatorData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FKnockbackMutatorData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Pawn; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float KnockbackMultiplier; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FKnockbackMutatorData, Pawn) == 16, "Offset mismatch for FKnockbackMutatorData::Pawn");
static_assert(offsetof(FKnockbackMutatorData, KnockbackMultiplier) == 24, "Offset mismatch for FKnockbackMutatorData::KnockbackMultiplier");

// /Script/KnockbackRuntime.KnockbackMutatorDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FKnockbackMutatorDataArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FKnockbackMutatorDataArray, Entries) == 72, "Offset mismatch for FKnockbackMutatorDataArray::Entries");

// /Script/KnockbackRuntime.FortAthenaMutator_Knockback
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_Knockback
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bStorePlayerKnockbackData; // 0x02E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicatePlayerKnockbackData; // 0x02E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x02E2
    FMulticastInlineDelegate OnPlayerKnockbackDataChanged; // 0x02E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t AllPlayersKnockbackData[0x60]; // 0x02F8 (Size: 0x60, Type: StructProperty)
    std::uint8_t bDisplayKnockbackDamageNumbersAsPercentage[0x28]; // 0x0358 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConvertToKnockbackDamageMultiplier[0x28]; // 0x0380 (Size: 0x28, Type: StructProperty)
    std::uint8_t PercentDamageLowMaxThreshold[0x28]; // 0x03A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PercentDamageMediumMaxThreshold[0x28]; // 0x03D0 (Size: 0x28, Type: StructProperty)
    float KnockbackMultiplierInitialValue; // 0x03F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaMutator_Knockback, bStorePlayerKnockbackData) == 736, "Offset mismatch for UFortAthenaMutator_Knockback::bStorePlayerKnockbackData");
static_assert(offsetof(UFortAthenaMutator_Knockback, bReplicatePlayerKnockbackData) == 737, "Offset mismatch for UFortAthenaMutator_Knockback::bReplicatePlayerKnockbackData");
static_assert(offsetof(UFortAthenaMutator_Knockback, OnPlayerKnockbackDataChanged) == 744, "Offset mismatch for UFortAthenaMutator_Knockback::OnPlayerKnockbackDataChanged");
static_assert(offsetof(UFortAthenaMutator_Knockback, AllPlayersKnockbackData) == 760, "Offset mismatch for UFortAthenaMutator_Knockback::AllPlayersKnockbackData");
static_assert(offsetof(UFortAthenaMutator_Knockback, bDisplayKnockbackDamageNumbersAsPercentage) == 856, "Offset mismatch for UFortAthenaMutator_Knockback::bDisplayKnockbackDamageNumbersAsPercentage");
static_assert(offsetof(UFortAthenaMutator_Knockback, ConvertToKnockbackDamageMultiplier) == 896, "Offset mismatch for UFortAthenaMutator_Knockback::ConvertToKnockbackDamageMultiplier");
static_assert(offsetof(UFortAthenaMutator_Knockback, PercentDamageLowMaxThreshold) == 936, "Offset mismatch for UFortAthenaMutator_Knockback::PercentDamageLowMaxThreshold");
static_assert(offsetof(UFortAthenaMutator_Knockback, PercentDamageMediumMaxThreshold) == 976, "Offset mismatch for UFortAthenaMutator_Knockback::PercentDamageMediumMaxThreshold");
static_assert(offsetof(UFortAthenaMutator_Knockback, KnockbackMultiplierInitialValue) == 1016, "Offset mismatch for UFortAthenaMutator_Knockback::KnockbackMultiplierInitialValue");

// /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_KnockbackMutator
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* CachedMutator; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    void* MutatorClassToGet; // 0x0B28 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortGameplayAbility_KnockbackMutator, CachedMutator) == 2848, "Offset mismatch for UFortGameplayAbility_KnockbackMutator::CachedMutator");
static_assert(offsetof(UFortGameplayAbility_KnockbackMutator, MutatorClassToGet) == 2856, "Offset mismatch for UFortGameplayAbility_KnockbackMutator::MutatorClassToGet");
