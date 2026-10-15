/**
 * decamp dumper generated SDK
 * Package: /Script/SparksSongPlayerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksSongPlayerRuntime.SparksMinimalSongTimestampData
// Kind: ScriptStruct; super: none
struct FSparksMinimalSongTimestampData
{
public:
    float ServerWorldTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SecondsIncludingCountIn; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSparksMinimalSongTimestampData, ServerWorldTime) == 0, "Offset mismatch for FSparksMinimalSongTimestampData::ServerWorldTime");
static_assert(offsetof(FSparksMinimalSongTimestampData, SecondsIncludingCountIn) == 4, "Offset mismatch for FSparksMinimalSongTimestampData::SecondsIncludingCountIn");

// /Script/SparksSongPlayerRuntime.SparksSongTimestampData
// Kind: ScriptStruct; super: none
struct FSparksSongTimestampData
{
public:
    float ServerWorldTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t ServerSongPosition[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksSongTimestampData, ServerWorldTime) == 0, "Offset mismatch for FSparksSongTimestampData::ServerWorldTime");
static_assert(offsetof(FSparksSongTimestampData, ServerSongPosition) == 8, "Offset mismatch for FSparksSongTimestampData::ServerSongPosition");

// /Script/SparksSongPlayerRuntime.SparksStreamError
// Kind: ScriptStruct; super: none
struct FSparksStreamError
{
public:
    std::uint8_t SparksErrorReason; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MediaPlayerErrorReason; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSparksStreamError, SparksErrorReason) == 0, "Offset mismatch for FSparksStreamError::SparksErrorReason");
static_assert(offsetof(FSparksStreamError, MediaPlayerErrorReason) == 1, "Offset mismatch for FSparksStreamError::MediaPlayerErrorReason");

// /Script/SparksSongPlayerRuntime.SparksMediaStreamer
// Kind: Class; super: Object
class USparksMediaStreamer
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t StreamingStatus; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LastStreamError[0x7]; // 0x0071 (Size: 0x7, Type: StructProperty)
    void* Song; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayParams[0x90]; // 0x0080 (Size: 0x90, Type: StructProperty)
    void* FortBaseStreaming; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* StemmedMediaStreamAsset; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* InstancedBusStemConfig; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* MidiFile; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* ParsedMidiEventData; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksMediaStreamer, StreamingStatus) == 112, "Offset mismatch for USparksMediaStreamer::StreamingStatus");
static_assert(offsetof(USparksMediaStreamer, LastStreamError) == 113, "Offset mismatch for USparksMediaStreamer::LastStreamError");
static_assert(offsetof(USparksMediaStreamer, Song) == 120, "Offset mismatch for USparksMediaStreamer::Song");
static_assert(offsetof(USparksMediaStreamer, PlayParams) == 128, "Offset mismatch for USparksMediaStreamer::PlayParams");
static_assert(offsetof(USparksMediaStreamer, FortBaseStreaming) == 272, "Offset mismatch for USparksMediaStreamer::FortBaseStreaming");
static_assert(offsetof(USparksMediaStreamer, StemmedMediaStreamAsset) == 280, "Offset mismatch for USparksMediaStreamer::StemmedMediaStreamAsset");
static_assert(offsetof(USparksMediaStreamer, InstancedBusStemConfig) == 288, "Offset mismatch for USparksMediaStreamer::InstancedBusStemConfig");
static_assert(offsetof(USparksMediaStreamer, MidiFile) == 296, "Offset mismatch for USparksMediaStreamer::MidiFile");
static_assert(offsetof(USparksMediaStreamer, ParsedMidiEventData) == 304, "Offset mismatch for USparksMediaStreamer::ParsedMidiEventData");

// /Script/SparksSongPlayerRuntime.SparksMusicClockSyncComponent
// Kind: Class; super: ActorComponent
class USparksMusicClockSyncComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> OwnedMusicClockComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CurrentSongServerTimestamp[0x50]; // 0x00C8 (Size: 0x50, Type: StructProperty)
    std::uint8_t ServerTimestampRecordingTimerHandle[0x8]; // 0x0118 (Size: 0x8, Type: StructProperty)
    std::uint8_t ServerTimestampRecordingFrequency[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDeltaForSeek[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndCorrectionDelta[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedAdjustmentFactor[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    float CurrentSpeed; // 0x01C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USparksMusicClockSyncComponent, OwnedMusicClockComponent) == 192, "Offset mismatch for USparksMusicClockSyncComponent::OwnedMusicClockComponent");
static_assert(offsetof(USparksMusicClockSyncComponent, CurrentSongServerTimestamp) == 200, "Offset mismatch for USparksMusicClockSyncComponent::CurrentSongServerTimestamp");
static_assert(offsetof(USparksMusicClockSyncComponent, ServerTimestampRecordingTimerHandle) == 280, "Offset mismatch for USparksMusicClockSyncComponent::ServerTimestampRecordingTimerHandle");
static_assert(offsetof(USparksMusicClockSyncComponent, ServerTimestampRecordingFrequency) == 288, "Offset mismatch for USparksMusicClockSyncComponent::ServerTimestampRecordingFrequency");
static_assert(offsetof(USparksMusicClockSyncComponent, MinDeltaForSeek) == 328, "Offset mismatch for USparksMusicClockSyncComponent::MinDeltaForSeek");
static_assert(offsetof(USparksMusicClockSyncComponent, EndCorrectionDelta) == 368, "Offset mismatch for USparksMusicClockSyncComponent::EndCorrectionDelta");
static_assert(offsetof(USparksMusicClockSyncComponent, SpeedAdjustmentFactor) == 408, "Offset mismatch for USparksMusicClockSyncComponent::SpeedAdjustmentFactor");
static_assert(offsetof(USparksMusicClockSyncComponent, CurrentSpeed) == 448, "Offset mismatch for USparksMusicClockSyncComponent::CurrentSpeed");

// /Script/SparksSongPlayerRuntime.SparksSongPlayer
// Kind: Class; super: Object
class USparksSongPlayer
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* SongPlayerDataCached; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* CurrentSong; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0090
    void* PendingSong; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x00A8
    void* MediaStreamer; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* AudioComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x00C8
    std::uint8_t PendingSongDebounceTimer[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t DelayedStopSongTimer[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksSongPlayer, SongPlayerDataCached) == 128, "Offset mismatch for USparksSongPlayer::SongPlayerDataCached");
static_assert(offsetof(USparksSongPlayer, CurrentSong) == 136, "Offset mismatch for USparksSongPlayer::CurrentSong");
static_assert(offsetof(USparksSongPlayer, PendingSong) == 160, "Offset mismatch for USparksSongPlayer::PendingSong");
static_assert(offsetof(USparksSongPlayer, MediaStreamer) == 184, "Offset mismatch for USparksSongPlayer::MediaStreamer");
static_assert(offsetof(USparksSongPlayer, AudioComponent) == 192, "Offset mismatch for USparksSongPlayer::AudioComponent");
static_assert(offsetof(USparksSongPlayer, PendingSongDebounceTimer) == 208, "Offset mismatch for USparksSongPlayer::PendingSongDebounceTimer");
static_assert(offsetof(USparksSongPlayer, DelayedStopSongTimer) == 216, "Offset mismatch for USparksSongPlayer::DelayedStopSongTimer");

// /Script/SparksSongPlayerRuntime.SparksSongPlayerData
// Kind: Class; super: PrimaryDataAsset
class USparksSongPlayerData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* BusStemConfiguration; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* StereoMetaSound; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* StemMixerMetaSound; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMetaSound; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* LicensedAudioControlBus; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StereoStemAssetTemplate[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float DefaultFadeInDuration; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float DebounceDuration; // 0x006C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USparksSongPlayerData, BusStemConfiguration) == 40, "Offset mismatch for USparksSongPlayerData::BusStemConfiguration");
static_assert(offsetof(USparksSongPlayerData, StereoMetaSound) == 48, "Offset mismatch for USparksSongPlayerData::StereoMetaSound");
static_assert(offsetof(USparksSongPlayerData, StemMixerMetaSound) == 56, "Offset mismatch for USparksSongPlayerData::StemMixerMetaSound");
static_assert(offsetof(USparksSongPlayerData, PreviewMetaSound) == 64, "Offset mismatch for USparksSongPlayerData::PreviewMetaSound");
static_assert(offsetof(USparksSongPlayerData, LicensedAudioControlBus) == 72, "Offset mismatch for USparksSongPlayerData::LicensedAudioControlBus");
static_assert(offsetof(USparksSongPlayerData, StereoStemAssetTemplate) == 80, "Offset mismatch for USparksSongPlayerData::StereoStemAssetTemplate");
static_assert(offsetof(USparksSongPlayerData, DefaultFadeInDuration) == 104, "Offset mismatch for USparksSongPlayerData::DefaultFadeInDuration");
static_assert(offsetof(USparksSongPlayerData, DebounceDuration) == 108, "Offset mismatch for USparksSongPlayerData::DebounceDuration");

// /Script/SparksSongPlayerRuntime.SparksSongPlayerPlayCoordinator
// Kind: Class; super: GameFrameworkComponent
class USparksSongPlayerPlayCoordinator
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    FMulticastInlineDelegate OnStartSongSyncCountdown; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TimeToStartSyncedClock[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    std::uint8_t ClientLatencyCatchupTimerHandle[0x8]; // 0x0148 (Size: 0x8, Type: StructProperty)
    float ServerStartTime; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bServerHasReceivedPlaySongRequest; // 0x0154 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongPlayerPlayCoordinator, OnStartSongSyncCountdown) == 264, "Offset mismatch for USparksSongPlayerPlayCoordinator::OnStartSongSyncCountdown");
static_assert(offsetof(USparksSongPlayerPlayCoordinator, TimeToStartSyncedClock) == 280, "Offset mismatch for USparksSongPlayerPlayCoordinator::TimeToStartSyncedClock");
static_assert(offsetof(USparksSongPlayerPlayCoordinator, ClientLatencyCatchupTimerHandle) == 328, "Offset mismatch for USparksSongPlayerPlayCoordinator::ClientLatencyCatchupTimerHandle");
static_assert(offsetof(USparksSongPlayerPlayCoordinator, ServerStartTime) == 336, "Offset mismatch for USparksSongPlayerPlayCoordinator::ServerStartTime");
static_assert(offsetof(USparksSongPlayerPlayCoordinator, bServerHasReceivedPlaySongRequest) == 340, "Offset mismatch for USparksSongPlayerPlayCoordinator::bServerHasReceivedPlaySongRequest");

// /Script/SparksSongPlayerRuntime.SparksSongPlayerPreloadControllerComponent
// Kind: Class; super: ControllerComponent
class USparksSongPlayerPreloadControllerComponent
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

static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::PrimaryComponentTick");
static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, ComponentTags) == 104, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::ComponentTags");
static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, AssetUserData) == 120, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::AssetUserData");
static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::UCSSerializationIndex");
static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, bNetAddressable) == 152, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::bNetAddressable");
static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, bAutoActivate) == 154, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::bAutoActivate");
static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::bIsEditorOnly");
static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, CreationMethod) == 185, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::CreationMethod");
static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, OnComponentActivated) == 186, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::OnComponentActivated");
static_assert(offsetof(USparksSongPlayerPreloadControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for USparksSongPlayerPreloadControllerComponent::OnComponentDeactivated");

// /Script/SparksSongPlayerRuntime.SparksSongPlayerSubsystem
// Kind: Class; super: GameInstanceSubsystem
class USparksSongPlayerSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksSongPlayerRuntime.SparksSongPreviewerComponent
// Kind: Class; super: ActorComponent
class USparksSongPreviewerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t MusicEventTag[0x4]; // 0x00C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t MusicEventGroup[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MusicEventBehaviorTags[0x20]; // 0x00C8 (Size: 0x20, Type: StructProperty)
    void* CurrentPreviewedSong; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00F0
    float FadeOutTime; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStopPreviewOnEndPlay; // 0x0104 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayFullTrackForOwnedSongs; // 0x0105 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldInterruptOtherPlayback; // 0x0106 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongPreviewerComponent, MusicEventTag) == 192, "Offset mismatch for USparksSongPreviewerComponent::MusicEventTag");
static_assert(offsetof(USparksSongPreviewerComponent, MusicEventGroup) == 196, "Offset mismatch for USparksSongPreviewerComponent::MusicEventGroup");
static_assert(offsetof(USparksSongPreviewerComponent, MusicEventBehaviorTags) == 200, "Offset mismatch for USparksSongPreviewerComponent::MusicEventBehaviorTags");
static_assert(offsetof(USparksSongPreviewerComponent, CurrentPreviewedSong) == 232, "Offset mismatch for USparksSongPreviewerComponent::CurrentPreviewedSong");
static_assert(offsetof(USparksSongPreviewerComponent, FadeOutTime) == 256, "Offset mismatch for USparksSongPreviewerComponent::FadeOutTime");
static_assert(offsetof(USparksSongPreviewerComponent, bStopPreviewOnEndPlay) == 260, "Offset mismatch for USparksSongPreviewerComponent::bStopPreviewOnEndPlay");
static_assert(offsetof(USparksSongPreviewerComponent, bPlayFullTrackForOwnedSongs) == 261, "Offset mismatch for USparksSongPreviewerComponent::bPlayFullTrackForOwnedSongs");
static_assert(offsetof(USparksSongPreviewerComponent, bShouldInterruptOtherPlayback) == 262, "Offset mismatch for USparksSongPreviewerComponent::bShouldInterruptOtherPlayback");
