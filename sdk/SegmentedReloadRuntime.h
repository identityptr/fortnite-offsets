/**
 * decamp dumper generated SDK
 * Package: /Script/SegmentedReloadRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SegmentedReloadRuntime.ConditionalReloadMontage
// Kind: ScriptStruct; super: none
struct FConditionalReloadMontage
{
public:
    void* PlayerReloadMontage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* WeaponReloadMontage; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BaseReloadDuration[0x8]; // 0x0010 (Size: 0x8, Type: OptionalProperty)
    void* MontageEvaluator; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FConditionalReloadMontage, PlayerReloadMontage) == 0, "Offset mismatch for FConditionalReloadMontage::PlayerReloadMontage");
static_assert(offsetof(FConditionalReloadMontage, WeaponReloadMontage) == 8, "Offset mismatch for FConditionalReloadMontage::WeaponReloadMontage");
static_assert(offsetof(FConditionalReloadMontage, BaseReloadDuration) == 16, "Offset mismatch for FConditionalReloadMontage::BaseReloadDuration");
static_assert(offsetof(FConditionalReloadMontage, MontageEvaluator) == 24, "Offset mismatch for FConditionalReloadMontage::MontageEvaluator");

// /Script/SegmentedReloadRuntime.NextMontageSectionData
// Kind: ScriptStruct; super: none
struct FNextMontageSectionData
{
public:
    std::uint8_t NextSection[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseCustomTransition; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    void* CustomUserCondition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNextMontageSectionData, NextSection) == 0, "Offset mismatch for FNextMontageSectionData::NextSection");
static_assert(offsetof(FNextMontageSectionData, bUseCustomTransition) == 4, "Offset mismatch for FNextMontageSectionData::bUseCustomTransition");
static_assert(offsetof(FNextMontageSectionData, CustomUserCondition) == 8, "Offset mismatch for FNextMontageSectionData::CustomUserCondition");

// /Script/SegmentedReloadRuntime.ReloadCheckpointData
// Kind: ScriptStruct; super: none
struct FReloadCheckpointData
{
public:
    TArray<void*> NextMontageSections; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsReloadComplete; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float InertializationTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float TriggerTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FReloadCheckpointData, NextMontageSections) == 0, "Offset mismatch for FReloadCheckpointData::NextMontageSections");
static_assert(offsetof(FReloadCheckpointData, bIsReloadComplete) == 16, "Offset mismatch for FReloadCheckpointData::bIsReloadComplete");
static_assert(offsetof(FReloadCheckpointData, InertializationTime) == 20, "Offset mismatch for FReloadCheckpointData::InertializationTime");
static_assert(offsetof(FReloadCheckpointData, TriggerTime) == 24, "Offset mismatch for FReloadCheckpointData::TriggerTime");

// /Script/SegmentedReloadRuntime.SegmentedReloadStateData
// Kind: ScriptStruct; super: none
struct FSegmentedReloadStateData
{
public:
    std::int32_t InitialReloadAmmo; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSegmentedReloadStateData, InitialReloadAmmo) == 0, "Offset mismatch for FSegmentedReloadStateData::InitialReloadAmmo");

// /Script/SegmentedReloadRuntime.FortAnimNotify_ReloadCheckpoint
// Kind: Class; super: AnimNotify
class UFortAnimNotify_ReloadCheckpoint
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Checkpoint[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAnimNotify_ReloadCheckpoint, Checkpoint) == 56, "Offset mismatch for UFortAnimNotify_ReloadCheckpoint::Checkpoint");

// /Script/SegmentedReloadRuntime.FortGameplayAbility_SegmentedReload
// Kind: Class; super: FortGameplayAbility_Reload
class UFortGameplayAbility_SegmentedReload
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::int32_t NumTimesReloaded; // 0x0B20 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortGameplayAbility_SegmentedReload, NumTimesReloaded) == 2848, "Offset mismatch for UFortGameplayAbility_SegmentedReload::NumTimesReloaded");

// /Script/SegmentedReloadRuntime.FortWeaponComponent_SegmentedReload
// Kind: Class; super: FortWeaponComponent
class UFortWeaponComponent_SegmentedReload
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TMap<void*, void*> ReloadCheckpoints; // 0x00C8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bAllowInterruptCancel; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    TArray<void*> ConditionalReloadMontages; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnReloadCheckpointReached; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSegmentedReloadComplete; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CurrentCheckpoint[0x4]; // 0x0110 (Size: 0x4, Type: StructProperty)
    std::uint8_t NextCheckpoint[0x4]; // 0x0114 (Size: 0x4, Type: StructProperty)
    double LastServerReloadCompletionTime; // 0x0118 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0120
    std::uint8_t StateData[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortWeaponComponent_SegmentedReload, ReloadCheckpoints) == 200, "Offset mismatch for UFortWeaponComponent_SegmentedReload::ReloadCheckpoints");
static_assert(offsetof(UFortWeaponComponent_SegmentedReload, bAllowInterruptCancel) == 216, "Offset mismatch for UFortWeaponComponent_SegmentedReload::bAllowInterruptCancel");
static_assert(offsetof(UFortWeaponComponent_SegmentedReload, ConditionalReloadMontages) == 224, "Offset mismatch for UFortWeaponComponent_SegmentedReload::ConditionalReloadMontages");
static_assert(offsetof(UFortWeaponComponent_SegmentedReload, OnReloadCheckpointReached) == 240, "Offset mismatch for UFortWeaponComponent_SegmentedReload::OnReloadCheckpointReached");
static_assert(offsetof(UFortWeaponComponent_SegmentedReload, OnSegmentedReloadComplete) == 256, "Offset mismatch for UFortWeaponComponent_SegmentedReload::OnSegmentedReloadComplete");
static_assert(offsetof(UFortWeaponComponent_SegmentedReload, CurrentCheckpoint) == 272, "Offset mismatch for UFortWeaponComponent_SegmentedReload::CurrentCheckpoint");
static_assert(offsetof(UFortWeaponComponent_SegmentedReload, NextCheckpoint) == 276, "Offset mismatch for UFortWeaponComponent_SegmentedReload::NextCheckpoint");
static_assert(offsetof(UFortWeaponComponent_SegmentedReload, LastServerReloadCompletionTime) == 280, "Offset mismatch for UFortWeaponComponent_SegmentedReload::LastServerReloadCompletionTime");
static_assert(offsetof(UFortWeaponComponent_SegmentedReload, StateData) == 304, "Offset mismatch for UFortWeaponComponent_SegmentedReload::StateData");

// /Script/SegmentedReloadRuntime.SegmentedReloadCondition
// Kind: Class; super: Object
class USegmentedReloadCondition
{
public:
    std::uint8_t Opaque[1];
};
