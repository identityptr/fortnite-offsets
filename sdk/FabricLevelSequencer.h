/**
 * decamp dumper generated SDK
 * Package: /Script/FabricLevelSequencer
 */
#pragma once
#include "Basic.h"

// /Script/FabricLevelSequencer.LinkedSequence
// Kind: ScriptStruct; super: none
struct FLinkedSequence
{
public:
    TSoftObjectPtr<void> LevelSequence; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FLinkedSequence, LevelSequence) == 0, "Offset mismatch for FLinkedSequence::LevelSequence");

// /Script/FabricLevelSequencer.LinkedSongSync
// Kind: ScriptStruct; super: none
struct FLinkedSongSync
{
public:
    TSoftObjectPtr<void> LinkedSongSync; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FLinkedSongSync, LinkedSongSync) == 0, "Offset mismatch for FLinkedSongSync::LinkedSongSync");

// /Script/FabricLevelSequencer.LinkedSongSyncList
// Kind: ScriptStruct; super: none
struct FLinkedSongSyncList
{
public:
    TArray<void*> LinkedSongSyncs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLinkedSongSyncList, LinkedSongSyncs) == 0, "Offset mismatch for FLinkedSongSyncList::LinkedSongSyncs");

// /Script/FabricLevelSequencer.MidiSource
// Kind: ScriptStruct; super: none
struct FMidiSource
{
public:
    std::uint8_t MidiSourceType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* MidiFile; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName SelectedMidiTrackName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMidiSource, MidiSourceType) == 0, "Offset mismatch for FMidiSource::MidiSourceType");
static_assert(offsetof(FMidiSource, MidiFile) == 8, "Offset mismatch for FMidiSource::MidiFile");
static_assert(offsetof(FMidiSource, SelectedMidiTrackName) == 16, "Offset mismatch for FMidiSource::SelectedMidiTrackName");

// /Script/FabricLevelSequencer.SongSyncMidiSource
// Kind: ScriptStruct; super: none
struct FSongSyncMidiSource
{
public:
    void* MidiFile; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MidiSourceType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t SelectedMidiTrackName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t bHasBeenSet; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSongSyncMidiSource, MidiFile) == 0, "Offset mismatch for FSongSyncMidiSource::MidiFile");
static_assert(offsetof(FSongSyncMidiSource, MidiSourceType) == 8, "Offset mismatch for FSongSyncMidiSource::MidiSourceType");
static_assert(offsetof(FSongSyncMidiSource, SelectedMidiTrackName) == 12, "Offset mismatch for FSongSyncMidiSource::SelectedMidiTrackName");
static_assert(offsetof(FSongSyncMidiSource, bHasBeenSet) == 16, "Offset mismatch for FSongSyncMidiSource::bHasBeenSet");

// /Script/FabricLevelSequencer.SongSyncPlaybackRequest
// Kind: ScriptStruct; super: none
struct FSongSyncPlaybackRequest
{
public:
    std::uint8_t StartingTimestamp[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t bPlay; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSongSyncPlaybackRequest, StartingTimestamp) == 0, "Offset mismatch for FSongSyncPlaybackRequest::StartingTimestamp");
static_assert(offsetof(FSongSyncPlaybackRequest, bPlay) == 8, "Offset mismatch for FSongSyncPlaybackRequest::bPlay");

// /Script/FabricLevelSequencer.SongSyncSequenceActor
// Kind: ScriptStruct; super: none
struct FSongSyncSequenceActor
{
public:
    TWeakObjectPtr<void> LevelSequenceActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SequenceState; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSongSyncSequenceActor, LevelSequenceActor) == 0, "Offset mismatch for FSongSyncSequenceActor::LevelSequenceActor");
static_assert(offsetof(FSongSyncSequenceActor, SequenceState) == 8, "Offset mismatch for FSongSyncSequenceActor::SequenceState");

// /Script/FabricLevelSequencer.UserOptionDefinitionLinkedSequenceMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionLinkedSequenceMetaData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricLevelSequencer.UserOptionDefinitionLinkedSongSyncListMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionLinkedSongSyncListMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserOptionDefinitionLinkedSongSyncListMetaData, DefaultValue) == 8, "Offset mismatch for FUserOptionDefinitionLinkedSongSyncListMetaData::DefaultValue");

// /Script/FabricLevelSequencer.UserOptionDefinitionMidiSourceMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionMidiSourceMetaData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricLevelSequencer.FabricSongSyncComponent
// Kind: Class; super: ActorComponent
class UFabricSongSyncComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float MinAllowedTempo; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float MaxAllowedTempo; // 0x00CC (Size: 0x4, Type: FloatProperty)
    TArray<void*> AllowedTimeSignatureNumerators; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllowedTimeSignatureDenominators; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MidiFilePropertyName[0x4]; // 0x00F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t OffsetBarsProperty[0x4]; // 0x00F4 (Size: 0x4, Type: NameProperty)
    std::uint8_t OffsetBeatsProperty[0x4]; // 0x00F8 (Size: 0x4, Type: NameProperty)
    std::uint8_t IgnoreSeeksProperty[0x4]; // 0x00FC (Size: 0x4, Type: NameProperty)
    void* MidiFileClockProviderPatchClass; // 0x0100 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AudioComponentName[0x4]; // 0x0108 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAllowSpeedAdjustSyncChanges; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x010D
    FMulticastInlineDelegate OnSongSyncPlayInitiated; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSongSyncStarted; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSongSyncStopped; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ServerPlaybackRequest[0x1C]; // 0x0140 (Size: 0x1C, Type: StructProperty)
    std::uint8_t PlaybackStartTimestamp[0x8]; // 0x015C (Size: 0x8, Type: StructProperty)
    std::uint8_t RelativeOffsetTimestampMidi[0x8]; // 0x0164 (Size: 0x8, Type: StructProperty)
    std::uint8_t RelativeOffsetTimestampLinked[0x8]; // 0x016C (Size: 0x8, Type: StructProperty)
    std::uint8_t bWaitForClockRestart; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0175
    std::uint8_t CachedTimeStampPreRestart[0x60]; // 0x0178 (Size: 0x60, Type: StructProperty)
    std::uint8_t MidiSource[0x18]; // 0x01D8 (Size: 0x18, Type: StructProperty)
    TScriptInterface<void> CurrentFabricMidiProvider; // 0x01F0 (Size: 0x10, Type: InterfaceProperty)
    void* MidiSourceLatestMidi; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ServerLevelSequenceActor[0x1C]; // 0x0208 (Size: 0x1C, Type: StructProperty)
    TWeakObjectPtr<void> AuthoritySongSync; // 0x0224 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x4]; // 0x022C
    TArray<void*> LinkedSongSyncs; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    void* CustomClockSource; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> FabricTimelineSyncComponent; // 0x0248 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FollowComponent; // 0x0250 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MusicClock; // 0x0258 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FabricMetaSoundManager; // 0x0260 (Size: 0x8, Type: WeakObjectProperty)
    void* MidiFileClockProviderPatchInstance; // 0x0268 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricSongSyncComponent, MinAllowedTempo) == 200, "Offset mismatch for UFabricSongSyncComponent::MinAllowedTempo");
static_assert(offsetof(UFabricSongSyncComponent, MaxAllowedTempo) == 204, "Offset mismatch for UFabricSongSyncComponent::MaxAllowedTempo");
static_assert(offsetof(UFabricSongSyncComponent, AllowedTimeSignatureNumerators) == 208, "Offset mismatch for UFabricSongSyncComponent::AllowedTimeSignatureNumerators");
static_assert(offsetof(UFabricSongSyncComponent, AllowedTimeSignatureDenominators) == 224, "Offset mismatch for UFabricSongSyncComponent::AllowedTimeSignatureDenominators");
static_assert(offsetof(UFabricSongSyncComponent, MidiFilePropertyName) == 240, "Offset mismatch for UFabricSongSyncComponent::MidiFilePropertyName");
static_assert(offsetof(UFabricSongSyncComponent, OffsetBarsProperty) == 244, "Offset mismatch for UFabricSongSyncComponent::OffsetBarsProperty");
static_assert(offsetof(UFabricSongSyncComponent, OffsetBeatsProperty) == 248, "Offset mismatch for UFabricSongSyncComponent::OffsetBeatsProperty");
static_assert(offsetof(UFabricSongSyncComponent, IgnoreSeeksProperty) == 252, "Offset mismatch for UFabricSongSyncComponent::IgnoreSeeksProperty");
static_assert(offsetof(UFabricSongSyncComponent, MidiFileClockProviderPatchClass) == 256, "Offset mismatch for UFabricSongSyncComponent::MidiFileClockProviderPatchClass");
static_assert(offsetof(UFabricSongSyncComponent, AudioComponentName) == 264, "Offset mismatch for UFabricSongSyncComponent::AudioComponentName");
static_assert(offsetof(UFabricSongSyncComponent, bAllowSpeedAdjustSyncChanges) == 268, "Offset mismatch for UFabricSongSyncComponent::bAllowSpeedAdjustSyncChanges");
static_assert(offsetof(UFabricSongSyncComponent, OnSongSyncPlayInitiated) == 272, "Offset mismatch for UFabricSongSyncComponent::OnSongSyncPlayInitiated");
static_assert(offsetof(UFabricSongSyncComponent, OnSongSyncStarted) == 288, "Offset mismatch for UFabricSongSyncComponent::OnSongSyncStarted");
static_assert(offsetof(UFabricSongSyncComponent, OnSongSyncStopped) == 304, "Offset mismatch for UFabricSongSyncComponent::OnSongSyncStopped");
static_assert(offsetof(UFabricSongSyncComponent, ServerPlaybackRequest) == 320, "Offset mismatch for UFabricSongSyncComponent::ServerPlaybackRequest");
static_assert(offsetof(UFabricSongSyncComponent, PlaybackStartTimestamp) == 348, "Offset mismatch for UFabricSongSyncComponent::PlaybackStartTimestamp");
static_assert(offsetof(UFabricSongSyncComponent, RelativeOffsetTimestampMidi) == 356, "Offset mismatch for UFabricSongSyncComponent::RelativeOffsetTimestampMidi");
static_assert(offsetof(UFabricSongSyncComponent, RelativeOffsetTimestampLinked) == 364, "Offset mismatch for UFabricSongSyncComponent::RelativeOffsetTimestampLinked");
static_assert(offsetof(UFabricSongSyncComponent, bWaitForClockRestart) == 372, "Offset mismatch for UFabricSongSyncComponent::bWaitForClockRestart");
static_assert(offsetof(UFabricSongSyncComponent, CachedTimeStampPreRestart) == 376, "Offset mismatch for UFabricSongSyncComponent::CachedTimeStampPreRestart");
static_assert(offsetof(UFabricSongSyncComponent, MidiSource) == 472, "Offset mismatch for UFabricSongSyncComponent::MidiSource");
static_assert(offsetof(UFabricSongSyncComponent, CurrentFabricMidiProvider) == 496, "Offset mismatch for UFabricSongSyncComponent::CurrentFabricMidiProvider");
static_assert(offsetof(UFabricSongSyncComponent, MidiSourceLatestMidi) == 512, "Offset mismatch for UFabricSongSyncComponent::MidiSourceLatestMidi");
static_assert(offsetof(UFabricSongSyncComponent, ServerLevelSequenceActor) == 520, "Offset mismatch for UFabricSongSyncComponent::ServerLevelSequenceActor");
static_assert(offsetof(UFabricSongSyncComponent, AuthoritySongSync) == 548, "Offset mismatch for UFabricSongSyncComponent::AuthoritySongSync");
static_assert(offsetof(UFabricSongSyncComponent, LinkedSongSyncs) == 560, "Offset mismatch for UFabricSongSyncComponent::LinkedSongSyncs");
static_assert(offsetof(UFabricSongSyncComponent, CustomClockSource) == 576, "Offset mismatch for UFabricSongSyncComponent::CustomClockSource");
static_assert(offsetof(UFabricSongSyncComponent, FabricTimelineSyncComponent) == 584, "Offset mismatch for UFabricSongSyncComponent::FabricTimelineSyncComponent");
static_assert(offsetof(UFabricSongSyncComponent, FollowComponent) == 592, "Offset mismatch for UFabricSongSyncComponent::FollowComponent");
static_assert(offsetof(UFabricSongSyncComponent, MusicClock) == 600, "Offset mismatch for UFabricSongSyncComponent::MusicClock");
static_assert(offsetof(UFabricSongSyncComponent, FabricMetaSoundManager) == 608, "Offset mismatch for UFabricSongSyncComponent::FabricMetaSoundManager");
static_assert(offsetof(UFabricSongSyncComponent, MidiFileClockProviderPatchInstance) == 616, "Offset mismatch for UFabricSongSyncComponent::MidiFileClockProviderPatchInstance");

// /Script/FabricLevelSequencer.FabricSongSyncUtilityProviderPatchWrapper
// Kind: Class; super: FabricMetaSoundUtilityProviderPatchWrapper
class UFabricSongSyncUtilityProviderPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    FName ClockProviderMidiFileInName; // 0x01A0 (Size: 0x8, Type: NameProperty)
    void* DefaultMidiFile; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> TempoMapMidiFile; // 0x01B0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFabricSongSyncUtilityProviderPatchWrapper, ClockProviderMidiFileInName) == 416, "Offset mismatch for UFabricSongSyncUtilityProviderPatchWrapper::ClockProviderMidiFileInName");
static_assert(offsetof(UFabricSongSyncUtilityProviderPatchWrapper, DefaultMidiFile) == 424, "Offset mismatch for UFabricSongSyncUtilityProviderPatchWrapper::DefaultMidiFile");
static_assert(offsetof(UFabricSongSyncUtilityProviderPatchWrapper, TempoMapMidiFile) == 432, "Offset mismatch for UFabricSongSyncUtilityProviderPatchWrapper::TempoMapMidiFile");

// /Script/FabricLevelSequencer.PlaylistUserOptionLinkedSequence
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionLinkedSequence
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionLinkedSequence, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionLinkedSequence::DefaultValue");

// /Script/FabricLevelSequencer.PlaylistUserOptionLinkedSongSyncList
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionLinkedSongSyncList
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionLinkedSongSyncList, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionLinkedSongSyncList::DefaultValue");

// /Script/FabricLevelSequencer.PlaylistUserOptionMidiSource
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionMidiSource
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionMidiSource, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionMidiSource::DefaultValue");
