/**
 * decamp dumper generated SDK
 * Package: /Script/TakeRecorderSources
 */
#pragma once
#include "Basic.h"

// /Script/TakeRecorderSources.TakeRecorderActorSource
// Kind: Class; super: TakeRecorderSource
class UTakeRecorderActorSource
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Target[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RecordType; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpawnableOverwriteBehavior; // 0x0061 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRecordParentHierarchy; // 0x0062 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AttachRecordBehaviour; // 0x0063 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bReduceKeys; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0065
    void* RecordedProperties; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> IncludeAnimationNames; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludeAnimationNames; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* TargetLevelSequence; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* RootLevelSequence; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FactorySettings; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrackRecorders; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    void* ParentSource; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowProgressDialog; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xC0]; // 0x00C9
    std::uint8_t bTargetIsSequencerActor; // 0x0189 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x018A
    FString CachedActorLabel; // 0x0190 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UTakeRecorderActorSource, Target) == 64, "Offset mismatch for UTakeRecorderActorSource::Target");
static_assert(offsetof(UTakeRecorderActorSource, RecordType) == 96, "Offset mismatch for UTakeRecorderActorSource::RecordType");
static_assert(offsetof(UTakeRecorderActorSource, SpawnableOverwriteBehavior) == 97, "Offset mismatch for UTakeRecorderActorSource::SpawnableOverwriteBehavior");
static_assert(offsetof(UTakeRecorderActorSource, bRecordParentHierarchy) == 98, "Offset mismatch for UTakeRecorderActorSource::bRecordParentHierarchy");
static_assert(offsetof(UTakeRecorderActorSource, AttachRecordBehaviour) == 99, "Offset mismatch for UTakeRecorderActorSource::AttachRecordBehaviour");
static_assert(offsetof(UTakeRecorderActorSource, bReduceKeys) == 100, "Offset mismatch for UTakeRecorderActorSource::bReduceKeys");
static_assert(offsetof(UTakeRecorderActorSource, RecordedProperties) == 104, "Offset mismatch for UTakeRecorderActorSource::RecordedProperties");
static_assert(offsetof(UTakeRecorderActorSource, IncludeAnimationNames) == 112, "Offset mismatch for UTakeRecorderActorSource::IncludeAnimationNames");
static_assert(offsetof(UTakeRecorderActorSource, ExcludeAnimationNames) == 128, "Offset mismatch for UTakeRecorderActorSource::ExcludeAnimationNames");
static_assert(offsetof(UTakeRecorderActorSource, TargetLevelSequence) == 144, "Offset mismatch for UTakeRecorderActorSource::TargetLevelSequence");
static_assert(offsetof(UTakeRecorderActorSource, RootLevelSequence) == 152, "Offset mismatch for UTakeRecorderActorSource::RootLevelSequence");
static_assert(offsetof(UTakeRecorderActorSource, FactorySettings) == 160, "Offset mismatch for UTakeRecorderActorSource::FactorySettings");
static_assert(offsetof(UTakeRecorderActorSource, TrackRecorders) == 176, "Offset mismatch for UTakeRecorderActorSource::TrackRecorders");
static_assert(offsetof(UTakeRecorderActorSource, ParentSource) == 192, "Offset mismatch for UTakeRecorderActorSource::ParentSource");
static_assert(offsetof(UTakeRecorderActorSource, bShowProgressDialog) == 200, "Offset mismatch for UTakeRecorderActorSource::bShowProgressDialog");
static_assert(offsetof(UTakeRecorderActorSource, bTargetIsSequencerActor) == 393, "Offset mismatch for UTakeRecorderActorSource::bTargetIsSequencerActor");
static_assert(offsetof(UTakeRecorderActorSource, CachedActorLabel) == 400, "Offset mismatch for UTakeRecorderActorSource::CachedActorLabel");

// /Script/TakeRecorderSources.TakeRecorderCameraCutSource
// Kind: Class; super: TakeRecorderSource
class UTakeRecorderCameraCutSource
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* World; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* RootLevelSequence; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTakeRecorderCameraCutSource, World) == 56, "Offset mismatch for UTakeRecorderCameraCutSource::World");
static_assert(offsetof(UTakeRecorderCameraCutSource, RootLevelSequence) == 64, "Offset mismatch for UTakeRecorderCameraCutSource::RootLevelSequence");

// /Script/TakeRecorderSources.TakeRecorderLevelSequenceSource
// Kind: Class; super: TakeRecorderSource
class UTakeRecorderLevelSequenceSource
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> LevelSequencesToTrigger; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTakeRecorderLevelSequenceSource, LevelSequencesToTrigger) == 56, "Offset mismatch for UTakeRecorderLevelSequenceSource::LevelSequencesToTrigger");

// /Script/TakeRecorderSources.TakeRecorderLevelVisibilitySource
// Kind: Class; super: TakeRecorderLevelVisibilitySourceSettings
class UTakeRecorderLevelVisibilitySource
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FText LevelVisibilityTrackName; // 0x0038 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UTakeRecorderLevelVisibilitySource, LevelVisibilityTrackName) == 56, "Offset mismatch for UTakeRecorderLevelVisibilitySource::LevelVisibilityTrackName");

// /Script/TakeRecorderSources.TakeRecorderLevelVisibilitySourceSettings
// Kind: Class; super: TakeRecorderSource
class UTakeRecorderLevelVisibilitySourceSettings
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FText LevelVisibilityTrackName; // 0x0038 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UTakeRecorderLevelVisibilitySourceSettings, LevelVisibilityTrackName) == 56, "Offset mismatch for UTakeRecorderLevelVisibilitySourceSettings::LevelVisibilityTrackName");

// /Script/TakeRecorderSources.TakeRecorderMicrophoneAudioManager
// Kind: Class; super: TakeRecorderAudioInputSettings
class UTakeRecorderMicrophoneAudioManager
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t AudioInputDevice[0x30]; // 0x0040 (Size: 0x30, Type: StructProperty)
    FMulticastInlineDelegate OnAudioInputDevicePropertyChanged; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UTakeRecorderMicrophoneAudioManager, AudioInputDevice) == 64, "Offset mismatch for UTakeRecorderMicrophoneAudioManager::AudioInputDevice");
static_assert(offsetof(UTakeRecorderMicrophoneAudioManager, OnAudioInputDevicePropertyChanged) == 112, "Offset mismatch for UTakeRecorderMicrophoneAudioManager::OnAudioInputDevicePropertyChanged");

// /Script/TakeRecorderSources.TakeRecorderMicrophoneAudioSource
// Kind: Class; super: TakeRecorderMicrophoneAudioSourceSettings
class UTakeRecorderMicrophoneAudioSource
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float AudioGain; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReplaceRecordedAudio; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x007D
    std::uint8_t AudioChannel[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTakeRecorderMicrophoneAudioSource, AudioGain) == 120, "Offset mismatch for UTakeRecorderMicrophoneAudioSource::AudioGain");
static_assert(offsetof(UTakeRecorderMicrophoneAudioSource, bReplaceRecordedAudio) == 124, "Offset mismatch for UTakeRecorderMicrophoneAudioSource::bReplaceRecordedAudio");
static_assert(offsetof(UTakeRecorderMicrophoneAudioSource, AudioChannel) == 128, "Offset mismatch for UTakeRecorderMicrophoneAudioSource::AudioChannel");

// /Script/TakeRecorderSources.TakeRecorderMicrophoneAudioSourceSettings
// Kind: Class; super: TakeRecorderSource
class UTakeRecorderMicrophoneAudioSourceSettings
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AudioSourceName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t AudioTrackName[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    FString AudioAssetName; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString AudioSubDirectory; // 0x0068 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UTakeRecorderMicrophoneAudioSourceSettings, AudioSourceName) == 56, "Offset mismatch for UTakeRecorderMicrophoneAudioSourceSettings::AudioSourceName");
static_assert(offsetof(UTakeRecorderMicrophoneAudioSourceSettings, AudioTrackName) == 72, "Offset mismatch for UTakeRecorderMicrophoneAudioSourceSettings::AudioTrackName");
static_assert(offsetof(UTakeRecorderMicrophoneAudioSourceSettings, AudioAssetName) == 88, "Offset mismatch for UTakeRecorderMicrophoneAudioSourceSettings::AudioAssetName");
static_assert(offsetof(UTakeRecorderMicrophoneAudioSourceSettings, AudioSubDirectory) == 104, "Offset mismatch for UTakeRecorderMicrophoneAudioSourceSettings::AudioSubDirectory");

// /Script/TakeRecorderSources.TakeRecorderNearbySpawnedActorSource
// Kind: Class; super: TakeRecorderSource
class UTakeRecorderNearbySpawnedActorSource
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float Proximity; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFilterSpawnedActors; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x003D
    TArray<void*> FilterTypes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludeTypes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTakeRecorderNearbySpawnedActorSource, Proximity) == 56, "Offset mismatch for UTakeRecorderNearbySpawnedActorSource::Proximity");
static_assert(offsetof(UTakeRecorderNearbySpawnedActorSource, bFilterSpawnedActors) == 60, "Offset mismatch for UTakeRecorderNearbySpawnedActorSource::bFilterSpawnedActors");
static_assert(offsetof(UTakeRecorderNearbySpawnedActorSource, FilterTypes) == 64, "Offset mismatch for UTakeRecorderNearbySpawnedActorSource::FilterTypes");
static_assert(offsetof(UTakeRecorderNearbySpawnedActorSource, ExcludeTypes) == 80, "Offset mismatch for UTakeRecorderNearbySpawnedActorSource::ExcludeTypes");

// /Script/TakeRecorderSources.TakeRecorderPlayerSource
// Kind: Class; super: TakeRecorderSource
class UTakeRecorderPlayerSource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::int32_t TakeNumber; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t TrackTint[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTakeRecorderPlayerSource, bEnabled) == 40, "Offset mismatch for UTakeRecorderPlayerSource::bEnabled");
static_assert(offsetof(UTakeRecorderPlayerSource, TakeNumber) == 44, "Offset mismatch for UTakeRecorderPlayerSource::TakeNumber");
static_assert(offsetof(UTakeRecorderPlayerSource, TrackTint) == 48, "Offset mismatch for UTakeRecorderPlayerSource::TrackTint");

// /Script/TakeRecorderSources.TakeRecorderWorldSource
// Kind: Class; super: TakeRecorderWorldSourceSettings
class UTakeRecorderWorldSource
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bRecordWorldSettings; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutotrackActors; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowEditorOnlyActors; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyRecordMoveableActors; // 0x003B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTakeRecorderWorldSource, bRecordWorldSettings) == 56, "Offset mismatch for UTakeRecorderWorldSource::bRecordWorldSettings");
static_assert(offsetof(UTakeRecorderWorldSource, bAutotrackActors) == 57, "Offset mismatch for UTakeRecorderWorldSource::bAutotrackActors");
static_assert(offsetof(UTakeRecorderWorldSource, bAllowEditorOnlyActors) == 58, "Offset mismatch for UTakeRecorderWorldSource::bAllowEditorOnlyActors");
static_assert(offsetof(UTakeRecorderWorldSource, bOnlyRecordMoveableActors) == 59, "Offset mismatch for UTakeRecorderWorldSource::bOnlyRecordMoveableActors");

// /Script/TakeRecorderSources.TakeRecorderWorldSourceSettings
// Kind: Class; super: TakeRecorderSource
class UTakeRecorderWorldSourceSettings
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bRecordWorldSettings; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutotrackActors; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowEditorOnlyActors; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyRecordMoveableActors; // 0x003B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTakeRecorderWorldSourceSettings, bRecordWorldSettings) == 56, "Offset mismatch for UTakeRecorderWorldSourceSettings::bRecordWorldSettings");
static_assert(offsetof(UTakeRecorderWorldSourceSettings, bAutotrackActors) == 57, "Offset mismatch for UTakeRecorderWorldSourceSettings::bAutotrackActors");
static_assert(offsetof(UTakeRecorderWorldSourceSettings, bAllowEditorOnlyActors) == 58, "Offset mismatch for UTakeRecorderWorldSourceSettings::bAllowEditorOnlyActors");
static_assert(offsetof(UTakeRecorderWorldSourceSettings, bOnlyRecordMoveableActors) == 59, "Offset mismatch for UTakeRecorderWorldSourceSettings::bOnlyRecordMoveableActors");
