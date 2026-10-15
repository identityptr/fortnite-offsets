/**
 * decamp dumper generated SDK
 * Package: /Script/DeluluRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DeluluRuntime.Delulu_AnalyticsComponent
// Kind: Class; super: ActorComponent
class UDelulu_AnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t GamePhaseUpdatedEventHandle[0x1C]; // 0x00C0 (Size: 0x1C, Type: StructProperty)
    TWeakObjectPtr<void> CachedAdHocMutator; // 0x00DC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t IsMutatorEventBound; // 0x00E4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelulu_AnalyticsComponent, GamePhaseUpdatedEventHandle) == 192, "Offset mismatch for UDelulu_AnalyticsComponent::GamePhaseUpdatedEventHandle");
static_assert(offsetof(UDelulu_AnalyticsComponent, CachedAdHocMutator) == 220, "Offset mismatch for UDelulu_AnalyticsComponent::CachedAdHocMutator");
static_assert(offsetof(UDelulu_AnalyticsComponent, IsMutatorEventBound) == 228, "Offset mismatch for UDelulu_AnalyticsComponent::IsMutatorEventBound");

// /Script/DeluluRuntime.FortAthenaMutator_DeluluDBNO
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_DeluluDBNO
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t AllowSoloDBNO[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowInterrogation[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowLastManStanding[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowAnyoneToRevive[0x28]; // 0x0358 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowRespawning[0x1]; // 0x0380 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_DeluluDBNO, AllowSoloDBNO) == 736, "Offset mismatch for UFortAthenaMutator_DeluluDBNO::AllowSoloDBNO");
static_assert(offsetof(UFortAthenaMutator_DeluluDBNO, AllowInterrogation) == 776, "Offset mismatch for UFortAthenaMutator_DeluluDBNO::AllowInterrogation");
static_assert(offsetof(UFortAthenaMutator_DeluluDBNO, AllowLastManStanding) == 816, "Offset mismatch for UFortAthenaMutator_DeluluDBNO::AllowLastManStanding");
static_assert(offsetof(UFortAthenaMutator_DeluluDBNO, AllowAnyoneToRevive) == 856, "Offset mismatch for UFortAthenaMutator_DeluluDBNO::AllowAnyoneToRevive");
static_assert(offsetof(UFortAthenaMutator_DeluluDBNO, AllowRespawning) == 896, "Offset mismatch for UFortAthenaMutator_DeluluDBNO::AllowRespawning");

// /Script/DeluluRuntime.FortAthenaMutator_DeluluSquadInfo
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_DeluluSquadInfo
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t AlwaysDisplaySquadInfo[0x1]; // 0x02E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_DeluluSquadInfo, AlwaysDisplaySquadInfo) == 736, "Offset mismatch for UFortAthenaMutator_DeluluSquadInfo::AlwaysDisplaySquadInfo");

// /Script/DeluluRuntime.FortAthenaMutator_DeluluWinCondition
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_DeluluWinCondition
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_DeluluWinCondition, bMutatesGameMode) == 688, "Offset mismatch for UFortAthenaMutator_DeluluWinCondition::bMutatesGameMode");
static_assert(offsetof(UFortAthenaMutator_DeluluWinCondition, CachedGameMode) == 696, "Offset mismatch for UFortAthenaMutator_DeluluWinCondition::CachedGameMode");
static_assert(offsetof(UFortAthenaMutator_DeluluWinCondition, CachedGameState) == 704, "Offset mismatch for UFortAthenaMutator_DeluluWinCondition::CachedGameState");
static_assert(offsetof(UFortAthenaMutator_DeluluWinCondition, InitializedPlayerControllers) == 712, "Offset mismatch for UFortAthenaMutator_DeluluWinCondition::InitializedPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_DeluluWinCondition, OverridePriority) == 732, "Offset mismatch for UFortAthenaMutator_DeluluWinCondition::OverridePriority");
static_assert(offsetof(UFortAthenaMutator_DeluluWinCondition, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortAthenaMutator_DeluluWinCondition::bOnlyRunOnGameThread");

// /Script/DeluluRuntime.FortControllerComponent_DeluluGiveUp
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_DeluluGiveUp
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, PrimaryComponentTick) == 56, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::PrimaryComponentTick");
static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, ComponentTags) == 104, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::ComponentTags");
static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, AssetUserData) == 120, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::AssetUserData");
static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, UCSSerializationIndex) == 144, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::UCSSerializationIndex");
static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, bNetAddressable) == 152, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::bNetAddressable");
static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, bAutoActivate) == 154, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::bAutoActivate");
static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, bIsEditorOnly) == 155, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::bIsEditorOnly");
static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, CreationMethod) == 185, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::CreationMethod");
static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, OnComponentActivated) == 186, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::OnComponentActivated");
static_assert(offsetof(UFortControllerComponent_DeluluGiveUp, OnComponentDeactivated) == 187, "Offset mismatch for UFortControllerComponent_DeluluGiveUp::OnComponentDeactivated");

// /Script/DeluluRuntime.FortGameStateComponent_RandomWinCondition
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_RandomWinCondition
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t CurrentWinConditionPlayersRemaining; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    std::uint8_t WinConditionPlayersRemaining[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WinConditionPlayersRemainingWeights[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameStateComponent_RandomWinCondition, CurrentWinConditionPlayersRemaining) == 192, "Offset mismatch for UFortGameStateComponent_RandomWinCondition::CurrentWinConditionPlayersRemaining");
static_assert(offsetof(UFortGameStateComponent_RandomWinCondition, WinConditionPlayersRemaining) == 200, "Offset mismatch for UFortGameStateComponent_RandomWinCondition::WinConditionPlayersRemaining");
static_assert(offsetof(UFortGameStateComponent_RandomWinCondition, WinConditionPlayersRemainingWeights) == 240, "Offset mismatch for UFortGameStateComponent_RandomWinCondition::WinConditionPlayersRemainingWeights");

// /Script/DeluluRuntime.UFortGameStateComponent_DeluluPlacementInfo
// Kind: Class; super: FortGameStateComponent_BattleRoyalePlacementInfo
class UUFortGameStateComponent_DeluluPlacementInfo
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, PrimaryComponentTick) == 56, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::PrimaryComponentTick");
static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, ComponentTags) == 104, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::ComponentTags");
static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, AssetUserData) == 120, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::AssetUserData");
static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, UCSSerializationIndex) == 144, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::UCSSerializationIndex");
static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, bNetAddressable) == 152, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::bNetAddressable");
static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, bAutoActivate) == 154, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::bAutoActivate");
static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, bIsEditorOnly) == 155, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::bIsEditorOnly");
static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, CreationMethod) == 185, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::CreationMethod");
static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, OnComponentActivated) == 186, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::OnComponentActivated");
static_assert(offsetof(UUFortGameStateComponent_DeluluPlacementInfo, OnComponentDeactivated) == 187, "Offset mismatch for UUFortGameStateComponent_DeluluPlacementInfo::OnComponentDeactivated");
