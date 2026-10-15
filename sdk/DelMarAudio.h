/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarAudio
 */
#pragma once
#include "Basic.h"

// /Script/DelMarAudio.DelMarEvent_AudioStateComponent
// Kind: ScriptStruct; super: none
struct FDelMarEvent_AudioStateComponent
{
public:
    TWeakObjectPtr<void> StateComponent; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarEvent_AudioStateComponent, StateComponent) == 0, "Offset mismatch for FDelMarEvent_AudioStateComponent::StateComponent");

// /Script/DelMarAudio.DelMarStateMix
// Kind: ScriptStruct; super: none
struct FDelMarStateMix
{
public:
    std::uint8_t MixStateTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ActorMixModifiers[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    void* ControlBusMix; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoDeactivate; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    float duration; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FallbackState[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarStateMix, MixStateTag) == 0, "Offset mismatch for FDelMarStateMix::MixStateTag");
static_assert(offsetof(FDelMarStateMix, ActorMixModifiers) == 8, "Offset mismatch for FDelMarStateMix::ActorMixModifiers");
static_assert(offsetof(FDelMarStateMix, ControlBusMix) == 32, "Offset mismatch for FDelMarStateMix::ControlBusMix");
static_assert(offsetof(FDelMarStateMix, bAutoDeactivate) == 40, "Offset mismatch for FDelMarStateMix::bAutoDeactivate");
static_assert(offsetof(FDelMarStateMix, duration) == 44, "Offset mismatch for FDelMarStateMix::duration");
static_assert(offsetof(FDelMarStateMix, FallbackState) == 48, "Offset mismatch for FDelMarStateMix::FallbackState");

// /Script/DelMarAudio.DelMarStateMixCollection
// Kind: ScriptStruct; super: none
struct FDelMarStateMixCollection
{
public:
    FName Group; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Mixes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarStateMixCollection, Group) == 0, "Offset mismatch for FDelMarStateMixCollection::Group");
static_assert(offsetof(FDelMarStateMixCollection, Mixes) == 8, "Offset mismatch for FDelMarStateMixCollection::Mixes");

// /Script/DelMarAudio.DelmarAudioVirtualizationSettings
// Kind: ScriptStruct; super: none
struct FDelmarAudioVirtualizationSettings
{
public:
    std::int32_t MaxNumPlayers; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumDistantPlayers; // 0x0004 (Size: 0x4, Type: IntProperty)
    float DistantPlayerThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelmarAudioVirtualizationSettings, MaxNumPlayers) == 0, "Offset mismatch for FDelmarAudioVirtualizationSettings::MaxNumPlayers");
static_assert(offsetof(FDelmarAudioVirtualizationSettings, MaxNumDistantPlayers) == 4, "Offset mismatch for FDelmarAudioVirtualizationSettings::MaxNumDistantPlayers");
static_assert(offsetof(FDelmarAudioVirtualizationSettings, DistantPlayerThreshold) == 8, "Offset mismatch for FDelmarAudioVirtualizationSettings::DistantPlayerThreshold");

// /Script/DelMarAudio.DelMarAudioAudioCookSettings
// Kind: Class; super: Object
class UDelMarAudioAudioCookSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t SoundWaveChannelThreshold; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> PathsToScan; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlatformQualitySettingsToExclude; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarAudioAudioCookSettings, SoundWaveChannelThreshold) == 40, "Offset mismatch for UDelMarAudioAudioCookSettings::SoundWaveChannelThreshold");
static_assert(offsetof(UDelMarAudioAudioCookSettings, PathsToScan) == 48, "Offset mismatch for UDelMarAudioAudioCookSettings::PathsToScan");
static_assert(offsetof(UDelMarAudioAudioCookSettings, PlatformQualitySettingsToExclude) == 64, "Offset mismatch for UDelMarAudioAudioCookSettings::PlatformQualitySettingsToExclude");

// /Script/DelMarAudio.DelMarAudioCheatManager
// Kind: Class; super: ChildCheatManager
class UDelMarAudioCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarAudio.DelMarAudioPassbyComponent
// Kind: Class; super: DelMarAudioProximityComponent
class UDelMarAudioPassbyComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* PassbySound; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* PassbyComponent; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnPassbyStart; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPassbyStop; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float MinRelativeSpeed; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float MinSpeedStopThresholdOffset; // 0x014C (Size: 0x4, Type: FloatProperty)
    float PassbyStartRadiusMax; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float PassbyStartRadiusMin; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float MinRelativeDirection; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float PassbyCooldown; // 0x015C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarAudioPassbyComponent, PassbySound) == 280, "Offset mismatch for UDelMarAudioPassbyComponent::PassbySound");
static_assert(offsetof(UDelMarAudioPassbyComponent, PassbyComponent) == 288, "Offset mismatch for UDelMarAudioPassbyComponent::PassbyComponent");
static_assert(offsetof(UDelMarAudioPassbyComponent, OnPassbyStart) == 296, "Offset mismatch for UDelMarAudioPassbyComponent::OnPassbyStart");
static_assert(offsetof(UDelMarAudioPassbyComponent, OnPassbyStop) == 312, "Offset mismatch for UDelMarAudioPassbyComponent::OnPassbyStop");
static_assert(offsetof(UDelMarAudioPassbyComponent, MinRelativeSpeed) == 328, "Offset mismatch for UDelMarAudioPassbyComponent::MinRelativeSpeed");
static_assert(offsetof(UDelMarAudioPassbyComponent, MinSpeedStopThresholdOffset) == 332, "Offset mismatch for UDelMarAudioPassbyComponent::MinSpeedStopThresholdOffset");
static_assert(offsetof(UDelMarAudioPassbyComponent, PassbyStartRadiusMax) == 336, "Offset mismatch for UDelMarAudioPassbyComponent::PassbyStartRadiusMax");
static_assert(offsetof(UDelMarAudioPassbyComponent, PassbyStartRadiusMin) == 340, "Offset mismatch for UDelMarAudioPassbyComponent::PassbyStartRadiusMin");
static_assert(offsetof(UDelMarAudioPassbyComponent, MinRelativeDirection) == 344, "Offset mismatch for UDelMarAudioPassbyComponent::MinRelativeDirection");
static_assert(offsetof(UDelMarAudioPassbyComponent, PassbyCooldown) == 348, "Offset mismatch for UDelMarAudioPassbyComponent::PassbyCooldown");

// /Script/DelMarAudio.DelMarAudioProximityComponent
// Kind: Class; super: DelMarAudioProximityComponentBase
class UDelMarAudioProximityComponent
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* ProximitySound; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* ProximityComponent; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    float ObjectScaleAttenuationModifier; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float FadeOutDuration; // 0x010C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarAudioProximityComponent, ProximitySound) == 248, "Offset mismatch for UDelMarAudioProximityComponent::ProximitySound");
static_assert(offsetof(UDelMarAudioProximityComponent, ProximityComponent) == 256, "Offset mismatch for UDelMarAudioProximityComponent::ProximityComponent");
static_assert(offsetof(UDelMarAudioProximityComponent, ObjectScaleAttenuationModifier) == 264, "Offset mismatch for UDelMarAudioProximityComponent::ObjectScaleAttenuationModifier");
static_assert(offsetof(UDelMarAudioProximityComponent, FadeOutDuration) == 268, "Offset mismatch for UDelMarAudioProximityComponent::FadeOutDuration");

// /Script/DelMarAudio.DelMarAudioProximityComponentBase
// Kind: Class; super: ActorComponent
class UDelMarAudioProximityComponentBase
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnProximityStart; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityStop; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bProximityActive; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x00E1
    void* Subsystem; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarAudioProximityComponentBase, OnProximityStart) == 192, "Offset mismatch for UDelMarAudioProximityComponentBase::OnProximityStart");
static_assert(offsetof(UDelMarAudioProximityComponentBase, OnProximityStop) == 208, "Offset mismatch for UDelMarAudioProximityComponentBase::OnProximityStop");
static_assert(offsetof(UDelMarAudioProximityComponentBase, bProximityActive) == 224, "Offset mismatch for UDelMarAudioProximityComponentBase::bProximityActive");
static_assert(offsetof(UDelMarAudioProximityComponentBase, Subsystem) == 240, "Offset mismatch for UDelMarAudioProximityComponentBase::Subsystem");

// /Script/DelMarAudio.DelMarAudioProximitySubsystem
// Kind: Class; super: TickableWorldSubsystem
class UDelMarAudioProximitySubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarAudio.DelMarAudioStateMixerSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UDelMarAudioStateMixerSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> AvailableMixes; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ActiveMixes; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TemporaryMixes; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarAudioStateMixerSubsystem, AvailableMixes) == 72, "Offset mismatch for UDelMarAudioStateMixerSubsystem::AvailableMixes");
static_assert(offsetof(UDelMarAudioStateMixerSubsystem, ActiveMixes) == 88, "Offset mismatch for UDelMarAudioStateMixerSubsystem::ActiveMixes");
static_assert(offsetof(UDelMarAudioStateMixerSubsystem, TemporaryMixes) == 104, "Offset mismatch for UDelMarAudioStateMixerSubsystem::TemporaryMixes");

// /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent
// Kind: Class; super: PlayspaceComponent
class UDelMarAudioStatePlayspaceComponent
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    FName MixGroupName; // 0x0180 (Size: 0x8, Type: NameProperty)
    TArray<void*> Mixes; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    float CloseVehicleDistanceThreshold; // 0x0198 (Size: 0x4, Type: FloatProperty)
    std::int32_t CloseVehiclesPackRacingThreshold; // 0x019C (Size: 0x4, Type: IntProperty)
    void* UserMusicSettingBus; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* UserMusicMix; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01B0
    void* MixSubsystem; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* VehicleManager; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarAudioStatePlayspaceComponent, MixGroupName) == 384, "Offset mismatch for UDelMarAudioStatePlayspaceComponent::MixGroupName");
static_assert(offsetof(UDelMarAudioStatePlayspaceComponent, Mixes) == 392, "Offset mismatch for UDelMarAudioStatePlayspaceComponent::Mixes");
static_assert(offsetof(UDelMarAudioStatePlayspaceComponent, CloseVehicleDistanceThreshold) == 408, "Offset mismatch for UDelMarAudioStatePlayspaceComponent::CloseVehicleDistanceThreshold");
static_assert(offsetof(UDelMarAudioStatePlayspaceComponent, CloseVehiclesPackRacingThreshold) == 412, "Offset mismatch for UDelMarAudioStatePlayspaceComponent::CloseVehiclesPackRacingThreshold");
static_assert(offsetof(UDelMarAudioStatePlayspaceComponent, UserMusicSettingBus) == 416, "Offset mismatch for UDelMarAudioStatePlayspaceComponent::UserMusicSettingBus");
static_assert(offsetof(UDelMarAudioStatePlayspaceComponent, UserMusicMix) == 424, "Offset mismatch for UDelMarAudioStatePlayspaceComponent::UserMusicMix");
static_assert(offsetof(UDelMarAudioStatePlayspaceComponent, MixSubsystem) == 440, "Offset mismatch for UDelMarAudioStatePlayspaceComponent::MixSubsystem");
static_assert(offsetof(UDelMarAudioStatePlayspaceComponent, VehicleManager) == 448, "Offset mismatch for UDelMarAudioStatePlayspaceComponent::VehicleManager");

// /Script/DelMarAudio.DelMarAudioVirtualizationSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UDelMarAudioVirtualizationSubsystem
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TMap<void*, void*> PlayerNumMap; // 0x0058 (Size: 0x10, Type: MapProperty)
    std::int32_t MaxNumPlayers; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxDistantPlayers; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t DistantPlayerThreshold; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0074
    void* VehicleManager; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarAudioVirtualizationSubsystem, PlayerNumMap) == 88, "Offset mismatch for UDelMarAudioVirtualizationSubsystem::PlayerNumMap");
static_assert(offsetof(UDelMarAudioVirtualizationSubsystem, MaxNumPlayers) == 104, "Offset mismatch for UDelMarAudioVirtualizationSubsystem::MaxNumPlayers");
static_assert(offsetof(UDelMarAudioVirtualizationSubsystem, MaxDistantPlayers) == 108, "Offset mismatch for UDelMarAudioVirtualizationSubsystem::MaxDistantPlayers");
static_assert(offsetof(UDelMarAudioVirtualizationSubsystem, DistantPlayerThreshold) == 112, "Offset mismatch for UDelMarAudioVirtualizationSubsystem::DistantPlayerThreshold");
static_assert(offsetof(UDelMarAudioVirtualizationSubsystem, VehicleManager) == 120, "Offset mismatch for UDelMarAudioVirtualizationSubsystem::VehicleManager");

// /Script/DelMarAudio.DelMarCrowdAudioManager
// Kind: Class; super: PlayspaceComponent
class UDelMarCrowdAudioManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CachedStateComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RaceModeTag[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarCrowdAudioManager, CachedStateComponent) == 192, "Offset mismatch for UDelMarCrowdAudioManager::CachedStateComponent");
static_assert(offsetof(UDelMarCrowdAudioManager, RaceModeTag) == 200, "Offset mismatch for UDelMarCrowdAudioManager::RaceModeTag");

// /Script/DelMarAudio.DelMarRaceMusicManager
// Kind: Class; super: PlayspaceComponent
class UDelMarRaceMusicManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t RaceModeTag[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    void* MusicPlayer; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* MusicPlayer_LowSpec; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MusicEventSystemTag[0x4]; // 0x00D8 (Size: 0x4, Type: StructProperty)
    float FadeInDuration; // 0x00DC (Size: 0x4, Type: FloatProperty)
    float FadeOutDuration; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float StartLineFadeOutDurtation; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    void* PreRaceMusic; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* PostRaceMusic; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* MainMusicComponent; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* StartLineComponent; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultPlaylist[0x20]; // 0x0108 (Size: 0x20, Type: SoftObjectProperty)
    void* Playlist; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Songs; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PlayingSong[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    void* CachedStateComponent; // 0x0160 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarRaceMusicManager, RaceModeTag) == 192, "Offset mismatch for UDelMarRaceMusicManager::RaceModeTag");
static_assert(offsetof(UDelMarRaceMusicManager, MusicPlayer) == 200, "Offset mismatch for UDelMarRaceMusicManager::MusicPlayer");
static_assert(offsetof(UDelMarRaceMusicManager, MusicPlayer_LowSpec) == 208, "Offset mismatch for UDelMarRaceMusicManager::MusicPlayer_LowSpec");
static_assert(offsetof(UDelMarRaceMusicManager, MusicEventSystemTag) == 216, "Offset mismatch for UDelMarRaceMusicManager::MusicEventSystemTag");
static_assert(offsetof(UDelMarRaceMusicManager, FadeInDuration) == 220, "Offset mismatch for UDelMarRaceMusicManager::FadeInDuration");
static_assert(offsetof(UDelMarRaceMusicManager, FadeOutDuration) == 224, "Offset mismatch for UDelMarRaceMusicManager::FadeOutDuration");
static_assert(offsetof(UDelMarRaceMusicManager, StartLineFadeOutDurtation) == 228, "Offset mismatch for UDelMarRaceMusicManager::StartLineFadeOutDurtation");
static_assert(offsetof(UDelMarRaceMusicManager, PreRaceMusic) == 232, "Offset mismatch for UDelMarRaceMusicManager::PreRaceMusic");
static_assert(offsetof(UDelMarRaceMusicManager, PostRaceMusic) == 240, "Offset mismatch for UDelMarRaceMusicManager::PostRaceMusic");
static_assert(offsetof(UDelMarRaceMusicManager, MainMusicComponent) == 248, "Offset mismatch for UDelMarRaceMusicManager::MainMusicComponent");
static_assert(offsetof(UDelMarRaceMusicManager, StartLineComponent) == 256, "Offset mismatch for UDelMarRaceMusicManager::StartLineComponent");
static_assert(offsetof(UDelMarRaceMusicManager, DefaultPlaylist) == 264, "Offset mismatch for UDelMarRaceMusicManager::DefaultPlaylist");
static_assert(offsetof(UDelMarRaceMusicManager, Playlist) == 296, "Offset mismatch for UDelMarRaceMusicManager::Playlist");
static_assert(offsetof(UDelMarRaceMusicManager, Songs) == 304, "Offset mismatch for UDelMarRaceMusicManager::Songs");
static_assert(offsetof(UDelMarRaceMusicManager, PlayingSong) == 320, "Offset mismatch for UDelMarRaceMusicManager::PlayingSong");
static_assert(offsetof(UDelMarRaceMusicManager, CachedStateComponent) == 352, "Offset mismatch for UDelMarRaceMusicManager::CachedStateComponent");

// /Script/DelMarAudio.DelMarRaceMusicSettingsActor
// Kind: Class; super: Actor
class UDelMarRaceMusicSettingsActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* Playlist; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* PreRaceMusic; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* PostRaceMusic; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableMusic; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAudioAnalysis; // 0x0289 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarRaceMusicSettingsActor, Playlist) == 624, "Offset mismatch for UDelMarRaceMusicSettingsActor::Playlist");
static_assert(offsetof(UDelMarRaceMusicSettingsActor, PreRaceMusic) == 632, "Offset mismatch for UDelMarRaceMusicSettingsActor::PreRaceMusic");
static_assert(offsetof(UDelMarRaceMusicSettingsActor, PostRaceMusic) == 640, "Offset mismatch for UDelMarRaceMusicSettingsActor::PostRaceMusic");
static_assert(offsetof(UDelMarRaceMusicSettingsActor, bEnableMusic) == 648, "Offset mismatch for UDelMarRaceMusicSettingsActor::bEnableMusic");
static_assert(offsetof(UDelMarRaceMusicSettingsActor, bEnableAudioAnalysis) == 649, "Offset mismatch for UDelMarRaceMusicSettingsActor::bEnableAudioAnalysis");
