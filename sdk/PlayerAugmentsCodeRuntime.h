/**
 * decamp dumper generated SDK
 * Package: /Script/PlayerAugmentsCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PlayerAugmentsCodeRuntime.CarryOverPlayerAugment
// Kind: ScriptStruct; super: none
struct FCarryOverPlayerAugment
{
public:
    std::uint8_t AugmentAssetId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FName SourcePlaylistName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCarryOverPlayerAugment, AugmentAssetId) == 0, "Offset mismatch for FCarryOverPlayerAugment::AugmentAssetId");
static_assert(offsetof(FCarryOverPlayerAugment, SourcePlaylistName) == 8, "Offset mismatch for FCarryOverPlayerAugment::SourcePlaylistName");

// /Script/PlayerAugmentsCodeRuntime.FortAugmentBaseWeightTableRow
// Kind: ScriptStruct; super: FortDynamicRollBaseWeightTableRow
struct FFortAugmentBaseWeightTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ItemDefinition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float BaseWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    TArray<void*> ModTags; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOwningItemZerosWeight; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0029
    float MaxModifiedWeight; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MinModifiedWeight; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAugmentBaseWeightTableRow, ItemDefinition) == 8, "Offset mismatch for FFortAugmentBaseWeightTableRow::ItemDefinition");
static_assert(offsetof(FFortAugmentBaseWeightTableRow, BaseWeight) == 16, "Offset mismatch for FFortAugmentBaseWeightTableRow::BaseWeight");
static_assert(offsetof(FFortAugmentBaseWeightTableRow, ModTags) == 24, "Offset mismatch for FFortAugmentBaseWeightTableRow::ModTags");
static_assert(offsetof(FFortAugmentBaseWeightTableRow, bOwningItemZerosWeight) == 40, "Offset mismatch for FFortAugmentBaseWeightTableRow::bOwningItemZerosWeight");
static_assert(offsetof(FFortAugmentBaseWeightTableRow, MaxModifiedWeight) == 44, "Offset mismatch for FFortAugmentBaseWeightTableRow::MaxModifiedWeight");
static_assert(offsetof(FFortAugmentBaseWeightTableRow, MinModifiedWeight) == 48, "Offset mismatch for FFortAugmentBaseWeightTableRow::MinModifiedWeight");

// /Script/PlayerAugmentsCodeRuntime.FortAugmentPassiveUnlockResult
// Kind: ScriptStruct; super: none
struct FFortAugmentPassiveUnlockResult
{
public:
    void* UnlockedAugment; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAlreadyInInventory; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAugmentPassiveUnlockResult, UnlockedAugment) == 0, "Offset mismatch for FFortAugmentPassiveUnlockResult::UnlockedAugment");
static_assert(offsetof(FFortAugmentPassiveUnlockResult, bAlreadyInInventory) == 8, "Offset mismatch for FFortAugmentPassiveUnlockResult::bAlreadyInInventory");

// /Script/PlayerAugmentsCodeRuntime.FortAugmentRerollCost
// Kind: ScriptStruct; super: none
struct FFortAugmentRerollCost
{
public:
    void* ResourceCurrency; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Amount[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAugmentRerollCost, ResourceCurrency) == 0, "Offset mismatch for FFortAugmentRerollCost::ResourceCurrency");
static_assert(offsetof(FFortAugmentRerollCost, Amount) == 8, "Offset mismatch for FFortAugmentRerollCost::Amount");

// /Script/PlayerAugmentsCodeRuntime.FortAugmentWeightModificationDataRow
// Kind: ScriptStruct; super: FortDynamicRollWeightModifierTableRow
struct FFortAugmentWeightModificationDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ActivatingPlayerTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t TargetModTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t WeightModifierOperation; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float WeightModificationValue; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAugmentWeightModificationDataRow, ActivatingPlayerTag) == 8, "Offset mismatch for FFortAugmentWeightModificationDataRow::ActivatingPlayerTag");
static_assert(offsetof(FFortAugmentWeightModificationDataRow, TargetModTag) == 12, "Offset mismatch for FFortAugmentWeightModificationDataRow::TargetModTag");
static_assert(offsetof(FFortAugmentWeightModificationDataRow, WeightModifierOperation) == 16, "Offset mismatch for FFortAugmentWeightModificationDataRow::WeightModifierOperation");
static_assert(offsetof(FFortAugmentWeightModificationDataRow, WeightModificationValue) == 20, "Offset mismatch for FFortAugmentWeightModificationDataRow::WeightModificationValue");

// /Script/PlayerAugmentsCodeRuntime.FortMcpCollectedPlayerAugmentProperties
// Kind: ScriptStruct; super: none
struct FFortMcpCollectedPlayerAugmentProperties
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerAugmentsCodeRuntime.ItemAugmentTrackedData
// Kind: ScriptStruct; super: none
struct FItemAugmentTrackedData
{
public:
    std::int32_t Count; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FItemAugmentTrackedData, Count) == 0, "Offset mismatch for FItemAugmentTrackedData::Count");

// /Script/PlayerAugmentsCodeRuntime.ItemDefinitionPair
// Kind: ScriptStruct; super: none
struct FItemDefinitionPair
{
public:
    void* AugmentItemDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemGuid[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FItemDefinitionPair, AugmentItemDefinition) == 0, "Offset mismatch for FItemDefinitionPair::AugmentItemDefinition");
static_assert(offsetof(FItemDefinitionPair, ItemGuid) == 8, "Offset mismatch for FItemDefinitionPair::ItemGuid");

// /Script/PlayerAugmentsCodeRuntime.PlayerAugmentAbilitySetHandlesStackEntry
// Kind: ScriptStruct; super: none
struct FPlayerAugmentAbilitySetHandlesStackEntry
{
public:
    TArray<void*> AbilitySetHandles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPlayerAugmentAbilitySetHandlesStackEntry, AbilitySetHandles) == 0, "Offset mismatch for FPlayerAugmentAbilitySetHandlesStackEntry::AbilitySetHandles");

// /Script/PlayerAugmentsCodeRuntime.PlayerAugmentChoiceDatum
// Kind: ScriptStruct; super: none
struct FPlayerAugmentChoiceDatum
{
public:
    void* ItemDef; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ChoiceMetaTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlayerAugmentChoiceDatum, ItemDef) == 0, "Offset mismatch for FPlayerAugmentChoiceDatum::ItemDef");
static_assert(offsetof(FPlayerAugmentChoiceDatum, ChoiceMetaTags) == 8, "Offset mismatch for FPlayerAugmentChoiceDatum::ChoiceMetaTags");

// /Script/PlayerAugmentsCodeRuntime.PlayerAugmentGameplayEffectHandlesStackEntry
// Kind: ScriptStruct; super: none
struct FPlayerAugmentGameplayEffectHandlesStackEntry
{
public:
    TArray<void*> GEHandles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPlayerAugmentGameplayEffectHandlesStackEntry, GEHandles) == 0, "Offset mismatch for FPlayerAugmentGameplayEffectHandlesStackEntry::GEHandles");

// /Script/PlayerAugmentsCodeRuntime.PlayerAugmentLockStatus
// Kind: ScriptStruct; super: none
struct FPlayerAugmentLockStatus
{
public:
    void* PlayerAugmentItemDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsLocked; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasCollectedInThisMatch; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    void* SharedFromPlayer; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPlayerAugmentLockStatus, PlayerAugmentItemDefinition) == 0, "Offset mismatch for FPlayerAugmentLockStatus::PlayerAugmentItemDefinition");
static_assert(offsetof(FPlayerAugmentLockStatus, bIsLocked) == 8, "Offset mismatch for FPlayerAugmentLockStatus::bIsLocked");
static_assert(offsetof(FPlayerAugmentLockStatus, bWasCollectedInThisMatch) == 9, "Offset mismatch for FPlayerAugmentLockStatus::bWasCollectedInThisMatch");
static_assert(offsetof(FPlayerAugmentLockStatus, SharedFromPlayer) == 16, "Offset mismatch for FPlayerAugmentLockStatus::SharedFromPlayer");

// /Script/PlayerAugmentsCodeRuntime.PlayerAugmentTrackedData
// Kind: ScriptStruct; super: none
struct FPlayerAugmentTrackedData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> AbilitySetHandlesStack; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GEHandlesStack; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPlayerAugmentTrackedData, AbilitySetHandlesStack) == 8, "Offset mismatch for FPlayerAugmentTrackedData::AbilitySetHandlesStack");
static_assert(offsetof(FPlayerAugmentTrackedData, GEHandlesStack) == 24, "Offset mismatch for FPlayerAugmentTrackedData::GEHandlesStack");

// /Script/PlayerAugmentsCodeRuntime.ReplicatedSharedPlayerAugment
// Kind: ScriptStruct; super: none
struct FReplicatedSharedPlayerAugment
{
public:
    std::int32_t PlayerAugmentIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> SharedFromPlayer; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FReplicatedSharedPlayerAugment, PlayerAugmentIndex) == 0, "Offset mismatch for FReplicatedSharedPlayerAugment::PlayerAugmentIndex");
static_assert(offsetof(FReplicatedSharedPlayerAugment, SharedFromPlayer) == 4, "Offset mismatch for FReplicatedSharedPlayerAugment::SharedFromPlayer");

// /Script/PlayerAugmentsCodeRuntime.SquadMemberAugmentData
// Kind: ScriptStruct; super: none
struct FSquadMemberAugmentData
{
public:
    TWeakObjectPtr<void> AugmentSystem; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ActiveAugments; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSquadMemberAugmentData, AugmentSystem) == 0, "Offset mismatch for FSquadMemberAugmentData::AugmentSystem");
static_assert(offsetof(FSquadMemberAugmentData, ActiveAugments) == 8, "Offset mismatch for FSquadMemberAugmentData::ActiveAugments");

// /Script/PlayerAugmentsCodeRuntime.AugmentFuctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAugmentFuctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerAugmentsCodeRuntime.FortAthenaAIBotEvaluator_Augments
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_Augments
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AugmentStatusKeyName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    FName AugmentItemKeyName; // 0x00AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Augments, AugmentStatusKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_Augments::AugmentStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Augments, AugmentItemKeyName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_Augments::AugmentItemKeyName");

// /Script/PlayerAugmentsCodeRuntime.FortAthenaBTTask_Augments
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Augments
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float MinSelectionTime; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MaxSelectionTime; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AugmentStatusKeyName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    FName AugmentItemKeyName; // 0x007C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Augments, MinSelectionTime) == 112, "Offset mismatch for UFortAthenaBTTask_Augments::MinSelectionTime");
static_assert(offsetof(UFortAthenaBTTask_Augments, MaxSelectionTime) == 116, "Offset mismatch for UFortAthenaBTTask_Augments::MaxSelectionTime");
static_assert(offsetof(UFortAthenaBTTask_Augments, AugmentStatusKeyName) == 120, "Offset mismatch for UFortAthenaBTTask_Augments::AugmentStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_Augments, AugmentItemKeyName) == 124, "Offset mismatch for UFortAthenaBTTask_Augments::AugmentItemKeyName");

// /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility
// Kind: Class; super: FortGameplayAbility
class UFortAugmentSelectionToolAbility
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* SelectionInputComponent; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InputPriority[0x28]; // 0x0B28 (Size: 0x28, Type: StructProperty)
    std::int32_t NumChoices; // 0x0B50 (Size: 0x4, Type: IntProperty)
    std::int32_t HighlightedChoiceIndex; // 0x0B54 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0B58
    std::uint8_t RerollHoldInputSeconds[0x1]; // 0x0B68 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAugmentSelectionToolAbility, SelectionInputComponent) == 2848, "Offset mismatch for UFortAugmentSelectionToolAbility::SelectionInputComponent");
static_assert(offsetof(UFortAugmentSelectionToolAbility, InputPriority) == 2856, "Offset mismatch for UFortAugmentSelectionToolAbility::InputPriority");
static_assert(offsetof(UFortAugmentSelectionToolAbility, NumChoices) == 2896, "Offset mismatch for UFortAugmentSelectionToolAbility::NumChoices");
static_assert(offsetof(UFortAugmentSelectionToolAbility, HighlightedChoiceIndex) == 2900, "Offset mismatch for UFortAugmentSelectionToolAbility::HighlightedChoiceIndex");
static_assert(offsetof(UFortAugmentSelectionToolAbility, RerollHoldInputSeconds) == 2920, "Offset mismatch for UFortAugmentSelectionToolAbility::RerollHoldInputSeconds");

// /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem
// Kind: Class; super: FortControllerComponent
class UFortBattleRoyalePlayerAugmentSystem
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float ServerGrantingStartedTimestamp; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    FMulticastInlineDelegate OnMatchAugmentsResetEvent; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bEnableAugmentCollectionUnlocking; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xF]; // 0x00E1
    std::uint8_t NumRollsForUnlock[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableUnlocking[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableBRAugmentSystem[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, ServerGrantingStartedTimestamp) == 200, "Offset mismatch for UFortBattleRoyalePlayerAugmentSystem::ServerGrantingStartedTimestamp");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, OnMatchAugmentsResetEvent) == 208, "Offset mismatch for UFortBattleRoyalePlayerAugmentSystem::OnMatchAugmentsResetEvent");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, bEnableAugmentCollectionUnlocking) == 224, "Offset mismatch for UFortBattleRoyalePlayerAugmentSystem::bEnableAugmentCollectionUnlocking");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, NumRollsForUnlock) == 240, "Offset mismatch for UFortBattleRoyalePlayerAugmentSystem::NumRollsForUnlock");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, EnableUnlocking) == 280, "Offset mismatch for UFortBattleRoyalePlayerAugmentSystem::EnableUnlocking");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, EnableBRAugmentSystem) == 320, "Offset mismatch for UFortBattleRoyalePlayerAugmentSystem::EnableBRAugmentSystem");

// /Script/PlayerAugmentsCodeRuntime.FortCollectionDataEntryPlayerAugment
// Kind: Class; super: FortCollectionDataEntry
class UFortCollectionDataEntryPlayerAugment
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* PlayerAugmentItemDefinition; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FText AdditionalDescription; // 0x0038 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortCollectionDataEntryPlayerAugment, PlayerAugmentItemDefinition) == 48, "Offset mismatch for UFortCollectionDataEntryPlayerAugment::PlayerAugmentItemDefinition");
static_assert(offsetof(UFortCollectionDataEntryPlayerAugment, AdditionalDescription) == 56, "Offset mismatch for UFortCollectionDataEntryPlayerAugment::AdditionalDescription");

// /Script/PlayerAugmentsCodeRuntime.FortCollectionDataPlayerAugment
// Kind: Class; super: FortCollectionData
class UFortCollectionDataPlayerAugment
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Entries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCollectionDataPlayerAugment, Entries) == 40, "Offset mismatch for UFortCollectionDataPlayerAugment::Entries");

// /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued
// Kind: Class; super: FortContextualTutorial
class UFortContextualTutorial_MultipleAugmentsQueued
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> WeakMarkerActor; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MarkerText[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    TWeakObjectPtr<void> MarkerHighlightComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* TutorialDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    void* OwnerController; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContextualTutorial_MultipleAugmentsQueued, WeakMarkerActor) == 168, "Offset mismatch for UFortContextualTutorial_MultipleAugmentsQueued::WeakMarkerActor");
static_assert(offsetof(UFortContextualTutorial_MultipleAugmentsQueued, MarkerText) == 176, "Offset mismatch for UFortContextualTutorial_MultipleAugmentsQueued::MarkerText");
static_assert(offsetof(UFortContextualTutorial_MultipleAugmentsQueued, MarkerHighlightComponent) == 192, "Offset mismatch for UFortContextualTutorial_MultipleAugmentsQueued::MarkerHighlightComponent");
static_assert(offsetof(UFortContextualTutorial_MultipleAugmentsQueued, TutorialDefinition) == 200, "Offset mismatch for UFortContextualTutorial_MultipleAugmentsQueued::TutorialDefinition");
static_assert(offsetof(UFortContextualTutorial_MultipleAugmentsQueued, OwnerController) == 216, "Offset mismatch for UFortContextualTutorial_MultipleAugmentsQueued::OwnerController");

// /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentDynamicRollPlayerComponent
// Kind: Class; super: FortControllerComponent_DynamicRollPlayerComponent
class UFortControllerComponent_AugmentDynamicRollPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* AssociatedManagerClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Enabled[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    void* TableManager; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x24]; // 0x0100
    std::uint8_t SeededRNG[0x1]; // 0x0124 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_AugmentDynamicRollPlayerComponent, AssociatedManagerClass) == 200, "Offset mismatch for UFortControllerComponent_AugmentDynamicRollPlayerComponent::AssociatedManagerClass");
static_assert(offsetof(UFortControllerComponent_AugmentDynamicRollPlayerComponent, Enabled) == 208, "Offset mismatch for UFortControllerComponent_AugmentDynamicRollPlayerComponent::Enabled");
static_assert(offsetof(UFortControllerComponent_AugmentDynamicRollPlayerComponent, TableManager) == 248, "Offset mismatch for UFortControllerComponent_AugmentDynamicRollPlayerComponent::TableManager");
static_assert(offsetof(UFortControllerComponent_AugmentDynamicRollPlayerComponent, SeededRNG) == 292, "Offset mismatch for UFortControllerComponent_AugmentDynamicRollPlayerComponent::SeededRNG");

// /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_AugmentGrantingSystem
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnCanSelectAugmentChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSelectedAugmentForGrant; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAvailableAugmentsForGrantingUpdated; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAuthorityRequestAugmentChoices; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLocalReroll; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0118
    FMulticastInlineDelegate OnReplicateNumPendingAugmentsToGrant; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* AugmentSelectionModeItem; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedResourceCurrencyOverride; // 0x0150 (Size: 0x8, Type: WeakObjectProperty)
    void* SelectionModeWorldItem; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Enabled[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllowAugmentDropping[0x30]; // 0x0188 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysAllowOpenAugmentSelection[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t AutomaticallyGrantSelectorItem[0x30]; // 0x01E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t AllowDroppingSelectorItem[0x31]; // 0x0218 (Size: 0x31, Type: StructProperty)
    std::int8_t ReplicatedNumPendingAugmentsToGrant; // 0x0249 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0002[0x6]; // 0x024A
    TArray<void*> ReplicatedAugmentChoices; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    std::int8_t NumFreeRerolls; // 0x0260 (Size: 0x1, Type: Int8Property)
    std::int8_t NumLockedSelectionChoices; // 0x0261 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0003[0x6]; // 0x0262
    void* PrimaryInputComponentWeaponMode; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryInputComponentBuildMode; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* TemporaryInputComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AugmentSelectInputPriority[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t SelectionBlockedPlayerTags[0x20]; // 0x02A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t AugmentSelectInputDisablePlayerTags[0x48]; // 0x02C8 (Size: 0x48, Type: StructProperty)
    TArray<void*> RerollCosts; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SelectorItemEntry[0x98]; // 0x0320 (Size: 0x98, Type: StructProperty)
    std::uint8_t LocalCachedPreviousWeapon[0x1]; // 0x03B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnCanSelectAugmentChanged) == 200, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::OnCanSelectAugmentChanged");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnSelectedAugmentForGrant) == 216, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::OnSelectedAugmentForGrant");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnAvailableAugmentsForGrantingUpdated) == 232, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::OnAvailableAugmentsForGrantingUpdated");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnAuthorityRequestAugmentChoices) == 248, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::OnAuthorityRequestAugmentChoices");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnLocalReroll) == 264, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::OnLocalReroll");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnReplicateNumPendingAugmentsToGrant) == 312, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::OnReplicateNumPendingAugmentsToGrant");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, AugmentSelectionModeItem) == 328, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::AugmentSelectionModeItem");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, CachedResourceCurrencyOverride) == 336, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::CachedResourceCurrencyOverride");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, SelectionModeWorldItem) == 344, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::SelectionModeWorldItem");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, Enabled) == 352, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::Enabled");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, bAllowAugmentDropping) == 392, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::bAllowAugmentDropping");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, bAlwaysAllowOpenAugmentSelection) == 440, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::bAlwaysAllowOpenAugmentSelection");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, AutomaticallyGrantSelectorItem) == 488, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::AutomaticallyGrantSelectorItem");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, AllowDroppingSelectorItem) == 536, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::AllowDroppingSelectorItem");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, ReplicatedNumPendingAugmentsToGrant) == 585, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::ReplicatedNumPendingAugmentsToGrant");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, ReplicatedAugmentChoices) == 592, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::ReplicatedAugmentChoices");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, NumFreeRerolls) == 608, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::NumFreeRerolls");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, NumLockedSelectionChoices) == 609, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::NumLockedSelectionChoices");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, PrimaryInputComponentWeaponMode) == 616, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::PrimaryInputComponentWeaponMode");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, PrimaryInputComponentBuildMode) == 624, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::PrimaryInputComponentBuildMode");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, TemporaryInputComponent) == 632, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::TemporaryInputComponent");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, AugmentSelectInputPriority) == 640, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::AugmentSelectInputPriority");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, SelectionBlockedPlayerTags) == 680, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::SelectionBlockedPlayerTags");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, AugmentSelectInputDisablePlayerTags) == 712, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::AugmentSelectInputDisablePlayerTags");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, RerollCosts) == 784, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::RerollCosts");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, SelectorItemEntry) == 800, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::SelectorItemEntry");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, LocalCachedPreviousWeapon) == 952, "Offset mismatch for UFortControllerComponent_AugmentGrantingSystem::LocalCachedPreviousWeapon");

// /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_AugmentUIEvents
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    FMulticastInlineDelegate OnAugmentSelectorHighlightedChoice; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAugmentStartedSelectionOfChoice; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAugmentSelectedByPointerEvent; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAugmentGrantingTimersFinishedForMatch; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAugmentGrantingTimersResetForMatch; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate AugmentHoldInputRerollChanged; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAugmentToolViewSwap; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0158
    std::int32_t NumAugmentGrantRoundsForPlaylist; // 0x0170 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentSelectorHighlightedChoice) == 232, "Offset mismatch for UFortControllerComponent_AugmentUIEvents::OnAugmentSelectorHighlightedChoice");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentStartedSelectionOfChoice) == 248, "Offset mismatch for UFortControllerComponent_AugmentUIEvents::OnAugmentStartedSelectionOfChoice");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentSelectedByPointerEvent) == 264, "Offset mismatch for UFortControllerComponent_AugmentUIEvents::OnAugmentSelectedByPointerEvent");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentGrantingTimersFinishedForMatch) == 280, "Offset mismatch for UFortControllerComponent_AugmentUIEvents::OnAugmentGrantingTimersFinishedForMatch");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentGrantingTimersResetForMatch) == 296, "Offset mismatch for UFortControllerComponent_AugmentUIEvents::OnAugmentGrantingTimersResetForMatch");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, AugmentHoldInputRerollChanged) == 312, "Offset mismatch for UFortControllerComponent_AugmentUIEvents::AugmentHoldInputRerollChanged");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentToolViewSwap) == 328, "Offset mismatch for UFortControllerComponent_AugmentUIEvents::OnAugmentToolViewSwap");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, NumAugmentGrantRoundsForPlaylist) == 368, "Offset mismatch for UFortControllerComponent_AugmentUIEvents::NumAugmentGrantRoundsForPlaylist");

// /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_PlayerAugmentPersistence
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t Enabled[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LockMissingCollectionAugmentsEnabled[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    void* PlayerController; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* CollectionData; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LivePlayerAugmentsPersistenceData[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t AugmentsCollectedThisMatch[0x10]; // 0x0140 (Size: 0x10, Type: SetProperty)
    TArray<void*> ReplicatedSharedPlayerAugments; // 0x0150 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, Enabled) == 200, "Offset mismatch for UFortControllerComponent_PlayerAugmentPersistence::Enabled");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, LockMissingCollectionAugmentsEnabled) == 240, "Offset mismatch for UFortControllerComponent_PlayerAugmentPersistence::LockMissingCollectionAugmentsEnabled");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, PlayerController) == 280, "Offset mismatch for UFortControllerComponent_PlayerAugmentPersistence::PlayerController");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, CollectionData) == 288, "Offset mismatch for UFortControllerComponent_PlayerAugmentPersistence::CollectionData");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, LivePlayerAugmentsPersistenceData) == 296, "Offset mismatch for UFortControllerComponent_PlayerAugmentPersistence::LivePlayerAugmentsPersistenceData");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, AugmentsCollectedThisMatch) == 320, "Offset mismatch for UFortControllerComponent_PlayerAugmentPersistence::AugmentsCollectedThisMatch");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, ReplicatedSharedPlayerAugments) == 336, "Offset mismatch for UFortControllerComponent_PlayerAugmentPersistence::ReplicatedSharedPlayerAugments");

// /Script/PlayerAugmentsCodeRuntime.FortGamestateComponent_AugmentTableManager
// Kind: Class; super: FortGamestateComponent_DynamicRollTableManager
class UFortGamestateComponent_AugmentTableManager
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t DataRegistryType_BaseWeights[0x4]; // 0x00F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t DataRegistryType_WeightModifiers[0x4]; // 0x00F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t Enabled[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGamestateComponent_AugmentTableManager, DataRegistryType_BaseWeights) == 240, "Offset mismatch for UFortGamestateComponent_AugmentTableManager::DataRegistryType_BaseWeights");
static_assert(offsetof(UFortGamestateComponent_AugmentTableManager, DataRegistryType_WeightModifiers) == 244, "Offset mismatch for UFortGamestateComponent_AugmentTableManager::DataRegistryType_WeightModifiers");
static_assert(offsetof(UFortGamestateComponent_AugmentTableManager, Enabled) == 248, "Offset mismatch for UFortGamestateComponent_AugmentTableManager::Enabled");

// /Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment
// Kind: Class; super: FortMcpCollectionBase
class UFortMcpCollectionPlayerAugment
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> Collected; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMcpCollectionPlayerAugment, Collected) == 80, "Offset mismatch for UFortMcpCollectionPlayerAugment::Collected");

// /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager
// Kind: Class; super: ChildCheatManager
class UFortPlayerAugmentCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_PlayerAugmentSystem
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    FMulticastInlineDelegate OnAugmentListUpdated; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t EnableAugmentsFeature[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    void* DynamicTagGEClass; // 0x0110 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> AugmentToRuntimeDataMap; // 0x0118 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ItemToRuntimeDataMap; // 0x0128 (Size: 0x10, Type: MapProperty)
    TArray<void*> ActiveAugments; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> AugmentCount; // 0x0148 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0158
    TArray<void*> SquadAugments; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RuntimeAugmentMatchDataCacheFloat; // 0x0170 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, OnAugmentListUpdated) == 216, "Offset mismatch for UFortPlayerStateComponent_PlayerAugmentSystem::OnAugmentListUpdated");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, EnableAugmentsFeature) == 232, "Offset mismatch for UFortPlayerStateComponent_PlayerAugmentSystem::EnableAugmentsFeature");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, DynamicTagGEClass) == 272, "Offset mismatch for UFortPlayerStateComponent_PlayerAugmentSystem::DynamicTagGEClass");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, AugmentToRuntimeDataMap) == 280, "Offset mismatch for UFortPlayerStateComponent_PlayerAugmentSystem::AugmentToRuntimeDataMap");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, ItemToRuntimeDataMap) == 296, "Offset mismatch for UFortPlayerStateComponent_PlayerAugmentSystem::ItemToRuntimeDataMap");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, ActiveAugments) == 312, "Offset mismatch for UFortPlayerStateComponent_PlayerAugmentSystem::ActiveAugments");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, AugmentCount) == 328, "Offset mismatch for UFortPlayerStateComponent_PlayerAugmentSystem::AugmentCount");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, SquadAugments) == 352, "Offset mismatch for UFortPlayerStateComponent_PlayerAugmentSystem::SquadAugments");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, RuntimeAugmentMatchDataCacheFloat) == 368, "Offset mismatch for UFortPlayerStateComponent_PlayerAugmentSystem::RuntimeAugmentMatchDataCacheFloat");
