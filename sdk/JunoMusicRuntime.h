/**
 * decamp dumper generated SDK
 * Package: /Script/JunoMusicRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoMusicRuntime.JunoActiveMusicElement
// Kind: ScriptStruct; super: none
struct FJunoActiveMusicElement
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* MusicCue; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoActiveMusicElement, MusicCue) == 24, "Offset mismatch for FJunoActiveMusicElement::MusicCue");

// /Script/JunoMusicRuntime.JunoClientCustomMusicPlayerData
// Kind: ScriptStruct; super: none
struct FJunoClientCustomMusicPlayerData
{
public:
    void* OwnerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoClientCustomMusicPlayerData, OwnerController) == 0, "Offset mismatch for FJunoClientCustomMusicPlayerData::OwnerController");

// /Script/JunoMusicRuntime.JunoCustomMusicPlayerComponentRepData
// Kind: ScriptStruct; super: none
struct FJunoCustomMusicPlayerComponentRepData
{
public:
    void* OwnerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OwningPlayerID[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    TArray<void*> Setlist; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCustomMusicPlayerComponentRepData, OwnerController) == 0, "Offset mismatch for FJunoCustomMusicPlayerComponentRepData::OwnerController");
static_assert(offsetof(FJunoCustomMusicPlayerComponentRepData, OwningPlayerID) == 8, "Offset mismatch for FJunoCustomMusicPlayerComponentRepData::OwningPlayerID");
static_assert(offsetof(FJunoCustomMusicPlayerComponentRepData, Setlist) == 56, "Offset mismatch for FJunoCustomMusicPlayerComponentRepData::Setlist");

// /Script/JunoMusicRuntime.JunoMusicCombatStateMapping
// Kind: ScriptStruct; super: none
struct FJunoMusicCombatStateMapping
{
public:
    std::uint8_t DataTrackerEventNames[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t MusicStates[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoMusicCombatStateMapping, DataTrackerEventNames) == 0, "Offset mismatch for FJunoMusicCombatStateMapping::DataTrackerEventNames");
static_assert(offsetof(FJunoMusicCombatStateMapping, MusicStates) == 32, "Offset mismatch for FJunoMusicCombatStateMapping::MusicStates");

// /Script/JunoMusicRuntime.JunoMusicDataAggregatorSettings
// Kind: ScriptStruct; super: none
struct FJunoMusicDataAggregatorSettings
{
public:
    TArray<void*> JunoMusicDataCollectors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoMusicDataAggregatorSettings, JunoMusicDataCollectors) == 0, "Offset mismatch for FJunoMusicDataAggregatorSettings::JunoMusicDataCollectors");

// /Script/JunoMusicRuntime.JunoMusicElementData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoMusicElementData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t ElementName[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t ElementConditions[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint8_t StatePushConditions[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    TArray<void*> MusicCues; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CueSelectionBehavior; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00B1
    std::uint8_t FadeInOutValues[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    float PlaybackPriority; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float PlaybackProbabilityPercent; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStopOnInvalidConditions; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00D1
    std::uint8_t ElementStopConditions[0x48]; // 0x00D8 (Size: 0x48, Type: StructProperty)
    std::uint8_t ElementCooldownInSeconds[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReceiveAggregatedData; // 0x0130 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoMusicElementData, bEnabled) == 8, "Offset mismatch for FJunoMusicElementData::bEnabled");
static_assert(offsetof(FJunoMusicElementData, ElementName) == 12, "Offset mismatch for FJunoMusicElementData::ElementName");
static_assert(offsetof(FJunoMusicElementData, ElementConditions) == 16, "Offset mismatch for FJunoMusicElementData::ElementConditions");
static_assert(offsetof(FJunoMusicElementData, StatePushConditions) == 88, "Offset mismatch for FJunoMusicElementData::StatePushConditions");
static_assert(offsetof(FJunoMusicElementData, MusicCues) == 160, "Offset mismatch for FJunoMusicElementData::MusicCues");
static_assert(offsetof(FJunoMusicElementData, CueSelectionBehavior) == 176, "Offset mismatch for FJunoMusicElementData::CueSelectionBehavior");
static_assert(offsetof(FJunoMusicElementData, FadeInOutValues) == 184, "Offset mismatch for FJunoMusicElementData::FadeInOutValues");
static_assert(offsetof(FJunoMusicElementData, PlaybackPriority) == 200, "Offset mismatch for FJunoMusicElementData::PlaybackPriority");
static_assert(offsetof(FJunoMusicElementData, PlaybackProbabilityPercent) == 204, "Offset mismatch for FJunoMusicElementData::PlaybackProbabilityPercent");
static_assert(offsetof(FJunoMusicElementData, bStopOnInvalidConditions) == 208, "Offset mismatch for FJunoMusicElementData::bStopOnInvalidConditions");
static_assert(offsetof(FJunoMusicElementData, ElementStopConditions) == 216, "Offset mismatch for FJunoMusicElementData::ElementStopConditions");
static_assert(offsetof(FJunoMusicElementData, ElementCooldownInSeconds) == 288, "Offset mismatch for FJunoMusicElementData::ElementCooldownInSeconds");
static_assert(offsetof(FJunoMusicElementData, bReceiveAggregatedData) == 304, "Offset mismatch for FJunoMusicElementData::bReceiveAggregatedData");

// /Script/JunoMusicRuntime.JunoMusicPlayspaceProbeData
// Kind: ScriptStruct; super: none
struct FJunoMusicPlayspaceProbeData
{
public:
    TArray<void*> JunoMusicPlayspaceProbes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoMusicPlayspaceProbeData, JunoMusicPlayspaceProbes) == 0, "Offset mismatch for FJunoMusicPlayspaceProbeData::JunoMusicPlayspaceProbes");

// /Script/JunoMusicRuntime.JunoMusicPushStateTreeTask
// Kind: ScriptStruct; super: JunoMusicStateTreeTaskBase
struct FJunoMusicPushStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoMusicPushStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoMusicPushStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoMusicPushStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoMusicPushStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoMusicPushStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoMusicPushStateTreeTask::TransitionHandlingPriority");

// /Script/JunoMusicRuntime.JunoMusicRemoveStateTreeTask
// Kind: ScriptStruct; super: JunoMusicStateTreeTaskBase
struct FJunoMusicRemoveStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoMusicRemoveStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoMusicRemoveStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoMusicRemoveStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoMusicRemoveStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoMusicRemoveStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoMusicRemoveStateTreeTask::TransitionHandlingPriority");

// /Script/JunoMusicRuntime.JunoMusicStateTreeTaskBase
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FJunoMusicStateTreeTaskBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoMusicStateTreeTaskBase, bTaskEnabled) == 32, "Offset mismatch for FJunoMusicStateTreeTaskBase::bTaskEnabled");
static_assert(offsetof(FJunoMusicStateTreeTaskBase, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoMusicStateTreeTaskBase::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoMusicStateTreeTaskBase, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoMusicStateTreeTaskBase::TransitionHandlingPriority");

// /Script/JunoMusicRuntime.JunoMusicStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoMusicStateTreeTaskInstanceData
{
public:
    std::uint8_t MusicStates[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoMusicStateTreeTaskInstanceData, MusicStates) == 0, "Offset mismatch for FJunoMusicStateTreeTaskInstanceData::MusicStates");

// /Script/JunoMusicRuntime.JunoServerCustomMusicPlayerData
// Kind: ScriptStruct; super: none
struct FJunoServerCustomMusicPlayerData
{
public:
    void* OwnerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoServerCustomMusicPlayerData, OwnerController) == 0, "Offset mismatch for FJunoServerCustomMusicPlayerData::OwnerController");

// /Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicDataAggregatorSettings
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_RegisterJunoMusicDataAggregatorSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> JunoMusicDataAggregatorSettings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_RegisterJunoMusicDataAggregatorSettings, JunoMusicDataAggregatorSettings) == 40, "Offset mismatch for UGameFeatureAction_RegisterJunoMusicDataAggregatorSettings::JunoMusicDataAggregatorSettings");

// /Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicElementTable
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_RegisterJunoMusicElementTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> JunoMusicElementDataTables; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGameFeatureAction_RegisterJunoMusicElementTable, JunoMusicElementDataTables) == 40, "Offset mismatch for UGameFeatureAction_RegisterJunoMusicElementTable::JunoMusicElementDataTables");

// /Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicPlayspaceProbes
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_RegisterJunoMusicPlayspaceProbes
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> JunoMusicProbesDataAssets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_RegisterJunoMusicPlayspaceProbes, JunoMusicProbesDataAssets) == 40, "Offset mismatch for UGameFeatureAction_RegisterJunoMusicPlayspaceProbes::JunoMusicProbesDataAssets");

// /Script/JunoMusicRuntime.JunoActiveMusicCue
// Kind: Class; super: Object
class UJunoActiveMusicCue
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* AudioComponent; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* LoadedMusic; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0068
    void* MetasoundGeneratorHandle; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoActiveMusicCue, AudioComponent) == 88, "Offset mismatch for UJunoActiveMusicCue::AudioComponent");
static_assert(offsetof(UJunoActiveMusicCue, LoadedMusic) == 96, "Offset mismatch for UJunoActiveMusicCue::LoadedMusic");
static_assert(offsetof(UJunoActiveMusicCue, MetasoundGeneratorHandle) == 120, "Offset mismatch for UJunoActiveMusicCue::MetasoundGeneratorHandle");

// /Script/JunoMusicRuntime.JunoClientCustomMusicPlayerSubsystem
// Kind: Class; super: JunoCustomMusicPlayerSubsystem
class UJunoClientCustomMusicPlayerSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* ActiveCustomMusicPlayer; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CustomMusicPlayers; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoClientCustomMusicPlayerSubsystem, ActiveCustomMusicPlayer) == 72, "Offset mismatch for UJunoClientCustomMusicPlayerSubsystem::ActiveCustomMusicPlayer");
static_assert(offsetof(UJunoClientCustomMusicPlayerSubsystem, CustomMusicPlayers) == 80, "Offset mismatch for UJunoClientCustomMusicPlayerSubsystem::CustomMusicPlayers");

// /Script/JunoMusicRuntime.JunoCustomMusicPlayerComponent
// Kind: Class; super: SceneComponent
class UJunoCustomMusicPlayerComponent
{
public:
    std::uint8_t Pad_0000[0x248]; // 0x0000
    FMulticastInlineDelegate OnPlaybackStartedEvent; // 0x0248 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlaybackStoppedEvent; // 0x0258 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* AttenuationSettings; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MusicEventTag[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    std::uint8_t MusicEventBehaviorTags[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    std::uint8_t bLoopSetlist; // 0x0298 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0299
    std::uint8_t RepData[0x48]; // 0x02A0 (Size: 0x48, Type: StructProperty)
    void* AudioComponent; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Setlist; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoCustomMusicPlayerComponent, OnPlaybackStartedEvent) == 584, "Offset mismatch for UJunoCustomMusicPlayerComponent::OnPlaybackStartedEvent");
static_assert(offsetof(UJunoCustomMusicPlayerComponent, OnPlaybackStoppedEvent) == 600, "Offset mismatch for UJunoCustomMusicPlayerComponent::OnPlaybackStoppedEvent");
static_assert(offsetof(UJunoCustomMusicPlayerComponent, AttenuationSettings) == 616, "Offset mismatch for UJunoCustomMusicPlayerComponent::AttenuationSettings");
static_assert(offsetof(UJunoCustomMusicPlayerComponent, MusicEventTag) == 624, "Offset mismatch for UJunoCustomMusicPlayerComponent::MusicEventTag");
static_assert(offsetof(UJunoCustomMusicPlayerComponent, MusicEventBehaviorTags) == 632, "Offset mismatch for UJunoCustomMusicPlayerComponent::MusicEventBehaviorTags");
static_assert(offsetof(UJunoCustomMusicPlayerComponent, bLoopSetlist) == 664, "Offset mismatch for UJunoCustomMusicPlayerComponent::bLoopSetlist");
static_assert(offsetof(UJunoCustomMusicPlayerComponent, RepData) == 672, "Offset mismatch for UJunoCustomMusicPlayerComponent::RepData");
static_assert(offsetof(UJunoCustomMusicPlayerComponent, AudioComponent) == 744, "Offset mismatch for UJunoCustomMusicPlayerComponent::AudioComponent");
static_assert(offsetof(UJunoCustomMusicPlayerComponent, Setlist) == 752, "Offset mismatch for UJunoCustomMusicPlayerComponent::Setlist");

// /Script/JunoMusicRuntime.JunoCustomMusicPlayerSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UJunoCustomMusicPlayerSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMusicRuntime.JunoMusicControllerSubsystem
// Kind: Class; super: WorldSubsystem
class UJunoMusicControllerSubsystem
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* MusicCueController; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* JunoMusicDataAggregator; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoMusicControllerSubsystem, MusicCueController) == 96, "Offset mismatch for UJunoMusicControllerSubsystem::MusicCueController");
static_assert(offsetof(UJunoMusicControllerSubsystem, JunoMusicDataAggregator) == 104, "Offset mismatch for UJunoMusicControllerSubsystem::JunoMusicDataAggregator");

// /Script/JunoMusicRuntime.JunoMusicDataAggregator
// Kind: Class; super: Object
class UJunoMusicDataAggregator
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> DataCollectors; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* AggregatedData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoMusicDataAggregator, DataCollectors) == 72, "Offset mismatch for UJunoMusicDataAggregator::DataCollectors");
static_assert(offsetof(UJunoMusicDataAggregator, AggregatedData) == 88, "Offset mismatch for UJunoMusicDataAggregator::AggregatedData");

// /Script/JunoMusicRuntime.JunoMusicDataAggregatorConfig
// Kind: Class; super: PrimaryDataAsset
class UJunoMusicDataAggregatorConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DataAggregatorSettings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoMusicDataAggregatorConfig, DataAggregatorSettings) == 40, "Offset mismatch for UJunoMusicDataAggregatorConfig::DataAggregatorSettings");

// /Script/JunoMusicRuntime.JunoMusicDataCollector
// Kind: Class; super: Object
class UJunoMusicDataCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMusicRuntime.JunoMusicDataCollector_Combat
// Kind: Class; super: JunoMusicDataCollector
class UJunoMusicDataCollector_Combat
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RegisteredDataTrackerComponents; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NumAggressiveCreaturesTag[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t NumAggressiveMinifigsTag[0x4]; // 0x003C (Size: 0x4, Type: StructProperty)
    std::uint8_t NumAggressiveStormSickMinifigsTag[0x4]; // 0x0040 (Size: 0x4, Type: StructProperty)
    std::uint8_t NumAggressiveStormSickCreaturesTag[0x4]; // 0x0044 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsInCombatParameterName[0x4]; // 0x0048 (Size: 0x4, Type: NameProperty)
    std::uint8_t CombatThreatLevelParameterName[0x4]; // 0x004C (Size: 0x4, Type: NameProperty)
    std::uint8_t MinifigWeightParameterName[0x4]; // 0x0050 (Size: 0x4, Type: NameProperty)
    std::uint8_t CreatureWeightParameterName[0x4]; // 0x0054 (Size: 0x4, Type: NameProperty)
    FName StormSickWeightParameterName; // 0x0058 (Size: 0x8, Type: NameProperty)
    std::uint8_t bDebug; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoMusicDataCollector_Combat, RegisteredDataTrackerComponents) == 40, "Offset mismatch for UJunoMusicDataCollector_Combat::RegisteredDataTrackerComponents");
static_assert(offsetof(UJunoMusicDataCollector_Combat, NumAggressiveCreaturesTag) == 56, "Offset mismatch for UJunoMusicDataCollector_Combat::NumAggressiveCreaturesTag");
static_assert(offsetof(UJunoMusicDataCollector_Combat, NumAggressiveMinifigsTag) == 60, "Offset mismatch for UJunoMusicDataCollector_Combat::NumAggressiveMinifigsTag");
static_assert(offsetof(UJunoMusicDataCollector_Combat, NumAggressiveStormSickMinifigsTag) == 64, "Offset mismatch for UJunoMusicDataCollector_Combat::NumAggressiveStormSickMinifigsTag");
static_assert(offsetof(UJunoMusicDataCollector_Combat, NumAggressiveStormSickCreaturesTag) == 68, "Offset mismatch for UJunoMusicDataCollector_Combat::NumAggressiveStormSickCreaturesTag");
static_assert(offsetof(UJunoMusicDataCollector_Combat, IsInCombatParameterName) == 72, "Offset mismatch for UJunoMusicDataCollector_Combat::IsInCombatParameterName");
static_assert(offsetof(UJunoMusicDataCollector_Combat, CombatThreatLevelParameterName) == 76, "Offset mismatch for UJunoMusicDataCollector_Combat::CombatThreatLevelParameterName");
static_assert(offsetof(UJunoMusicDataCollector_Combat, MinifigWeightParameterName) == 80, "Offset mismatch for UJunoMusicDataCollector_Combat::MinifigWeightParameterName");
static_assert(offsetof(UJunoMusicDataCollector_Combat, CreatureWeightParameterName) == 84, "Offset mismatch for UJunoMusicDataCollector_Combat::CreatureWeightParameterName");
static_assert(offsetof(UJunoMusicDataCollector_Combat, StormSickWeightParameterName) == 88, "Offset mismatch for UJunoMusicDataCollector_Combat::StormSickWeightParameterName");
static_assert(offsetof(UJunoMusicDataCollector_Combat, bDebug) == 96, "Offset mismatch for UJunoMusicDataCollector_Combat::bDebug");

// /Script/JunoMusicRuntime.JunoMusicElementController
// Kind: Class; super: Object
class UJunoMusicElementController
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> ElementTables; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> ActiveMusicElements; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoMusicElementController, ElementTables) == 56, "Offset mismatch for UJunoMusicElementController::ElementTables");
static_assert(offsetof(UJunoMusicElementController, ActiveMusicElements) == 72, "Offset mismatch for UJunoMusicElementController::ActiveMusicElements");

// /Script/JunoMusicRuntime.JunoMusicGameStateComponent
// Kind: Class; super: GameStateComponent
class UJunoMusicGameStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> MusicStates; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClientMusicStates; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoMusicGameStateComponent, MusicStates) == 192, "Offset mismatch for UJunoMusicGameStateComponent::MusicStates");
static_assert(offsetof(UJunoMusicGameStateComponent, ClientMusicStates) == 208, "Offset mismatch for UJunoMusicGameStateComponent::ClientMusicStates");

// /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe
// Kind: Class; super: Object
class UJunoMusicPlayspaceProbe
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMusicRuntime.JunoMusicPlayspaceProbeDataAsset
// Kind: Class; super: PrimaryDataAsset
class UJunoMusicPlayspaceProbeDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t JunoMusicProbes[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoMusicPlayspaceProbeDataAsset, JunoMusicProbes) == 40, "Offset mismatch for UJunoMusicPlayspaceProbeDataAsset::JunoMusicProbes");

// /Script/JunoMusicRuntime.JunoMusicPlayspaceProbeSubsystem
// Kind: Class; super: WorldSubsystem
class UJunoMusicPlayspaceProbeSubsystem
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> DataProbes; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoMusicPlayspaceProbeSubsystem, DataProbes) == 96, "Offset mismatch for UJunoMusicPlayspaceProbeSubsystem::DataProbes");

// /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Combat
// Kind: Class; super: JunoMusicPlayspaceProbe
class UJunoMusicPlayspaceProbe_Combat
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RegisteredDataTrackerComponents; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MusicCombatStateMappings; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConflictingStateResolution; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x17]; // 0x0049
    TWeakObjectPtr<void> CachedMusicController; // 0x0060 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoMusicPlayspaceProbe_Combat, RegisteredDataTrackerComponents) == 40, "Offset mismatch for UJunoMusicPlayspaceProbe_Combat::RegisteredDataTrackerComponents");
static_assert(offsetof(UJunoMusicPlayspaceProbe_Combat, MusicCombatStateMappings) == 56, "Offset mismatch for UJunoMusicPlayspaceProbe_Combat::MusicCombatStateMappings");
static_assert(offsetof(UJunoMusicPlayspaceProbe_Combat, ConflictingStateResolution) == 72, "Offset mismatch for UJunoMusicPlayspaceProbe_Combat::ConflictingStateResolution");
static_assert(offsetof(UJunoMusicPlayspaceProbe_Combat, CachedMusicController) == 96, "Offset mismatch for UJunoMusicPlayspaceProbe_Combat::CachedMusicController");

// /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Environment
// Kind: Class; super: JunoMusicPlayspaceProbe
class UJunoMusicPlayspaceProbe_Environment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMusicRuntime.JunoServerCustomMusicPlayerSubsystem
// Kind: Class; super: JunoCustomMusicPlayerSubsystem
class UJunoServerCustomMusicPlayerSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TMap<void*, void*> CustomMusicPlayers; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoServerCustomMusicPlayerSubsystem, CustomMusicPlayers) == 72, "Offset mismatch for UJunoServerCustomMusicPlayerSubsystem::CustomMusicPlayers");
