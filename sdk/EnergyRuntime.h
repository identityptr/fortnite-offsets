/**
 * decamp dumper generated SDK
 * Package: /Script/EnergyRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EnergyRuntime.EnergyChannelingData
// Kind: ScriptStruct; super: none
struct FEnergyChannelingData
{
public:
    float EnergyPerSecond; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EnergyChannelingPurposeIdentifier[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    void* OptionalEnergyChannelingSource; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldStopApplyingNextTick; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FEnergyChannelingData, EnergyPerSecond) == 0, "Offset mismatch for FEnergyChannelingData::EnergyPerSecond");
static_assert(offsetof(FEnergyChannelingData, EnergyChannelingPurposeIdentifier) == 4, "Offset mismatch for FEnergyChannelingData::EnergyChannelingPurposeIdentifier");
static_assert(offsetof(FEnergyChannelingData, OptionalEnergyChannelingSource) == 8, "Offset mismatch for FEnergyChannelingData::OptionalEnergyChannelingSource");
static_assert(offsetof(FEnergyChannelingData, bShouldStopApplyingNextTick) == 16, "Offset mismatch for FEnergyChannelingData::bShouldStopApplyingNextTick");

// /Script/EnergyRuntime.EnergyRegenOverrideData
// Kind: ScriptStruct; super: none
struct FEnergyRegenOverrideData
{
public:
    std::uint8_t EnergyRegenIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float RechargeAmountPerSecond; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RechargeDelayInSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float RechargePercentageLimit; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEnergyRegenOverrideData, EnergyRegenIdentifier) == 0, "Offset mismatch for FEnergyRegenOverrideData::EnergyRegenIdentifier");
static_assert(offsetof(FEnergyRegenOverrideData, RechargeAmountPerSecond) == 4, "Offset mismatch for FEnergyRegenOverrideData::RechargeAmountPerSecond");
static_assert(offsetof(FEnergyRegenOverrideData, RechargeDelayInSeconds) == 8, "Offset mismatch for FEnergyRegenOverrideData::RechargeDelayInSeconds");
static_assert(offsetof(FEnergyRegenOverrideData, RechargePercentageLimit) == 12, "Offset mismatch for FEnergyRegenOverrideData::RechargePercentageLimit");

// /Script/EnergyRuntime.FortComponent_Energy
// Kind: Class; super: PawnComponent
class UFortComponent_Energy
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnEnergyCompletelyDrained; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnergyRechargeComplete; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCurrentEnergyChanged; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00F0
    std::uint8_t MaxEnergyAttribute[0x38]; // 0x00F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxEnergy[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeDisabledQuery[0x58]; // 0x0158 (Size: 0x58, Type: StructProperty)
    std::uint8_t EnergyUseDisabledQuery[0x48]; // 0x01B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t BeginRechargeTimerHandle[0x8]; // 0x01F8 (Size: 0x8, Type: StructProperty)
    std::uint8_t EnergyTypeIdentifierTagContainer[0x20]; // 0x0200 (Size: 0x20, Type: StructProperty)
    float CurrentEnergy; // 0x0220 (Size: 0x4, Type: FloatProperty)
    float CachedMaxEnergy; // 0x0224 (Size: 0x4, Type: FloatProperty)
    float CachedMaxEnergyFromScalableFloat; // 0x0228 (Size: 0x4, Type: FloatProperty)
    float NetEnergyDeltaPerSecond; // 0x022C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0230
    std::uint8_t MinEnergyForUsing[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeAmountPerSecondAttribute[0x38]; // 0x0260 (Size: 0x38, Type: StructProperty)
    std::uint8_t RechargeAmountPerSecond[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeDelayInSeconds[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargePercentageLimit[0x28]; // 0x02E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnergyUsageMultiplierAttribute[0x38]; // 0x0310 (Size: 0x38, Type: StructProperty)
    std::uint8_t EnergyUsageMultiplier[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t bRemoveEnergyUsersWhenEmpty; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0371
    TArray<void*> ActiveEnergyChannels; // 0x0378 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NewActiveEnergyChannels; // 0x0388 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EnergyRegenOverrides; // 0x0398 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnEnergyChunkAdded; // 0x03A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnergyRechargeBegun; // 0x03B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnergyRechargeInterrupted; // 0x03C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnergyReachedMax; // 0x03D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnergyReachedMinForUsing; // 0x03E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bAllowEditEnergyUsageMultiplierScalableFloat; // 0x03F8 (Size: 0x1, Type: BoolProperty)
    // 0x03F8 BoolProperty bAllowEditMaxEnergyScalableFloat (shared storage)
    // 0x03F8 BoolProperty bAllowEditRechargeAmountPerSecondScalableFloat (shared storage)
    // 0x03F8 BoolProperty bIsRecharging (shared storage)
    // 0x03F8 BoolProperty bIsUsingEnergy (shared storage)
    // 0x03F8 BoolProperty bRechargingEnabled (shared storage)
};

static_assert(offsetof(UFortComponent_Energy, OnEnergyCompletelyDrained) == 192, "Offset mismatch for UFortComponent_Energy::OnEnergyCompletelyDrained");
static_assert(offsetof(UFortComponent_Energy, OnEnergyRechargeComplete) == 208, "Offset mismatch for UFortComponent_Energy::OnEnergyRechargeComplete");
static_assert(offsetof(UFortComponent_Energy, OnCurrentEnergyChanged) == 224, "Offset mismatch for UFortComponent_Energy::OnCurrentEnergyChanged");
static_assert(offsetof(UFortComponent_Energy, MaxEnergyAttribute) == 248, "Offset mismatch for UFortComponent_Energy::MaxEnergyAttribute");
static_assert(offsetof(UFortComponent_Energy, MaxEnergy) == 304, "Offset mismatch for UFortComponent_Energy::MaxEnergy");
static_assert(offsetof(UFortComponent_Energy, RechargeDisabledQuery) == 344, "Offset mismatch for UFortComponent_Energy::RechargeDisabledQuery");
static_assert(offsetof(UFortComponent_Energy, EnergyUseDisabledQuery) == 432, "Offset mismatch for UFortComponent_Energy::EnergyUseDisabledQuery");
static_assert(offsetof(UFortComponent_Energy, BeginRechargeTimerHandle) == 504, "Offset mismatch for UFortComponent_Energy::BeginRechargeTimerHandle");
static_assert(offsetof(UFortComponent_Energy, EnergyTypeIdentifierTagContainer) == 512, "Offset mismatch for UFortComponent_Energy::EnergyTypeIdentifierTagContainer");
static_assert(offsetof(UFortComponent_Energy, CurrentEnergy) == 544, "Offset mismatch for UFortComponent_Energy::CurrentEnergy");
static_assert(offsetof(UFortComponent_Energy, CachedMaxEnergy) == 548, "Offset mismatch for UFortComponent_Energy::CachedMaxEnergy");
static_assert(offsetof(UFortComponent_Energy, CachedMaxEnergyFromScalableFloat) == 552, "Offset mismatch for UFortComponent_Energy::CachedMaxEnergyFromScalableFloat");
static_assert(offsetof(UFortComponent_Energy, NetEnergyDeltaPerSecond) == 556, "Offset mismatch for UFortComponent_Energy::NetEnergyDeltaPerSecond");
static_assert(offsetof(UFortComponent_Energy, MinEnergyForUsing) == 568, "Offset mismatch for UFortComponent_Energy::MinEnergyForUsing");
static_assert(offsetof(UFortComponent_Energy, RechargeAmountPerSecondAttribute) == 608, "Offset mismatch for UFortComponent_Energy::RechargeAmountPerSecondAttribute");
static_assert(offsetof(UFortComponent_Energy, RechargeAmountPerSecond) == 664, "Offset mismatch for UFortComponent_Energy::RechargeAmountPerSecond");
static_assert(offsetof(UFortComponent_Energy, RechargeDelayInSeconds) == 704, "Offset mismatch for UFortComponent_Energy::RechargeDelayInSeconds");
static_assert(offsetof(UFortComponent_Energy, RechargePercentageLimit) == 744, "Offset mismatch for UFortComponent_Energy::RechargePercentageLimit");
static_assert(offsetof(UFortComponent_Energy, EnergyUsageMultiplierAttribute) == 784, "Offset mismatch for UFortComponent_Energy::EnergyUsageMultiplierAttribute");
static_assert(offsetof(UFortComponent_Energy, EnergyUsageMultiplier) == 840, "Offset mismatch for UFortComponent_Energy::EnergyUsageMultiplier");
static_assert(offsetof(UFortComponent_Energy, bRemoveEnergyUsersWhenEmpty) == 880, "Offset mismatch for UFortComponent_Energy::bRemoveEnergyUsersWhenEmpty");
static_assert(offsetof(UFortComponent_Energy, ActiveEnergyChannels) == 888, "Offset mismatch for UFortComponent_Energy::ActiveEnergyChannels");
static_assert(offsetof(UFortComponent_Energy, NewActiveEnergyChannels) == 904, "Offset mismatch for UFortComponent_Energy::NewActiveEnergyChannels");
static_assert(offsetof(UFortComponent_Energy, EnergyRegenOverrides) == 920, "Offset mismatch for UFortComponent_Energy::EnergyRegenOverrides");
static_assert(offsetof(UFortComponent_Energy, OnEnergyChunkAdded) == 936, "Offset mismatch for UFortComponent_Energy::OnEnergyChunkAdded");
static_assert(offsetof(UFortComponent_Energy, OnEnergyRechargeBegun) == 952, "Offset mismatch for UFortComponent_Energy::OnEnergyRechargeBegun");
static_assert(offsetof(UFortComponent_Energy, OnEnergyRechargeInterrupted) == 968, "Offset mismatch for UFortComponent_Energy::OnEnergyRechargeInterrupted");
static_assert(offsetof(UFortComponent_Energy, OnEnergyReachedMax) == 984, "Offset mismatch for UFortComponent_Energy::OnEnergyReachedMax");
static_assert(offsetof(UFortComponent_Energy, OnEnergyReachedMinForUsing) == 1000, "Offset mismatch for UFortComponent_Energy::OnEnergyReachedMinForUsing");
static_assert(offsetof(UFortComponent_Energy, bAllowEditEnergyUsageMultiplierScalableFloat) == 1016, "Offset mismatch for UFortComponent_Energy::bAllowEditEnergyUsageMultiplierScalableFloat");

// /Script/EnergyRuntime.FortEnergyAttrSet
// Kind: Class; super: FortAttributeSet
class UFortEnergyAttrSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t MaxEnergy[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeAmountPerSecond[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnergyUsageMultiplier[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortEnergyAttrSet, MaxEnergy) == 72, "Offset mismatch for UFortEnergyAttrSet::MaxEnergy");
static_assert(offsetof(UFortEnergyAttrSet, RechargeAmountPerSecond) == 112, "Offset mismatch for UFortEnergyAttrSet::RechargeAmountPerSecond");
static_assert(offsetof(UFortEnergyAttrSet, EnergyUsageMultiplier) == 152, "Offset mismatch for UFortEnergyAttrSet::EnergyUsageMultiplier");
