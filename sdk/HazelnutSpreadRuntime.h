/**
 * decamp dumper generated SDK
 * Package: /Script/HazelnutSpreadRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HazelnutSpreadRuntime.DuelData
// Kind: ScriptStruct; super: none
struct FDuelData
{
public:
    std::uint8_t DuelID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t DuelGoal; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    TWeakObjectPtr<void> DuelHuntTarget; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> DuelProtectionTarget; // 0x001C (Size: 0x8, Type: WeakObjectProperty)
    float DuelStartTime; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float DuelEndTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DuelSource; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t DuelistType; // 0x002D (Size: 0x1, Type: EnumProperty)
    std::uint8_t BountyType; // 0x002E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002F
    TArray<void*> DuelSquadmates; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EndState; // 0x0040 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDuelData, DuelID) == 0, "Offset mismatch for FDuelData::DuelID");
static_assert(offsetof(FDuelData, DuelGoal) == 16, "Offset mismatch for FDuelData::DuelGoal");
static_assert(offsetof(FDuelData, DuelHuntTarget) == 20, "Offset mismatch for FDuelData::DuelHuntTarget");
static_assert(offsetof(FDuelData, DuelProtectionTarget) == 28, "Offset mismatch for FDuelData::DuelProtectionTarget");
static_assert(offsetof(FDuelData, DuelStartTime) == 36, "Offset mismatch for FDuelData::DuelStartTime");
static_assert(offsetof(FDuelData, DuelEndTime) == 40, "Offset mismatch for FDuelData::DuelEndTime");
static_assert(offsetof(FDuelData, DuelSource) == 44, "Offset mismatch for FDuelData::DuelSource");
static_assert(offsetof(FDuelData, DuelistType) == 45, "Offset mismatch for FDuelData::DuelistType");
static_assert(offsetof(FDuelData, BountyType) == 46, "Offset mismatch for FDuelData::BountyType");
static_assert(offsetof(FDuelData, DuelSquadmates) == 48, "Offset mismatch for FDuelData::DuelSquadmates");
static_assert(offsetof(FDuelData, EndState) == 64, "Offset mismatch for FDuelData::EndState");

// /Script/HazelnutSpreadRuntime.HazelnutSpreadEvent_BountyCurrencyChanged
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadEvent_BountyCurrencyChanged
{
public:
    std::int32_t CurrencyDelta; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHazelnutSpreadEvent_BountyCurrencyChanged, CurrencyDelta) == 0, "Offset mismatch for FHazelnutSpreadEvent_BountyCurrencyChanged::CurrencyDelta");

// /Script/HazelnutSpreadRuntime.HazelnutSpreadEvent_BountyData
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadEvent_BountyData
{
public:
    TWeakObjectPtr<void> PrimaryHunterPlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetPlayerState; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FHazelnutSpreadEvent_BountyData, PrimaryHunterPlayerState) == 0, "Offset mismatch for FHazelnutSpreadEvent_BountyData::PrimaryHunterPlayerState");
static_assert(offsetof(FHazelnutSpreadEvent_BountyData, TargetPlayerState) == 8, "Offset mismatch for FHazelnutSpreadEvent_BountyData::TargetPlayerState");

// /Script/HazelnutSpreadRuntime.HazelnutSpreadEvent_BountyInProgress
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadEvent_BountyInProgress
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpreadRuntime.HazelnutSpreadEvent_BountyStateChanged
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadEvent_BountyStateChanged
{
public:
    std::uint8_t BountyState; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FHazelnutSpreadEvent_BountyStateChanged, BountyState) == 0, "Offset mismatch for FHazelnutSpreadEvent_BountyStateChanged::BountyState");

// /Script/HazelnutSpreadRuntime.HazelnutSpreadEvent_CharacterItemDefinitionChanged
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadEvent_CharacterItemDefinitionChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpreadRuntime.HazelnutSpreadEvent_DuelQuestTimerChanged
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadEvent_DuelQuestTimerChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpreadRuntime.HazelnutSpreadEvent_DuelQuestTimerFinished
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadEvent_DuelQuestTimerFinished
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpreadRuntime.HazelnutSpreadEvent_PlayerTitleChanged
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadEvent_PlayerTitleChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpreadRuntime.HazelnutSpreadEvent_WinsCounterChanged
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadEvent_WinsCounterChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpreadRuntime.PoachedContractData
// Kind: ScriptStruct; super: none
struct FPoachedContractData
{
public:
    std::uint8_t DuelID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float DuelEndTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    void* DuelTarget; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DuelSquad; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoachedContractData, DuelID) == 0, "Offset mismatch for FPoachedContractData::DuelID");
static_assert(offsetof(FPoachedContractData, DuelEndTime) == 16, "Offset mismatch for FPoachedContractData::DuelEndTime");
static_assert(offsetof(FPoachedContractData, DuelTarget) == 24, "Offset mismatch for FPoachedContractData::DuelTarget");
static_assert(offsetof(FPoachedContractData, DuelSquad) == 32, "Offset mismatch for FPoachedContractData::DuelSquad");

// /Script/HazelnutSpreadRuntime.FortAIQuestsModifier_HazelnutSpread
// Kind: Class; super: FortAIQuestsModifierBase
class UFortAIQuestsModifier_HazelnutSpread
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t AverageDuelWinsMultiplierForDuelsWon[0x28]; // 0x0040 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanFallbackToRandomAmountsForWins[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxFallbackRandomWins[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanUpdateWinsAfterFirstPlayerLogin[0x28]; // 0x00B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NumAdditionalWinsPostLogin[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    void* BountyManagerComp; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* PersistenceComp; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> FirstLoginPlayerPersistenceComp; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAIQuestsModifier_HazelnutSpread, AverageDuelWinsMultiplierForDuelsWon) == 64, "Offset mismatch for UFortAIQuestsModifier_HazelnutSpread::AverageDuelWinsMultiplierForDuelsWon");
static_assert(offsetof(UFortAIQuestsModifier_HazelnutSpread, CanFallbackToRandomAmountsForWins) == 104, "Offset mismatch for UFortAIQuestsModifier_HazelnutSpread::CanFallbackToRandomAmountsForWins");
static_assert(offsetof(UFortAIQuestsModifier_HazelnutSpread, MaxFallbackRandomWins) == 144, "Offset mismatch for UFortAIQuestsModifier_HazelnutSpread::MaxFallbackRandomWins");
static_assert(offsetof(UFortAIQuestsModifier_HazelnutSpread, CanUpdateWinsAfterFirstPlayerLogin) == 184, "Offset mismatch for UFortAIQuestsModifier_HazelnutSpread::CanUpdateWinsAfterFirstPlayerLogin");
static_assert(offsetof(UFortAIQuestsModifier_HazelnutSpread, NumAdditionalWinsPostLogin) == 224, "Offset mismatch for UFortAIQuestsModifier_HazelnutSpread::NumAdditionalWinsPostLogin");
static_assert(offsetof(UFortAIQuestsModifier_HazelnutSpread, BountyManagerComp) == 264, "Offset mismatch for UFortAIQuestsModifier_HazelnutSpread::BountyManagerComp");
static_assert(offsetof(UFortAIQuestsModifier_HazelnutSpread, PersistenceComp) == 272, "Offset mismatch for UFortAIQuestsModifier_HazelnutSpread::PersistenceComp");
static_assert(offsetof(UFortAIQuestsModifier_HazelnutSpread, FirstLoginPlayerPersistenceComp) == 280, "Offset mismatch for UFortAIQuestsModifier_HazelnutSpread::FirstLoginPlayerPersistenceComp");

// /Script/HazelnutSpreadRuntime.FortCheatManager_HazelnutSpread
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_HazelnutSpread
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpreadRuntime.FortHazelnutSpread_DuelAbility
// Kind: Class; super: FortGameplayAbility
class UFortHazelnutSpread_DuelAbility
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    std::uint8_t ActivationType; // 0x03A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03A9
    std::uint8_t EffectContainers[0x398]; // 0x03B0 (Size: 0x398, Type: StructProperty)
    TArray<void*> GameplayEffectContainers; // 0x0748 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DynamicGameplayEffectContainers; // 0x0758 (Size: 0x10, Type: MapProperty)
    std::uint8_t OwnerPreviewImageOverrideTags[0x20]; // 0x0768 (Size: 0x20, Type: StructProperty)
    void* ProjectileClass; // 0x0788 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowBlueprintReplicatedVariables; // 0x0790 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0791
    std::uint8_t DamageStatHandle[0x10]; // 0x0798 (Size: 0x10, Type: StructProperty)
    TArray<void*> AbilityCosts; // 0x07A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Costs; // 0x07B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyingCostsEnabled; // 0x07C8 (Size: 0x1, Type: BoolProperty)
    // 0x07C8 BoolProperty bShowWidgetForCosts (shared storage)
    std::uint8_t Pad_0003[0x7]; // 0x07C9
    std::uint8_t MovementCancellationLeashLength[0x28]; // 0x07D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownDuration[0x28]; // 0x07F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownTags[0x20]; // 0x0820 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExplicitCooldownAssetTags[0x20]; // 0x0840 (Size: 0x20, Type: StructProperty)
    std::uint8_t CustomFiringSequenceLength; // 0x0860 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0861
    std::uint8_t bDisableMoveCombining; // 0x0864 (Size: 0x1, Type: BoolProperty)
    // 0x0864 BoolProperty bIgnoreClientActivationAttempts (shared storage)
    // 0x0864 BoolProperty bPersistOnDeath (shared storage)
    // 0x0864 BoolProperty bRequireServerTimeValidationPass (shared storage)
    // 0x0864 BoolProperty bRequireServerValidationPass (shared storage)
    // 0x0864 BoolProperty bStartWithCooldown (shared storage)
    // 0x0864 BoolProperty bStopsAIBehaviorLogic (shared storage)
    // 0x0864 BoolProperty bStopsAIMovement (shared storage)
    std::uint8_t bForceNormalAILOD; // 0x0865 (Size: 0x1, Type: BoolProperty)
    // 0x0865 BoolProperty bStopsRVOAvoidance (shared storage)
    std::uint8_t Pad_0005[0x2]; // 0x0866
    std::uint8_t MinimumRequiredAILODLevel; // 0x0868 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0869
    std::uint8_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests; // 0x086C (Size: 0x1, Type: BoolProperty)
    // 0x086C BoolProperty bAcceptTargetActorVehicleForCanHitTests (shared storage)
    // 0x086C BoolProperty bRelevantForAIDespawning (shared storage)
    // 0x086C BoolProperty bUseOwnerInstigatorAsInstigator (shared storage)
    // 0x086C BoolProperty bUseTetheredPawnAsInstigator (shared storage)
    std::uint8_t bUseAIFireLocationAndRotation; // 0x086D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x086E
    std::uint8_t AIWeaponUsage; // 0x0870 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0871
    std::uint8_t WeaponTestApplicationTag[0x4]; // 0x0874 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling; // 0x0878 (Size: 0x1, Type: BoolProperty)
    // 0x0878 BoolProperty bVerifyFireOffsetIsNotObstructedByWorldGeometry (shared storage)
    std::uint8_t Pad_0009[0x7]; // 0x0879
    std::uint8_t FireOffset[0x18]; // 0x0880 (Size: 0x18, Type: StructProperty)
    float ActivationNoiseRange; // 0x0898 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseRange; // 0x089C (Size: 0x4, Type: FloatProperty)
    float ActivationNoiseLoudness; // 0x08A0 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseLoudness; // 0x08A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProhibitedTargetTags[0x21]; // 0x08A8 (Size: 0x21, Type: StructProperty)
    std::uint8_t bLeadPawnTargets; // 0x08C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x2]; // 0x08CA
    float DesiredThrowAngle; // 0x08CC (Size: 0x4, Type: FloatProperty)
    float MaxYawAngleToFire; // 0x08D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampMaxYawAngleToFire; // 0x08D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseTargetActorLocation; // 0x08D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x2]; // 0x08D6
    float InitialAccuracyMax; // 0x08D8 (Size: 0x4, Type: FloatProperty)
    float InitialAccuracyMin; // 0x08DC (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMax; // 0x08E0 (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMin; // 0x08E4 (Size: 0x4, Type: FloatProperty)
    float MinAccuracyDistance; // 0x08E8 (Size: 0x4, Type: FloatProperty)
    float MaxAccuracyDistance; // 0x08EC (Size: 0x4, Type: FloatProperty)
    float AccuracyDistanceMultiplier; // 0x08F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumUsesToReachTargetAccuracy; // 0x08F4 (Size: 0x4, Type: IntProperty)
    std::int32_t UseCount; // 0x08F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsMobileToggle; // 0x08FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateIfTagsAlreadyPresent; // 0x08FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0xA]; // 0x08FE
    TArray<void*> GameplayAbilityBehaviorDistanceData; // 0x0908 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000D[0x60]; // 0x0918
    std::uint8_t MontageInfo[0x58]; // 0x0978 (Size: 0x58, Type: StructProperty)
    std::uint8_t PreviousMontageInfo[0x58]; // 0x09D0 (Size: 0x58, Type: StructProperty)
    TArray<void*> ModList; // 0x0A28 (Size: 0x10, Type: ArrayProperty)
    void* AbilityWeapon; // 0x0A38 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisplayName[0x10]; // 0x0A40 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0A50 (Size: 0x18, Type: TextProperty)
    void* SmallPreviewImageOverride; // 0x0A68 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000E[0x10]; // 0x0A70
    float ChargeStartTime; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000F[0x4]; // 0x0A84
    std::uint8_t ChargeState; // 0x0A88 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0010[0x27]; // 0x0A89
    void* ToolTip; // 0x0AB0 (Size: 0x8, Type: ClassProperty)
    void* StatList; // 0x0AB8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0011[0x8]; // 0x0AC0
    std::uint8_t ActorTrackingSettings[0x28]; // 0x0AC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnalyticsTags[0x20]; // 0x0AF0 (Size: 0x20, Type: StructProperty)
    TArray<void*> TagChangedActions; // 0x0B10 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ActivationType) == 936, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ActivationType");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, EffectContainers) == 944, "Offset mismatch for UFortHazelnutSpread_DuelAbility::EffectContainers");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, GameplayEffectContainers) == 1864, "Offset mismatch for UFortHazelnutSpread_DuelAbility::GameplayEffectContainers");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UFortHazelnutSpread_DuelAbility::DynamicGameplayEffectContainers");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UFortHazelnutSpread_DuelAbility::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ProjectileClass) == 1928, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ProjectileClass");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, DamageStatHandle) == 1944, "Offset mismatch for UFortHazelnutSpread_DuelAbility::DamageStatHandle");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, AbilityCosts) == 1960, "Offset mismatch for UFortHazelnutSpread_DuelAbility::AbilityCosts");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, Costs) == 1976, "Offset mismatch for UFortHazelnutSpread_DuelAbility::Costs");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bApplyingCostsEnabled) == 1992, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bApplyingCostsEnabled");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, MovementCancellationLeashLength) == 2000, "Offset mismatch for UFortHazelnutSpread_DuelAbility::MovementCancellationLeashLength");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ExplicitCooldownDuration) == 2040, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ExplicitCooldownDuration");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ExplicitCooldownTags) == 2080, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ExplicitCooldownTags");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ExplicitCooldownAssetTags");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, CustomFiringSequenceLength) == 2144, "Offset mismatch for UFortHazelnutSpread_DuelAbility::CustomFiringSequenceLength");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bDisableMoveCombining) == 2148, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bDisableMoveCombining");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bForceNormalAILOD) == 2149, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bForceNormalAILOD");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UFortHazelnutSpread_DuelAbility::MinimumRequiredAILODLevel");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bUseAIFireLocationAndRotation");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, AIWeaponUsage) == 2160, "Offset mismatch for UFortHazelnutSpread_DuelAbility::AIWeaponUsage");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, WeaponTestApplicationTag) == 2164, "Offset mismatch for UFortHazelnutSpread_DuelAbility::WeaponTestApplicationTag");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, FireOffset) == 2176, "Offset mismatch for UFortHazelnutSpread_DuelAbility::FireOffset");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ActivationNoiseRange) == 2200, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ActivationNoiseRange");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ImpactNoiseRange) == 2204, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ImpactNoiseRange");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ActivationNoiseLoudness) == 2208, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ActivationNoiseLoudness");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ImpactNoiseLoudness) == 2212, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ImpactNoiseLoudness");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ProhibitedTargetTags) == 2216, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ProhibitedTargetTags");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bLeadPawnTargets) == 2249, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bLeadPawnTargets");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, DesiredThrowAngle) == 2252, "Offset mismatch for UFortHazelnutSpread_DuelAbility::DesiredThrowAngle");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, MaxYawAngleToFire) == 2256, "Offset mismatch for UFortHazelnutSpread_DuelAbility::MaxYawAngleToFire");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bClampMaxYawAngleToFire");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bUseTargetActorLocation) == 2261, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bUseTargetActorLocation");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, InitialAccuracyMax) == 2264, "Offset mismatch for UFortHazelnutSpread_DuelAbility::InitialAccuracyMax");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, InitialAccuracyMin) == 2268, "Offset mismatch for UFortHazelnutSpread_DuelAbility::InitialAccuracyMin");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, TargetAccuracyMax) == 2272, "Offset mismatch for UFortHazelnutSpread_DuelAbility::TargetAccuracyMax");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, TargetAccuracyMin) == 2276, "Offset mismatch for UFortHazelnutSpread_DuelAbility::TargetAccuracyMin");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, MinAccuracyDistance) == 2280, "Offset mismatch for UFortHazelnutSpread_DuelAbility::MinAccuracyDistance");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, MaxAccuracyDistance) == 2284, "Offset mismatch for UFortHazelnutSpread_DuelAbility::MaxAccuracyDistance");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UFortHazelnutSpread_DuelAbility::AccuracyDistanceMultiplier");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UFortHazelnutSpread_DuelAbility::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, UseCount) == 2296, "Offset mismatch for UFortHazelnutSpread_DuelAbility::UseCount");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bIsMobileToggle) == 2300, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bIsMobileToggle");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UFortHazelnutSpread_DuelAbility::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UFortHazelnutSpread_DuelAbility::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, MontageInfo) == 2424, "Offset mismatch for UFortHazelnutSpread_DuelAbility::MontageInfo");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, PreviousMontageInfo) == 2512, "Offset mismatch for UFortHazelnutSpread_DuelAbility::PreviousMontageInfo");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ModList) == 2600, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ModList");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, AbilityWeapon) == 2616, "Offset mismatch for UFortHazelnutSpread_DuelAbility::AbilityWeapon");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, DisplayName) == 2624, "Offset mismatch for UFortHazelnutSpread_DuelAbility::DisplayName");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, Description) == 2640, "Offset mismatch for UFortHazelnutSpread_DuelAbility::Description");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, SmallPreviewImageOverride) == 2664, "Offset mismatch for UFortHazelnutSpread_DuelAbility::SmallPreviewImageOverride");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ChargeStartTime) == 2688, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ChargeStartTime");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ChargeState) == 2696, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ChargeState");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ToolTip) == 2736, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ToolTip");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, StatList) == 2744, "Offset mismatch for UFortHazelnutSpread_DuelAbility::StatList");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, ActorTrackingSettings) == 2760, "Offset mismatch for UFortHazelnutSpread_DuelAbility::ActorTrackingSettings");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, AnalyticsTags) == 2800, "Offset mismatch for UFortHazelnutSpread_DuelAbility::AnalyticsTags");
static_assert(offsetof(UFortHazelnutSpread_DuelAbility, TagChangedActions) == 2832, "Offset mismatch for UFortHazelnutSpread_DuelAbility::TagChangedActions");

// /Script/HazelnutSpreadRuntime.FortPlayerStateComponent_HazelnutSpreadBountyManager
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_HazelnutSpreadBountyManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnDuelContractDropped; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDuelContractCollected; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDuelContractFailed; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientDuelDataUpdated; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnForceEndDuel; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TargetFilter[0x48]; // 0x0110 (Size: 0x48, Type: StructProperty)
    std::uint8_t NumberOfPlayersToSelectFrom[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t MediumThreatRange[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t HighThreatRange[0x28]; // 0x01A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ThreatRefreshRate[0x28]; // 0x01D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowPoaching[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    void* DuelInitiatorAbility; // 0x0220 (Size: 0x8, Type: ClassProperty)
    void* DuelTargetAbility; // 0x0228 (Size: 0x8, Type: ClassProperty)
    void* DuelProtectorAbility; // 0x0230 (Size: 0x8, Type: ClassProperty)
    void* DuelBotAbility; // 0x0238 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DuelTimeDurationSeconds[0x28]; // 0x0240 (Size: 0x28, Type: StructProperty)
    std::uint8_t QuestToGrant[0x20]; // 0x0268 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ProtectorQuestToGrantPtr[0x20]; // 0x0288 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TargetQuestToGrant[0x20]; // 0x02A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GrantReciprocalQuestToTarget[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BountyData[0x10]; // 0x02F0 (Size: 0x10, Type: StructProperty)
    std::int32_t PlayerTitleIndex; // 0x0300 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0304
    void* CachedCharacterItemDefinition; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BountyState; // 0x0310 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0311
    TMap<void*, void*> RivalWeightMap; // 0x0318 (Size: 0x10, Type: MapProperty)
    std::uint8_t PrimaryRival[0x40]; // 0x0328 (Size: 0x40, Type: StructProperty)
    FScriptDelegate GetPrimaryRivalDataDelegate; // 0x0368 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t QuestsTagsContainer[0x20]; // 0x0378 (Size: 0x20, Type: StructProperty)
    std::uint8_t BountyStartSuccessTag[0x4]; // 0x0398 (Size: 0x4, Type: StructProperty)
    std::uint8_t BountyStartFailedTag[0x4]; // 0x039C (Size: 0x4, Type: StructProperty)
    std::uint8_t CurrentDuelData[0xB0]; // 0x03A0 (Size: 0xB0, Type: StructProperty)
    void* TitlesDataTable; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    FString BundleTemplateId; // 0x0458 (Size: 0x10, Type: StrProperty)
    float TotalBountyTime; // 0x0468 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x046C
    std::uint8_t bDisableDuels[0x28]; // 0x0470 (Size: 0x28, Type: StructProperty)
    std::uint8_t bPreferRivalsForBountyTarget[0x30]; // 0x0498 (Size: 0x30, Type: StructProperty)
    std::uint8_t PreferedRivalMaxDistance[0x30]; // 0x04C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAllowBotBountyTargets[0x30]; // 0x04F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAllowNonBotBountyTargets[0x30]; // 0x0528 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_BotBaseScoreMod[0x28]; // 0x0558 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_IdealDistanceMin[0x28]; // 0x0580 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_IdealDistanceMax[0x28]; // 0x05A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_IdealDistanceTolerance[0x28]; // 0x05D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_IdealDistanceScoreMod[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_ExcludeTargetDistance_BoardDuel[0x28]; // 0x0620 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_ExcludeTargetDistance_RADuel[0x28]; // 0x0648 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_Cooldown[0x28]; // 0x0670 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_CooldownScoreMod[0x28]; // 0x0698 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_CooldownOnSquadmates[0x30]; // 0x06C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_ApplyCooldownOnRADuels[0x30]; // 0x06F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_WinLossScoreMod[0x30]; // 0x0720 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_WinLossTolerance[0x30]; // 0x0750 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_BotScoreAtNegativeWinLossValue[0x28]; // 0x0780 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_UseTicketMMR[0x30]; // 0x07A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_MMRScoreMod[0x30]; // 0x07D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_MaxMMRDifference[0x30]; // 0x0808 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_MMRTolerance[0x30]; // 0x0838 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_BotMMR[0x30]; // 0x0868 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_ExcludeAfterNumMatchesSinceInitDuel[0x30]; // 0x0898 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_ScoreAtNumMatchesSinceInitDuel[0x28]; // 0x08C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelection_UseSquadmateDuelInits[0x30]; // 0x08F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetSelection_TrackRivalDuelsAsDuelInits[0x1]; // 0x0920 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, OnDuelContractDropped) == 192, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::OnDuelContractDropped");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, OnDuelContractCollected) == 208, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::OnDuelContractCollected");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, OnDuelContractFailed) == 224, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::OnDuelContractFailed");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, OnClientDuelDataUpdated) == 240, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::OnClientDuelDataUpdated");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, OnForceEndDuel) == 256, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::OnForceEndDuel");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetFilter) == 272, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetFilter");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, NumberOfPlayersToSelectFrom) == 344, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::NumberOfPlayersToSelectFrom");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, MediumThreatRange) == 384, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::MediumThreatRange");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, HighThreatRange) == 424, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::HighThreatRange");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, ThreatRefreshRate) == 464, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::ThreatRefreshRate");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, AllowPoaching) == 504, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::AllowPoaching");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, DuelInitiatorAbility) == 544, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::DuelInitiatorAbility");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, DuelTargetAbility) == 552, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::DuelTargetAbility");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, DuelProtectorAbility) == 560, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::DuelProtectorAbility");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, DuelBotAbility) == 568, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::DuelBotAbility");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, DuelTimeDurationSeconds) == 576, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::DuelTimeDurationSeconds");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, QuestToGrant) == 616, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::QuestToGrant");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, ProtectorQuestToGrantPtr) == 648, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::ProtectorQuestToGrantPtr");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetQuestToGrant) == 680, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetQuestToGrant");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, GrantReciprocalQuestToTarget) == 712, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::GrantReciprocalQuestToTarget");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, BountyData) == 752, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::BountyData");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, PlayerTitleIndex) == 768, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::PlayerTitleIndex");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, CachedCharacterItemDefinition) == 776, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::CachedCharacterItemDefinition");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, BountyState) == 784, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::BountyState");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, RivalWeightMap) == 792, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::RivalWeightMap");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, PrimaryRival) == 808, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::PrimaryRival");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, GetPrimaryRivalDataDelegate) == 872, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::GetPrimaryRivalDataDelegate");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, QuestsTagsContainer) == 888, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::QuestsTagsContainer");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, BountyStartSuccessTag) == 920, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::BountyStartSuccessTag");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, BountyStartFailedTag) == 924, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::BountyStartFailedTag");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, CurrentDuelData) == 928, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::CurrentDuelData");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TitlesDataTable) == 1104, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TitlesDataTable");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, BundleTemplateId) == 1112, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::BundleTemplateId");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TotalBountyTime) == 1128, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TotalBountyTime");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, bDisableDuels) == 1136, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::bDisableDuels");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, bPreferRivalsForBountyTarget) == 1176, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::bPreferRivalsForBountyTarget");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, PreferedRivalMaxDistance) == 1224, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::PreferedRivalMaxDistance");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, bAllowBotBountyTargets) == 1272, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::bAllowBotBountyTargets");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, bAllowNonBotBountyTargets) == 1320, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::bAllowNonBotBountyTargets");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_BotBaseScoreMod) == 1368, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_BotBaseScoreMod");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_IdealDistanceMin) == 1408, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_IdealDistanceMin");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_IdealDistanceMax) == 1448, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_IdealDistanceMax");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_IdealDistanceTolerance) == 1488, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_IdealDistanceTolerance");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_IdealDistanceScoreMod) == 1528, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_IdealDistanceScoreMod");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_ExcludeTargetDistance_BoardDuel) == 1568, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_ExcludeTargetDistance_BoardDuel");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_ExcludeTargetDistance_RADuel) == 1608, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_ExcludeTargetDistance_RADuel");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_Cooldown) == 1648, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_Cooldown");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_CooldownScoreMod) == 1688, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_CooldownScoreMod");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_CooldownOnSquadmates) == 1728, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_CooldownOnSquadmates");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_ApplyCooldownOnRADuels) == 1776, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_ApplyCooldownOnRADuels");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_WinLossScoreMod) == 1824, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_WinLossScoreMod");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_WinLossTolerance) == 1872, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_WinLossTolerance");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_BotScoreAtNegativeWinLossValue) == 1920, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_BotScoreAtNegativeWinLossValue");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_UseTicketMMR) == 1960, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_UseTicketMMR");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_MMRScoreMod) == 2008, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_MMRScoreMod");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_MaxMMRDifference) == 2056, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_MaxMMRDifference");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_MMRTolerance) == 2104, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_MMRTolerance");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_BotMMR) == 2152, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_BotMMR");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_ExcludeAfterNumMatchesSinceInitDuel) == 2200, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_ExcludeAfterNumMatchesSinceInitDuel");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_ScoreAtNumMatchesSinceInitDuel) == 2248, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_ScoreAtNumMatchesSinceInitDuel");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_UseSquadmateDuelInits) == 2288, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_UseSquadmateDuelInits");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadBountyManager, TargetSelection_TrackRivalDuelsAsDuelInits) == 2336, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadBountyManager::TargetSelection_TrackRivalDuelsAsDuelInits");

// /Script/HazelnutSpreadRuntime.HazelnutSpreadControllerComponent_Currency
// Kind: Class; super: FortControllerComponent
class UHazelnutSpreadControllerComponent_Currency
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* BountyCurrencyItemDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHazelnutSpreadControllerComponent_Currency, BountyCurrencyItemDefinition) == 200, "Offset mismatch for UHazelnutSpreadControllerComponent_Currency::BountyCurrencyItemDefinition");

// /Script/HazelnutSpreadRuntime.HazelnutSpread_DuelContractBGA
// Kind: Class; super: BuildingGameplayActor
class UHazelnutSpread_DuelContractBGA
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    void* MovementComponent; // 0x0920 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHazelnutSpread_DuelContractBGA, MovementComponent) == 2336, "Offset mismatch for UHazelnutSpread_DuelContractBGA::MovementComponent");

// /Script/HazelnutSpreadRuntime.HazelnutSpread_DuelTargetMarker
// Kind: Class; super: Actor
class UHazelnutSpread_DuelTargetMarker
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    TWeakObjectPtr<void> InstigatorPlayerState; // 0x0278 (Size: 0x8, Type: WeakObjectProperty)
    void* SpecialActorComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MarkDelaySeconds[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t MarkDurationSeconds[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsSpecialActorMarkingEnabled[0x28]; // 0x02D8 (Size: 0x28, Type: StructProperty)
    void* AppliedGECooldown; // 0x0300 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bBlockMarking; // 0x0308 (Size: 0x1, Type: BoolProperty)
    // 0x0308 BoolProperty bCanBeMarked (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0309
    std::uint8_t MarkerDisplay[0xB0]; // 0x0310 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x1]; // 0x03C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHazelnutSpread_DuelTargetMarker, InstigatorPlayerState) == 632, "Offset mismatch for UHazelnutSpread_DuelTargetMarker::InstigatorPlayerState");
static_assert(offsetof(UHazelnutSpread_DuelTargetMarker, SpecialActorComponent) == 640, "Offset mismatch for UHazelnutSpread_DuelTargetMarker::SpecialActorComponent");
static_assert(offsetof(UHazelnutSpread_DuelTargetMarker, MarkDelaySeconds) == 648, "Offset mismatch for UHazelnutSpread_DuelTargetMarker::MarkDelaySeconds");
static_assert(offsetof(UHazelnutSpread_DuelTargetMarker, MarkDurationSeconds) == 688, "Offset mismatch for UHazelnutSpread_DuelTargetMarker::MarkDurationSeconds");
static_assert(offsetof(UHazelnutSpread_DuelTargetMarker, IsSpecialActorMarkingEnabled) == 728, "Offset mismatch for UHazelnutSpread_DuelTargetMarker::IsSpecialActorMarkingEnabled");
static_assert(offsetof(UHazelnutSpread_DuelTargetMarker, AppliedGECooldown) == 768, "Offset mismatch for UHazelnutSpread_DuelTargetMarker::AppliedGECooldown");
static_assert(offsetof(UHazelnutSpread_DuelTargetMarker, bBlockMarking) == 776, "Offset mismatch for UHazelnutSpread_DuelTargetMarker::bBlockMarking");
static_assert(offsetof(UHazelnutSpread_DuelTargetMarker, MarkerDisplay) == 784, "Offset mismatch for UHazelnutSpread_DuelTargetMarker::MarkerDisplay");
static_assert(offsetof(UHazelnutSpread_DuelTargetMarker, MarkerPositionOffset) == 960, "Offset mismatch for UHazelnutSpread_DuelTargetMarker::MarkerPositionOffset");
