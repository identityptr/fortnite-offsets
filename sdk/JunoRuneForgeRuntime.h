/**
 * decamp dumper generated SDK
 * Package: /Script/JunoRuneForgeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoRuneForgeRuntime.JunoPlayerRuneRollSaveData
// Kind: ScriptStruct; super: none
struct FJunoPlayerRuneRollSaveData
{
public:
    TArray<void*> RuneRollList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPlayerRuneRollSaveData, RuneRollList) == 0, "Offset mismatch for FJunoPlayerRuneRollSaveData::RuneRollList");

// /Script/JunoRuneForgeRuntime.JunoRuneRollData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRuneRollData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TierName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float RuneRollWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoRuneRollData, TierName) == 8, "Offset mismatch for FJunoRuneRollData::TierName");
static_assert(offsetof(FJunoRuneRollData, RuneRollWeight) == 12, "Offset mismatch for FJunoRuneRollData::RuneRollWeight");

// /Script/JunoRuneForgeRuntime.JunoRuneRollTierData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRuneRollTierData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float TierRollWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoRuneRollTierData, TierRollWeight) == 8, "Offset mismatch for FJunoRuneRollTierData::TierRollWeight");

// /Script/JunoRuneForgeRuntime.RuneRoll
// Kind: ScriptStruct; super: none
struct FRuneRoll
{
public:
    std::uint8_t bIsValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> RuneRoll; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RollCount; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FRuneRoll, bIsValid) == 0, "Offset mismatch for FRuneRoll::bIsValid");
static_assert(offsetof(FRuneRoll, RuneRoll) == 8, "Offset mismatch for FRuneRoll::RuneRoll");
static_assert(offsetof(FRuneRoll, RollCount) == 24, "Offset mismatch for FRuneRoll::RollCount");

// /Script/JunoRuneForgeRuntime.RuneRollSettings
// Kind: ScriptStruct; super: TableRowBase
struct FRuneRollSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t TargetRuneCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t ItemToSpendForReroll[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::int32_t AmountToSpendForReroll; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRemoveExistingWeaponRunesFromPool; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverridePreviouslyRolledRuneWeights; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowHigherTierWeaponRunesIgnoreRemoval; // 0x0016 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0017
    float RuneRollWeightOverrideMultiplier; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRuneRollSettings, TargetRuneCount) == 8, "Offset mismatch for FRuneRollSettings::TargetRuneCount");
static_assert(offsetof(FRuneRollSettings, ItemToSpendForReroll) == 12, "Offset mismatch for FRuneRollSettings::ItemToSpendForReroll");
static_assert(offsetof(FRuneRollSettings, AmountToSpendForReroll) == 16, "Offset mismatch for FRuneRollSettings::AmountToSpendForReroll");
static_assert(offsetof(FRuneRollSettings, bRemoveExistingWeaponRunesFromPool) == 20, "Offset mismatch for FRuneRollSettings::bRemoveExistingWeaponRunesFromPool");
static_assert(offsetof(FRuneRollSettings, bOverridePreviouslyRolledRuneWeights) == 21, "Offset mismatch for FRuneRollSettings::bOverridePreviouslyRolledRuneWeights");
static_assert(offsetof(FRuneRollSettings, bAllowHigherTierWeaponRunesIgnoreRemoval) == 22, "Offset mismatch for FRuneRollSettings::bAllowHigherTierWeaponRunesIgnoreRemoval");
static_assert(offsetof(FRuneRollSettings, RuneRollWeightOverrideMultiplier) == 24, "Offset mismatch for FRuneRollSettings::RuneRollWeightOverrideMultiplier");

// /Script/JunoRuneForgeRuntime.JunoControllerComponent_RuneRoll
// Kind: Class; super: FortControllerComponent
class UJunoControllerComponent_RuneRoll
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnRuneRollChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRuneRollDenied; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CurrentRoll[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t RuneRollSettings[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    void* WaitForRootPlayspace; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoControllerComponent_RuneRoll, OnRuneRollChanged) == 208, "Offset mismatch for UJunoControllerComponent_RuneRoll::OnRuneRollChanged");
static_assert(offsetof(UJunoControllerComponent_RuneRoll, OnRuneRollDenied) == 224, "Offset mismatch for UJunoControllerComponent_RuneRoll::OnRuneRollDenied");
static_assert(offsetof(UJunoControllerComponent_RuneRoll, CurrentRoll) == 240, "Offset mismatch for UJunoControllerComponent_RuneRoll::CurrentRoll");
static_assert(offsetof(UJunoControllerComponent_RuneRoll, RuneRollSettings) == 272, "Offset mismatch for UJunoControllerComponent_RuneRoll::RuneRollSettings");
static_assert(offsetof(UJunoControllerComponent_RuneRoll, WaitForRootPlayspace) == 304, "Offset mismatch for UJunoControllerComponent_RuneRoll::WaitForRootPlayspace");

// /Script/JunoRuneForgeRuntime.JunoPlayerRuneRollPersistenceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoPlayerRuneRollPersistenceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPlayerRuneRollPersistenceComponent, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UJunoPlayerRuneRollPersistenceComponent::OnMeshNetworkReady_BP");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceComponent, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UJunoPlayerRuneRollPersistenceComponent::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceComponent, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UJunoPlayerRuneRollPersistenceComponent::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceComponent, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UJunoPlayerRuneRollPersistenceComponent::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceComponent, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UJunoPlayerRuneRollPersistenceComponent::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceComponent, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UJunoPlayerRuneRollPersistenceComponent::bSubscribeToMeshNetwork");

// /Script/JunoRuneForgeRuntime.JunoPlayerRuneRollPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoPlayerRuneRollPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoPlayerRuneRollPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoPlayerRuneRollPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoPlayerRuneRollPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoPlayerRuneRollPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoPlayerRuneRollPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoPlayerRuneRollPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoPlayerRuneRollPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoPlayerRuneRollPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoPlayerRuneRollPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoPlayerRuneRollPersistenceFeatureModule::Description");
