/**
 * decamp dumper generated SDK
 * Package: /Script/JunoStamina
 */
#pragma once
#include "Basic.h"

// /Script/JunoStamina.JunoStaminaChangeParams
// Kind: ScriptStruct; super: none
struct FJunoStaminaChangeParams
{
public:
    TWeakObjectPtr<void> OptionalStaminaModifierSource; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoStaminaChangeParams, OptionalStaminaModifierSource) == 0, "Offset mismatch for FJunoStaminaChangeParams::OptionalStaminaModifierSource");

// /Script/JunoStamina.JunoStaminaChannelingData
// Kind: ScriptStruct; super: none
struct FJunoStaminaChannelingData
{
public:
    float StaminaPerSecond; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t StaminaChannelingPurposeIdentifier[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> OptionalStaminaChannelingSource; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bShouldStopApplyingNextTick; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoStaminaChannelingData, StaminaPerSecond) == 0, "Offset mismatch for FJunoStaminaChannelingData::StaminaPerSecond");
static_assert(offsetof(FJunoStaminaChannelingData, StaminaChannelingPurposeIdentifier) == 4, "Offset mismatch for FJunoStaminaChannelingData::StaminaChannelingPurposeIdentifier");
static_assert(offsetof(FJunoStaminaChannelingData, OptionalStaminaChannelingSource) == 8, "Offset mismatch for FJunoStaminaChannelingData::OptionalStaminaChannelingSource");
static_assert(offsetof(FJunoStaminaChannelingData, bShouldStopApplyingNextTick) == 16, "Offset mismatch for FJunoStaminaChannelingData::bShouldStopApplyingNextTick");

// /Script/JunoStamina.JunoStaminaEventData
// Kind: ScriptStruct; super: none
struct FJunoStaminaEventData
{
public:
    float PreviousStaminaValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoStaminaEventData, PreviousStaminaValue) == 0, "Offset mismatch for FJunoStaminaEventData::PreviousStaminaValue");

// /Script/JunoStamina.JunoStaminaAttributeSet
// Kind: Class; super: FortAttributeSet
class UJunoStaminaAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t MaxStamina[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t MinimumStaminaForUsing[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t StaminaRechargeAmountPerSecond[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t StaminaRechargeDelaySeconds[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t StaminaRechargePercentageLimit[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t StaminaUsageMultiplier[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoStaminaAttributeSet, MaxStamina) == 72, "Offset mismatch for UJunoStaminaAttributeSet::MaxStamina");
static_assert(offsetof(UJunoStaminaAttributeSet, MinimumStaminaForUsing) == 88, "Offset mismatch for UJunoStaminaAttributeSet::MinimumStaminaForUsing");
static_assert(offsetof(UJunoStaminaAttributeSet, StaminaRechargeAmountPerSecond) == 104, "Offset mismatch for UJunoStaminaAttributeSet::StaminaRechargeAmountPerSecond");
static_assert(offsetof(UJunoStaminaAttributeSet, StaminaRechargeDelaySeconds) == 120, "Offset mismatch for UJunoStaminaAttributeSet::StaminaRechargeDelaySeconds");
static_assert(offsetof(UJunoStaminaAttributeSet, StaminaRechargePercentageLimit) == 136, "Offset mismatch for UJunoStaminaAttributeSet::StaminaRechargePercentageLimit");
static_assert(offsetof(UJunoStaminaAttributeSet, StaminaUsageMultiplier) == 152, "Offset mismatch for UJunoStaminaAttributeSet::StaminaUsageMultiplier");

// /Script/JunoStamina.JunoStaminaComponent
// Kind: Class; super: PawnComponent
class UJunoStaminaComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnStaminaCompletelyDrained; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStaminaRechargeComplete; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCurrentStaminaChanged; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* LowStaminaGameplayEffectClass; // 0x00F0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00F8
    std::uint8_t RechargeDisabledQuery[0x58]; // 0x0100 (Size: 0x58, Type: StructProperty)
    std::uint8_t StaminaUseDisabledQuery[0x48]; // 0x0158 (Size: 0x48, Type: StructProperty)
    float CurrentStamina; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float CachedMaxStamina; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    float NetStaminaDeltaPerSecond; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01AC
    std::uint8_t MaxStaminaAttribute[0x38]; // 0x01B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t MinStaminaForUsingAttribute[0x38]; // 0x01E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RechargeAmountPerSecondAttribute[0x38]; // 0x0220 (Size: 0x38, Type: StructProperty)
    std::uint8_t RechargeDelayInSecondsAttribute[0x38]; // 0x0258 (Size: 0x38, Type: StructProperty)
    std::uint8_t RechargePercentageLimitAttribute[0x38]; // 0x0290 (Size: 0x38, Type: StructProperty)
    std::uint8_t StaminaUsageMultiplierAttribute[0x38]; // 0x02C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxStaminaSeed[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinStaminaForUsingSeed[0x28]; // 0x0328 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeAmountPerSecondSeed[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeDelayInSecondsSeed[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargePercentageLimitSeed[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t StaminaUsageMultiplierSeed[0x28]; // 0x03C8 (Size: 0x28, Type: StructProperty)
    void* AttributeDefaultsCurveTable; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bRemoveStaminaUsersWhenEmpty; // 0x03F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x03F9
    TArray<void*> ActiveStaminaChannels; // 0x0400 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NewActiveStaminaChannels; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnStaminaChunkAdded; // 0x0420 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStaminaRechargeBegun; // 0x0430 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStaminaRechargeInterrupted; // 0x0440 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStaminaReachedMax; // 0x0450 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStaminaReachedMinForUsing; // 0x0460 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bAllStaminaUsageIsFree; // 0x0470 (Size: 0x1, Type: BoolProperty)
    // 0x0470 BoolProperty bIsRecharging (shared storage)
    // 0x0470 BoolProperty bIsStaminaUsageBlocked (shared storage)
    // 0x0470 BoolProperty bIsUsingStamina (shared storage)
    // 0x0470 BoolProperty bIsWaitingToRecharge (shared storage)
    // 0x0470 BoolProperty bRechargingEnabled (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x0471
    float TimeUntilRechargeInSeconds; // 0x0474 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoStaminaComponent, OnStaminaCompletelyDrained) == 192, "Offset mismatch for UJunoStaminaComponent::OnStaminaCompletelyDrained");
static_assert(offsetof(UJunoStaminaComponent, OnStaminaRechargeComplete) == 208, "Offset mismatch for UJunoStaminaComponent::OnStaminaRechargeComplete");
static_assert(offsetof(UJunoStaminaComponent, OnCurrentStaminaChanged) == 224, "Offset mismatch for UJunoStaminaComponent::OnCurrentStaminaChanged");
static_assert(offsetof(UJunoStaminaComponent, LowStaminaGameplayEffectClass) == 240, "Offset mismatch for UJunoStaminaComponent::LowStaminaGameplayEffectClass");
static_assert(offsetof(UJunoStaminaComponent, RechargeDisabledQuery) == 256, "Offset mismatch for UJunoStaminaComponent::RechargeDisabledQuery");
static_assert(offsetof(UJunoStaminaComponent, StaminaUseDisabledQuery) == 344, "Offset mismatch for UJunoStaminaComponent::StaminaUseDisabledQuery");
static_assert(offsetof(UJunoStaminaComponent, CurrentStamina) == 416, "Offset mismatch for UJunoStaminaComponent::CurrentStamina");
static_assert(offsetof(UJunoStaminaComponent, CachedMaxStamina) == 420, "Offset mismatch for UJunoStaminaComponent::CachedMaxStamina");
static_assert(offsetof(UJunoStaminaComponent, NetStaminaDeltaPerSecond) == 424, "Offset mismatch for UJunoStaminaComponent::NetStaminaDeltaPerSecond");
static_assert(offsetof(UJunoStaminaComponent, MaxStaminaAttribute) == 432, "Offset mismatch for UJunoStaminaComponent::MaxStaminaAttribute");
static_assert(offsetof(UJunoStaminaComponent, MinStaminaForUsingAttribute) == 488, "Offset mismatch for UJunoStaminaComponent::MinStaminaForUsingAttribute");
static_assert(offsetof(UJunoStaminaComponent, RechargeAmountPerSecondAttribute) == 544, "Offset mismatch for UJunoStaminaComponent::RechargeAmountPerSecondAttribute");
static_assert(offsetof(UJunoStaminaComponent, RechargeDelayInSecondsAttribute) == 600, "Offset mismatch for UJunoStaminaComponent::RechargeDelayInSecondsAttribute");
static_assert(offsetof(UJunoStaminaComponent, RechargePercentageLimitAttribute) == 656, "Offset mismatch for UJunoStaminaComponent::RechargePercentageLimitAttribute");
static_assert(offsetof(UJunoStaminaComponent, StaminaUsageMultiplierAttribute) == 712, "Offset mismatch for UJunoStaminaComponent::StaminaUsageMultiplierAttribute");
static_assert(offsetof(UJunoStaminaComponent, MaxStaminaSeed) == 768, "Offset mismatch for UJunoStaminaComponent::MaxStaminaSeed");
static_assert(offsetof(UJunoStaminaComponent, MinStaminaForUsingSeed) == 808, "Offset mismatch for UJunoStaminaComponent::MinStaminaForUsingSeed");
static_assert(offsetof(UJunoStaminaComponent, RechargeAmountPerSecondSeed) == 848, "Offset mismatch for UJunoStaminaComponent::RechargeAmountPerSecondSeed");
static_assert(offsetof(UJunoStaminaComponent, RechargeDelayInSecondsSeed) == 888, "Offset mismatch for UJunoStaminaComponent::RechargeDelayInSecondsSeed");
static_assert(offsetof(UJunoStaminaComponent, RechargePercentageLimitSeed) == 928, "Offset mismatch for UJunoStaminaComponent::RechargePercentageLimitSeed");
static_assert(offsetof(UJunoStaminaComponent, StaminaUsageMultiplierSeed) == 968, "Offset mismatch for UJunoStaminaComponent::StaminaUsageMultiplierSeed");
static_assert(offsetof(UJunoStaminaComponent, AttributeDefaultsCurveTable) == 1008, "Offset mismatch for UJunoStaminaComponent::AttributeDefaultsCurveTable");
static_assert(offsetof(UJunoStaminaComponent, bRemoveStaminaUsersWhenEmpty) == 1016, "Offset mismatch for UJunoStaminaComponent::bRemoveStaminaUsersWhenEmpty");
static_assert(offsetof(UJunoStaminaComponent, ActiveStaminaChannels) == 1024, "Offset mismatch for UJunoStaminaComponent::ActiveStaminaChannels");
static_assert(offsetof(UJunoStaminaComponent, NewActiveStaminaChannels) == 1040, "Offset mismatch for UJunoStaminaComponent::NewActiveStaminaChannels");
static_assert(offsetof(UJunoStaminaComponent, OnStaminaChunkAdded) == 1056, "Offset mismatch for UJunoStaminaComponent::OnStaminaChunkAdded");
static_assert(offsetof(UJunoStaminaComponent, OnStaminaRechargeBegun) == 1072, "Offset mismatch for UJunoStaminaComponent::OnStaminaRechargeBegun");
static_assert(offsetof(UJunoStaminaComponent, OnStaminaRechargeInterrupted) == 1088, "Offset mismatch for UJunoStaminaComponent::OnStaminaRechargeInterrupted");
static_assert(offsetof(UJunoStaminaComponent, OnStaminaReachedMax) == 1104, "Offset mismatch for UJunoStaminaComponent::OnStaminaReachedMax");
static_assert(offsetof(UJunoStaminaComponent, OnStaminaReachedMinForUsing) == 1120, "Offset mismatch for UJunoStaminaComponent::OnStaminaReachedMinForUsing");
static_assert(offsetof(UJunoStaminaComponent, bAllStaminaUsageIsFree) == 1136, "Offset mismatch for UJunoStaminaComponent::bAllStaminaUsageIsFree");
static_assert(offsetof(UJunoStaminaComponent, TimeUntilRechargeInSeconds) == 1140, "Offset mismatch for UJunoStaminaComponent::TimeUntilRechargeInSeconds");
