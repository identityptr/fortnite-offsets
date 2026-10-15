/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamInLobbyRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamInLobbyRuntime.JamInLobbyEnableCondition
// Kind: ScriptStruct; super: none
struct FJamInLobbyEnableCondition
{
public:
    std::uint8_t TagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    FString RequiredCVar; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAlwaysDisableJamInLobby; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJamInLobbyEnableCondition, TagQuery) == 0, "Offset mismatch for FJamInLobbyEnableCondition::TagQuery");
static_assert(offsetof(FJamInLobbyEnableCondition, RequiredCVar) == 72, "Offset mismatch for FJamInLobbyEnableCondition::RequiredCVar");
static_assert(offsetof(FJamInLobbyEnableCondition, bAlwaysDisableJamInLobby) == 88, "Offset mismatch for FJamInLobbyEnableCondition::bAlwaysDisableJamInLobby");

// /Script/FMJamInLobbyRuntime.FortGameStateComponent_JamInLobbyPlayspaceManager
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_JamInLobbyPlayspaceManager
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TSoftClassPtr<void> PlayspaceClassToSpawn; // 0x00C8 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00F0
    void* JamInLobbyConfig; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameStateComponent_JamInLobbyPlayspaceManager, PlayspaceClassToSpawn) == 200, "Offset mismatch for UFortGameStateComponent_JamInLobbyPlayspaceManager::PlayspaceClassToSpawn");
static_assert(offsetof(UFortGameStateComponent_JamInLobbyPlayspaceManager, JamInLobbyConfig) == 264, "Offset mismatch for UFortGameStateComponent_JamInLobbyPlayspaceManager::JamInLobbyConfig");

// /Script/FMJamInLobbyRuntime.JamInLobbyConfig
// Kind: Class; super: PrimaryDataAsset
class UJamInLobbyConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> JamInLobbyEnabledConditions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamInLobbyConfig, JamInLobbyEnabledConditions) == 40, "Offset mismatch for UJamInLobbyConfig::JamInLobbyEnabledConditions");

// /Script/FMJamInLobbyRuntime.JamInLobbyControllerComponent_LoopOptions
// Kind: Class; super: SparksControllerComponent_SparksSongsEmoteOptions
class UJamInLobbyControllerComponent_LoopOptions
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CategoryNameLocker[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t CategoryNameAll[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t CategoryTitleLocker[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t CategoryTitleAll[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t EmoteWheelOverlay[0x20]; // 0x00E8 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> LoopTypeToIndexMapping; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CategoryTagLocker[0x4]; // 0x0118 (Size: 0x4, Type: StructProperty)
    std::uint8_t CategoryTagAll[0x1]; // 0x011C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamInLobbyControllerComponent_LoopOptions, CategoryNameLocker) == 192, "Offset mismatch for UJamInLobbyControllerComponent_LoopOptions::CategoryNameLocker");
static_assert(offsetof(UJamInLobbyControllerComponent_LoopOptions, CategoryNameAll) == 196, "Offset mismatch for UJamInLobbyControllerComponent_LoopOptions::CategoryNameAll");
static_assert(offsetof(UJamInLobbyControllerComponent_LoopOptions, CategoryTitleLocker) == 200, "Offset mismatch for UJamInLobbyControllerComponent_LoopOptions::CategoryTitleLocker");
static_assert(offsetof(UJamInLobbyControllerComponent_LoopOptions, CategoryTitleAll) == 216, "Offset mismatch for UJamInLobbyControllerComponent_LoopOptions::CategoryTitleAll");
static_assert(offsetof(UJamInLobbyControllerComponent_LoopOptions, EmoteWheelOverlay) == 232, "Offset mismatch for UJamInLobbyControllerComponent_LoopOptions::EmoteWheelOverlay");
static_assert(offsetof(UJamInLobbyControllerComponent_LoopOptions, LoopTypeToIndexMapping) == 264, "Offset mismatch for UJamInLobbyControllerComponent_LoopOptions::LoopTypeToIndexMapping");
static_assert(offsetof(UJamInLobbyControllerComponent_LoopOptions, CategoryTagLocker) == 280, "Offset mismatch for UJamInLobbyControllerComponent_LoopOptions::CategoryTagLocker");
static_assert(offsetof(UJamInLobbyControllerComponent_LoopOptions, CategoryTagAll) == 284, "Offset mismatch for UJamInLobbyControllerComponent_LoopOptions::CategoryTagAll");

// /Script/FMJamInLobbyRuntime.JamInLobbyPlayspace
// Kind: Class; super: JamPlayspace
class UJamInLobbyPlayspace
{
public:
    std::uint8_t Pad_0000[0x7A0]; // 0x0000
    void* JamAudioSource; // 0x07A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x07A8
    std::uint8_t OnKeyChangedEventHandle[0x1C]; // 0x07C8 (Size: 0x1C, Type: StructProperty)
    std::uint8_t OnModeChangedEventHandle[0x1C]; // 0x07E4 (Size: 0x1C, Type: StructProperty)
    std::uint8_t OnTempoChangedEventHandle[0x1]; // 0x0800 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamInLobbyPlayspace, JamAudioSource) == 1952, "Offset mismatch for UJamInLobbyPlayspace::JamAudioSource");
static_assert(offsetof(UJamInLobbyPlayspace, OnKeyChangedEventHandle) == 1992, "Offset mismatch for UJamInLobbyPlayspace::OnKeyChangedEventHandle");
static_assert(offsetof(UJamInLobbyPlayspace, OnModeChangedEventHandle) == 2020, "Offset mismatch for UJamInLobbyPlayspace::OnModeChangedEventHandle");
static_assert(offsetof(UJamInLobbyPlayspace, OnTempoChangedEventHandle) == 2048, "Offset mismatch for UJamInLobbyPlayspace::OnTempoChangedEventHandle");

// /Script/FMJamInLobbyRuntime.JamSessionComponent_MusicManager_Frontend
// Kind: Class; super: JamSessionComponent_MusicManager
class UJamSessionComponent_MusicManager_Frontend
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    FMulticastInlineDelegate OnLoopStarted; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLoopStopped; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnJamAudioSourceActiveStateChange; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x70]; // 0x0128
    FMulticastInlineDelegate OnEmoteMusicSettingChanged; // 0x0198 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x28]; // 0x01A8
    TArray<void*> MusicSlots; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyChangedEventHandle[0x1C]; // 0x01E0 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ModeChangedEventHandle[0x1C]; // 0x01FC (Size: 0x1C, Type: StructProperty)
    std::uint8_t TempoChangedEventHandle[0x1C]; // 0x0218 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ControlChangeEventHandle[0x74]; // 0x0234 (Size: 0x74, Type: StructProperty)
    float LocalPlayerGainParam; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float StandardGainParam; // 0x02AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentJamPrivacy; // 0x02B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x02B1
    void* MetasoundPlayer; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CurrentMusicClock; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* LoopedMusicClock; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x60]; // 0x02D0
    std::uint8_t MutingTags[0x20]; // 0x0330 (Size: 0x20, Type: StructProperty)
    std::uint8_t MetasoundStoppingTags[0x38]; // 0x0350 (Size: 0x38, Type: StructProperty)
    void* MusicTimeNetSyncHandler; // 0x0388 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, OnLoopStarted) == 248, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::OnLoopStarted");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, OnLoopStopped) == 264, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::OnLoopStopped");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, OnJamAudioSourceActiveStateChange) == 280, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::OnJamAudioSourceActiveStateChange");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, OnEmoteMusicSettingChanged) == 408, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::OnEmoteMusicSettingChanged");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, MusicSlots) == 464, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::MusicSlots");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, KeyChangedEventHandle) == 480, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::KeyChangedEventHandle");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, ModeChangedEventHandle) == 508, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::ModeChangedEventHandle");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, TempoChangedEventHandle) == 536, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::TempoChangedEventHandle");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, ControlChangeEventHandle) == 564, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::ControlChangeEventHandle");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, LocalPlayerGainParam) == 680, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::LocalPlayerGainParam");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, StandardGainParam) == 684, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::StandardGainParam");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, CurrentJamPrivacy) == 688, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::CurrentJamPrivacy");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, MetasoundPlayer) == 696, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::MetasoundPlayer");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, CurrentMusicClock) == 704, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::CurrentMusicClock");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, LoopedMusicClock) == 712, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::LoopedMusicClock");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, MutingTags) == 816, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::MutingTags");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, MetasoundStoppingTags) == 848, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::MetasoundStoppingTags");
static_assert(offsetof(UJamSessionComponent_MusicManager_Frontend, MusicTimeNetSyncHandler) == 904, "Offset mismatch for UJamSessionComponent_MusicManager_Frontend::MusicTimeNetSyncHandler");

// /Script/FMJamInLobbyRuntime.JamSessionComponent_PlayerManager_Frontend
// Kind: Class; super: JamSessionComponent_PlayerManager
class UJamSessionComponent_PlayerManager_Frontend
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPersistentPartyChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00D0
    std::uint8_t GameplayTagsToAdd_Server[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayTagsToAdd_Clients[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    TArray<void*> GameplayEffectsToApply; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnableComponents; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnsInSession; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OtherActorsInSession; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ServerOnlySpawnedComponents; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0170
    TArray<void*> ControllerChangedPawnDelegateListeners; // 0x0190 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamSessionComponent_PlayerManager_Frontend, OnPersistentPartyChanged) == 192, "Offset mismatch for UJamSessionComponent_PlayerManager_Frontend::OnPersistentPartyChanged");
static_assert(offsetof(UJamSessionComponent_PlayerManager_Frontend, GameplayTagsToAdd_Server) == 224, "Offset mismatch for UJamSessionComponent_PlayerManager_Frontend::GameplayTagsToAdd_Server");
static_assert(offsetof(UJamSessionComponent_PlayerManager_Frontend, GameplayTagsToAdd_Clients) == 256, "Offset mismatch for UJamSessionComponent_PlayerManager_Frontend::GameplayTagsToAdd_Clients");
static_assert(offsetof(UJamSessionComponent_PlayerManager_Frontend, GameplayEffectsToApply) == 288, "Offset mismatch for UJamSessionComponent_PlayerManager_Frontend::GameplayEffectsToApply");
static_assert(offsetof(UJamSessionComponent_PlayerManager_Frontend, SpawnableComponents) == 304, "Offset mismatch for UJamSessionComponent_PlayerManager_Frontend::SpawnableComponents");
static_assert(offsetof(UJamSessionComponent_PlayerManager_Frontend, PawnsInSession) == 320, "Offset mismatch for UJamSessionComponent_PlayerManager_Frontend::PawnsInSession");
static_assert(offsetof(UJamSessionComponent_PlayerManager_Frontend, OtherActorsInSession) == 336, "Offset mismatch for UJamSessionComponent_PlayerManager_Frontend::OtherActorsInSession");
static_assert(offsetof(UJamSessionComponent_PlayerManager_Frontend, ServerOnlySpawnedComponents) == 352, "Offset mismatch for UJamSessionComponent_PlayerManager_Frontend::ServerOnlySpawnedComponents");
static_assert(offsetof(UJamSessionComponent_PlayerManager_Frontend, ControllerChangedPawnDelegateListeners) == 400, "Offset mismatch for UJamSessionComponent_PlayerManager_Frontend::ControllerChangedPawnDelegateListeners");
