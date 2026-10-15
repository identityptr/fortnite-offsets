/**
 * decamp dumper generated SDK
 * Package: /Script/FabricEngineSequencer
 */
#pragma once
#include "Basic.h"

// /Script/FabricEngineSequencer.FabricAudioSyncSection
// Kind: Class; super: MovieSceneAudioSection
class UFabricAudioSyncSection
{
public:
    std::uint8_t Pad_0000[0x480]; // 0x0000
    std::uint8_t SyncSoundVolume[0x1]; // 0x0480 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricAudioSyncSection, SyncSoundVolume) == 1152, "Offset mismatch for UFabricAudioSyncSection::SyncSoundVolume");

// /Script/FabricEngineSequencer.FabricAudioSyncTrack
// Kind: Class; super: MovieSceneAudioTrack
class UFabricAudioSyncTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> AudioSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricAudioSyncTrack, AudioSections) == 248, "Offset mismatch for UFabricAudioSyncTrack::AudioSections");

// /Script/FabricEngineSequencer.FabricAudioSyncTrackInstance
// Kind: Class; super: MovieSceneTrackInstance
class UFabricAudioSyncTrackInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> WeakAnimatedObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsRootTrackInstance; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    void* PrivateLinker; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Inputs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricAudioSyncTrackInstance, WeakAnimatedObject) == 40, "Offset mismatch for UFabricAudioSyncTrackInstance::WeakAnimatedObject");
static_assert(offsetof(UFabricAudioSyncTrackInstance, bIsRootTrackInstance) == 48, "Offset mismatch for UFabricAudioSyncTrackInstance::bIsRootTrackInstance");
static_assert(offsetof(UFabricAudioSyncTrackInstance, PrivateLinker) == 56, "Offset mismatch for UFabricAudioSyncTrackInstance::PrivateLinker");
static_assert(offsetof(UFabricAudioSyncTrackInstance, Inputs) == 64, "Offset mismatch for UFabricAudioSyncTrackInstance::Inputs");

// /Script/FabricEngineSequencer.MusicClockMovieSceneClockSource
// Kind: Class; super: Object
class UMusicClockMovieSceneClockSource
{
public:
    std::uint8_t Opaque[1];
};
