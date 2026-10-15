/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamDecksRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamDecksRuntime.InputAliasInhibitor_JamDeckCondition
// Kind: ScriptStruct; super: InputAliasInhibitor
struct FInputAliasInhibitor_JamDeckCondition
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Condition; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FInputAliasInhibitor_JamDeckCondition, Condition) == 32, "Offset mismatch for FInputAliasInhibitor_JamDeckCondition::Condition");

// /Script/FMJamDecksRuntime.JamDeckControlEditorPrerequisite
// Kind: ScriptStruct; super: none
struct FJamDeckControlEditorPrerequisite
{
public:
    std::uint8_t ControlType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t TagQuery[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    TSoftClassPtr<void> ActivatableGameplayAbility; // 0x0050 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FJamDeckControlEditorPrerequisite, ControlType) == 0, "Offset mismatch for FJamDeckControlEditorPrerequisite::ControlType");
static_assert(offsetof(FJamDeckControlEditorPrerequisite, TagQuery) == 8, "Offset mismatch for FJamDeckControlEditorPrerequisite::TagQuery");
static_assert(offsetof(FJamDeckControlEditorPrerequisite, ActivatableGameplayAbility) == 80, "Offset mismatch for FJamDeckControlEditorPrerequisite::ActivatableGameplayAbility");

// /Script/FMJamDecksRuntime.JamDecksEventReactionBase
// Kind: ScriptStruct; super: none
struct FJamDecksEventReactionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamDecksRuntime.JamDecksEventReactionComponentSelection
// Kind: ScriptStruct; super: none
struct FJamDecksEventReactionComponentSelection
{
public:
    TArray<void*> ComponentTagsToInclude; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJamDecksEventReactionComponentSelection, ComponentTagsToInclude) == 0, "Offset mismatch for FJamDecksEventReactionComponentSelection::ComponentTagsToInclude");

// /Script/FMJamDecksRuntime.JamDecksEventReactionParams
// Kind: ScriptStruct; super: none
struct FJamDecksEventReactionParams
{
public:
    void* Target; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Source; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJamDecksEventReactionParams, Target) == 0, "Offset mismatch for FJamDecksEventReactionParams::Target");
static_assert(offsetof(FJamDecksEventReactionParams, Source) == 8, "Offset mismatch for FJamDecksEventReactionParams::Source");

// /Script/FMJamDecksRuntime.JamDecksEventReaction_ManageComponentVisibility
// Kind: ScriptStruct; super: JamDecksEventReactionBase
struct FJamDecksEventReaction_ManageComponentVisibility
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Settings; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJamDecksEventReaction_ManageComponentVisibility, Settings) == 8, "Offset mismatch for FJamDecksEventReaction_ManageComponentVisibility::Settings");

// /Script/FMJamDecksRuntime.JamDecksEventReaction_UpdateSpecificStaticMeshComponent
// Kind: ScriptStruct; super: JamDecksEventReactionBase
struct FJamDecksEventReaction_UpdateSpecificStaticMeshComponent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Settings; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJamDecksEventReaction_UpdateSpecificStaticMeshComponent, Settings) == 8, "Offset mismatch for FJamDecksEventReaction_UpdateSpecificStaticMeshComponent::Settings");

// /Script/FMJamDecksRuntime.JamDecksEventReaction_UpdateSpecificStaticMeshComponentSetting
// Kind: ScriptStruct; super: none
struct FJamDecksEventReaction_UpdateSpecificStaticMeshComponentSetting
{
public:
    std::uint8_t ComponentSelection[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* StaticMeshToApply; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJamDecksEventReaction_UpdateSpecificStaticMeshComponentSetting, ComponentSelection) == 0, "Offset mismatch for FJamDecksEventReaction_UpdateSpecificStaticMeshComponentSetting::ComponentSelection");
static_assert(offsetof(FJamDecksEventReaction_UpdateSpecificStaticMeshComponentSetting, StaticMeshToApply) == 16, "Offset mismatch for FJamDecksEventReaction_UpdateSpecificStaticMeshComponentSetting::StaticMeshToApply");

// /Script/FMJamDecksRuntime.JamDecksStateTreeEventDesc
// Kind: ScriptStruct; super: none
struct FJamDecksStateTreeEventDesc
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* PayloadStruct; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJamDecksStateTreeEventDesc, Tag) == 0, "Offset mismatch for FJamDecksStateTreeEventDesc::Tag");
static_assert(offsetof(FJamDecksStateTreeEventDesc, PayloadStruct) == 8, "Offset mismatch for FJamDecksStateTreeEventDesc::PayloadStruct");

// /Script/FMJamDecksRuntime.JamDecksStateTreeTask_PerformReactions
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FJamDecksStateTreeTask_PerformReactions
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamDecksStateTreeTask_PerformReactions, bTaskEnabled) == 32, "Offset mismatch for FJamDecksStateTreeTask_PerformReactions::bTaskEnabled");
static_assert(offsetof(FJamDecksStateTreeTask_PerformReactions, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJamDecksStateTreeTask_PerformReactions::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJamDecksStateTreeTask_PerformReactions, TransitionHandlingPriority) == 34, "Offset mismatch for FJamDecksStateTreeTask_PerformReactions::TransitionHandlingPriority");

// /Script/FMJamDecksRuntime.JamDecksStateTreeTask_PerformReactionsInfo
// Kind: ScriptStruct; super: none
struct FJamDecksStateTreeTask_PerformReactionsInfo
{
public:
    TArray<void*> ReactionsToPerform; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJamDecksStateTreeTask_PerformReactionsInfo, ReactionsToPerform) == 0, "Offset mismatch for FJamDecksStateTreeTask_PerformReactionsInfo::ReactionsToPerform");

// /Script/FMJamDecksRuntime.JamDecksStateTreeTask_PerformReactionsInstanceData
// Kind: ScriptStruct; super: none
struct FJamDecksStateTreeTask_PerformReactionsInstanceData
{
public:
    std::uint8_t ReactionInfo[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* SourceObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ResultStatus; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamDecksStateTreeTask_PerformReactionsInstanceData, ReactionInfo) == 0, "Offset mismatch for FJamDecksStateTreeTask_PerformReactionsInstanceData::ReactionInfo");
static_assert(offsetof(FJamDecksStateTreeTask_PerformReactionsInstanceData, SourceObject) == 16, "Offset mismatch for FJamDecksStateTreeTask_PerformReactionsInstanceData::SourceObject");
static_assert(offsetof(FJamDecksStateTreeTask_PerformReactionsInstanceData, ResultStatus) == 24, "Offset mismatch for FJamDecksStateTreeTask_PerformReactionsInstanceData::ResultStatus");

// /Script/FMJamDecksRuntime.JamDecksStateTreeTask_TrackEvents
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FJamDecksStateTreeTask_TrackEvents
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamDecksStateTreeTask_TrackEvents, bTaskEnabled) == 32, "Offset mismatch for FJamDecksStateTreeTask_TrackEvents::bTaskEnabled");
static_assert(offsetof(FJamDecksStateTreeTask_TrackEvents, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJamDecksStateTreeTask_TrackEvents::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJamDecksStateTreeTask_TrackEvents, TransitionHandlingPriority) == 34, "Offset mismatch for FJamDecksStateTreeTask_TrackEvents::TransitionHandlingPriority");

// /Script/FMJamDecksRuntime.JamDecksStateTreeTask_TrackEventsInstanceData
// Kind: ScriptStruct; super: none
struct FJamDecksStateTreeTask_TrackEventsInstanceData
{
public:
    TArray<void*> ObservedEvents; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Result; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJamDecksStateTreeTask_TrackEventsInstanceData, ObservedEvents) == 0, "Offset mismatch for FJamDecksStateTreeTask_TrackEventsInstanceData::ObservedEvents");
static_assert(offsetof(FJamDecksStateTreeTask_TrackEventsInstanceData, Result) == 16, "Offset mismatch for FJamDecksStateTreeTask_TrackEventsInstanceData::Result");

// /Script/FMJamDecksRuntime.JamDecksStateTreeTask_TrackEvents_TrackedEventData
// Kind: ScriptStruct; super: none
struct FJamDecksStateTreeTask_TrackEvents_TrackedEventData
{
public:
    std::uint8_t EventDescription[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t NewValue; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bConsumeEvent; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJamDecksStateTreeTask_TrackEvents_TrackedEventData, EventDescription) == 0, "Offset mismatch for FJamDecksStateTreeTask_TrackEvents_TrackedEventData::EventDescription");
static_assert(offsetof(FJamDecksStateTreeTask_TrackEvents_TrackedEventData, NewValue) == 16, "Offset mismatch for FJamDecksStateTreeTask_TrackEvents_TrackedEventData::NewValue");
static_assert(offsetof(FJamDecksStateTreeTask_TrackEvents_TrackedEventData, bConsumeEvent) == 20, "Offset mismatch for FJamDecksStateTreeTask_TrackEvents_TrackedEventData::bConsumeEvent");

// /Script/FMJamDecksRuntime.JamEventReactionComponentVisibilitySetting
// Kind: ScriptStruct; super: none
struct FJamEventReactionComponentVisibilitySetting
{
public:
    std::uint8_t ComponentSelection[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t NewVisibilitySetting; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyToChildrenComponents; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJamEventReactionComponentVisibilitySetting, ComponentSelection) == 0, "Offset mismatch for FJamEventReactionComponentVisibilitySetting::ComponentSelection");
static_assert(offsetof(FJamEventReactionComponentVisibilitySetting, NewVisibilitySetting) == 16, "Offset mismatch for FJamEventReactionComponentVisibilitySetting::NewVisibilitySetting");
static_assert(offsetof(FJamEventReactionComponentVisibilitySetting, bApplyToChildrenComponents) == 17, "Offset mismatch for FJamEventReactionComponentVisibilitySetting::bApplyToChildrenComponents");

// /Script/FMJamDecksRuntime.ControllerComponent_JamDeckCoordinator
// Kind: Class; super: ControllerComponent
class UControllerComponent_JamDeckCoordinator
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    void* LastFocusedActor; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x98]; // 0x00F0
    void* JamSessionActor; // 0x0188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UControllerComponent_JamDeckCoordinator, LastFocusedActor) == 232, "Offset mismatch for UControllerComponent_JamDeckCoordinator::LastFocusedActor");
static_assert(offsetof(UControllerComponent_JamDeckCoordinator, JamSessionActor) == 392, "Offset mismatch for UControllerComponent_JamDeckCoordinator::JamSessionActor");

// /Script/FMJamDecksRuntime.FortClientsidePlayerInstancedStateTreeComponent
// Kind: Class; super: FortPlayerInstancedStateTreeComponent
class UFortClientsidePlayerInstancedStateTreeComponent
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0138
    std::uint8_t StateTreeRef[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t LinkedStateTreeOverrides[0x10]; // 0x0170 (Size: 0x10, Type: StructProperty)
    std::uint8_t bStartLogicAutomatically; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x23]; // 0x0181
    std::uint8_t InstancedStateTreeId[0x1]; // 0x01A4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortClientsidePlayerInstancedStateTreeComponent, OnStateTreeRunStatusChanged) == 296, "Offset mismatch for UFortClientsidePlayerInstancedStateTreeComponent::OnStateTreeRunStatusChanged");
static_assert(offsetof(UFortClientsidePlayerInstancedStateTreeComponent, StateTreeRef) == 328, "Offset mismatch for UFortClientsidePlayerInstancedStateTreeComponent::StateTreeRef");
static_assert(offsetof(UFortClientsidePlayerInstancedStateTreeComponent, LinkedStateTreeOverrides) == 368, "Offset mismatch for UFortClientsidePlayerInstancedStateTreeComponent::LinkedStateTreeOverrides");
static_assert(offsetof(UFortClientsidePlayerInstancedStateTreeComponent, bStartLogicAutomatically) == 384, "Offset mismatch for UFortClientsidePlayerInstancedStateTreeComponent::bStartLogicAutomatically");
static_assert(offsetof(UFortClientsidePlayerInstancedStateTreeComponent, InstancedStateTreeId) == 420, "Offset mismatch for UFortClientsidePlayerInstancedStateTreeComponent::InstancedStateTreeId");

// /Script/FMJamDecksRuntime.JamDeck
// Kind: Class; super: Actor
class UJamDeck
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t CollisionResponse_AimMode[0x40]; // 0x0270 (Size: 0x40, Type: StructProperty)
    std::uint8_t CollisionResponse_OverlapMode[0x40]; // 0x02B0 (Size: 0x40, Type: StructProperty)
    void* InUseMusicSlot; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultLoopType; // 0x02F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x37]; // 0x02F9
    TArray<void*> ControlConditions; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x70]; // 0x0340
    TWeakObjectPtr<void> PertinentJamSessionObject; // 0x03B0 (Size: 0x8, Type: WeakObjectProperty)
    void* JamSessionNotifier; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowNonJamEmotes; // 0x03C0 (Size: 0x1, Type: BoolProperty)
    // 0x03C0 BoolProperty bAutoRemoveEmitterWhenOwningPlayerLeaves (shared storage)
    // 0x03C0 BoolProperty bSupportAllPartsPlayback (shared storage)
    std::uint8_t Pad_0003[0x7]; // 0x03C1
    TArray<void*> HideHoverTags; // 0x03C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HideUnhoverTags; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ShowHoverTags; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ShowUnhoverTags; // 0x03F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamDeck, CollisionResponse_AimMode) == 624, "Offset mismatch for UJamDeck::CollisionResponse_AimMode");
static_assert(offsetof(UJamDeck, CollisionResponse_OverlapMode) == 688, "Offset mismatch for UJamDeck::CollisionResponse_OverlapMode");
static_assert(offsetof(UJamDeck, InUseMusicSlot) == 752, "Offset mismatch for UJamDeck::InUseMusicSlot");
static_assert(offsetof(UJamDeck, DefaultLoopType) == 760, "Offset mismatch for UJamDeck::DefaultLoopType");
static_assert(offsetof(UJamDeck, ControlConditions) == 816, "Offset mismatch for UJamDeck::ControlConditions");
static_assert(offsetof(UJamDeck, PertinentJamSessionObject) == 944, "Offset mismatch for UJamDeck::PertinentJamSessionObject");
static_assert(offsetof(UJamDeck, JamSessionNotifier) == 952, "Offset mismatch for UJamDeck::JamSessionNotifier");
static_assert(offsetof(UJamDeck, bAllowNonJamEmotes) == 960, "Offset mismatch for UJamDeck::bAllowNonJamEmotes");
static_assert(offsetof(UJamDeck, HideHoverTags) == 968, "Offset mismatch for UJamDeck::HideHoverTags");
static_assert(offsetof(UJamDeck, HideUnhoverTags) == 984, "Offset mismatch for UJamDeck::HideUnhoverTags");
static_assert(offsetof(UJamDeck, ShowHoverTags) == 1000, "Offset mismatch for UJamDeck::ShowHoverTags");
static_assert(offsetof(UJamDeck, ShowUnhoverTags) == 1016, "Offset mismatch for UJamDeck::ShowUnhoverTags");

// /Script/FMJamDecksRuntime.JamDeckAbility
// Kind: Class; super: FortGameplayAbility
class UJamDeckAbility
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

static_assert(offsetof(UJamDeckAbility, ActivationType) == 936, "Offset mismatch for UJamDeckAbility::ActivationType");
static_assert(offsetof(UJamDeckAbility, EffectContainers) == 944, "Offset mismatch for UJamDeckAbility::EffectContainers");
static_assert(offsetof(UJamDeckAbility, GameplayEffectContainers) == 1864, "Offset mismatch for UJamDeckAbility::GameplayEffectContainers");
static_assert(offsetof(UJamDeckAbility, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UJamDeckAbility::DynamicGameplayEffectContainers");
static_assert(offsetof(UJamDeckAbility, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UJamDeckAbility::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UJamDeckAbility, ProjectileClass) == 1928, "Offset mismatch for UJamDeckAbility::ProjectileClass");
static_assert(offsetof(UJamDeckAbility, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UJamDeckAbility::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UJamDeckAbility, DamageStatHandle) == 1944, "Offset mismatch for UJamDeckAbility::DamageStatHandle");
static_assert(offsetof(UJamDeckAbility, AbilityCosts) == 1960, "Offset mismatch for UJamDeckAbility::AbilityCosts");
static_assert(offsetof(UJamDeckAbility, Costs) == 1976, "Offset mismatch for UJamDeckAbility::Costs");
static_assert(offsetof(UJamDeckAbility, bApplyingCostsEnabled) == 1992, "Offset mismatch for UJamDeckAbility::bApplyingCostsEnabled");
static_assert(offsetof(UJamDeckAbility, MovementCancellationLeashLength) == 2000, "Offset mismatch for UJamDeckAbility::MovementCancellationLeashLength");
static_assert(offsetof(UJamDeckAbility, ExplicitCooldownDuration) == 2040, "Offset mismatch for UJamDeckAbility::ExplicitCooldownDuration");
static_assert(offsetof(UJamDeckAbility, ExplicitCooldownTags) == 2080, "Offset mismatch for UJamDeckAbility::ExplicitCooldownTags");
static_assert(offsetof(UJamDeckAbility, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UJamDeckAbility::ExplicitCooldownAssetTags");
static_assert(offsetof(UJamDeckAbility, CustomFiringSequenceLength) == 2144, "Offset mismatch for UJamDeckAbility::CustomFiringSequenceLength");
static_assert(offsetof(UJamDeckAbility, bDisableMoveCombining) == 2148, "Offset mismatch for UJamDeckAbility::bDisableMoveCombining");
static_assert(offsetof(UJamDeckAbility, bForceNormalAILOD) == 2149, "Offset mismatch for UJamDeckAbility::bForceNormalAILOD");
static_assert(offsetof(UJamDeckAbility, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UJamDeckAbility::MinimumRequiredAILODLevel");
static_assert(offsetof(UJamDeckAbility, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UJamDeckAbility::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UJamDeckAbility, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UJamDeckAbility::bUseAIFireLocationAndRotation");
static_assert(offsetof(UJamDeckAbility, AIWeaponUsage) == 2160, "Offset mismatch for UJamDeckAbility::AIWeaponUsage");
static_assert(offsetof(UJamDeckAbility, WeaponTestApplicationTag) == 2164, "Offset mismatch for UJamDeckAbility::WeaponTestApplicationTag");
static_assert(offsetof(UJamDeckAbility, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UJamDeckAbility::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UJamDeckAbility, FireOffset) == 2176, "Offset mismatch for UJamDeckAbility::FireOffset");
static_assert(offsetof(UJamDeckAbility, ActivationNoiseRange) == 2200, "Offset mismatch for UJamDeckAbility::ActivationNoiseRange");
static_assert(offsetof(UJamDeckAbility, ImpactNoiseRange) == 2204, "Offset mismatch for UJamDeckAbility::ImpactNoiseRange");
static_assert(offsetof(UJamDeckAbility, ActivationNoiseLoudness) == 2208, "Offset mismatch for UJamDeckAbility::ActivationNoiseLoudness");
static_assert(offsetof(UJamDeckAbility, ImpactNoiseLoudness) == 2212, "Offset mismatch for UJamDeckAbility::ImpactNoiseLoudness");
static_assert(offsetof(UJamDeckAbility, ProhibitedTargetTags) == 2216, "Offset mismatch for UJamDeckAbility::ProhibitedTargetTags");
static_assert(offsetof(UJamDeckAbility, bLeadPawnTargets) == 2249, "Offset mismatch for UJamDeckAbility::bLeadPawnTargets");
static_assert(offsetof(UJamDeckAbility, DesiredThrowAngle) == 2252, "Offset mismatch for UJamDeckAbility::DesiredThrowAngle");
static_assert(offsetof(UJamDeckAbility, MaxYawAngleToFire) == 2256, "Offset mismatch for UJamDeckAbility::MaxYawAngleToFire");
static_assert(offsetof(UJamDeckAbility, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UJamDeckAbility::bClampMaxYawAngleToFire");
static_assert(offsetof(UJamDeckAbility, bUseTargetActorLocation) == 2261, "Offset mismatch for UJamDeckAbility::bUseTargetActorLocation");
static_assert(offsetof(UJamDeckAbility, InitialAccuracyMax) == 2264, "Offset mismatch for UJamDeckAbility::InitialAccuracyMax");
static_assert(offsetof(UJamDeckAbility, InitialAccuracyMin) == 2268, "Offset mismatch for UJamDeckAbility::InitialAccuracyMin");
static_assert(offsetof(UJamDeckAbility, TargetAccuracyMax) == 2272, "Offset mismatch for UJamDeckAbility::TargetAccuracyMax");
static_assert(offsetof(UJamDeckAbility, TargetAccuracyMin) == 2276, "Offset mismatch for UJamDeckAbility::TargetAccuracyMin");
static_assert(offsetof(UJamDeckAbility, MinAccuracyDistance) == 2280, "Offset mismatch for UJamDeckAbility::MinAccuracyDistance");
static_assert(offsetof(UJamDeckAbility, MaxAccuracyDistance) == 2284, "Offset mismatch for UJamDeckAbility::MaxAccuracyDistance");
static_assert(offsetof(UJamDeckAbility, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UJamDeckAbility::AccuracyDistanceMultiplier");
static_assert(offsetof(UJamDeckAbility, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UJamDeckAbility::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UJamDeckAbility, UseCount) == 2296, "Offset mismatch for UJamDeckAbility::UseCount");
static_assert(offsetof(UJamDeckAbility, bIsMobileToggle) == 2300, "Offset mismatch for UJamDeckAbility::bIsMobileToggle");
static_assert(offsetof(UJamDeckAbility, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UJamDeckAbility::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UJamDeckAbility, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UJamDeckAbility::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UJamDeckAbility, MontageInfo) == 2424, "Offset mismatch for UJamDeckAbility::MontageInfo");
static_assert(offsetof(UJamDeckAbility, PreviousMontageInfo) == 2512, "Offset mismatch for UJamDeckAbility::PreviousMontageInfo");
static_assert(offsetof(UJamDeckAbility, ModList) == 2600, "Offset mismatch for UJamDeckAbility::ModList");
static_assert(offsetof(UJamDeckAbility, AbilityWeapon) == 2616, "Offset mismatch for UJamDeckAbility::AbilityWeapon");
static_assert(offsetof(UJamDeckAbility, DisplayName) == 2624, "Offset mismatch for UJamDeckAbility::DisplayName");
static_assert(offsetof(UJamDeckAbility, Description) == 2640, "Offset mismatch for UJamDeckAbility::Description");
static_assert(offsetof(UJamDeckAbility, SmallPreviewImageOverride) == 2664, "Offset mismatch for UJamDeckAbility::SmallPreviewImageOverride");
static_assert(offsetof(UJamDeckAbility, ChargeStartTime) == 2688, "Offset mismatch for UJamDeckAbility::ChargeStartTime");
static_assert(offsetof(UJamDeckAbility, ChargeState) == 2696, "Offset mismatch for UJamDeckAbility::ChargeState");
static_assert(offsetof(UJamDeckAbility, ToolTip) == 2736, "Offset mismatch for UJamDeckAbility::ToolTip");
static_assert(offsetof(UJamDeckAbility, StatList) == 2744, "Offset mismatch for UJamDeckAbility::StatList");
static_assert(offsetof(UJamDeckAbility, ActorTrackingSettings) == 2760, "Offset mismatch for UJamDeckAbility::ActorTrackingSettings");
static_assert(offsetof(UJamDeckAbility, AnalyticsTags) == 2800, "Offset mismatch for UJamDeckAbility::AnalyticsTags");
static_assert(offsetof(UJamDeckAbility, TagChangedActions) == 2832, "Offset mismatch for UJamDeckAbility::TagChangedActions");

// /Script/FMJamDecksRuntime.JamDecksLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJamDecksLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamDecksRuntime.JamPlayspaceVolumeComponent_JamDeckSpawner
// Kind: Class; super: JamSessionComponent_JamDeckSpawner
class UJamPlayspaceVolumeComponent_JamDeckSpawner
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* DeckClassToSpawn; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> DefaultControlPrerequisitesForDecks; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnedDecks; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamPlayspaceVolumeComponent_JamDeckSpawner, DeckClassToSpawn) == 208, "Offset mismatch for UJamPlayspaceVolumeComponent_JamDeckSpawner::DeckClassToSpawn");
static_assert(offsetof(UJamPlayspaceVolumeComponent_JamDeckSpawner, DefaultControlPrerequisitesForDecks) == 216, "Offset mismatch for UJamPlayspaceVolumeComponent_JamDeckSpawner::DefaultControlPrerequisitesForDecks");
static_assert(offsetof(UJamPlayspaceVolumeComponent_JamDeckSpawner, SpawnedDecks) == 232, "Offset mismatch for UJamPlayspaceVolumeComponent_JamDeckSpawner::SpawnedDecks");

// /Script/FMJamDecksRuntime.JamSessionComponent_JamDeckSpawner
// Kind: Class; super: ActorComponent
class UJamSessionComponent_JamDeckSpawner
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* DeckClassToSpawn; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> DefaultControlPrerequisitesForDecks; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnedDecks; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamSessionComponent_JamDeckSpawner, DeckClassToSpawn) == 208, "Offset mismatch for UJamSessionComponent_JamDeckSpawner::DeckClassToSpawn");
static_assert(offsetof(UJamSessionComponent_JamDeckSpawner, DefaultControlPrerequisitesForDecks) == 216, "Offset mismatch for UJamSessionComponent_JamDeckSpawner::DefaultControlPrerequisitesForDecks");
static_assert(offsetof(UJamSessionComponent_JamDeckSpawner, SpawnedDecks) == 232, "Offset mismatch for UJamSessionComponent_JamDeckSpawner::SpawnedDecks");
