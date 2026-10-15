/**
 * decamp dumper generated SDK
 * Package: /Script/FMBaseBoomboxRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMBaseBoomboxRuntime.BoomboxPerPlaylistQuerySettings
// Kind: ScriptStruct; super: none
struct FBoomboxPerPlaylistQuerySettings
{
public:
    std::uint8_t PlaylistQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t SettingsToUse[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBoomboxPerPlaylistQuerySettings, PlaylistQuery) == 0, "Offset mismatch for FBoomboxPerPlaylistQuerySettings::PlaylistQuery");
static_assert(offsetof(FBoomboxPerPlaylistQuerySettings, SettingsToUse) == 72, "Offset mismatch for FBoomboxPerPlaylistQuerySettings::SettingsToUse");

// /Script/FMBaseBoomboxRuntime.BoomboxPerPlaylistSettings
// Kind: ScriptStruct; super: none
struct FBoomboxPerPlaylistSettings
{
public:
    void* MetasoundSourceOverride; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* AttenuationOverride; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBoomboxPerPlaylistSettings, MetasoundSourceOverride) == 0, "Offset mismatch for FBoomboxPerPlaylistSettings::MetasoundSourceOverride");
static_assert(offsetof(FBoomboxPerPlaylistSettings, AttenuationOverride) == 8, "Offset mismatch for FBoomboxPerPlaylistSettings::AttenuationOverride");

// /Script/FMBaseBoomboxRuntime.BoomboxState
// Kind: ScriptStruct; super: none
struct FBoomboxState
{
public:
    TScriptInterface<void> CurrentSong; // 0x0000 (Size: 0x10, Type: InterfaceProperty)
    double CurrentSongServerStartTime; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bLooping; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    void* BoomboxClock; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBoomboxState, CurrentSong) == 0, "Offset mismatch for FBoomboxState::CurrentSong");
static_assert(offsetof(FBoomboxState, CurrentSongServerStartTime) == 16, "Offset mismatch for FBoomboxState::CurrentSongServerStartTime");
static_assert(offsetof(FBoomboxState, bLooping) == 24, "Offset mismatch for FBoomboxState::bLooping");
static_assert(offsetof(FBoomboxState, BoomboxClock) == 32, "Offset mismatch for FBoomboxState::BoomboxClock");

// /Script/FMBaseBoomboxRuntime.BoomboxEventsReceiver
// Kind: Class; super: Interface
class UBoomboxEventsReceiver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMBaseBoomboxRuntime.FMBaseBoomboxComponent
// Kind: Class; super: ActorComponent
class UFMBaseBoomboxComponent
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t MusicEventTag[0x4]; // 0x0108 (Size: 0x4, Type: StructProperty)
    std::uint8_t MusicEventTag_3P[0x4]; // 0x010C (Size: 0x4, Type: StructProperty)
    TArray<void*> PlaylistSettingsOverridesList; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    void* AttenuationSettings; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentState[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    void* MusicPlayer; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    void* AudioComponent; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0160
    void* CurrentPlaylist; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFMBaseBoomboxComponent, MusicEventTag) == 264, "Offset mismatch for UFMBaseBoomboxComponent::MusicEventTag");
static_assert(offsetof(UFMBaseBoomboxComponent, MusicEventTag_3P) == 268, "Offset mismatch for UFMBaseBoomboxComponent::MusicEventTag_3P");
static_assert(offsetof(UFMBaseBoomboxComponent, PlaylistSettingsOverridesList) == 272, "Offset mismatch for UFMBaseBoomboxComponent::PlaylistSettingsOverridesList");
static_assert(offsetof(UFMBaseBoomboxComponent, AttenuationSettings) == 288, "Offset mismatch for UFMBaseBoomboxComponent::AttenuationSettings");
static_assert(offsetof(UFMBaseBoomboxComponent, CurrentState) == 296, "Offset mismatch for UFMBaseBoomboxComponent::CurrentState");
static_assert(offsetof(UFMBaseBoomboxComponent, MusicPlayer) == 336, "Offset mismatch for UFMBaseBoomboxComponent::MusicPlayer");
static_assert(offsetof(UFMBaseBoomboxComponent, AudioComponent) == 344, "Offset mismatch for UFMBaseBoomboxComponent::AudioComponent");
static_assert(offsetof(UFMBaseBoomboxComponent, CurrentPlaylist) == 384, "Offset mismatch for UFMBaseBoomboxComponent::CurrentPlaylist");
