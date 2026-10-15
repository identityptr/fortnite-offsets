/**
 * decamp dumper generated SDK
 * Package: /Script/MusicPlaylistRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MusicPlaylistRuntime.FortMusicPlayerDetailsVM
// Kind: Class; super: MVVMViewModelBase
class UFortMusicPlayerDetailsVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ArtCoverImageReference[0x38]; // 0x0068 (Size: 0x38, Type: StructProperty)
    TScriptInterface<void> CurrentMusicItem; // 0x00A0 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UFortMusicPlayerDetailsVM, ArtCoverImageReference) == 104, "Offset mismatch for UFortMusicPlayerDetailsVM::ArtCoverImageReference");
static_assert(offsetof(UFortMusicPlayerDetailsVM, CurrentMusicItem) == 160, "Offset mismatch for UFortMusicPlayerDetailsVM::CurrentMusicItem");

// /Script/MusicPlaylistRuntime.FortMusicPlayerVM
// Kind: Class; super: FortPerUserViewModel
class UFortMusicPlayerVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* MusicPlayerDetails; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentPlayerState; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsMusicPlaybackInteractionEnabled; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMusicPlayerAvailable; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayingPlayList; // 0x0083 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMusicPlayerVM, MusicPlayerDetails) == 120, "Offset mismatch for UFortMusicPlayerVM::MusicPlayerDetails");
static_assert(offsetof(UFortMusicPlayerVM, CurrentPlayerState) == 128, "Offset mismatch for UFortMusicPlayerVM::CurrentPlayerState");
static_assert(offsetof(UFortMusicPlayerVM, bIsMusicPlaybackInteractionEnabled) == 129, "Offset mismatch for UFortMusicPlayerVM::bIsMusicPlaybackInteractionEnabled");
static_assert(offsetof(UFortMusicPlayerVM, bIsMusicPlayerAvailable) == 130, "Offset mismatch for UFortMusicPlayerVM::bIsMusicPlayerAvailable");
static_assert(offsetof(UFortMusicPlayerVM, bIsPlayingPlayList) == 131, "Offset mismatch for UFortMusicPlayerVM::bIsPlayingPlayList");

// /Script/MusicPlaylistRuntime.FortMusicPlaylistConfig
// Kind: Class; super: FortGameFeatureActionSingletonAsset
class UFortMusicPlaylistConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t VolumeSettingDevName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t LicenseAudioSettingDevName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    TMap<void*, void*> PlaylistDetailsTypesCollection; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortMusicPlaylistConfig, VolumeSettingDevName) == 40, "Offset mismatch for UFortMusicPlaylistConfig::VolumeSettingDevName");
static_assert(offsetof(UFortMusicPlaylistConfig, LicenseAudioSettingDevName) == 44, "Offset mismatch for UFortMusicPlaylistConfig::LicenseAudioSettingDevName");
static_assert(offsetof(UFortMusicPlaylistConfig, PlaylistDetailsTypesCollection) == 48, "Offset mismatch for UFortMusicPlaylistConfig::PlaylistDetailsTypesCollection");

// /Script/MusicPlaylistRuntime.SparksMusicPlayerDetailsVM
// Kind: Class; super: FortMusicPlayerDetailsVM
class USparksMusicPlayerDetailsVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ArtCoverImageReference[0x38]; // 0x0068 (Size: 0x38, Type: StructProperty)
    TScriptInterface<void> CurrentMusicItem; // 0x00A0 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(USparksMusicPlayerDetailsVM, ArtCoverImageReference) == 104, "Offset mismatch for USparksMusicPlayerDetailsVM::ArtCoverImageReference");
static_assert(offsetof(USparksMusicPlayerDetailsVM, CurrentMusicItem) == 160, "Offset mismatch for USparksMusicPlayerDetailsVM::CurrentMusicItem");
