/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_AudioPlayerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerData
// Kind: ScriptStruct; super: none
struct FCreativeAudioPlayerData
{
public:
    std::uint8_t NetID[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    void* Pawn; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float ServerAudioStartTime; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCreativeAudioPlayerData, NetID) == 0, "Offset mismatch for FCreativeAudioPlayerData::NetID");
static_assert(offsetof(FCreativeAudioPlayerData, Pawn) == 48, "Offset mismatch for FCreativeAudioPlayerData::Pawn");
static_assert(offsetof(FCreativeAudioPlayerData, ServerAudioStartTime) == 56, "Offset mismatch for FCreativeAudioPlayerData::ServerAudioStartTime");

// /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerMusicClockParams
// Kind: ScriptStruct; super: none
struct FCreativeAudioPlayerMusicClockParams
{
public:
    std::uint8_t bConnectToMetaSoundClock; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRegisterWithMusicEventSubsystem; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t MusicEventSubsystemEventTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t MusicEventSubsystemBehaviorTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCreativeAudioPlayerMusicClockParams, bConnectToMetaSoundClock) == 0, "Offset mismatch for FCreativeAudioPlayerMusicClockParams::bConnectToMetaSoundClock");
static_assert(offsetof(FCreativeAudioPlayerMusicClockParams, bRegisterWithMusicEventSubsystem) == 1, "Offset mismatch for FCreativeAudioPlayerMusicClockParams::bRegisterWithMusicEventSubsystem");
static_assert(offsetof(FCreativeAudioPlayerMusicClockParams, MusicEventSubsystemEventTag) == 4, "Offset mismatch for FCreativeAudioPlayerMusicClockParams::MusicEventSubsystemEventTag");
static_assert(offsetof(FCreativeAudioPlayerMusicClockParams, MusicEventSubsystemBehaviorTags) == 8, "Offset mismatch for FCreativeAudioPlayerMusicClockParams::MusicEventSubsystemBehaviorTags");

// /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent
// Kind: Class; super: ActorComponent
class UCreativeAudioComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float StereoSpreadScaleFactor; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    FMulticastInlineDelegate OnAudioFinished; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x20]; // 0x00E0
    float FadeInDuration; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float FadeOutDuration; // 0x0104 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSyncPlayerAudio; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRestartAudioOnPlay; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoopAudio; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t CanBeHeardBy; // 0x010B (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlayLocation; // 0x010C (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoplayOptions; // 0x010D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2A]; // 0x010E
    void* FortMinigameProgressComponent; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* CreativeProxyManager; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    void* CreativeRegisteredPlayersManagerComponent; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    void* AudioComponent; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    void* MusicClockComponent; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PlayerAudioComponents; // 0x0160 (Size: 0x10, Type: MapProperty)
    void* ClientCachedProxy; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    void* LastSoundPlayed; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ServerInstigatorData[0x40]; // 0x0180 (Size: 0x40, Type: StructProperty)
    std::uint8_t bEnabled; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x27]; // 0x01C1
    std::uint8_t bAudioLoaded; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x01E9
    std::uint8_t CachedInstigatorData[0x40]; // 0x01F0 (Size: 0x40, Type: StructProperty)
    TArray<void*> RegisteredPlayerIds; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NonRegisteredPlayerIds; // 0x0240 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentAutoplayState; // 0x0250 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCreativeAudioComponent, StereoSpreadScaleFactor) == 200, "Offset mismatch for UCreativeAudioComponent::StereoSpreadScaleFactor");
static_assert(offsetof(UCreativeAudioComponent, OnAudioFinished) == 208, "Offset mismatch for UCreativeAudioComponent::OnAudioFinished");
static_assert(offsetof(UCreativeAudioComponent, FadeInDuration) == 256, "Offset mismatch for UCreativeAudioComponent::FadeInDuration");
static_assert(offsetof(UCreativeAudioComponent, FadeOutDuration) == 260, "Offset mismatch for UCreativeAudioComponent::FadeOutDuration");
static_assert(offsetof(UCreativeAudioComponent, bSyncPlayerAudio) == 264, "Offset mismatch for UCreativeAudioComponent::bSyncPlayerAudio");
static_assert(offsetof(UCreativeAudioComponent, bRestartAudioOnPlay) == 265, "Offset mismatch for UCreativeAudioComponent::bRestartAudioOnPlay");
static_assert(offsetof(UCreativeAudioComponent, bLoopAudio) == 266, "Offset mismatch for UCreativeAudioComponent::bLoopAudio");
static_assert(offsetof(UCreativeAudioComponent, CanBeHeardBy) == 267, "Offset mismatch for UCreativeAudioComponent::CanBeHeardBy");
static_assert(offsetof(UCreativeAudioComponent, PlayLocation) == 268, "Offset mismatch for UCreativeAudioComponent::PlayLocation");
static_assert(offsetof(UCreativeAudioComponent, AutoplayOptions) == 269, "Offset mismatch for UCreativeAudioComponent::AutoplayOptions");
static_assert(offsetof(UCreativeAudioComponent, FortMinigameProgressComponent) == 312, "Offset mismatch for UCreativeAudioComponent::FortMinigameProgressComponent");
static_assert(offsetof(UCreativeAudioComponent, CreativeProxyManager) == 320, "Offset mismatch for UCreativeAudioComponent::CreativeProxyManager");
static_assert(offsetof(UCreativeAudioComponent, CreativeRegisteredPlayersManagerComponent) == 328, "Offset mismatch for UCreativeAudioComponent::CreativeRegisteredPlayersManagerComponent");
static_assert(offsetof(UCreativeAudioComponent, AudioComponent) == 336, "Offset mismatch for UCreativeAudioComponent::AudioComponent");
static_assert(offsetof(UCreativeAudioComponent, MusicClockComponent) == 344, "Offset mismatch for UCreativeAudioComponent::MusicClockComponent");
static_assert(offsetof(UCreativeAudioComponent, PlayerAudioComponents) == 352, "Offset mismatch for UCreativeAudioComponent::PlayerAudioComponents");
static_assert(offsetof(UCreativeAudioComponent, ClientCachedProxy) == 368, "Offset mismatch for UCreativeAudioComponent::ClientCachedProxy");
static_assert(offsetof(UCreativeAudioComponent, LastSoundPlayed) == 376, "Offset mismatch for UCreativeAudioComponent::LastSoundPlayed");
static_assert(offsetof(UCreativeAudioComponent, ServerInstigatorData) == 384, "Offset mismatch for UCreativeAudioComponent::ServerInstigatorData");
static_assert(offsetof(UCreativeAudioComponent, bEnabled) == 448, "Offset mismatch for UCreativeAudioComponent::bEnabled");
static_assert(offsetof(UCreativeAudioComponent, bAudioLoaded) == 488, "Offset mismatch for UCreativeAudioComponent::bAudioLoaded");
static_assert(offsetof(UCreativeAudioComponent, CachedInstigatorData) == 496, "Offset mismatch for UCreativeAudioComponent::CachedInstigatorData");
static_assert(offsetof(UCreativeAudioComponent, RegisteredPlayerIds) == 560, "Offset mismatch for UCreativeAudioComponent::RegisteredPlayerIds");
static_assert(offsetof(UCreativeAudioComponent, NonRegisteredPlayerIds) == 576, "Offset mismatch for UCreativeAudioComponent::NonRegisteredPlayerIds");
static_assert(offsetof(UCreativeAudioComponent, CurrentAutoplayState) == 592, "Offset mismatch for UCreativeAudioComponent::CurrentAutoplayState");

// /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerReplicationProxy
// Kind: Class; super: CreativePlayerReplicationProxy
class UCreativeAudioPlayerReplicationProxy
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    std::uint8_t InstigatorData[0x1]; // 0x0280 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCreativeAudioPlayerReplicationProxy, InstigatorData) == 640, "Offset mismatch for UCreativeAudioPlayerReplicationProxy::InstigatorData");
